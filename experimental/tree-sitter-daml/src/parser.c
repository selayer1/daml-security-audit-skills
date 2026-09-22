#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 424
#define LARGE_STATE_COUNT 85
#define SYMBOL_COUNT 125
#define ALIAS_COUNT 0
#define TOKEN_COUNT 78
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 26

enum {
  sym_line_comment = 1,
  sym_block_comment = 2,
  sym_pragma = 3,
  anon_sym_module = 4,
  anon_sym_where = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  sym_module_name = 8,
  anon_sym_import = 9,
  anon_sym_qualified = 10,
  anon_sym_as = 11,
  anon_sym_hiding = 12,
  anon_sym_template = 13,
  anon_sym_with = 14,
  anon_sym_COMMA = 15,
  anon_sym_COLON = 16,
  sym_operator_type = 17,
  anon_sym_signatory = 18,
  anon_sym_observer = 19,
  anon_sym_ensure = 20,
  anon_sym_key = 21,
  anon_sym_maintainer = 22,
  anon_sym_deriving = 23,
  anon_sym_controller = 24,
  anon_sym_can = 25,
  anon_sym_choice = 26,
  anon_sym_do = 27,
  anon_sym_nonconsuming = 28,
  anon_sym_preconsuming = 29,
  anon_sym_postconsuming = 30,
  anon_sym_implements = 31,
  anon_sym_interface = 32,
  anon_sym_instance = 33,
  anon_sym_for = 34,
  anon_sym_let = 35,
  anon_sym_requires = 36,
  anon_sym_viewtype = 37,
  anon_sym_data = 38,
  anon_sym_newtype = 39,
  anon_sym_type = 40,
  anon_sym_class = 41,
  anon_sym_SEMI = 42,
  anon_sym_EQ = 43,
  anon_sym_LT_DASH = 44,
  anon_sym_BQUOTE = 45,
  anon_sym_DOT_DOT = 46,
  anon_sym_AT = 47,
  anon_sym_TILDE = 48,
  anon_sym_in = 49,
  anon_sym_of = 50,
  anon_sym_if = 51,
  anon_sym_then = 52,
  anon_sym_else = 53,
  anon_sym_case = 54,
  anon_sym_this = 55,
  anon_sym_return = 56,
  anon_sym_pure = 57,
  anon_sym_LBRACK = 58,
  anon_sym_RBRACK = 59,
  anon_sym_LBRACE = 60,
  anon_sym_RBRACE = 61,
  sym_exercise_call = 62,
  sym_fetch_call = 63,
  sym_lookup_call = 64,
  sym_create_call = 65,
  sym_archive_call = 66,
  sym_get_time_call = 67,
  sym_unsafe_cast_call = 68,
  sym_from_some_call = 69,
  sym_qualified_call = 70,
  sym_identifier = 71,
  sym_constructor = 72,
  sym_qualified = 73,
  sym_string_literal = 74,
  sym_char_literal = 75,
  sym_number_literal = 76,
  sym_operator = 77,
  sym_source_file = 78,
  sym__top_item = 79,
  sym_module_header = 80,
  sym__export_paren = 81,
  sym_import_decl = 82,
  sym_template_decl = 83,
  sym_field_block = 84,
  sym_field_decl = 85,
  sym_type_blob = 86,
  sym__type_atom = 87,
  sym_template_body = 88,
  sym__body_item = 89,
  sym_signatory_clause = 90,
  sym_observer_clause = 91,
  sym_ensure_clause = 92,
  sym_key_clause = 93,
  sym_maintainer_clause = 94,
  sym_deriving_clause = 95,
  sym_controller_can_clause = 96,
  sym_choice_decl = 97,
  sym_choice_modifier = 98,
  sym_implements_clause = 99,
  sym_interface_instance_clause = 100,
  sym_let_clause = 101,
  sym_interface_decl = 102,
  sym_interface_body = 103,
  sym_viewtype_decl = 104,
  sym_data_decl = 105,
  sym_other_decl = 106,
  sym_expr_blob = 107,
  sym_ctrl_blob = 108,
  sym_body_blob = 109,
  sym__blob_token = 110,
  sym__ctrl_blob_token = 111,
  sym__paren_group = 112,
  sym__bracket_group = 113,
  sym__brace_group = 114,
  sym__nested_token = 115,
  aux_sym_source_file_repeat1 = 116,
  aux_sym__export_paren_repeat1 = 117,
  aux_sym_field_block_repeat1 = 118,
  aux_sym_field_decl_repeat1 = 119,
  aux_sym_type_blob_repeat1 = 120,
  aux_sym_template_body_repeat1 = 121,
  aux_sym_interface_body_repeat1 = 122,
  aux_sym_ctrl_blob_repeat1 = 123,
  aux_sym__paren_group_repeat1 = 124,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_pragma] = "pragma",
  [anon_sym_module] = "module",
  [anon_sym_where] = "where",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_module_name] = "module_name",
  [anon_sym_import] = "import",
  [anon_sym_qualified] = "qualified",
  [anon_sym_as] = "as",
  [anon_sym_hiding] = "hiding",
  [anon_sym_template] = "template",
  [anon_sym_with] = "with",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [sym_operator_type] = "operator_type",
  [anon_sym_signatory] = "signatory",
  [anon_sym_observer] = "observer",
  [anon_sym_ensure] = "ensure",
  [anon_sym_key] = "key",
  [anon_sym_maintainer] = "maintainer",
  [anon_sym_deriving] = "deriving",
  [anon_sym_controller] = "controller",
  [anon_sym_can] = "can",
  [anon_sym_choice] = "choice",
  [anon_sym_do] = "do",
  [anon_sym_nonconsuming] = "nonconsuming",
  [anon_sym_preconsuming] = "preconsuming",
  [anon_sym_postconsuming] = "postconsuming",
  [anon_sym_implements] = "implements",
  [anon_sym_interface] = "interface",
  [anon_sym_instance] = "instance",
  [anon_sym_for] = "for",
  [anon_sym_let] = "let",
  [anon_sym_requires] = "requires",
  [anon_sym_viewtype] = "viewtype",
  [anon_sym_data] = "data",
  [anon_sym_newtype] = "newtype",
  [anon_sym_type] = "type",
  [anon_sym_class] = "class",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_AT] = "@",
  [anon_sym_TILDE] = "~",
  [anon_sym_in] = "in",
  [anon_sym_of] = "of",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_case] = "case",
  [anon_sym_this] = "this",
  [anon_sym_return] = "return",
  [anon_sym_pure] = "pure",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_exercise_call] = "exercise_call",
  [sym_fetch_call] = "fetch_call",
  [sym_lookup_call] = "lookup_call",
  [sym_create_call] = "create_call",
  [sym_archive_call] = "archive_call",
  [sym_get_time_call] = "get_time_call",
  [sym_unsafe_cast_call] = "unsafe_cast_call",
  [sym_from_some_call] = "from_some_call",
  [sym_qualified_call] = "qualified_call",
  [sym_identifier] = "identifier",
  [sym_constructor] = "constructor",
  [sym_qualified] = "qualified",
  [sym_string_literal] = "string_literal",
  [sym_char_literal] = "char_literal",
  [sym_number_literal] = "number_literal",
  [sym_operator] = "operator",
  [sym_source_file] = "source_file",
  [sym__top_item] = "_top_item",
  [sym_module_header] = "module_header",
  [sym__export_paren] = "_export_paren",
  [sym_import_decl] = "import_decl",
  [sym_template_decl] = "template_decl",
  [sym_field_block] = "field_block",
  [sym_field_decl] = "field_decl",
  [sym_type_blob] = "type_blob",
  [sym__type_atom] = "_type_atom",
  [sym_template_body] = "template_body",
  [sym__body_item] = "_body_item",
  [sym_signatory_clause] = "signatory_clause",
  [sym_observer_clause] = "observer_clause",
  [sym_ensure_clause] = "ensure_clause",
  [sym_key_clause] = "key_clause",
  [sym_maintainer_clause] = "maintainer_clause",
  [sym_deriving_clause] = "deriving_clause",
  [sym_controller_can_clause] = "controller_can_clause",
  [sym_choice_decl] = "choice_decl",
  [sym_choice_modifier] = "choice_modifier",
  [sym_implements_clause] = "implements_clause",
  [sym_interface_instance_clause] = "interface_instance_clause",
  [sym_let_clause] = "let_clause",
  [sym_interface_decl] = "interface_decl",
  [sym_interface_body] = "interface_body",
  [sym_viewtype_decl] = "viewtype_decl",
  [sym_data_decl] = "data_decl",
  [sym_other_decl] = "other_decl",
  [sym_expr_blob] = "expr_blob",
  [sym_ctrl_blob] = "ctrl_blob",
  [sym_body_blob] = "body_blob",
  [sym__blob_token] = "_blob_token",
  [sym__ctrl_blob_token] = "_ctrl_blob_token",
  [sym__paren_group] = "_paren_group",
  [sym__bracket_group] = "_bracket_group",
  [sym__brace_group] = "_brace_group",
  [sym__nested_token] = "_nested_token",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__export_paren_repeat1] = "_export_paren_repeat1",
  [aux_sym_field_block_repeat1] = "field_block_repeat1",
  [aux_sym_field_decl_repeat1] = "field_decl_repeat1",
  [aux_sym_type_blob_repeat1] = "type_blob_repeat1",
  [aux_sym_template_body_repeat1] = "template_body_repeat1",
  [aux_sym_interface_body_repeat1] = "interface_body_repeat1",
  [aux_sym_ctrl_blob_repeat1] = "ctrl_blob_repeat1",
  [aux_sym__paren_group_repeat1] = "_paren_group_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_pragma] = sym_pragma,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_module_name] = sym_module_name,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_qualified] = anon_sym_qualified,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_hiding] = anon_sym_hiding,
  [anon_sym_template] = anon_sym_template,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_operator_type] = sym_operator_type,
  [anon_sym_signatory] = anon_sym_signatory,
  [anon_sym_observer] = anon_sym_observer,
  [anon_sym_ensure] = anon_sym_ensure,
  [anon_sym_key] = anon_sym_key,
  [anon_sym_maintainer] = anon_sym_maintainer,
  [anon_sym_deriving] = anon_sym_deriving,
  [anon_sym_controller] = anon_sym_controller,
  [anon_sym_can] = anon_sym_can,
  [anon_sym_choice] = anon_sym_choice,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_nonconsuming] = anon_sym_nonconsuming,
  [anon_sym_preconsuming] = anon_sym_preconsuming,
  [anon_sym_postconsuming] = anon_sym_postconsuming,
  [anon_sym_implements] = anon_sym_implements,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_instance] = anon_sym_instance,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_requires] = anon_sym_requires,
  [anon_sym_viewtype] = anon_sym_viewtype,
  [anon_sym_data] = anon_sym_data,
  [anon_sym_newtype] = anon_sym_newtype,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_this] = anon_sym_this,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_pure] = anon_sym_pure,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_exercise_call] = sym_exercise_call,
  [sym_fetch_call] = sym_fetch_call,
  [sym_lookup_call] = sym_lookup_call,
  [sym_create_call] = sym_create_call,
  [sym_archive_call] = sym_archive_call,
  [sym_get_time_call] = sym_get_time_call,
  [sym_unsafe_cast_call] = sym_unsafe_cast_call,
  [sym_from_some_call] = sym_from_some_call,
  [sym_qualified_call] = sym_qualified_call,
  [sym_identifier] = sym_identifier,
  [sym_constructor] = sym_constructor,
  [sym_qualified] = sym_qualified,
  [sym_string_literal] = sym_string_literal,
  [sym_char_literal] = sym_char_literal,
  [sym_number_literal] = sym_number_literal,
  [sym_operator] = sym_operator,
  [sym_source_file] = sym_source_file,
  [sym__top_item] = sym__top_item,
  [sym_module_header] = sym_module_header,
  [sym__export_paren] = sym__export_paren,
  [sym_import_decl] = sym_import_decl,
  [sym_template_decl] = sym_template_decl,
  [sym_field_block] = sym_field_block,
  [sym_field_decl] = sym_field_decl,
  [sym_type_blob] = sym_type_blob,
  [sym__type_atom] = sym__type_atom,
  [sym_template_body] = sym_template_body,
  [sym__body_item] = sym__body_item,
  [sym_signatory_clause] = sym_signatory_clause,
  [sym_observer_clause] = sym_observer_clause,
  [sym_ensure_clause] = sym_ensure_clause,
  [sym_key_clause] = sym_key_clause,
  [sym_maintainer_clause] = sym_maintainer_clause,
  [sym_deriving_clause] = sym_deriving_clause,
  [sym_controller_can_clause] = sym_controller_can_clause,
  [sym_choice_decl] = sym_choice_decl,
  [sym_choice_modifier] = sym_choice_modifier,
  [sym_implements_clause] = sym_implements_clause,
  [sym_interface_instance_clause] = sym_interface_instance_clause,
  [sym_let_clause] = sym_let_clause,
  [sym_interface_decl] = sym_interface_decl,
  [sym_interface_body] = sym_interface_body,
  [sym_viewtype_decl] = sym_viewtype_decl,
  [sym_data_decl] = sym_data_decl,
  [sym_other_decl] = sym_other_decl,
  [sym_expr_blob] = sym_expr_blob,
  [sym_ctrl_blob] = sym_ctrl_blob,
  [sym_body_blob] = sym_body_blob,
  [sym__blob_token] = sym__blob_token,
  [sym__ctrl_blob_token] = sym__ctrl_blob_token,
  [sym__paren_group] = sym__paren_group,
  [sym__bracket_group] = sym__bracket_group,
  [sym__brace_group] = sym__brace_group,
  [sym__nested_token] = sym__nested_token,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__export_paren_repeat1] = aux_sym__export_paren_repeat1,
  [aux_sym_field_block_repeat1] = aux_sym_field_block_repeat1,
  [aux_sym_field_decl_repeat1] = aux_sym_field_decl_repeat1,
  [aux_sym_type_blob_repeat1] = aux_sym_type_blob_repeat1,
  [aux_sym_template_body_repeat1] = aux_sym_template_body_repeat1,
  [aux_sym_interface_body_repeat1] = aux_sym_interface_body_repeat1,
  [aux_sym_ctrl_blob_repeat1] = aux_sym_ctrl_blob_repeat1,
  [aux_sym__paren_group_repeat1] = aux_sym__paren_group_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_pragma] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_module_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_qualified] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hiding] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_template] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_operator_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_signatory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_observer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ensure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_key] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_maintainer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deriving] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_controller] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_can] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_choice] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nonconsuming] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_preconsuming] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_postconsuming] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implements] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_instance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_requires] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_viewtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_newtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_this] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_exercise_call] = {
    .visible = true,
    .named = true,
  },
  [sym_fetch_call] = {
    .visible = true,
    .named = true,
  },
  [sym_lookup_call] = {
    .visible = true,
    .named = true,
  },
  [sym_create_call] = {
    .visible = true,
    .named = true,
  },
  [sym_archive_call] = {
    .visible = true,
    .named = true,
  },
  [sym_get_time_call] = {
    .visible = true,
    .named = true,
  },
  [sym_unsafe_cast_call] = {
    .visible = true,
    .named = true,
  },
  [sym_from_some_call] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_call] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__top_item] = {
    .visible = false,
    .named = true,
  },
  [sym_module_header] = {
    .visible = true,
    .named = true,
  },
  [sym__export_paren] = {
    .visible = false,
    .named = true,
  },
  [sym_import_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_template_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_field_block] = {
    .visible = true,
    .named = true,
  },
  [sym_field_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_type_blob] = {
    .visible = true,
    .named = true,
  },
  [sym__type_atom] = {
    .visible = false,
    .named = true,
  },
  [sym_template_body] = {
    .visible = true,
    .named = true,
  },
  [sym__body_item] = {
    .visible = false,
    .named = true,
  },
  [sym_signatory_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_observer_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_ensure_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_key_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_maintainer_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_deriving_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_controller_can_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_choice_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_choice_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_implements_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_instance_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_let_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_body] = {
    .visible = true,
    .named = true,
  },
  [sym_viewtype_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_data_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_other_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_blob] = {
    .visible = true,
    .named = true,
  },
  [sym_ctrl_blob] = {
    .visible = true,
    .named = true,
  },
  [sym_body_blob] = {
    .visible = true,
    .named = true,
  },
  [sym__blob_token] = {
    .visible = false,
    .named = true,
  },
  [sym__ctrl_blob_token] = {
    .visible = false,
    .named = true,
  },
  [sym__paren_group] = {
    .visible = false,
    .named = true,
  },
  [sym__bracket_group] = {
    .visible = false,
    .named = true,
  },
  [sym__brace_group] = {
    .visible = false,
    .named = true,
  },
  [sym__nested_token] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__export_paren_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_blob_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interface_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ctrl_blob_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__paren_group_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alias = 1,
  field_body = 2,
  field_controller = 3,
  field_fields = 4,
  field_interface = 5,
  field_modifier = 6,
  field_name = 7,
  field_observer_extra = 8,
  field_parties = 9,
  field_requires = 10,
  field_result_type = 11,
  field_template = 12,
  field_type = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_body] = "body",
  [field_controller] = "controller",
  [field_fields] = "fields",
  [field_interface] = "interface",
  [field_modifier] = "modifier",
  [field_name] = "name",
  [field_observer_extra] = "observer_extra",
  [field_parties] = "parties",
  [field_requires] = "requires",
  [field_result_type] = "result_type",
  [field_template] = "template",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 1},
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 3},
  [12] = {.index = 19, .length = 3},
  [13] = {.index = 22, .length = 3},
  [14] = {.index = 25, .length = 1},
  [15] = {.index = 26, .length = 2},
  [16] = {.index = 28, .length = 2},
  [17] = {.index = 30, .length = 3},
  [18] = {.index = 33, .length = 4},
  [19] = {.index = 37, .length = 5},
  [20] = {.index = 42, .length = 5},
  [21] = {.index = 47, .length = 5},
  [22] = {.index = 52, .length = 6},
  [23] = {.index = 58, .length = 6},
  [24] = {.index = 64, .length = 6},
  [25] = {.index = 70, .length = 7},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 2},
  [2] =
    {field_body, 2},
    {field_name, 1},
  [4] =
    {field_alias, 3},
    {field_name, 1},
  [6] =
    {field_body, 3},
    {field_name, 1},
  [8] =
    {field_alias, 4},
    {field_name, 2},
  [10] =
    {field_body, 1},
  [11] =
    {field_type, 1},
  [12] =
    {field_name, 0},
    {field_type, 2},
  [14] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [16] =
    {field_body, 5},
    {field_fields, 3},
    {field_name, 1},
  [19] =
    {field_body, 5},
    {field_name, 1},
    {field_requires, 3},
  [22] =
    {field_name, 0},
    {field_name, 1, .inherited = true},
    {field_type, 3},
  [25] =
    {field_interface, 1},
  [26] =
    {field_body, 3},
    {field_parties, 1},
  [28] =
    {field_body, 3},
    {field_interface, 1},
  [30] =
    {field_body, 6},
    {field_interface, 2},
    {field_template, 4},
  [33] =
    {field_body, 7},
    {field_controller, 5},
    {field_name, 1},
    {field_result_type, 3},
  [37] =
    {field_body, 8},
    {field_controller, 6},
    {field_modifier, 0},
    {field_name, 2},
    {field_result_type, 4},
  [42] =
    {field_body, 9},
    {field_controller, 7},
    {field_fields, 5},
    {field_name, 1},
    {field_result_type, 3},
  [47] =
    {field_body, 9},
    {field_controller, 7},
    {field_name, 1},
    {field_observer_extra, 5},
    {field_result_type, 3},
  [52] =
    {field_body, 10},
    {field_controller, 8},
    {field_fields, 6},
    {field_modifier, 0},
    {field_name, 2},
    {field_result_type, 4},
  [58] =
    {field_body, 10},
    {field_controller, 8},
    {field_modifier, 0},
    {field_name, 2},
    {field_observer_extra, 6},
    {field_result_type, 4},
  [64] =
    {field_body, 11},
    {field_controller, 9},
    {field_fields, 5},
    {field_name, 1},
    {field_observer_extra, 7},
    {field_result_type, 3},
  [70] =
    {field_body, 12},
    {field_controller, 10},
    {field_fields, 6},
    {field_modifier, 0},
    {field_name, 2},
    {field_observer_extra, 8},
    {field_result_type, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 6,
  [8] = 8,
  [9] = 9,
  [10] = 6,
  [11] = 11,
  [12] = 8,
  [13] = 9,
  [14] = 6,
  [15] = 11,
  [16] = 9,
  [17] = 8,
  [18] = 18,
  [19] = 8,
  [20] = 11,
  [21] = 9,
  [22] = 22,
  [23] = 6,
  [24] = 11,
  [25] = 18,
  [26] = 8,
  [27] = 9,
  [28] = 22,
  [29] = 22,
  [30] = 11,
  [31] = 18,
  [32] = 8,
  [33] = 9,
  [34] = 22,
  [35] = 8,
  [36] = 11,
  [37] = 9,
  [38] = 6,
  [39] = 39,
  [40] = 22,
  [41] = 41,
  [42] = 6,
  [43] = 11,
  [44] = 18,
  [45] = 8,
  [46] = 9,
  [47] = 22,
  [48] = 48,
  [49] = 11,
  [50] = 18,
  [51] = 8,
  [52] = 11,
  [53] = 9,
  [54] = 6,
  [55] = 11,
  [56] = 18,
  [57] = 8,
  [58] = 9,
  [59] = 22,
  [60] = 6,
  [61] = 11,
  [62] = 18,
  [63] = 8,
  [64] = 9,
  [65] = 6,
  [66] = 22,
  [67] = 6,
  [68] = 11,
  [69] = 69,
  [70] = 6,
  [71] = 71,
  [72] = 72,
  [73] = 18,
  [74] = 8,
  [75] = 9,
  [76] = 3,
  [77] = 2,
  [78] = 4,
  [79] = 48,
  [80] = 69,
  [81] = 39,
  [82] = 71,
  [83] = 72,
  [84] = 41,
  [85] = 69,
  [86] = 48,
  [87] = 71,
  [88] = 72,
  [89] = 41,
  [90] = 39,
  [91] = 3,
  [92] = 4,
  [93] = 41,
  [94] = 39,
  [95] = 72,
  [96] = 48,
  [97] = 69,
  [98] = 71,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 101,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 100,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 124,
  [140] = 125,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 4,
  [147] = 4,
  [148] = 3,
  [149] = 126,
  [150] = 150,
  [151] = 151,
  [152] = 4,
  [153] = 99,
  [154] = 154,
  [155] = 129,
  [156] = 128,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 136,
  [161] = 127,
  [162] = 134,
  [163] = 3,
  [164] = 131,
  [165] = 165,
  [166] = 166,
  [167] = 166,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 170,
  [175] = 175,
  [176] = 176,
  [177] = 165,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 175,
  [182] = 182,
  [183] = 180,
  [184] = 171,
  [185] = 172,
  [186] = 169,
  [187] = 179,
  [188] = 173,
  [189] = 168,
  [190] = 178,
  [191] = 182,
  [192] = 176,
  [193] = 48,
  [194] = 69,
  [195] = 41,
  [196] = 72,
  [197] = 41,
  [198] = 71,
  [199] = 39,
  [200] = 48,
  [201] = 39,
  [202] = 69,
  [203] = 39,
  [204] = 71,
  [205] = 69,
  [206] = 48,
  [207] = 72,
  [208] = 41,
  [209] = 72,
  [210] = 71,
  [211] = 39,
  [212] = 72,
  [213] = 48,
  [214] = 71,
  [215] = 41,
  [216] = 69,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 72,
  [244] = 48,
  [245] = 71,
  [246] = 69,
  [247] = 247,
  [248] = 248,
  [249] = 239,
  [250] = 235,
  [251] = 251,
  [252] = 236,
  [253] = 234,
  [254] = 226,
  [255] = 240,
  [256] = 225,
  [257] = 242,
  [258] = 237,
  [259] = 241,
  [260] = 238,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 221,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 220,
  [272] = 272,
  [273] = 221,
  [274] = 220,
  [275] = 220,
  [276] = 221,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 293,
  [296] = 283,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 279,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 281,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 72,
  [311] = 71,
  [312] = 69,
  [313] = 48,
  [314] = 48,
  [315] = 71,
  [316] = 72,
  [317] = 69,
  [318] = 72,
  [319] = 71,
  [320] = 69,
  [321] = 48,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 323,
  [326] = 326,
  [327] = 326,
  [328] = 324,
  [329] = 329,
  [330] = 322,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 333,
  [335] = 335,
  [336] = 335,
  [337] = 331,
  [338] = 332,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 341,
  [347] = 347,
  [348] = 344,
  [349] = 349,
  [350] = 343,
  [351] = 351,
  [352] = 342,
  [353] = 353,
  [354] = 354,
  [355] = 349,
  [356] = 351,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 370,
  [383] = 359,
  [384] = 374,
  [385] = 377,
  [386] = 386,
  [387] = 357,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 381,
  [398] = 398,
  [399] = 399,
  [400] = 396,
  [401] = 401,
  [402] = 402,
  [403] = 386,
  [404] = 392,
  [405] = 405,
  [406] = 363,
  [407] = 364,
  [408] = 399,
  [409] = 409,
  [410] = 388,
  [411] = 389,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 380,
  [417] = 417,
  [418] = 395,
  [419] = 417,
  [420] = 401,
  [421] = 393,
  [422] = 412,
  [423] = 398,
};

static inline bool sym_line_comment_character_set_1(int32_t c) {
  return (c < '<'
    ? (c < '*'
      ? (c < '#'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c < ':'
        ? (c >= '-' && c <= '/')
        : c <= ':')))
    : (c <= '@' || (c < '|'
      ? (c < '^'
        ? c == '\\'
        : c <= '^')
      : (c <= '|' || c == '~'))));
}

static inline bool sym_operator_character_set_1(int32_t c) {
  return (c < '<'
    ? (c < '*'
      ? (c < '#'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c >= '.' && c <= ':')))
    : (c <= '@' || (c < '|'
      ? (c < '^'
        ? c == '\\'
        : c <= '^')
      : (c <= '|' || c == '~'))));
}

static inline bool sym_operator_character_set_2(int32_t c) {
  return (c < '<'
    ? (c < '*'
      ? (c < '#'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c < ':'
        ? (c >= '.' && c <= '/')
        : c <= ':')))
    : (c <= '@' || (c < '|'
      ? (c < '^'
        ? c == '\\'
        : c <= '^')
      : (c <= '|' || c == '~'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(183);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(192);
      if (lookahead == ')') ADVANCE(193);
      if (lookahead == ',') ADVANCE(204);
      if (lookahead == '-') ADVANCE(704);
      if (lookahead == '.') ADVANCE(707);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == ';') ADVANCE(252);
      if (lookahead == '<') ADVANCE(706);
      if (lookahead == '=') ADVANCE(253);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == ']') ADVANCE(271);
      if (lookahead == '`') ADVANCE(256);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'c') ADVANCE(316);
      if (lookahead == 'd') ADVANCE(319);
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead == 'f') ADVANCE(395);
      if (lookahead == 'g') ADVANCE(398);
      if (lookahead == 'h') ADVANCE(446);
      if (lookahead == 'i') ADVANCE(423);
      if (lookahead == 'k') ADVANCE(364);
      if (lookahead == 'l') ADVANCE(399);
      if (lookahead == 'm') ADVANCE(326);
      if (lookahead == 'n') ADVANCE(365);
      if (lookahead == 'o') ADVANCE(343);
      if (lookahead == 'p') ADVANCE(528);
      if (lookahead == 'q') ADVANCE(616);
      if (lookahead == 'r') ADVANCE(367);
      if (lookahead == 's') ADVANCE(447);
      if (lookahead == 't') ADVANCE(368);
      if (lookahead == 'u') ADVANCE(505);
      if (lookahead == 'v') ADVANCE(448);
      if (lookahead == 'w') ADVANCE(443);
      if (lookahead == '{') ADVANCE(272);
      if (lookahead == '}') ADVANCE(273);
      if (lookahead == '~') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(701);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('\\' <= lookahead && lookahead <= '|')) ADVANCE(708);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(194);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(192);
      if (lookahead == ')') ADVANCE(193);
      if (lookahead == ',') ADVANCE(204);
      if (lookahead == '-') ADVANCE(705);
      if (lookahead == '.') ADVANCE(707);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == ';') ADVANCE(252);
      if (lookahead == '<') ADVANCE(706);
      if (lookahead == '=') ADVANCE(254);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == ']') ADVANCE(271);
      if (lookahead == '`') ADVANCE(256);
      if (lookahead == 'a') ADVANCE(573);
      if (lookahead == 'c') ADVANCE(317);
      if (lookahead == 'd') ADVANCE(319);
      if (lookahead == 'e') ADVANCE(473);
      if (lookahead == 'f') ADVANCE(525);
      if (lookahead == 'i') ADVANCE(423);
      if (lookahead == 'k') ADVANCE(364);
      if (lookahead == 'l') ADVANCE(400);
      if (lookahead == 'm') ADVANCE(326);
      if (lookahead == 'n') ADVANCE(365);
      if (lookahead == 'o') ADVANCE(343);
      if (lookahead == 'p') ADVANCE(528);
      if (lookahead == 'r') ADVANCE(367);
      if (lookahead == 's') ADVANCE(447);
      if (lookahead == 't') ADVANCE(368);
      if (lookahead == 'v') ADVANCE(469);
      if (lookahead == 'w') ADVANCE(443);
      if (lookahead == '{') ADVANCE(272);
      if (lookahead == '}') ADVANCE(273);
      if (lookahead == '~') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(701);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('\\' <= lookahead && lookahead <= '|')) ADVANCE(708);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(643);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(192);
      if (lookahead == ')') ADVANCE(193);
      if (lookahead == ',') ADVANCE(204);
      if (lookahead == '-') ADVANCE(705);
      if (lookahead == '.') ADVANCE(707);
      if (lookahead == ';') ADVANCE(252);
      if (lookahead == '<') ADVANCE(706);
      if (lookahead == '=') ADVANCE(254);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == '`') ADVANCE(256);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'c') ADVANCE(341);
      if (lookahead == 'd') ADVANCE(522);
      if (lookahead == 'e') ADVANCE(474);
      if (lookahead == 'f') ADVANCE(396);
      if (lookahead == 'g') ADVANCE(398);
      if (lookahead == 'h') ADVANCE(446);
      if (lookahead == 'i') ADVANCE(425);
      if (lookahead == 'l') ADVANCE(399);
      if (lookahead == 'o') ADVANCE(426);
      if (lookahead == 'p') ADVANCE(618);
      if (lookahead == 'q') ADVANCE(616);
      if (lookahead == 'r') ADVANCE(413);
      if (lookahead == 't') ADVANCE(440);
      if (lookahead == 'u') ADVANCE(505);
      if (lookahead == 'v') ADVANCE(460);
      if (lookahead == 'w') ADVANCE(456);
      if (lookahead == '{') ADVANCE(272);
      if (lookahead == '~') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(701);
      if (('!' <= lookahead && lookahead <= '?') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '|')) ADVANCE(708);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(192);
      if (lookahead == ',') ADVANCE(204);
      if (lookahead == '-') ADVANCE(705);
      if (lookahead == '.') ADVANCE(707);
      if (lookahead == ';') ADVANCE(252);
      if (lookahead == '<') ADVANCE(706);
      if (lookahead == '=') ADVANCE(254);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == '`') ADVANCE(256);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'c') ADVANCE(341);
      if (lookahead == 'd') ADVANCE(522);
      if (lookahead == 'e') ADVANCE(474);
      if (lookahead == 'f') ADVANCE(396);
      if (lookahead == 'g') ADVANCE(398);
      if (lookahead == 'h') ADVANCE(446);
      if (lookahead == 'i') ADVANCE(425);
      if (lookahead == 'l') ADVANCE(399);
      if (lookahead == 'o') ADVANCE(426);
      if (lookahead == 'p') ADVANCE(618);
      if (lookahead == 'q') ADVANCE(616);
      if (lookahead == 'r') ADVANCE(413);
      if (lookahead == 't') ADVANCE(440);
      if (lookahead == 'u') ADVANCE(505);
      if (lookahead == 'v') ADVANCE(460);
      if (lookahead == 'w') ADVANCE(443);
      if (lookahead == '{') ADVANCE(272);
      if (lookahead == '~') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(701);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '?') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '|')) ADVANCE(708);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(192);
      if (lookahead == ',') ADVANCE(204);
      if (lookahead == '-') ADVANCE(705);
      if (lookahead == '.') ADVANCE(707);
      if (lookahead == ';') ADVANCE(252);
      if (lookahead == '<') ADVANCE(706);
      if (lookahead == '=') ADVANCE(254);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == '`') ADVANCE(256);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'c') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(474);
      if (lookahead == 'f') ADVANCE(396);
      if (lookahead == 'g') ADVANCE(398);
      if (lookahead == 'h') ADVANCE(446);
      if (lookahead == 'i') ADVANCE(425);
      if (lookahead == 'l') ADVANCE(399);
      if (lookahead == 'o') ADVANCE(426);
      if (lookahead == 'p') ADVANCE(618);
      if (lookahead == 'q') ADVANCE(616);
      if (lookahead == 'r') ADVANCE(413);
      if (lookahead == 't') ADVANCE(440);
      if (lookahead == 'u') ADVANCE(505);
      if (lookahead == 'v') ADVANCE(460);
      if (lookahead == 'w') ADVANCE(456);
      if (lookahead == '{') ADVANCE(272);
      if (lookahead == '~') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(701);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '?') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '|')) ADVANCE(708);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(192);
      if (lookahead == ',') ADVANCE(204);
      if (lookahead == '-') ADVANCE(705);
      if (lookahead == '.') ADVANCE(707);
      if (lookahead == ';') ADVANCE(252);
      if (lookahead == '<') ADVANCE(706);
      if (lookahead == '=') ADVANCE(254);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == '`') ADVANCE(256);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'c') ADVANCE(340);
      if (lookahead == 'e') ADVANCE(474);
      if (lookahead == 'f') ADVANCE(396);
      if (lookahead == 'g') ADVANCE(398);
      if (lookahead == 'h') ADVANCE(446);
      if (lookahead == 'i') ADVANCE(425);
      if (lookahead == 'l') ADVANCE(399);
      if (lookahead == 'o') ADVANCE(426);
      if (lookahead == 'p') ADVANCE(618);
      if (lookahead == 'q') ADVANCE(616);
      if (lookahead == 'r') ADVANCE(413);
      if (lookahead == 't') ADVANCE(440);
      if (lookahead == 'u') ADVANCE(505);
      if (lookahead == 'v') ADVANCE(460);
      if (lookahead == 'w') ADVANCE(456);
      if (lookahead == '{') ADVANCE(272);
      if (lookahead == '~') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(701);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '?') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '|')) ADVANCE(708);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(192);
      if (lookahead == ',') ADVANCE(204);
      if (lookahead == '-') ADVANCE(705);
      if (lookahead == '.') ADVANCE(707);
      if (lookahead == ';') ADVANCE(252);
      if (lookahead == '<') ADVANCE(706);
      if (lookahead == '=') ADVANCE(254);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == '`') ADVANCE(256);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'c') ADVANCE(318);
      if (lookahead == 'd') ADVANCE(522);
      if (lookahead == 'e') ADVANCE(474);
      if (lookahead == 'f') ADVANCE(396);
      if (lookahead == 'g') ADVANCE(398);
      if (lookahead == 'h') ADVANCE(446);
      if (lookahead == 'i') ADVANCE(425);
      if (lookahead == 'l') ADVANCE(399);
      if (lookahead == 'o') ADVANCE(426);
      if (lookahead == 'p') ADVANCE(618);
      if (lookahead == 'q') ADVANCE(616);
      if (lookahead == 'r') ADVANCE(413);
      if (lookahead == 't') ADVANCE(440);
      if (lookahead == 'u') ADVANCE(505);
      if (lookahead == 'v') ADVANCE(460);
      if (lookahead == 'w') ADVANCE(456);
      if (lookahead == '{') ADVANCE(272);
      if (lookahead == '~') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(701);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '?') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '|')) ADVANCE(708);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(699);
      if (lookahead == '\\') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(700);
      if (lookahead == '\\') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(192);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == 'c') ADVANCE(524);
      if (lookahead == 'o') ADVANCE(344);
      if (lookahead == 'w') ADVANCE(456);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(643);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(192);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == 'c') ADVANCE(524);
      if (lookahead == 'o') ADVANCE(344);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(643);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(192);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == 'w') ADVANCE(444);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(643);
      END_STATE();
    case 14:
      if (lookahead == '(') ADVANCE(192);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(643);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(192);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'k') ADVANCE(43);
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == 'm') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 'o') ADVANCE(34);
      if (lookahead == 'p') ADVANCE(112);
      if (lookahead == 'q') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead == 's') ADVANCE(73);
      if (lookahead == 'v') ADVANCE(77);
      if (lookahead == 'w') ADVANCE(72);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(195);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(185);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '>') ADVANCE(207);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '}') ADVANCE(187);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(165);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '}') ADVANCE(186);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(207);
      END_STATE();
    case 24:
      if (lookahead == '\\') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(10);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(683);
      if (lookahead == 'c') ADVANCE(684);
      if (lookahead == 'e') ADVANCE(695);
      if (lookahead == 'f') ADVANCE(659);
      if (lookahead == 'g') ADVANCE(665);
      if (lookahead == 'l') ADVANCE(681);
      if (lookahead == 'u') ADVANCE(677);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(194);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(683);
      if (lookahead == 'c') ADVANCE(684);
      if (lookahead == 'e') ADVANCE(695);
      if (lookahead == 'f') ADVANCE(659);
      if (lookahead == 'g') ADVANCE(665);
      if (lookahead == 'l') ADVANCE(681);
      if (lookahead == 'u') ADVANCE(677);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(647);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(96);
      if (lookahead == 'h') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(141);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(197);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 64:
      if (lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 65:
      if (lookahead == 'f') ADVANCE(83);
      END_STATE();
    case 66:
      if (lookahead == 'g') ADVANCE(218);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(228);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(230);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(232);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(101);
      END_STATE();
    case 71:
      if (lookahead == 'h') ADVANCE(202);
      END_STATE();
    case 72:
      if (lookahead == 'h') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(87);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 122:
      if (lookahead == 'q') ADVANCE(155);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(244);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(147);
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 153:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 155:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 156:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(133);
      END_STATE();
    case 158:
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 159:
      if (lookahead == 'v') ADVANCE(78);
      END_STATE();
    case 160:
      if (lookahead == 'v') ADVANCE(59);
      END_STATE();
    case 161:
      if (lookahead == 'w') ADVANCE(146);
      END_STATE();
    case 162:
      if (lookahead == 'y') ADVANCE(214);
      END_STATE();
    case 163:
      if (lookahead == 'y') ADVANCE(208);
      END_STATE();
    case 164:
      if (lookahead == 'y') ADVANCE(121);
      END_STATE();
    case 165:
      if (lookahead == '}') ADVANCE(188);
      END_STATE();
    case 166:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(703);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(702);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(703);
      END_STATE();
    case 169:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(646);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 170:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(195);
      END_STATE();
    case 171:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 172:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 173:
      if (eof) ADVANCE(183);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(192);
      if (lookahead == ',') ADVANCE(204);
      if (lookahead == '-') ADVANCE(705);
      if (lookahead == '.') ADVANCE(707);
      if (lookahead == ';') ADVANCE(252);
      if (lookahead == '<') ADVANCE(706);
      if (lookahead == '=') ADVANCE(254);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == '`') ADVANCE(256);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'c') ADVANCE(339);
      if (lookahead == 'd') ADVANCE(321);
      if (lookahead == 'e') ADVANCE(474);
      if (lookahead == 'f') ADVANCE(396);
      if (lookahead == 'g') ADVANCE(398);
      if (lookahead == 'h') ADVANCE(446);
      if (lookahead == 'i') ADVANCE(424);
      if (lookahead == 'l') ADVANCE(399);
      if (lookahead == 'm') ADVANCE(526);
      if (lookahead == 'n') ADVANCE(366);
      if (lookahead == 'o') ADVANCE(426);
      if (lookahead == 'p') ADVANCE(618);
      if (lookahead == 'q') ADVANCE(616);
      if (lookahead == 'r') ADVANCE(413);
      if (lookahead == 't') ADVANCE(368);
      if (lookahead == 'u') ADVANCE(505);
      if (lookahead == 'v') ADVANCE(460);
      if (lookahead == 'w') ADVANCE(456);
      if (lookahead == '{') ADVANCE(272);
      if (lookahead == '~') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(173)
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(701);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '?') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '|')) ADVANCE(708);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      END_STATE();
    case 174:
      if (eof) ADVANCE(183);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(192);
      if (lookahead == ',') ADVANCE(204);
      if (lookahead == '-') ADVANCE(705);
      if (lookahead == '.') ADVANCE(707);
      if (lookahead == ';') ADVANCE(252);
      if (lookahead == '<') ADVANCE(706);
      if (lookahead == '=') ADVANCE(254);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == '`') ADVANCE(256);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'c') ADVANCE(338);
      if (lookahead == 'd') ADVANCE(319);
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead == 'f') ADVANCE(396);
      if (lookahead == 'g') ADVANCE(398);
      if (lookahead == 'h') ADVANCE(446);
      if (lookahead == 'i') ADVANCE(423);
      if (lookahead == 'k') ADVANCE(364);
      if (lookahead == 'l') ADVANCE(399);
      if (lookahead == 'm') ADVANCE(326);
      if (lookahead == 'n') ADVANCE(365);
      if (lookahead == 'o') ADVANCE(343);
      if (lookahead == 'p') ADVANCE(528);
      if (lookahead == 'q') ADVANCE(616);
      if (lookahead == 'r') ADVANCE(413);
      if (lookahead == 's') ADVANCE(447);
      if (lookahead == 't') ADVANCE(368);
      if (lookahead == 'u') ADVANCE(505);
      if (lookahead == 'v') ADVANCE(460);
      if (lookahead == 'w') ADVANCE(456);
      if (lookahead == '{') ADVANCE(272);
      if (lookahead == '~') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(174)
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(701);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '?') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '|')) ADVANCE(708);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      END_STATE();
    case 175:
      if (eof) ADVANCE(183);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(192);
      if (lookahead == ',') ADVANCE(204);
      if (lookahead == '-') ADVANCE(705);
      if (lookahead == '.') ADVANCE(707);
      if (lookahead == ';') ADVANCE(252);
      if (lookahead == '<') ADVANCE(706);
      if (lookahead == '=') ADVANCE(254);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == '`') ADVANCE(256);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'c') ADVANCE(338);
      if (lookahead == 'd') ADVANCE(321);
      if (lookahead == 'e') ADVANCE(474);
      if (lookahead == 'f') ADVANCE(396);
      if (lookahead == 'g') ADVANCE(398);
      if (lookahead == 'h') ADVANCE(446);
      if (lookahead == 'i') ADVANCE(424);
      if (lookahead == 'l') ADVANCE(399);
      if (lookahead == 'm') ADVANCE(526);
      if (lookahead == 'n') ADVANCE(365);
      if (lookahead == 'o') ADVANCE(426);
      if (lookahead == 'p') ADVANCE(528);
      if (lookahead == 'q') ADVANCE(616);
      if (lookahead == 'r') ADVANCE(413);
      if (lookahead == 't') ADVANCE(368);
      if (lookahead == 'u') ADVANCE(505);
      if (lookahead == 'v') ADVANCE(448);
      if (lookahead == 'w') ADVANCE(456);
      if (lookahead == '{') ADVANCE(272);
      if (lookahead == '~') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(175)
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(701);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '?') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '|')) ADVANCE(708);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(644);
      END_STATE();
    case 176:
      if (eof) ADVANCE(183);
      if (lookahead == '(') ADVANCE(192);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == 'c') ADVANCE(439);
      if (lookahead == 'd') ADVANCE(322);
      if (lookahead == 'i') ADVANCE(490);
      if (lookahead == 'l') ADVANCE(400);
      if (lookahead == 'm') ADVANCE(526);
      if (lookahead == 'n') ADVANCE(365);
      if (lookahead == 'p') ADVANCE(529);
      if (lookahead == 't') ADVANCE(369);
      if (lookahead == 'v') ADVANCE(469);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(176)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(643);
      END_STATE();
    case 177:
      if (eof) ADVANCE(183);
      if (lookahead == '(') ADVANCE(192);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(573);
      if (lookahead == 'c') ADVANCE(471);
      if (lookahead == 'd') ADVANCE(322);
      if (lookahead == 'h') ADVANCE(446);
      if (lookahead == 'i') ADVANCE(490);
      if (lookahead == 'm') ADVANCE(526);
      if (lookahead == 'n') ADVANCE(366);
      if (lookahead == 'q') ADVANCE(616);
      if (lookahead == 't') ADVANCE(369);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(177)
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 178:
      if (eof) ADVANCE(183);
      if (lookahead == '(') ADVANCE(192);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(471);
      if (lookahead == 'd') ADVANCE(322);
      if (lookahead == 'h') ADVANCE(446);
      if (lookahead == 'i') ADVANCE(490);
      if (lookahead == 'm') ADVANCE(526);
      if (lookahead == 'n') ADVANCE(366);
      if (lookahead == 'q') ADVANCE(616);
      if (lookahead == 't') ADVANCE(369);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(178)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 179:
      if (eof) ADVANCE(183);
      if (lookahead == '(') ADVANCE(192);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(471);
      if (lookahead == 'd') ADVANCE(322);
      if (lookahead == 'h') ADVANCE(446);
      if (lookahead == 'i') ADVANCE(490);
      if (lookahead == 'm') ADVANCE(526);
      if (lookahead == 'n') ADVANCE(366);
      if (lookahead == 't') ADVANCE(369);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(179)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 180:
      if (eof) ADVANCE(183);
      if (lookahead == ',') ADVANCE(204);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(205);
      if (lookahead == 'c') ADVANCE(471);
      if (lookahead == 'd') ADVANCE(322);
      if (lookahead == 'i') ADVANCE(490);
      if (lookahead == 'm') ADVANCE(526);
      if (lookahead == 'n') ADVANCE(366);
      if (lookahead == 't') ADVANCE(369);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(180)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(643);
      END_STATE();
    case 181:
      if (eof) ADVANCE(183);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(439);
      if (lookahead == 'd') ADVANCE(320);
      if (lookahead == 'e') ADVANCE(501);
      if (lookahead == 'i') ADVANCE(483);
      if (lookahead == 'k') ADVANCE(364);
      if (lookahead == 'l') ADVANCE(400);
      if (lookahead == 'm') ADVANCE(326);
      if (lookahead == 'n') ADVANCE(365);
      if (lookahead == 'o') ADVANCE(344);
      if (lookahead == 'p') ADVANCE(529);
      if (lookahead == 's') ADVANCE(447);
      if (lookahead == 't') ADVANCE(369);
      if (lookahead == 'w') ADVANCE(444);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(181)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(645);
      END_STATE();
    case 182:
      if (eof) ADVANCE(183);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(439);
      if (lookahead == 'd') ADVANCE(320);
      if (lookahead == 'e') ADVANCE(501);
      if (lookahead == 'i') ADVANCE(483);
      if (lookahead == 'k') ADVANCE(364);
      if (lookahead == 'l') ADVANCE(400);
      if (lookahead == 'm') ADVANCE(326);
      if (lookahead == 'n') ADVANCE(365);
      if (lookahead == 'o') ADVANCE(344);
      if (lookahead == 'p') ADVANCE(529);
      if (lookahead == 's') ADVANCE(447);
      if (lookahead == 't') ADVANCE(369);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(182)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(195);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_line_comment);
      if (sym_line_comment_character_set_1(lookahead)) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_pragma);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_qualified);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_template);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_with);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (sym_line_comment_character_set_1(lookahead)) ADVANCE(708);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_operator_type);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_signatory);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_signatory);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_observer);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_observer);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_ensure);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_ensure);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_key);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_key);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_maintainer);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_maintainer);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_deriving);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_controller);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_controller);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_can);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_can);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_choice);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_choice);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_nonconsuming);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_nonconsuming);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_preconsuming);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_preconsuming);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_postconsuming);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_postconsuming);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_implements);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_implements);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_interface);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_instance);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_requires);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_requires);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_viewtype);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_viewtype);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(708);
      if (sym_line_comment_character_set_1(lookahead)) ADVANCE(708);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (sym_line_comment_character_set_1(lookahead)) ADVANCE(708);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      if (sym_line_comment_character_set_1(lookahead)) ADVANCE(708);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (sym_line_comment_character_set_1(lookahead)) ADVANCE(708);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_AT);
      if (sym_line_comment_character_set_1(lookahead)) ADVANCE(708);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (sym_line_comment_character_set_1(lookahead)) ADVANCE(708);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 's') ADVANCE(603);
      if (lookahead == 't') ADVANCE(406);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_this);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_pure);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_exercise_call);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_exercise_call);
      if (lookahead == 'B') ADVANCE(640);
      if (lookahead == 'C') ADVANCE(488);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_exercise_call);
      if (lookahead == 'C') ADVANCE(488);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_fetch_call);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_fetch_call);
      if (lookahead == 'B') ADVANCE(633);
      if (lookahead == 'F') ADVANCE(568);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_lookup_call);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_create_call);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_create_call);
      if (lookahead == 'A') ADVANCE(503);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_create_call);
      if (lookahead == 'C') ADVANCE(489);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_archive_call);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_get_time_call);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_unsafe_cast_call);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_from_some_call);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_from_some_call);
      if (lookahead == 'N') ADVANCE(539);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_qualified_call);
      if (lookahead == 'A') ADVANCE(298);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_qualified_call);
      if (lookahead == 'B') ADVANCE(303);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_qualified_call);
      if (lookahead == 'E') ADVANCE(301);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_qualified_call);
      if (lookahead == 'K') ADVANCE(296);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_qualified_call);
      if (lookahead == 'c') ADVANCE(297);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_qualified_call);
      if (lookahead == 'd') ADVANCE(290);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_qualified_call);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_qualified_call);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_qualified_call);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_qualified_call);
      if (lookahead == 'i') ADVANCE(300);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_qualified_call);
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_qualified_call);
      if (lookahead == 'r') ADVANCE(292);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_qualified_call);
      if (lookahead == 's') ADVANCE(294);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_qualified_call);
      if (lookahead == 'x') ADVANCE(295);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_qualified_call);
      if (lookahead == 'y') ADVANCE(304);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_qualified_call);
      if (lookahead == 'y') ADVANCE(291);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_qualified_call);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(638);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(333);
      if (lookahead == 'F') ADVANCE(569);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(631);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(516);
      if (lookahead == 'S') ADVANCE(538);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(521);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(403);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(405);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(407);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(546);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(453);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(518);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(497);
      if (lookahead == 'h') ADVANCE(532);
      if (lookahead == 'l') ADVANCE(327);
      if (lookahead == 'o') ADVANCE(508);
      if (lookahead == 'r') ADVANCE(397);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(497);
      if (lookahead == 'h') ADVANCE(532);
      if (lookahead == 'l') ADVANCE(327);
      if (lookahead == 'o') ADVANCE(508);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(497);
      if (lookahead == 'r') ADVANCE(397);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(600);
      if (lookahead == 'e') ADVANCE(560);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(600);
      if (lookahead == 'e') ADVANCE(560);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(600);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(600);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(476);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(248);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(429);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(455);
      if (lookahead == 'o') ADVANCE(362);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(582);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(475);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(514);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(607);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(602);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(430);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(587);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(608);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(353);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(461);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(583);
      if (lookahead == 'h') ADVANCE(532);
      if (lookahead == 'l') ADVANCE(327);
      if (lookahead == 'o') ADVANCE(508);
      if (lookahead == 'r') ADVANCE(397);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(583);
      if (lookahead == 'l') ADVANCE(327);
      if (lookahead == 'r') ADVANCE(397);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(583);
      if (lookahead == 'o') ADVANCE(508);
      if (lookahead == 'r') ADVANCE(397);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(583);
      if (lookahead == 'r') ADVANCE(397);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(586);
      if (lookahead == 'f') ADVANCE(262);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(586);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(479);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(445);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(442);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(537);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(466);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(386);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(389);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(393);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(390);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(467);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(540);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(541);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(307);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(198);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(274);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(280);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(617);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(457);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(632);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(629);
      if (lookahead == 'o') ADVANCE(500);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(629);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(487);
      if (lookahead == 'h') ADVANCE(404);
      if (lookahead == 'y') ADVANCE(545);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(487);
      if (lookahead == 'y') ADVANCE(545);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(283);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(287);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(247);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(610);
      if (lookahead == 'o') ADVANCE(552);
      if (lookahead == 'r') ADVANCE(527);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(610);
      if (lookahead == 'r') ADVANCE(527);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(330);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(594);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == 'o') ADVANCE(523);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(557);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(635);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(498);
      if (lookahead == 'i') ADVANCE(574);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(636);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(556);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(637);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(567);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(576);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(553);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(554);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(555);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(611);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(564);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(492);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(512);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(630);
      if (lookahead == 's') ADVANCE(450);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(630);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(571);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(570);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(572);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(356);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(263);
      if (lookahead == 'm') ADVANCE(542);
      if (lookahead == 'n') ADVANCE(260);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(263);
      if (lookahead == 'm') ADVANCE(549);
      if (lookahead == 'n') ADVANCE(260);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(263);
      if (lookahead == 'n') ADVANCE(261);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(262);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(334);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(465);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(380);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(391);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(336);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(342);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(200);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(219);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(229);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(231);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(233);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(515);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(532);
      if (lookahead == 'l') ADVANCE(327);
      if (lookahead == 'o') ADVANCE(508);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(404);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(203);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(278);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(414);
      if (lookahead == 'i') ADVANCE(599);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(414);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(451);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(363);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(438);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(417);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(628);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(626);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(350);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(491);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(517);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(599);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(502);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(536);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(504);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(581);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(513);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(506);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(507);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(509);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(402);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(588);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(589);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(566);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(418);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(619);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(327);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(585);
      if (lookahead == 'n') ADVANCE(578);
      if (lookahead == 'x') ADVANCE(401);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(585);
      if (lookahead == 'n') ADVANCE(578);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(585);
      if (lookahead == 'x') ADVANCE(401);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(286);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(454);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(415);
      if (lookahead == 'o') ADVANCE(562);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(379);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(378);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(411);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(480);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(335);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(542);
      if (lookahead == 'n') ADVANCE(590);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(308);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(309);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(313);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(544);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(360);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(361);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(549);
      if (lookahead == 'n') ADVANCE(590);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(382);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(416);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(385);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(462);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(463);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(464);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(223);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(264);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(268);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(348);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(578);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(433);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(358);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(434);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(579);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(435);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(436);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(601);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(437);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(580);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(328);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(605);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(412);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(351);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(331);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(613);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(604);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(591);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(592);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(593);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(614);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(470);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(508);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(552);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(362);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(484);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(584);
      if (lookahead == 'r') ADVANCE(422);
      if (lookahead == 'u') ADVANCE(563);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(584);
      if (lookahead == 'r') ADVANCE(422);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(485);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(452);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(562);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(486);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(558);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(511);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(510);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(493);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(609);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(519);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(520);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(477);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(305);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(482);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(373);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(606);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(383);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(388);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(533);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(622);
      if (lookahead == 't') ADVANCE(621);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(346);
      if (lookahead == 's') ADVANCE(199);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(241);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(211);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(221);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(217);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(427);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(349);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(634);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(531);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(449);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(499);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(596);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(372);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(374);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(377);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(409);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(627);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(530);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(534);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(431);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(355);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(432);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(199);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(251);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(245);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(235);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(623);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(325);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(620);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(450);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(575);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(615);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(371);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(408);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(597);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(384);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(394);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(603);
      if (lookahead == 't') ADVANCE(406);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(332);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(624);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(625);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(314);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(285);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(639);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(441);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(324);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(559);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(535);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(329);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(337);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(577);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(458);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(376);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(387);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(392);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(347);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(621);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(641);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(420);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(421);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(357);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(323);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(478);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(563);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(543);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(494);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(561);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(468);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(565);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(495);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(496);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(381);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(410);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(459);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(598);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(612);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(419);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(215);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(310);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(209);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(277);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(279);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(276);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(311);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(547);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(312);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(548);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_constructor);
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_constructor);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_constructor);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'B') ADVANCE(697);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'C') ADVANCE(655);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'K') ADVANCE(666);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'S') ADVANCE(680);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'T') ADVANCE(673);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'a') ADVANCE(668);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'a') ADVANCE(691);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'a') ADVANCE(687);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'c') ADVANCE(669);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'c') ADVANCE(670);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'c') ADVANCE(672);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'e') ADVANCE(692);
      if (lookahead == 'r') ADVANCE(678);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'e') ADVANCE(289);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'e') ADVANCE(288);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'e') ADVANCE(649);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'e') ADVANCE(689);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'e') ADVANCE(696);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'e') ADVANCE(685);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'f') ADVANCE(664);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'h') ADVANCE(671);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'h') ADVANCE(289);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'i') ADVANCE(694);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'i') ADVANCE(688);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'i') ADVANCE(676);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'k') ADVANCE(693);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'm') ADVANCE(651);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'm') ADVANCE(663);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'n') ADVANCE(686);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'o') ADVANCE(675);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'o') ADVANCE(674);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'o') ADVANCE(676);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'o') ADVANCE(679);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'p') ADVANCE(648);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'r') ADVANCE(656);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'r') ADVANCE(660);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'r') ADVANCE(658);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 's') ADVANCE(653);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 's') ADVANCE(690);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 's') ADVANCE(661);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 't') ADVANCE(652);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 't') ADVANCE(304);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 't') ADVANCE(662);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 't') ADVANCE(657);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'u') ADVANCE(682);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'v') ADVANCE(663);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'x') ADVANCE(667);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'y') ADVANCE(304);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == 'y') ADVANCE(650);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_qualified);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(698);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_char_literal);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(167);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(701);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(702);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(703);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '>') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(701);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(708);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '-') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(701);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(708);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '-') ADVANCE(255);
      if (sym_operator_character_set_2(lookahead)) ADVANCE(708);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '.') ADVANCE(257);
      if (sym_line_comment_character_set_1(lookahead)) ADVANCE(708);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_operator);
      if (sym_line_comment_character_set_1(lookahead)) ADVANCE(708);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 180},
  [2] = {.lex_state = 174},
  [3] = {.lex_state = 174},
  [4] = {.lex_state = 174},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 174},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 174},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 174},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 174},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 174},
  [72] = {.lex_state = 174},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 175},
  [77] = {.lex_state = 175},
  [78] = {.lex_state = 175},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 175},
  [86] = {.lex_state = 175},
  [87] = {.lex_state = 175},
  [88] = {.lex_state = 175},
  [89] = {.lex_state = 175},
  [90] = {.lex_state = 175},
  [91] = {.lex_state = 173},
  [92] = {.lex_state = 173},
  [93] = {.lex_state = 173},
  [94] = {.lex_state = 173},
  [95] = {.lex_state = 173},
  [96] = {.lex_state = 173},
  [97] = {.lex_state = 173},
  [98] = {.lex_state = 173},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 5},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 5},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 6},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 3},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 3},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 6},
  [203] = {.lex_state = 6},
  [204] = {.lex_state = 6},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 3},
  [207] = {.lex_state = 6},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 5},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 5},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 182},
  [218] = {.lex_state = 182},
  [219] = {.lex_state = 15},
  [220] = {.lex_state = 176},
  [221] = {.lex_state = 176},
  [222] = {.lex_state = 176},
  [223] = {.lex_state = 181},
  [224] = {.lex_state = 176},
  [225] = {.lex_state = 182},
  [226] = {.lex_state = 182},
  [227] = {.lex_state = 182},
  [228] = {.lex_state = 182},
  [229] = {.lex_state = 182},
  [230] = {.lex_state = 182},
  [231] = {.lex_state = 182},
  [232] = {.lex_state = 182},
  [233] = {.lex_state = 182},
  [234] = {.lex_state = 182},
  [235] = {.lex_state = 182},
  [236] = {.lex_state = 182},
  [237] = {.lex_state = 182},
  [238] = {.lex_state = 182},
  [239] = {.lex_state = 182},
  [240] = {.lex_state = 182},
  [241] = {.lex_state = 182},
  [242] = {.lex_state = 182},
  [243] = {.lex_state = 176},
  [244] = {.lex_state = 176},
  [245] = {.lex_state = 176},
  [246] = {.lex_state = 176},
  [247] = {.lex_state = 180},
  [248] = {.lex_state = 180},
  [249] = {.lex_state = 176},
  [250] = {.lex_state = 176},
  [251] = {.lex_state = 176},
  [252] = {.lex_state = 176},
  [253] = {.lex_state = 176},
  [254] = {.lex_state = 176},
  [255] = {.lex_state = 176},
  [256] = {.lex_state = 176},
  [257] = {.lex_state = 176},
  [258] = {.lex_state = 176},
  [259] = {.lex_state = 176},
  [260] = {.lex_state = 176},
  [261] = {.lex_state = 15},
  [262] = {.lex_state = 15},
  [263] = {.lex_state = 177},
  [264] = {.lex_state = 177},
  [265] = {.lex_state = 178},
  [266] = {.lex_state = 178},
  [267] = {.lex_state = 11},
  [268] = {.lex_state = 179},
  [269] = {.lex_state = 179},
  [270] = {.lex_state = 179},
  [271] = {.lex_state = 11},
  [272] = {.lex_state = 179},
  [273] = {.lex_state = 12},
  [274] = {.lex_state = 12},
  [275] = {.lex_state = 13},
  [276] = {.lex_state = 13},
  [277] = {.lex_state = 180},
  [278] = {.lex_state = 180},
  [279] = {.lex_state = 14},
  [280] = {.lex_state = 180},
  [281] = {.lex_state = 14},
  [282] = {.lex_state = 180},
  [283] = {.lex_state = 14},
  [284] = {.lex_state = 180},
  [285] = {.lex_state = 180},
  [286] = {.lex_state = 180},
  [287] = {.lex_state = 14},
  [288] = {.lex_state = 180},
  [289] = {.lex_state = 180},
  [290] = {.lex_state = 180},
  [291] = {.lex_state = 180},
  [292] = {.lex_state = 180},
  [293] = {.lex_state = 14},
  [294] = {.lex_state = 180},
  [295] = {.lex_state = 14},
  [296] = {.lex_state = 14},
  [297] = {.lex_state = 180},
  [298] = {.lex_state = 180},
  [299] = {.lex_state = 180},
  [300] = {.lex_state = 14},
  [301] = {.lex_state = 180},
  [302] = {.lex_state = 180},
  [303] = {.lex_state = 180},
  [304] = {.lex_state = 180},
  [305] = {.lex_state = 14},
  [306] = {.lex_state = 180},
  [307] = {.lex_state = 180},
  [308] = {.lex_state = 180},
  [309] = {.lex_state = 180},
  [310] = {.lex_state = 11},
  [311] = {.lex_state = 11},
  [312] = {.lex_state = 11},
  [313] = {.lex_state = 11},
  [314] = {.lex_state = 12},
  [315] = {.lex_state = 12},
  [316] = {.lex_state = 12},
  [317] = {.lex_state = 12},
  [318] = {.lex_state = 13},
  [319] = {.lex_state = 13},
  [320] = {.lex_state = 13},
  [321] = {.lex_state = 13},
  [322] = {.lex_state = 12},
  [323] = {.lex_state = 12},
  [324] = {.lex_state = 14},
  [325] = {.lex_state = 13},
  [326] = {.lex_state = 14},
  [327] = {.lex_state = 14},
  [328] = {.lex_state = 14},
  [329] = {.lex_state = 14},
  [330] = {.lex_state = 13},
  [331] = {.lex_state = 15},
  [332] = {.lex_state = 15},
  [333] = {.lex_state = 180},
  [334] = {.lex_state = 180},
  [335] = {.lex_state = 180},
  [336] = {.lex_state = 180},
  [337] = {.lex_state = 15},
  [338] = {.lex_state = 15},
  [339] = {.lex_state = 180},
  [340] = {.lex_state = 15},
  [341] = {.lex_state = 12},
  [342] = {.lex_state = 12},
  [343] = {.lex_state = 180},
  [344] = {.lex_state = 15},
  [345] = {.lex_state = 180},
  [346] = {.lex_state = 13},
  [347] = {.lex_state = 15},
  [348] = {.lex_state = 15},
  [349] = {.lex_state = 15},
  [350] = {.lex_state = 180},
  [351] = {.lex_state = 180},
  [352] = {.lex_state = 13},
  [353] = {.lex_state = 180},
  [354] = {.lex_state = 15},
  [355] = {.lex_state = 15},
  [356] = {.lex_state = 180},
  [357] = {.lex_state = 15},
  [358] = {.lex_state = 15},
  [359] = {.lex_state = 15},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 182},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 15},
  [364] = {.lex_state = 15},
  [365] = {.lex_state = 182},
  [366] = {.lex_state = 15},
  [367] = {.lex_state = 182},
  [368] = {.lex_state = 15},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 15},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 181},
  [373] = {.lex_state = 181},
  [374] = {.lex_state = 15},
  [375] = {.lex_state = 181},
  [376] = {.lex_state = 181},
  [377] = {.lex_state = 15},
  [378] = {.lex_state = 182},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 15},
  [381] = {.lex_state = 15},
  [382] = {.lex_state = 15},
  [383] = {.lex_state = 15},
  [384] = {.lex_state = 15},
  [385] = {.lex_state = 15},
  [386] = {.lex_state = 15},
  [387] = {.lex_state = 15},
  [388] = {.lex_state = 15},
  [389] = {.lex_state = 15},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 15},
  [392] = {.lex_state = 15},
  [393] = {.lex_state = 181},
  [394] = {.lex_state = 15},
  [395] = {.lex_state = 15},
  [396] = {.lex_state = 15},
  [397] = {.lex_state = 15},
  [398] = {.lex_state = 15},
  [399] = {.lex_state = 15},
  [400] = {.lex_state = 15},
  [401] = {.lex_state = 180},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 15},
  [404] = {.lex_state = 15},
  [405] = {.lex_state = 15},
  [406] = {.lex_state = 15},
  [407] = {.lex_state = 15},
  [408] = {.lex_state = 15},
  [409] = {.lex_state = 15},
  [410] = {.lex_state = 15},
  [411] = {.lex_state = 15},
  [412] = {.lex_state = 181},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 14},
  [416] = {.lex_state = 15},
  [417] = {.lex_state = 180},
  [418] = {.lex_state = 15},
  [419] = {.lex_state = 180},
  [420] = {.lex_state = 180},
  [421] = {.lex_state = 181},
  [422] = {.lex_state = 181},
  [423] = {.lex_state = 15},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_module_name] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_qualified] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_hiding] = ACTIONS(1),
    [anon_sym_template] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_operator_type] = ACTIONS(1),
    [anon_sym_signatory] = ACTIONS(1),
    [anon_sym_observer] = ACTIONS(1),
    [anon_sym_ensure] = ACTIONS(1),
    [anon_sym_key] = ACTIONS(1),
    [anon_sym_maintainer] = ACTIONS(1),
    [anon_sym_deriving] = ACTIONS(1),
    [anon_sym_controller] = ACTIONS(1),
    [anon_sym_can] = ACTIONS(1),
    [anon_sym_choice] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_nonconsuming] = ACTIONS(1),
    [anon_sym_preconsuming] = ACTIONS(1),
    [anon_sym_postconsuming] = ACTIONS(1),
    [anon_sym_implements] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_instance] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_requires] = ACTIONS(1),
    [anon_sym_viewtype] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [anon_sym_newtype] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_this] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_pure] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_exercise_call] = ACTIONS(1),
    [sym_fetch_call] = ACTIONS(1),
    [sym_lookup_call] = ACTIONS(1),
    [sym_create_call] = ACTIONS(1),
    [sym_archive_call] = ACTIONS(1),
    [sym_get_time_call] = ACTIONS(1),
    [sym_unsafe_cast_call] = ACTIONS(1),
    [sym_from_some_call] = ACTIONS(1),
    [sym_qualified_call] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_constructor] = ACTIONS(1),
    [sym_qualified] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [sym_char_literal] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [sym_operator] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(371),
    [sym__top_item] = STATE(248),
    [sym_module_header] = STATE(248),
    [sym_import_decl] = STATE(248),
    [sym_template_decl] = STATE(248),
    [sym_interface_decl] = STATE(248),
    [sym_data_decl] = STATE(248),
    [sym_other_decl] = STATE(248),
    [aux_sym_source_file_repeat1] = STATE(248),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_template] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(15),
    [anon_sym_data] = ACTIONS(17),
    [anon_sym_newtype] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_class] = ACTIONS(15),
    [sym_identifier] = ACTIONS(15),
  },
  [2] = {
    [sym__blob_token] = STATE(4),
    [sym__paren_group] = STATE(4),
    [sym__bracket_group] = STATE(4),
    [sym__brace_group] = STATE(4),
    [aux_sym__export_paren_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_import] = ACTIONS(23),
    [anon_sym_qualified] = ACTIONS(27),
    [anon_sym_as] = ACTIONS(27),
    [anon_sym_hiding] = ACTIONS(27),
    [anon_sym_template] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_signatory] = ACTIONS(23),
    [anon_sym_observer] = ACTIONS(23),
    [anon_sym_ensure] = ACTIONS(23),
    [anon_sym_key] = ACTIONS(23),
    [anon_sym_maintainer] = ACTIONS(23),
    [anon_sym_deriving] = ACTIONS(23),
    [anon_sym_controller] = ACTIONS(23),
    [anon_sym_choice] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(27),
    [anon_sym_nonconsuming] = ACTIONS(23),
    [anon_sym_preconsuming] = ACTIONS(23),
    [anon_sym_postconsuming] = ACTIONS(23),
    [anon_sym_implements] = ACTIONS(23),
    [anon_sym_interface] = ACTIONS(23),
    [anon_sym_instance] = ACTIONS(23),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_data] = ACTIONS(23),
    [anon_sym_newtype] = ACTIONS(23),
    [anon_sym_type] = ACTIONS(23),
    [anon_sym_class] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(29),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_LT_DASH] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_in] = ACTIONS(27),
    [anon_sym_of] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(27),
    [anon_sym_then] = ACTIONS(27),
    [anon_sym_else] = ACTIONS(27),
    [anon_sym_case] = ACTIONS(27),
    [anon_sym_this] = ACTIONS(27),
    [anon_sym_return] = ACTIONS(27),
    [anon_sym_pure] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_exercise_call] = ACTIONS(29),
    [sym_fetch_call] = ACTIONS(29),
    [sym_lookup_call] = ACTIONS(29),
    [sym_create_call] = ACTIONS(29),
    [sym_archive_call] = ACTIONS(29),
    [sym_get_time_call] = ACTIONS(29),
    [sym_unsafe_cast_call] = ACTIONS(29),
    [sym_from_some_call] = ACTIONS(29),
    [sym_qualified_call] = ACTIONS(29),
    [sym_identifier] = ACTIONS(27),
    [sym_constructor] = ACTIONS(27),
    [sym_qualified] = ACTIONS(27),
    [sym_string_literal] = ACTIONS(29),
    [sym_char_literal] = ACTIONS(29),
    [sym_number_literal] = ACTIONS(29),
    [sym_operator] = ACTIONS(27),
  },
  [3] = {
    [sym__blob_token] = STATE(4),
    [sym__paren_group] = STATE(4),
    [sym__bracket_group] = STATE(4),
    [sym__brace_group] = STATE(4),
    [aux_sym__export_paren_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_import] = ACTIONS(37),
    [anon_sym_qualified] = ACTIONS(27),
    [anon_sym_as] = ACTIONS(27),
    [anon_sym_hiding] = ACTIONS(27),
    [anon_sym_template] = ACTIONS(37),
    [anon_sym_with] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_signatory] = ACTIONS(37),
    [anon_sym_observer] = ACTIONS(37),
    [anon_sym_ensure] = ACTIONS(37),
    [anon_sym_key] = ACTIONS(37),
    [anon_sym_maintainer] = ACTIONS(37),
    [anon_sym_deriving] = ACTIONS(37),
    [anon_sym_controller] = ACTIONS(37),
    [anon_sym_choice] = ACTIONS(37),
    [anon_sym_do] = ACTIONS(27),
    [anon_sym_nonconsuming] = ACTIONS(37),
    [anon_sym_preconsuming] = ACTIONS(37),
    [anon_sym_postconsuming] = ACTIONS(37),
    [anon_sym_implements] = ACTIONS(37),
    [anon_sym_interface] = ACTIONS(37),
    [anon_sym_instance] = ACTIONS(37),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_data] = ACTIONS(37),
    [anon_sym_newtype] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_class] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(29),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_LT_DASH] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_in] = ACTIONS(27),
    [anon_sym_of] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(27),
    [anon_sym_then] = ACTIONS(27),
    [anon_sym_else] = ACTIONS(27),
    [anon_sym_case] = ACTIONS(27),
    [anon_sym_this] = ACTIONS(27),
    [anon_sym_return] = ACTIONS(27),
    [anon_sym_pure] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_exercise_call] = ACTIONS(29),
    [sym_fetch_call] = ACTIONS(29),
    [sym_lookup_call] = ACTIONS(29),
    [sym_create_call] = ACTIONS(29),
    [sym_archive_call] = ACTIONS(29),
    [sym_get_time_call] = ACTIONS(29),
    [sym_unsafe_cast_call] = ACTIONS(29),
    [sym_from_some_call] = ACTIONS(29),
    [sym_qualified_call] = ACTIONS(29),
    [sym_identifier] = ACTIONS(27),
    [sym_constructor] = ACTIONS(27),
    [sym_qualified] = ACTIONS(27),
    [sym_string_literal] = ACTIONS(29),
    [sym_char_literal] = ACTIONS(29),
    [sym_number_literal] = ACTIONS(29),
    [sym_operator] = ACTIONS(27),
  },
  [4] = {
    [sym__blob_token] = STATE(4),
    [sym__paren_group] = STATE(4),
    [sym__bracket_group] = STATE(4),
    [sym__brace_group] = STATE(4),
    [aux_sym__export_paren_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_import] = ACTIONS(41),
    [anon_sym_qualified] = ACTIONS(46),
    [anon_sym_as] = ACTIONS(46),
    [anon_sym_hiding] = ACTIONS(46),
    [anon_sym_template] = ACTIONS(41),
    [anon_sym_with] = ACTIONS(46),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_signatory] = ACTIONS(41),
    [anon_sym_observer] = ACTIONS(41),
    [anon_sym_ensure] = ACTIONS(41),
    [anon_sym_key] = ACTIONS(41),
    [anon_sym_maintainer] = ACTIONS(41),
    [anon_sym_deriving] = ACTIONS(41),
    [anon_sym_controller] = ACTIONS(41),
    [anon_sym_choice] = ACTIONS(41),
    [anon_sym_do] = ACTIONS(46),
    [anon_sym_nonconsuming] = ACTIONS(41),
    [anon_sym_preconsuming] = ACTIONS(41),
    [anon_sym_postconsuming] = ACTIONS(41),
    [anon_sym_implements] = ACTIONS(41),
    [anon_sym_interface] = ACTIONS(41),
    [anon_sym_instance] = ACTIONS(41),
    [anon_sym_let] = ACTIONS(46),
    [anon_sym_data] = ACTIONS(41),
    [anon_sym_newtype] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_class] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(46),
    [anon_sym_LT_DASH] = ACTIONS(46),
    [anon_sym_BQUOTE] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(46),
    [anon_sym_AT] = ACTIONS(46),
    [anon_sym_TILDE] = ACTIONS(46),
    [anon_sym_in] = ACTIONS(46),
    [anon_sym_of] = ACTIONS(46),
    [anon_sym_if] = ACTIONS(46),
    [anon_sym_then] = ACTIONS(46),
    [anon_sym_else] = ACTIONS(46),
    [anon_sym_case] = ACTIONS(46),
    [anon_sym_this] = ACTIONS(46),
    [anon_sym_return] = ACTIONS(46),
    [anon_sym_pure] = ACTIONS(46),
    [anon_sym_LBRACK] = ACTIONS(52),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_exercise_call] = ACTIONS(49),
    [sym_fetch_call] = ACTIONS(49),
    [sym_lookup_call] = ACTIONS(49),
    [sym_create_call] = ACTIONS(49),
    [sym_archive_call] = ACTIONS(49),
    [sym_get_time_call] = ACTIONS(49),
    [sym_unsafe_cast_call] = ACTIONS(49),
    [sym_from_some_call] = ACTIONS(49),
    [sym_qualified_call] = ACTIONS(49),
    [sym_identifier] = ACTIONS(46),
    [sym_constructor] = ACTIONS(46),
    [sym_qualified] = ACTIONS(46),
    [sym_string_literal] = ACTIONS(49),
    [sym_char_literal] = ACTIONS(49),
    [sym_number_literal] = ACTIONS(49),
    [sym_operator] = ACTIONS(46),
  },
  [5] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(58),
    [anon_sym_where] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(64),
    [anon_sym_import] = ACTIONS(58),
    [anon_sym_as] = ACTIONS(58),
    [anon_sym_template] = ACTIONS(58),
    [anon_sym_with] = ACTIONS(58),
    [anon_sym_COMMA] = ACTIONS(66),
    [anon_sym_COLON] = ACTIONS(58),
    [anon_sym_signatory] = ACTIONS(58),
    [anon_sym_observer] = ACTIONS(58),
    [anon_sym_ensure] = ACTIONS(58),
    [anon_sym_key] = ACTIONS(58),
    [anon_sym_maintainer] = ACTIONS(58),
    [anon_sym_deriving] = ACTIONS(58),
    [anon_sym_controller] = ACTIONS(58),
    [anon_sym_can] = ACTIONS(58),
    [anon_sym_choice] = ACTIONS(58),
    [anon_sym_do] = ACTIONS(58),
    [anon_sym_nonconsuming] = ACTIONS(58),
    [anon_sym_preconsuming] = ACTIONS(58),
    [anon_sym_postconsuming] = ACTIONS(58),
    [anon_sym_implements] = ACTIONS(58),
    [anon_sym_interface] = ACTIONS(58),
    [anon_sym_instance] = ACTIONS(58),
    [anon_sym_for] = ACTIONS(58),
    [anon_sym_let] = ACTIONS(58),
    [anon_sym_requires] = ACTIONS(58),
    [anon_sym_viewtype] = ACTIONS(58),
    [anon_sym_data] = ACTIONS(58),
    [anon_sym_newtype] = ACTIONS(58),
    [anon_sym_type] = ACTIONS(58),
    [anon_sym_class] = ACTIONS(58),
    [anon_sym_SEMI] = ACTIONS(66),
    [anon_sym_EQ] = ACTIONS(58),
    [anon_sym_LT_DASH] = ACTIONS(58),
    [anon_sym_BQUOTE] = ACTIONS(66),
    [anon_sym_DOT_DOT] = ACTIONS(58),
    [anon_sym_AT] = ACTIONS(58),
    [anon_sym_TILDE] = ACTIONS(58),
    [anon_sym_in] = ACTIONS(58),
    [anon_sym_of] = ACTIONS(58),
    [anon_sym_if] = ACTIONS(58),
    [anon_sym_then] = ACTIONS(58),
    [anon_sym_else] = ACTIONS(58),
    [anon_sym_case] = ACTIONS(58),
    [anon_sym_this] = ACTIONS(58),
    [anon_sym_return] = ACTIONS(58),
    [anon_sym_pure] = ACTIONS(58),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(64),
    [anon_sym_LBRACE] = ACTIONS(72),
    [anon_sym_RBRACE] = ACTIONS(64),
    [sym_identifier] = ACTIONS(58),
    [sym_constructor] = ACTIONS(58),
    [sym_qualified] = ACTIONS(66),
    [sym_string_literal] = ACTIONS(66),
    [sym_char_literal] = ACTIONS(66),
    [sym_number_literal] = ACTIONS(66),
    [sym_operator] = ACTIONS(58),
  },
  [6] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_template] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_signatory] = ACTIONS(75),
    [anon_sym_observer] = ACTIONS(75),
    [anon_sym_ensure] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_maintainer] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_controller] = ACTIONS(75),
    [anon_sym_can] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_nonconsuming] = ACTIONS(75),
    [anon_sym_preconsuming] = ACTIONS(75),
    [anon_sym_postconsuming] = ACTIONS(75),
    [anon_sym_implements] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_viewtype] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_newtype] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_DASH] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_of] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_then] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_pure] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(75),
    [sym_constructor] = ACTIONS(75),
    [sym_qualified] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_char_literal] = ACTIONS(79),
    [sym_number_literal] = ACTIONS(79),
    [sym_operator] = ACTIONS(75),
  },
  [7] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_template] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_signatory] = ACTIONS(75),
    [anon_sym_observer] = ACTIONS(75),
    [anon_sym_ensure] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_maintainer] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_controller] = ACTIONS(75),
    [anon_sym_can] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_nonconsuming] = ACTIONS(75),
    [anon_sym_preconsuming] = ACTIONS(75),
    [anon_sym_postconsuming] = ACTIONS(75),
    [anon_sym_implements] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_viewtype] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_newtype] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_DASH] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_of] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_then] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_pure] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(75),
    [sym_constructor] = ACTIONS(75),
    [sym_qualified] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_char_literal] = ACTIONS(79),
    [sym_number_literal] = ACTIONS(79),
    [sym_operator] = ACTIONS(75),
  },
  [8] = {
    [sym__paren_group] = STATE(70),
    [sym__bracket_group] = STATE(70),
    [sym__brace_group] = STATE(70),
    [sym__nested_token] = STATE(70),
    [aux_sym__paren_group_repeat1] = STATE(70),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(89),
    [anon_sym_where] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(89),
    [anon_sym_as] = ACTIONS(89),
    [anon_sym_template] = ACTIONS(89),
    [anon_sym_with] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(89),
    [anon_sym_signatory] = ACTIONS(89),
    [anon_sym_observer] = ACTIONS(89),
    [anon_sym_ensure] = ACTIONS(89),
    [anon_sym_key] = ACTIONS(89),
    [anon_sym_maintainer] = ACTIONS(89),
    [anon_sym_deriving] = ACTIONS(89),
    [anon_sym_controller] = ACTIONS(89),
    [anon_sym_can] = ACTIONS(89),
    [anon_sym_choice] = ACTIONS(89),
    [anon_sym_do] = ACTIONS(89),
    [anon_sym_nonconsuming] = ACTIONS(89),
    [anon_sym_preconsuming] = ACTIONS(89),
    [anon_sym_postconsuming] = ACTIONS(89),
    [anon_sym_implements] = ACTIONS(89),
    [anon_sym_interface] = ACTIONS(89),
    [anon_sym_instance] = ACTIONS(89),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_let] = ACTIONS(89),
    [anon_sym_requires] = ACTIONS(89),
    [anon_sym_viewtype] = ACTIONS(89),
    [anon_sym_data] = ACTIONS(89),
    [anon_sym_newtype] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(89),
    [anon_sym_class] = ACTIONS(89),
    [anon_sym_SEMI] = ACTIONS(91),
    [anon_sym_EQ] = ACTIONS(89),
    [anon_sym_LT_DASH] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(91),
    [anon_sym_DOT_DOT] = ACTIONS(89),
    [anon_sym_AT] = ACTIONS(89),
    [anon_sym_TILDE] = ACTIONS(89),
    [anon_sym_in] = ACTIONS(89),
    [anon_sym_of] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_then] = ACTIONS(89),
    [anon_sym_else] = ACTIONS(89),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_this] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(89),
    [anon_sym_pure] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(89),
    [sym_constructor] = ACTIONS(89),
    [sym_qualified] = ACTIONS(91),
    [sym_string_literal] = ACTIONS(91),
    [sym_char_literal] = ACTIONS(91),
    [sym_number_literal] = ACTIONS(91),
    [sym_operator] = ACTIONS(89),
  },
  [9] = {
    [sym__paren_group] = STATE(52),
    [sym__bracket_group] = STATE(52),
    [sym__brace_group] = STATE(52),
    [sym__nested_token] = STATE(52),
    [aux_sym__paren_group_repeat1] = STATE(52),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(95),
    [anon_sym_where] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(97),
    [anon_sym_import] = ACTIONS(95),
    [anon_sym_as] = ACTIONS(95),
    [anon_sym_template] = ACTIONS(95),
    [anon_sym_with] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_signatory] = ACTIONS(95),
    [anon_sym_observer] = ACTIONS(95),
    [anon_sym_ensure] = ACTIONS(95),
    [anon_sym_key] = ACTIONS(95),
    [anon_sym_maintainer] = ACTIONS(95),
    [anon_sym_deriving] = ACTIONS(95),
    [anon_sym_controller] = ACTIONS(95),
    [anon_sym_can] = ACTIONS(95),
    [anon_sym_choice] = ACTIONS(95),
    [anon_sym_do] = ACTIONS(95),
    [anon_sym_nonconsuming] = ACTIONS(95),
    [anon_sym_preconsuming] = ACTIONS(95),
    [anon_sym_postconsuming] = ACTIONS(95),
    [anon_sym_implements] = ACTIONS(95),
    [anon_sym_interface] = ACTIONS(95),
    [anon_sym_instance] = ACTIONS(95),
    [anon_sym_for] = ACTIONS(95),
    [anon_sym_let] = ACTIONS(95),
    [anon_sym_requires] = ACTIONS(95),
    [anon_sym_viewtype] = ACTIONS(95),
    [anon_sym_data] = ACTIONS(95),
    [anon_sym_newtype] = ACTIONS(95),
    [anon_sym_type] = ACTIONS(95),
    [anon_sym_class] = ACTIONS(95),
    [anon_sym_SEMI] = ACTIONS(99),
    [anon_sym_EQ] = ACTIONS(95),
    [anon_sym_LT_DASH] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(99),
    [anon_sym_DOT_DOT] = ACTIONS(95),
    [anon_sym_AT] = ACTIONS(95),
    [anon_sym_TILDE] = ACTIONS(95),
    [anon_sym_in] = ACTIONS(95),
    [anon_sym_of] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_then] = ACTIONS(95),
    [anon_sym_else] = ACTIONS(95),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_this] = ACTIONS(95),
    [anon_sym_return] = ACTIONS(95),
    [anon_sym_pure] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(95),
    [sym_constructor] = ACTIONS(95),
    [sym_qualified] = ACTIONS(99),
    [sym_string_literal] = ACTIONS(99),
    [sym_char_literal] = ACTIONS(99),
    [sym_number_literal] = ACTIONS(99),
    [sym_operator] = ACTIONS(95),
  },
  [10] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_template] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_signatory] = ACTIONS(75),
    [anon_sym_observer] = ACTIONS(75),
    [anon_sym_ensure] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_maintainer] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_controller] = ACTIONS(75),
    [anon_sym_can] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_nonconsuming] = ACTIONS(75),
    [anon_sym_preconsuming] = ACTIONS(75),
    [anon_sym_postconsuming] = ACTIONS(75),
    [anon_sym_implements] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_viewtype] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_newtype] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_DASH] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_of] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_then] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_pure] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(75),
    [sym_constructor] = ACTIONS(75),
    [sym_qualified] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_char_literal] = ACTIONS(79),
    [sym_number_literal] = ACTIONS(79),
    [sym_operator] = ACTIONS(75),
  },
  [11] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_template] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_signatory] = ACTIONS(75),
    [anon_sym_observer] = ACTIONS(75),
    [anon_sym_ensure] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_maintainer] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_controller] = ACTIONS(75),
    [anon_sym_can] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_nonconsuming] = ACTIONS(75),
    [anon_sym_preconsuming] = ACTIONS(75),
    [anon_sym_postconsuming] = ACTIONS(75),
    [anon_sym_implements] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_viewtype] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_newtype] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_DASH] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_of] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_then] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_pure] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(75),
    [sym_constructor] = ACTIONS(75),
    [sym_qualified] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_char_literal] = ACTIONS(79),
    [sym_number_literal] = ACTIONS(79),
    [sym_operator] = ACTIONS(75),
  },
  [12] = {
    [sym__paren_group] = STATE(10),
    [sym__bracket_group] = STATE(10),
    [sym__brace_group] = STATE(10),
    [sym__nested_token] = STATE(10),
    [aux_sym__paren_group_repeat1] = STATE(10),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(105),
    [anon_sym_where] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(105),
    [anon_sym_as] = ACTIONS(105),
    [anon_sym_template] = ACTIONS(105),
    [anon_sym_with] = ACTIONS(105),
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_signatory] = ACTIONS(105),
    [anon_sym_observer] = ACTIONS(105),
    [anon_sym_ensure] = ACTIONS(105),
    [anon_sym_key] = ACTIONS(105),
    [anon_sym_maintainer] = ACTIONS(105),
    [anon_sym_deriving] = ACTIONS(105),
    [anon_sym_controller] = ACTIONS(105),
    [anon_sym_can] = ACTIONS(105),
    [anon_sym_choice] = ACTIONS(105),
    [anon_sym_do] = ACTIONS(105),
    [anon_sym_nonconsuming] = ACTIONS(105),
    [anon_sym_preconsuming] = ACTIONS(105),
    [anon_sym_postconsuming] = ACTIONS(105),
    [anon_sym_implements] = ACTIONS(105),
    [anon_sym_interface] = ACTIONS(105),
    [anon_sym_instance] = ACTIONS(105),
    [anon_sym_for] = ACTIONS(105),
    [anon_sym_let] = ACTIONS(105),
    [anon_sym_requires] = ACTIONS(105),
    [anon_sym_viewtype] = ACTIONS(105),
    [anon_sym_data] = ACTIONS(105),
    [anon_sym_newtype] = ACTIONS(105),
    [anon_sym_type] = ACTIONS(105),
    [anon_sym_class] = ACTIONS(105),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(105),
    [anon_sym_LT_DASH] = ACTIONS(105),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_DOT_DOT] = ACTIONS(105),
    [anon_sym_AT] = ACTIONS(105),
    [anon_sym_TILDE] = ACTIONS(105),
    [anon_sym_in] = ACTIONS(105),
    [anon_sym_of] = ACTIONS(105),
    [anon_sym_if] = ACTIONS(105),
    [anon_sym_then] = ACTIONS(105),
    [anon_sym_else] = ACTIONS(105),
    [anon_sym_case] = ACTIONS(105),
    [anon_sym_this] = ACTIONS(105),
    [anon_sym_return] = ACTIONS(105),
    [anon_sym_pure] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(105),
    [sym_constructor] = ACTIONS(105),
    [sym_qualified] = ACTIONS(107),
    [sym_string_literal] = ACTIONS(107),
    [sym_char_literal] = ACTIONS(107),
    [sym_number_literal] = ACTIONS(107),
    [sym_operator] = ACTIONS(105),
  },
  [13] = {
    [sym__paren_group] = STATE(11),
    [sym__bracket_group] = STATE(11),
    [sym__brace_group] = STATE(11),
    [sym__nested_token] = STATE(11),
    [aux_sym__paren_group_repeat1] = STATE(11),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(111),
    [anon_sym_where] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(113),
    [anon_sym_import] = ACTIONS(111),
    [anon_sym_as] = ACTIONS(111),
    [anon_sym_template] = ACTIONS(111),
    [anon_sym_with] = ACTIONS(111),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_COLON] = ACTIONS(111),
    [anon_sym_signatory] = ACTIONS(111),
    [anon_sym_observer] = ACTIONS(111),
    [anon_sym_ensure] = ACTIONS(111),
    [anon_sym_key] = ACTIONS(111),
    [anon_sym_maintainer] = ACTIONS(111),
    [anon_sym_deriving] = ACTIONS(111),
    [anon_sym_controller] = ACTIONS(111),
    [anon_sym_can] = ACTIONS(111),
    [anon_sym_choice] = ACTIONS(111),
    [anon_sym_do] = ACTIONS(111),
    [anon_sym_nonconsuming] = ACTIONS(111),
    [anon_sym_preconsuming] = ACTIONS(111),
    [anon_sym_postconsuming] = ACTIONS(111),
    [anon_sym_implements] = ACTIONS(111),
    [anon_sym_interface] = ACTIONS(111),
    [anon_sym_instance] = ACTIONS(111),
    [anon_sym_for] = ACTIONS(111),
    [anon_sym_let] = ACTIONS(111),
    [anon_sym_requires] = ACTIONS(111),
    [anon_sym_viewtype] = ACTIONS(111),
    [anon_sym_data] = ACTIONS(111),
    [anon_sym_newtype] = ACTIONS(111),
    [anon_sym_type] = ACTIONS(111),
    [anon_sym_class] = ACTIONS(111),
    [anon_sym_SEMI] = ACTIONS(115),
    [anon_sym_EQ] = ACTIONS(111),
    [anon_sym_LT_DASH] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(115),
    [anon_sym_DOT_DOT] = ACTIONS(111),
    [anon_sym_AT] = ACTIONS(111),
    [anon_sym_TILDE] = ACTIONS(111),
    [anon_sym_in] = ACTIONS(111),
    [anon_sym_of] = ACTIONS(111),
    [anon_sym_if] = ACTIONS(111),
    [anon_sym_then] = ACTIONS(111),
    [anon_sym_else] = ACTIONS(111),
    [anon_sym_case] = ACTIONS(111),
    [anon_sym_this] = ACTIONS(111),
    [anon_sym_return] = ACTIONS(111),
    [anon_sym_pure] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(111),
    [sym_constructor] = ACTIONS(111),
    [sym_qualified] = ACTIONS(115),
    [sym_string_literal] = ACTIONS(115),
    [sym_char_literal] = ACTIONS(115),
    [sym_number_literal] = ACTIONS(115),
    [sym_operator] = ACTIONS(111),
  },
  [14] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_template] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_signatory] = ACTIONS(75),
    [anon_sym_observer] = ACTIONS(75),
    [anon_sym_ensure] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_maintainer] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_controller] = ACTIONS(75),
    [anon_sym_can] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_nonconsuming] = ACTIONS(75),
    [anon_sym_preconsuming] = ACTIONS(75),
    [anon_sym_postconsuming] = ACTIONS(75),
    [anon_sym_implements] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_viewtype] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_newtype] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_DASH] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_of] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_then] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_pure] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(75),
    [sym_constructor] = ACTIONS(75),
    [sym_qualified] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_char_literal] = ACTIONS(79),
    [sym_number_literal] = ACTIONS(79),
    [sym_operator] = ACTIONS(75),
  },
  [15] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_template] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_signatory] = ACTIONS(75),
    [anon_sym_observer] = ACTIONS(75),
    [anon_sym_ensure] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_maintainer] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_controller] = ACTIONS(75),
    [anon_sym_can] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_nonconsuming] = ACTIONS(75),
    [anon_sym_preconsuming] = ACTIONS(75),
    [anon_sym_postconsuming] = ACTIONS(75),
    [anon_sym_implements] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_viewtype] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_newtype] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_DASH] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_of] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_then] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_pure] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(75),
    [sym_constructor] = ACTIONS(75),
    [sym_qualified] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_char_literal] = ACTIONS(79),
    [sym_number_literal] = ACTIONS(79),
    [sym_operator] = ACTIONS(75),
  },
  [16] = {
    [sym__paren_group] = STATE(36),
    [sym__bracket_group] = STATE(36),
    [sym__brace_group] = STATE(36),
    [sym__nested_token] = STATE(36),
    [aux_sym__paren_group_repeat1] = STATE(36),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(121),
    [anon_sym_where] = ACTIONS(121),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_import] = ACTIONS(121),
    [anon_sym_as] = ACTIONS(121),
    [anon_sym_template] = ACTIONS(121),
    [anon_sym_with] = ACTIONS(121),
    [anon_sym_COMMA] = ACTIONS(125),
    [anon_sym_COLON] = ACTIONS(121),
    [anon_sym_signatory] = ACTIONS(121),
    [anon_sym_observer] = ACTIONS(121),
    [anon_sym_ensure] = ACTIONS(121),
    [anon_sym_key] = ACTIONS(121),
    [anon_sym_maintainer] = ACTIONS(121),
    [anon_sym_deriving] = ACTIONS(121),
    [anon_sym_controller] = ACTIONS(121),
    [anon_sym_can] = ACTIONS(121),
    [anon_sym_choice] = ACTIONS(121),
    [anon_sym_do] = ACTIONS(121),
    [anon_sym_nonconsuming] = ACTIONS(121),
    [anon_sym_preconsuming] = ACTIONS(121),
    [anon_sym_postconsuming] = ACTIONS(121),
    [anon_sym_implements] = ACTIONS(121),
    [anon_sym_interface] = ACTIONS(121),
    [anon_sym_instance] = ACTIONS(121),
    [anon_sym_for] = ACTIONS(121),
    [anon_sym_let] = ACTIONS(121),
    [anon_sym_requires] = ACTIONS(121),
    [anon_sym_viewtype] = ACTIONS(121),
    [anon_sym_data] = ACTIONS(121),
    [anon_sym_newtype] = ACTIONS(121),
    [anon_sym_type] = ACTIONS(121),
    [anon_sym_class] = ACTIONS(121),
    [anon_sym_SEMI] = ACTIONS(125),
    [anon_sym_EQ] = ACTIONS(121),
    [anon_sym_LT_DASH] = ACTIONS(121),
    [anon_sym_BQUOTE] = ACTIONS(125),
    [anon_sym_DOT_DOT] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(121),
    [anon_sym_TILDE] = ACTIONS(121),
    [anon_sym_in] = ACTIONS(121),
    [anon_sym_of] = ACTIONS(121),
    [anon_sym_if] = ACTIONS(121),
    [anon_sym_then] = ACTIONS(121),
    [anon_sym_else] = ACTIONS(121),
    [anon_sym_case] = ACTIONS(121),
    [anon_sym_this] = ACTIONS(121),
    [anon_sym_return] = ACTIONS(121),
    [anon_sym_pure] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(121),
    [sym_constructor] = ACTIONS(121),
    [sym_qualified] = ACTIONS(125),
    [sym_string_literal] = ACTIONS(125),
    [sym_char_literal] = ACTIONS(125),
    [sym_number_literal] = ACTIONS(125),
    [sym_operator] = ACTIONS(121),
  },
  [17] = {
    [sym__paren_group] = STATE(38),
    [sym__bracket_group] = STATE(38),
    [sym__brace_group] = STATE(38),
    [sym__nested_token] = STATE(38),
    [aux_sym__paren_group_repeat1] = STATE(38),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(127),
    [anon_sym_where] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(127),
    [anon_sym_as] = ACTIONS(127),
    [anon_sym_template] = ACTIONS(127),
    [anon_sym_with] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(127),
    [anon_sym_signatory] = ACTIONS(127),
    [anon_sym_observer] = ACTIONS(127),
    [anon_sym_ensure] = ACTIONS(127),
    [anon_sym_key] = ACTIONS(127),
    [anon_sym_maintainer] = ACTIONS(127),
    [anon_sym_deriving] = ACTIONS(127),
    [anon_sym_controller] = ACTIONS(127),
    [anon_sym_can] = ACTIONS(127),
    [anon_sym_choice] = ACTIONS(127),
    [anon_sym_do] = ACTIONS(127),
    [anon_sym_nonconsuming] = ACTIONS(127),
    [anon_sym_preconsuming] = ACTIONS(127),
    [anon_sym_postconsuming] = ACTIONS(127),
    [anon_sym_implements] = ACTIONS(127),
    [anon_sym_interface] = ACTIONS(127),
    [anon_sym_instance] = ACTIONS(127),
    [anon_sym_for] = ACTIONS(127),
    [anon_sym_let] = ACTIONS(127),
    [anon_sym_requires] = ACTIONS(127),
    [anon_sym_viewtype] = ACTIONS(127),
    [anon_sym_data] = ACTIONS(127),
    [anon_sym_newtype] = ACTIONS(127),
    [anon_sym_type] = ACTIONS(127),
    [anon_sym_class] = ACTIONS(127),
    [anon_sym_SEMI] = ACTIONS(129),
    [anon_sym_EQ] = ACTIONS(127),
    [anon_sym_LT_DASH] = ACTIONS(127),
    [anon_sym_BQUOTE] = ACTIONS(129),
    [anon_sym_DOT_DOT] = ACTIONS(127),
    [anon_sym_AT] = ACTIONS(127),
    [anon_sym_TILDE] = ACTIONS(127),
    [anon_sym_in] = ACTIONS(127),
    [anon_sym_of] = ACTIONS(127),
    [anon_sym_if] = ACTIONS(127),
    [anon_sym_then] = ACTIONS(127),
    [anon_sym_else] = ACTIONS(127),
    [anon_sym_case] = ACTIONS(127),
    [anon_sym_this] = ACTIONS(127),
    [anon_sym_return] = ACTIONS(127),
    [anon_sym_pure] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(127),
    [sym_constructor] = ACTIONS(127),
    [sym_qualified] = ACTIONS(129),
    [sym_string_literal] = ACTIONS(129),
    [sym_char_literal] = ACTIONS(129),
    [sym_number_literal] = ACTIONS(129),
    [sym_operator] = ACTIONS(127),
  },
  [18] = {
    [sym__paren_group] = STATE(40),
    [sym__bracket_group] = STATE(40),
    [sym__brace_group] = STATE(40),
    [sym__nested_token] = STATE(40),
    [aux_sym__paren_group_repeat1] = STATE(40),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(133),
    [anon_sym_where] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(133),
    [anon_sym_as] = ACTIONS(133),
    [anon_sym_template] = ACTIONS(133),
    [anon_sym_with] = ACTIONS(133),
    [anon_sym_COMMA] = ACTIONS(135),
    [anon_sym_COLON] = ACTIONS(133),
    [anon_sym_signatory] = ACTIONS(133),
    [anon_sym_observer] = ACTIONS(133),
    [anon_sym_ensure] = ACTIONS(133),
    [anon_sym_key] = ACTIONS(133),
    [anon_sym_maintainer] = ACTIONS(133),
    [anon_sym_deriving] = ACTIONS(133),
    [anon_sym_controller] = ACTIONS(133),
    [anon_sym_can] = ACTIONS(133),
    [anon_sym_choice] = ACTIONS(133),
    [anon_sym_do] = ACTIONS(133),
    [anon_sym_nonconsuming] = ACTIONS(133),
    [anon_sym_preconsuming] = ACTIONS(133),
    [anon_sym_postconsuming] = ACTIONS(133),
    [anon_sym_implements] = ACTIONS(133),
    [anon_sym_interface] = ACTIONS(133),
    [anon_sym_instance] = ACTIONS(133),
    [anon_sym_for] = ACTIONS(133),
    [anon_sym_let] = ACTIONS(133),
    [anon_sym_requires] = ACTIONS(133),
    [anon_sym_viewtype] = ACTIONS(133),
    [anon_sym_data] = ACTIONS(133),
    [anon_sym_newtype] = ACTIONS(133),
    [anon_sym_type] = ACTIONS(133),
    [anon_sym_class] = ACTIONS(133),
    [anon_sym_SEMI] = ACTIONS(135),
    [anon_sym_EQ] = ACTIONS(133),
    [anon_sym_LT_DASH] = ACTIONS(133),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_DOT_DOT] = ACTIONS(133),
    [anon_sym_AT] = ACTIONS(133),
    [anon_sym_TILDE] = ACTIONS(133),
    [anon_sym_in] = ACTIONS(133),
    [anon_sym_of] = ACTIONS(133),
    [anon_sym_if] = ACTIONS(133),
    [anon_sym_then] = ACTIONS(133),
    [anon_sym_else] = ACTIONS(133),
    [anon_sym_case] = ACTIONS(133),
    [anon_sym_this] = ACTIONS(133),
    [anon_sym_return] = ACTIONS(133),
    [anon_sym_pure] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(137),
    [sym_identifier] = ACTIONS(133),
    [sym_constructor] = ACTIONS(133),
    [sym_qualified] = ACTIONS(135),
    [sym_string_literal] = ACTIONS(135),
    [sym_char_literal] = ACTIONS(135),
    [sym_number_literal] = ACTIONS(135),
    [sym_operator] = ACTIONS(133),
  },
  [19] = {
    [sym__paren_group] = STATE(14),
    [sym__bracket_group] = STATE(14),
    [sym__brace_group] = STATE(14),
    [sym__nested_token] = STATE(14),
    [aux_sym__paren_group_repeat1] = STATE(14),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(139),
    [anon_sym_where] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(139),
    [anon_sym_as] = ACTIONS(139),
    [anon_sym_template] = ACTIONS(139),
    [anon_sym_with] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(141),
    [anon_sym_COLON] = ACTIONS(139),
    [anon_sym_signatory] = ACTIONS(139),
    [anon_sym_observer] = ACTIONS(139),
    [anon_sym_ensure] = ACTIONS(139),
    [anon_sym_key] = ACTIONS(139),
    [anon_sym_maintainer] = ACTIONS(139),
    [anon_sym_deriving] = ACTIONS(139),
    [anon_sym_controller] = ACTIONS(139),
    [anon_sym_can] = ACTIONS(139),
    [anon_sym_choice] = ACTIONS(139),
    [anon_sym_do] = ACTIONS(139),
    [anon_sym_nonconsuming] = ACTIONS(139),
    [anon_sym_preconsuming] = ACTIONS(139),
    [anon_sym_postconsuming] = ACTIONS(139),
    [anon_sym_implements] = ACTIONS(139),
    [anon_sym_interface] = ACTIONS(139),
    [anon_sym_instance] = ACTIONS(139),
    [anon_sym_for] = ACTIONS(139),
    [anon_sym_let] = ACTIONS(139),
    [anon_sym_requires] = ACTIONS(139),
    [anon_sym_viewtype] = ACTIONS(139),
    [anon_sym_data] = ACTIONS(139),
    [anon_sym_newtype] = ACTIONS(139),
    [anon_sym_type] = ACTIONS(139),
    [anon_sym_class] = ACTIONS(139),
    [anon_sym_SEMI] = ACTIONS(141),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_LT_DASH] = ACTIONS(139),
    [anon_sym_BQUOTE] = ACTIONS(141),
    [anon_sym_DOT_DOT] = ACTIONS(139),
    [anon_sym_AT] = ACTIONS(139),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_in] = ACTIONS(139),
    [anon_sym_of] = ACTIONS(139),
    [anon_sym_if] = ACTIONS(139),
    [anon_sym_then] = ACTIONS(139),
    [anon_sym_else] = ACTIONS(139),
    [anon_sym_case] = ACTIONS(139),
    [anon_sym_this] = ACTIONS(139),
    [anon_sym_return] = ACTIONS(139),
    [anon_sym_pure] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(139),
    [sym_constructor] = ACTIONS(139),
    [sym_qualified] = ACTIONS(141),
    [sym_string_literal] = ACTIONS(141),
    [sym_char_literal] = ACTIONS(141),
    [sym_number_literal] = ACTIONS(141),
    [sym_operator] = ACTIONS(139),
  },
  [20] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(145),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_template] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_signatory] = ACTIONS(75),
    [anon_sym_observer] = ACTIONS(75),
    [anon_sym_ensure] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_maintainer] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_controller] = ACTIONS(75),
    [anon_sym_can] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_nonconsuming] = ACTIONS(75),
    [anon_sym_preconsuming] = ACTIONS(75),
    [anon_sym_postconsuming] = ACTIONS(75),
    [anon_sym_implements] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_viewtype] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_newtype] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_DASH] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_of] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_then] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_pure] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(75),
    [sym_constructor] = ACTIONS(75),
    [sym_qualified] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_char_literal] = ACTIONS(79),
    [sym_number_literal] = ACTIONS(79),
    [sym_operator] = ACTIONS(75),
  },
  [21] = {
    [sym__paren_group] = STATE(15),
    [sym__bracket_group] = STATE(15),
    [sym__brace_group] = STATE(15),
    [sym__nested_token] = STATE(15),
    [aux_sym__paren_group_repeat1] = STATE(15),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(147),
    [anon_sym_where] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(149),
    [anon_sym_import] = ACTIONS(147),
    [anon_sym_as] = ACTIONS(147),
    [anon_sym_template] = ACTIONS(147),
    [anon_sym_with] = ACTIONS(147),
    [anon_sym_COMMA] = ACTIONS(151),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_signatory] = ACTIONS(147),
    [anon_sym_observer] = ACTIONS(147),
    [anon_sym_ensure] = ACTIONS(147),
    [anon_sym_key] = ACTIONS(147),
    [anon_sym_maintainer] = ACTIONS(147),
    [anon_sym_deriving] = ACTIONS(147),
    [anon_sym_controller] = ACTIONS(147),
    [anon_sym_can] = ACTIONS(147),
    [anon_sym_choice] = ACTIONS(147),
    [anon_sym_do] = ACTIONS(147),
    [anon_sym_nonconsuming] = ACTIONS(147),
    [anon_sym_preconsuming] = ACTIONS(147),
    [anon_sym_postconsuming] = ACTIONS(147),
    [anon_sym_implements] = ACTIONS(147),
    [anon_sym_interface] = ACTIONS(147),
    [anon_sym_instance] = ACTIONS(147),
    [anon_sym_for] = ACTIONS(147),
    [anon_sym_let] = ACTIONS(147),
    [anon_sym_requires] = ACTIONS(147),
    [anon_sym_viewtype] = ACTIONS(147),
    [anon_sym_data] = ACTIONS(147),
    [anon_sym_newtype] = ACTIONS(147),
    [anon_sym_type] = ACTIONS(147),
    [anon_sym_class] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(151),
    [anon_sym_EQ] = ACTIONS(147),
    [anon_sym_LT_DASH] = ACTIONS(147),
    [anon_sym_BQUOTE] = ACTIONS(151),
    [anon_sym_DOT_DOT] = ACTIONS(147),
    [anon_sym_AT] = ACTIONS(147),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_in] = ACTIONS(147),
    [anon_sym_of] = ACTIONS(147),
    [anon_sym_if] = ACTIONS(147),
    [anon_sym_then] = ACTIONS(147),
    [anon_sym_else] = ACTIONS(147),
    [anon_sym_case] = ACTIONS(147),
    [anon_sym_this] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(147),
    [anon_sym_pure] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(147),
    [sym_constructor] = ACTIONS(147),
    [sym_qualified] = ACTIONS(151),
    [sym_string_literal] = ACTIONS(151),
    [sym_char_literal] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(151),
    [sym_operator] = ACTIONS(147),
  },
  [22] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_template] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_signatory] = ACTIONS(75),
    [anon_sym_observer] = ACTIONS(75),
    [anon_sym_ensure] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_maintainer] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_controller] = ACTIONS(75),
    [anon_sym_can] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_nonconsuming] = ACTIONS(75),
    [anon_sym_preconsuming] = ACTIONS(75),
    [anon_sym_postconsuming] = ACTIONS(75),
    [anon_sym_implements] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_viewtype] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_newtype] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_DASH] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_of] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_then] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_pure] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(153),
    [sym_identifier] = ACTIONS(75),
    [sym_constructor] = ACTIONS(75),
    [sym_qualified] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_char_literal] = ACTIONS(79),
    [sym_number_literal] = ACTIONS(79),
    [sym_operator] = ACTIONS(75),
  },
  [23] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_template] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_signatory] = ACTIONS(75),
    [anon_sym_observer] = ACTIONS(75),
    [anon_sym_ensure] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_maintainer] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_controller] = ACTIONS(75),
    [anon_sym_can] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_nonconsuming] = ACTIONS(75),
    [anon_sym_preconsuming] = ACTIONS(75),
    [anon_sym_postconsuming] = ACTIONS(75),
    [anon_sym_implements] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_viewtype] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_newtype] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_DASH] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_of] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_then] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_pure] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(75),
    [sym_constructor] = ACTIONS(75),
    [sym_qualified] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_char_literal] = ACTIONS(79),
    [sym_number_literal] = ACTIONS(79),
    [sym_operator] = ACTIONS(75),
  },
  [24] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(157),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_template] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_signatory] = ACTIONS(75),
    [anon_sym_observer] = ACTIONS(75),
    [anon_sym_ensure] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_maintainer] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_controller] = ACTIONS(75),
    [anon_sym_can] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_nonconsuming] = ACTIONS(75),
    [anon_sym_preconsuming] = ACTIONS(75),
    [anon_sym_postconsuming] = ACTIONS(75),
    [anon_sym_implements] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_viewtype] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_newtype] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_DASH] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_of] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_then] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_pure] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(75),
    [sym_constructor] = ACTIONS(75),
    [sym_qualified] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_char_literal] = ACTIONS(79),
    [sym_number_literal] = ACTIONS(79),
    [sym_operator] = ACTIONS(75),
  },
  [25] = {
    [sym__paren_group] = STATE(22),
    [sym__bracket_group] = STATE(22),
    [sym__brace_group] = STATE(22),
    [sym__nested_token] = STATE(22),
    [aux_sym__paren_group_repeat1] = STATE(22),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(159),
    [anon_sym_where] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(159),
    [anon_sym_as] = ACTIONS(159),
    [anon_sym_template] = ACTIONS(159),
    [anon_sym_with] = ACTIONS(159),
    [anon_sym_COMMA] = ACTIONS(161),
    [anon_sym_COLON] = ACTIONS(159),
    [anon_sym_signatory] = ACTIONS(159),
    [anon_sym_observer] = ACTIONS(159),
    [anon_sym_ensure] = ACTIONS(159),
    [anon_sym_key] = ACTIONS(159),
    [anon_sym_maintainer] = ACTIONS(159),
    [anon_sym_deriving] = ACTIONS(159),
    [anon_sym_controller] = ACTIONS(159),
    [anon_sym_can] = ACTIONS(159),
    [anon_sym_choice] = ACTIONS(159),
    [anon_sym_do] = ACTIONS(159),
    [anon_sym_nonconsuming] = ACTIONS(159),
    [anon_sym_preconsuming] = ACTIONS(159),
    [anon_sym_postconsuming] = ACTIONS(159),
    [anon_sym_implements] = ACTIONS(159),
    [anon_sym_interface] = ACTIONS(159),
    [anon_sym_instance] = ACTIONS(159),
    [anon_sym_for] = ACTIONS(159),
    [anon_sym_let] = ACTIONS(159),
    [anon_sym_requires] = ACTIONS(159),
    [anon_sym_viewtype] = ACTIONS(159),
    [anon_sym_data] = ACTIONS(159),
    [anon_sym_newtype] = ACTIONS(159),
    [anon_sym_type] = ACTIONS(159),
    [anon_sym_class] = ACTIONS(159),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_EQ] = ACTIONS(159),
    [anon_sym_LT_DASH] = ACTIONS(159),
    [anon_sym_BQUOTE] = ACTIONS(161),
    [anon_sym_DOT_DOT] = ACTIONS(159),
    [anon_sym_AT] = ACTIONS(159),
    [anon_sym_TILDE] = ACTIONS(159),
    [anon_sym_in] = ACTIONS(159),
    [anon_sym_of] = ACTIONS(159),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_then] = ACTIONS(159),
    [anon_sym_else] = ACTIONS(159),
    [anon_sym_case] = ACTIONS(159),
    [anon_sym_this] = ACTIONS(159),
    [anon_sym_return] = ACTIONS(159),
    [anon_sym_pure] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(163),
    [sym_identifier] = ACTIONS(159),
    [sym_constructor] = ACTIONS(159),
    [sym_qualified] = ACTIONS(161),
    [sym_string_literal] = ACTIONS(161),
    [sym_char_literal] = ACTIONS(161),
    [sym_number_literal] = ACTIONS(161),
    [sym_operator] = ACTIONS(159),
  },
  [26] = {
    [sym__paren_group] = STATE(23),
    [sym__bracket_group] = STATE(23),
    [sym__brace_group] = STATE(23),
    [sym__nested_token] = STATE(23),
    [aux_sym__paren_group_repeat1] = STATE(23),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(165),
    [anon_sym_where] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(165),
    [anon_sym_as] = ACTIONS(165),
    [anon_sym_template] = ACTIONS(165),
    [anon_sym_with] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(165),
    [anon_sym_signatory] = ACTIONS(165),
    [anon_sym_observer] = ACTIONS(165),
    [anon_sym_ensure] = ACTIONS(165),
    [anon_sym_key] = ACTIONS(165),
    [anon_sym_maintainer] = ACTIONS(165),
    [anon_sym_deriving] = ACTIONS(165),
    [anon_sym_controller] = ACTIONS(165),
    [anon_sym_can] = ACTIONS(165),
    [anon_sym_choice] = ACTIONS(165),
    [anon_sym_do] = ACTIONS(165),
    [anon_sym_nonconsuming] = ACTIONS(165),
    [anon_sym_preconsuming] = ACTIONS(165),
    [anon_sym_postconsuming] = ACTIONS(165),
    [anon_sym_implements] = ACTIONS(165),
    [anon_sym_interface] = ACTIONS(165),
    [anon_sym_instance] = ACTIONS(165),
    [anon_sym_for] = ACTIONS(165),
    [anon_sym_let] = ACTIONS(165),
    [anon_sym_requires] = ACTIONS(165),
    [anon_sym_viewtype] = ACTIONS(165),
    [anon_sym_data] = ACTIONS(165),
    [anon_sym_newtype] = ACTIONS(165),
    [anon_sym_type] = ACTIONS(165),
    [anon_sym_class] = ACTIONS(165),
    [anon_sym_SEMI] = ACTIONS(167),
    [anon_sym_EQ] = ACTIONS(165),
    [anon_sym_LT_DASH] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_DOT_DOT] = ACTIONS(165),
    [anon_sym_AT] = ACTIONS(165),
    [anon_sym_TILDE] = ACTIONS(165),
    [anon_sym_in] = ACTIONS(165),
    [anon_sym_of] = ACTIONS(165),
    [anon_sym_if] = ACTIONS(165),
    [anon_sym_then] = ACTIONS(165),
    [anon_sym_else] = ACTIONS(165),
    [anon_sym_case] = ACTIONS(165),
    [anon_sym_this] = ACTIONS(165),
    [anon_sym_return] = ACTIONS(165),
    [anon_sym_pure] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(169),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(165),
    [sym_constructor] = ACTIONS(165),
    [sym_qualified] = ACTIONS(167),
    [sym_string_literal] = ACTIONS(167),
    [sym_char_literal] = ACTIONS(167),
    [sym_number_literal] = ACTIONS(167),
    [sym_operator] = ACTIONS(165),
  },
  [27] = {
    [sym__paren_group] = STATE(24),
    [sym__bracket_group] = STATE(24),
    [sym__brace_group] = STATE(24),
    [sym__nested_token] = STATE(24),
    [aux_sym__paren_group_repeat1] = STATE(24),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(171),
    [anon_sym_where] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_import] = ACTIONS(171),
    [anon_sym_as] = ACTIONS(171),
    [anon_sym_template] = ACTIONS(171),
    [anon_sym_with] = ACTIONS(171),
    [anon_sym_COMMA] = ACTIONS(175),
    [anon_sym_COLON] = ACTIONS(171),
    [anon_sym_signatory] = ACTIONS(171),
    [anon_sym_observer] = ACTIONS(171),
    [anon_sym_ensure] = ACTIONS(171),
    [anon_sym_key] = ACTIONS(171),
    [anon_sym_maintainer] = ACTIONS(171),
    [anon_sym_deriving] = ACTIONS(171),
    [anon_sym_controller] = ACTIONS(171),
    [anon_sym_can] = ACTIONS(171),
    [anon_sym_choice] = ACTIONS(171),
    [anon_sym_do] = ACTIONS(171),
    [anon_sym_nonconsuming] = ACTIONS(171),
    [anon_sym_preconsuming] = ACTIONS(171),
    [anon_sym_postconsuming] = ACTIONS(171),
    [anon_sym_implements] = ACTIONS(171),
    [anon_sym_interface] = ACTIONS(171),
    [anon_sym_instance] = ACTIONS(171),
    [anon_sym_for] = ACTIONS(171),
    [anon_sym_let] = ACTIONS(171),
    [anon_sym_requires] = ACTIONS(171),
    [anon_sym_viewtype] = ACTIONS(171),
    [anon_sym_data] = ACTIONS(171),
    [anon_sym_newtype] = ACTIONS(171),
    [anon_sym_type] = ACTIONS(171),
    [anon_sym_class] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(175),
    [anon_sym_EQ] = ACTIONS(171),
    [anon_sym_LT_DASH] = ACTIONS(171),
    [anon_sym_BQUOTE] = ACTIONS(175),
    [anon_sym_DOT_DOT] = ACTIONS(171),
    [anon_sym_AT] = ACTIONS(171),
    [anon_sym_TILDE] = ACTIONS(171),
    [anon_sym_in] = ACTIONS(171),
    [anon_sym_of] = ACTIONS(171),
    [anon_sym_if] = ACTIONS(171),
    [anon_sym_then] = ACTIONS(171),
    [anon_sym_else] = ACTIONS(171),
    [anon_sym_case] = ACTIONS(171),
    [anon_sym_this] = ACTIONS(171),
    [anon_sym_return] = ACTIONS(171),
    [anon_sym_pure] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(171),
    [sym_constructor] = ACTIONS(171),
    [sym_qualified] = ACTIONS(175),
    [sym_string_literal] = ACTIONS(175),
    [sym_char_literal] = ACTIONS(175),
    [sym_number_literal] = ACTIONS(175),
    [sym_operator] = ACTIONS(171),
  },
  [28] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_template] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_signatory] = ACTIONS(75),
    [anon_sym_observer] = ACTIONS(75),
    [anon_sym_ensure] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_maintainer] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_controller] = ACTIONS(75),
    [anon_sym_can] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_nonconsuming] = ACTIONS(75),
    [anon_sym_preconsuming] = ACTIONS(75),
    [anon_sym_postconsuming] = ACTIONS(75),
    [anon_sym_implements] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_viewtype] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_newtype] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_DASH] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_of] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_then] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_pure] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(177),
    [sym_identifier] = ACTIONS(75),
    [sym_constructor] = ACTIONS(75),
    [sym_qualified] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_char_literal] = ACTIONS(79),
    [sym_number_literal] = ACTIONS(79),
    [sym_operator] = ACTIONS(75),
  },
  [29] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_template] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_signatory] = ACTIONS(75),
    [anon_sym_observer] = ACTIONS(75),
    [anon_sym_ensure] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_maintainer] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_controller] = ACTIONS(75),
    [anon_sym_can] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_nonconsuming] = ACTIONS(75),
    [anon_sym_preconsuming] = ACTIONS(75),
    [anon_sym_postconsuming] = ACTIONS(75),
    [anon_sym_implements] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_viewtype] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_newtype] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_DASH] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_of] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_then] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_pure] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(179),
    [sym_identifier] = ACTIONS(75),
    [sym_constructor] = ACTIONS(75),
    [sym_qualified] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_char_literal] = ACTIONS(79),
    [sym_number_literal] = ACTIONS(79),
    [sym_operator] = ACTIONS(75),
  },
  [30] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_template] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_signatory] = ACTIONS(75),
    [anon_sym_observer] = ACTIONS(75),
    [anon_sym_ensure] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_maintainer] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_controller] = ACTIONS(75),
    [anon_sym_can] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_nonconsuming] = ACTIONS(75),
    [anon_sym_preconsuming] = ACTIONS(75),
    [anon_sym_postconsuming] = ACTIONS(75),
    [anon_sym_implements] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_viewtype] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_newtype] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_DASH] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_of] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_then] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_pure] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(75),
    [sym_constructor] = ACTIONS(75),
    [sym_qualified] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_char_literal] = ACTIONS(79),
    [sym_number_literal] = ACTIONS(79),
    [sym_operator] = ACTIONS(75),
  },
  [31] = {
    [sym__paren_group] = STATE(28),
    [sym__bracket_group] = STATE(28),
    [sym__brace_group] = STATE(28),
    [sym__nested_token] = STATE(28),
    [aux_sym__paren_group_repeat1] = STATE(28),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(183),
    [anon_sym_where] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(183),
    [anon_sym_as] = ACTIONS(183),
    [anon_sym_template] = ACTIONS(183),
    [anon_sym_with] = ACTIONS(183),
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_COLON] = ACTIONS(183),
    [anon_sym_signatory] = ACTIONS(183),
    [anon_sym_observer] = ACTIONS(183),
    [anon_sym_ensure] = ACTIONS(183),
    [anon_sym_key] = ACTIONS(183),
    [anon_sym_maintainer] = ACTIONS(183),
    [anon_sym_deriving] = ACTIONS(183),
    [anon_sym_controller] = ACTIONS(183),
    [anon_sym_can] = ACTIONS(183),
    [anon_sym_choice] = ACTIONS(183),
    [anon_sym_do] = ACTIONS(183),
    [anon_sym_nonconsuming] = ACTIONS(183),
    [anon_sym_preconsuming] = ACTIONS(183),
    [anon_sym_postconsuming] = ACTIONS(183),
    [anon_sym_implements] = ACTIONS(183),
    [anon_sym_interface] = ACTIONS(183),
    [anon_sym_instance] = ACTIONS(183),
    [anon_sym_for] = ACTIONS(183),
    [anon_sym_let] = ACTIONS(183),
    [anon_sym_requires] = ACTIONS(183),
    [anon_sym_viewtype] = ACTIONS(183),
    [anon_sym_data] = ACTIONS(183),
    [anon_sym_newtype] = ACTIONS(183),
    [anon_sym_type] = ACTIONS(183),
    [anon_sym_class] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(185),
    [anon_sym_EQ] = ACTIONS(183),
    [anon_sym_LT_DASH] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_DOT_DOT] = ACTIONS(183),
    [anon_sym_AT] = ACTIONS(183),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_in] = ACTIONS(183),
    [anon_sym_of] = ACTIONS(183),
    [anon_sym_if] = ACTIONS(183),
    [anon_sym_then] = ACTIONS(183),
    [anon_sym_else] = ACTIONS(183),
    [anon_sym_case] = ACTIONS(183),
    [anon_sym_this] = ACTIONS(183),
    [anon_sym_return] = ACTIONS(183),
    [anon_sym_pure] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(187),
    [sym_identifier] = ACTIONS(183),
    [sym_constructor] = ACTIONS(183),
    [sym_qualified] = ACTIONS(185),
    [sym_string_literal] = ACTIONS(185),
    [sym_char_literal] = ACTIONS(185),
    [sym_number_literal] = ACTIONS(185),
    [sym_operator] = ACTIONS(183),
  },
  [32] = {
    [sym__paren_group] = STATE(7),
    [sym__bracket_group] = STATE(7),
    [sym__brace_group] = STATE(7),
    [sym__nested_token] = STATE(7),
    [aux_sym__paren_group_repeat1] = STATE(7),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(189),
    [anon_sym_where] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(189),
    [anon_sym_as] = ACTIONS(189),
    [anon_sym_template] = ACTIONS(189),
    [anon_sym_with] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(189),
    [anon_sym_signatory] = ACTIONS(189),
    [anon_sym_observer] = ACTIONS(189),
    [anon_sym_ensure] = ACTIONS(189),
    [anon_sym_key] = ACTIONS(189),
    [anon_sym_maintainer] = ACTIONS(189),
    [anon_sym_deriving] = ACTIONS(189),
    [anon_sym_controller] = ACTIONS(189),
    [anon_sym_can] = ACTIONS(189),
    [anon_sym_choice] = ACTIONS(189),
    [anon_sym_do] = ACTIONS(189),
    [anon_sym_nonconsuming] = ACTIONS(189),
    [anon_sym_preconsuming] = ACTIONS(189),
    [anon_sym_postconsuming] = ACTIONS(189),
    [anon_sym_implements] = ACTIONS(189),
    [anon_sym_interface] = ACTIONS(189),
    [anon_sym_instance] = ACTIONS(189),
    [anon_sym_for] = ACTIONS(189),
    [anon_sym_let] = ACTIONS(189),
    [anon_sym_requires] = ACTIONS(189),
    [anon_sym_viewtype] = ACTIONS(189),
    [anon_sym_data] = ACTIONS(189),
    [anon_sym_newtype] = ACTIONS(189),
    [anon_sym_type] = ACTIONS(189),
    [anon_sym_class] = ACTIONS(189),
    [anon_sym_SEMI] = ACTIONS(191),
    [anon_sym_EQ] = ACTIONS(189),
    [anon_sym_LT_DASH] = ACTIONS(189),
    [anon_sym_BQUOTE] = ACTIONS(191),
    [anon_sym_DOT_DOT] = ACTIONS(189),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(189),
    [anon_sym_in] = ACTIONS(189),
    [anon_sym_of] = ACTIONS(189),
    [anon_sym_if] = ACTIONS(189),
    [anon_sym_then] = ACTIONS(189),
    [anon_sym_else] = ACTIONS(189),
    [anon_sym_case] = ACTIONS(189),
    [anon_sym_this] = ACTIONS(189),
    [anon_sym_return] = ACTIONS(189),
    [anon_sym_pure] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(189),
    [sym_constructor] = ACTIONS(189),
    [sym_qualified] = ACTIONS(191),
    [sym_string_literal] = ACTIONS(191),
    [sym_char_literal] = ACTIONS(191),
    [sym_number_literal] = ACTIONS(191),
    [sym_operator] = ACTIONS(189),
  },
  [33] = {
    [sym__paren_group] = STATE(30),
    [sym__bracket_group] = STATE(30),
    [sym__brace_group] = STATE(30),
    [sym__nested_token] = STATE(30),
    [aux_sym__paren_group_repeat1] = STATE(30),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(195),
    [anon_sym_where] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_import] = ACTIONS(195),
    [anon_sym_as] = ACTIONS(195),
    [anon_sym_template] = ACTIONS(195),
    [anon_sym_with] = ACTIONS(195),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_COLON] = ACTIONS(195),
    [anon_sym_signatory] = ACTIONS(195),
    [anon_sym_observer] = ACTIONS(195),
    [anon_sym_ensure] = ACTIONS(195),
    [anon_sym_key] = ACTIONS(195),
    [anon_sym_maintainer] = ACTIONS(195),
    [anon_sym_deriving] = ACTIONS(195),
    [anon_sym_controller] = ACTIONS(195),
    [anon_sym_can] = ACTIONS(195),
    [anon_sym_choice] = ACTIONS(195),
    [anon_sym_do] = ACTIONS(195),
    [anon_sym_nonconsuming] = ACTIONS(195),
    [anon_sym_preconsuming] = ACTIONS(195),
    [anon_sym_postconsuming] = ACTIONS(195),
    [anon_sym_implements] = ACTIONS(195),
    [anon_sym_interface] = ACTIONS(195),
    [anon_sym_instance] = ACTIONS(195),
    [anon_sym_for] = ACTIONS(195),
    [anon_sym_let] = ACTIONS(195),
    [anon_sym_requires] = ACTIONS(195),
    [anon_sym_viewtype] = ACTIONS(195),
    [anon_sym_data] = ACTIONS(195),
    [anon_sym_newtype] = ACTIONS(195),
    [anon_sym_type] = ACTIONS(195),
    [anon_sym_class] = ACTIONS(195),
    [anon_sym_SEMI] = ACTIONS(199),
    [anon_sym_EQ] = ACTIONS(195),
    [anon_sym_LT_DASH] = ACTIONS(195),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_DOT_DOT] = ACTIONS(195),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_TILDE] = ACTIONS(195),
    [anon_sym_in] = ACTIONS(195),
    [anon_sym_of] = ACTIONS(195),
    [anon_sym_if] = ACTIONS(195),
    [anon_sym_then] = ACTIONS(195),
    [anon_sym_else] = ACTIONS(195),
    [anon_sym_case] = ACTIONS(195),
    [anon_sym_this] = ACTIONS(195),
    [anon_sym_return] = ACTIONS(195),
    [anon_sym_pure] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(195),
    [sym_constructor] = ACTIONS(195),
    [sym_qualified] = ACTIONS(199),
    [sym_string_literal] = ACTIONS(199),
    [sym_char_literal] = ACTIONS(199),
    [sym_number_literal] = ACTIONS(199),
    [sym_operator] = ACTIONS(195),
  },
  [34] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_template] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_signatory] = ACTIONS(75),
    [anon_sym_observer] = ACTIONS(75),
    [anon_sym_ensure] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_maintainer] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_controller] = ACTIONS(75),
    [anon_sym_can] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_nonconsuming] = ACTIONS(75),
    [anon_sym_preconsuming] = ACTIONS(75),
    [anon_sym_postconsuming] = ACTIONS(75),
    [anon_sym_implements] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_viewtype] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_newtype] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_DASH] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_of] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_then] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_pure] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(201),
    [sym_identifier] = ACTIONS(75),
    [sym_constructor] = ACTIONS(75),
    [sym_qualified] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_char_literal] = ACTIONS(79),
    [sym_number_literal] = ACTIONS(79),
    [sym_operator] = ACTIONS(75),
  },
  [35] = {
    [sym__paren_group] = STATE(65),
    [sym__bracket_group] = STATE(65),
    [sym__brace_group] = STATE(65),
    [sym__nested_token] = STATE(65),
    [aux_sym__paren_group_repeat1] = STATE(65),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(203),
    [anon_sym_where] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(203),
    [anon_sym_as] = ACTIONS(203),
    [anon_sym_template] = ACTIONS(203),
    [anon_sym_with] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COLON] = ACTIONS(203),
    [anon_sym_signatory] = ACTIONS(203),
    [anon_sym_observer] = ACTIONS(203),
    [anon_sym_ensure] = ACTIONS(203),
    [anon_sym_key] = ACTIONS(203),
    [anon_sym_maintainer] = ACTIONS(203),
    [anon_sym_deriving] = ACTIONS(203),
    [anon_sym_controller] = ACTIONS(203),
    [anon_sym_can] = ACTIONS(203),
    [anon_sym_choice] = ACTIONS(203),
    [anon_sym_do] = ACTIONS(203),
    [anon_sym_nonconsuming] = ACTIONS(203),
    [anon_sym_preconsuming] = ACTIONS(203),
    [anon_sym_postconsuming] = ACTIONS(203),
    [anon_sym_implements] = ACTIONS(203),
    [anon_sym_interface] = ACTIONS(203),
    [anon_sym_instance] = ACTIONS(203),
    [anon_sym_for] = ACTIONS(203),
    [anon_sym_let] = ACTIONS(203),
    [anon_sym_requires] = ACTIONS(203),
    [anon_sym_viewtype] = ACTIONS(203),
    [anon_sym_data] = ACTIONS(203),
    [anon_sym_newtype] = ACTIONS(203),
    [anon_sym_type] = ACTIONS(203),
    [anon_sym_class] = ACTIONS(203),
    [anon_sym_SEMI] = ACTIONS(205),
    [anon_sym_EQ] = ACTIONS(203),
    [anon_sym_LT_DASH] = ACTIONS(203),
    [anon_sym_BQUOTE] = ACTIONS(205),
    [anon_sym_DOT_DOT] = ACTIONS(203),
    [anon_sym_AT] = ACTIONS(203),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_in] = ACTIONS(203),
    [anon_sym_of] = ACTIONS(203),
    [anon_sym_if] = ACTIONS(203),
    [anon_sym_then] = ACTIONS(203),
    [anon_sym_else] = ACTIONS(203),
    [anon_sym_case] = ACTIONS(203),
    [anon_sym_this] = ACTIONS(203),
    [anon_sym_return] = ACTIONS(203),
    [anon_sym_pure] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(207),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(203),
    [sym_constructor] = ACTIONS(203),
    [sym_qualified] = ACTIONS(205),
    [sym_string_literal] = ACTIONS(205),
    [sym_char_literal] = ACTIONS(205),
    [sym_number_literal] = ACTIONS(205),
    [sym_operator] = ACTIONS(203),
  },
  [36] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_template] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_signatory] = ACTIONS(75),
    [anon_sym_observer] = ACTIONS(75),
    [anon_sym_ensure] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_maintainer] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_controller] = ACTIONS(75),
    [anon_sym_can] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_nonconsuming] = ACTIONS(75),
    [anon_sym_preconsuming] = ACTIONS(75),
    [anon_sym_postconsuming] = ACTIONS(75),
    [anon_sym_implements] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_viewtype] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_newtype] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_DASH] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_of] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_then] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_pure] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(75),
    [sym_constructor] = ACTIONS(75),
    [sym_qualified] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_char_literal] = ACTIONS(79),
    [sym_number_literal] = ACTIONS(79),
    [sym_operator] = ACTIONS(75),
  },
  [37] = {
    [sym__paren_group] = STATE(20),
    [sym__bracket_group] = STATE(20),
    [sym__brace_group] = STATE(20),
    [sym__nested_token] = STATE(20),
    [aux_sym__paren_group_repeat1] = STATE(20),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(211),
    [anon_sym_where] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_import] = ACTIONS(211),
    [anon_sym_as] = ACTIONS(211),
    [anon_sym_template] = ACTIONS(211),
    [anon_sym_with] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(215),
    [anon_sym_COLON] = ACTIONS(211),
    [anon_sym_signatory] = ACTIONS(211),
    [anon_sym_observer] = ACTIONS(211),
    [anon_sym_ensure] = ACTIONS(211),
    [anon_sym_key] = ACTIONS(211),
    [anon_sym_maintainer] = ACTIONS(211),
    [anon_sym_deriving] = ACTIONS(211),
    [anon_sym_controller] = ACTIONS(211),
    [anon_sym_can] = ACTIONS(211),
    [anon_sym_choice] = ACTIONS(211),
    [anon_sym_do] = ACTIONS(211),
    [anon_sym_nonconsuming] = ACTIONS(211),
    [anon_sym_preconsuming] = ACTIONS(211),
    [anon_sym_postconsuming] = ACTIONS(211),
    [anon_sym_implements] = ACTIONS(211),
    [anon_sym_interface] = ACTIONS(211),
    [anon_sym_instance] = ACTIONS(211),
    [anon_sym_for] = ACTIONS(211),
    [anon_sym_let] = ACTIONS(211),
    [anon_sym_requires] = ACTIONS(211),
    [anon_sym_viewtype] = ACTIONS(211),
    [anon_sym_data] = ACTIONS(211),
    [anon_sym_newtype] = ACTIONS(211),
    [anon_sym_type] = ACTIONS(211),
    [anon_sym_class] = ACTIONS(211),
    [anon_sym_SEMI] = ACTIONS(215),
    [anon_sym_EQ] = ACTIONS(211),
    [anon_sym_LT_DASH] = ACTIONS(211),
    [anon_sym_BQUOTE] = ACTIONS(215),
    [anon_sym_DOT_DOT] = ACTIONS(211),
    [anon_sym_AT] = ACTIONS(211),
    [anon_sym_TILDE] = ACTIONS(211),
    [anon_sym_in] = ACTIONS(211),
    [anon_sym_of] = ACTIONS(211),
    [anon_sym_if] = ACTIONS(211),
    [anon_sym_then] = ACTIONS(211),
    [anon_sym_else] = ACTIONS(211),
    [anon_sym_case] = ACTIONS(211),
    [anon_sym_this] = ACTIONS(211),
    [anon_sym_return] = ACTIONS(211),
    [anon_sym_pure] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(211),
    [sym_constructor] = ACTIONS(211),
    [sym_qualified] = ACTIONS(215),
    [sym_string_literal] = ACTIONS(215),
    [sym_char_literal] = ACTIONS(215),
    [sym_number_literal] = ACTIONS(215),
    [sym_operator] = ACTIONS(211),
  },
  [38] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_template] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_signatory] = ACTIONS(75),
    [anon_sym_observer] = ACTIONS(75),
    [anon_sym_ensure] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_maintainer] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_controller] = ACTIONS(75),
    [anon_sym_can] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_nonconsuming] = ACTIONS(75),
    [anon_sym_preconsuming] = ACTIONS(75),
    [anon_sym_postconsuming] = ACTIONS(75),
    [anon_sym_implements] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_viewtype] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_newtype] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_DASH] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_of] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_then] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_pure] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(217),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(75),
    [sym_constructor] = ACTIONS(75),
    [sym_qualified] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_char_literal] = ACTIONS(79),
    [sym_number_literal] = ACTIONS(79),
    [sym_operator] = ACTIONS(75),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(219),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_import] = ACTIONS(221),
    [anon_sym_qualified] = ACTIONS(221),
    [anon_sym_as] = ACTIONS(221),
    [anon_sym_hiding] = ACTIONS(221),
    [anon_sym_template] = ACTIONS(221),
    [anon_sym_with] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(219),
    [anon_sym_signatory] = ACTIONS(221),
    [anon_sym_observer] = ACTIONS(221),
    [anon_sym_ensure] = ACTIONS(221),
    [anon_sym_key] = ACTIONS(221),
    [anon_sym_maintainer] = ACTIONS(221),
    [anon_sym_deriving] = ACTIONS(221),
    [anon_sym_controller] = ACTIONS(221),
    [anon_sym_choice] = ACTIONS(221),
    [anon_sym_do] = ACTIONS(221),
    [anon_sym_nonconsuming] = ACTIONS(221),
    [anon_sym_preconsuming] = ACTIONS(221),
    [anon_sym_postconsuming] = ACTIONS(221),
    [anon_sym_implements] = ACTIONS(221),
    [anon_sym_interface] = ACTIONS(221),
    [anon_sym_instance] = ACTIONS(221),
    [anon_sym_let] = ACTIONS(221),
    [anon_sym_data] = ACTIONS(221),
    [anon_sym_newtype] = ACTIONS(221),
    [anon_sym_type] = ACTIONS(221),
    [anon_sym_class] = ACTIONS(221),
    [anon_sym_SEMI] = ACTIONS(219),
    [anon_sym_EQ] = ACTIONS(221),
    [anon_sym_LT_DASH] = ACTIONS(221),
    [anon_sym_BQUOTE] = ACTIONS(219),
    [anon_sym_DOT_DOT] = ACTIONS(221),
    [anon_sym_AT] = ACTIONS(221),
    [anon_sym_TILDE] = ACTIONS(221),
    [anon_sym_in] = ACTIONS(221),
    [anon_sym_of] = ACTIONS(221),
    [anon_sym_if] = ACTIONS(221),
    [anon_sym_then] = ACTIONS(221),
    [anon_sym_else] = ACTIONS(221),
    [anon_sym_case] = ACTIONS(221),
    [anon_sym_this] = ACTIONS(221),
    [anon_sym_return] = ACTIONS(221),
    [anon_sym_pure] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_LBRACE] = ACTIONS(221),
    [sym_exercise_call] = ACTIONS(219),
    [sym_fetch_call] = ACTIONS(219),
    [sym_lookup_call] = ACTIONS(219),
    [sym_create_call] = ACTIONS(219),
    [sym_archive_call] = ACTIONS(219),
    [sym_get_time_call] = ACTIONS(219),
    [sym_unsafe_cast_call] = ACTIONS(219),
    [sym_from_some_call] = ACTIONS(219),
    [sym_qualified_call] = ACTIONS(219),
    [sym_identifier] = ACTIONS(221),
    [sym_constructor] = ACTIONS(221),
    [sym_qualified] = ACTIONS(221),
    [sym_string_literal] = ACTIONS(219),
    [sym_char_literal] = ACTIONS(219),
    [sym_number_literal] = ACTIONS(219),
    [sym_operator] = ACTIONS(221),
  },
  [40] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_template] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_signatory] = ACTIONS(75),
    [anon_sym_observer] = ACTIONS(75),
    [anon_sym_ensure] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_maintainer] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_controller] = ACTIONS(75),
    [anon_sym_can] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_nonconsuming] = ACTIONS(75),
    [anon_sym_preconsuming] = ACTIONS(75),
    [anon_sym_postconsuming] = ACTIONS(75),
    [anon_sym_implements] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_viewtype] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_newtype] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_DASH] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_of] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_then] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_pure] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(223),
    [sym_identifier] = ACTIONS(75),
    [sym_constructor] = ACTIONS(75),
    [sym_qualified] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_char_literal] = ACTIONS(79),
    [sym_number_literal] = ACTIONS(79),
    [sym_operator] = ACTIONS(75),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(225),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(227),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_import] = ACTIONS(227),
    [anon_sym_qualified] = ACTIONS(227),
    [anon_sym_as] = ACTIONS(227),
    [anon_sym_hiding] = ACTIONS(227),
    [anon_sym_template] = ACTIONS(227),
    [anon_sym_with] = ACTIONS(227),
    [anon_sym_COMMA] = ACTIONS(225),
    [anon_sym_signatory] = ACTIONS(227),
    [anon_sym_observer] = ACTIONS(227),
    [anon_sym_ensure] = ACTIONS(227),
    [anon_sym_key] = ACTIONS(227),
    [anon_sym_maintainer] = ACTIONS(227),
    [anon_sym_deriving] = ACTIONS(227),
    [anon_sym_controller] = ACTIONS(227),
    [anon_sym_choice] = ACTIONS(227),
    [anon_sym_do] = ACTIONS(227),
    [anon_sym_nonconsuming] = ACTIONS(227),
    [anon_sym_preconsuming] = ACTIONS(227),
    [anon_sym_postconsuming] = ACTIONS(227),
    [anon_sym_implements] = ACTIONS(227),
    [anon_sym_interface] = ACTIONS(227),
    [anon_sym_instance] = ACTIONS(227),
    [anon_sym_let] = ACTIONS(227),
    [anon_sym_data] = ACTIONS(227),
    [anon_sym_newtype] = ACTIONS(227),
    [anon_sym_type] = ACTIONS(227),
    [anon_sym_class] = ACTIONS(227),
    [anon_sym_SEMI] = ACTIONS(225),
    [anon_sym_EQ] = ACTIONS(227),
    [anon_sym_LT_DASH] = ACTIONS(227),
    [anon_sym_BQUOTE] = ACTIONS(225),
    [anon_sym_DOT_DOT] = ACTIONS(227),
    [anon_sym_AT] = ACTIONS(227),
    [anon_sym_TILDE] = ACTIONS(227),
    [anon_sym_in] = ACTIONS(227),
    [anon_sym_of] = ACTIONS(227),
    [anon_sym_if] = ACTIONS(227),
    [anon_sym_then] = ACTIONS(227),
    [anon_sym_else] = ACTIONS(227),
    [anon_sym_case] = ACTIONS(227),
    [anon_sym_this] = ACTIONS(227),
    [anon_sym_return] = ACTIONS(227),
    [anon_sym_pure] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(227),
    [sym_exercise_call] = ACTIONS(225),
    [sym_fetch_call] = ACTIONS(225),
    [sym_lookup_call] = ACTIONS(225),
    [sym_create_call] = ACTIONS(225),
    [sym_archive_call] = ACTIONS(225),
    [sym_get_time_call] = ACTIONS(225),
    [sym_unsafe_cast_call] = ACTIONS(225),
    [sym_from_some_call] = ACTIONS(225),
    [sym_qualified_call] = ACTIONS(225),
    [sym_identifier] = ACTIONS(227),
    [sym_constructor] = ACTIONS(227),
    [sym_qualified] = ACTIONS(227),
    [sym_string_literal] = ACTIONS(225),
    [sym_char_literal] = ACTIONS(225),
    [sym_number_literal] = ACTIONS(225),
    [sym_operator] = ACTIONS(227),
  },
  [42] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_template] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_signatory] = ACTIONS(75),
    [anon_sym_observer] = ACTIONS(75),
    [anon_sym_ensure] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_maintainer] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_controller] = ACTIONS(75),
    [anon_sym_can] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_nonconsuming] = ACTIONS(75),
    [anon_sym_preconsuming] = ACTIONS(75),
    [anon_sym_postconsuming] = ACTIONS(75),
    [anon_sym_implements] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_viewtype] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_newtype] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_DASH] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_of] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_then] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_pure] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(229),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(75),
    [sym_constructor] = ACTIONS(75),
    [sym_qualified] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_char_literal] = ACTIONS(79),
    [sym_number_literal] = ACTIONS(79),
    [sym_operator] = ACTIONS(75),
  },
  [43] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(231),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_template] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_signatory] = ACTIONS(75),
    [anon_sym_observer] = ACTIONS(75),
    [anon_sym_ensure] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_maintainer] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_controller] = ACTIONS(75),
    [anon_sym_can] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_nonconsuming] = ACTIONS(75),
    [anon_sym_preconsuming] = ACTIONS(75),
    [anon_sym_postconsuming] = ACTIONS(75),
    [anon_sym_implements] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_viewtype] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_newtype] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_DASH] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_of] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_then] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_pure] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(75),
    [sym_constructor] = ACTIONS(75),
    [sym_qualified] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_char_literal] = ACTIONS(79),
    [sym_number_literal] = ACTIONS(79),
    [sym_operator] = ACTIONS(75),
  },
  [44] = {
    [sym__paren_group] = STATE(34),
    [sym__bracket_group] = STATE(34),
    [sym__brace_group] = STATE(34),
    [sym__nested_token] = STATE(34),
    [aux_sym__paren_group_repeat1] = STATE(34),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(233),
    [anon_sym_where] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(233),
    [anon_sym_as] = ACTIONS(233),
    [anon_sym_template] = ACTIONS(233),
    [anon_sym_with] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(235),
    [anon_sym_COLON] = ACTIONS(233),
    [anon_sym_signatory] = ACTIONS(233),
    [anon_sym_observer] = ACTIONS(233),
    [anon_sym_ensure] = ACTIONS(233),
    [anon_sym_key] = ACTIONS(233),
    [anon_sym_maintainer] = ACTIONS(233),
    [anon_sym_deriving] = ACTIONS(233),
    [anon_sym_controller] = ACTIONS(233),
    [anon_sym_can] = ACTIONS(233),
    [anon_sym_choice] = ACTIONS(233),
    [anon_sym_do] = ACTIONS(233),
    [anon_sym_nonconsuming] = ACTIONS(233),
    [anon_sym_preconsuming] = ACTIONS(233),
    [anon_sym_postconsuming] = ACTIONS(233),
    [anon_sym_implements] = ACTIONS(233),
    [anon_sym_interface] = ACTIONS(233),
    [anon_sym_instance] = ACTIONS(233),
    [anon_sym_for] = ACTIONS(233),
    [anon_sym_let] = ACTIONS(233),
    [anon_sym_requires] = ACTIONS(233),
    [anon_sym_viewtype] = ACTIONS(233),
    [anon_sym_data] = ACTIONS(233),
    [anon_sym_newtype] = ACTIONS(233),
    [anon_sym_type] = ACTIONS(233),
    [anon_sym_class] = ACTIONS(233),
    [anon_sym_SEMI] = ACTIONS(235),
    [anon_sym_EQ] = ACTIONS(233),
    [anon_sym_LT_DASH] = ACTIONS(233),
    [anon_sym_BQUOTE] = ACTIONS(235),
    [anon_sym_DOT_DOT] = ACTIONS(233),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_TILDE] = ACTIONS(233),
    [anon_sym_in] = ACTIONS(233),
    [anon_sym_of] = ACTIONS(233),
    [anon_sym_if] = ACTIONS(233),
    [anon_sym_then] = ACTIONS(233),
    [anon_sym_else] = ACTIONS(233),
    [anon_sym_case] = ACTIONS(233),
    [anon_sym_this] = ACTIONS(233),
    [anon_sym_return] = ACTIONS(233),
    [anon_sym_pure] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(237),
    [sym_identifier] = ACTIONS(233),
    [sym_constructor] = ACTIONS(233),
    [sym_qualified] = ACTIONS(235),
    [sym_string_literal] = ACTIONS(235),
    [sym_char_literal] = ACTIONS(235),
    [sym_number_literal] = ACTIONS(235),
    [sym_operator] = ACTIONS(233),
  },
  [45] = {
    [sym__paren_group] = STATE(42),
    [sym__bracket_group] = STATE(42),
    [sym__brace_group] = STATE(42),
    [sym__nested_token] = STATE(42),
    [aux_sym__paren_group_repeat1] = STATE(42),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(239),
    [anon_sym_where] = ACTIONS(239),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(239),
    [anon_sym_as] = ACTIONS(239),
    [anon_sym_template] = ACTIONS(239),
    [anon_sym_with] = ACTIONS(239),
    [anon_sym_COMMA] = ACTIONS(241),
    [anon_sym_COLON] = ACTIONS(239),
    [anon_sym_signatory] = ACTIONS(239),
    [anon_sym_observer] = ACTIONS(239),
    [anon_sym_ensure] = ACTIONS(239),
    [anon_sym_key] = ACTIONS(239),
    [anon_sym_maintainer] = ACTIONS(239),
    [anon_sym_deriving] = ACTIONS(239),
    [anon_sym_controller] = ACTIONS(239),
    [anon_sym_can] = ACTIONS(239),
    [anon_sym_choice] = ACTIONS(239),
    [anon_sym_do] = ACTIONS(239),
    [anon_sym_nonconsuming] = ACTIONS(239),
    [anon_sym_preconsuming] = ACTIONS(239),
    [anon_sym_postconsuming] = ACTIONS(239),
    [anon_sym_implements] = ACTIONS(239),
    [anon_sym_interface] = ACTIONS(239),
    [anon_sym_instance] = ACTIONS(239),
    [anon_sym_for] = ACTIONS(239),
    [anon_sym_let] = ACTIONS(239),
    [anon_sym_requires] = ACTIONS(239),
    [anon_sym_viewtype] = ACTIONS(239),
    [anon_sym_data] = ACTIONS(239),
    [anon_sym_newtype] = ACTIONS(239),
    [anon_sym_type] = ACTIONS(239),
    [anon_sym_class] = ACTIONS(239),
    [anon_sym_SEMI] = ACTIONS(241),
    [anon_sym_EQ] = ACTIONS(239),
    [anon_sym_LT_DASH] = ACTIONS(239),
    [anon_sym_BQUOTE] = ACTIONS(241),
    [anon_sym_DOT_DOT] = ACTIONS(239),
    [anon_sym_AT] = ACTIONS(239),
    [anon_sym_TILDE] = ACTIONS(239),
    [anon_sym_in] = ACTIONS(239),
    [anon_sym_of] = ACTIONS(239),
    [anon_sym_if] = ACTIONS(239),
    [anon_sym_then] = ACTIONS(239),
    [anon_sym_else] = ACTIONS(239),
    [anon_sym_case] = ACTIONS(239),
    [anon_sym_this] = ACTIONS(239),
    [anon_sym_return] = ACTIONS(239),
    [anon_sym_pure] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(243),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(239),
    [sym_constructor] = ACTIONS(239),
    [sym_qualified] = ACTIONS(241),
    [sym_string_literal] = ACTIONS(241),
    [sym_char_literal] = ACTIONS(241),
    [sym_number_literal] = ACTIONS(241),
    [sym_operator] = ACTIONS(239),
  },
  [46] = {
    [sym__paren_group] = STATE(43),
    [sym__bracket_group] = STATE(43),
    [sym__brace_group] = STATE(43),
    [sym__nested_token] = STATE(43),
    [aux_sym__paren_group_repeat1] = STATE(43),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(245),
    [anon_sym_where] = ACTIONS(245),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_import] = ACTIONS(245),
    [anon_sym_as] = ACTIONS(245),
    [anon_sym_template] = ACTIONS(245),
    [anon_sym_with] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_COLON] = ACTIONS(245),
    [anon_sym_signatory] = ACTIONS(245),
    [anon_sym_observer] = ACTIONS(245),
    [anon_sym_ensure] = ACTIONS(245),
    [anon_sym_key] = ACTIONS(245),
    [anon_sym_maintainer] = ACTIONS(245),
    [anon_sym_deriving] = ACTIONS(245),
    [anon_sym_controller] = ACTIONS(245),
    [anon_sym_can] = ACTIONS(245),
    [anon_sym_choice] = ACTIONS(245),
    [anon_sym_do] = ACTIONS(245),
    [anon_sym_nonconsuming] = ACTIONS(245),
    [anon_sym_preconsuming] = ACTIONS(245),
    [anon_sym_postconsuming] = ACTIONS(245),
    [anon_sym_implements] = ACTIONS(245),
    [anon_sym_interface] = ACTIONS(245),
    [anon_sym_instance] = ACTIONS(245),
    [anon_sym_for] = ACTIONS(245),
    [anon_sym_let] = ACTIONS(245),
    [anon_sym_requires] = ACTIONS(245),
    [anon_sym_viewtype] = ACTIONS(245),
    [anon_sym_data] = ACTIONS(245),
    [anon_sym_newtype] = ACTIONS(245),
    [anon_sym_type] = ACTIONS(245),
    [anon_sym_class] = ACTIONS(245),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(245),
    [anon_sym_LT_DASH] = ACTIONS(245),
    [anon_sym_BQUOTE] = ACTIONS(249),
    [anon_sym_DOT_DOT] = ACTIONS(245),
    [anon_sym_AT] = ACTIONS(245),
    [anon_sym_TILDE] = ACTIONS(245),
    [anon_sym_in] = ACTIONS(245),
    [anon_sym_of] = ACTIONS(245),
    [anon_sym_if] = ACTIONS(245),
    [anon_sym_then] = ACTIONS(245),
    [anon_sym_else] = ACTIONS(245),
    [anon_sym_case] = ACTIONS(245),
    [anon_sym_this] = ACTIONS(245),
    [anon_sym_return] = ACTIONS(245),
    [anon_sym_pure] = ACTIONS(245),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(245),
    [sym_constructor] = ACTIONS(245),
    [sym_qualified] = ACTIONS(249),
    [sym_string_literal] = ACTIONS(249),
    [sym_char_literal] = ACTIONS(249),
    [sym_number_literal] = ACTIONS(249),
    [sym_operator] = ACTIONS(245),
  },
  [47] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_template] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_signatory] = ACTIONS(75),
    [anon_sym_observer] = ACTIONS(75),
    [anon_sym_ensure] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_maintainer] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_controller] = ACTIONS(75),
    [anon_sym_can] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_nonconsuming] = ACTIONS(75),
    [anon_sym_preconsuming] = ACTIONS(75),
    [anon_sym_postconsuming] = ACTIONS(75),
    [anon_sym_implements] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_viewtype] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_newtype] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_DASH] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_of] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_then] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_pure] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(251),
    [sym_identifier] = ACTIONS(75),
    [sym_constructor] = ACTIONS(75),
    [sym_qualified] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_char_literal] = ACTIONS(79),
    [sym_number_literal] = ACTIONS(79),
    [sym_operator] = ACTIONS(75),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(255),
    [anon_sym_LPAREN] = ACTIONS(253),
    [anon_sym_import] = ACTIONS(255),
    [anon_sym_qualified] = ACTIONS(255),
    [anon_sym_as] = ACTIONS(255),
    [anon_sym_hiding] = ACTIONS(255),
    [anon_sym_template] = ACTIONS(255),
    [anon_sym_with] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(253),
    [anon_sym_signatory] = ACTIONS(255),
    [anon_sym_observer] = ACTIONS(255),
    [anon_sym_ensure] = ACTIONS(255),
    [anon_sym_key] = ACTIONS(255),
    [anon_sym_maintainer] = ACTIONS(255),
    [anon_sym_deriving] = ACTIONS(255),
    [anon_sym_controller] = ACTIONS(255),
    [anon_sym_choice] = ACTIONS(255),
    [anon_sym_do] = ACTIONS(255),
    [anon_sym_nonconsuming] = ACTIONS(255),
    [anon_sym_preconsuming] = ACTIONS(255),
    [anon_sym_postconsuming] = ACTIONS(255),
    [anon_sym_implements] = ACTIONS(255),
    [anon_sym_interface] = ACTIONS(255),
    [anon_sym_instance] = ACTIONS(255),
    [anon_sym_let] = ACTIONS(255),
    [anon_sym_data] = ACTIONS(255),
    [anon_sym_newtype] = ACTIONS(255),
    [anon_sym_type] = ACTIONS(255),
    [anon_sym_class] = ACTIONS(255),
    [anon_sym_SEMI] = ACTIONS(253),
    [anon_sym_EQ] = ACTIONS(255),
    [anon_sym_LT_DASH] = ACTIONS(255),
    [anon_sym_BQUOTE] = ACTIONS(253),
    [anon_sym_DOT_DOT] = ACTIONS(255),
    [anon_sym_AT] = ACTIONS(255),
    [anon_sym_TILDE] = ACTIONS(255),
    [anon_sym_in] = ACTIONS(255),
    [anon_sym_of] = ACTIONS(255),
    [anon_sym_if] = ACTIONS(255),
    [anon_sym_then] = ACTIONS(255),
    [anon_sym_else] = ACTIONS(255),
    [anon_sym_case] = ACTIONS(255),
    [anon_sym_this] = ACTIONS(255),
    [anon_sym_return] = ACTIONS(255),
    [anon_sym_pure] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(253),
    [anon_sym_LBRACE] = ACTIONS(255),
    [sym_exercise_call] = ACTIONS(253),
    [sym_fetch_call] = ACTIONS(253),
    [sym_lookup_call] = ACTIONS(253),
    [sym_create_call] = ACTIONS(253),
    [sym_archive_call] = ACTIONS(253),
    [sym_get_time_call] = ACTIONS(253),
    [sym_unsafe_cast_call] = ACTIONS(253),
    [sym_from_some_call] = ACTIONS(253),
    [sym_qualified_call] = ACTIONS(253),
    [sym_identifier] = ACTIONS(255),
    [sym_constructor] = ACTIONS(255),
    [sym_qualified] = ACTIONS(255),
    [sym_string_literal] = ACTIONS(253),
    [sym_char_literal] = ACTIONS(253),
    [sym_number_literal] = ACTIONS(253),
    [sym_operator] = ACTIONS(255),
  },
  [49] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(257),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_template] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_signatory] = ACTIONS(75),
    [anon_sym_observer] = ACTIONS(75),
    [anon_sym_ensure] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_maintainer] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_controller] = ACTIONS(75),
    [anon_sym_can] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_nonconsuming] = ACTIONS(75),
    [anon_sym_preconsuming] = ACTIONS(75),
    [anon_sym_postconsuming] = ACTIONS(75),
    [anon_sym_implements] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_viewtype] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_newtype] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_DASH] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_of] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_then] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_pure] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(75),
    [sym_constructor] = ACTIONS(75),
    [sym_qualified] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_char_literal] = ACTIONS(79),
    [sym_number_literal] = ACTIONS(79),
    [sym_operator] = ACTIONS(75),
  },
  [50] = {
    [sym__paren_group] = STATE(47),
    [sym__bracket_group] = STATE(47),
    [sym__brace_group] = STATE(47),
    [sym__nested_token] = STATE(47),
    [aux_sym__paren_group_repeat1] = STATE(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(259),
    [anon_sym_where] = ACTIONS(259),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(259),
    [anon_sym_as] = ACTIONS(259),
    [anon_sym_template] = ACTIONS(259),
    [anon_sym_with] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_COLON] = ACTIONS(259),
    [anon_sym_signatory] = ACTIONS(259),
    [anon_sym_observer] = ACTIONS(259),
    [anon_sym_ensure] = ACTIONS(259),
    [anon_sym_key] = ACTIONS(259),
    [anon_sym_maintainer] = ACTIONS(259),
    [anon_sym_deriving] = ACTIONS(259),
    [anon_sym_controller] = ACTIONS(259),
    [anon_sym_can] = ACTIONS(259),
    [anon_sym_choice] = ACTIONS(259),
    [anon_sym_do] = ACTIONS(259),
    [anon_sym_nonconsuming] = ACTIONS(259),
    [anon_sym_preconsuming] = ACTIONS(259),
    [anon_sym_postconsuming] = ACTIONS(259),
    [anon_sym_implements] = ACTIONS(259),
    [anon_sym_interface] = ACTIONS(259),
    [anon_sym_instance] = ACTIONS(259),
    [anon_sym_for] = ACTIONS(259),
    [anon_sym_let] = ACTIONS(259),
    [anon_sym_requires] = ACTIONS(259),
    [anon_sym_viewtype] = ACTIONS(259),
    [anon_sym_data] = ACTIONS(259),
    [anon_sym_newtype] = ACTIONS(259),
    [anon_sym_type] = ACTIONS(259),
    [anon_sym_class] = ACTIONS(259),
    [anon_sym_SEMI] = ACTIONS(261),
    [anon_sym_EQ] = ACTIONS(259),
    [anon_sym_LT_DASH] = ACTIONS(259),
    [anon_sym_BQUOTE] = ACTIONS(261),
    [anon_sym_DOT_DOT] = ACTIONS(259),
    [anon_sym_AT] = ACTIONS(259),
    [anon_sym_TILDE] = ACTIONS(259),
    [anon_sym_in] = ACTIONS(259),
    [anon_sym_of] = ACTIONS(259),
    [anon_sym_if] = ACTIONS(259),
    [anon_sym_then] = ACTIONS(259),
    [anon_sym_else] = ACTIONS(259),
    [anon_sym_case] = ACTIONS(259),
    [anon_sym_this] = ACTIONS(259),
    [anon_sym_return] = ACTIONS(259),
    [anon_sym_pure] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(263),
    [sym_identifier] = ACTIONS(259),
    [sym_constructor] = ACTIONS(259),
    [sym_qualified] = ACTIONS(261),
    [sym_string_literal] = ACTIONS(261),
    [sym_char_literal] = ACTIONS(261),
    [sym_number_literal] = ACTIONS(261),
    [sym_operator] = ACTIONS(259),
  },
  [51] = {
    [sym__paren_group] = STATE(6),
    [sym__bracket_group] = STATE(6),
    [sym__brace_group] = STATE(6),
    [sym__nested_token] = STATE(6),
    [aux_sym__paren_group_repeat1] = STATE(6),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(265),
    [anon_sym_where] = ACTIONS(265),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(265),
    [anon_sym_as] = ACTIONS(265),
    [anon_sym_template] = ACTIONS(265),
    [anon_sym_with] = ACTIONS(265),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_COLON] = ACTIONS(265),
    [anon_sym_signatory] = ACTIONS(265),
    [anon_sym_observer] = ACTIONS(265),
    [anon_sym_ensure] = ACTIONS(265),
    [anon_sym_key] = ACTIONS(265),
    [anon_sym_maintainer] = ACTIONS(265),
    [anon_sym_deriving] = ACTIONS(265),
    [anon_sym_controller] = ACTIONS(265),
    [anon_sym_can] = ACTIONS(265),
    [anon_sym_choice] = ACTIONS(265),
    [anon_sym_do] = ACTIONS(265),
    [anon_sym_nonconsuming] = ACTIONS(265),
    [anon_sym_preconsuming] = ACTIONS(265),
    [anon_sym_postconsuming] = ACTIONS(265),
    [anon_sym_implements] = ACTIONS(265),
    [anon_sym_interface] = ACTIONS(265),
    [anon_sym_instance] = ACTIONS(265),
    [anon_sym_for] = ACTIONS(265),
    [anon_sym_let] = ACTIONS(265),
    [anon_sym_requires] = ACTIONS(265),
    [anon_sym_viewtype] = ACTIONS(265),
    [anon_sym_data] = ACTIONS(265),
    [anon_sym_newtype] = ACTIONS(265),
    [anon_sym_type] = ACTIONS(265),
    [anon_sym_class] = ACTIONS(265),
    [anon_sym_SEMI] = ACTIONS(267),
    [anon_sym_EQ] = ACTIONS(265),
    [anon_sym_LT_DASH] = ACTIONS(265),
    [anon_sym_BQUOTE] = ACTIONS(267),
    [anon_sym_DOT_DOT] = ACTIONS(265),
    [anon_sym_AT] = ACTIONS(265),
    [anon_sym_TILDE] = ACTIONS(265),
    [anon_sym_in] = ACTIONS(265),
    [anon_sym_of] = ACTIONS(265),
    [anon_sym_if] = ACTIONS(265),
    [anon_sym_then] = ACTIONS(265),
    [anon_sym_else] = ACTIONS(265),
    [anon_sym_case] = ACTIONS(265),
    [anon_sym_this] = ACTIONS(265),
    [anon_sym_return] = ACTIONS(265),
    [anon_sym_pure] = ACTIONS(265),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(269),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(265),
    [sym_constructor] = ACTIONS(265),
    [sym_qualified] = ACTIONS(267),
    [sym_string_literal] = ACTIONS(267),
    [sym_char_literal] = ACTIONS(267),
    [sym_number_literal] = ACTIONS(267),
    [sym_operator] = ACTIONS(265),
  },
  [52] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(271),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_template] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_signatory] = ACTIONS(75),
    [anon_sym_observer] = ACTIONS(75),
    [anon_sym_ensure] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_maintainer] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_controller] = ACTIONS(75),
    [anon_sym_can] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_nonconsuming] = ACTIONS(75),
    [anon_sym_preconsuming] = ACTIONS(75),
    [anon_sym_postconsuming] = ACTIONS(75),
    [anon_sym_implements] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_viewtype] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_newtype] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_DASH] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_of] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_then] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_pure] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(75),
    [sym_constructor] = ACTIONS(75),
    [sym_qualified] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_char_literal] = ACTIONS(79),
    [sym_number_literal] = ACTIONS(79),
    [sym_operator] = ACTIONS(75),
  },
  [53] = {
    [sym__paren_group] = STATE(49),
    [sym__bracket_group] = STATE(49),
    [sym__brace_group] = STATE(49),
    [sym__nested_token] = STATE(49),
    [aux_sym__paren_group_repeat1] = STATE(49),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(273),
    [anon_sym_where] = ACTIONS(273),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(275),
    [anon_sym_import] = ACTIONS(273),
    [anon_sym_as] = ACTIONS(273),
    [anon_sym_template] = ACTIONS(273),
    [anon_sym_with] = ACTIONS(273),
    [anon_sym_COMMA] = ACTIONS(277),
    [anon_sym_COLON] = ACTIONS(273),
    [anon_sym_signatory] = ACTIONS(273),
    [anon_sym_observer] = ACTIONS(273),
    [anon_sym_ensure] = ACTIONS(273),
    [anon_sym_key] = ACTIONS(273),
    [anon_sym_maintainer] = ACTIONS(273),
    [anon_sym_deriving] = ACTIONS(273),
    [anon_sym_controller] = ACTIONS(273),
    [anon_sym_can] = ACTIONS(273),
    [anon_sym_choice] = ACTIONS(273),
    [anon_sym_do] = ACTIONS(273),
    [anon_sym_nonconsuming] = ACTIONS(273),
    [anon_sym_preconsuming] = ACTIONS(273),
    [anon_sym_postconsuming] = ACTIONS(273),
    [anon_sym_implements] = ACTIONS(273),
    [anon_sym_interface] = ACTIONS(273),
    [anon_sym_instance] = ACTIONS(273),
    [anon_sym_for] = ACTIONS(273),
    [anon_sym_let] = ACTIONS(273),
    [anon_sym_requires] = ACTIONS(273),
    [anon_sym_viewtype] = ACTIONS(273),
    [anon_sym_data] = ACTIONS(273),
    [anon_sym_newtype] = ACTIONS(273),
    [anon_sym_type] = ACTIONS(273),
    [anon_sym_class] = ACTIONS(273),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_EQ] = ACTIONS(273),
    [anon_sym_LT_DASH] = ACTIONS(273),
    [anon_sym_BQUOTE] = ACTIONS(277),
    [anon_sym_DOT_DOT] = ACTIONS(273),
    [anon_sym_AT] = ACTIONS(273),
    [anon_sym_TILDE] = ACTIONS(273),
    [anon_sym_in] = ACTIONS(273),
    [anon_sym_of] = ACTIONS(273),
    [anon_sym_if] = ACTIONS(273),
    [anon_sym_then] = ACTIONS(273),
    [anon_sym_else] = ACTIONS(273),
    [anon_sym_case] = ACTIONS(273),
    [anon_sym_this] = ACTIONS(273),
    [anon_sym_return] = ACTIONS(273),
    [anon_sym_pure] = ACTIONS(273),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(273),
    [sym_constructor] = ACTIONS(273),
    [sym_qualified] = ACTIONS(277),
    [sym_string_literal] = ACTIONS(277),
    [sym_char_literal] = ACTIONS(277),
    [sym_number_literal] = ACTIONS(277),
    [sym_operator] = ACTIONS(273),
  },
  [54] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_template] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_signatory] = ACTIONS(75),
    [anon_sym_observer] = ACTIONS(75),
    [anon_sym_ensure] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_maintainer] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_controller] = ACTIONS(75),
    [anon_sym_can] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_nonconsuming] = ACTIONS(75),
    [anon_sym_preconsuming] = ACTIONS(75),
    [anon_sym_postconsuming] = ACTIONS(75),
    [anon_sym_implements] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_viewtype] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_newtype] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_DASH] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_of] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_then] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_pure] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(279),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(75),
    [sym_constructor] = ACTIONS(75),
    [sym_qualified] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_char_literal] = ACTIONS(79),
    [sym_number_literal] = ACTIONS(79),
    [sym_operator] = ACTIONS(75),
  },
  [55] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(281),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_template] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_signatory] = ACTIONS(75),
    [anon_sym_observer] = ACTIONS(75),
    [anon_sym_ensure] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_maintainer] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_controller] = ACTIONS(75),
    [anon_sym_can] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_nonconsuming] = ACTIONS(75),
    [anon_sym_preconsuming] = ACTIONS(75),
    [anon_sym_postconsuming] = ACTIONS(75),
    [anon_sym_implements] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_viewtype] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_newtype] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_DASH] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_of] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_then] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_pure] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(75),
    [sym_constructor] = ACTIONS(75),
    [sym_qualified] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_char_literal] = ACTIONS(79),
    [sym_number_literal] = ACTIONS(79),
    [sym_operator] = ACTIONS(75),
  },
  [56] = {
    [sym__paren_group] = STATE(29),
    [sym__bracket_group] = STATE(29),
    [sym__brace_group] = STATE(29),
    [sym__nested_token] = STATE(29),
    [aux_sym__paren_group_repeat1] = STATE(29),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(283),
    [anon_sym_where] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(283),
    [anon_sym_as] = ACTIONS(283),
    [anon_sym_template] = ACTIONS(283),
    [anon_sym_with] = ACTIONS(283),
    [anon_sym_COMMA] = ACTIONS(285),
    [anon_sym_COLON] = ACTIONS(283),
    [anon_sym_signatory] = ACTIONS(283),
    [anon_sym_observer] = ACTIONS(283),
    [anon_sym_ensure] = ACTIONS(283),
    [anon_sym_key] = ACTIONS(283),
    [anon_sym_maintainer] = ACTIONS(283),
    [anon_sym_deriving] = ACTIONS(283),
    [anon_sym_controller] = ACTIONS(283),
    [anon_sym_can] = ACTIONS(283),
    [anon_sym_choice] = ACTIONS(283),
    [anon_sym_do] = ACTIONS(283),
    [anon_sym_nonconsuming] = ACTIONS(283),
    [anon_sym_preconsuming] = ACTIONS(283),
    [anon_sym_postconsuming] = ACTIONS(283),
    [anon_sym_implements] = ACTIONS(283),
    [anon_sym_interface] = ACTIONS(283),
    [anon_sym_instance] = ACTIONS(283),
    [anon_sym_for] = ACTIONS(283),
    [anon_sym_let] = ACTIONS(283),
    [anon_sym_requires] = ACTIONS(283),
    [anon_sym_viewtype] = ACTIONS(283),
    [anon_sym_data] = ACTIONS(283),
    [anon_sym_newtype] = ACTIONS(283),
    [anon_sym_type] = ACTIONS(283),
    [anon_sym_class] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LT_DASH] = ACTIONS(283),
    [anon_sym_BQUOTE] = ACTIONS(285),
    [anon_sym_DOT_DOT] = ACTIONS(283),
    [anon_sym_AT] = ACTIONS(283),
    [anon_sym_TILDE] = ACTIONS(283),
    [anon_sym_in] = ACTIONS(283),
    [anon_sym_of] = ACTIONS(283),
    [anon_sym_if] = ACTIONS(283),
    [anon_sym_then] = ACTIONS(283),
    [anon_sym_else] = ACTIONS(283),
    [anon_sym_case] = ACTIONS(283),
    [anon_sym_this] = ACTIONS(283),
    [anon_sym_return] = ACTIONS(283),
    [anon_sym_pure] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(287),
    [sym_identifier] = ACTIONS(283),
    [sym_constructor] = ACTIONS(283),
    [sym_qualified] = ACTIONS(285),
    [sym_string_literal] = ACTIONS(285),
    [sym_char_literal] = ACTIONS(285),
    [sym_number_literal] = ACTIONS(285),
    [sym_operator] = ACTIONS(283),
  },
  [57] = {
    [sym__paren_group] = STATE(67),
    [sym__bracket_group] = STATE(67),
    [sym__brace_group] = STATE(67),
    [sym__nested_token] = STATE(67),
    [aux_sym__paren_group_repeat1] = STATE(67),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(289),
    [anon_sym_where] = ACTIONS(289),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(289),
    [anon_sym_as] = ACTIONS(289),
    [anon_sym_template] = ACTIONS(289),
    [anon_sym_with] = ACTIONS(289),
    [anon_sym_COMMA] = ACTIONS(291),
    [anon_sym_COLON] = ACTIONS(289),
    [anon_sym_signatory] = ACTIONS(289),
    [anon_sym_observer] = ACTIONS(289),
    [anon_sym_ensure] = ACTIONS(289),
    [anon_sym_key] = ACTIONS(289),
    [anon_sym_maintainer] = ACTIONS(289),
    [anon_sym_deriving] = ACTIONS(289),
    [anon_sym_controller] = ACTIONS(289),
    [anon_sym_can] = ACTIONS(289),
    [anon_sym_choice] = ACTIONS(289),
    [anon_sym_do] = ACTIONS(289),
    [anon_sym_nonconsuming] = ACTIONS(289),
    [anon_sym_preconsuming] = ACTIONS(289),
    [anon_sym_postconsuming] = ACTIONS(289),
    [anon_sym_implements] = ACTIONS(289),
    [anon_sym_interface] = ACTIONS(289),
    [anon_sym_instance] = ACTIONS(289),
    [anon_sym_for] = ACTIONS(289),
    [anon_sym_let] = ACTIONS(289),
    [anon_sym_requires] = ACTIONS(289),
    [anon_sym_viewtype] = ACTIONS(289),
    [anon_sym_data] = ACTIONS(289),
    [anon_sym_newtype] = ACTIONS(289),
    [anon_sym_type] = ACTIONS(289),
    [anon_sym_class] = ACTIONS(289),
    [anon_sym_SEMI] = ACTIONS(291),
    [anon_sym_EQ] = ACTIONS(289),
    [anon_sym_LT_DASH] = ACTIONS(289),
    [anon_sym_BQUOTE] = ACTIONS(291),
    [anon_sym_DOT_DOT] = ACTIONS(289),
    [anon_sym_AT] = ACTIONS(289),
    [anon_sym_TILDE] = ACTIONS(289),
    [anon_sym_in] = ACTIONS(289),
    [anon_sym_of] = ACTIONS(289),
    [anon_sym_if] = ACTIONS(289),
    [anon_sym_then] = ACTIONS(289),
    [anon_sym_else] = ACTIONS(289),
    [anon_sym_case] = ACTIONS(289),
    [anon_sym_this] = ACTIONS(289),
    [anon_sym_return] = ACTIONS(289),
    [anon_sym_pure] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(293),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(289),
    [sym_constructor] = ACTIONS(289),
    [sym_qualified] = ACTIONS(291),
    [sym_string_literal] = ACTIONS(291),
    [sym_char_literal] = ACTIONS(291),
    [sym_number_literal] = ACTIONS(291),
    [sym_operator] = ACTIONS(289),
  },
  [58] = {
    [sym__paren_group] = STATE(55),
    [sym__bracket_group] = STATE(55),
    [sym__brace_group] = STATE(55),
    [sym__nested_token] = STATE(55),
    [aux_sym__paren_group_repeat1] = STATE(55),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(295),
    [anon_sym_where] = ACTIONS(295),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(297),
    [anon_sym_import] = ACTIONS(295),
    [anon_sym_as] = ACTIONS(295),
    [anon_sym_template] = ACTIONS(295),
    [anon_sym_with] = ACTIONS(295),
    [anon_sym_COMMA] = ACTIONS(299),
    [anon_sym_COLON] = ACTIONS(295),
    [anon_sym_signatory] = ACTIONS(295),
    [anon_sym_observer] = ACTIONS(295),
    [anon_sym_ensure] = ACTIONS(295),
    [anon_sym_key] = ACTIONS(295),
    [anon_sym_maintainer] = ACTIONS(295),
    [anon_sym_deriving] = ACTIONS(295),
    [anon_sym_controller] = ACTIONS(295),
    [anon_sym_can] = ACTIONS(295),
    [anon_sym_choice] = ACTIONS(295),
    [anon_sym_do] = ACTIONS(295),
    [anon_sym_nonconsuming] = ACTIONS(295),
    [anon_sym_preconsuming] = ACTIONS(295),
    [anon_sym_postconsuming] = ACTIONS(295),
    [anon_sym_implements] = ACTIONS(295),
    [anon_sym_interface] = ACTIONS(295),
    [anon_sym_instance] = ACTIONS(295),
    [anon_sym_for] = ACTIONS(295),
    [anon_sym_let] = ACTIONS(295),
    [anon_sym_requires] = ACTIONS(295),
    [anon_sym_viewtype] = ACTIONS(295),
    [anon_sym_data] = ACTIONS(295),
    [anon_sym_newtype] = ACTIONS(295),
    [anon_sym_type] = ACTIONS(295),
    [anon_sym_class] = ACTIONS(295),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_EQ] = ACTIONS(295),
    [anon_sym_LT_DASH] = ACTIONS(295),
    [anon_sym_BQUOTE] = ACTIONS(299),
    [anon_sym_DOT_DOT] = ACTIONS(295),
    [anon_sym_AT] = ACTIONS(295),
    [anon_sym_TILDE] = ACTIONS(295),
    [anon_sym_in] = ACTIONS(295),
    [anon_sym_of] = ACTIONS(295),
    [anon_sym_if] = ACTIONS(295),
    [anon_sym_then] = ACTIONS(295),
    [anon_sym_else] = ACTIONS(295),
    [anon_sym_case] = ACTIONS(295),
    [anon_sym_this] = ACTIONS(295),
    [anon_sym_return] = ACTIONS(295),
    [anon_sym_pure] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(295),
    [sym_constructor] = ACTIONS(295),
    [sym_qualified] = ACTIONS(299),
    [sym_string_literal] = ACTIONS(299),
    [sym_char_literal] = ACTIONS(299),
    [sym_number_literal] = ACTIONS(299),
    [sym_operator] = ACTIONS(295),
  },
  [59] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_template] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_signatory] = ACTIONS(75),
    [anon_sym_observer] = ACTIONS(75),
    [anon_sym_ensure] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_maintainer] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_controller] = ACTIONS(75),
    [anon_sym_can] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_nonconsuming] = ACTIONS(75),
    [anon_sym_preconsuming] = ACTIONS(75),
    [anon_sym_postconsuming] = ACTIONS(75),
    [anon_sym_implements] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_viewtype] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_newtype] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_DASH] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_of] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_then] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_pure] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(301),
    [sym_identifier] = ACTIONS(75),
    [sym_constructor] = ACTIONS(75),
    [sym_qualified] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_char_literal] = ACTIONS(79),
    [sym_number_literal] = ACTIONS(79),
    [sym_operator] = ACTIONS(75),
  },
  [60] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_template] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_signatory] = ACTIONS(75),
    [anon_sym_observer] = ACTIONS(75),
    [anon_sym_ensure] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_maintainer] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_controller] = ACTIONS(75),
    [anon_sym_can] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_nonconsuming] = ACTIONS(75),
    [anon_sym_preconsuming] = ACTIONS(75),
    [anon_sym_postconsuming] = ACTIONS(75),
    [anon_sym_implements] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_viewtype] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_newtype] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_DASH] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_of] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_then] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_pure] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(303),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(75),
    [sym_constructor] = ACTIONS(75),
    [sym_qualified] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_char_literal] = ACTIONS(79),
    [sym_number_literal] = ACTIONS(79),
    [sym_operator] = ACTIONS(75),
  },
  [61] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(305),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_template] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_signatory] = ACTIONS(75),
    [anon_sym_observer] = ACTIONS(75),
    [anon_sym_ensure] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_maintainer] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_controller] = ACTIONS(75),
    [anon_sym_can] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_nonconsuming] = ACTIONS(75),
    [anon_sym_preconsuming] = ACTIONS(75),
    [anon_sym_postconsuming] = ACTIONS(75),
    [anon_sym_implements] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_viewtype] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_newtype] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_DASH] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_of] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_then] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_pure] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(75),
    [sym_constructor] = ACTIONS(75),
    [sym_qualified] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_char_literal] = ACTIONS(79),
    [sym_number_literal] = ACTIONS(79),
    [sym_operator] = ACTIONS(75),
  },
  [62] = {
    [sym__paren_group] = STATE(59),
    [sym__bracket_group] = STATE(59),
    [sym__brace_group] = STATE(59),
    [sym__nested_token] = STATE(59),
    [aux_sym__paren_group_repeat1] = STATE(59),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(307),
    [anon_sym_where] = ACTIONS(307),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(307),
    [anon_sym_as] = ACTIONS(307),
    [anon_sym_template] = ACTIONS(307),
    [anon_sym_with] = ACTIONS(307),
    [anon_sym_COMMA] = ACTIONS(309),
    [anon_sym_COLON] = ACTIONS(307),
    [anon_sym_signatory] = ACTIONS(307),
    [anon_sym_observer] = ACTIONS(307),
    [anon_sym_ensure] = ACTIONS(307),
    [anon_sym_key] = ACTIONS(307),
    [anon_sym_maintainer] = ACTIONS(307),
    [anon_sym_deriving] = ACTIONS(307),
    [anon_sym_controller] = ACTIONS(307),
    [anon_sym_can] = ACTIONS(307),
    [anon_sym_choice] = ACTIONS(307),
    [anon_sym_do] = ACTIONS(307),
    [anon_sym_nonconsuming] = ACTIONS(307),
    [anon_sym_preconsuming] = ACTIONS(307),
    [anon_sym_postconsuming] = ACTIONS(307),
    [anon_sym_implements] = ACTIONS(307),
    [anon_sym_interface] = ACTIONS(307),
    [anon_sym_instance] = ACTIONS(307),
    [anon_sym_for] = ACTIONS(307),
    [anon_sym_let] = ACTIONS(307),
    [anon_sym_requires] = ACTIONS(307),
    [anon_sym_viewtype] = ACTIONS(307),
    [anon_sym_data] = ACTIONS(307),
    [anon_sym_newtype] = ACTIONS(307),
    [anon_sym_type] = ACTIONS(307),
    [anon_sym_class] = ACTIONS(307),
    [anon_sym_SEMI] = ACTIONS(309),
    [anon_sym_EQ] = ACTIONS(307),
    [anon_sym_LT_DASH] = ACTIONS(307),
    [anon_sym_BQUOTE] = ACTIONS(309),
    [anon_sym_DOT_DOT] = ACTIONS(307),
    [anon_sym_AT] = ACTIONS(307),
    [anon_sym_TILDE] = ACTIONS(307),
    [anon_sym_in] = ACTIONS(307),
    [anon_sym_of] = ACTIONS(307),
    [anon_sym_if] = ACTIONS(307),
    [anon_sym_then] = ACTIONS(307),
    [anon_sym_else] = ACTIONS(307),
    [anon_sym_case] = ACTIONS(307),
    [anon_sym_this] = ACTIONS(307),
    [anon_sym_return] = ACTIONS(307),
    [anon_sym_pure] = ACTIONS(307),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(311),
    [sym_identifier] = ACTIONS(307),
    [sym_constructor] = ACTIONS(307),
    [sym_qualified] = ACTIONS(309),
    [sym_string_literal] = ACTIONS(309),
    [sym_char_literal] = ACTIONS(309),
    [sym_number_literal] = ACTIONS(309),
    [sym_operator] = ACTIONS(307),
  },
  [63] = {
    [sym__paren_group] = STATE(60),
    [sym__bracket_group] = STATE(60),
    [sym__brace_group] = STATE(60),
    [sym__nested_token] = STATE(60),
    [aux_sym__paren_group_repeat1] = STATE(60),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(313),
    [anon_sym_where] = ACTIONS(313),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(313),
    [anon_sym_as] = ACTIONS(313),
    [anon_sym_template] = ACTIONS(313),
    [anon_sym_with] = ACTIONS(313),
    [anon_sym_COMMA] = ACTIONS(315),
    [anon_sym_COLON] = ACTIONS(313),
    [anon_sym_signatory] = ACTIONS(313),
    [anon_sym_observer] = ACTIONS(313),
    [anon_sym_ensure] = ACTIONS(313),
    [anon_sym_key] = ACTIONS(313),
    [anon_sym_maintainer] = ACTIONS(313),
    [anon_sym_deriving] = ACTIONS(313),
    [anon_sym_controller] = ACTIONS(313),
    [anon_sym_can] = ACTIONS(313),
    [anon_sym_choice] = ACTIONS(313),
    [anon_sym_do] = ACTIONS(313),
    [anon_sym_nonconsuming] = ACTIONS(313),
    [anon_sym_preconsuming] = ACTIONS(313),
    [anon_sym_postconsuming] = ACTIONS(313),
    [anon_sym_implements] = ACTIONS(313),
    [anon_sym_interface] = ACTIONS(313),
    [anon_sym_instance] = ACTIONS(313),
    [anon_sym_for] = ACTIONS(313),
    [anon_sym_let] = ACTIONS(313),
    [anon_sym_requires] = ACTIONS(313),
    [anon_sym_viewtype] = ACTIONS(313),
    [anon_sym_data] = ACTIONS(313),
    [anon_sym_newtype] = ACTIONS(313),
    [anon_sym_type] = ACTIONS(313),
    [anon_sym_class] = ACTIONS(313),
    [anon_sym_SEMI] = ACTIONS(315),
    [anon_sym_EQ] = ACTIONS(313),
    [anon_sym_LT_DASH] = ACTIONS(313),
    [anon_sym_BQUOTE] = ACTIONS(315),
    [anon_sym_DOT_DOT] = ACTIONS(313),
    [anon_sym_AT] = ACTIONS(313),
    [anon_sym_TILDE] = ACTIONS(313),
    [anon_sym_in] = ACTIONS(313),
    [anon_sym_of] = ACTIONS(313),
    [anon_sym_if] = ACTIONS(313),
    [anon_sym_then] = ACTIONS(313),
    [anon_sym_else] = ACTIONS(313),
    [anon_sym_case] = ACTIONS(313),
    [anon_sym_this] = ACTIONS(313),
    [anon_sym_return] = ACTIONS(313),
    [anon_sym_pure] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(313),
    [sym_constructor] = ACTIONS(313),
    [sym_qualified] = ACTIONS(315),
    [sym_string_literal] = ACTIONS(315),
    [sym_char_literal] = ACTIONS(315),
    [sym_number_literal] = ACTIONS(315),
    [sym_operator] = ACTIONS(313),
  },
  [64] = {
    [sym__paren_group] = STATE(61),
    [sym__bracket_group] = STATE(61),
    [sym__brace_group] = STATE(61),
    [sym__nested_token] = STATE(61),
    [aux_sym__paren_group_repeat1] = STATE(61),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(319),
    [anon_sym_where] = ACTIONS(319),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_import] = ACTIONS(319),
    [anon_sym_as] = ACTIONS(319),
    [anon_sym_template] = ACTIONS(319),
    [anon_sym_with] = ACTIONS(319),
    [anon_sym_COMMA] = ACTIONS(323),
    [anon_sym_COLON] = ACTIONS(319),
    [anon_sym_signatory] = ACTIONS(319),
    [anon_sym_observer] = ACTIONS(319),
    [anon_sym_ensure] = ACTIONS(319),
    [anon_sym_key] = ACTIONS(319),
    [anon_sym_maintainer] = ACTIONS(319),
    [anon_sym_deriving] = ACTIONS(319),
    [anon_sym_controller] = ACTIONS(319),
    [anon_sym_can] = ACTIONS(319),
    [anon_sym_choice] = ACTIONS(319),
    [anon_sym_do] = ACTIONS(319),
    [anon_sym_nonconsuming] = ACTIONS(319),
    [anon_sym_preconsuming] = ACTIONS(319),
    [anon_sym_postconsuming] = ACTIONS(319),
    [anon_sym_implements] = ACTIONS(319),
    [anon_sym_interface] = ACTIONS(319),
    [anon_sym_instance] = ACTIONS(319),
    [anon_sym_for] = ACTIONS(319),
    [anon_sym_let] = ACTIONS(319),
    [anon_sym_requires] = ACTIONS(319),
    [anon_sym_viewtype] = ACTIONS(319),
    [anon_sym_data] = ACTIONS(319),
    [anon_sym_newtype] = ACTIONS(319),
    [anon_sym_type] = ACTIONS(319),
    [anon_sym_class] = ACTIONS(319),
    [anon_sym_SEMI] = ACTIONS(323),
    [anon_sym_EQ] = ACTIONS(319),
    [anon_sym_LT_DASH] = ACTIONS(319),
    [anon_sym_BQUOTE] = ACTIONS(323),
    [anon_sym_DOT_DOT] = ACTIONS(319),
    [anon_sym_AT] = ACTIONS(319),
    [anon_sym_TILDE] = ACTIONS(319),
    [anon_sym_in] = ACTIONS(319),
    [anon_sym_of] = ACTIONS(319),
    [anon_sym_if] = ACTIONS(319),
    [anon_sym_then] = ACTIONS(319),
    [anon_sym_else] = ACTIONS(319),
    [anon_sym_case] = ACTIONS(319),
    [anon_sym_this] = ACTIONS(319),
    [anon_sym_return] = ACTIONS(319),
    [anon_sym_pure] = ACTIONS(319),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(319),
    [sym_constructor] = ACTIONS(319),
    [sym_qualified] = ACTIONS(323),
    [sym_string_literal] = ACTIONS(323),
    [sym_char_literal] = ACTIONS(323),
    [sym_number_literal] = ACTIONS(323),
    [sym_operator] = ACTIONS(319),
  },
  [65] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_template] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_signatory] = ACTIONS(75),
    [anon_sym_observer] = ACTIONS(75),
    [anon_sym_ensure] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_maintainer] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_controller] = ACTIONS(75),
    [anon_sym_can] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_nonconsuming] = ACTIONS(75),
    [anon_sym_preconsuming] = ACTIONS(75),
    [anon_sym_postconsuming] = ACTIONS(75),
    [anon_sym_implements] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_viewtype] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_newtype] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_DASH] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_of] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_then] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_pure] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(75),
    [sym_constructor] = ACTIONS(75),
    [sym_qualified] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_char_literal] = ACTIONS(79),
    [sym_number_literal] = ACTIONS(79),
    [sym_operator] = ACTIONS(75),
  },
  [66] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_template] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_signatory] = ACTIONS(75),
    [anon_sym_observer] = ACTIONS(75),
    [anon_sym_ensure] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_maintainer] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_controller] = ACTIONS(75),
    [anon_sym_can] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_nonconsuming] = ACTIONS(75),
    [anon_sym_preconsuming] = ACTIONS(75),
    [anon_sym_postconsuming] = ACTIONS(75),
    [anon_sym_implements] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_viewtype] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_newtype] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_DASH] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_of] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_then] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_pure] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(327),
    [sym_identifier] = ACTIONS(75),
    [sym_constructor] = ACTIONS(75),
    [sym_qualified] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_char_literal] = ACTIONS(79),
    [sym_number_literal] = ACTIONS(79),
    [sym_operator] = ACTIONS(75),
  },
  [67] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_template] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_signatory] = ACTIONS(75),
    [anon_sym_observer] = ACTIONS(75),
    [anon_sym_ensure] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_maintainer] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_controller] = ACTIONS(75),
    [anon_sym_can] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_nonconsuming] = ACTIONS(75),
    [anon_sym_preconsuming] = ACTIONS(75),
    [anon_sym_postconsuming] = ACTIONS(75),
    [anon_sym_implements] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_viewtype] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_newtype] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_DASH] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_of] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_then] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_pure] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(329),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(75),
    [sym_constructor] = ACTIONS(75),
    [sym_qualified] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_char_literal] = ACTIONS(79),
    [sym_number_literal] = ACTIONS(79),
    [sym_operator] = ACTIONS(75),
  },
  [68] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(331),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_template] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_signatory] = ACTIONS(75),
    [anon_sym_observer] = ACTIONS(75),
    [anon_sym_ensure] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_maintainer] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_controller] = ACTIONS(75),
    [anon_sym_can] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_nonconsuming] = ACTIONS(75),
    [anon_sym_preconsuming] = ACTIONS(75),
    [anon_sym_postconsuming] = ACTIONS(75),
    [anon_sym_implements] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_viewtype] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_newtype] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_DASH] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_of] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_then] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_pure] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(75),
    [sym_constructor] = ACTIONS(75),
    [sym_qualified] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_char_literal] = ACTIONS(79),
    [sym_number_literal] = ACTIONS(79),
    [sym_operator] = ACTIONS(75),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(333),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(335),
    [anon_sym_LPAREN] = ACTIONS(333),
    [anon_sym_import] = ACTIONS(335),
    [anon_sym_qualified] = ACTIONS(335),
    [anon_sym_as] = ACTIONS(335),
    [anon_sym_hiding] = ACTIONS(335),
    [anon_sym_template] = ACTIONS(335),
    [anon_sym_with] = ACTIONS(335),
    [anon_sym_COMMA] = ACTIONS(333),
    [anon_sym_signatory] = ACTIONS(335),
    [anon_sym_observer] = ACTIONS(335),
    [anon_sym_ensure] = ACTIONS(335),
    [anon_sym_key] = ACTIONS(335),
    [anon_sym_maintainer] = ACTIONS(335),
    [anon_sym_deriving] = ACTIONS(335),
    [anon_sym_controller] = ACTIONS(335),
    [anon_sym_choice] = ACTIONS(335),
    [anon_sym_do] = ACTIONS(335),
    [anon_sym_nonconsuming] = ACTIONS(335),
    [anon_sym_preconsuming] = ACTIONS(335),
    [anon_sym_postconsuming] = ACTIONS(335),
    [anon_sym_implements] = ACTIONS(335),
    [anon_sym_interface] = ACTIONS(335),
    [anon_sym_instance] = ACTIONS(335),
    [anon_sym_let] = ACTIONS(335),
    [anon_sym_data] = ACTIONS(335),
    [anon_sym_newtype] = ACTIONS(335),
    [anon_sym_type] = ACTIONS(335),
    [anon_sym_class] = ACTIONS(335),
    [anon_sym_SEMI] = ACTIONS(333),
    [anon_sym_EQ] = ACTIONS(335),
    [anon_sym_LT_DASH] = ACTIONS(335),
    [anon_sym_BQUOTE] = ACTIONS(333),
    [anon_sym_DOT_DOT] = ACTIONS(335),
    [anon_sym_AT] = ACTIONS(335),
    [anon_sym_TILDE] = ACTIONS(335),
    [anon_sym_in] = ACTIONS(335),
    [anon_sym_of] = ACTIONS(335),
    [anon_sym_if] = ACTIONS(335),
    [anon_sym_then] = ACTIONS(335),
    [anon_sym_else] = ACTIONS(335),
    [anon_sym_case] = ACTIONS(335),
    [anon_sym_this] = ACTIONS(335),
    [anon_sym_return] = ACTIONS(335),
    [anon_sym_pure] = ACTIONS(335),
    [anon_sym_LBRACK] = ACTIONS(333),
    [anon_sym_LBRACE] = ACTIONS(335),
    [sym_exercise_call] = ACTIONS(333),
    [sym_fetch_call] = ACTIONS(333),
    [sym_lookup_call] = ACTIONS(333),
    [sym_create_call] = ACTIONS(333),
    [sym_archive_call] = ACTIONS(333),
    [sym_get_time_call] = ACTIONS(333),
    [sym_unsafe_cast_call] = ACTIONS(333),
    [sym_from_some_call] = ACTIONS(333),
    [sym_qualified_call] = ACTIONS(333),
    [sym_identifier] = ACTIONS(335),
    [sym_constructor] = ACTIONS(335),
    [sym_qualified] = ACTIONS(335),
    [sym_string_literal] = ACTIONS(333),
    [sym_char_literal] = ACTIONS(333),
    [sym_number_literal] = ACTIONS(333),
    [sym_operator] = ACTIONS(335),
  },
  [70] = {
    [sym__paren_group] = STATE(5),
    [sym__bracket_group] = STATE(5),
    [sym__brace_group] = STATE(5),
    [sym__nested_token] = STATE(5),
    [aux_sym__paren_group_repeat1] = STATE(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_template] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_signatory] = ACTIONS(75),
    [anon_sym_observer] = ACTIONS(75),
    [anon_sym_ensure] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_maintainer] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_controller] = ACTIONS(75),
    [anon_sym_can] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_nonconsuming] = ACTIONS(75),
    [anon_sym_preconsuming] = ACTIONS(75),
    [anon_sym_postconsuming] = ACTIONS(75),
    [anon_sym_implements] = ACTIONS(75),
    [anon_sym_interface] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_viewtype] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_newtype] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_DASH] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_of] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_then] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_this] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_pure] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(337),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(75),
    [sym_constructor] = ACTIONS(75),
    [sym_qualified] = ACTIONS(79),
    [sym_string_literal] = ACTIONS(79),
    [sym_char_literal] = ACTIONS(79),
    [sym_number_literal] = ACTIONS(79),
    [sym_operator] = ACTIONS(75),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(339),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(341),
    [anon_sym_LPAREN] = ACTIONS(339),
    [anon_sym_import] = ACTIONS(341),
    [anon_sym_qualified] = ACTIONS(341),
    [anon_sym_as] = ACTIONS(341),
    [anon_sym_hiding] = ACTIONS(341),
    [anon_sym_template] = ACTIONS(341),
    [anon_sym_with] = ACTIONS(341),
    [anon_sym_COMMA] = ACTIONS(339),
    [anon_sym_signatory] = ACTIONS(341),
    [anon_sym_observer] = ACTIONS(341),
    [anon_sym_ensure] = ACTIONS(341),
    [anon_sym_key] = ACTIONS(341),
    [anon_sym_maintainer] = ACTIONS(341),
    [anon_sym_deriving] = ACTIONS(341),
    [anon_sym_controller] = ACTIONS(341),
    [anon_sym_choice] = ACTIONS(341),
    [anon_sym_do] = ACTIONS(341),
    [anon_sym_nonconsuming] = ACTIONS(341),
    [anon_sym_preconsuming] = ACTIONS(341),
    [anon_sym_postconsuming] = ACTIONS(341),
    [anon_sym_implements] = ACTIONS(341),
    [anon_sym_interface] = ACTIONS(341),
    [anon_sym_instance] = ACTIONS(341),
    [anon_sym_let] = ACTIONS(341),
    [anon_sym_data] = ACTIONS(341),
    [anon_sym_newtype] = ACTIONS(341),
    [anon_sym_type] = ACTIONS(341),
    [anon_sym_class] = ACTIONS(341),
    [anon_sym_SEMI] = ACTIONS(339),
    [anon_sym_EQ] = ACTIONS(341),
    [anon_sym_LT_DASH] = ACTIONS(341),
    [anon_sym_BQUOTE] = ACTIONS(339),
    [anon_sym_DOT_DOT] = ACTIONS(341),
    [anon_sym_AT] = ACTIONS(341),
    [anon_sym_TILDE] = ACTIONS(341),
    [anon_sym_in] = ACTIONS(341),
    [anon_sym_of] = ACTIONS(341),
    [anon_sym_if] = ACTIONS(341),
    [anon_sym_then] = ACTIONS(341),
    [anon_sym_else] = ACTIONS(341),
    [anon_sym_case] = ACTIONS(341),
    [anon_sym_this] = ACTIONS(341),
    [anon_sym_return] = ACTIONS(341),
    [anon_sym_pure] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(339),
    [anon_sym_LBRACE] = ACTIONS(341),
    [sym_exercise_call] = ACTIONS(339),
    [sym_fetch_call] = ACTIONS(339),
    [sym_lookup_call] = ACTIONS(339),
    [sym_create_call] = ACTIONS(339),
    [sym_archive_call] = ACTIONS(339),
    [sym_get_time_call] = ACTIONS(339),
    [sym_unsafe_cast_call] = ACTIONS(339),
    [sym_from_some_call] = ACTIONS(339),
    [sym_qualified_call] = ACTIONS(339),
    [sym_identifier] = ACTIONS(341),
    [sym_constructor] = ACTIONS(341),
    [sym_qualified] = ACTIONS(341),
    [sym_string_literal] = ACTIONS(339),
    [sym_char_literal] = ACTIONS(339),
    [sym_number_literal] = ACTIONS(339),
    [sym_operator] = ACTIONS(341),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(343),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(343),
    [anon_sym_import] = ACTIONS(345),
    [anon_sym_qualified] = ACTIONS(345),
    [anon_sym_as] = ACTIONS(345),
    [anon_sym_hiding] = ACTIONS(345),
    [anon_sym_template] = ACTIONS(345),
    [anon_sym_with] = ACTIONS(345),
    [anon_sym_COMMA] = ACTIONS(343),
    [anon_sym_signatory] = ACTIONS(345),
    [anon_sym_observer] = ACTIONS(345),
    [anon_sym_ensure] = ACTIONS(345),
    [anon_sym_key] = ACTIONS(345),
    [anon_sym_maintainer] = ACTIONS(345),
    [anon_sym_deriving] = ACTIONS(345),
    [anon_sym_controller] = ACTIONS(345),
    [anon_sym_choice] = ACTIONS(345),
    [anon_sym_do] = ACTIONS(345),
    [anon_sym_nonconsuming] = ACTIONS(345),
    [anon_sym_preconsuming] = ACTIONS(345),
    [anon_sym_postconsuming] = ACTIONS(345),
    [anon_sym_implements] = ACTIONS(345),
    [anon_sym_interface] = ACTIONS(345),
    [anon_sym_instance] = ACTIONS(345),
    [anon_sym_let] = ACTIONS(345),
    [anon_sym_data] = ACTIONS(345),
    [anon_sym_newtype] = ACTIONS(345),
    [anon_sym_type] = ACTIONS(345),
    [anon_sym_class] = ACTIONS(345),
    [anon_sym_SEMI] = ACTIONS(343),
    [anon_sym_EQ] = ACTIONS(345),
    [anon_sym_LT_DASH] = ACTIONS(345),
    [anon_sym_BQUOTE] = ACTIONS(343),
    [anon_sym_DOT_DOT] = ACTIONS(345),
    [anon_sym_AT] = ACTIONS(345),
    [anon_sym_TILDE] = ACTIONS(345),
    [anon_sym_in] = ACTIONS(345),
    [anon_sym_of] = ACTIONS(345),
    [anon_sym_if] = ACTIONS(345),
    [anon_sym_then] = ACTIONS(345),
    [anon_sym_else] = ACTIONS(345),
    [anon_sym_case] = ACTIONS(345),
    [anon_sym_this] = ACTIONS(345),
    [anon_sym_return] = ACTIONS(345),
    [anon_sym_pure] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_LBRACE] = ACTIONS(345),
    [sym_exercise_call] = ACTIONS(343),
    [sym_fetch_call] = ACTIONS(343),
    [sym_lookup_call] = ACTIONS(343),
    [sym_create_call] = ACTIONS(343),
    [sym_archive_call] = ACTIONS(343),
    [sym_get_time_call] = ACTIONS(343),
    [sym_unsafe_cast_call] = ACTIONS(343),
    [sym_from_some_call] = ACTIONS(343),
    [sym_qualified_call] = ACTIONS(343),
    [sym_identifier] = ACTIONS(345),
    [sym_constructor] = ACTIONS(345),
    [sym_qualified] = ACTIONS(345),
    [sym_string_literal] = ACTIONS(343),
    [sym_char_literal] = ACTIONS(343),
    [sym_number_literal] = ACTIONS(343),
    [sym_operator] = ACTIONS(345),
  },
  [73] = {
    [sym__paren_group] = STATE(66),
    [sym__bracket_group] = STATE(66),
    [sym__brace_group] = STATE(66),
    [sym__nested_token] = STATE(66),
    [aux_sym__paren_group_repeat1] = STATE(66),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(347),
    [anon_sym_where] = ACTIONS(347),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(347),
    [anon_sym_as] = ACTIONS(347),
    [anon_sym_template] = ACTIONS(347),
    [anon_sym_with] = ACTIONS(347),
    [anon_sym_COMMA] = ACTIONS(349),
    [anon_sym_COLON] = ACTIONS(347),
    [anon_sym_signatory] = ACTIONS(347),
    [anon_sym_observer] = ACTIONS(347),
    [anon_sym_ensure] = ACTIONS(347),
    [anon_sym_key] = ACTIONS(347),
    [anon_sym_maintainer] = ACTIONS(347),
    [anon_sym_deriving] = ACTIONS(347),
    [anon_sym_controller] = ACTIONS(347),
    [anon_sym_can] = ACTIONS(347),
    [anon_sym_choice] = ACTIONS(347),
    [anon_sym_do] = ACTIONS(347),
    [anon_sym_nonconsuming] = ACTIONS(347),
    [anon_sym_preconsuming] = ACTIONS(347),
    [anon_sym_postconsuming] = ACTIONS(347),
    [anon_sym_implements] = ACTIONS(347),
    [anon_sym_interface] = ACTIONS(347),
    [anon_sym_instance] = ACTIONS(347),
    [anon_sym_for] = ACTIONS(347),
    [anon_sym_let] = ACTIONS(347),
    [anon_sym_requires] = ACTIONS(347),
    [anon_sym_viewtype] = ACTIONS(347),
    [anon_sym_data] = ACTIONS(347),
    [anon_sym_newtype] = ACTIONS(347),
    [anon_sym_type] = ACTIONS(347),
    [anon_sym_class] = ACTIONS(347),
    [anon_sym_SEMI] = ACTIONS(349),
    [anon_sym_EQ] = ACTIONS(347),
    [anon_sym_LT_DASH] = ACTIONS(347),
    [anon_sym_BQUOTE] = ACTIONS(349),
    [anon_sym_DOT_DOT] = ACTIONS(347),
    [anon_sym_AT] = ACTIONS(347),
    [anon_sym_TILDE] = ACTIONS(347),
    [anon_sym_in] = ACTIONS(347),
    [anon_sym_of] = ACTIONS(347),
    [anon_sym_if] = ACTIONS(347),
    [anon_sym_then] = ACTIONS(347),
    [anon_sym_else] = ACTIONS(347),
    [anon_sym_case] = ACTIONS(347),
    [anon_sym_this] = ACTIONS(347),
    [anon_sym_return] = ACTIONS(347),
    [anon_sym_pure] = ACTIONS(347),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(351),
    [sym_identifier] = ACTIONS(347),
    [sym_constructor] = ACTIONS(347),
    [sym_qualified] = ACTIONS(349),
    [sym_string_literal] = ACTIONS(349),
    [sym_char_literal] = ACTIONS(349),
    [sym_number_literal] = ACTIONS(349),
    [sym_operator] = ACTIONS(347),
  },
  [74] = {
    [sym__paren_group] = STATE(54),
    [sym__bracket_group] = STATE(54),
    [sym__brace_group] = STATE(54),
    [sym__nested_token] = STATE(54),
    [aux_sym__paren_group_repeat1] = STATE(54),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(353),
    [anon_sym_where] = ACTIONS(353),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(353),
    [anon_sym_as] = ACTIONS(353),
    [anon_sym_template] = ACTIONS(353),
    [anon_sym_with] = ACTIONS(353),
    [anon_sym_COMMA] = ACTIONS(355),
    [anon_sym_COLON] = ACTIONS(353),
    [anon_sym_signatory] = ACTIONS(353),
    [anon_sym_observer] = ACTIONS(353),
    [anon_sym_ensure] = ACTIONS(353),
    [anon_sym_key] = ACTIONS(353),
    [anon_sym_maintainer] = ACTIONS(353),
    [anon_sym_deriving] = ACTIONS(353),
    [anon_sym_controller] = ACTIONS(353),
    [anon_sym_can] = ACTIONS(353),
    [anon_sym_choice] = ACTIONS(353),
    [anon_sym_do] = ACTIONS(353),
    [anon_sym_nonconsuming] = ACTIONS(353),
    [anon_sym_preconsuming] = ACTIONS(353),
    [anon_sym_postconsuming] = ACTIONS(353),
    [anon_sym_implements] = ACTIONS(353),
    [anon_sym_interface] = ACTIONS(353),
    [anon_sym_instance] = ACTIONS(353),
    [anon_sym_for] = ACTIONS(353),
    [anon_sym_let] = ACTIONS(353),
    [anon_sym_requires] = ACTIONS(353),
    [anon_sym_viewtype] = ACTIONS(353),
    [anon_sym_data] = ACTIONS(353),
    [anon_sym_newtype] = ACTIONS(353),
    [anon_sym_type] = ACTIONS(353),
    [anon_sym_class] = ACTIONS(353),
    [anon_sym_SEMI] = ACTIONS(355),
    [anon_sym_EQ] = ACTIONS(353),
    [anon_sym_LT_DASH] = ACTIONS(353),
    [anon_sym_BQUOTE] = ACTIONS(355),
    [anon_sym_DOT_DOT] = ACTIONS(353),
    [anon_sym_AT] = ACTIONS(353),
    [anon_sym_TILDE] = ACTIONS(353),
    [anon_sym_in] = ACTIONS(353),
    [anon_sym_of] = ACTIONS(353),
    [anon_sym_if] = ACTIONS(353),
    [anon_sym_then] = ACTIONS(353),
    [anon_sym_else] = ACTIONS(353),
    [anon_sym_case] = ACTIONS(353),
    [anon_sym_this] = ACTIONS(353),
    [anon_sym_return] = ACTIONS(353),
    [anon_sym_pure] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(353),
    [sym_constructor] = ACTIONS(353),
    [sym_qualified] = ACTIONS(355),
    [sym_string_literal] = ACTIONS(355),
    [sym_char_literal] = ACTIONS(355),
    [sym_number_literal] = ACTIONS(355),
    [sym_operator] = ACTIONS(353),
  },
  [75] = {
    [sym__paren_group] = STATE(68),
    [sym__bracket_group] = STATE(68),
    [sym__brace_group] = STATE(68),
    [sym__nested_token] = STATE(68),
    [aux_sym__paren_group_repeat1] = STATE(68),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(359),
    [anon_sym_where] = ACTIONS(359),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(361),
    [anon_sym_import] = ACTIONS(359),
    [anon_sym_as] = ACTIONS(359),
    [anon_sym_template] = ACTIONS(359),
    [anon_sym_with] = ACTIONS(359),
    [anon_sym_COMMA] = ACTIONS(363),
    [anon_sym_COLON] = ACTIONS(359),
    [anon_sym_signatory] = ACTIONS(359),
    [anon_sym_observer] = ACTIONS(359),
    [anon_sym_ensure] = ACTIONS(359),
    [anon_sym_key] = ACTIONS(359),
    [anon_sym_maintainer] = ACTIONS(359),
    [anon_sym_deriving] = ACTIONS(359),
    [anon_sym_controller] = ACTIONS(359),
    [anon_sym_can] = ACTIONS(359),
    [anon_sym_choice] = ACTIONS(359),
    [anon_sym_do] = ACTIONS(359),
    [anon_sym_nonconsuming] = ACTIONS(359),
    [anon_sym_preconsuming] = ACTIONS(359),
    [anon_sym_postconsuming] = ACTIONS(359),
    [anon_sym_implements] = ACTIONS(359),
    [anon_sym_interface] = ACTIONS(359),
    [anon_sym_instance] = ACTIONS(359),
    [anon_sym_for] = ACTIONS(359),
    [anon_sym_let] = ACTIONS(359),
    [anon_sym_requires] = ACTIONS(359),
    [anon_sym_viewtype] = ACTIONS(359),
    [anon_sym_data] = ACTIONS(359),
    [anon_sym_newtype] = ACTIONS(359),
    [anon_sym_type] = ACTIONS(359),
    [anon_sym_class] = ACTIONS(359),
    [anon_sym_SEMI] = ACTIONS(363),
    [anon_sym_EQ] = ACTIONS(359),
    [anon_sym_LT_DASH] = ACTIONS(359),
    [anon_sym_BQUOTE] = ACTIONS(363),
    [anon_sym_DOT_DOT] = ACTIONS(359),
    [anon_sym_AT] = ACTIONS(359),
    [anon_sym_TILDE] = ACTIONS(359),
    [anon_sym_in] = ACTIONS(359),
    [anon_sym_of] = ACTIONS(359),
    [anon_sym_if] = ACTIONS(359),
    [anon_sym_then] = ACTIONS(359),
    [anon_sym_else] = ACTIONS(359),
    [anon_sym_case] = ACTIONS(359),
    [anon_sym_this] = ACTIONS(359),
    [anon_sym_return] = ACTIONS(359),
    [anon_sym_pure] = ACTIONS(359),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(359),
    [sym_constructor] = ACTIONS(359),
    [sym_qualified] = ACTIONS(363),
    [sym_string_literal] = ACTIONS(363),
    [sym_char_literal] = ACTIONS(363),
    [sym_number_literal] = ACTIONS(363),
    [sym_operator] = ACTIONS(359),
  },
  [76] = {
    [sym__blob_token] = STATE(78),
    [sym__paren_group] = STATE(78),
    [sym__bracket_group] = STATE(78),
    [sym__brace_group] = STATE(78),
    [aux_sym__export_paren_repeat1] = STATE(78),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_import] = ACTIONS(37),
    [anon_sym_qualified] = ACTIONS(367),
    [anon_sym_as] = ACTIONS(367),
    [anon_sym_hiding] = ACTIONS(367),
    [anon_sym_template] = ACTIONS(37),
    [anon_sym_with] = ACTIONS(367),
    [anon_sym_COMMA] = ACTIONS(369),
    [anon_sym_controller] = ACTIONS(37),
    [anon_sym_choice] = ACTIONS(37),
    [anon_sym_do] = ACTIONS(367),
    [anon_sym_nonconsuming] = ACTIONS(37),
    [anon_sym_preconsuming] = ACTIONS(37),
    [anon_sym_postconsuming] = ACTIONS(37),
    [anon_sym_interface] = ACTIONS(37),
    [anon_sym_instance] = ACTIONS(37),
    [anon_sym_let] = ACTIONS(367),
    [anon_sym_viewtype] = ACTIONS(37),
    [anon_sym_data] = ACTIONS(37),
    [anon_sym_newtype] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_class] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(369),
    [anon_sym_EQ] = ACTIONS(367),
    [anon_sym_LT_DASH] = ACTIONS(367),
    [anon_sym_BQUOTE] = ACTIONS(369),
    [anon_sym_DOT_DOT] = ACTIONS(367),
    [anon_sym_AT] = ACTIONS(367),
    [anon_sym_TILDE] = ACTIONS(367),
    [anon_sym_in] = ACTIONS(367),
    [anon_sym_of] = ACTIONS(367),
    [anon_sym_if] = ACTIONS(367),
    [anon_sym_then] = ACTIONS(367),
    [anon_sym_else] = ACTIONS(367),
    [anon_sym_case] = ACTIONS(367),
    [anon_sym_this] = ACTIONS(367),
    [anon_sym_return] = ACTIONS(367),
    [anon_sym_pure] = ACTIONS(367),
    [anon_sym_LBRACK] = ACTIONS(371),
    [anon_sym_LBRACE] = ACTIONS(373),
    [sym_exercise_call] = ACTIONS(369),
    [sym_fetch_call] = ACTIONS(369),
    [sym_lookup_call] = ACTIONS(369),
    [sym_create_call] = ACTIONS(369),
    [sym_archive_call] = ACTIONS(369),
    [sym_get_time_call] = ACTIONS(369),
    [sym_unsafe_cast_call] = ACTIONS(369),
    [sym_from_some_call] = ACTIONS(369),
    [sym_qualified_call] = ACTIONS(369),
    [sym_identifier] = ACTIONS(367),
    [sym_constructor] = ACTIONS(367),
    [sym_qualified] = ACTIONS(367),
    [sym_string_literal] = ACTIONS(369),
    [sym_char_literal] = ACTIONS(369),
    [sym_number_literal] = ACTIONS(369),
    [sym_operator] = ACTIONS(367),
  },
  [77] = {
    [sym__blob_token] = STATE(78),
    [sym__paren_group] = STATE(78),
    [sym__bracket_group] = STATE(78),
    [sym__brace_group] = STATE(78),
    [aux_sym__export_paren_repeat1] = STATE(78),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_import] = ACTIONS(23),
    [anon_sym_qualified] = ACTIONS(367),
    [anon_sym_as] = ACTIONS(367),
    [anon_sym_hiding] = ACTIONS(367),
    [anon_sym_template] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(367),
    [anon_sym_COMMA] = ACTIONS(369),
    [anon_sym_controller] = ACTIONS(23),
    [anon_sym_choice] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(367),
    [anon_sym_nonconsuming] = ACTIONS(23),
    [anon_sym_preconsuming] = ACTIONS(23),
    [anon_sym_postconsuming] = ACTIONS(23),
    [anon_sym_interface] = ACTIONS(23),
    [anon_sym_instance] = ACTIONS(23),
    [anon_sym_let] = ACTIONS(367),
    [anon_sym_viewtype] = ACTIONS(23),
    [anon_sym_data] = ACTIONS(23),
    [anon_sym_newtype] = ACTIONS(23),
    [anon_sym_type] = ACTIONS(23),
    [anon_sym_class] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(369),
    [anon_sym_EQ] = ACTIONS(367),
    [anon_sym_LT_DASH] = ACTIONS(367),
    [anon_sym_BQUOTE] = ACTIONS(369),
    [anon_sym_DOT_DOT] = ACTIONS(367),
    [anon_sym_AT] = ACTIONS(367),
    [anon_sym_TILDE] = ACTIONS(367),
    [anon_sym_in] = ACTIONS(367),
    [anon_sym_of] = ACTIONS(367),
    [anon_sym_if] = ACTIONS(367),
    [anon_sym_then] = ACTIONS(367),
    [anon_sym_else] = ACTIONS(367),
    [anon_sym_case] = ACTIONS(367),
    [anon_sym_this] = ACTIONS(367),
    [anon_sym_return] = ACTIONS(367),
    [anon_sym_pure] = ACTIONS(367),
    [anon_sym_LBRACK] = ACTIONS(371),
    [anon_sym_LBRACE] = ACTIONS(373),
    [sym_exercise_call] = ACTIONS(369),
    [sym_fetch_call] = ACTIONS(369),
    [sym_lookup_call] = ACTIONS(369),
    [sym_create_call] = ACTIONS(369),
    [sym_archive_call] = ACTIONS(369),
    [sym_get_time_call] = ACTIONS(369),
    [sym_unsafe_cast_call] = ACTIONS(369),
    [sym_from_some_call] = ACTIONS(369),
    [sym_qualified_call] = ACTIONS(369),
    [sym_identifier] = ACTIONS(367),
    [sym_constructor] = ACTIONS(367),
    [sym_qualified] = ACTIONS(367),
    [sym_string_literal] = ACTIONS(369),
    [sym_char_literal] = ACTIONS(369),
    [sym_number_literal] = ACTIONS(369),
    [sym_operator] = ACTIONS(367),
  },
  [78] = {
    [sym__blob_token] = STATE(78),
    [sym__paren_group] = STATE(78),
    [sym__bracket_group] = STATE(78),
    [sym__brace_group] = STATE(78),
    [aux_sym__export_paren_repeat1] = STATE(78),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(375),
    [anon_sym_import] = ACTIONS(41),
    [anon_sym_qualified] = ACTIONS(378),
    [anon_sym_as] = ACTIONS(378),
    [anon_sym_hiding] = ACTIONS(378),
    [anon_sym_template] = ACTIONS(41),
    [anon_sym_with] = ACTIONS(378),
    [anon_sym_COMMA] = ACTIONS(381),
    [anon_sym_controller] = ACTIONS(41),
    [anon_sym_choice] = ACTIONS(41),
    [anon_sym_do] = ACTIONS(378),
    [anon_sym_nonconsuming] = ACTIONS(41),
    [anon_sym_preconsuming] = ACTIONS(41),
    [anon_sym_postconsuming] = ACTIONS(41),
    [anon_sym_interface] = ACTIONS(41),
    [anon_sym_instance] = ACTIONS(41),
    [anon_sym_let] = ACTIONS(378),
    [anon_sym_viewtype] = ACTIONS(41),
    [anon_sym_data] = ACTIONS(41),
    [anon_sym_newtype] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_class] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(381),
    [anon_sym_EQ] = ACTIONS(378),
    [anon_sym_LT_DASH] = ACTIONS(378),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [anon_sym_DOT_DOT] = ACTIONS(378),
    [anon_sym_AT] = ACTIONS(378),
    [anon_sym_TILDE] = ACTIONS(378),
    [anon_sym_in] = ACTIONS(378),
    [anon_sym_of] = ACTIONS(378),
    [anon_sym_if] = ACTIONS(378),
    [anon_sym_then] = ACTIONS(378),
    [anon_sym_else] = ACTIONS(378),
    [anon_sym_case] = ACTIONS(378),
    [anon_sym_this] = ACTIONS(378),
    [anon_sym_return] = ACTIONS(378),
    [anon_sym_pure] = ACTIONS(378),
    [anon_sym_LBRACK] = ACTIONS(384),
    [anon_sym_LBRACE] = ACTIONS(387),
    [sym_exercise_call] = ACTIONS(381),
    [sym_fetch_call] = ACTIONS(381),
    [sym_lookup_call] = ACTIONS(381),
    [sym_create_call] = ACTIONS(381),
    [sym_archive_call] = ACTIONS(381),
    [sym_get_time_call] = ACTIONS(381),
    [sym_unsafe_cast_call] = ACTIONS(381),
    [sym_from_some_call] = ACTIONS(381),
    [sym_qualified_call] = ACTIONS(381),
    [sym_identifier] = ACTIONS(378),
    [sym_constructor] = ACTIONS(378),
    [sym_qualified] = ACTIONS(378),
    [sym_string_literal] = ACTIONS(381),
    [sym_char_literal] = ACTIONS(381),
    [sym_number_literal] = ACTIONS(381),
    [sym_operator] = ACTIONS(378),
  },
  [79] = {
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(255),
    [anon_sym_where] = ACTIONS(255),
    [anon_sym_LPAREN] = ACTIONS(253),
    [anon_sym_RPAREN] = ACTIONS(253),
    [anon_sym_import] = ACTIONS(255),
    [anon_sym_as] = ACTIONS(255),
    [anon_sym_template] = ACTIONS(255),
    [anon_sym_with] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(253),
    [anon_sym_COLON] = ACTIONS(255),
    [anon_sym_signatory] = ACTIONS(255),
    [anon_sym_observer] = ACTIONS(255),
    [anon_sym_ensure] = ACTIONS(255),
    [anon_sym_key] = ACTIONS(255),
    [anon_sym_maintainer] = ACTIONS(255),
    [anon_sym_deriving] = ACTIONS(255),
    [anon_sym_controller] = ACTIONS(255),
    [anon_sym_can] = ACTIONS(255),
    [anon_sym_choice] = ACTIONS(255),
    [anon_sym_do] = ACTIONS(255),
    [anon_sym_nonconsuming] = ACTIONS(255),
    [anon_sym_preconsuming] = ACTIONS(255),
    [anon_sym_postconsuming] = ACTIONS(255),
    [anon_sym_implements] = ACTIONS(255),
    [anon_sym_interface] = ACTIONS(255),
    [anon_sym_instance] = ACTIONS(255),
    [anon_sym_for] = ACTIONS(255),
    [anon_sym_let] = ACTIONS(255),
    [anon_sym_requires] = ACTIONS(255),
    [anon_sym_viewtype] = ACTIONS(255),
    [anon_sym_data] = ACTIONS(255),
    [anon_sym_newtype] = ACTIONS(255),
    [anon_sym_type] = ACTIONS(255),
    [anon_sym_class] = ACTIONS(255),
    [anon_sym_SEMI] = ACTIONS(253),
    [anon_sym_EQ] = ACTIONS(255),
    [anon_sym_LT_DASH] = ACTIONS(255),
    [anon_sym_BQUOTE] = ACTIONS(253),
    [anon_sym_DOT_DOT] = ACTIONS(255),
    [anon_sym_AT] = ACTIONS(255),
    [anon_sym_TILDE] = ACTIONS(255),
    [anon_sym_in] = ACTIONS(255),
    [anon_sym_of] = ACTIONS(255),
    [anon_sym_if] = ACTIONS(255),
    [anon_sym_then] = ACTIONS(255),
    [anon_sym_else] = ACTIONS(255),
    [anon_sym_case] = ACTIONS(255),
    [anon_sym_this] = ACTIONS(255),
    [anon_sym_return] = ACTIONS(255),
    [anon_sym_pure] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(253),
    [anon_sym_RBRACK] = ACTIONS(253),
    [anon_sym_LBRACE] = ACTIONS(255),
    [anon_sym_RBRACE] = ACTIONS(253),
    [sym_identifier] = ACTIONS(255),
    [sym_constructor] = ACTIONS(255),
    [sym_qualified] = ACTIONS(253),
    [sym_string_literal] = ACTIONS(253),
    [sym_char_literal] = ACTIONS(253),
    [sym_number_literal] = ACTIONS(253),
    [sym_operator] = ACTIONS(255),
  },
  [80] = {
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(335),
    [anon_sym_where] = ACTIONS(335),
    [anon_sym_LPAREN] = ACTIONS(333),
    [anon_sym_RPAREN] = ACTIONS(333),
    [anon_sym_import] = ACTIONS(335),
    [anon_sym_as] = ACTIONS(335),
    [anon_sym_template] = ACTIONS(335),
    [anon_sym_with] = ACTIONS(335),
    [anon_sym_COMMA] = ACTIONS(333),
    [anon_sym_COLON] = ACTIONS(335),
    [anon_sym_signatory] = ACTIONS(335),
    [anon_sym_observer] = ACTIONS(335),
    [anon_sym_ensure] = ACTIONS(335),
    [anon_sym_key] = ACTIONS(335),
    [anon_sym_maintainer] = ACTIONS(335),
    [anon_sym_deriving] = ACTIONS(335),
    [anon_sym_controller] = ACTIONS(335),
    [anon_sym_can] = ACTIONS(335),
    [anon_sym_choice] = ACTIONS(335),
    [anon_sym_do] = ACTIONS(335),
    [anon_sym_nonconsuming] = ACTIONS(335),
    [anon_sym_preconsuming] = ACTIONS(335),
    [anon_sym_postconsuming] = ACTIONS(335),
    [anon_sym_implements] = ACTIONS(335),
    [anon_sym_interface] = ACTIONS(335),
    [anon_sym_instance] = ACTIONS(335),
    [anon_sym_for] = ACTIONS(335),
    [anon_sym_let] = ACTIONS(335),
    [anon_sym_requires] = ACTIONS(335),
    [anon_sym_viewtype] = ACTIONS(335),
    [anon_sym_data] = ACTIONS(335),
    [anon_sym_newtype] = ACTIONS(335),
    [anon_sym_type] = ACTIONS(335),
    [anon_sym_class] = ACTIONS(335),
    [anon_sym_SEMI] = ACTIONS(333),
    [anon_sym_EQ] = ACTIONS(335),
    [anon_sym_LT_DASH] = ACTIONS(335),
    [anon_sym_BQUOTE] = ACTIONS(333),
    [anon_sym_DOT_DOT] = ACTIONS(335),
    [anon_sym_AT] = ACTIONS(335),
    [anon_sym_TILDE] = ACTIONS(335),
    [anon_sym_in] = ACTIONS(335),
    [anon_sym_of] = ACTIONS(335),
    [anon_sym_if] = ACTIONS(335),
    [anon_sym_then] = ACTIONS(335),
    [anon_sym_else] = ACTIONS(335),
    [anon_sym_case] = ACTIONS(335),
    [anon_sym_this] = ACTIONS(335),
    [anon_sym_return] = ACTIONS(335),
    [anon_sym_pure] = ACTIONS(335),
    [anon_sym_LBRACK] = ACTIONS(333),
    [anon_sym_RBRACK] = ACTIONS(333),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_RBRACE] = ACTIONS(333),
    [sym_identifier] = ACTIONS(335),
    [sym_constructor] = ACTIONS(335),
    [sym_qualified] = ACTIONS(333),
    [sym_string_literal] = ACTIONS(333),
    [sym_char_literal] = ACTIONS(333),
    [sym_number_literal] = ACTIONS(333),
    [sym_operator] = ACTIONS(335),
  },
  [81] = {
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(221),
    [anon_sym_where] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_RPAREN] = ACTIONS(219),
    [anon_sym_import] = ACTIONS(221),
    [anon_sym_as] = ACTIONS(221),
    [anon_sym_template] = ACTIONS(221),
    [anon_sym_with] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(219),
    [anon_sym_COLON] = ACTIONS(221),
    [anon_sym_signatory] = ACTIONS(221),
    [anon_sym_observer] = ACTIONS(221),
    [anon_sym_ensure] = ACTIONS(221),
    [anon_sym_key] = ACTIONS(221),
    [anon_sym_maintainer] = ACTIONS(221),
    [anon_sym_deriving] = ACTIONS(221),
    [anon_sym_controller] = ACTIONS(221),
    [anon_sym_can] = ACTIONS(221),
    [anon_sym_choice] = ACTIONS(221),
    [anon_sym_do] = ACTIONS(221),
    [anon_sym_nonconsuming] = ACTIONS(221),
    [anon_sym_preconsuming] = ACTIONS(221),
    [anon_sym_postconsuming] = ACTIONS(221),
    [anon_sym_implements] = ACTIONS(221),
    [anon_sym_interface] = ACTIONS(221),
    [anon_sym_instance] = ACTIONS(221),
    [anon_sym_for] = ACTIONS(221),
    [anon_sym_let] = ACTIONS(221),
    [anon_sym_requires] = ACTIONS(221),
    [anon_sym_viewtype] = ACTIONS(221),
    [anon_sym_data] = ACTIONS(221),
    [anon_sym_newtype] = ACTIONS(221),
    [anon_sym_type] = ACTIONS(221),
    [anon_sym_class] = ACTIONS(221),
    [anon_sym_SEMI] = ACTIONS(219),
    [anon_sym_EQ] = ACTIONS(221),
    [anon_sym_LT_DASH] = ACTIONS(221),
    [anon_sym_BQUOTE] = ACTIONS(219),
    [anon_sym_DOT_DOT] = ACTIONS(221),
    [anon_sym_AT] = ACTIONS(221),
    [anon_sym_TILDE] = ACTIONS(221),
    [anon_sym_in] = ACTIONS(221),
    [anon_sym_of] = ACTIONS(221),
    [anon_sym_if] = ACTIONS(221),
    [anon_sym_then] = ACTIONS(221),
    [anon_sym_else] = ACTIONS(221),
    [anon_sym_case] = ACTIONS(221),
    [anon_sym_this] = ACTIONS(221),
    [anon_sym_return] = ACTIONS(221),
    [anon_sym_pure] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_RBRACK] = ACTIONS(219),
    [anon_sym_LBRACE] = ACTIONS(221),
    [anon_sym_RBRACE] = ACTIONS(219),
    [sym_identifier] = ACTIONS(221),
    [sym_constructor] = ACTIONS(221),
    [sym_qualified] = ACTIONS(219),
    [sym_string_literal] = ACTIONS(219),
    [sym_char_literal] = ACTIONS(219),
    [sym_number_literal] = ACTIONS(219),
    [sym_operator] = ACTIONS(221),
  },
  [82] = {
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(341),
    [anon_sym_where] = ACTIONS(341),
    [anon_sym_LPAREN] = ACTIONS(339),
    [anon_sym_RPAREN] = ACTIONS(339),
    [anon_sym_import] = ACTIONS(341),
    [anon_sym_as] = ACTIONS(341),
    [anon_sym_template] = ACTIONS(341),
    [anon_sym_with] = ACTIONS(341),
    [anon_sym_COMMA] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(341),
    [anon_sym_signatory] = ACTIONS(341),
    [anon_sym_observer] = ACTIONS(341),
    [anon_sym_ensure] = ACTIONS(341),
    [anon_sym_key] = ACTIONS(341),
    [anon_sym_maintainer] = ACTIONS(341),
    [anon_sym_deriving] = ACTIONS(341),
    [anon_sym_controller] = ACTIONS(341),
    [anon_sym_can] = ACTIONS(341),
    [anon_sym_choice] = ACTIONS(341),
    [anon_sym_do] = ACTIONS(341),
    [anon_sym_nonconsuming] = ACTIONS(341),
    [anon_sym_preconsuming] = ACTIONS(341),
    [anon_sym_postconsuming] = ACTIONS(341),
    [anon_sym_implements] = ACTIONS(341),
    [anon_sym_interface] = ACTIONS(341),
    [anon_sym_instance] = ACTIONS(341),
    [anon_sym_for] = ACTIONS(341),
    [anon_sym_let] = ACTIONS(341),
    [anon_sym_requires] = ACTIONS(341),
    [anon_sym_viewtype] = ACTIONS(341),
    [anon_sym_data] = ACTIONS(341),
    [anon_sym_newtype] = ACTIONS(341),
    [anon_sym_type] = ACTIONS(341),
    [anon_sym_class] = ACTIONS(341),
    [anon_sym_SEMI] = ACTIONS(339),
    [anon_sym_EQ] = ACTIONS(341),
    [anon_sym_LT_DASH] = ACTIONS(341),
    [anon_sym_BQUOTE] = ACTIONS(339),
    [anon_sym_DOT_DOT] = ACTIONS(341),
    [anon_sym_AT] = ACTIONS(341),
    [anon_sym_TILDE] = ACTIONS(341),
    [anon_sym_in] = ACTIONS(341),
    [anon_sym_of] = ACTIONS(341),
    [anon_sym_if] = ACTIONS(341),
    [anon_sym_then] = ACTIONS(341),
    [anon_sym_else] = ACTIONS(341),
    [anon_sym_case] = ACTIONS(341),
    [anon_sym_this] = ACTIONS(341),
    [anon_sym_return] = ACTIONS(341),
    [anon_sym_pure] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(339),
    [anon_sym_RBRACK] = ACTIONS(339),
    [anon_sym_LBRACE] = ACTIONS(341),
    [anon_sym_RBRACE] = ACTIONS(339),
    [sym_identifier] = ACTIONS(341),
    [sym_constructor] = ACTIONS(341),
    [sym_qualified] = ACTIONS(339),
    [sym_string_literal] = ACTIONS(339),
    [sym_char_literal] = ACTIONS(339),
    [sym_number_literal] = ACTIONS(339),
    [sym_operator] = ACTIONS(341),
  },
  [83] = {
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(345),
    [anon_sym_where] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(343),
    [anon_sym_RPAREN] = ACTIONS(343),
    [anon_sym_import] = ACTIONS(345),
    [anon_sym_as] = ACTIONS(345),
    [anon_sym_template] = ACTIONS(345),
    [anon_sym_with] = ACTIONS(345),
    [anon_sym_COMMA] = ACTIONS(343),
    [anon_sym_COLON] = ACTIONS(345),
    [anon_sym_signatory] = ACTIONS(345),
    [anon_sym_observer] = ACTIONS(345),
    [anon_sym_ensure] = ACTIONS(345),
    [anon_sym_key] = ACTIONS(345),
    [anon_sym_maintainer] = ACTIONS(345),
    [anon_sym_deriving] = ACTIONS(345),
    [anon_sym_controller] = ACTIONS(345),
    [anon_sym_can] = ACTIONS(345),
    [anon_sym_choice] = ACTIONS(345),
    [anon_sym_do] = ACTIONS(345),
    [anon_sym_nonconsuming] = ACTIONS(345),
    [anon_sym_preconsuming] = ACTIONS(345),
    [anon_sym_postconsuming] = ACTIONS(345),
    [anon_sym_implements] = ACTIONS(345),
    [anon_sym_interface] = ACTIONS(345),
    [anon_sym_instance] = ACTIONS(345),
    [anon_sym_for] = ACTIONS(345),
    [anon_sym_let] = ACTIONS(345),
    [anon_sym_requires] = ACTIONS(345),
    [anon_sym_viewtype] = ACTIONS(345),
    [anon_sym_data] = ACTIONS(345),
    [anon_sym_newtype] = ACTIONS(345),
    [anon_sym_type] = ACTIONS(345),
    [anon_sym_class] = ACTIONS(345),
    [anon_sym_SEMI] = ACTIONS(343),
    [anon_sym_EQ] = ACTIONS(345),
    [anon_sym_LT_DASH] = ACTIONS(345),
    [anon_sym_BQUOTE] = ACTIONS(343),
    [anon_sym_DOT_DOT] = ACTIONS(345),
    [anon_sym_AT] = ACTIONS(345),
    [anon_sym_TILDE] = ACTIONS(345),
    [anon_sym_in] = ACTIONS(345),
    [anon_sym_of] = ACTIONS(345),
    [anon_sym_if] = ACTIONS(345),
    [anon_sym_then] = ACTIONS(345),
    [anon_sym_else] = ACTIONS(345),
    [anon_sym_case] = ACTIONS(345),
    [anon_sym_this] = ACTIONS(345),
    [anon_sym_return] = ACTIONS(345),
    [anon_sym_pure] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_RBRACK] = ACTIONS(343),
    [anon_sym_LBRACE] = ACTIONS(345),
    [anon_sym_RBRACE] = ACTIONS(343),
    [sym_identifier] = ACTIONS(345),
    [sym_constructor] = ACTIONS(345),
    [sym_qualified] = ACTIONS(343),
    [sym_string_literal] = ACTIONS(343),
    [sym_char_literal] = ACTIONS(343),
    [sym_number_literal] = ACTIONS(343),
    [sym_operator] = ACTIONS(345),
  },
  [84] = {
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(227),
    [anon_sym_where] = ACTIONS(227),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_import] = ACTIONS(227),
    [anon_sym_as] = ACTIONS(227),
    [anon_sym_template] = ACTIONS(227),
    [anon_sym_with] = ACTIONS(227),
    [anon_sym_COMMA] = ACTIONS(225),
    [anon_sym_COLON] = ACTIONS(227),
    [anon_sym_signatory] = ACTIONS(227),
    [anon_sym_observer] = ACTIONS(227),
    [anon_sym_ensure] = ACTIONS(227),
    [anon_sym_key] = ACTIONS(227),
    [anon_sym_maintainer] = ACTIONS(227),
    [anon_sym_deriving] = ACTIONS(227),
    [anon_sym_controller] = ACTIONS(227),
    [anon_sym_can] = ACTIONS(227),
    [anon_sym_choice] = ACTIONS(227),
    [anon_sym_do] = ACTIONS(227),
    [anon_sym_nonconsuming] = ACTIONS(227),
    [anon_sym_preconsuming] = ACTIONS(227),
    [anon_sym_postconsuming] = ACTIONS(227),
    [anon_sym_implements] = ACTIONS(227),
    [anon_sym_interface] = ACTIONS(227),
    [anon_sym_instance] = ACTIONS(227),
    [anon_sym_for] = ACTIONS(227),
    [anon_sym_let] = ACTIONS(227),
    [anon_sym_requires] = ACTIONS(227),
    [anon_sym_viewtype] = ACTIONS(227),
    [anon_sym_data] = ACTIONS(227),
    [anon_sym_newtype] = ACTIONS(227),
    [anon_sym_type] = ACTIONS(227),
    [anon_sym_class] = ACTIONS(227),
    [anon_sym_SEMI] = ACTIONS(225),
    [anon_sym_EQ] = ACTIONS(227),
    [anon_sym_LT_DASH] = ACTIONS(227),
    [anon_sym_BQUOTE] = ACTIONS(225),
    [anon_sym_DOT_DOT] = ACTIONS(227),
    [anon_sym_AT] = ACTIONS(227),
    [anon_sym_TILDE] = ACTIONS(227),
    [anon_sym_in] = ACTIONS(227),
    [anon_sym_of] = ACTIONS(227),
    [anon_sym_if] = ACTIONS(227),
    [anon_sym_then] = ACTIONS(227),
    [anon_sym_else] = ACTIONS(227),
    [anon_sym_case] = ACTIONS(227),
    [anon_sym_this] = ACTIONS(227),
    [anon_sym_return] = ACTIONS(227),
    [anon_sym_pure] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(225),
    [anon_sym_RBRACK] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(227),
    [anon_sym_RBRACE] = ACTIONS(225),
    [sym_identifier] = ACTIONS(227),
    [sym_constructor] = ACTIONS(227),
    [sym_qualified] = ACTIONS(225),
    [sym_string_literal] = ACTIONS(225),
    [sym_char_literal] = ACTIONS(225),
    [sym_number_literal] = ACTIONS(225),
    [sym_operator] = ACTIONS(227),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(333), 18,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(335), 40,
      anon_sym_module,
      anon_sym_import,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_template,
      anon_sym_with,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_do,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_viewtype,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [68] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(253), 18,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(255), 40,
      anon_sym_module,
      anon_sym_import,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_template,
      anon_sym_with,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_do,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_viewtype,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [136] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(339), 18,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(341), 40,
      anon_sym_module,
      anon_sym_import,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_template,
      anon_sym_with,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_do,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_viewtype,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [204] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(343), 18,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(345), 40,
      anon_sym_module,
      anon_sym_import,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_template,
      anon_sym_with,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_do,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_viewtype,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [272] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(225), 18,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(227), 40,
      anon_sym_module,
      anon_sym_import,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_template,
      anon_sym_with,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_do,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_viewtype,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [340] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(219), 18,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(221), 40,
      anon_sym_module,
      anon_sym_import,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_template,
      anon_sym_with,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_do,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_viewtype,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [408] = 9,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(390), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      anon_sym_LBRACK,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(92), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(37), 9,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
    ACTIONS(394), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(392), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [487] = 9,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_LBRACK,
    ACTIONS(412), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(92), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(41), 9,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
    ACTIONS(406), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(403), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [566] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(225), 18,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(227), 34,
      anon_sym_module,
      anon_sym_import,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_template,
      anon_sym_with,
      anon_sym_do,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [628] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(219), 18,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(221), 34,
      anon_sym_module,
      anon_sym_import,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_template,
      anon_sym_with,
      anon_sym_do,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [690] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(343), 18,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(345), 34,
      anon_sym_module,
      anon_sym_import,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_template,
      anon_sym_with,
      anon_sym_do,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [752] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(253), 18,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(255), 34,
      anon_sym_module,
      anon_sym_import,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_template,
      anon_sym_with,
      anon_sym_do,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [814] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(333), 18,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(335), 34,
      anon_sym_module,
      anon_sym_import,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_template,
      anon_sym_with,
      anon_sym_do,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [876] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(339), 18,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(341), 34,
      anon_sym_module,
      anon_sym_import,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_template,
      anon_sym_with,
      anon_sym_do,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [938] = 8,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(241), 1,
      sym_body_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(2), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(417), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(415), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [1006] = 8,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      anon_sym_LBRACK,
    ACTIONS(373), 1,
      anon_sym_LBRACE,
    STATE(249), 1,
      sym_body_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(77), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(421), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(419), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [1074] = 8,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      anon_sym_LBRACK,
    ACTIONS(431), 1,
      anon_sym_LBRACE,
    STATE(380), 1,
      sym_expr_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(148), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(427), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(425), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [1142] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(152), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(439), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(437), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [1210] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(132), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(447), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(445), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [1278] = 8,
    ACTIONS(390), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      anon_sym_LBRACK,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
    STATE(294), 1,
      sym_expr_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(91), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(451), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(449), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [1346] = 8,
    ACTIONS(390), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      anon_sym_LBRACK,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
    STATE(306), 1,
      sym_expr_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(91), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(451), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(449), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [1414] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(152), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(439), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(437), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [1482] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(135), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(457), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(455), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [1550] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(137), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(463), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(461), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [1618] = 8,
    ACTIONS(390), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      anon_sym_LBRACK,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
    STATE(308), 1,
      sym_expr_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(91), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(451), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(449), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [1686] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(113), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(469), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(467), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [1754] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(114), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(475), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(473), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [1822] = 8,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_LBRACK,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    STATE(405), 1,
      sym_expr_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(163), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(481), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(479), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [1890] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(152), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(439), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(437), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [1958] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(152), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(439), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(437), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [2026] = 8,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(231), 1,
      sym_expr_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(3), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(493), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(491), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [2094] = 8,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(229), 1,
      sym_expr_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(3), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(493), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(491), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [2162] = 8,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(227), 1,
      sym_expr_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(3), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(493), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(491), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [2230] = 8,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(230), 1,
      sym_expr_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(3), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(493), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(491), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [2298] = 8,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(228), 1,
      sym_expr_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(3), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(493), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(491), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [2366] = 8,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(233), 1,
      sym_expr_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(3), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(493), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(491), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [2434] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(141), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(497), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(495), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [2502] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(144), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(503), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(501), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [2570] = 8,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      anon_sym_LBRACK,
    ACTIONS(431), 1,
      anon_sym_LBRACE,
    STATE(416), 1,
      sym_expr_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(148), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(427), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(425), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [2638] = 8,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      anon_sym_LBRACK,
    ACTIONS(373), 1,
      anon_sym_LBRACE,
    STATE(252), 1,
      sym_expr_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(76), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(507), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(505), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [2706] = 8,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      anon_sym_LBRACK,
    ACTIONS(373), 1,
      anon_sym_LBRACE,
    STATE(250), 1,
      sym_expr_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(76), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(507), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(505), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [2774] = 8,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(237), 1,
      sym_body_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(2), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(417), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(415), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [2842] = 8,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(242), 1,
      sym_body_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(2), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(417), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(415), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [2910] = 8,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(225), 1,
      sym_body_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(2), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(417), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(415), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [2978] = 8,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(240), 1,
      sym_body_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(2), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(417), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(415), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [3046] = 8,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(239), 1,
      sym_body_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(2), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(417), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(415), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [3114] = 8,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(238), 1,
      sym_body_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(2), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(417), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(415), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [3182] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(509), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(152), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(439), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(437), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [3250] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(509), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(154), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(513), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(511), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [3318] = 8,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(226), 1,
      sym_body_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(2), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(417), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(415), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [3386] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(152), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(439), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(437), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [3454] = 8,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(234), 1,
      sym_expr_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(3), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(493), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(491), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [3522] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(152), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(439), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(437), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [3590] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(157), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(521), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(519), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [3658] = 8,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(236), 1,
      sym_expr_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(3), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(493), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(491), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [3726] = 8,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(235), 1,
      sym_expr_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(3), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(493), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(491), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [3794] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(152), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(439), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(437), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [3862] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(151), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(527), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(525), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [3930] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(102), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(533), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(531), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [3998] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(152), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(439), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(437), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [4066] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(106), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(539), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(537), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [4134] = 8,
    ACTIONS(41), 1,
      anon_sym_can,
    ACTIONS(541), 1,
      anon_sym_LPAREN,
    ACTIONS(550), 1,
      anon_sym_LBRACK,
    ACTIONS(553), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(146), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(547), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(544), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [4202] = 8,
    ACTIONS(41), 1,
      anon_sym_where,
    ACTIONS(556), 1,
      anon_sym_LPAREN,
    ACTIONS(565), 1,
      anon_sym_LBRACK,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(147), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(562), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(559), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [4270] = 8,
    ACTIONS(37), 1,
      anon_sym_can,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      anon_sym_LBRACK,
    ACTIONS(431), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(146), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(573), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(571), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [4338] = 8,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      anon_sym_LBRACK,
    ACTIONS(373), 1,
      anon_sym_LBRACE,
    STATE(258), 1,
      sym_body_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(77), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(421), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(419), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [4406] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(152), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(439), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(437), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [4474] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(152), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(439), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(437), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [4542] = 8,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(588), 1,
      anon_sym_LBRACK,
    ACTIONS(591), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(152), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(585), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(582), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [4610] = 8,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      anon_sym_LBRACK,
    ACTIONS(373), 1,
      anon_sym_LBRACE,
    STATE(259), 1,
      sym_body_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(77), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(421), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(419), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [4678] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(594), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(152), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(439), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(437), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [4746] = 8,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      anon_sym_LBRACK,
    ACTIONS(373), 1,
      anon_sym_LBRACE,
    STATE(255), 1,
      sym_body_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(77), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(421), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(419), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [4814] = 8,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      anon_sym_LBRACK,
    ACTIONS(373), 1,
      anon_sym_LBRACE,
    STATE(256), 1,
      sym_body_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(77), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(421), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(419), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [4882] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(152), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(439), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(437), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [4950] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(150), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(600), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(598), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [5018] = 8,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(232), 1,
      sym_expr_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(3), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(493), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(491), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [5086] = 8,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      anon_sym_LBRACK,
    ACTIONS(373), 1,
      anon_sym_LBRACE,
    STATE(253), 1,
      sym_expr_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(76), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(507), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(505), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [5154] = 8,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      anon_sym_LBRACK,
    ACTIONS(373), 1,
      anon_sym_LBRACE,
    STATE(257), 1,
      sym_body_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(77), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(421), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(419), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [5222] = 8,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      anon_sym_LBRACK,
    ACTIONS(373), 1,
      anon_sym_LBRACE,
    STATE(254), 1,
      sym_body_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(77), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(421), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(419), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [5290] = 8,
    ACTIONS(37), 1,
      anon_sym_where,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_LBRACK,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(147), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(604), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(602), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [5358] = 8,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      anon_sym_LBRACK,
    ACTIONS(373), 1,
      anon_sym_LBRACE,
    STATE(260), 1,
      sym_body_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(77), 5,
      sym__blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym__export_paren_repeat1,
    ACTIONS(421), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(419), 24,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [5426] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    STATE(377), 1,
      sym_ctrl_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(180), 5,
      sym__ctrl_blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym_ctrl_blob_repeat1,
    ACTIONS(608), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(606), 23,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [5493] = 8,
    ACTIONS(610), 1,
      anon_sym_LPAREN,
    ACTIONS(616), 1,
      anon_sym_LBRACK,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    STATE(399), 1,
      sym_ctrl_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(183), 5,
      sym__ctrl_blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym_ctrl_blob_repeat1,
    ACTIONS(614), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(612), 23,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [5560] = 8,
    ACTIONS(610), 1,
      anon_sym_LPAREN,
    ACTIONS(616), 1,
      anon_sym_LBRACK,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    STATE(408), 1,
      sym_ctrl_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(183), 5,
      sym__ctrl_blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym_ctrl_blob_repeat1,
    ACTIONS(614), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(612), 23,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [5627] = 8,
    ACTIONS(610), 1,
      anon_sym_LPAREN,
    ACTIONS(616), 1,
      anon_sym_LBRACK,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    STATE(407), 1,
      sym_ctrl_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(183), 5,
      sym__ctrl_blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym_ctrl_blob_repeat1,
    ACTIONS(614), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(612), 23,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [5694] = 8,
    ACTIONS(610), 1,
      anon_sym_LPAREN,
    ACTIONS(616), 1,
      anon_sym_LBRACK,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    STATE(406), 1,
      sym_ctrl_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(183), 5,
      sym__ctrl_blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym_ctrl_blob_repeat1,
    ACTIONS(614), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(612), 23,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [5761] = 8,
    ACTIONS(610), 1,
      anon_sym_LPAREN,
    ACTIONS(616), 1,
      anon_sym_LBRACK,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    STATE(404), 1,
      sym_ctrl_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(183), 5,
      sym__ctrl_blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym_ctrl_blob_repeat1,
    ACTIONS(614), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(612), 23,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [5828] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    STATE(389), 1,
      sym_ctrl_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(180), 5,
      sym__ctrl_blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym_ctrl_blob_repeat1,
    ACTIONS(608), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(606), 23,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [5895] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    STATE(388), 1,
      sym_ctrl_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(180), 5,
      sym__ctrl_blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym_ctrl_blob_repeat1,
    ACTIONS(608), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(606), 23,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [5962] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    STATE(387), 1,
      sym_ctrl_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(180), 5,
      sym__ctrl_blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym_ctrl_blob_repeat1,
    ACTIONS(608), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(606), 23,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [6029] = 8,
    ACTIONS(610), 1,
      anon_sym_LPAREN,
    ACTIONS(616), 1,
      anon_sym_LBRACK,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    STATE(392), 1,
      sym_ctrl_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(183), 5,
      sym__ctrl_blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym_ctrl_blob_repeat1,
    ACTIONS(614), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(612), 23,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [6096] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    STATE(370), 1,
      sym_ctrl_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(180), 5,
      sym__ctrl_blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym_ctrl_blob_repeat1,
    ACTIONS(608), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(606), 23,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [6163] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    STATE(386), 1,
      sym_ctrl_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(180), 5,
      sym__ctrl_blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym_ctrl_blob_repeat1,
    ACTIONS(608), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(606), 23,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [6230] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    STATE(385), 1,
      sym_ctrl_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(180), 5,
      sym__ctrl_blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym_ctrl_blob_repeat1,
    ACTIONS(608), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(606), 23,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [6297] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    STATE(384), 1,
      sym_ctrl_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(180), 5,
      sym__ctrl_blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym_ctrl_blob_repeat1,
    ACTIONS(608), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(606), 23,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [6364] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    STATE(383), 1,
      sym_ctrl_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(180), 5,
      sym__ctrl_blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym_ctrl_blob_repeat1,
    ACTIONS(608), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(606), 23,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [6431] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(624), 1,
      anon_sym_do,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(182), 5,
      sym__ctrl_blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym_ctrl_blob_repeat1,
    ACTIONS(622), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(620), 23,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [6498] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    STATE(382), 1,
      sym_ctrl_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(180), 5,
      sym__ctrl_blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym_ctrl_blob_repeat1,
    ACTIONS(608), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(606), 23,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [6565] = 8,
    ACTIONS(626), 1,
      anon_sym_LPAREN,
    ACTIONS(635), 1,
      anon_sym_do,
    ACTIONS(637), 1,
      anon_sym_LBRACK,
    ACTIONS(640), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(182), 5,
      sym__ctrl_blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym_ctrl_blob_repeat1,
    ACTIONS(632), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(629), 23,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [6632] = 8,
    ACTIONS(610), 1,
      anon_sym_LPAREN,
    ACTIONS(616), 1,
      anon_sym_LBRACK,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    ACTIONS(624), 1,
      anon_sym_controller,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(191), 5,
      sym__ctrl_blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym_ctrl_blob_repeat1,
    ACTIONS(645), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(643), 23,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [6699] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    STATE(411), 1,
      sym_ctrl_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(180), 5,
      sym__ctrl_blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym_ctrl_blob_repeat1,
    ACTIONS(608), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(606), 23,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [6766] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    STATE(410), 1,
      sym_ctrl_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(180), 5,
      sym__ctrl_blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym_ctrl_blob_repeat1,
    ACTIONS(608), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(606), 23,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [6833] = 8,
    ACTIONS(610), 1,
      anon_sym_LPAREN,
    ACTIONS(616), 1,
      anon_sym_LBRACK,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    STATE(363), 1,
      sym_ctrl_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(183), 5,
      sym__ctrl_blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym_ctrl_blob_repeat1,
    ACTIONS(614), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(612), 23,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [6900] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    STATE(359), 1,
      sym_ctrl_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(180), 5,
      sym__ctrl_blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym_ctrl_blob_repeat1,
    ACTIONS(608), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(606), 23,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [6967] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    STATE(357), 1,
      sym_ctrl_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(180), 5,
      sym__ctrl_blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym_ctrl_blob_repeat1,
    ACTIONS(608), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(606), 23,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [7034] = 8,
    ACTIONS(610), 1,
      anon_sym_LPAREN,
    ACTIONS(616), 1,
      anon_sym_LBRACK,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    STATE(364), 1,
      sym_ctrl_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(183), 5,
      sym__ctrl_blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym_ctrl_blob_repeat1,
    ACTIONS(614), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(612), 23,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [7101] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    STATE(374), 1,
      sym_ctrl_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(180), 5,
      sym__ctrl_blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym_ctrl_blob_repeat1,
    ACTIONS(608), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(606), 23,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [7168] = 8,
    ACTIONS(635), 1,
      anon_sym_controller,
    ACTIONS(647), 1,
      anon_sym_LPAREN,
    ACTIONS(656), 1,
      anon_sym_LBRACK,
    ACTIONS(659), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(191), 5,
      sym__ctrl_blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym_ctrl_blob_repeat1,
    ACTIONS(653), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(650), 23,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [7235] = 8,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    STATE(403), 1,
      sym_ctrl_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(180), 5,
      sym__ctrl_blob_token,
      sym__paren_group,
      sym__bracket_group,
      sym__brace_group,
      aux_sym_ctrl_blob_repeat1,
    ACTIONS(608), 15,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(606), 23,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [7302] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(253), 17,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(255), 26,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_can,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [7355] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(333), 18,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(335), 25,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [7408] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(225), 17,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(227), 26,
      anon_sym_where,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [7461] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(343), 17,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(345), 26,
      anon_sym_where,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [7514] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(225), 17,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(227), 26,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_can,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [7567] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(339), 17,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(341), 26,
      anon_sym_where,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [7620] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(219), 17,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(221), 26,
      anon_sym_where,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [7673] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(253), 18,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(255), 25,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [7726] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(219), 18,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(221), 25,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [7779] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(333), 17,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(335), 26,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_can,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [7832] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(219), 17,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(221), 26,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_can,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [7885] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(339), 17,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(341), 26,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_can,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [7938] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(333), 17,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(335), 26,
      anon_sym_where,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [7991] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(253), 17,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(255), 26,
      anon_sym_where,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [8044] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(343), 17,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(345), 26,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_can,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [8097] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(225), 18,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(227), 25,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [8150] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(343), 18,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(345), 25,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [8203] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(339), 18,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(341), 25,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_do,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [8256] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(219), 17,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(221), 25,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_controller,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [8308] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(343), 17,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(345), 25,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_controller,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [8360] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(253), 17,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(255), 25,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_controller,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [8412] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(339), 17,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(341), 25,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_controller,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [8464] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(225), 17,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(227), 25,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_controller,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [8516] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(333), 17,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_exercise_call,
      sym_fetch_call,
      sym_lookup_call,
      sym_create_call,
      sym_archive_call,
      sym_get_time_call,
      sym_unsafe_cast_call,
      sym_from_some_call,
      sym_qualified_call,
      sym_string_literal,
      sym_char_literal,
      sym_number_literal,
    ACTIONS(335), 25,
      anon_sym_qualified,
      anon_sym_as,
      anon_sym_hiding,
      anon_sym_with,
      anon_sym_controller,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_LT_DASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_in,
      anon_sym_of,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_case,
      anon_sym_this,
      anon_sym_return,
      anon_sym_pure,
      anon_sym_LBRACE,
      sym_identifier,
      sym_constructor,
      sym_qualified,
      sym_operator,
  [8568] = 17,
    ACTIONS(662), 1,
      ts_builtin_sym_end,
    ACTIONS(666), 1,
      anon_sym_signatory,
    ACTIONS(669), 1,
      anon_sym_observer,
    ACTIONS(672), 1,
      anon_sym_ensure,
    ACTIONS(675), 1,
      anon_sym_key,
    ACTIONS(678), 1,
      anon_sym_maintainer,
    ACTIONS(681), 1,
      anon_sym_deriving,
    ACTIONS(684), 1,
      anon_sym_controller,
    ACTIONS(687), 1,
      anon_sym_choice,
    ACTIONS(693), 1,
      anon_sym_implements,
    ACTIONS(696), 1,
      anon_sym_interface,
    ACTIONS(699), 1,
      anon_sym_let,
    STATE(423), 1,
      sym_choice_modifier,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(690), 3,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
    ACTIONS(664), 9,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
    STATE(217), 13,
      sym__body_item,
      sym_signatory_clause,
      sym_observer_clause,
      sym_ensure_clause,
      sym_key_clause,
      sym_maintainer_clause,
      sym_deriving_clause,
      sym_controller_can_clause,
      sym_choice_decl,
      sym_implements_clause,
      sym_interface_instance_clause,
      sym_let_clause,
      aux_sym_template_body_repeat1,
  [8644] = 17,
    ACTIONS(702), 1,
      ts_builtin_sym_end,
    ACTIONS(706), 1,
      anon_sym_signatory,
    ACTIONS(708), 1,
      anon_sym_observer,
    ACTIONS(710), 1,
      anon_sym_ensure,
    ACTIONS(712), 1,
      anon_sym_key,
    ACTIONS(714), 1,
      anon_sym_maintainer,
    ACTIONS(716), 1,
      anon_sym_deriving,
    ACTIONS(718), 1,
      anon_sym_controller,
    ACTIONS(720), 1,
      anon_sym_choice,
    ACTIONS(724), 1,
      anon_sym_implements,
    ACTIONS(726), 1,
      anon_sym_interface,
    ACTIONS(728), 1,
      anon_sym_let,
    STATE(423), 1,
      sym_choice_modifier,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(722), 3,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
    ACTIONS(704), 9,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
    STATE(217), 13,
      sym__body_item,
      sym_signatory_clause,
      sym_observer_clause,
      sym_ensure_clause,
      sym_key_clause,
      sym_maintainer_clause,
      sym_deriving_clause,
      sym_controller_can_clause,
      sym_choice_decl,
      sym_implements_clause,
      sym_interface_instance_clause,
      sym_let_clause,
      aux_sym_template_body_repeat1,
  [8720] = 16,
    ACTIONS(730), 1,
      anon_sym_signatory,
    ACTIONS(732), 1,
      anon_sym_observer,
    ACTIONS(734), 1,
      anon_sym_ensure,
    ACTIONS(736), 1,
      anon_sym_key,
    ACTIONS(738), 1,
      anon_sym_maintainer,
    ACTIONS(740), 1,
      anon_sym_deriving,
    ACTIONS(742), 1,
      anon_sym_controller,
    ACTIONS(744), 1,
      anon_sym_choice,
    ACTIONS(748), 1,
      anon_sym_implements,
    ACTIONS(750), 1,
      anon_sym_interface,
    ACTIONS(752), 1,
      anon_sym_let,
    STATE(297), 1,
      sym_template_body,
    STATE(423), 1,
      sym_choice_modifier,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(746), 3,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
    STATE(218), 13,
      sym__body_item,
      sym_signatory_clause,
      sym_observer_clause,
      sym_ensure_clause,
      sym_key_clause,
      sym_maintainer_clause,
      sym_deriving_clause,
      sym_controller_can_clause,
      sym_choice_decl,
      sym_implements_clause,
      sym_interface_instance_clause,
      sym_let_clause,
      aux_sym_template_body_repeat1,
  [8785] = 8,
    ACTIONS(754), 1,
      ts_builtin_sym_end,
    ACTIONS(758), 1,
      anon_sym_LPAREN,
    ACTIONS(764), 1,
      anon_sym_LBRACK,
    ACTIONS(761), 2,
      sym_operator_type,
      sym_qualified,
    ACTIONS(767), 2,
      sym_identifier,
      sym_constructor,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(220), 4,
      sym__type_atom,
      sym__paren_group,
      sym__bracket_group,
      aux_sym_type_blob_repeat1,
    ACTIONS(756), 16,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_viewtype,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
  [8832] = 8,
    ACTIONS(770), 1,
      ts_builtin_sym_end,
    ACTIONS(774), 1,
      anon_sym_LPAREN,
    ACTIONS(778), 1,
      anon_sym_LBRACK,
    ACTIONS(776), 2,
      sym_operator_type,
      sym_qualified,
    ACTIONS(780), 2,
      sym_identifier,
      sym_constructor,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(220), 4,
      sym__type_atom,
      sym__paren_group,
      sym__bracket_group,
      aux_sym_type_blob_repeat1,
    ACTIONS(772), 16,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_viewtype,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
  [8879] = 11,
    ACTIONS(782), 1,
      ts_builtin_sym_end,
    ACTIONS(786), 1,
      anon_sym_controller,
    ACTIONS(789), 1,
      anon_sym_choice,
    ACTIONS(795), 1,
      anon_sym_interface,
    ACTIONS(798), 1,
      anon_sym_let,
    ACTIONS(801), 1,
      anon_sym_viewtype,
    STATE(398), 1,
      sym_choice_modifier,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(792), 3,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
    STATE(222), 6,
      sym_controller_can_clause,
      sym_choice_decl,
      sym_interface_instance_clause,
      sym_let_clause,
      sym_viewtype_decl,
      aux_sym_interface_body_repeat1,
    ACTIONS(784), 9,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [8930] = 4,
    ACTIONS(804), 1,
      ts_builtin_sym_end,
    ACTIONS(808), 1,
      anon_sym_where,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(806), 23,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_signatory,
      anon_sym_observer,
      anon_sym_ensure,
      anon_sym_key,
      anon_sym_maintainer,
      anon_sym_deriving,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_implements,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [8967] = 11,
    ACTIONS(810), 1,
      ts_builtin_sym_end,
    ACTIONS(814), 1,
      anon_sym_controller,
    ACTIONS(816), 1,
      anon_sym_choice,
    ACTIONS(818), 1,
      anon_sym_interface,
    ACTIONS(820), 1,
      anon_sym_let,
    ACTIONS(822), 1,
      anon_sym_viewtype,
    STATE(398), 1,
      sym_choice_modifier,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(722), 3,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
    STATE(222), 6,
      sym_controller_can_clause,
      sym_choice_decl,
      sym_interface_instance_clause,
      sym_let_clause,
      sym_viewtype_decl,
      aux_sym_interface_body_repeat1,
    ACTIONS(812), 9,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [9018] = 3,
    ACTIONS(824), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(826), 23,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_signatory,
      anon_sym_observer,
      anon_sym_ensure,
      anon_sym_key,
      anon_sym_maintainer,
      anon_sym_deriving,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_implements,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [9052] = 3,
    ACTIONS(828), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(830), 23,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_signatory,
      anon_sym_observer,
      anon_sym_ensure,
      anon_sym_key,
      anon_sym_maintainer,
      anon_sym_deriving,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_implements,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [9086] = 3,
    ACTIONS(832), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(834), 23,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_signatory,
      anon_sym_observer,
      anon_sym_ensure,
      anon_sym_key,
      anon_sym_maintainer,
      anon_sym_deriving,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_implements,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [9120] = 3,
    ACTIONS(836), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(838), 23,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_signatory,
      anon_sym_observer,
      anon_sym_ensure,
      anon_sym_key,
      anon_sym_maintainer,
      anon_sym_deriving,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_implements,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [9154] = 3,
    ACTIONS(840), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(842), 23,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_signatory,
      anon_sym_observer,
      anon_sym_ensure,
      anon_sym_key,
      anon_sym_maintainer,
      anon_sym_deriving,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_implements,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [9188] = 3,
    ACTIONS(844), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(846), 23,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_signatory,
      anon_sym_observer,
      anon_sym_ensure,
      anon_sym_key,
      anon_sym_maintainer,
      anon_sym_deriving,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_implements,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [9222] = 3,
    ACTIONS(848), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(850), 23,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_signatory,
      anon_sym_observer,
      anon_sym_ensure,
      anon_sym_key,
      anon_sym_maintainer,
      anon_sym_deriving,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_implements,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [9256] = 3,
    ACTIONS(852), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(854), 23,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_signatory,
      anon_sym_observer,
      anon_sym_ensure,
      anon_sym_key,
      anon_sym_maintainer,
      anon_sym_deriving,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_implements,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [9290] = 3,
    ACTIONS(856), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(858), 23,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_signatory,
      anon_sym_observer,
      anon_sym_ensure,
      anon_sym_key,
      anon_sym_maintainer,
      anon_sym_deriving,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_implements,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [9324] = 3,
    ACTIONS(860), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(862), 23,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_signatory,
      anon_sym_observer,
      anon_sym_ensure,
      anon_sym_key,
      anon_sym_maintainer,
      anon_sym_deriving,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_implements,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [9358] = 3,
    ACTIONS(864), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(866), 23,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_signatory,
      anon_sym_observer,
      anon_sym_ensure,
      anon_sym_key,
      anon_sym_maintainer,
      anon_sym_deriving,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_implements,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [9392] = 3,
    ACTIONS(868), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(870), 23,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_signatory,
      anon_sym_observer,
      anon_sym_ensure,
      anon_sym_key,
      anon_sym_maintainer,
      anon_sym_deriving,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_implements,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [9426] = 3,
    ACTIONS(872), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(874), 23,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_signatory,
      anon_sym_observer,
      anon_sym_ensure,
      anon_sym_key,
      anon_sym_maintainer,
      anon_sym_deriving,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_implements,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [9460] = 3,
    ACTIONS(876), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(878), 23,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_signatory,
      anon_sym_observer,
      anon_sym_ensure,
      anon_sym_key,
      anon_sym_maintainer,
      anon_sym_deriving,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_implements,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [9494] = 3,
    ACTIONS(880), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(882), 23,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_signatory,
      anon_sym_observer,
      anon_sym_ensure,
      anon_sym_key,
      anon_sym_maintainer,
      anon_sym_deriving,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_implements,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [9528] = 3,
    ACTIONS(884), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(886), 23,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_signatory,
      anon_sym_observer,
      anon_sym_ensure,
      anon_sym_key,
      anon_sym_maintainer,
      anon_sym_deriving,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_implements,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [9562] = 3,
    ACTIONS(888), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(890), 23,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_signatory,
      anon_sym_observer,
      anon_sym_ensure,
      anon_sym_key,
      anon_sym_maintainer,
      anon_sym_deriving,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_implements,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [9596] = 3,
    ACTIONS(892), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(894), 23,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_signatory,
      anon_sym_observer,
      anon_sym_ensure,
      anon_sym_key,
      anon_sym_maintainer,
      anon_sym_deriving,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_implements,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [9630] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(343), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym_operator_type,
      anon_sym_LBRACK,
      sym_qualified,
    ACTIONS(345), 18,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_viewtype,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
      sym_constructor,
  [9663] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(253), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym_operator_type,
      anon_sym_LBRACK,
      sym_qualified,
    ACTIONS(255), 18,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_viewtype,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
      sym_constructor,
  [9696] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(339), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym_operator_type,
      anon_sym_LBRACK,
      sym_qualified,
    ACTIONS(341), 18,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_viewtype,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
      sym_constructor,
  [9729] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(333), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym_operator_type,
      anon_sym_LBRACK,
      sym_qualified,
    ACTIONS(335), 18,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_viewtype,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
      sym_constructor,
  [9762] = 10,
    ACTIONS(896), 1,
      ts_builtin_sym_end,
    ACTIONS(898), 1,
      anon_sym_module,
    ACTIONS(901), 1,
      anon_sym_import,
    ACTIONS(904), 1,
      anon_sym_template,
    ACTIONS(907), 1,
      anon_sym_interface,
    ACTIONS(913), 1,
      anon_sym_data,
    ACTIONS(916), 2,
      anon_sym_newtype,
      anon_sym_type,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(910), 3,
      anon_sym_instance,
      anon_sym_class,
      sym_identifier,
    STATE(247), 8,
      sym__top_item,
      sym_module_header,
      sym_import_decl,
      sym_template_decl,
      sym_interface_decl,
      sym_data_decl,
      sym_other_decl,
      aux_sym_source_file_repeat1,
  [9805] = 10,
    ACTIONS(7), 1,
      anon_sym_module,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_template,
    ACTIONS(13), 1,
      anon_sym_interface,
    ACTIONS(17), 1,
      anon_sym_data,
    ACTIONS(919), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 2,
      anon_sym_newtype,
      anon_sym_type,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(15), 3,
      anon_sym_instance,
      anon_sym_class,
      sym_identifier,
    STATE(247), 8,
      sym__top_item,
      sym_module_header,
      sym_import_decl,
      sym_template_decl,
      sym_interface_decl,
      sym_data_decl,
      sym_other_decl,
      aux_sym_source_file_repeat1,
  [9848] = 3,
    ACTIONS(880), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(882), 17,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_viewtype,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [9876] = 3,
    ACTIONS(864), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(866), 17,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_viewtype,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [9904] = 3,
    ACTIONS(921), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(923), 17,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_viewtype,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [9932] = 3,
    ACTIONS(868), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(870), 17,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_viewtype,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [9960] = 3,
    ACTIONS(860), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(862), 17,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_viewtype,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [9988] = 3,
    ACTIONS(828), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(830), 17,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_viewtype,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [10016] = 3,
    ACTIONS(884), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(886), 17,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_viewtype,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [10044] = 3,
    ACTIONS(824), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(826), 17,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_viewtype,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [10072] = 3,
    ACTIONS(892), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(894), 17,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_viewtype,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [10100] = 3,
    ACTIONS(872), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(874), 17,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_viewtype,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [10128] = 3,
    ACTIONS(888), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(890), 17,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_viewtype,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [10156] = 3,
    ACTIONS(876), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(878), 17,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_controller,
      anon_sym_choice,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_let,
      anon_sym_viewtype,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [10184] = 10,
    ACTIONS(925), 1,
      anon_sym_controller,
    ACTIONS(927), 1,
      anon_sym_choice,
    ACTIONS(929), 1,
      anon_sym_interface,
    ACTIONS(931), 1,
      anon_sym_let,
    ACTIONS(933), 1,
      anon_sym_viewtype,
    STATE(289), 1,
      sym_interface_body,
    STATE(398), 1,
      sym_choice_modifier,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(746), 3,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
    STATE(224), 6,
      sym_controller_can_clause,
      sym_choice_decl,
      sym_interface_instance_clause,
      sym_let_clause,
      sym_viewtype_decl,
      aux_sym_interface_body_repeat1,
  [10224] = 10,
    ACTIONS(925), 1,
      anon_sym_controller,
    ACTIONS(927), 1,
      anon_sym_choice,
    ACTIONS(929), 1,
      anon_sym_interface,
    ACTIONS(931), 1,
      anon_sym_let,
    ACTIONS(933), 1,
      anon_sym_viewtype,
    STATE(304), 1,
      sym_interface_body,
    STATE(398), 1,
      sym_choice_modifier,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(746), 3,
      anon_sym_nonconsuming,
      anon_sym_preconsuming,
      anon_sym_postconsuming,
    STATE(224), 6,
      sym_controller_can_clause,
      sym_choice_decl,
      sym_interface_instance_clause,
      sym_let_clause,
      sym_viewtype_decl,
      aux_sym_interface_body_repeat1,
  [10264] = 7,
    ACTIONS(935), 1,
      ts_builtin_sym_end,
    ACTIONS(939), 1,
      anon_sym_LPAREN,
    ACTIONS(941), 1,
      anon_sym_qualified,
    ACTIONS(943), 1,
      anon_sym_as,
    ACTIONS(945), 1,
      anon_sym_hiding,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(937), 10,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [10297] = 7,
    ACTIONS(947), 1,
      ts_builtin_sym_end,
    ACTIONS(951), 1,
      anon_sym_LPAREN,
    ACTIONS(953), 1,
      anon_sym_qualified,
    ACTIONS(955), 1,
      anon_sym_as,
    ACTIONS(957), 1,
      anon_sym_hiding,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(949), 10,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [10330] = 6,
    ACTIONS(959), 1,
      ts_builtin_sym_end,
    ACTIONS(963), 1,
      anon_sym_LPAREN,
    ACTIONS(965), 1,
      anon_sym_qualified,
    ACTIONS(967), 1,
      anon_sym_hiding,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(961), 10,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [10360] = 6,
    ACTIONS(969), 1,
      ts_builtin_sym_end,
    ACTIONS(973), 1,
      anon_sym_LPAREN,
    ACTIONS(975), 1,
      anon_sym_qualified,
    ACTIONS(977), 1,
      anon_sym_hiding,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(971), 10,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [10390] = 7,
    ACTIONS(979), 1,
      anon_sym_LPAREN,
    ACTIONS(983), 1,
      anon_sym_LBRACK,
    ACTIONS(981), 2,
      sym_operator_type,
      sym_qualified,
    ACTIONS(985), 2,
      sym_identifier,
      sym_constructor,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(772), 3,
      anon_sym_with,
      anon_sym_observer,
      anon_sym_controller,
    STATE(271), 4,
      sym__type_atom,
      sym__paren_group,
      sym__bracket_group,
      aux_sym_type_blob_repeat1,
  [10421] = 5,
    ACTIONS(987), 1,
      ts_builtin_sym_end,
    ACTIONS(991), 1,
      anon_sym_LPAREN,
    ACTIONS(993), 1,
      anon_sym_hiding,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(989), 10,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [10448] = 5,
    ACTIONS(995), 1,
      ts_builtin_sym_end,
    ACTIONS(999), 1,
      anon_sym_LPAREN,
    ACTIONS(1001), 1,
      anon_sym_hiding,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(997), 10,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [10475] = 5,
    ACTIONS(1003), 1,
      ts_builtin_sym_end,
    ACTIONS(1007), 1,
      anon_sym_LPAREN,
    ACTIONS(1009), 1,
      anon_sym_hiding,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1005), 10,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [10502] = 7,
    ACTIONS(1011), 1,
      anon_sym_LPAREN,
    ACTIONS(1017), 1,
      anon_sym_LBRACK,
    ACTIONS(1014), 2,
      sym_operator_type,
      sym_qualified,
    ACTIONS(1020), 2,
      sym_identifier,
      sym_constructor,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(756), 3,
      anon_sym_with,
      anon_sym_observer,
      anon_sym_controller,
    STATE(271), 4,
      sym__type_atom,
      sym__paren_group,
      sym__bracket_group,
      aux_sym_type_blob_repeat1,
  [10533] = 5,
    ACTIONS(1023), 1,
      ts_builtin_sym_end,
    ACTIONS(1027), 1,
      anon_sym_LPAREN,
    ACTIONS(1029), 1,
      anon_sym_hiding,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1025), 10,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [10560] = 7,
    ACTIONS(1031), 1,
      anon_sym_LPAREN,
    ACTIONS(1035), 1,
      anon_sym_LBRACK,
    ACTIONS(772), 2,
      anon_sym_observer,
      anon_sym_controller,
    ACTIONS(1033), 2,
      sym_operator_type,
      sym_qualified,
    ACTIONS(1037), 2,
      sym_identifier,
      sym_constructor,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(274), 4,
      sym__type_atom,
      sym__paren_group,
      sym__bracket_group,
      aux_sym_type_blob_repeat1,
  [10590] = 7,
    ACTIONS(1039), 1,
      anon_sym_LPAREN,
    ACTIONS(1045), 1,
      anon_sym_LBRACK,
    ACTIONS(756), 2,
      anon_sym_observer,
      anon_sym_controller,
    ACTIONS(1042), 2,
      sym_operator_type,
      sym_qualified,
    ACTIONS(1048), 2,
      sym_identifier,
      sym_constructor,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(274), 4,
      sym__type_atom,
      sym__paren_group,
      sym__bracket_group,
      aux_sym_type_blob_repeat1,
  [10620] = 7,
    ACTIONS(756), 1,
      anon_sym_where,
    ACTIONS(1051), 1,
      anon_sym_LPAREN,
    ACTIONS(1057), 1,
      anon_sym_LBRACK,
    ACTIONS(1054), 2,
      sym_operator_type,
      sym_qualified,
    ACTIONS(1060), 2,
      sym_identifier,
      sym_constructor,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(275), 4,
      sym__type_atom,
      sym__paren_group,
      sym__bracket_group,
      aux_sym_type_blob_repeat1,
  [10649] = 7,
    ACTIONS(772), 1,
      anon_sym_where,
    ACTIONS(1063), 1,
      anon_sym_LPAREN,
    ACTIONS(1067), 1,
      anon_sym_LBRACK,
    ACTIONS(1065), 2,
      sym_operator_type,
      sym_qualified,
    ACTIONS(1069), 2,
      sym_identifier,
      sym_constructor,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    STATE(275), 4,
      sym__type_atom,
      sym__paren_group,
      sym__bracket_group,
      aux_sym_type_blob_repeat1,
  [10678] = 3,
    ACTIONS(1071), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1073), 10,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [10699] = 3,
    ACTIONS(1075), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1077), 10,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [10720] = 7,
    ACTIONS(979), 1,
      anon_sym_LPAREN,
    ACTIONS(983), 1,
      anon_sym_LBRACK,
    ACTIONS(1081), 1,
      sym_constructor,
    STATE(338), 1,
      sym_type_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1079), 3,
      sym_operator_type,
      sym_identifier,
      sym_qualified,
    STATE(267), 4,
      sym__type_atom,
      sym__paren_group,
      sym__bracket_group,
      aux_sym_type_blob_repeat1,
  [10749] = 3,
    ACTIONS(1083), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1085), 10,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [10770] = 7,
    ACTIONS(979), 1,
      anon_sym_LPAREN,
    ACTIONS(983), 1,
      anon_sym_LBRACK,
    ACTIONS(1081), 1,
      sym_constructor,
    STATE(337), 1,
      sym_type_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1079), 3,
      sym_operator_type,
      sym_identifier,
      sym_qualified,
    STATE(267), 4,
      sym__type_atom,
      sym__paren_group,
      sym__bracket_group,
      aux_sym_type_blob_repeat1,
  [10799] = 3,
    ACTIONS(1087), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1089), 10,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [10820] = 7,
    ACTIONS(1063), 1,
      anon_sym_LPAREN,
    ACTIONS(1067), 1,
      anon_sym_LBRACK,
    ACTIONS(1093), 1,
      sym_constructor,
    STATE(352), 1,
      sym_type_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1091), 3,
      sym_operator_type,
      sym_identifier,
      sym_qualified,
    STATE(276), 4,
      sym__type_atom,
      sym__paren_group,
      sym__bracket_group,
      aux_sym_type_blob_repeat1,
  [10849] = 3,
    ACTIONS(1095), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1097), 10,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [10870] = 3,
    ACTIONS(1099), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1101), 10,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [10891] = 3,
    ACTIONS(1103), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1105), 10,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [10912] = 7,
    ACTIONS(774), 1,
      anon_sym_LPAREN,
    ACTIONS(778), 1,
      anon_sym_LBRACK,
    ACTIONS(1109), 1,
      sym_constructor,
    STATE(251), 1,
      sym_type_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1107), 3,
      sym_operator_type,
      sym_identifier,
      sym_qualified,
    STATE(221), 4,
      sym__type_atom,
      sym__paren_group,
      sym__bracket_group,
      aux_sym_type_blob_repeat1,
  [10941] = 3,
    ACTIONS(1111), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1113), 10,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [10962] = 3,
    ACTIONS(1115), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1117), 10,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [10983] = 3,
    ACTIONS(1119), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1121), 10,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [11004] = 3,
    ACTIONS(1123), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1125), 10,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [11025] = 3,
    ACTIONS(1127), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1129), 10,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [11046] = 7,
    ACTIONS(1063), 1,
      anon_sym_LPAREN,
    ACTIONS(1067), 1,
      anon_sym_LBRACK,
    ACTIONS(1093), 1,
      sym_constructor,
    STATE(346), 1,
      sym_type_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1091), 3,
      sym_operator_type,
      sym_identifier,
      sym_qualified,
    STATE(276), 4,
      sym__type_atom,
      sym__paren_group,
      sym__bracket_group,
      aux_sym_type_blob_repeat1,
  [11075] = 3,
    ACTIONS(1131), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1133), 10,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [11096] = 7,
    ACTIONS(1031), 1,
      anon_sym_LPAREN,
    ACTIONS(1035), 1,
      anon_sym_LBRACK,
    ACTIONS(1137), 1,
      sym_constructor,
    STATE(341), 1,
      sym_type_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1135), 3,
      sym_operator_type,
      sym_identifier,
      sym_qualified,
    STATE(273), 4,
      sym__type_atom,
      sym__paren_group,
      sym__bracket_group,
      aux_sym_type_blob_repeat1,
  [11125] = 7,
    ACTIONS(1031), 1,
      anon_sym_LPAREN,
    ACTIONS(1035), 1,
      anon_sym_LBRACK,
    ACTIONS(1137), 1,
      sym_constructor,
    STATE(342), 1,
      sym_type_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1135), 3,
      sym_operator_type,
      sym_identifier,
      sym_qualified,
    STATE(273), 4,
      sym__type_atom,
      sym__paren_group,
      sym__bracket_group,
      aux_sym_type_blob_repeat1,
  [11154] = 3,
    ACTIONS(1139), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1141), 10,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [11175] = 3,
    ACTIONS(1143), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1145), 10,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [11196] = 3,
    ACTIONS(1147), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1149), 10,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [11217] = 7,
    ACTIONS(979), 1,
      anon_sym_LPAREN,
    ACTIONS(983), 1,
      anon_sym_LBRACK,
    ACTIONS(1081), 1,
      sym_constructor,
    STATE(332), 1,
      sym_type_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1079), 3,
      sym_operator_type,
      sym_identifier,
      sym_qualified,
    STATE(267), 4,
      sym__type_atom,
      sym__paren_group,
      sym__bracket_group,
      aux_sym_type_blob_repeat1,
  [11246] = 3,
    ACTIONS(1151), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1153), 10,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [11267] = 3,
    ACTIONS(1155), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1157), 10,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [11288] = 3,
    ACTIONS(1159), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1161), 10,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [11309] = 3,
    ACTIONS(1163), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1165), 10,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [11330] = 7,
    ACTIONS(979), 1,
      anon_sym_LPAREN,
    ACTIONS(983), 1,
      anon_sym_LBRACK,
    ACTIONS(1081), 1,
      sym_constructor,
    STATE(331), 1,
      sym_type_blob,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1079), 3,
      sym_operator_type,
      sym_identifier,
      sym_qualified,
    STATE(267), 4,
      sym__type_atom,
      sym__paren_group,
      sym__bracket_group,
      aux_sym_type_blob_repeat1,
  [11359] = 3,
    ACTIONS(1167), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1169), 10,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [11380] = 3,
    ACTIONS(1171), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1173), 10,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [11401] = 3,
    ACTIONS(1175), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1177), 10,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [11422] = 3,
    ACTIONS(1179), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1181), 10,
      anon_sym_module,
      anon_sym_import,
      anon_sym_template,
      anon_sym_interface,
      anon_sym_instance,
      anon_sym_data,
      anon_sym_newtype,
      anon_sym_type,
      anon_sym_class,
      sym_identifier,
  [11443] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(343), 4,
      anon_sym_LPAREN,
      sym_operator_type,
      anon_sym_LBRACK,
      sym_qualified,
    ACTIONS(345), 5,
      anon_sym_with,
      anon_sym_observer,
      anon_sym_controller,
      sym_identifier,
      sym_constructor,
  [11462] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(339), 4,
      anon_sym_LPAREN,
      sym_operator_type,
      anon_sym_LBRACK,
      sym_qualified,
    ACTIONS(341), 5,
      anon_sym_with,
      anon_sym_observer,
      anon_sym_controller,
      sym_identifier,
      sym_constructor,
  [11481] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(333), 4,
      anon_sym_LPAREN,
      sym_operator_type,
      anon_sym_LBRACK,
      sym_qualified,
    ACTIONS(335), 5,
      anon_sym_with,
      anon_sym_observer,
      anon_sym_controller,
      sym_identifier,
      sym_constructor,
  [11500] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(253), 4,
      anon_sym_LPAREN,
      sym_operator_type,
      anon_sym_LBRACK,
      sym_qualified,
    ACTIONS(255), 5,
      anon_sym_with,
      anon_sym_observer,
      anon_sym_controller,
      sym_identifier,
      sym_constructor,
  [11519] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(253), 4,
      anon_sym_LPAREN,
      sym_operator_type,
      anon_sym_LBRACK,
      sym_qualified,
    ACTIONS(255), 4,
      anon_sym_observer,
      anon_sym_controller,
      sym_identifier,
      sym_constructor,
  [11537] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(339), 4,
      anon_sym_LPAREN,
      sym_operator_type,
      anon_sym_LBRACK,
      sym_qualified,
    ACTIONS(341), 4,
      anon_sym_observer,
      anon_sym_controller,
      sym_identifier,
      sym_constructor,
  [11555] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(343), 4,
      anon_sym_LPAREN,
      sym_operator_type,
      anon_sym_LBRACK,
      sym_qualified,
    ACTIONS(345), 4,
      anon_sym_observer,
      anon_sym_controller,
      sym_identifier,
      sym_constructor,
  [11573] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(333), 4,
      anon_sym_LPAREN,
      sym_operator_type,
      anon_sym_LBRACK,
      sym_qualified,
    ACTIONS(335), 4,
      anon_sym_observer,
      anon_sym_controller,
      sym_identifier,
      sym_constructor,
  [11591] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(345), 3,
      anon_sym_where,
      sym_identifier,
      sym_constructor,
    ACTIONS(343), 4,
      anon_sym_LPAREN,
      sym_operator_type,
      anon_sym_LBRACK,
      sym_qualified,
  [11608] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(341), 3,
      anon_sym_where,
      sym_identifier,
      sym_constructor,
    ACTIONS(339), 4,
      anon_sym_LPAREN,
      sym_operator_type,
      anon_sym_LBRACK,
      sym_qualified,
  [11625] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(335), 3,
      anon_sym_where,
      sym_identifier,
      sym_constructor,
    ACTIONS(333), 4,
      anon_sym_LPAREN,
      sym_operator_type,
      anon_sym_LBRACK,
      sym_qualified,
  [11642] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(255), 3,
      anon_sym_where,
      sym_identifier,
      sym_constructor,
    ACTIONS(253), 4,
      anon_sym_LPAREN,
      sym_operator_type,
      anon_sym_LBRACK,
      sym_qualified,
  [11659] = 4,
    ACTIONS(1185), 1,
      sym_identifier,
    ACTIONS(1183), 2,
      anon_sym_observer,
      anon_sym_controller,
    STATE(323), 2,
      sym_field_decl,
      aux_sym_field_block_repeat1,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [11676] = 4,
    ACTIONS(1189), 1,
      sym_identifier,
    ACTIONS(1187), 2,
      anon_sym_observer,
      anon_sym_controller,
    STATE(323), 2,
      sym_field_decl,
      aux_sym_field_block_repeat1,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [11693] = 4,
    ACTIONS(1192), 1,
      sym_identifier,
    STATE(355), 1,
      sym_field_block,
    STATE(322), 2,
      sym_field_decl,
      aux_sym_field_block_repeat1,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [11709] = 4,
    ACTIONS(1187), 1,
      anon_sym_where,
    ACTIONS(1194), 1,
      sym_identifier,
    STATE(325), 2,
      sym_field_decl,
      aux_sym_field_block_repeat1,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [11725] = 4,
    ACTIONS(1192), 1,
      sym_identifier,
    STATE(348), 1,
      sym_field_block,
    STATE(322), 2,
      sym_field_decl,
      aux_sym_field_block_repeat1,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [11741] = 4,
    ACTIONS(1192), 1,
      sym_identifier,
    STATE(344), 1,
      sym_field_block,
    STATE(322), 2,
      sym_field_decl,
      aux_sym_field_block_repeat1,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [11757] = 4,
    ACTIONS(1192), 1,
      sym_identifier,
    STATE(349), 1,
      sym_field_block,
    STATE(322), 2,
      sym_field_decl,
      aux_sym_field_block_repeat1,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [11773] = 4,
    ACTIONS(1197), 1,
      sym_identifier,
    STATE(391), 1,
      sym_field_block,
    STATE(330), 2,
      sym_field_decl,
      aux_sym_field_block_repeat1,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [11789] = 4,
    ACTIONS(1183), 1,
      anon_sym_where,
    ACTIONS(1199), 1,
      sym_identifier,
    STATE(325), 2,
      sym_field_decl,
      aux_sym_field_block_repeat1,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [11805] = 4,
    ACTIONS(1201), 1,
      anon_sym_with,
    ACTIONS(1203), 1,
      anon_sym_observer,
    ACTIONS(1205), 1,
      anon_sym_controller,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [11820] = 4,
    ACTIONS(1207), 1,
      anon_sym_with,
    ACTIONS(1209), 1,
      anon_sym_observer,
    ACTIONS(1211), 1,
      anon_sym_controller,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [11835] = 4,
    ACTIONS(1213), 1,
      anon_sym_COMMA,
    ACTIONS(1215), 1,
      anon_sym_COLON,
    STATE(339), 1,
      aux_sym_field_decl_repeat1,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [11850] = 4,
    ACTIONS(1213), 1,
      anon_sym_COMMA,
    ACTIONS(1217), 1,
      anon_sym_COLON,
    STATE(339), 1,
      aux_sym_field_decl_repeat1,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [11865] = 4,
    ACTIONS(1213), 1,
      anon_sym_COMMA,
    ACTIONS(1219), 1,
      anon_sym_COLON,
    STATE(333), 1,
      aux_sym_field_decl_repeat1,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [11880] = 4,
    ACTIONS(1213), 1,
      anon_sym_COMMA,
    ACTIONS(1221), 1,
      anon_sym_COLON,
    STATE(334), 1,
      aux_sym_field_decl_repeat1,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [11895] = 4,
    ACTIONS(1223), 1,
      anon_sym_with,
    ACTIONS(1225), 1,
      anon_sym_observer,
    ACTIONS(1227), 1,
      anon_sym_controller,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [11910] = 4,
    ACTIONS(1229), 1,
      anon_sym_with,
    ACTIONS(1231), 1,
      anon_sym_observer,
    ACTIONS(1233), 1,
      anon_sym_controller,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [11925] = 4,
    ACTIONS(1235), 1,
      anon_sym_COMMA,
    ACTIONS(1238), 1,
      anon_sym_COLON,
    STATE(339), 1,
      aux_sym_field_decl_repeat1,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [11940] = 4,
    ACTIONS(1240), 1,
      anon_sym_where,
    ACTIONS(1242), 1,
      anon_sym_LPAREN,
    STATE(358), 1,
      sym__export_paren,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [11955] = 2,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1244), 3,
      anon_sym_observer,
      anon_sym_controller,
      sym_identifier,
  [11966] = 2,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
    ACTIONS(1246), 3,
      anon_sym_observer,
      anon_sym_controller,
      sym_identifier,
  [11977] = 3,
    ACTIONS(1248), 1,
      sym_constructor,
    ACTIONS(1250), 1,
      sym_qualified,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [11989] = 3,
    ACTIONS(1252), 1,
      anon_sym_observer,
    ACTIONS(1254), 1,
      anon_sym_controller,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12001] = 3,
    ACTIONS(1256), 1,
      sym_constructor,
    ACTIONS(1258), 1,
      sym_qualified,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12013] = 2,
    ACTIONS(1244), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12023] = 3,
    ACTIONS(1260), 1,
      anon_sym_where,
    ACTIONS(1262), 1,
      anon_sym_requires,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12035] = 3,
    ACTIONS(1264), 1,
      anon_sym_observer,
    ACTIONS(1266), 1,
      anon_sym_controller,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12047] = 3,
    ACTIONS(1268), 1,
      anon_sym_observer,
    ACTIONS(1270), 1,
      anon_sym_controller,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12059] = 3,
    ACTIONS(1272), 1,
      sym_constructor,
    ACTIONS(1274), 1,
      sym_qualified,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12071] = 3,
    ACTIONS(1276), 1,
      sym_constructor,
    ACTIONS(1278), 1,
      sym_qualified,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12083] = 2,
    ACTIONS(1246), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12093] = 2,
    ACTIONS(1280), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12103] = 3,
    ACTIONS(1282), 1,
      sym_module_name,
    ACTIONS(1284), 1,
      anon_sym_qualified,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12115] = 3,
    ACTIONS(1286), 1,
      anon_sym_observer,
    ACTIONS(1288), 1,
      anon_sym_controller,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12127] = 3,
    ACTIONS(1290), 1,
      sym_constructor,
    ACTIONS(1292), 1,
      sym_qualified,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12139] = 2,
    ACTIONS(1294), 1,
      anon_sym_do,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12148] = 2,
    ACTIONS(1296), 1,
      anon_sym_where,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12157] = 2,
    ACTIONS(1298), 1,
      anon_sym_do,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12166] = 2,
    ACTIONS(991), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12175] = 2,
    ACTIONS(1300), 1,
      sym_module_name,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12184] = 2,
    ACTIONS(1007), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12193] = 2,
    ACTIONS(1302), 1,
      anon_sym_controller,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12202] = 2,
    ACTIONS(1304), 1,
      anon_sym_controller,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12211] = 2,
    ACTIONS(1306), 1,
      sym_module_name,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12220] = 2,
    ACTIONS(1308), 1,
      anon_sym_with,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12229] = 2,
    ACTIONS(1310), 1,
      sym_module_name,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12238] = 2,
    ACTIONS(1312), 1,
      anon_sym_where,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12247] = 2,
    ACTIONS(1314), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12256] = 2,
    ACTIONS(1316), 1,
      anon_sym_do,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12265] = 2,
    ACTIONS(1318), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12274] = 2,
    ACTIONS(1320), 1,
      sym_constructor,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12283] = 2,
    ACTIONS(1322), 1,
      sym_constructor,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12292] = 2,
    ACTIONS(1324), 1,
      anon_sym_do,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12301] = 2,
    ACTIONS(1326), 1,
      sym_constructor,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12310] = 2,
    ACTIONS(1328), 1,
      sym_constructor,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12319] = 2,
    ACTIONS(1330), 1,
      anon_sym_do,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12328] = 2,
    ACTIONS(1332), 1,
      sym_module_name,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12337] = 2,
    ACTIONS(999), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12346] = 2,
    ACTIONS(1334), 1,
      anon_sym_can,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12355] = 2,
    ACTIONS(1336), 1,
      anon_sym_where,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12364] = 2,
    ACTIONS(1338), 1,
      anon_sym_do,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12373] = 2,
    ACTIONS(1340), 1,
      anon_sym_do,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12382] = 2,
    ACTIONS(1342), 1,
      anon_sym_do,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12391] = 2,
    ACTIONS(1344), 1,
      anon_sym_do,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12400] = 2,
    ACTIONS(1346), 1,
      anon_sym_do,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12409] = 2,
    ACTIONS(1348), 1,
      anon_sym_do,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12418] = 2,
    ACTIONS(1350), 1,
      anon_sym_do,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12427] = 2,
    ACTIONS(1352), 1,
      anon_sym_do,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12436] = 2,
    ACTIONS(1354), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12445] = 2,
    ACTIONS(1356), 1,
      anon_sym_where,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12454] = 2,
    ACTIONS(1358), 1,
      anon_sym_controller,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12463] = 2,
    ACTIONS(1360), 1,
      sym_constructor,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12472] = 2,
    ACTIONS(1362), 1,
      anon_sym_choice,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12481] = 2,
    ACTIONS(1364), 1,
      anon_sym_instance,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12490] = 2,
    ACTIONS(1366), 1,
      anon_sym_for,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12499] = 2,
    ACTIONS(1368), 1,
      anon_sym_where,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12508] = 2,
    ACTIONS(1370), 1,
      anon_sym_choice,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12517] = 2,
    ACTIONS(1372), 1,
      anon_sym_controller,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12526] = 2,
    ACTIONS(1374), 1,
      anon_sym_for,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12535] = 2,
    ACTIONS(1376), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12544] = 2,
    ACTIONS(1378), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12553] = 2,
    ACTIONS(1380), 1,
      anon_sym_do,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12562] = 2,
    ACTIONS(1382), 1,
      anon_sym_controller,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12571] = 2,
    ACTIONS(1384), 1,
      anon_sym_where,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12580] = 2,
    ACTIONS(1386), 1,
      anon_sym_controller,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12589] = 2,
    ACTIONS(1388), 1,
      anon_sym_controller,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12598] = 2,
    ACTIONS(1390), 1,
      anon_sym_controller,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12607] = 2,
    ACTIONS(1392), 1,
      anon_sym_where,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12616] = 2,
    ACTIONS(1394), 1,
      anon_sym_do,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12625] = 2,
    ACTIONS(1396), 1,
      anon_sym_do,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12634] = 2,
    ACTIONS(1398), 1,
      sym_constructor,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12643] = 2,
    ACTIONS(1027), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12652] = 2,
    ACTIONS(1400), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12661] = 2,
    ACTIONS(1402), 1,
      sym_identifier,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12670] = 2,
    ACTIONS(1404), 1,
      anon_sym_can,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12679] = 2,
    ACTIONS(1406), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12688] = 2,
    ACTIONS(1408), 1,
      anon_sym_instance,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12697] = 2,
    ACTIONS(1410), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12706] = 2,
    ACTIONS(1412), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12715] = 2,
    ACTIONS(1414), 1,
      sym_constructor,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12724] = 2,
    ACTIONS(1416), 1,
      sym_constructor,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
  [12733] = 2,
    ACTIONS(1418), 1,
      anon_sym_choice,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_block_comment,
      sym_pragma,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(85)] = 0,
  [SMALL_STATE(86)] = 68,
  [SMALL_STATE(87)] = 136,
  [SMALL_STATE(88)] = 204,
  [SMALL_STATE(89)] = 272,
  [SMALL_STATE(90)] = 340,
  [SMALL_STATE(91)] = 408,
  [SMALL_STATE(92)] = 487,
  [SMALL_STATE(93)] = 566,
  [SMALL_STATE(94)] = 628,
  [SMALL_STATE(95)] = 690,
  [SMALL_STATE(96)] = 752,
  [SMALL_STATE(97)] = 814,
  [SMALL_STATE(98)] = 876,
  [SMALL_STATE(99)] = 938,
  [SMALL_STATE(100)] = 1006,
  [SMALL_STATE(101)] = 1074,
  [SMALL_STATE(102)] = 1142,
  [SMALL_STATE(103)] = 1210,
  [SMALL_STATE(104)] = 1278,
  [SMALL_STATE(105)] = 1346,
  [SMALL_STATE(106)] = 1414,
  [SMALL_STATE(107)] = 1482,
  [SMALL_STATE(108)] = 1550,
  [SMALL_STATE(109)] = 1618,
  [SMALL_STATE(110)] = 1686,
  [SMALL_STATE(111)] = 1754,
  [SMALL_STATE(112)] = 1822,
  [SMALL_STATE(113)] = 1890,
  [SMALL_STATE(114)] = 1958,
  [SMALL_STATE(115)] = 2026,
  [SMALL_STATE(116)] = 2094,
  [SMALL_STATE(117)] = 2162,
  [SMALL_STATE(118)] = 2230,
  [SMALL_STATE(119)] = 2298,
  [SMALL_STATE(120)] = 2366,
  [SMALL_STATE(121)] = 2434,
  [SMALL_STATE(122)] = 2502,
  [SMALL_STATE(123)] = 2570,
  [SMALL_STATE(124)] = 2638,
  [SMALL_STATE(125)] = 2706,
  [SMALL_STATE(126)] = 2774,
  [SMALL_STATE(127)] = 2842,
  [SMALL_STATE(128)] = 2910,
  [SMALL_STATE(129)] = 2978,
  [SMALL_STATE(130)] = 3046,
  [SMALL_STATE(131)] = 3114,
  [SMALL_STATE(132)] = 3182,
  [SMALL_STATE(133)] = 3250,
  [SMALL_STATE(134)] = 3318,
  [SMALL_STATE(135)] = 3386,
  [SMALL_STATE(136)] = 3454,
  [SMALL_STATE(137)] = 3522,
  [SMALL_STATE(138)] = 3590,
  [SMALL_STATE(139)] = 3658,
  [SMALL_STATE(140)] = 3726,
  [SMALL_STATE(141)] = 3794,
  [SMALL_STATE(142)] = 3862,
  [SMALL_STATE(143)] = 3930,
  [SMALL_STATE(144)] = 3998,
  [SMALL_STATE(145)] = 4066,
  [SMALL_STATE(146)] = 4134,
  [SMALL_STATE(147)] = 4202,
  [SMALL_STATE(148)] = 4270,
  [SMALL_STATE(149)] = 4338,
  [SMALL_STATE(150)] = 4406,
  [SMALL_STATE(151)] = 4474,
  [SMALL_STATE(152)] = 4542,
  [SMALL_STATE(153)] = 4610,
  [SMALL_STATE(154)] = 4678,
  [SMALL_STATE(155)] = 4746,
  [SMALL_STATE(156)] = 4814,
  [SMALL_STATE(157)] = 4882,
  [SMALL_STATE(158)] = 4950,
  [SMALL_STATE(159)] = 5018,
  [SMALL_STATE(160)] = 5086,
  [SMALL_STATE(161)] = 5154,
  [SMALL_STATE(162)] = 5222,
  [SMALL_STATE(163)] = 5290,
  [SMALL_STATE(164)] = 5358,
  [SMALL_STATE(165)] = 5426,
  [SMALL_STATE(166)] = 5493,
  [SMALL_STATE(167)] = 5560,
  [SMALL_STATE(168)] = 5627,
  [SMALL_STATE(169)] = 5694,
  [SMALL_STATE(170)] = 5761,
  [SMALL_STATE(171)] = 5828,
  [SMALL_STATE(172)] = 5895,
  [SMALL_STATE(173)] = 5962,
  [SMALL_STATE(174)] = 6029,
  [SMALL_STATE(175)] = 6096,
  [SMALL_STATE(176)] = 6163,
  [SMALL_STATE(177)] = 6230,
  [SMALL_STATE(178)] = 6297,
  [SMALL_STATE(179)] = 6364,
  [SMALL_STATE(180)] = 6431,
  [SMALL_STATE(181)] = 6498,
  [SMALL_STATE(182)] = 6565,
  [SMALL_STATE(183)] = 6632,
  [SMALL_STATE(184)] = 6699,
  [SMALL_STATE(185)] = 6766,
  [SMALL_STATE(186)] = 6833,
  [SMALL_STATE(187)] = 6900,
  [SMALL_STATE(188)] = 6967,
  [SMALL_STATE(189)] = 7034,
  [SMALL_STATE(190)] = 7101,
  [SMALL_STATE(191)] = 7168,
  [SMALL_STATE(192)] = 7235,
  [SMALL_STATE(193)] = 7302,
  [SMALL_STATE(194)] = 7355,
  [SMALL_STATE(195)] = 7408,
  [SMALL_STATE(196)] = 7461,
  [SMALL_STATE(197)] = 7514,
  [SMALL_STATE(198)] = 7567,
  [SMALL_STATE(199)] = 7620,
  [SMALL_STATE(200)] = 7673,
  [SMALL_STATE(201)] = 7726,
  [SMALL_STATE(202)] = 7779,
  [SMALL_STATE(203)] = 7832,
  [SMALL_STATE(204)] = 7885,
  [SMALL_STATE(205)] = 7938,
  [SMALL_STATE(206)] = 7991,
  [SMALL_STATE(207)] = 8044,
  [SMALL_STATE(208)] = 8097,
  [SMALL_STATE(209)] = 8150,
  [SMALL_STATE(210)] = 8203,
  [SMALL_STATE(211)] = 8256,
  [SMALL_STATE(212)] = 8308,
  [SMALL_STATE(213)] = 8360,
  [SMALL_STATE(214)] = 8412,
  [SMALL_STATE(215)] = 8464,
  [SMALL_STATE(216)] = 8516,
  [SMALL_STATE(217)] = 8568,
  [SMALL_STATE(218)] = 8644,
  [SMALL_STATE(219)] = 8720,
  [SMALL_STATE(220)] = 8785,
  [SMALL_STATE(221)] = 8832,
  [SMALL_STATE(222)] = 8879,
  [SMALL_STATE(223)] = 8930,
  [SMALL_STATE(224)] = 8967,
  [SMALL_STATE(225)] = 9018,
  [SMALL_STATE(226)] = 9052,
  [SMALL_STATE(227)] = 9086,
  [SMALL_STATE(228)] = 9120,
  [SMALL_STATE(229)] = 9154,
  [SMALL_STATE(230)] = 9188,
  [SMALL_STATE(231)] = 9222,
  [SMALL_STATE(232)] = 9256,
  [SMALL_STATE(233)] = 9290,
  [SMALL_STATE(234)] = 9324,
  [SMALL_STATE(235)] = 9358,
  [SMALL_STATE(236)] = 9392,
  [SMALL_STATE(237)] = 9426,
  [SMALL_STATE(238)] = 9460,
  [SMALL_STATE(239)] = 9494,
  [SMALL_STATE(240)] = 9528,
  [SMALL_STATE(241)] = 9562,
  [SMALL_STATE(242)] = 9596,
  [SMALL_STATE(243)] = 9630,
  [SMALL_STATE(244)] = 9663,
  [SMALL_STATE(245)] = 9696,
  [SMALL_STATE(246)] = 9729,
  [SMALL_STATE(247)] = 9762,
  [SMALL_STATE(248)] = 9805,
  [SMALL_STATE(249)] = 9848,
  [SMALL_STATE(250)] = 9876,
  [SMALL_STATE(251)] = 9904,
  [SMALL_STATE(252)] = 9932,
  [SMALL_STATE(253)] = 9960,
  [SMALL_STATE(254)] = 9988,
  [SMALL_STATE(255)] = 10016,
  [SMALL_STATE(256)] = 10044,
  [SMALL_STATE(257)] = 10072,
  [SMALL_STATE(258)] = 10100,
  [SMALL_STATE(259)] = 10128,
  [SMALL_STATE(260)] = 10156,
  [SMALL_STATE(261)] = 10184,
  [SMALL_STATE(262)] = 10224,
  [SMALL_STATE(263)] = 10264,
  [SMALL_STATE(264)] = 10297,
  [SMALL_STATE(265)] = 10330,
  [SMALL_STATE(266)] = 10360,
  [SMALL_STATE(267)] = 10390,
  [SMALL_STATE(268)] = 10421,
  [SMALL_STATE(269)] = 10448,
  [SMALL_STATE(270)] = 10475,
  [SMALL_STATE(271)] = 10502,
  [SMALL_STATE(272)] = 10533,
  [SMALL_STATE(273)] = 10560,
  [SMALL_STATE(274)] = 10590,
  [SMALL_STATE(275)] = 10620,
  [SMALL_STATE(276)] = 10649,
  [SMALL_STATE(277)] = 10678,
  [SMALL_STATE(278)] = 10699,
  [SMALL_STATE(279)] = 10720,
  [SMALL_STATE(280)] = 10749,
  [SMALL_STATE(281)] = 10770,
  [SMALL_STATE(282)] = 10799,
  [SMALL_STATE(283)] = 10820,
  [SMALL_STATE(284)] = 10849,
  [SMALL_STATE(285)] = 10870,
  [SMALL_STATE(286)] = 10891,
  [SMALL_STATE(287)] = 10912,
  [SMALL_STATE(288)] = 10941,
  [SMALL_STATE(289)] = 10962,
  [SMALL_STATE(290)] = 10983,
  [SMALL_STATE(291)] = 11004,
  [SMALL_STATE(292)] = 11025,
  [SMALL_STATE(293)] = 11046,
  [SMALL_STATE(294)] = 11075,
  [SMALL_STATE(295)] = 11096,
  [SMALL_STATE(296)] = 11125,
  [SMALL_STATE(297)] = 11154,
  [SMALL_STATE(298)] = 11175,
  [SMALL_STATE(299)] = 11196,
  [SMALL_STATE(300)] = 11217,
  [SMALL_STATE(301)] = 11246,
  [SMALL_STATE(302)] = 11267,
  [SMALL_STATE(303)] = 11288,
  [SMALL_STATE(304)] = 11309,
  [SMALL_STATE(305)] = 11330,
  [SMALL_STATE(306)] = 11359,
  [SMALL_STATE(307)] = 11380,
  [SMALL_STATE(308)] = 11401,
  [SMALL_STATE(309)] = 11422,
  [SMALL_STATE(310)] = 11443,
  [SMALL_STATE(311)] = 11462,
  [SMALL_STATE(312)] = 11481,
  [SMALL_STATE(313)] = 11500,
  [SMALL_STATE(314)] = 11519,
  [SMALL_STATE(315)] = 11537,
  [SMALL_STATE(316)] = 11555,
  [SMALL_STATE(317)] = 11573,
  [SMALL_STATE(318)] = 11591,
  [SMALL_STATE(319)] = 11608,
  [SMALL_STATE(320)] = 11625,
  [SMALL_STATE(321)] = 11642,
  [SMALL_STATE(322)] = 11659,
  [SMALL_STATE(323)] = 11676,
  [SMALL_STATE(324)] = 11693,
  [SMALL_STATE(325)] = 11709,
  [SMALL_STATE(326)] = 11725,
  [SMALL_STATE(327)] = 11741,
  [SMALL_STATE(328)] = 11757,
  [SMALL_STATE(329)] = 11773,
  [SMALL_STATE(330)] = 11789,
  [SMALL_STATE(331)] = 11805,
  [SMALL_STATE(332)] = 11820,
  [SMALL_STATE(333)] = 11835,
  [SMALL_STATE(334)] = 11850,
  [SMALL_STATE(335)] = 11865,
  [SMALL_STATE(336)] = 11880,
  [SMALL_STATE(337)] = 11895,
  [SMALL_STATE(338)] = 11910,
  [SMALL_STATE(339)] = 11925,
  [SMALL_STATE(340)] = 11940,
  [SMALL_STATE(341)] = 11955,
  [SMALL_STATE(342)] = 11966,
  [SMALL_STATE(343)] = 11977,
  [SMALL_STATE(344)] = 11989,
  [SMALL_STATE(345)] = 12001,
  [SMALL_STATE(346)] = 12013,
  [SMALL_STATE(347)] = 12023,
  [SMALL_STATE(348)] = 12035,
  [SMALL_STATE(349)] = 12047,
  [SMALL_STATE(350)] = 12059,
  [SMALL_STATE(351)] = 12071,
  [SMALL_STATE(352)] = 12083,
  [SMALL_STATE(353)] = 12093,
  [SMALL_STATE(354)] = 12103,
  [SMALL_STATE(355)] = 12115,
  [SMALL_STATE(356)] = 12127,
  [SMALL_STATE(357)] = 12139,
  [SMALL_STATE(358)] = 12148,
  [SMALL_STATE(359)] = 12157,
  [SMALL_STATE(360)] = 12166,
  [SMALL_STATE(361)] = 12175,
  [SMALL_STATE(362)] = 12184,
  [SMALL_STATE(363)] = 12193,
  [SMALL_STATE(364)] = 12202,
  [SMALL_STATE(365)] = 12211,
  [SMALL_STATE(366)] = 12220,
  [SMALL_STATE(367)] = 12229,
  [SMALL_STATE(368)] = 12238,
  [SMALL_STATE(369)] = 12247,
  [SMALL_STATE(370)] = 12256,
  [SMALL_STATE(371)] = 12265,
  [SMALL_STATE(372)] = 12274,
  [SMALL_STATE(373)] = 12283,
  [SMALL_STATE(374)] = 12292,
  [SMALL_STATE(375)] = 12301,
  [SMALL_STATE(376)] = 12310,
  [SMALL_STATE(377)] = 12319,
  [SMALL_STATE(378)] = 12328,
  [SMALL_STATE(379)] = 12337,
  [SMALL_STATE(380)] = 12346,
  [SMALL_STATE(381)] = 12355,
  [SMALL_STATE(382)] = 12364,
  [SMALL_STATE(383)] = 12373,
  [SMALL_STATE(384)] = 12382,
  [SMALL_STATE(385)] = 12391,
  [SMALL_STATE(386)] = 12400,
  [SMALL_STATE(387)] = 12409,
  [SMALL_STATE(388)] = 12418,
  [SMALL_STATE(389)] = 12427,
  [SMALL_STATE(390)] = 12436,
  [SMALL_STATE(391)] = 12445,
  [SMALL_STATE(392)] = 12454,
  [SMALL_STATE(393)] = 12463,
  [SMALL_STATE(394)] = 12472,
  [SMALL_STATE(395)] = 12481,
  [SMALL_STATE(396)] = 12490,
  [SMALL_STATE(397)] = 12499,
  [SMALL_STATE(398)] = 12508,
  [SMALL_STATE(399)] = 12517,
  [SMALL_STATE(400)] = 12526,
  [SMALL_STATE(401)] = 12535,
  [SMALL_STATE(402)] = 12544,
  [SMALL_STATE(403)] = 12553,
  [SMALL_STATE(404)] = 12562,
  [SMALL_STATE(405)] = 12571,
  [SMALL_STATE(406)] = 12580,
  [SMALL_STATE(407)] = 12589,
  [SMALL_STATE(408)] = 12598,
  [SMALL_STATE(409)] = 12607,
  [SMALL_STATE(410)] = 12616,
  [SMALL_STATE(411)] = 12625,
  [SMALL_STATE(412)] = 12634,
  [SMALL_STATE(413)] = 12643,
  [SMALL_STATE(414)] = 12652,
  [SMALL_STATE(415)] = 12661,
  [SMALL_STATE(416)] = 12670,
  [SMALL_STATE(417)] = 12679,
  [SMALL_STATE(418)] = 12688,
  [SMALL_STATE(419)] = 12697,
  [SMALL_STATE(420)] = 12706,
  [SMALL_STATE(421)] = 12715,
  [SMALL_STATE(422)] = 12724,
  [SMALL_STATE(423)] = 12733,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_blob, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_blob, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_blob, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_blob, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__export_paren_repeat1, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__export_paren_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__export_paren_repeat1, 2), SHIFT_REPEAT(21),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__export_paren_repeat1, 2), SHIFT_REPEAT(4),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__export_paren_repeat1, 2), SHIFT_REPEAT(4),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__export_paren_repeat1, 2), SHIFT_REPEAT(19),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__export_paren_repeat1, 2), SHIFT_REPEAT(31),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__paren_group_repeat1, 2), SHIFT_REPEAT(5),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__paren_group_repeat1, 2), SHIFT_REPEAT(75),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__paren_group_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__paren_group_repeat1, 2), SHIFT_REPEAT(5),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__paren_group_repeat1, 2), SHIFT_REPEAT(74),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__paren_group_repeat1, 2), SHIFT_REPEAT(73),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__brace_group, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__brace_group, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__brace_group, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__brace_group, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paren_group, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paren_group, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_group, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_group, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paren_group, 3),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paren_group, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_group, 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_group, 3),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__export_paren_repeat1, 2), SHIFT_REPEAT(46),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__export_paren_repeat1, 2), SHIFT_REPEAT(78),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__export_paren_repeat1, 2), SHIFT_REPEAT(78),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__export_paren_repeat1, 2), SHIFT_REPEAT(45),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__export_paren_repeat1, 2), SHIFT_REPEAT(44),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__export_paren_repeat1, 2), SHIFT_REPEAT(16),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__export_paren_repeat1, 2), SHIFT_REPEAT(92),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__export_paren_repeat1, 2), SHIFT_REPEAT(92),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__export_paren_repeat1, 2), SHIFT_REPEAT(17),
  [412] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__export_paren_repeat1, 2), SHIFT_REPEAT(18),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__export_paren_repeat1, 2), SHIFT_REPEAT(53),
  [544] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__export_paren_repeat1, 2), SHIFT_REPEAT(146),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__export_paren_repeat1, 2), SHIFT_REPEAT(146),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__export_paren_repeat1, 2), SHIFT_REPEAT(51),
  [553] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__export_paren_repeat1, 2), SHIFT_REPEAT(50),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__export_paren_repeat1, 2), SHIFT_REPEAT(58),
  [559] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__export_paren_repeat1, 2), SHIFT_REPEAT(147),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__export_paren_repeat1, 2), SHIFT_REPEAT(147),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__export_paren_repeat1, 2), SHIFT_REPEAT(57),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__export_paren_repeat1, 2), SHIFT_REPEAT(56),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__export_paren_repeat1, 2), SHIFT_REPEAT(64),
  [582] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__export_paren_repeat1, 2), SHIFT_REPEAT(152),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__export_paren_repeat1, 2), SHIFT_REPEAT(152),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__export_paren_repeat1, 2), SHIFT_REPEAT(63),
  [591] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__export_paren_repeat1, 2), SHIFT_REPEAT(62),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_blob, 1),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctrl_blob_repeat1, 2), SHIFT_REPEAT(64),
  [629] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctrl_blob_repeat1, 2), SHIFT_REPEAT(182),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctrl_blob_repeat1, 2), SHIFT_REPEAT(182),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctrl_blob_repeat1, 2),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctrl_blob_repeat1, 2), SHIFT_REPEAT(63),
  [640] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctrl_blob_repeat1, 2), SHIFT_REPEAT(62),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctrl_blob_repeat1, 2), SHIFT_REPEAT(9),
  [650] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctrl_blob_repeat1, 2), SHIFT_REPEAT(191),
  [653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctrl_blob_repeat1, 2), SHIFT_REPEAT(191),
  [656] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctrl_blob_repeat1, 2), SHIFT_REPEAT(8),
  [659] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctrl_blob_repeat1, 2), SHIFT_REPEAT(25),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_body_repeat1, 2),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_body_repeat1, 2),
  [666] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_body_repeat1, 2), SHIFT_REPEAT(115),
  [669] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_body_repeat1, 2), SHIFT_REPEAT(116),
  [672] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_body_repeat1, 2), SHIFT_REPEAT(117),
  [675] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_body_repeat1, 2), SHIFT_REPEAT(118),
  [678] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_body_repeat1, 2), SHIFT_REPEAT(119),
  [681] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_body_repeat1, 2), SHIFT_REPEAT(120),
  [684] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_body_repeat1, 2), SHIFT_REPEAT(101),
  [687] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_body_repeat1, 2), SHIFT_REPEAT(421),
  [690] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_body_repeat1, 2), SHIFT_REPEAT(394),
  [693] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_body_repeat1, 2), SHIFT_REPEAT(345),
  [696] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_body_repeat1, 2), SHIFT_REPEAT(418),
  [699] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_body_repeat1, 2), SHIFT_REPEAT(140),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_body, 1),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_body, 1),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_blob_repeat1, 2),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_blob_repeat1, 2),
  [758] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_blob_repeat1, 2), SHIFT_REPEAT(33),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_blob_repeat1, 2), SHIFT_REPEAT(220),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_blob_repeat1, 2), SHIFT_REPEAT(32),
  [767] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_blob_repeat1, 2), SHIFT_REPEAT(220),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_blob, 1),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_blob, 1),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [786] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(123),
  [789] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(393),
  [792] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(394),
  [795] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(395),
  [798] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(125),
  [801] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(287),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implements_clause, 2, .production_id = 14),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implements_clause, 2, .production_id = 14),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_body, 1),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_body, 1),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_decl, 11, .production_id = 23),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_decl, 11, .production_id = 23),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_decl, 9, .production_id = 19),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_decl, 9, .production_id = 19),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ensure_clause, 2, .production_id = 7),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ensure_clause, 2, .production_id = 7),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_clause, 2, .production_id = 7),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_maintainer_clause, 2, .production_id = 7),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_observer_clause, 2, .production_id = 7),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_observer_clause, 2, .production_id = 7),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_clause, 2, .production_id = 7),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_clause, 2, .production_id = 7),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signatory_clause, 2, .production_id = 7),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signatory_clause, 2, .production_id = 7),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implements_clause, 4, .production_id = 16),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implements_clause, 4, .production_id = 16),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deriving_clause, 2, .production_id = 7),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deriving_clause, 2, .production_id = 7),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_instance_clause, 7, .production_id = 17),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_instance_clause, 7, .production_id = 17),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_clause, 2, .production_id = 7),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_clause, 2, .production_id = 7),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_controller_can_clause, 4, .production_id = 15),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_controller_can_clause, 4, .production_id = 15),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_decl, 13, .production_id = 25),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_decl, 13, .production_id = 25),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_decl, 10, .production_id = 20),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_decl, 10, .production_id = 20),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_decl, 10, .production_id = 21),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_decl, 10, .production_id = 21),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_decl, 11, .production_id = 22),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_decl, 11, .production_id = 22),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_decl, 8, .production_id = 18),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_decl, 8, .production_id = 18),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_decl, 12, .production_id = 24),
  [894] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_decl, 12, .production_id = 24),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [898] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(365),
  [901] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(354),
  [904] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(376),
  [907] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(375),
  [910] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(104),
  [913] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(373),
  [916] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(372),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_viewtype_decl, 2, .production_id = 8),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_viewtype_decl, 2, .production_id = 8),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 3, .production_id = 2),
  [937] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_decl, 3, .production_id = 2),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 2, .production_id = 1),
  [949] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_decl, 2, .production_id = 1),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 4, .production_id = 4),
  [961] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_decl, 4, .production_id = 4),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 5, .production_id = 6),
  [971] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_decl, 5, .production_id = 6),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 3, .production_id = 1),
  [989] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_decl, 3, .production_id = 1),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 4, .production_id = 2),
  [997] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_decl, 4, .production_id = 2),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 6, .production_id = 6),
  [1005] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_decl, 6, .production_id = 6),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [1011] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_blob_repeat1, 2), SHIFT_REPEAT(13),
  [1014] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_blob_repeat1, 2), SHIFT_REPEAT(271),
  [1017] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_blob_repeat1, 2), SHIFT_REPEAT(12),
  [1020] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_blob_repeat1, 2), SHIFT_REPEAT(271),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 5, .production_id = 4),
  [1025] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_decl, 5, .production_id = 4),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1029] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [1039] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_blob_repeat1, 2), SHIFT_REPEAT(37),
  [1042] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_blob_repeat1, 2), SHIFT_REPEAT(274),
  [1045] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_blob_repeat1, 2), SHIFT_REPEAT(35),
  [1048] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_blob_repeat1, 2), SHIFT_REPEAT(274),
  [1051] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_blob_repeat1, 2), SHIFT_REPEAT(27),
  [1054] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_blob_repeat1, 2), SHIFT_REPEAT(275),
  [1057] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_blob_repeat1, 2), SHIFT_REPEAT(26),
  [1060] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_blob_repeat1, 2), SHIFT_REPEAT(275),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 10, .production_id = 6),
  [1073] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_decl, 10, .production_id = 6),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_header, 3, .production_id = 1),
  [1077] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_header, 3, .production_id = 1),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1081] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 8, .production_id = 4),
  [1085] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_decl, 8, .production_id = 4),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 9, .production_id = 6),
  [1089] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_decl, 9, .production_id = 6),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 9, .production_id = 4),
  [1097] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_decl, 9, .production_id = 4),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 8, .production_id = 2),
  [1101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_decl, 8, .production_id = 2),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 6, .production_id = 4),
  [1105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_decl, 6, .production_id = 4),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 8, .production_id = 6),
  [1113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_decl, 8, .production_id = 6),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_decl, 6, .production_id = 12),
  [1117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_decl, 6, .production_id = 12),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 7, .production_id = 1),
  [1121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_decl, 7, .production_id = 1),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 5, .production_id = 2),
  [1125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_decl, 5, .production_id = 2),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 7, .production_id = 4),
  [1129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_decl, 7, .production_id = 4),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_decl, 2),
  [1133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_other_decl, 2),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_decl, 6, .production_id = 11),
  [1141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_decl, 6, .production_id = 11),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 4, .production_id = 1),
  [1145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_decl, 4, .production_id = 1),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 7, .production_id = 2),
  [1149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_decl, 7, .production_id = 2),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 7, .production_id = 6),
  [1153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_decl, 7, .production_id = 6),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 6, .production_id = 1),
  [1157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_decl, 6, .production_id = 1),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 6, .production_id = 2),
  [1161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_decl, 6, .production_id = 2),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_decl, 4, .production_id = 5),
  [1165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_decl, 4, .production_id = 5),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_decl, 3, .production_id = 3),
  [1169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_decl, 3, .production_id = 3),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 5, .production_id = 1),
  [1173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_decl, 5, .production_id = 1),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_decl, 3, .production_id = 1),
  [1177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_other_decl, 3, .production_id = 1),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_header, 4, .production_id = 1),
  [1181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_header, 4, .production_id = 1),
  [1183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_block, 1),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [1187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_block_repeat1, 2),
  [1189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_block_repeat1, 2), SHIFT_REPEAT(336),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_block_repeat1, 2), SHIFT_REPEAT(335),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_decl_repeat1, 2, .production_id = 10), SHIFT_REPEAT(415),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_decl_repeat1, 2, .production_id = 10),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_decl, 4, .production_id = 13),
  [1246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_decl, 3, .production_id = 9),
  [1248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_decl_repeat1, 2, .production_id = 1),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__export_paren, 2),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1318] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_modifier, 1),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__export_paren, 3),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_daml(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
