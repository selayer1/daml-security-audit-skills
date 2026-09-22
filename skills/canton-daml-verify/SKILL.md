---
name: canton-daml-verify
description: Refute or substantiate candidate Daml/Canton audit findings, validate source anchors and render a report with explicit uncertainty and coverage gaps.
---

Read [review contract](../../rules/00-review-contract.md) and [verification rules](../../rules/07-verification-reporting.md). Use the existing scan and source snapshot; obtain the relevant topic rule when ledger semantics matter.

For each hypothesis, search for the strongest concrete refutation before concluding. Trace a reachable attacker-controlled path through authorization, checked values, state consumption and deployment gates. Do not treat lack of a named helper or a syntactic pattern as sufficient evidence.

Write [findings JSON](../../templates/findings.json) matching [schema](../../schemas/findings.schema.json). Use an exact short single-line source quote for evidence, with file and line from inventory. Group duplicates by root cause and assign each candidate at most once. Include the reason for FALSE_POSITIVE or missing facts for UNCERTAIN. For CONFIRMED, document impact and whether a PoC actually ran.

Run `python3 <kit>/scripts/report.py <scan-directory> <findings.json> --out <new-report.md>`. This checks hashes/anchors and formats analyst decisions; it does not validate exploit semantics. Preserve unreviewed counts and add off-ledger/topology evidence separately. Never claim the source is fully secure on the basis of a clean candidate queue.
