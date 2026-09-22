# Canton deployment trust boundaries

Identify participants, hosted parties, confirmation policies, synchronizers, packages and off-ledger callers. DSO and Super Validator assumptions are relevant to Splice/Canton Network deployments, not every Canton application. Do not hard-code a universal DSO threshold or infer it from the name `dso`.

| Class | Review question | Confirmation / refutation |
|---|---|---|
| C1 | Can reassignment leave contracts unavailable or cross an unintended trust boundary? | Inspect actual reassignment APIs, target topology, vetting and recovery behavior. The base Daml scan does not inspect these configurations. |
| C2 | What can sequencers, mediators and participants actually observe/control? | Separate encrypted payloads, metadata, ordering and availability. Operator overlap alone does not establish plaintext visibility or exploitable MEV. |
| C3 | Can compromised topology/admin keys alter a relevant trust decision? | Record key custody, active authorization thresholds and permitted topology operations. Avoid an arbitrary N-of-M requirement. |
| C4 | Can a genuine but wrong-scope disclosed contract be substituted? | Verify expected issuer/DSO/instrument and identity, including the provenance of the expected value. Ledger disclosure is not permission to forge authenticated contract contents. |
| C5 | Does automation have unnecessary effective actAs/readAs rights? | Follow authentication, user rights and party hosting to the command. A privileged service may be intentional; show an attacker-controlled route. |
| C6 | Can package lifecycle changes strand live workflows? | Inspect package references, vetting rules, successor compatibility and all affected participants. Vetting a successor alone is not a universal recovery proof. |

Do not contact live nodes or mutate topology during source review. Record missing deployment evidence as UNCERTAIN and continue independent source analysis. Keep external signing, prepared transactions and intent verification in scope where the application's actual call path uses them; compare what is reviewed/signed with what is submitted.
