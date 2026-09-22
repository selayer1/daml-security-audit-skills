#!/usr/bin/env python3
"""Offline lexical inventory and review queue. Never executes target code."""
from __future__ import annotations
import argparse
from collections import Counter
import json
from pathlib import Path
import re
import sys
import tempfile
from common import MAX_BYTES, SKIP, TEST, digest, mask_daml, read_source, walk_sources

# These are review anchors, not vulnerability detectors or severity assignments.
SIGNALS = [
    ('A2', 'authorization', r'\bcontroller\b', 'Resolve controllers and the authorization of nested consequences.'),
    ('A3', 'authorization', r'\bnonconsuming\s+choice\b', 'Trace repeatable effects and any consumed replay guard.'),
    ('A4', 'authorization', r'\bContractId\b', 'Trace contract identity and issuer/DSO checks where this value is used.'),
    ('P1', 'privacy', r'\b(signatory|observer)\b', 'Compare stakeholder visibility and authority with business intent.'),
    ('P3', 'privacy', r'\b(fetch|fetchByKey|lookupByKey)\b', 'Trace actual recipients and observable outputs; do not infer a leak from a fetch alone.'),
    ('K1', 'keys', r'\b(key|maintainer|lookupByKey|fetchByKey|exerciseByKey)\b', 'Establish supported key semantics for the exact SDK and deployment.'),
    ('T1', 'atomicity', r'\bgetTime\b', 'Check ledger-time assumptions, boundary conditions and retries.'),
    ('T3', 'atomicity', r'\b(Decimal|Numeric)\b|(?<![\w/])/(?![/=])', 'Check signedness, bounds, denominators and conservation after rounding.'),
    ('T6', 'atomicity', r'\b(emitCommands|deduplication|commandId)\b', 'Check durable business replay protection and stale state handling.'),
    ('I1', 'interfaces', r'\b(unsafeCast|fromInterfaceUnsafe|fromSome\w*|unsafeFromOptional)\b', 'Trace partial conversions and reachable failures.'),
    ('I4', 'interfaces', r'\b(interface|implements|viewtype|exception)\b', 'Review backing templates, views and version-specific upgrade compatibility.'),
    ('C4', 'topology', r'\b(expectedDso|dso|HasCheckedFetch|fetchChecked|disclosedContracts)\b', 'Verify trust-domain binding and inspect helper implementations.'),
    ('C1', 'topology', r'\b(reassign\w*|synchronizer\w*|vetting|actAs|readAs)\b', 'Follow deployment and off-ledger trust boundaries.')
]
COMPILED = [(a,b,re.compile(c),d) for a,b,c,d in SIGNALS]
DECL = re.compile(r'^\s*(?:(nonconsuming|preconsuming|postconsuming)\s+)?(template|interface|choice)\s+([A-Z][\w\']*)', re.M)

def inspect_source(relative, data):
    source = data.decode('utf-8')
    masked, incomplete = mask_daml(source)
    lines = masked.splitlines()
    symbols = []
    for match in DECL.finditer(masked):
        # \s may include preceding newlines; count from the keyword itself.
        line = masked.count('\n', 0, match.start(2)) + 1
        symbols.append({'kind': match[2], 'name': match[3], 'line': line, 'modifier': match[1]})
    candidates = []
    for i, line in enumerate(lines, 1):
        for rule, topic, regex, question in COMPILED:
            if regex.search(line):
                identity = f'{relative}:{i}:{rule}'
                candidates.append({'id': digest(identity.encode())[:16], 'file': relative,
                    'line': i, 'rule': rule, 'topic': topic, 'question': question,
                    'status': 'CANDIDATE'})
    module = re.search(r'^\s*module\s+([\w.]+)', masked, re.M)
    imports = re.findall(r'^\s*import\s+(?:qualified\s+)?([A-Z][\w.]*)', masked, re.M)
    return {'file': relative, 'sha256': digest(data), 'bytes': len(data), 'lines': len(lines),
        'test_hint': bool(TEST.search(relative)), 'module': module[1] if module else None,
        'imports': imports, 'symbols': symbols, 'lexical_warning': incomplete}, candidates

def scan(project, out, exclude_tests=False, max_files=20000, max_bytes=MAX_BYTES):
    project = project.resolve(strict=True)
    if not project.is_dir(): raise ValueError('project must be a directory')
    out = out.resolve()
    if out.is_relative_to(project): raise ValueError('output must be outside the project')
    out.mkdir(parents=True, exist_ok=False)
    files, candidates, skipped, manifests = [], [], [], []
    visited = 0
    for relative in walk_sources(project):
        visited += 1
        if visited > max_files:
            raise ValueError('file limit exceeded; choose a narrower project directory or increase --max-files')
        if exclude_tests and TEST.search(relative):
            skipped.append({'file': relative, 'reason': 'test path excluded explicitly'})
            continue
        try:
            data = read_source(project, relative, max_bytes)
            if relative.endswith('daml.yaml'):
                sdk = re.search(r'^sdk-version:\s*[\'"]?([^\s\'"#]+)', data.decode('utf-8'), re.M)
                manifests.append({'file': relative, 'sha256': digest(data), 'sdk_version': sdk[1] if sdk else None})
                continue
            record, hits = inspect_source(relative, data)
            files.append(record); candidates.extend(hits)
        except (OSError, UnicodeError, ValueError) as exc:
            skipped.append({'file': relative, 'reason': str(exc)})
    counts = dict(sorted(Counter(c['topic'] for c in candidates).items()))
    summary = {'schema_version': 1, 'engine': 'lexical-heuristics', 'project': str(project),
        'source_files': len(files), 'source_bytes': sum(f['bytes'] for f in files),
        'symbols': dict(Counter(s['kind'] for f in files for s in f['symbols'])),
        'candidate_count': len(candidates), 'by_topic': counts,
        'lexical_warnings': [f['file'] for f in files if f['lexical_warning']],
        'skipped': skipped, 'excluded_directory_names': sorted(SKIP), 'manifests': manifests,
        'max_bytes': max_bytes, 'exclude_tests': exclude_tests,
        'coverage_note': 'Daml lexical anchors only; no type checking, complete call graph, off-ledger/config scan or security verdict.'}
    for name, records in [('inventory', files), ('candidates', candidates)]:
        (out / (name+'.jsonl')).write_text(''.join(json.dumps(r, ensure_ascii=False)+'\n' for r in records), encoding='utf-8')
    (out/'summary.json').write_text(json.dumps(summary, ensure_ascii=False, indent=2)+'\n', encoding='utf-8')
    overview = ['# Daml/Canton review queue', '', 'These are review candidates, not confirmed vulnerabilities.',
        '', f"Files: {len(files)}; lexical anchors: {len(candidates)}; skipped files: {len(skipped)}.",
        '', '## Topic counts', ''] + [f'- {k}: {v}' for k,v in counts.items()]
    overview += ['', 'Read summary.json for scope gaps, then use context.py for bounded source excerpts.',
        'Topology, runtime SDK semantics, dependencies and off-ledger callers require focused manual review.',
        'No candidates does not establish safety.']
    (out/'overview.md').write_text('\n'.join(overview)+'\n', encoding='utf-8')
    return summary

def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('project', type=Path)
    ap.add_argument('--out', type=Path, help='New directory outside the target; defaults to a fresh temporary directory')
    ap.add_argument('--exclude-tests', action='store_true')
    ap.add_argument('--max-files', type=int, default=20000)
    ap.add_argument('--max-bytes', type=int, default=MAX_BYTES)
    args = ap.parse_args()
    if args.max_files < 1 or args.max_bytes < 1: ap.error('limits must be positive')
    out = args.out or Path(tempfile.mkdtemp(prefix='canton-daml-audit-'))/'scan'
    try:
        summary = scan(args.project, out, args.exclude_tests, args.max_files, args.max_bytes)
    except (ValueError, OSError) as exc:
        print(f'ERROR: {exc}. Any partial output is incomplete.', file=sys.stderr); return 2
    print(json.dumps({'output': str(out.resolve()), 'files': summary['source_files'],
        'candidates': summary['candidate_count'], 'skipped': len(summary['skipped']),
        'next': 'Read overview.md and summary.json; use context.py for selected source.'}))
    return 0 if summary['source_files'] else 3

if __name__ == '__main__':
    sys.exit(main())
