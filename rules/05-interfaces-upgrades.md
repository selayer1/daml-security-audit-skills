# Interfaces and upgrades

Inspect interface definitions, backing templates, package boundaries, dependency versions and the exact upgrade checker/runtime behavior. Type compatibility is not proof of preserved business semantics.

| Class | Review question | Confirmation / refutation |
|---|---|---|
| I1 | Can a partial interface conversion fail on caller-controlled input? | Track the concrete template/instance and runtime guard. A failing conversion may only reject the attacker's own transaction. |
| I2 | Can an Optional unwrap cause meaningful failure? | Trace Some/None, guard dominance and victim impact. `fromSome` on a proven Some is not a bug. |
| I3 | Is an interface instance accepted and consistent with intended dispatch? | Resolve the implementation location and SDK rules. Unsupported or rejected instances are compatibility findings. |
| I4 | Are interface/exception definitions coupled to upgradable templates? | Inspect package boundaries and planned upgrades, not just file co-location. Confirm restrictions with the matching compiler. |
| I5 | Is an interface view oversharing data? | Apply P5 with actual Ledger API visibility and consumer authorization. Views do not grant global access. |
| I6 | Do version changes invalidate old contracts or alter authorized effects? | Compare controllers, bodies, ensure, metadata, field evolution and old active data. Test both accepted upgrades and expected runtime rejection. |

An edited signatory expression does not automatically escalate authority: runtime invariants may reject the transaction, or the expression may compute the same parties. A stricter ensure can reject old data. Separate denial of service, rejected upgrade and intentionally breaking migration; never assign Critical to every diff.
