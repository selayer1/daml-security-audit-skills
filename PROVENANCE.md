# Provenance and scope of the reusable release

This kit consolidates the earlier Daml/Canton audit prototype and reusable review workflow into harness-independent skills, rules and local scripts.

| Earlier work | Published form |
|---|---|
| Six specialist prompts | Six topic skills and six rewritten review rules |
| Daml language hints and CWE-oriented knowledge base | Topic routing, source/sink questions, validation and refutation requirements in rules/ |
| Source extraction prototype | Optional scripts/extract_ast.py and experimental/tree-sitter-daml source |
| Audit triage and adversarial verification | Rules for independent refutation, structured statuses and scripts/report.py |
| Repeated repository/context preparation | New standard-library scan.py, context.py, common.py and benchmark.py |

The original heuristics are not published as automatic verdicts. Corrected assumptions include controller arguments, nonconsuming choices, interface visibility, assertion messages, key support, upgrade checks, privacy recipient sets, topology thresholds and default severity. Version-specific references are in references/sources.md.

The shallow grammar remains experimental. The generated parser source, query files and original basic corpus are retained; the misleading claim that all recovery nodes are harmless is removed. The optional extractor reuses the original source-surface functions, removes heuristic verdicts and uses the shared snapshot/file-boundary checks.

No source or runtime from the previously evaluated external agentic harness is bundled or needed. Its configurations, transcripts, private findings and project-specific scripts are not redistributed. General workflow ideas are expressed as original review instructions. Private repositories and real audit reports are excluded; examples are synthetic.

The grammar prototype declared Apache-2.0. Original kit material is distributed under Apache-2.0; the bundled Tree-sitter parser interface header retains its upstream MIT notice. See THIRD_PARTY_NOTICES.md. No endorsement by Digital Asset, Canton Network or Tree-sitter is implied.
