---
name: canton-daml-interfaces
description: Review interfaces and upgrades in Daml/Canton projects using scoped source evidence and explicit false-positive checks.
---

Read [shared review rules](../../rules/00-review-contract.md) and [Interfaces and upgrades](../../rules/05-interfaces-upgrades.md). Locate the kit root two levels above this file.

Use the existing scan or run `python3 <kit>/scripts/scan.py <project-directory>`. Read summary.json for scope and SDK hints. Select `python3 <kit>/scripts/context.py <scan-directory> --topic interfaces --limit 8`, then page with --offset. Do not re-index unchanged projects for each topic.

Resolve each relevant candidate against full source, helper definitions and the runtime/business assumptions called out in the rule. Excerpts are navigation aids and may omit decisive checks. Record exact anchors, attacker prerequisites, invariant, impact and attempted refutation. Consider manual review of paths the lexical patterns miss.

Use [verification rules](../../rules/07-verification-reporting.md). Produce CONFIRMED, FALSE_POSITIVE or UNCERTAIN records in the [findings format](../../templates/findings.json). Do not infer a vulnerability from a matching keyword, automatic severity, helper name or deployment guess. Run tests only within the user's authorized environment; otherwise state that verification was by source inspection.
