#!/usr/bin/env python3
"""Optional shallow AST extraction; requires a locally built grammar and pinned binding."""
from __future__ import annotations
import argparse
import json
from pathlib import Path
import sys
from typing import Any
import warnings
from common import digest, read_source
warnings.filterwarnings('ignore', category=FutureWarning)
from tree_sitter import Language, Parser

def load_parser(so_path: Path) -> Parser:
    lang = Language(str(so_path), "daml")
    p = Parser()
    p.set_language(lang)
    return p


# ------------------------------------------------------------------ helpers

def txt(node, src: bytes) -> str:
    return src[node.start_byte:node.end_byte].decode("utf8", errors="replace")


def line1(node) -> int:
    return node.start_point[0] + 1


def line_end1(node) -> int:
    return node.end_point[0] + 1


def field(node, name: str):
    return node.child_by_field_name(name)


def field_txt(node, name: str, src: bytes) -> str | None:
    f = field(node, name)
    return txt(f, src).strip() if f else None


def walk(node, want: set[str]):
    """Yield descendants whose .type in want (dfs pre-order)."""
    if node.type in want:
        yield node
    for ch in node.children:
        yield from walk(ch, want)


CALL_TYPES = {
    "exercise": "exercise_call",
    "fetch": "fetch_call",
    "lookup": "lookup_call",
    "create": "create_call",
    "archive": "archive_call",
    "get_time": "get_time_call",
    "unsafe_cast": "unsafe_cast_call",
    "from_some": "from_some_call",
    "qualified": "qualified_call",
}


# ------------------------------------------------------------------ per-node extractors

def extract_field_block(fb_node, src: bytes) -> list[dict[str, str]]:
    if fb_node is None:
        return []
    out = []
    for fd in fb_node.children:
        if fd.type != "field_decl":
            continue
        names = [txt(c, src) for c in fd.children if c.type == "identifier"]
        tbl = field(fd, "type")
        typ = txt(tbl, src).strip() if tbl else "?"
        for n in names:
            out.append({"name": n, "type": typ})
    return out


def extract_body_calls(body_node, src: bytes) -> dict[str, list[dict[str, Any]]]:
    hits: dict[str, list[dict[str, Any]]] = {k: [] for k in CALL_TYPES}
    if body_node is None:
        return hits
    for kind, tsname in CALL_TYPES.items():
        for n in walk(body_node, {tsname}):
            hits[kind].append({
                "line": line1(n),
                "text": txt(n, src),
            })
    return hits


def extract_choice(cn, src: bytes) -> dict[str, Any]:
    mod = field(cn, "modifier")
    name = field_txt(cn, "name", src) or "?"
    fields = extract_field_block(field(cn, "fields"), src)
    result_type = field_txt(cn, "result_type", src)
    controller = field_txt(cn, "controller", src)
    observer_extra = field_txt(cn, "observer_extra", src)
    body = field(cn, "body")
    body_calls = extract_body_calls(body, src)
    return {
        "name": name,
        "modifier": txt(mod, src).strip() if mod else None,
        "line_start": line1(cn),
        "line_end": line_end1(cn),
        "result_type": result_type,
        "fields": fields,
        "controller": controller,
        "observer_extra": observer_extra,
        "body_calls": body_calls,
        "body_text_first_lines": _first_body_lines(body, src, n=4),
    }


def _first_body_lines(body_node, src: bytes, n: int = 4) -> str:
    if body_node is None:
        return ""
    t = txt(body_node, src)
    lines = [ln for ln in t.split("\n") if ln.strip()][:n]
    return "\n".join(lines)


def extract_template(tn, src: bytes) -> dict[str, Any]:
    name = field_txt(tn, "name", src) or "?"
    fields = extract_field_block(field(tn, "fields"), src)
    body = field(tn, "body")

    sig = obs = ens = key_ = maint = None
    choices: list[dict[str, Any]] = []
    implements: list[str] = []
    ifaces: list[dict[str, str]] = []

    if body:
        for ch in body.children:
            if ch.type == "signatory_clause":
                sig = field_txt(ch, "body", src)
            elif ch.type == "observer_clause":
                obs = field_txt(ch, "body", src)
            elif ch.type == "ensure_clause":
                ens = field_txt(ch, "body", src)
            elif ch.type == "key_clause":
                key_ = field_txt(ch, "body", src)
            elif ch.type == "maintainer_clause":
                maint = field_txt(ch, "body", src)
            elif ch.type == "choice_decl":
                choices.append(extract_choice(ch, src))
            elif ch.type == "controller_can_clause":
                choices.append({
                    "name": "<legacy-can-block>",
                    "modifier": None,
                    "line_start": line1(ch),
                    "line_end": line_end1(ch),
                    "controller": field_txt(ch, "parties", src),
                    "body_calls": extract_body_calls(field(ch, "body"), src),
                    "legacy": True,
                })
            elif ch.type == "implements_clause":
                implements.append(field_txt(ch, "interface", src) or "?")
            elif ch.type == "interface_instance_clause":
                ifaces.append({
                    "interface": field_txt(ch, "interface", src) or "?",
                    "template": field_txt(ch, "template", src) or "?",
                })

    return {
        "name": name,
        "line_start": line1(tn),
        "line_end": line_end1(tn),
        "fields": fields,
        "signatory": sig,
        "observer": obs,
        "ensure": ens,
        "key": key_,
        "maintainer": maint,
        "choices": choices,
        "implements": implements,
        "interface_instances": ifaces,
    }


def extract_interface(inode, src: bytes) -> dict[str, Any]:
    name = field_txt(inode, "name", src) or "?"
    body = field(inode, "body")
    viewtype = None
    choices = []
    if body:
        for ch in body.children:
            if ch.type == "viewtype_decl":
                viewtype = field_txt(ch, "type", src)
            elif ch.type == "choice_decl":
                choices.append(extract_choice(ch, src))
    return {
        "name": name,
        "line_start": line1(inode),
        "line_end": line_end1(inode),
        "viewtype": viewtype,
        "choices": choices,
    }


def extract_module_name(root, src: bytes) -> str | None:
    for ch in root.children:
        if ch.type == "module_header":
            nm = field(ch, "name")
            if nm:
                return txt(nm, src).strip()
    return None


def extract_imports(root, src: bytes) -> list[dict[str, str | None]]:
    out = []
    for ch in root.children:
        if ch.type != "import_decl":
            continue
        nm = field(ch, "name")
        al = field(ch, "alias")
        out.append({
            "name": txt(nm, src).strip() if nm else "?",
            "alias": txt(al, src).strip() if al else None,
        })
    return out


def count_errors(node) -> int:
    n = 0
    if node.type == "ERROR" or node.is_missing:
        n = 1
    for c in node.children:
        n += count_errors(c)
    return n



def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('scan', type=Path, help='Output directory from scripts/scan.py')
    ap.add_argument('--so', type=Path, required=True, help='Trusted locally built grammar library')
    ap.add_argument('--out', type=Path, required=True)
    args = ap.parse_args()
    summary = json.loads((args.scan/'summary.json').read_text())
    root = Path(summary['project']).resolve(strict=True)
    if args.out.resolve().is_relative_to(root): raise ValueError('output must be outside target')
    parser = load_parser(args.so.resolve(strict=True))
    total, errors = 0, 0
    with args.out.open('x', encoding='utf-8') as output:
        for line in (args.scan/'inventory.jsonl').read_text().splitlines():
            entry = json.loads(line)
            data = read_source(root, entry['file'], summary['max_bytes'])
            if digest(data) != entry['sha256']: raise ValueError('stale source: '+entry['file'])
            tree = parser.parse(data)
            node = tree.root_node
            record = {'file':entry['file'], 'sha256':entry['sha256'],
                'module':extract_module_name(node,data), 'imports':extract_imports(node,data),
                'templates':[extract_template(n,data) for n in node.children if n.type=='template_decl'],
                'interfaces':[extract_interface(n,data) for n in node.children if n.type=='interface_decl'],
                'parse_errors':count_errors(node),
                'coverage':'Experimental shallow grammar; incomplete even when parse_errors is zero.'}
            output.write(json.dumps(record, ensure_ascii=False)+'\n')
            errors += record['parse_errors']; total += 1
    print(json.dumps({'files':total,'parse_errors':errors,'output':str(args.out)}))
    return 0

if __name__=='__main__':
    try: sys.exit(main())
    except (OSError, ValueError, KeyError, RecursionError) as exc:
        print('ERROR (partial output may exist): '+str(exc),file=sys.stderr); sys.exit(2)
