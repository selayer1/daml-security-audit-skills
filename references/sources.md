# Versioned semantic references

These references support review decisions, not an assertion that the audited project uses this release. Pin evidence to the actual project SDK/Canton versions. Checked on 2026-09-19. Scripts themselves make no network requests.

- [Daml authorization model, SDK 2.9.5, §11.7.4](https://docs.daml.com/_downloads/DamlEnterprise2.9.5.pdf): required authorizers and the authorization of exercise consequences. Consult the matching version for production analysis.
- [Choices, archived 3.4](https://archived.docs.digitalasset.com/build/3.4/reference/daml/choices.html): choice forms, controllers and visibility of consequences.
- [Contract keys, archived 3.4](https://archived.docs.digitalasset.com/build/3.4/reference/daml/contract-keys.html): explicitly states that contract keys are not supported in that release of Canton 3.x. Do not generalize support/modes to every 3.x release.
- [Smart Contract Upgrade, archived 3.4](https://archived.docs.digitalasset.com/build/3.4/sdlc-howtos/smart-contracts/upgrade/smart-contract-upgrades.html): package separation for interface definitions, compatibility and runtime checks on persisted contracts.
- [Cryptographic keys in Canton, archived 3.4](https://archived.docs.digitalasset.com/overview/3.4/explanations/canton/security.html): transaction views, encryption and participant signing. Do not assume all infrastructure operators can read all contract payloads.

Review methodology and candidate checklists are original operational guidance. They are not quotations from these documents or a replacement for the Daml compiler, ledger semantics, business requirements and deployment evidence.
