# Daml authorization

Build a transaction authorization trace, including nested exercises. Creation requires the new contract's signatories; an exercise requires its controllers. Exercise consequences use the actors and signatories of the exercised contract. Do not substitute the submitter set for every nested authorization context. Observership grants visibility, not choice authority. See the versioned authorization reference in references/sources.md.

| Class | Review question | Evidence needed to confirm / refute |
|---|---|---|
| A1 | Do creation and archival rules enforce the business agreement? | Identify the obligation and a reachable transition that violates it. A single signatory or an observer-only beneficiary can be intentional. |
| A2 | Can a caller-selected controller obtain unintended authority? | Trace choice arguments, all controllers, delegated authority and guards. Caller-derived controllers are allowed patterns; establish unauthorized consequences. |
| A3 | Does repeating a nonconsuming choice duplicate a one-time benefit? | Execute or reason through two calls, following any consumed state/input/nonce. A permanent Rules contract that consumes other inputs can be correct. |
| A4 | Can an attacker substitute a caller-supplied contract? | Establish expected issuer/DSO/asset/owner binding and a counterfeit or wrong-scope contract the attacker can actually create. Mere absence of fetch is not proof. |
| A5 | Does interface dispatch expose a broader transition than intended? | Inspect the actual backing instance, controllers and delegated signatory authority. Controllers need not be template signatories. |

Trace the exact data used after checking it; a check on another CID or another DSO does not bind the target. Inspect both successful and failing paths. Do not flag rejected ledger authorization as successful escalation.
