# Contract keys and uniqueness

Establish key support before analysis: release-specific Canton semantics take precedence over generic Daml language documentation. Do not assume Canton 3.x simply enables a non-unique mode; some releases do not support contract keys at all. Source manifests alone do not establish production capability. The archived 3.4 reference explicitly says keys are unsupported in that release (references/sources.md).

| Class | Review question | Confirmation / refutation |
|---|---|---|
| K1 | Does business logic assume unsupported or non-global uniqueness? | Identify runtime version, synchronizers, support/mode and a reachable duplicate or lookup ambiguity. Unsupported source may be a compatibility issue rather than exploit. |
| K2 | Are maintainers derived correctly from the key? | Resolve expressions, not identifier-set comparisons. First determine whether the compiler or runtime rejects the proposed bad state. |
| K3 | Are maintainers consistent with required signatories? | Demonstrate a deployable violating state; do not report a rejected invalid contract as a live vulnerability. |
| K4 | Does an upgrade/migration preserve key identity and reachability? | Compare package versions, compatibility checks and actual old active contracts. Distinguish build rejection from runtime unavailability. |
| K5 | Can adversarial key selection cause business-level squatting? | Show attacker creation authority, collision scope, legitimate victim path and impact. Attacker-influenced fields are not inherently invalid. |

Review consumed singleton/nonce contracts and other business serialization independently of ledger keys. Do not infer uniqueness from Optional wrappers, names, comments or a configuration guess. Cross-synchronizer assumptions require explicit evidence.
