# Validation record

Validated on 2026-09-19 with Python 3.11 on Linux.

- All 8 skills passed the skill-creator frontmatter/name validation.
- 9 standard-library workflow tests passed: source masking, nested comments, non-execution, excluded directories, symlinks/file-size limits, stale source, new files/changed manifests, output isolation/no overwrite, source evidence and candidate accounting, and empty-project exit status.
- A synthetic scan → review JSON → Markdown report completed. The included sample is explicitly UNCERTAIN and leaves 4 candidates unreviewed. It is not a Daml-compiled reproduction.
- Real-source smoke test on a local public Splice splice-amulet snapshot: 22 Daml files, 304299 bytes, 34 template anchors, 79 choice anchors, no unclosed lexical-mask warnings, 1009 review anchors. No real target code is bundled.
- Initial summary.json + overview.md: 1456 bytes. A context request for the first 2 authorization records, with default radius 8 and --max-chars 6000, produced 3526 bytes. These are artifact sizes, not tokenizer measurements or end-to-end audit cost.
- Optional generated grammar compiled locally with the system C compiler. Optional extractor executed with tree_sitter 0.21.3: 34 templates, 79 template choices, 219 recovery/error nodes. This does not establish complete grammar coverage.

Input fingerprint for the real smoke test: SHA-256 of the compact JSON serialization of the sorted list of (relative file path, source SHA-256) tuples:

`edbdd78d9c548d025c3e4d10a52486d51319ff916262898b14f71bf931ba307f`

Run the core checks yourself:

```bash
python3 -m unittest discover -s tests -v
python3 scripts/scan.py samples/project
# Use the output directory printed above:
python3 scripts/report.py /path/to/printed/scan samples/findings.json --out /path/to/new-sample-report.md
python3 scripts/benchmark.py /path/to/printed/scan
```

Not performed: a full security audit of Splice, compiling/executing sample Daml, live Canton tests, network/topology validation, a measurement of model tokens/cost, macOS or Windows execution. These limits are intentional and reflected in the skills/rules.
