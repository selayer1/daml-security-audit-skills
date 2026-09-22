#!/usr/bin/env python3
"""Validate review records and render a Markdown report; does not invent verdicts."""
import argparse
from collections import Counter
import json
from pathlib import Path
import sys
from common import digest, read_source, walk_sources

STATUSES = {'CONFIRMED', 'FALSE_POSITIVE', 'UNCERTAIN'}
SEVERITIES = {'critical','high','medium','low','info','unknown'}
FIELDS = {'id','candidate_ids','title','status','severity','file','line','evidence','reasoning','refutation','impact','validation'}

def nonempty(value):
    return isinstance(value, str) and bool(value.strip())

def validate(records, scan):
    if not isinstance(records, list): raise ValueError('findings must be a JSON array')
    summary = json.loads((scan/'summary.json').read_text())
    inventory = {r['file']:r for r in map(json.loads,(scan/'inventory.jsonl').read_text().splitlines())}
    candidates = {r['id']:r for r in map(json.loads,(scan/'candidates.jsonl').read_text().splitlines())}
    seen, addressed, cached = set(), set(), {}
    root = Path(summary['project']).resolve(strict=True)
    expected_paths = set(inventory) | {m['file'] for m in summary['manifests']} | {s['file'] for s in summary['skipped']}
    if set(walk_sources(root)) != expected_paths:
        raise ValueError('source file set changed; rescan before reporting')
    for manifest in summary['manifests']:
        if digest(read_source(root, manifest['file'], summary['max_bytes'])) != manifest['sha256']:
            raise ValueError('manifest changed; rescan: '+manifest['file'])
    # Check all indexed source, including files without findings, for stale snapshots.
    for name, entry in inventory.items():
        data = read_source(root, name, summary['max_bytes'])
        if digest(data) != entry['sha256']: raise ValueError('source changed; rescan: '+name)
        cached[name] = data.decode('utf-8').splitlines()
    for record in records:
        if not isinstance(record,dict) or set(record) != FIELDS: raise ValueError('finding fields must match schemas/findings.schema.json')
        if any(not nonempty(record[k]) for k in FIELDS-{'candidate_ids','line'}): raise ValueError('all text fields must be non-empty')
        if record['id'] in seen: raise ValueError('duplicate finding id')
        seen.add(record['id'])
        if record['status'] not in STATUSES or record['severity'] not in SEVERITIES: raise ValueError('invalid status/severity')
        if record['status']=='CONFIRMED' and record['severity']=='unknown': raise ValueError('confirmed finding needs an impact-based severity')
        ids = record['candidate_ids']
        if not isinstance(ids,list) or any(not isinstance(i,str) for i in ids): raise ValueError('candidate_ids must be string array')
        if len(set(ids)) != len(ids) or addressed.intersection(ids): raise ValueError('candidate assigned more than once; merge related evidence')
        if not set(ids) <= candidates.keys(): raise ValueError('unknown candidate id')
        addressed.update(ids)
        name, line = record['file'], record['line']
        if name not in inventory: raise ValueError('anchor must reference indexed Daml source: '+name)
        if type(line) is not int or not 1 <= line <= len(cached[name]): raise ValueError('invalid anchor line')
        if not any(record['evidence'].strip() in text for text in cached[name][max(0,line-3):line+2]):
            raise ValueError('evidence must be an exact single-line source excerpt within two lines of anchor')
    return summary, len(candidates)-len(addressed)

def escape(text):
    return str(text).replace('&','&amp;').replace('<','&lt;').replace('>','&gt;').replace('`','\\`').replace('*','\\*').replace('[','\\[').replace(']','\\]').replace('\n',' ')

def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('scan', type=Path)
    p.add_argument('findings', type=Path)
    p.add_argument('--out', type=Path, required=True)
    a = p.parse_args()
    records = json.loads(a.findings.read_text())
    summary, unreviewed = validate(records, a.scan)
    if a.out.resolve().is_relative_to(Path(summary['project']).resolve()): raise ValueError('report output must be outside target project')
    counts = Counter(r['status'] for r in records)
    body = ['# Daml/Canton audit review', '',
        f"Scope: {summary['source_files']} indexed Daml files; {summary['candidate_count']} lexical candidates.",
        f"Verdicts: {dict(sorted(counts.items()))}. Unreviewed candidates: {unreviewed}.",
        f"Skipped files: {len(summary['skipped'])}; lexical warnings: {len(summary['lexical_warnings'])}.", '',
        'This report validates record structure and source anchors, not the correctness of the analyst’s reasoning.',
        'Heuristic coverage is incomplete. Off-ledger code, deployment topology and dependency semantics need separate review.',
        'CONFIRMED means supported by the supplied review evidence; see Validation for whether any test actually ran.', '']
    for status in ['CONFIRMED','UNCERTAIN','FALSE_POSITIVE']:
        body += ['## '+status, '']
        for r in records:
            if r['status'] != status: continue
            body += [f"### {escape(r['id'])}: {escape(r['title'])}", '',
                f"Severity: {r['severity']}; anchor: {escape(r['file'])}:{r['line']}.", '']
            for key in ['evidence','reasoning','refutation','impact','validation']:
                body += [f"**{key.capitalize()}:** {escape(r[key])}", '']
    with a.out.open('x', encoding='utf-8') as f: f.write('\n'.join(body)+'\n')
    print(json.dumps({'report':str(a.out),'verdicts':dict(counts),'unreviewed_candidates':unreviewed}))
    return 0

if __name__=='__main__':
    try: sys.exit(main())
    except (OSError, ValueError, KeyError, TypeError) as exc:
        print('ERROR: '+str(exc),file=sys.stderr); sys.exit(2)
