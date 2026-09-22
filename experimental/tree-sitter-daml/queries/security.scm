;; Experimental Tree-sitter security-surface queries, retained for tooling authors.
;; Captures are navigation signals, not vulnerability verdicts.
;; The optional extract_ast.py currently walks AST nodes directly.

;; ---------------------------------------------------------------- module info

(module_header
  name: (module_name) @security.module.name)

(import_decl
  name: (module_name) @security.import.name
  (module_name)? @security.import.alias)

;; ---------------------------------------------------------------- template surface

(template_decl
  name: (constructor) @security.template.name
  body: (template_body) @security.template.body)

(template_with_block
  (_record_field_line
    name: (identifier) @security.template.field_name
    type: (_) @security.template.field_type))

;; Authorization surface — signatory / observer / controller of legacy syntax.
(signatory_clause parties: (expr_blob) @security.auth.signatory)
(observer_clause  parties: (expr_blob) @security.auth.observer)
(controller_clause_legacy parties: (expr_blob) @security.auth.controller_legacy)

;; Key & maintainer — key-integrity class.
(key_clause        body: (expr_blob) @security.key.expression)
(maintainer_clause body: (expr_blob) @security.key.maintainer)

;; ensure — precondition; logic-bug class.
(ensure_clause cond: (expr_blob) @security.logic.ensure)

;; ---------------------------------------------------------------- choices

(choice_decl
  modifier: (choice_modifier)? @security.choice.modifier
  name: (constructor) @security.choice.name
  result_type: (_) @security.choice.result_type
  controller: (expr_line)? @security.choice.controller
  body: (do_block) @security.choice.body)

(choice_observer_clause parties: (expr_line) @security.choice.observer_extra)

;; ---------------------------------------------------------------- interface / implements

(interface_decl
  name: (constructor) @security.interface.name
  body: (interface_body) @security.interface.body)

(viewtype_decl type: (_) @security.interface.viewtype)

(interface_method
  name: (identifier) @security.interface.method_name
  type: (_) @security.interface.method_type)

(implements_decl
  interface: (_) @security.interface.implements_target)

(interface_instance_decl
  interface: (_) @security.interface.instance_interface
  template: (_) @security.interface.instance_template)

;; ---------------------------------------------------------------- privileged calls in choice bodies

;; Any exercise* / fetch* / lookup* call appearing anywhere is captured;
;; the extractor then de-duplicates by (file, line) and cross-references with
;; the enclosing choice / template for context.

(exercise_call)   @security.call.exercise
(fetch_call)      @security.call.fetch
(lookup_call)     @security.call.lookup
(create_call)     @security.call.create
(archive_call)    @security.call.archive
(get_time_call)   @security.call.get_time
(unsafe_cast_call) @security.call.unsafe_cast
(from_some_call)  @security.call.from_some
(qualified_call)  @security.call.qualified

;; ---------------------------------------------------------------- data types (for type-safety heuristics)

(data_decl
  name: (constructor) @security.data.name)

;; ---------------------------------------------------------------- function bindings (helpers, top-level)

(function_signature
  name: (identifier) @security.function.signature_name
  type: (_) @security.function.signature_type)

(function_binding
  name: (identifier) @security.function.binding_name)
