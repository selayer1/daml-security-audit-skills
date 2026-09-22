"""Shared, standard-library-only filesystem and Daml lexical helpers."""
from __future__ import annotations
import hashlib
import os
import re
import stat
from pathlib import Path

SKIP = {'.git', '.daml', '.venv', 'venv', 'node_modules', 'target', 'dist', 'build', '__pycache__', '.idea', '.audit-output'}
TEST = re.compile(r'(^|/)(test[^/]*|scripts?|fixtures?|examples?)(/|$)', re.I)
MAX_BYTES = 2 * 1024 * 1024

def digest(data):
    return hashlib.sha256(data).hexdigest()

def read_source(root, relative, limit=MAX_BYTES):
    rel = Path(relative)
    if rel.is_absolute() or '..' in rel.parts:
        raise ValueError('source path must be project-relative without ..')
    current = root
    for part in rel.parts:
        current = current / part
        if current.is_symlink():
            raise ValueError('symlink source refused: ' + relative)
    if not current.resolve().is_relative_to(root):
        raise ValueError('source escapes project')
    if not stat.S_ISREG(current.stat().st_mode):
        raise ValueError('not a regular file: ' + relative)
    with current.open('rb') as f:
        data = f.read(limit + 1)
    if len(data) > limit:
        raise ValueError('source exceeds byte limit: ' + relative)
    return data

def walk_sources(root):
    """Do not follow symlinks, execute git, inspect secrets, or load project code."""
    errors = []
    def onerror(exc):
        errors.append({'path': os.path.relpath(exc.filename, root), 'reason': str(exc)})
    for base, dirs, files in os.walk(root, followlinks=False, onerror=onerror):
        dirs[:] = sorted(d for d in dirs if d not in SKIP and not (Path(base) / d).is_symlink())
        for name in sorted(files):
            path = Path(base) / name
            rel = path.relative_to(root).as_posix()
            if name.endswith('.daml') or name == 'daml.yaml':
                yield rel
    if errors:
        raise OSError('incomplete directory traversal: ' + repr(errors))

def mask_daml(text):
    """Mask nested comments, strings and character literals; preserve offsets/lines.

    This is a lexical approximation, not a Daml parser/type checker.
    """
    out = list(text)
    i, depth, quoted = 0, 0, False
    def blank(a, b):
        for k in range(a, b):
            if out[k] not in '\r\n':
                out[k] = ' '
    while i < len(text):
        if depth:
            if text.startswith('{-', i):
                blank(i, i+2); depth += 1; i += 2
            elif text.startswith('-}', i):
                blank(i, i+2); depth -= 1; i += 2
            else:
                blank(i, i+1); i += 1
        elif quoted:
            if text[i] == '\\':
                end = min(i+2, len(text)); blank(i, end); i = end
            elif text[i] == '"':
                blank(i, i+1); quoted = False; i += 1
            else:
                blank(i, i+1); i += 1
        elif text.startswith('--', i):
            end = text.find('\n', i)
            if end < 0: end = len(text)
            blank(i, end); i = end
        elif text.startswith('{-', i):
            blank(i, i+2); depth = 1; i += 2
        elif text[i] == '"':
            blank(i, i+1); quoted = True; i += 1
        elif text[i] == "'" and (i == 0 or not re.match(r"[\w']", text[i-1])):
            match = re.match(r"'(?:\\.|[^'\\\n])'", text[i:])
            if match:
                end = i + len(match[0]); blank(i, end); i = end
            else: i += 1
        else:
            i += 1
    return ''.join(out), bool(depth or quoted)
