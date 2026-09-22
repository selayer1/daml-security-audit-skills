#!/usr/bin/env python3
"""Explicitly compile the bundled experimental grammar; never builds target code."""
import argparse
from pathlib import Path
import shutil
import subprocess
import sys

def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--out', type=Path, required=True, help='New directory for the local native library')
    args = ap.parse_args()
    if sys.platform not in ('linux','darwin'): ap.error('optional native build is tested on Linux; macOS command is provided, Windows unsupported')
    cc = shutil.which('cc')
    if not cc: ap.error('a trusted system C compiler (cc) is required')
    args.out.mkdir(parents=True,exist_ok=False)
    source = Path(__file__).resolve().parent.parent/'experimental/tree-sitter-daml/src'
    suffix = '.dylib' if sys.platform == 'darwin' else '.so'
    library = args.out.resolve()/('daml'+suffix)
    command = [cc, '-dynamiclib' if sys.platform=='darwin' else '-shared', '-fPIC','-O2','-I',str(source),str(source/'parser.c'),'-o',str(library)]
    subprocess.run(command, check=True, timeout=120)
    print(library)

if __name__=='__main__': main()
