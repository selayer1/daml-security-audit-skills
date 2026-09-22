/**
 * Experimental shallow Daml grammar, adapted from the earlier audit prototype.
 * No offside-rule scanner or complete expression grammar. Recovery nodes and
 * apparently successful parses can both omit or mis-scope declarations.
 * Use only for navigation, never as a compiler or proof of complete coverage.
 */

const LOWER = /[a-z_][A-Za-z0-9_']*/;
const UPPER = /[A-Z][A-Za-z0-9_']*/;
const QUAL  = /(?:[A-Z][A-Za-z0-9_']*\.)+[a-zA-Z_][A-Za-z0-9_']*/;
const OPSYM = /[!#$%&*+.\/<=>?@\\^|~:-]+/;
const STR   = /"(?:[^"\\\r\n]|\\.)*"/;
const CHR   = /'(?:[^'\\\r\n]|\\.)+'/;
const NUM   = /-?[0-9]+(?:\.[0-9]+)?(?:[eE][+-]?[0-9]+)?/;

// Keywords that terminate a body item / a top-level decl greedy blob. Emitting
// any of these breaks out of the current expr_blob capture so parser can begin
// the next construct cleanly.
const BLOB_STOPS = [
  'signatory', 'observer', 'ensure', 'key', 'maintainer',
  'controller', 'choice', 'nonconsuming', 'preconsuming', 'postconsuming',
  'implements', 'interface', 'template', 'data', 'type', 'newtype',
  'import', 'module', 'class', 'instance', 'deriving', 'viewtype',
  'where', 'requires', 'for',
];

module.exports = grammar({
  name: 'daml',

  extras: $ => [
    /[ \t\r\n]/,
    $.line_comment,
    $.block_comment,
    $.pragma,
  ],

  rules: {
    source_file: $ => repeat($._top_item),

    // -------- comments / pragmas
    line_comment:  _ => token(seq('--', /[^\r\n]*/)),
    block_comment: _ => token(seq('{-', /[^-#]/, repeat(choice(/[^-]/, /-[^}]/)), /-+}/)),
    pragma:        _ => token(seq('{-#', /[^#]*/, '#-}')),

    // -------- top-level items
    _top_item: $ => choice(
      $.module_header,
      $.import_decl,
      $.template_decl,
      $.interface_decl,
      $.data_decl,
      $.other_decl,
    ),

    // module Foo.Bar where
    module_header: $ => seq(
      'module',
      field('name', $.module_name),
      optional($._export_paren),
      'where',
    ),
    _export_paren: $ => seq('(', repeat($._blob_token), ')'),

    module_name: _ => token(prec(2, /[A-Z][A-Za-z0-9_']*(?:\.[A-Z][A-Za-z0-9_']*)*/)),

    // import [qualified] Foo.Bar [as Baz] [qualified] [(...)] — single line
    import_decl: $ => prec.right(seq(
      'import',
      optional('qualified'),
      field('name', $.module_name),
      optional(seq('as', field('alias', $.module_name))),
      optional('qualified'),
      optional(choice(
        seq('(', repeat($._blob_token), ')'),
        seq('hiding', '(', repeat($._blob_token), ')'),
      )),
    )),

    // -------- template
    template_decl: $ => seq(
      'template',
      field('name', $.constructor),
      'with', // MVP: require explicit `with` on template header
      field('fields', $.field_block),
      'where',
      field('body', $.template_body),
    ),

    field_block: $ => prec.right(repeat1($.field_decl)),

    field_decl: $ => prec.right(seq(
      field('name', $.identifier),
      repeat(seq(',', field('name', $.identifier))),
      ':',
      field('type', $.type_blob),
    )),

    // A type blob — greedily consume until a blob-stopper or another field/name+':'.
    type_blob: $ => prec.right(repeat1($._type_atom)),
    _type_atom: $ => choice(
      $.constructor, $.qualified, $.identifier,
      $._paren_group, $._bracket_group,
      $.operator_type,
    ),
    operator_type: _ => token(prec(-1, /->|=>/)),

    template_body: $ => prec.right(repeat1($._body_item)),

    _body_item: $ => choice(
      $.signatory_clause,
      $.observer_clause,
      $.ensure_clause,
      $.key_clause,
      $.maintainer_clause,
      $.choice_decl,
      $.controller_can_clause,
      $.implements_clause,
      $.interface_instance_clause,
      $.let_clause,
      $.deriving_clause,
    ),

    signatory_clause:  $ => seq('signatory',  field('body', $.expr_blob)),
    observer_clause:   $ => seq('observer',   field('body', $.expr_blob)),
    ensure_clause:     $ => seq('ensure',     field('body', $.expr_blob)),
    key_clause:        $ => seq('key',        field('body', $.expr_blob)),
    maintainer_clause: $ => seq('maintainer', field('body', $.expr_blob)),
    deriving_clause:   $ => seq('deriving',   field('body', $.expr_blob)),

    // Legacy: controller X can ChoiceName : R do ...
    controller_can_clause: $ => seq(
      'controller',
      field('parties', $.expr_blob),
      'can',
      field('body', $.expr_blob),
    ),

    choice_decl: $ => seq(
      optional(field('modifier', $.choice_modifier)),
      'choice',
      field('name', $.constructor),
      ':',
      field('result_type', $.type_blob),
      optional(seq('with', field('fields', $.field_block))),
      optional(seq('observer', field('observer_extra', $.ctrl_blob))),
      'controller',
      field('controller', $.ctrl_blob),
      'do',
      field('body', $.body_blob),
    ),

    choice_modifier: _ => choice('nonconsuming', 'preconsuming', 'postconsuming'),

    implements_clause: $ => seq(
      'implements',
      field('interface', choice($.constructor, $.qualified)),
      optional(seq('where', field('body', $.expr_blob))),
    ),

    interface_instance_clause: $ => seq(
      'interface', 'instance',
      field('interface', choice($.constructor, $.qualified)),
      'for',
      field('template', choice($.constructor, $.qualified)),
      'where',
      field('body', $.expr_blob),
    ),

    let_clause: $ => seq('let', field('body', $.expr_blob)),

    // -------- interface
    interface_decl: $ => seq(
      'interface',
      field('name', $.constructor),
      optional(seq('requires', field('requires', $.expr_blob))),
      'where',
      field('body', $.interface_body),
    ),

    interface_body: $ => prec.right(repeat1(choice(
      $.viewtype_decl,
      $.choice_decl,
      $.interface_instance_clause,
      $.controller_can_clause,
      $.let_clause,
    ))),

    viewtype_decl: $ => seq('viewtype', field('type', $.type_blob)),

    // -------- data (loose)
    data_decl: $ => prec.right(seq(
      'data',
      field('name', $.constructor),
      field('body', $.expr_blob),
    )),

    // -------- other (catch-all: newtype, type, class, instance, top-level bindings)
    other_decl: $ => choice(
      seq('newtype', field('name', $.constructor), $.expr_blob),
      seq('type',    field('name', $.constructor), $.expr_blob),
      seq('class',   $.expr_blob),
      seq('instance',$.expr_blob),
      // top-level function signature/binding — swallow one line's worth via expr_blob
      seq($.identifier, $.expr_blob),
    ),

    // ---- greedy expression blobs
    // expr_blob   — used for signatory / observer / ensure / key / maintainer /
    //               deriving / data. Terminates on any body-item keyword.
    // ctrl_blob   — controller expression / observer_extra. Terminates additionally on `do`.
    // body_blob   — choice body. May contain nested `do`, `let`, `case`, etc.
    expr_blob: $ => prec.right(repeat1($._blob_token)),
    ctrl_blob: $ => prec.right(repeat1($._ctrl_blob_token)),
    body_blob: $ => prec.right(repeat1($._blob_token)),

    _blob_token: $ => choice(
      $.exercise_call, $.fetch_call, $.lookup_call,
      $.create_call, $.archive_call, $.get_time_call,
      $.unsafe_cast_call, $.from_some_call, $.qualified_call,
      $.constructor, $.qualified, $.identifier,
      $.string_literal, $.char_literal, $.number_literal,
      $.operator,
      $._paren_group, $._bracket_group, $._brace_group,
      ',', ';', '=', '<-', '`', '..', '@', '~',
      'with', 'do', 'let', 'in', 'of', 'if', 'then', 'else', 'case',
      'as', 'qualified', 'hiding', 'this', 'return', 'pure',
    ),

    // ctrl_blob excludes `do` — that word terminates the controller expression
    // so parser can move on to the choice body.
    _ctrl_blob_token: $ => choice(
      $.exercise_call, $.fetch_call, $.lookup_call,
      $.create_call, $.archive_call, $.get_time_call,
      $.unsafe_cast_call, $.from_some_call, $.qualified_call,
      $.constructor, $.qualified, $.identifier,
      $.string_literal, $.char_literal, $.number_literal,
      $.operator,
      $._paren_group, $._bracket_group, $._brace_group,
      ',', ';', '=', '<-', '`', '..', '@', '~',
      'with', 'let', 'in', 'of', 'if', 'then', 'else', 'case',
      'as', 'qualified', 'hiding', 'this', 'return', 'pure',
    ),

    _paren_group:   $ => seq('(', repeat($._nested_token), ')'),
    _bracket_group: $ => seq('[', repeat($._nested_token), ']'),
    _brace_group:   $ => seq('{', repeat($._nested_token), '}'),

    // Inside brackets we do NOT terminate on stop-keywords — they may be legit
    // identifiers inside expressions (e.g. records with fields named `key`).
    _nested_token: $ => choice(
      $.constructor, $.qualified, $.identifier,
      $.string_literal, $.char_literal, $.number_literal,
      $.operator, ',', ';', '=', '<-', '`', '..', '@', '~', ':',
      $._paren_group, $._bracket_group, $._brace_group,
      // allow blob-stop keywords too, so bracketed content is fully consumed
      ...BLOB_STOPS,
      'with', 'do', 'let', 'in', 'of', 'if', 'then', 'else', 'case',
      'as', 'this', 'return', 'pure', 'can',
    ),

    // -------- calls we care about (recognized as prefer-over-identifier tokens)
    exercise_call:    _ => token(prec(20, choice('exerciseByKeyCmd', 'exerciseByKey', 'exerciseCmd', 'exercise'))),
    fetch_call:       _ => token(prec(20, choice('fetchByKey', 'fetchFromInterface', 'fetch'))),
    lookup_call:      _ => token(prec(20, choice('visibleByKey', 'lookupByKey'))),
    create_call:      _ => token(prec(20, choice('createAndExerciseCmd', 'createAndExercise', 'create'))),
    archive_call:     _ => token(prec(20, 'archive')),
    get_time_call:    _ => token(prec(20, 'getTime')),
    unsafe_cast_call: _ => token(prec(20, choice('fromInterfaceUnsafe', 'unsafeCast'))),
    from_some_call:   _ => token(prec(20, choice('unsafeFromOptional', 'fromSomeNote', 'fromSome'))),
    qualified_call:   _ => token(prec(19, /(?:[A-Z][A-Za-z0-9_']*\.)+(?:exercise|exerciseByKey|fetch|fetchByKey|lookupByKey|create|createAndExercise|archive|getTime|unsafeCast|fromSome)[A-Za-z0-9_']*/)),

    // -------- terminals
    identifier:     _ => token(LOWER),
    constructor:    _ => token(UPPER),
    qualified:      _ => token(prec(1, QUAL)),
    string_literal: _ => token(STR),
    char_literal:   _ => token(CHR),
    number_literal: _ => token(NUM),
    operator:       _ => token(OPSYM),
  },
});
