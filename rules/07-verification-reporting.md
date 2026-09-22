# Verification and reporting

For each candidate, establish the root cause and search for the strongest refutation: upstream authority checks, guards on the exact CID, consumed input/nonce, runtime rejection, deployment gating or unreachable code. Test fixtures inform semantics; a path named Test does not alone prove production unreachability.

Use CONFIRMED for a demonstrated reachable invariant violation, FALSE_POSITIVE for a specifically refuted hypothesis and UNCERTAIN for missing decisive facts. State whether support is a source trace or an executed reproduction. A proposed PoC is not an executed PoC. Never silently drop an item because of naming or an old report.

When reproducing, use an authorized isolated environment and the project's exact compatible SDK, with minimal contracts/parties. Establish the normal path first, then the adversarial path and expected rejection after the fix. Archive command, SDK/package versions, exit status and relevant output without credentials. Project build scripts are not part of the default static workflow.

The report script checks record structure, source hashes and anchors. It cannot certify reasoning or exploitation. Use templates/findings.json and schemas/findings.schema.json. Multiple candidates may map to a single root cause; a candidate cannot be claimed by multiple records. Manual findings can have an empty candidate_ids array. The automated report currently accepts Daml anchors from the scan only; write additional off-ledger/topology findings and their evidence in a separate scope supplement.

Before publication, report unreviewed candidates, excluded paths, unknown topology/versions, unsupported syntax and untested assumptions. Claims about deployed status need deployment evidence, not just a main branch. Severity follows impact and prerequisites, with no default Critical. Suggested fixes must preserve legitimate multi-party workflows.
