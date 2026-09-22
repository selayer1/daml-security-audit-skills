# Daml security audit skills

I put this together because reviewing Canton contracts kept eating my
time in the wrong places. Same rhythm every project: the agent greps
around, guesses where signatories matter, produces the same shape of
false positive, forgets what "nonconsuming" actually implies about
authorization. So the loop is basically me correcting it, not reviewing
the code.

This is a set of skills and rules you plug into whatever agent harness
you already use (Claude Code, Cursor, a home-grown wrapper, whatever),
plus three small Python scripts that do the boring index-and-slice work
locally so the model isn't re-reading the whole repo every turn.

It is not another agent framework. No proxy. No server. No LLM key of
its own. Just files your agent reads and a bit of stdlib Python.

## The skills

Eight of them. Each one has a matching rule file under `rules/`:

```
canton-daml-audit          full workflow, use this as the entry point
canton-daml-authorization  signatories, controllers, delegated authority
canton-daml-privacy        visibility, observers, disclosed contracts
canton-daml-keys           uniqueness, maintainers, lookups
canton-daml-atomicity      time, arithmetic, replay, contention
canton-daml-interfaces     interfaces and package upgrades
canton-daml-topology       Canton/Splice deployment trust boundaries
canton-daml-verify         refute-first pass before anything is CONFIRMED
```

If your harness supports registering a skills directory, point it at
`skills/` and keep the whole tree together. The SKILL.md files reference
their sibling `rules/`, `scripts/` and `templates/` by relative path, so
copying one file on its own will break links.

If your harness does not register skills, just tell the agent to read
the entry point:

```
Read /path/to/daml-security-audit-skills/skills/canton-daml-audit/SKILL.md
and audit the Daml project at /path/to/my-project.
```

## Running the scripts by hand

You need Python 3.10 or newer. That is the whole dependency list. No
Daml SDK, no Docker, no npm.

```bash
python3 scripts/scan.py /absolute/path/to/your/daml/project
```

It prints an output directory. Open `overview.md` and `summary.json`
first: that is where scope, skipped files and manifest hints live.

Pull bounded excerpts by topic:

```bash
python3 scripts/context.py /path/to/scan --topic authorization --limit 8
```

Topics are `authorization`, `privacy`, `keys`, `atomicity`,
`interfaces`, `topology`. If the response gives you a non-zero
`next_offset`, pass it back with `--offset` for the next batch.
`--radius` controls how many surrounding lines you get, `--max-chars` is
a rough byte budget per batch (not a token count).

Once you have real findings, write them into a copy of
`templates/findings.json` and render a report:

```bash
python3 scripts/report.py /path/to/scan findings.json --out report.md
```

The report script checks the shape of your findings and re-checks every
anchor against the source SHA-256 recorded at scan time. It does not
check whether your reasoning about the exploit is correct. That part is
yours.

## What it looks for

Six topics. Picking out the useful patterns for each:

**Authorization.** Signatory and controller confusion. Caller-supplied
`ContractId` used without an issuer check (the "fake DSO" family of
bugs). Nonconsuming choices that duplicate a one-time reward.
Interface dispatch that quietly widens authority.

**Atomicity and arithmetic.** Negative or zero amounts reaching a
contract because nothing guards the input. Decimal rounding and dust
that break value conservation. Confusing command-level deduplication
with business-level replay prevention, which is how the same payment
ends up going through twice.

**Privacy.** An observer accidentally becoming a signatory. Interface
views handing out fields the underlying template kept private.
Sensitive payload crossing a boundary via a `fetch` chain nobody
audited.

**Keys.** Business logic that assumes key uniqueness on a Canton
release which does not support contract keys. Maintainers not matching
signatories. Adversarial squatting on attacker-influenced key fields.

**Interfaces and upgrades.** The quiet one. Package v2 changes a
choice body or `ensure`, old active contracts keep running under
whatever package the synchronizer vetted, and now an operation that
was correctly rejected on v1 goes through. Compare controllers,
`ensure`, and signatory expressions across versions.

**Canton topology.** Reassignment across the wrong synchronizer.
Automation sitting on a party with `actAs` rights much wider than the
actual use case needs. Package lifecycle changes that strand live
contracts.

Each rule file has 5 to 6 concrete review questions with the evidence
you need to confirm vs refute the hypothesis. That is the part I would
actually read before running any scan.

## What it does not do

Being blunt here so nobody wastes an afternoon.

It is not a Daml compiler. No AST, no call graph, no type-driven
reachability. Lexical anchors miss things and produce noise in both
directions.

The scan gives you *candidates*, not findings. On the splice-amulet
snapshot I tested against, the queue is around a thousand entries.
Real defects in that code are a much smaller number. The gap closes
when the model actually reads the source paths and tries to refute
each hypothesis, not before.

No network, no builds, no ledger submissions. If you want runtime
evidence, you run it yourself in an authorized environment and attach
it separately.

Topology questions almost always end up UNCERTAIN from source alone.
You need deployment config, key custody, participant setup: none of
which live in `.daml` files.

The tree-sitter grammar in `experimental/` is a shallow prototype. On
the same snapshot it produced 219 recovery or error nodes against 34
templates and 79 choices. I kept it in the repo so someone with time
can build a real parser on top; do not treat its output as
authoritative.

## Reliability

Nine unit tests in `tests/` cover the pieces that would silently break
the whole workflow: string and comment masking, nested block comments,
absence of project execution, symlink handling, file-size limits,
stale-source detection, output isolation, anchor validation,
unreviewed-candidate accounting.

```bash
python3 -m unittest discover -s tests -v
```

`VALIDATION.md` pins the smoke-test snapshot exactly: 22 Daml files,
304,299 bytes, 34 template anchors, 79 choice anchors, no unclosed
lexical-mask warnings. The input fingerprint is included so if you
scan the same snapshot at the same commit, you should get the same
numbers back.

## License and where this came from

Apache-2.0. The Tree-sitter parser interface header keeps its
upstream MIT notice, see `THIRD_PARTY_NOTICES.md`. `PROVENANCE.md`
lists what carried over from earlier prompts and which assumptions
were corrected along the way. Worth a look if you have seen a previous
version of any of these review checklists floating around.

Not affiliated with, or endorsed by, Digital Asset, Canton Network,
Splice or Tree-sitter.

## Contributing

Two kinds of PR that would help most:

1. Regression samples. Small, synthetic Daml files that exhibit a
   specific attack class, so we can pin down that a candidate for
   that class actually shows up in the scan output. Right now the
   only sample is deliberately UNCERTAIN and does not exercise a
   real bug.

2. Rule feedback from anyone shipping actual Canton apps. If a
   review question is worded confusingly or the guidance is wrong
   for the SDK version you use, open an issue with the exact release
   and what you would change.

Russian readme for anyone who prefers it: [README.ru.md](README.ru.md).
