# Daml privacy

Construct visibility per action/view and recipient using the exact SDK semantics. Distinguish contract stakeholders, choice controllers/observers, explicit disclosure, application responses and logs. Do not model privacy as a global union of every party mentioned in the transaction.

| Class | Review question | Confirmation / refutation |
|---|---|---|
| P1 | Was a viewing party granted unintended signatory authority? | Show an unwanted authorized action or unnecessary consent dependency. Multiple signatories alone are normal. |
| P2 | Does legacy controller syntax expand visibility? | Check compiler-version semantics and actual recipients against the intended disclosure policy. |
| P3 | Does fetched/created data cross an unauthorized boundary? | Trace the sensitive payload to an actual recipient and API-visible event or return value. A fetch alone does not prove universal disclosure. |
| P4 | Does key lookup expose confidential existence information? | Establish that a non-authorized party can perform the query and distinguish outcomes. Account for key authorization and runtime support. |
| P5 | Does an interface view or off-ledger response reveal too much? | Prove access to the underlying event/query and the extra data. An interface view is not automatically public to anyone. |

For every proposed leak, list sender, recipient, data, visibility mechanism and missing permission. A helper called `fetchChecked` is not a privacy sanitizer by name. Public naming and comments do not refute a leak; compare the actual business policy. Consuming versus nonconsuming choices can affect who sees consequences; verify in the target version.
