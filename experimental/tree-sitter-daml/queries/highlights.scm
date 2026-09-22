;; Minimal syntax-highlighting queries — enough for tree-sitter editor plugins.

[
  "module" "where" "import" "as" "qualified" "hiding"
  "data" "type" "newtype" "class" "instance" "deriving"
  "template" "interface" "implements" "viewtype" "requires" "for"
  "with" "do" "let" "in" "of" "if" "then" "else" "case"
  "signatory" "observer" "ensure" "key" "maintainer"
  "controller" "can" "choice"
  "nonconsuming" "preconsuming" "postconsuming"
] @keyword

(constructor) @type
(identifier) @variable
(qualified) @variable.qualified

(string_literal) @string
(char_literal) @string
(number_literal) @number

(operator) @operator

(line_comment)  @comment
(block_comment) @comment
(pragma)        @attribute

;; DAML-critical calls — highlighted for auditor eyeballing.
(exercise_call)  @function.builtin
(fetch_call)     @function.builtin
(lookup_call)    @function.builtin
(create_call)    @function.builtin
(archive_call)   @function.builtin
(get_time_call)  @function.builtin
(unsafe_cast_call) @function.dangerous
(from_some_call)  @function.dangerous
