#!/usr/bin/env python3
"""Measure scan artifact bytes; intentionally makes no token/cost estimate."""
import argparse
import json
from pathlib import Path

p=argparse.ArgumentParser(description=__doc__)
p.add_argument('scan',type=Path)
a=p.parse_args()
s=json.loads((a.scan/'summary.json').read_text())
print(json.dumps({'files':s['source_files'],'source_bytes':s['source_bytes'],
    'initial_summary_bytes':sum((a.scan/n).stat().st_size for n in ['summary.json','overview.md']),
    'candidate_count':s['candidate_count'], 'symbols':s['symbols'],
    'measurement':'Artifact bytes, not model tokens, costs or complete audit context.'},indent=2))
