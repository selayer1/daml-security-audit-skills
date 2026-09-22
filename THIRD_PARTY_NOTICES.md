# Third-party notices

The original rules, skills, scripts and Daml grammar prototype are distributed under Apache License 2.0 (LICENSE).

`experimental/tree-sitter-daml/src/tree_sitter/parser.h` is the Tree-sitter parser interface header used with the generated grammar. Tree-sitter is MIT licensed; its license is reproduced in `experimental/tree-sitter-daml/LICENSE.tree-sitter`. Source: https://github.com/tree-sitter/tree-sitter (v0.20.8-era parser interface). The generated `src/parser.c` is generated from this kit's Daml grammar.

The optional `tree_sitter==0.21.3` Python binding is an external MIT-licensed dependency installed only when explicitly requested. Its source/binary distribution is not bundled. The optional compiler is supplied by the user's environment.

Documentation links identify Digital Asset's versioned primary references. Their manuals are not redistributed. No external agent harness source, private target code or audit report is included.
