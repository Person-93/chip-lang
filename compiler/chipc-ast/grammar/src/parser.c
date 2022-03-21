#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 337
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 16
#define PRODUCTION_ID_COUNT 79

enum {
  sym_word = 1,
  anon_sym_POUND_CARET_LBRACK = 2,
  anon_sym_RBRACK = 3,
  anon_sym_POUND_LBRACK = 4,
  anon_sym_EQ = 5,
  anon_sym_LPAREN = 6,
  anon_sym_COMMA = 7,
  anon_sym_RPAREN = 8,
  anon_sym_fn = 9,
  anon_sym_COLON = 10,
  anon_sym_DASH_GT = 11,
  anon_sym_const = 12,
  anon_sym_unsafe = 13,
  anon_sym_extern = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_SEMI = 17,
  anon_sym_pub = 18,
  anon_sym_super = 19,
  anon_sym_package = 20,
  anon_sym_let = 21,
  anon_sym_COLON_EQ = 22,
  anon_sym_COLON_COLON = 23,
  sym_identifier = 24,
  anon_sym_COLON_COLON_LT = 25,
  anon_sym_GT = 26,
  sym_unit_literal = 27,
  sym_string_literal = 28,
  anon_sym_true = 29,
  anon_sym_false = 30,
  anon_sym_DOT = 31,
  anon_sym_u8 = 32,
  anon_sym_u16 = 33,
  anon_sym_u32 = 34,
  anon_sym_u64 = 35,
  anon_sym_u128 = 36,
  anon_sym_usize = 37,
  anon_sym_i8 = 38,
  anon_sym_i16 = 39,
  anon_sym_i32 = 40,
  anon_sym_i64 = 41,
  anon_sym_i128 = 42,
  anon_sym_isize = 43,
  anon_sym_f32 = 44,
  anon_sym_f64 = 45,
  sym_digits = 46,
  sym_file = 47,
  sym__item = 48,
  sym__inner_attribute = 49,
  sym__outer_attribute = 50,
  sym_attr = 51,
  sym__attr_data_value = 52,
  sym_function = 53,
  sym_function_modifier = 54,
  sym_type = 55,
  sym_extern_block = 56,
  sym__extern_item = 57,
  sym_extern_function = 58,
  sym_visibility_modifier = 59,
  sym__expr = 60,
  sym_codeblock = 61,
  sym_statement = 62,
  sym_tuple_expression = 63,
  sym_let_binding = 64,
  sym_path = 65,
  sym_path_segment = 66,
  sym_generic_params = 67,
  sym__literal = 68,
  sym_boolean_literal = 69,
  sym_numeric_literal = 70,
  aux_sym_file_repeat1 = 71,
  aux_sym_file_repeat2 = 72,
  aux_sym_attr_repeat1 = 73,
  aux_sym_function_repeat1 = 74,
  aux_sym_function_repeat2 = 75,
  aux_sym_extern_block_repeat1 = 76,
  aux_sym_codeblock_repeat1 = 77,
  aux_sym_tuple_expression_repeat1 = 78,
  aux_sym_path_repeat1 = 79,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_word] = "word",
  [anon_sym_POUND_CARET_LBRACK] = "#^[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_POUND_LBRACK] = "#[",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_fn] = "fn",
  [anon_sym_COLON] = ":",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_const] = "const",
  [anon_sym_unsafe] = "unsafe",
  [anon_sym_extern] = "extern",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_pub] = "pub",
  [anon_sym_super] = "super",
  [anon_sym_package] = "package",
  [anon_sym_let] = "let",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_COLON_COLON] = "::",
  [sym_identifier] = "identifier",
  [anon_sym_COLON_COLON_LT] = "::<",
  [anon_sym_GT] = ">",
  [sym_unit_literal] = "unit_literal",
  [sym_string_literal] = "string_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DOT] = ".",
  [anon_sym_u8] = "u8",
  [anon_sym_u16] = "u16",
  [anon_sym_u32] = "u32",
  [anon_sym_u64] = "u64",
  [anon_sym_u128] = "u128",
  [anon_sym_usize] = "usize",
  [anon_sym_i8] = "i8",
  [anon_sym_i16] = "i16",
  [anon_sym_i32] = "i32",
  [anon_sym_i64] = "i64",
  [anon_sym_i128] = "i128",
  [anon_sym_isize] = "isize",
  [anon_sym_f32] = "f32",
  [anon_sym_f64] = "f64",
  [sym_digits] = "digits",
  [sym_file] = "file",
  [sym__item] = "_item",
  [sym__inner_attribute] = "_inner_attribute",
  [sym__outer_attribute] = "_outer_attribute",
  [sym_attr] = "attr",
  [sym__attr_data_value] = "_attr_data_value",
  [sym_function] = "function",
  [sym_function_modifier] = "function_modifier",
  [sym_type] = "type",
  [sym_extern_block] = "extern_block",
  [sym__extern_item] = "_extern_item",
  [sym_extern_function] = "extern_function",
  [sym_visibility_modifier] = "visibility_modifier",
  [sym__expr] = "_expr",
  [sym_codeblock] = "codeblock",
  [sym_statement] = "statement",
  [sym_tuple_expression] = "tuple_expression",
  [sym_let_binding] = "let_binding",
  [sym_path] = "path",
  [sym_path_segment] = "path_segment",
  [sym_generic_params] = "generic_params",
  [sym__literal] = "_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_numeric_literal] = "numeric_literal",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_file_repeat2] = "file_repeat2",
  [aux_sym_attr_repeat1] = "attr_repeat1",
  [aux_sym_function_repeat1] = "function_repeat1",
  [aux_sym_function_repeat2] = "function_repeat2",
  [aux_sym_extern_block_repeat1] = "extern_block_repeat1",
  [aux_sym_codeblock_repeat1] = "codeblock_repeat1",
  [aux_sym_tuple_expression_repeat1] = "tuple_expression_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_word] = sym_word,
  [anon_sym_POUND_CARET_LBRACK] = anon_sym_POUND_CARET_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_POUND_LBRACK] = anon_sym_POUND_LBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_unsafe] = anon_sym_unsafe,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_pub] = anon_sym_pub,
  [anon_sym_super] = anon_sym_super,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym_identifier] = sym_identifier,
  [anon_sym_COLON_COLON_LT] = anon_sym_COLON_COLON_LT,
  [anon_sym_GT] = anon_sym_GT,
  [sym_unit_literal] = sym_unit_literal,
  [sym_string_literal] = sym_string_literal,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_u128] = anon_sym_u128,
  [anon_sym_usize] = anon_sym_usize,
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_i16] = anon_sym_i16,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_i64] = anon_sym_i64,
  [anon_sym_i128] = anon_sym_i128,
  [anon_sym_isize] = anon_sym_isize,
  [anon_sym_f32] = anon_sym_f32,
  [anon_sym_f64] = anon_sym_f64,
  [sym_digits] = sym_digits,
  [sym_file] = sym_file,
  [sym__item] = sym__item,
  [sym__inner_attribute] = sym__inner_attribute,
  [sym__outer_attribute] = sym__outer_attribute,
  [sym_attr] = sym_attr,
  [sym__attr_data_value] = sym__attr_data_value,
  [sym_function] = sym_function,
  [sym_function_modifier] = sym_function_modifier,
  [sym_type] = sym_type,
  [sym_extern_block] = sym_extern_block,
  [sym__extern_item] = sym__extern_item,
  [sym_extern_function] = sym_extern_function,
  [sym_visibility_modifier] = sym_visibility_modifier,
  [sym__expr] = sym__expr,
  [sym_codeblock] = sym_codeblock,
  [sym_statement] = sym_statement,
  [sym_tuple_expression] = sym_tuple_expression,
  [sym_let_binding] = sym_let_binding,
  [sym_path] = sym_path,
  [sym_path_segment] = sym_path_segment,
  [sym_generic_params] = sym_generic_params,
  [sym__literal] = sym__literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_numeric_literal] = sym_numeric_literal,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_file_repeat2] = aux_sym_file_repeat2,
  [aux_sym_attr_repeat1] = aux_sym_attr_repeat1,
  [aux_sym_function_repeat1] = aux_sym_function_repeat1,
  [aux_sym_function_repeat2] = aux_sym_function_repeat2,
  [aux_sym_extern_block_repeat1] = aux_sym_extern_block_repeat1,
  [aux_sym_codeblock_repeat1] = aux_sym_codeblock_repeat1,
  [aux_sym_tuple_expression_repeat1] = aux_sym_tuple_expression_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND_CARET_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsafe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern] = {
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_super] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON_COLON_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_unit_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f64] = {
    .visible = true,
    .named = false,
  },
  [sym_digits] = {
    .visible = true,
    .named = true,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym__item] = {
    .visible = false,
    .named = true,
  },
  [sym__inner_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__outer_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym_attr] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_data_value] = {
    .visible = false,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_function_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_extern_block] = {
    .visible = true,
    .named = true,
  },
  [sym__extern_item] = {
    .visible = false,
    .named = true,
  },
  [sym_extern_function] = {
    .visible = true,
    .named = true,
  },
  [sym_visibility_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_codeblock] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_let_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_path_segment] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_params] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_extern_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_codeblock_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_abi = 1,
  field_args = 2,
  field_body = 3,
  field_float_part = 4,
  field_identifier = 5,
  field_inputs = 6,
  field_members = 7,
  field_name = 8,
  field_output = 9,
  field_restriction = 10,
  field_suffix = 11,
  field_trailing = 12,
  field_type = 13,
  field_value = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_abi] = "abi",
  [field_args] = "args",
  [field_body] = "body",
  [field_float_part] = "float_part",
  [field_identifier] = "identifier",
  [field_inputs] = "inputs",
  [field_members] = "members",
  [field_name] = "name",
  [field_output] = "output",
  [field_restriction] = "restriction",
  [field_suffix] = "suffix",
  [field_trailing] = "trailing",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 1},
  [9] = {.index = 9, .length = 2},
  [10] = {.index = 11, .length = 2},
  [11] = {.index = 13, .length = 2},
  [12] = {.index = 15, .length = 1},
  [13] = {.index = 16, .length = 2},
  [14] = {.index = 18, .length = 1},
  [15] = {.index = 19, .length = 3},
  [16] = {.index = 22, .length = 3},
  [17] = {.index = 25, .length = 1},
  [18] = {.index = 26, .length = 2},
  [19] = {.index = 28, .length = 3},
  [20] = {.index = 31, .length = 1},
  [21] = {.index = 32, .length = 3},
  [22] = {.index = 35, .length = 4},
  [23] = {.index = 39, .length = 2},
  [24] = {.index = 41, .length = 2},
  [25] = {.index = 43, .length = 5},
  [26] = {.index = 48, .length = 4},
  [27] = {.index = 52, .length = 2},
  [28] = {.index = 54, .length = 3},
  [29] = {.index = 57, .length = 2},
  [30] = {.index = 59, .length = 6},
  [31] = {.index = 65, .length = 2},
  [32] = {.index = 67, .length = 8},
  [33] = {.index = 75, .length = 5},
  [34] = {.index = 80, .length = 7},
  [35] = {.index = 87, .length = 4},
  [36] = {.index = 91, .length = 5},
  [37] = {.index = 96, .length = 3},
  [38] = {.index = 99, .length = 6},
  [39] = {.index = 105, .length = 9},
  [40] = {.index = 114, .length = 5},
  [41] = {.index = 119, .length = 8},
  [42] = {.index = 127, .length = 5},
  [43] = {.index = 132, .length = 7},
  [44] = {.index = 139, .length = 6},
  [45] = {.index = 145, .length = 8},
  [46] = {.index = 153, .length = 5},
  [47] = {.index = 158, .length = 3},
  [48] = {.index = 161, .length = 7},
  [49] = {.index = 168, .length = 9},
  [50] = {.index = 177, .length = 6},
  [51] = {.index = 183, .length = 8},
  [52] = {.index = 191, .length = 5},
  [53] = {.index = 196, .length = 8},
  [54] = {.index = 204, .length = 6},
  [55] = {.index = 210, .length = 9},
  [56] = {.index = 219, .length = 6},
  [57] = {.index = 225, .length = 8},
  [58] = {.index = 233, .length = 5},
  [59] = {.index = 238, .length = 10},
  [60] = {.index = 248, .length = 9},
  [61] = {.index = 257, .length = 6},
  [62] = {.index = 263, .length = 8},
  [63] = {.index = 271, .length = 7},
  [64] = {.index = 278, .length = 9},
  [65] = {.index = 287, .length = 6},
  [66] = {.index = 293, .length = 9},
  [67] = {.index = 302, .length = 6},
  [68] = {.index = 308, .length = 8},
  [69] = {.index = 316, .length = 9},
  [70] = {.index = 325, .length = 10},
  [71] = {.index = 335, .length = 7},
  [72] = {.index = 342, .length = 9},
  [73] = {.index = 351, .length = 6},
  [74] = {.index = 357, .length = 9},
  [75] = {.index = 366, .length = 10},
  [76] = {.index = 376, .length = 7},
  [77] = {.index = 383, .length = 9},
  [78] = {.index = 392, .length = 10},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_abi, 1},
  [1] =
    {field_value, 0},
  [2] =
    {field_value, 2},
  [3] =
    {field_restriction, 2},
  [4] =
    {field_suffix, 1},
    {field_value, 0},
  [6] =
    {field_args, 2},
  [7] =
    {field_members, 1},
  [8] =
    {field_trailing, 1},
  [9] =
    {field_float_part, 2},
    {field_value, 0},
  [11] =
    {field_args, 2},
    {field_args, 3},
  [13] =
    {field_body, 5},
    {field_name, 1},
  [15] =
    {field_name, 1},
  [16] =
    {field_members, 1},
    {field_members, 2},
  [18] =
    {field_trailing, 2},
  [19] =
    {field_float_part, 2},
    {field_suffix, 3},
    {field_value, 0},
  [22] =
    {field_args, 2},
    {field_args, 3},
    {field_args, 4},
  [25] =
    {field_name, 2},
  [26] =
    {field_body, 6},
    {field_name, 2},
  [28] =
    {field_members, 1},
    {field_members, 2},
    {field_members, 3},
  [31] =
    {field_value, 3},
  [32] =
    {field_body, 7},
    {field_name, 1},
    {field_output, 5},
  [35] =
    {field_identifier, 0, .inherited = true},
    {field_identifier, 1, .inherited = true},
    {field_type, 0, .inherited = true},
    {field_type, 1, .inherited = true},
  [39] =
    {field_name, 1},
    {field_output, 5},
  [41] =
    {field_body, 7},
    {field_name, 3},
  [43] =
    {field_body, 8},
    {field_identifier, 3},
    {field_inputs, 4},
    {field_name, 1},
    {field_type, 5},
  [48] =
    {field_identifier, 3},
    {field_inputs, 4},
    {field_name, 1},
    {field_type, 5},
  [52] =
    {field_name, 2},
    {field_output, 6},
  [54] =
    {field_body, 8},
    {field_name, 2},
    {field_output, 6},
  [57] =
    {field_body, 8},
    {field_name, 4},
  [59] =
    {field_body, 9},
    {field_identifier, 3},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_name, 1},
    {field_type, 5},
  [65] =
    {field_identifier, 1},
    {field_type, 3},
  [67] =
    {field_body, 9},
    {field_identifier, 3},
    {field_identifier, 6, .inherited = true},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_name, 1},
    {field_type, 5},
    {field_type, 6, .inherited = true},
  [75] =
    {field_identifier, 3},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_name, 1},
    {field_type, 5},
  [80] =
    {field_identifier, 3},
    {field_identifier, 6, .inherited = true},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_name, 1},
    {field_type, 5},
    {field_type, 6, .inherited = true},
  [87] =
    {field_identifier, 4},
    {field_inputs, 5},
    {field_name, 2},
    {field_type, 6},
  [91] =
    {field_body, 9},
    {field_identifier, 4},
    {field_inputs, 5},
    {field_name, 2},
    {field_type, 6},
  [96] =
    {field_body, 9},
    {field_name, 3},
    {field_output, 7},
  [99] =
    {field_body, 10},
    {field_identifier, 3},
    {field_inputs, 4},
    {field_name, 1},
    {field_output, 8},
    {field_type, 5},
  [105] =
    {field_body, 10},
    {field_identifier, 3},
    {field_identifier, 6, .inherited = true},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_inputs, 7},
    {field_name, 1},
    {field_type, 5},
    {field_type, 6, .inherited = true},
  [114] =
    {field_identifier, 3},
    {field_inputs, 4},
    {field_name, 1},
    {field_output, 8},
    {field_type, 5},
  [119] =
    {field_identifier, 3},
    {field_identifier, 6, .inherited = true},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_inputs, 7},
    {field_name, 1},
    {field_type, 5},
    {field_type, 6, .inherited = true},
  [127] =
    {field_identifier, 4},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_name, 2},
    {field_type, 6},
  [132] =
    {field_identifier, 4},
    {field_identifier, 7, .inherited = true},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_name, 2},
    {field_type, 6},
    {field_type, 7, .inherited = true},
  [139] =
    {field_body, 10},
    {field_identifier, 4},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_name, 2},
    {field_type, 6},
  [145] =
    {field_body, 10},
    {field_identifier, 4},
    {field_identifier, 7, .inherited = true},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_name, 2},
    {field_type, 6},
    {field_type, 7, .inherited = true},
  [153] =
    {field_body, 10},
    {field_identifier, 5},
    {field_inputs, 6},
    {field_name, 3},
    {field_type, 7},
  [158] =
    {field_body, 10},
    {field_name, 4},
    {field_output, 8},
  [161] =
    {field_body, 11},
    {field_identifier, 3},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_name, 1},
    {field_output, 9},
    {field_type, 5},
  [168] =
    {field_body, 11},
    {field_identifier, 3},
    {field_identifier, 6, .inherited = true},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_name, 1},
    {field_output, 9},
    {field_type, 5},
    {field_type, 6, .inherited = true},
  [177] =
    {field_identifier, 3},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_name, 1},
    {field_output, 9},
    {field_type, 5},
  [183] =
    {field_identifier, 3},
    {field_identifier, 6, .inherited = true},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_name, 1},
    {field_output, 9},
    {field_type, 5},
    {field_type, 6, .inherited = true},
  [191] =
    {field_identifier, 4},
    {field_inputs, 5},
    {field_name, 2},
    {field_output, 9},
    {field_type, 6},
  [196] =
    {field_identifier, 4},
    {field_identifier, 7, .inherited = true},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_inputs, 8},
    {field_name, 2},
    {field_type, 6},
    {field_type, 7, .inherited = true},
  [204] =
    {field_body, 11},
    {field_identifier, 4},
    {field_inputs, 5},
    {field_name, 2},
    {field_output, 9},
    {field_type, 6},
  [210] =
    {field_body, 11},
    {field_identifier, 4},
    {field_identifier, 7, .inherited = true},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_inputs, 8},
    {field_name, 2},
    {field_type, 6},
    {field_type, 7, .inherited = true},
  [219] =
    {field_body, 11},
    {field_identifier, 5},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_name, 3},
    {field_type, 7},
  [225] =
    {field_body, 11},
    {field_identifier, 5},
    {field_identifier, 8, .inherited = true},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_name, 3},
    {field_type, 7},
    {field_type, 8, .inherited = true},
  [233] =
    {field_body, 11},
    {field_identifier, 6},
    {field_inputs, 7},
    {field_name, 4},
    {field_type, 8},
  [238] =
    {field_body, 12},
    {field_identifier, 3},
    {field_identifier, 6, .inherited = true},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_inputs, 7},
    {field_name, 1},
    {field_output, 10},
    {field_type, 5},
    {field_type, 6, .inherited = true},
  [248] =
    {field_identifier, 3},
    {field_identifier, 6, .inherited = true},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_inputs, 7},
    {field_name, 1},
    {field_output, 10},
    {field_type, 5},
    {field_type, 6, .inherited = true},
  [257] =
    {field_identifier, 4},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_name, 2},
    {field_output, 10},
    {field_type, 6},
  [263] =
    {field_identifier, 4},
    {field_identifier, 7, .inherited = true},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_name, 2},
    {field_output, 10},
    {field_type, 6},
    {field_type, 7, .inherited = true},
  [271] =
    {field_body, 12},
    {field_identifier, 4},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_name, 2},
    {field_output, 10},
    {field_type, 6},
  [278] =
    {field_body, 12},
    {field_identifier, 4},
    {field_identifier, 7, .inherited = true},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_name, 2},
    {field_output, 10},
    {field_type, 6},
    {field_type, 7, .inherited = true},
  [287] =
    {field_body, 12},
    {field_identifier, 5},
    {field_inputs, 6},
    {field_name, 3},
    {field_output, 10},
    {field_type, 7},
  [293] =
    {field_body, 12},
    {field_identifier, 5},
    {field_identifier, 8, .inherited = true},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_inputs, 9},
    {field_name, 3},
    {field_type, 7},
    {field_type, 8, .inherited = true},
  [302] =
    {field_body, 12},
    {field_identifier, 6},
    {field_inputs, 7},
    {field_inputs, 9},
    {field_name, 4},
    {field_type, 8},
  [308] =
    {field_body, 12},
    {field_identifier, 6},
    {field_identifier, 9, .inherited = true},
    {field_inputs, 7},
    {field_inputs, 9},
    {field_name, 4},
    {field_type, 8},
    {field_type, 9, .inherited = true},
  [316] =
    {field_identifier, 4},
    {field_identifier, 7, .inherited = true},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_inputs, 8},
    {field_name, 2},
    {field_output, 11},
    {field_type, 6},
    {field_type, 7, .inherited = true},
  [325] =
    {field_body, 13},
    {field_identifier, 4},
    {field_identifier, 7, .inherited = true},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_inputs, 8},
    {field_name, 2},
    {field_output, 11},
    {field_type, 6},
    {field_type, 7, .inherited = true},
  [335] =
    {field_body, 13},
    {field_identifier, 5},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_name, 3},
    {field_output, 11},
    {field_type, 7},
  [342] =
    {field_body, 13},
    {field_identifier, 5},
    {field_identifier, 8, .inherited = true},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_name, 3},
    {field_output, 11},
    {field_type, 7},
    {field_type, 8, .inherited = true},
  [351] =
    {field_body, 13},
    {field_identifier, 6},
    {field_inputs, 7},
    {field_name, 4},
    {field_output, 11},
    {field_type, 8},
  [357] =
    {field_body, 13},
    {field_identifier, 6},
    {field_identifier, 9, .inherited = true},
    {field_inputs, 7},
    {field_inputs, 9},
    {field_inputs, 10},
    {field_name, 4},
    {field_type, 8},
    {field_type, 9, .inherited = true},
  [366] =
    {field_body, 14},
    {field_identifier, 5},
    {field_identifier, 8, .inherited = true},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_inputs, 9},
    {field_name, 3},
    {field_output, 12},
    {field_type, 7},
    {field_type, 8, .inherited = true},
  [376] =
    {field_body, 14},
    {field_identifier, 6},
    {field_inputs, 7},
    {field_inputs, 9},
    {field_name, 4},
    {field_output, 12},
    {field_type, 8},
  [383] =
    {field_body, 14},
    {field_identifier, 6},
    {field_identifier, 9, .inherited = true},
    {field_inputs, 7},
    {field_inputs, 9},
    {field_name, 4},
    {field_output, 12},
    {field_type, 8},
    {field_type, 9, .inherited = true},
  [392] =
    {field_body, 15},
    {field_identifier, 6},
    {field_identifier, 9, .inherited = true},
    {field_inputs, 7},
    {field_inputs, 9},
    {field_inputs, 10},
    {field_name, 4},
    {field_output, 13},
    {field_type, 8},
    {field_type, 9, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_word_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_word_character_set_2(int32_t c) {
  return (c < 43520
    ? (c < 4206
      ? (c < 2738
        ? (c < 2042
          ? (c < 1162
            ? (c < 880
              ? (c < 248
                ? (c < 186
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 186 || (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)))
                : (c <= 705 || (c < 748
                  ? (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)
                  : (c <= 748 || c == 750))))
              : (c <= 884 || (c < 904
                ? (c < 895
                  ? (c < 891
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 931
                  ? (c < 910
                    ? c == 908
                    : c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))))))
            : (c <= 1327 || (c < 1765
              ? (c < 1519
                ? (c < 1376
                  ? (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1649
                  ? (c < 1646
                    ? (c >= 1568 && c <= 1610)
                    : c <= 1647)
                  : (c <= 1747 || c == 1749))))
              : (c <= 1766 || (c < 1810
                ? (c < 1791
                  ? (c < 1786
                    ? (c >= 1774 && c <= 1775)
                    : c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1994
                  ? (c < 1969
                    ? (c >= 1869 && c <= 1957)
                    : c <= 1969)
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))))))))
          : (c <= 2042 || (c < 2493
            ? (c < 2365
              ? (c < 2144
                ? (c < 2084
                  ? (c < 2074
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2074)
                  : (c <= 2084 || (c < 2112
                    ? c == 2088
                    : c <= 2136)))
                : (c <= 2154 || (c < 2208
                  ? (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)
                  : (c <= 2249 || (c >= 2308 && c <= 2361)))))
              : (c <= 2365 || (c < 2447
                ? (c < 2417
                  ? (c < 2392
                    ? c == 2384
                    : c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2482
                  ? (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))))))
            : (c <= 2493 || (c < 2610
              ? (c < 2556
                ? (c < 2527
                  ? (c < 2524
                    ? c == 2510
                    : c <= 2525)
                  : (c <= 2529 || (c >= 2544 && c <= 2545)))
                : (c <= 2556 || (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))))
              : (c <= 2611 || (c < 2674
                ? (c < 2649
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2676 || (c < 2707
                  ? (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))))))))))
        : (c <= 2739 || (c < 3261
          ? (c < 2972
            ? (c < 2869
              ? (c < 2821
                ? (c < 2768
                  ? (c < 2749
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2749)
                  : (c <= 2768 || (c < 2809
                    ? (c >= 2784 && c <= 2785)
                    : c <= 2809)))
                : (c <= 2828 || (c < 2858
                  ? (c < 2835
                    ? (c >= 2831 && c <= 2832)
                    : c <= 2856)
                  : (c <= 2864 || (c >= 2866 && c <= 2867)))))
              : (c <= 2873 || (c < 2947
                ? (c < 2911
                  ? (c < 2908
                    ? c == 2877
                    : c <= 2909)
                  : (c <= 2913 || c == 2929))
                : (c <= 2947 || (c < 2962
                  ? (c < 2958
                    ? (c >= 2949 && c <= 2954)
                    : c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))))))
            : (c <= 2972 || (c < 3133
              ? (c < 3024
                ? (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3090
                  ? (c < 3086
                    ? (c >= 3077 && c <= 3084)
                    : c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))))
              : (c <= 3133 || (c < 3205
                ? (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3169 || c == 3200))
                : (c <= 3212 || (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))))))))
          : (c <= 3261 || (c < 3716
            ? (c < 3450
              ? (c < 3346
                ? (c < 3313
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3297)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3332 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3386 || (c < 3412
                  ? (c < 3406
                    ? c == 3389
                    : c <= 3406)
                  : (c <= 3414 || (c >= 3423 && c <= 3425)))))
              : (c <= 3455 || (c < 3520
                ? (c < 3507
                  ? (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3648
                  ? (c < 3634
                    ? (c >= 3585 && c <= 3632)
                    : c <= 3634)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))))))
            : (c <= 3716 || (c < 3840
              ? (c < 3762
                ? (c < 3749
                  ? (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3762 || (c < 3782
                  ? (c < 3776
                    ? c == 3773
                    : c <= 3780)
                  : (c <= 3782 || (c >= 3804 && c <= 3807)))))
              : (c <= 3840 || (c < 4159
                ? (c < 3976
                  ? (c < 3913
                    ? (c >= 3904 && c <= 3911)
                    : c <= 3948)
                  : (c <= 3980 || (c >= 4096 && c <= 4138)))
                : (c <= 4159 || (c < 4193
                  ? (c < 4186
                    ? (c >= 4176 && c <= 4181)
                    : c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))))))))))))
      : (c <= 4208 || (c < 8150
        ? (c < 6314
          ? (c < 4882
            ? (c < 4698
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4238
                    ? (c >= 4213 && c <= 4225)
                    : c <= 4238)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || c == 4696))))
              : (c <= 4701 || (c < 4792
                ? (c < 4752
                  ? (c < 4746
                    ? (c >= 4704 && c <= 4744)
                    : c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4808
                  ? (c < 4802
                    ? c == 4800
                    : c <= 4805)
                  : (c <= 4822 || (c >= 4824 && c <= 4880)))))))
            : (c <= 4885 || (c < 5888
              ? (c < 5121
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4888 && c <= 4954)
                    : c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))))
              : (c <= 5905 || (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5937)
                    : c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6176
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6108)
                  : (c <= 6264 || (c >= 6272 && c <= 6312)))))))))
          : (c <= 6314 || (c < 7401
            ? (c < 6981
              ? (c < 6576
                ? (c < 6480
                  ? (c < 6400
                    ? (c >= 6320 && c <= 6389)
                    : c <= 6430)
                  : (c <= 6509 || (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)))
                : (c <= 6601 || (c < 6823
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6678)
                    : c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))))
              : (c <= 6988 || (c < 7245
                ? (c < 7098
                  ? (c < 7086
                    ? (c >= 7043 && c <= 7072)
                    : c <= 7087)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))
                : (c <= 7247 || (c < 7312
                  ? (c < 7296
                    ? (c >= 7258 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))))))
            : (c <= 7404 || (c < 8025
              ? (c < 7680
                ? (c < 7418
                  ? (c < 7413
                    ? (c >= 7406 && c <= 7411)
                    : c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))))
              : (c <= 8025 || (c < 8118
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))
                : (c <= 8124 || (c < 8134
                  ? (c < 8130
                    ? c == 8126
                    : c <= 8132)
                  : (c <= 8140 || (c >= 8144 && c <= 8147)))))))))))
        : (c <= 8155 || (c < 12353
          ? (c < 11499
            ? (c < 8472
              ? (c < 8336
                ? (c < 8182
                  ? (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)
                  : (c <= 8188 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || c == 8469))))
              : (c <= 8477 || (c < 8508
                ? (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c >= 8490 && c <= 8505)))
                : (c <= 8511 || (c < 8544
                  ? (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8584 || (c >= 11264 && c <= 11492)))))))
            : (c <= 11502 || (c < 11696
              ? (c < 11568
                ? (c < 11559
                  ? (c < 11520
                    ? (c >= 11506 && c <= 11507)
                    : c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11680
                  ? (c < 11648
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))))
              : (c <= 11702 || (c < 11736
                ? (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12329)
                  : (c <= 12341 || (c >= 12344 && c <= 12348)))))))))
          : (c <= 12438 || (c < 42960
            ? (c < 42192
              ? (c < 12593
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))
                : (c <= 12686 || (c < 13312
                  ? (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)
                  : (c <= 19903 || (c >= 19968 && c <= 42124)))))
              : (c <= 42237 || (c < 42623
                ? (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))))))
            : (c <= 42961 || (c < 43259
              ? (c < 43015
                ? (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43138
                  ? (c < 43072
                    ? (c >= 43020 && c <= 43042)
                    : c <= 43123)
                  : (c <= 43187 || (c >= 43250 && c <= 43255)))))
              : (c <= 43259 || (c < 43396
                ? (c < 43312
                  ? (c < 43274
                    ? (c >= 43261 && c <= 43262)
                    : c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43494
                  ? (c < 43488
                    ? c == 43471
                    : c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))))))))))))))
    : (c <= 43560 || (c < 70751
      ? (c < 66964
        ? (c < 65008
          ? (c < 43888
            ? (c < 43739
              ? (c < 43697
                ? (c < 43616
                  ? (c < 43588
                    ? (c >= 43584 && c <= 43586)
                    : c <= 43595)
                  : (c <= 43638 || (c < 43646
                    ? c == 43642
                    : c <= 43695)))
                : (c <= 43697 || (c < 43712
                  ? (c < 43705
                    ? (c >= 43701 && c <= 43702)
                    : c <= 43709)
                  : (c <= 43712 || c == 43714))))
              : (c <= 43741 || (c < 43793
                ? (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))
                : (c <= 43798 || (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))))))
            : (c <= 44002 || (c < 64298
              ? (c < 64112
                ? (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c >= 64287 && c <= 64296)))))
              : (c <= 64310 || (c < 64326
                ? (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))
                : (c <= 64433 || (c < 64848
                  ? (c < 64612
                    ? (c >= 64467 && c <= 64605)
                    : c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))))))))
          : (c <= 65017 || (c < 65616
            ? (c < 65440
              ? (c < 65149
                ? (c < 65143
                  ? (c < 65139
                    ? c == 65137
                    : c <= 65139)
                  : (c <= 65143 || (c < 65147
                    ? c == 65145
                    : c <= 65147)))
                : (c <= 65149 || (c < 65345
                  ? (c < 65313
                    ? (c >= 65151 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65437)))))
              : (c <= 65470 || (c < 65536
                ? (c < 65490
                  ? (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)
                  : (c <= 65495 || (c >= 65498 && c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))))))
            : (c <= 65629 || (c < 66504
              ? (c < 66304
                ? (c < 66176
                  ? (c < 65856
                    ? (c >= 65664 && c <= 65786)
                    : c <= 65908)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66421)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))))
              : (c <= 66511 || (c < 66816
                ? (c < 66736
                  ? (c < 66560
                    ? (c >= 66513 && c <= 66517)
                    : c <= 66717)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))
                : (c <= 66855 || (c < 66940
                  ? (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))))))))
        : (c <= 66965 || (c < 69248
          ? (c < 67840
            ? (c < 67584
              ? (c < 67392
                ? (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)))
                : (c <= 67413 || (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c >= 67506 && c <= 67514)))))
              : (c <= 67589 || (c < 67647
                ? (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))
                : (c <= 67669 || (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))))))
            : (c <= 67861 || (c < 68288
              ? (c < 68112
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || c == 68096))
                : (c <= 68115 || (c < 68192
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68220 || (c >= 68224 && c <= 68252)))))
              : (c <= 68295 || (c < 68480
                ? (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68324)
                    : c <= 68405)
                  : (c <= 68437 || (c >= 68448 && c <= 68466)))
                : (c <= 68497 || (c < 68800
                  ? (c < 68736
                    ? (c >= 68608 && c <= 68680)
                    : c <= 68786)
                  : (c <= 68850 || (c >= 68864 && c <= 68899)))))))))
          : (c <= 69289 || (c < 70108
            ? (c < 69763
              ? (c < 69552
                ? (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69445)
                    : c <= 69505)))
                : (c <= 69572 || (c < 69745
                  ? (c < 69635
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69687)
                  : (c <= 69746 || c == 69749))))
              : (c <= 69807 || (c < 69968
                ? (c < 69956
                  ? (c < 69891
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69926)
                  : (c <= 69956 || c == 69959))
                : (c <= 70002 || (c < 70081
                  ? (c < 70019
                    ? c == 70006
                    : c <= 70066)
                  : (c <= 70084 || c == 70106))))))
            : (c <= 70108 || (c < 70415
              ? (c < 70282
                ? (c < 70272
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70187)
                  : (c <= 70278 || c == 70280))
                : (c <= 70285 || (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70366 || (c >= 70405 && c <= 70412)))))
              : (c <= 70416 || (c < 70461
                ? (c < 70450
                  ? (c < 70442
                    ? (c >= 70419 && c <= 70440)
                    : c <= 70448)
                  : (c <= 70451 || (c >= 70453 && c <= 70457)))
                : (c <= 70461 || (c < 70656
                  ? (c < 70493
                    ? c == 70480
                    : c <= 70497)
                  : (c <= 70708 || (c >= 70727 && c <= 70730)))))))))))))
      : (c <= 70753 || (c < 119966
        ? (c < 73063
          ? (c < 72096
            ? (c < 71488
              ? (c < 71168
                ? (c < 70855
                  ? (c < 70852
                    ? (c >= 70784 && c <= 70831)
                    : c <= 70853)
                  : (c <= 70855 || (c < 71128
                    ? (c >= 71040 && c <= 71086)
                    : c <= 71131)))
                : (c <= 71215 || (c < 71352
                  ? (c < 71296
                    ? c == 71236
                    : c <= 71338)
                  : (c <= 71352 || (c >= 71424 && c <= 71450)))))
              : (c <= 71494 || (c < 71948
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71723)
                    : c <= 71903)
                  : (c <= 71942 || c == 71945))
                : (c <= 71955 || (c < 71999
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71983)
                  : (c <= 71999 || c == 72001))))))
            : (c <= 72103 || (c < 72368
              ? (c < 72203
                ? (c < 72163
                  ? (c < 72161
                    ? (c >= 72106 && c <= 72144)
                    : c <= 72161)
                  : (c <= 72163 || c == 72192))
                : (c <= 72242 || (c < 72284
                  ? (c < 72272
                    ? c == 72250
                    : c <= 72272)
                  : (c <= 72329 || c == 72349))))
              : (c <= 72440 || (c < 72960
                ? (c < 72768
                  ? (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72750)
                  : (c <= 72768 || (c >= 72818 && c <= 72847)))
                : (c <= 72966 || (c < 73030
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73008)
                  : (c <= 73030 || (c >= 73056 && c <= 73061)))))))))
          : (c <= 73064 || (c < 94032
            ? (c < 92160
              ? (c < 74752
                ? (c < 73440
                  ? (c < 73112
                    ? (c >= 73066 && c <= 73097)
                    : c <= 73112)
                  : (c <= 73458 || (c < 73728
                    ? c == 73648
                    : c <= 74649)))
                : (c <= 74862 || (c < 77824
                  ? (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)
                  : (c <= 78894 || (c >= 82944 && c <= 83526)))))
              : (c <= 92728 || (c < 92992
                ? (c < 92880
                  ? (c < 92784
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92862)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))
                : (c <= 92995 || (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))))))
            : (c <= 94032 || (c < 110592
              ? (c < 100352
                ? (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))
                : (c <= 101589 || (c < 110581
                  ? (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)
                  : (c <= 110587 || (c >= 110589 && c <= 110590)))))
              : (c <= 110882 || (c < 113776
                ? (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c >= 113664 && c <= 113770)))
                : (c <= 113788 || (c < 119808
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 126464
          ? (c < 120598
            ? (c < 120094
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c >= 120086 && c <= 120092)))))
              : (c <= 120121 || (c < 120146
                ? (c < 120134
                  ? (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)
                  : (c <= 120134 || (c >= 120138 && c <= 120144)))
                : (c <= 120485 || (c < 120540
                  ? (c < 120514
                    ? (c >= 120488 && c <= 120512)
                    : c <= 120538)
                  : (c <= 120570 || (c >= 120572 && c <= 120596)))))))
            : (c <= 120628 || (c < 123214
              ? (c < 120746
                ? (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c >= 120714 && c <= 120744)))
                : (c <= 120770 || (c < 123136
                  ? (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)
                  : (c <= 123180 || (c >= 123191 && c <= 123197)))))
              : (c <= 123214 || (c < 124909
                ? (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123565)
                    : c <= 123627)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || c == 126503))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_word_character_set_3(int32_t c) {
  return (c < 43739
    ? (c < 3804
      ? (c < 2768
        ? (c < 2160
          ? (c < 1369
            ? (c < 768
              ? (c < 216
                ? (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))
                : (c <= 246 || (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))))
              : (c <= 884 || (c < 910
                ? (c < 895
                  ? (c < 891
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c < 908
                    ? (c >= 902 && c <= 906)
                    : c <= 908)))
                : (c <= 929 || (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1159 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))))))
            : (c <= 1369 || (c < 1749
              ? (c < 1479
                ? (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)))
                : (c <= 1479 || (c < 1552
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1562 || (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)))))
              : (c <= 1756 || (c < 1984
                ? (c < 1791
                  ? (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)
                  : (c <= 1791 || (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)))
                : (c <= 2037 || (c < 2048
                  ? (c < 2045
                    ? c == 2042
                    : c <= 2045)
                  : (c <= 2093 || (c < 2144
                    ? (c >= 2112 && c <= 2139)
                    : c <= 2154)))))))))
          : (c <= 2183 || (c < 2579
            ? (c < 2492
              ? (c < 2437
                ? (c < 2275
                  ? (c < 2200
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2273)
                  : (c <= 2403 || (c < 2417
                    ? (c >= 2406 && c <= 2415)
                    : c <= 2435)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || (c < 2486
                    ? c == 2482
                    : c <= 2489)))))
              : (c <= 2500 || (c < 2534
                ? (c < 2519
                  ? (c < 2507
                    ? (c >= 2503 && c <= 2504)
                    : c <= 2510)
                  : (c <= 2519 || (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)))
                : (c <= 2545 || (c < 2561
                  ? (c < 2558
                    ? c == 2556
                    : c <= 2558)
                  : (c <= 2563 || (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)))))))
            : (c <= 2600 || (c < 2662
              ? (c < 2622
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)))
                : (c <= 2626 || (c < 2641
                  ? (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)
                  : (c <= 2641 || (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)))))
              : (c <= 2677 || (c < 2738
                ? (c < 2703
                  ? (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)
                  : (c <= 2705 || (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)))
                : (c <= 2739 || (c < 2759
                  ? (c < 2748
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2757)
                  : (c <= 2761 || (c >= 2763 && c <= 2765)))))))))))
        : (c <= 2768 || (c < 3205
          ? (c < 2972
            ? (c < 2887
              ? (c < 2831
                ? (c < 2809
                  ? (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)
                  : (c <= 2815 || (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)))
                : (c <= 2832 || (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)))))
              : (c <= 2888 || (c < 2929
                ? (c < 2908
                  ? (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)
                  : (c <= 2909 || (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)))
                : (c <= 2929 || (c < 2958
                  ? (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)
                  : (c <= 2960 || (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)))))))
            : (c <= 2972 || (c < 3086
              ? (c < 3014
                ? (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)))
                : (c <= 3016 || (c < 3031
                  ? (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)
                  : (c <= 3031 || (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)))))
              : (c <= 3088 || (c < 3157
                ? (c < 3132
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3140 || (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)))
                : (c <= 3158 || (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3171 || (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)))))))))
          : (c <= 3212 || (c < 3482
            ? (c < 3313
              ? (c < 3270
                ? (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)))
                : (c <= 3272 || (c < 3293
                  ? (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)
                  : (c <= 3294 || (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)))))
              : (c <= 3314 || (c < 3412
                ? (c < 3346
                  ? (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3396 || (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)))
                : (c <= 3415 || (c < 3450
                  ? (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)
                  : (c <= 3455 || (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)))))))
            : (c <= 3505 || (c < 3664
              ? (c < 3542
                ? (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c < 3535
                    ? c == 3530
                    : c <= 3540)))
                : (c <= 3542 || (c < 3570
                  ? (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)
                  : (c <= 3571 || (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)))))
              : (c <= 3673 || (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c >= 3792 && c <= 3801)))))))))))))
      : (c <= 3807 || (c < 8029
        ? (c < 5984
          ? (c < 4704
            ? (c < 4038
              ? (c < 3897
                ? (c < 3872
                  ? (c < 3864
                    ? c == 3840
                    : c <= 3865)
                  : (c <= 3881 || (c < 3895
                    ? c == 3893
                    : c <= 3895)))
                : (c <= 3897 || (c < 3953
                  ? (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)
                  : (c <= 3972 || (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)))))
              : (c <= 4038 || (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))))
            : (c <= 4744 || (c < 4969
              ? (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)))))
              : (c <= 4977 || (c < 5761
                ? (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)))
                : (c <= 5786 || (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5909 || (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)))))))))
          : (c <= 5996 || (c < 6800
            ? (c < 6400
              ? (c < 6112
                ? (c < 6016
                  ? (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)
                  : (c <= 6099 || (c < 6108
                    ? c == 6103
                    : c <= 6109)))
                : (c <= 6121 || (c < 6176
                  ? (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)
                  : (c <= 6264 || (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)))))
              : (c <= 6430 || (c < 6576
                ? (c < 6470
                  ? (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)
                  : (c <= 6509 || (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)))
                : (c <= 6601 || (c < 6688
                  ? (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)
                  : (c <= 6750 || (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)))))))
            : (c <= 6809 || (c < 7312
              ? (c < 7019
                ? (c < 6847
                  ? (c < 6832
                    ? c == 6823
                    : c <= 6845)
                  : (c <= 6862 || (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)))
                : (c <= 7027 || (c < 7232
                  ? (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)
                  : (c <= 7241 || (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)))))
              : (c <= 7354 || (c < 7968
                ? (c < 7380
                  ? (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)
                  : (c <= 7418 || (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)))
                : (c <= 8005 || (c < 8025
                  ? (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)
                  : (c <= 8025 || c == 8027))))))))))
        : (c <= 8029 || (c < 11736
          ? (c < 8472
            ? (c < 8255
              ? (c < 8134
                ? (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || (c < 8130
                    ? c == 8126
                    : c <= 8132)))
                : (c <= 8140 || (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))))
              : (c <= 8256 || (c < 8417
                ? (c < 8319
                  ? (c < 8305
                    ? c == 8276
                    : c <= 8305)
                  : (c <= 8319 || (c < 8400
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8412)))
                : (c <= 8417 || (c < 8455
                  ? (c < 8450
                    ? (c >= 8421 && c <= 8432)
                    : c <= 8450)
                  : (c <= 8455 || (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)))))))
            : (c <= 8477 || (c < 11559
              ? (c < 8517
                ? (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)))
                : (c <= 8521 || (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c < 11520
                    ? (c >= 11499 && c <= 11507)
                    : c <= 11557)))))
              : (c <= 11559 || (c < 11688
                ? (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11647 && c <= 11670)
                    : c <= 11686)))
                : (c <= 11694 || (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)))))))))
          : (c <= 11742 || (c < 42786
            ? (c < 12593
              ? (c < 12353
                ? (c < 12321
                  ? (c < 12293
                    ? (c >= 11744 && c <= 11775)
                    : c <= 12295)
                  : (c <= 12335 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))
                : (c <= 12438 || (c < 12449
                  ? (c < 12445
                    ? (c >= 12441 && c <= 12442)
                    : c <= 12447)
                  : (c <= 12538 || (c < 12549
                    ? (c >= 12540 && c <= 12543)
                    : c <= 12591)))))
              : (c <= 12686 || (c < 42240
                ? (c < 13312
                  ? (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)
                  : (c <= 19903 || (c < 42192
                    ? (c >= 19968 && c <= 42124)
                    : c <= 42237)))
                : (c <= 42508 || (c < 42612
                  ? (c < 42560
                    ? (c >= 42512 && c <= 42539)
                    : c <= 42607)
                  : (c <= 42621 || (c < 42775
                    ? (c >= 42623 && c <= 42737)
                    : c <= 42783)))))))
            : (c <= 42888 || (c < 43261
              ? (c < 43052
                ? (c < 42963
                  ? (c < 42960
                    ? (c >= 42891 && c <= 42954)
                    : c <= 42961)
                  : (c <= 42963 || (c < 42994
                    ? (c >= 42965 && c <= 42969)
                    : c <= 43047)))
                : (c <= 43052 || (c < 43216
                  ? (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)
                  : (c <= 43225 || (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)))))
              : (c <= 43309 || (c < 43520
                ? (c < 43392
                  ? (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)
                  : (c <= 43456 || (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)))
                : (c <= 43574 || (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c >= 43642 && c <= 43714)))))))))))))))
    : (c <= 43741 || (c < 71472
      ? (c < 67644
        ? (c < 65474
          ? (c < 64320
            ? (c < 44016
              ? (c < 43808
                ? (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43759)
                    : c <= 43766)
                  : (c <= 43782 || (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)))
                : (c <= 43814 || (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)))))
              : (c <= 44025 || (c < 64256
                ? (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)))
                : (c <= 64262 || (c < 64298
                  ? (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)
                  : (c <= 64310 || (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)))))))
            : (c <= 64321 || (c < 65137
              ? (c < 64914
                ? (c < 64467
                  ? (c < 64326
                    ? (c >= 64323 && c <= 64324)
                    : c <= 64433)
                  : (c <= 64605 || (c < 64848
                    ? (c >= 64612 && c <= 64829)
                    : c <= 64911)))
                : (c <= 64967 || (c < 65056
                  ? (c < 65024
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65039)
                  : (c <= 65071 || (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)))))
              : (c <= 65137 || (c < 65151
                ? (c < 65145
                  ? (c < 65143
                    ? c == 65139
                    : c <= 65143)
                  : (c <= 65145 || (c < 65149
                    ? c == 65147
                    : c <= 65149)))
                : (c <= 65276 || (c < 65343
                  ? (c < 65313
                    ? (c >= 65296 && c <= 65305)
                    : c <= 65338)
                  : (c <= 65343 || (c < 65382
                    ? (c >= 65345 && c <= 65370)
                    : c <= 65470)))))))))
          : (c <= 65479 || (c < 66720
            ? (c < 66045
              ? (c < 65576
                ? (c < 65498
                  ? (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)
                  : (c <= 65500 || (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)))
                : (c <= 65594 || (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c < 65856
                    ? (c >= 65664 && c <= 65786)
                    : c <= 65908)))))
              : (c <= 66045 || (c < 66384
                ? (c < 66272
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66272 || (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)))
                : (c <= 66426 || (c < 66504
                  ? (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)
                  : (c <= 66511 || (c < 66560
                    ? (c >= 66513 && c <= 66517)
                    : c <= 66717)))))))
            : (c <= 66729 || (c < 67003
              ? (c < 66940
                ? (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : c <= 66938)))
                : (c <= 66954 || (c < 66967
                  ? (c < 66964
                    ? (c >= 66956 && c <= 66962)
                    : c <= 66965)
                  : (c <= 66977 || (c < 66995
                    ? (c >= 66979 && c <= 66993)
                    : c <= 67001)))))
              : (c <= 67004 || (c < 67506
                ? (c < 67424
                  ? (c < 67392
                    ? (c >= 67072 && c <= 67382)
                    : c <= 67413)
                  : (c <= 67431 || (c < 67463
                    ? (c >= 67456 && c <= 67461)
                    : c <= 67504)))
                : (c <= 67514 || (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))))))))))
        : (c <= 67644 || (c < 69968
          ? (c < 68480
            ? (c < 68108
              ? (c < 67840
                ? (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))
                : (c <= 67861 || (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))))
              : (c <= 68115 || (c < 68224
                ? (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || (c < 68192
                    ? c == 68159
                    : c <= 68220)))
                : (c <= 68252 || (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68326)
                  : (c <= 68405 || (c < 68448
                    ? (c >= 68416 && c <= 68437)
                    : c <= 68466)))))))
            : (c <= 68497 || (c < 69488
              ? (c < 69248
                ? (c < 68800
                  ? (c < 68736
                    ? (c >= 68608 && c <= 68680)
                    : c <= 68786)
                  : (c <= 68850 || (c < 68912
                    ? (c >= 68864 && c <= 68903)
                    : c <= 68921)))
                : (c <= 69289 || (c < 69376
                  ? (c < 69296
                    ? (c >= 69291 && c <= 69292)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69456)))))
              : (c <= 69509 || (c < 69826
                ? (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c < 69759
                    ? (c >= 69734 && c <= 69749)
                    : c <= 69818)))
                : (c <= 69826 || (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))))))))
          : (c <= 70003 || (c < 70471
            ? (c < 70287
              ? (c < 70144
                ? (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))
                : (c <= 70161 || (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))))
              : (c <= 70301 || (c < 70415
                ? (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c < 70405
                    ? (c >= 70400 && c <= 70403)
                    : c <= 70412)))
                : (c <= 70416 || (c < 70450
                  ? (c < 70442
                    ? (c >= 70419 && c <= 70440)
                    : c <= 70448)
                  : (c <= 70451 || (c < 70459
                    ? (c >= 70453 && c <= 70457)
                    : c <= 70468)))))))
            : (c <= 70472 || (c < 70864
              ? (c < 70512
                ? (c < 70487
                  ? (c < 70480
                    ? (c >= 70475 && c <= 70477)
                    : c <= 70480)
                  : (c <= 70487 || (c < 70502
                    ? (c >= 70493 && c <= 70499)
                    : c <= 70508)))
                : (c <= 70516 || (c < 70750
                  ? (c < 70736
                    ? (c >= 70656 && c <= 70730)
                    : c <= 70745)
                  : (c <= 70753 || (c < 70855
                    ? (c >= 70784 && c <= 70853)
                    : c <= 70855)))))
              : (c <= 70873 || (c < 71248
                ? (c < 71128
                  ? (c < 71096
                    ? (c >= 71040 && c <= 71093)
                    : c <= 71104)
                  : (c <= 71133 || (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)))
                : (c <= 71257 || (c < 71424
                  ? (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)
                  : (c <= 71450 || (c >= 71453 && c <= 71467)))))))))))))
      : (c <= 71481 || (c < 119973
        ? (c < 82944
          ? (c < 72784
            ? (c < 72096
              ? (c < 71948
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71738)
                  : (c <= 71913 || (c < 71945
                    ? (c >= 71935 && c <= 71942)
                    : c <= 71945)))
                : (c <= 71955 || (c < 71991
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71989)
                  : (c <= 71992 || (c < 72016
                    ? (c >= 71995 && c <= 72003)
                    : c <= 72025)))))
              : (c <= 72103 || (c < 72272
                ? (c < 72163
                  ? (c < 72154
                    ? (c >= 72106 && c <= 72151)
                    : c <= 72161)
                  : (c <= 72164 || (c < 72263
                    ? (c >= 72192 && c <= 72254)
                    : c <= 72263)))
                : (c <= 72345 || (c < 72704
                  ? (c < 72368
                    ? c == 72349
                    : c <= 72440)
                  : (c <= 72712 || (c < 72760
                    ? (c >= 72714 && c <= 72758)
                    : c <= 72768)))))))
            : (c <= 72793 || (c < 73063
              ? (c < 72971
                ? (c < 72873
                  ? (c < 72850
                    ? (c >= 72818 && c <= 72847)
                    : c <= 72871)
                  : (c <= 72886 || (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)))
                : (c <= 73014 || (c < 73023
                  ? (c < 73020
                    ? c == 73018
                    : c <= 73021)
                  : (c <= 73031 || (c < 73056
                    ? (c >= 73040 && c <= 73049)
                    : c <= 73061)))))
              : (c <= 73064 || (c < 73648
                ? (c < 73107
                  ? (c < 73104
                    ? (c >= 73066 && c <= 73102)
                    : c <= 73105)
                  : (c <= 73112 || (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)))
                : (c <= 73648 || (c < 74880
                  ? (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)
                  : (c <= 75075 || (c < 77824
                    ? (c >= 77712 && c <= 77808)
                    : c <= 78894)))))))))
          : (c <= 83526 || (c < 110581
            ? (c < 93053
              ? (c < 92880
                ? (c < 92768
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92777 || (c < 92864
                    ? (c >= 92784 && c <= 92862)
                    : c <= 92873)))
                : (c <= 92909 || (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))))
              : (c <= 93071 || (c < 94179
                ? (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c < 94176
                    ? (c >= 94095 && c <= 94111)
                    : c <= 94177)))
                : (c <= 94180 || (c < 100352
                  ? (c < 94208
                    ? (c >= 94192 && c <= 94193)
                    : c <= 100343)
                  : (c <= 101589 || (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)))))))
            : (c <= 110587 || (c < 118576
              ? (c < 113664
                ? (c < 110928
                  ? (c < 110592
                    ? (c >= 110589 && c <= 110590)
                    : c <= 110882)
                  : (c <= 110930 || (c < 110960
                    ? (c >= 110948 && c <= 110951)
                    : c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c < 118528
                    ? (c >= 113821 && c <= 113822)
                    : c <= 118573)))))
              : (c <= 118598 || (c < 119362
                ? (c < 119163
                  ? (c < 119149
                    ? (c >= 119141 && c <= 119145)
                    : c <= 119154)
                  : (c <= 119170 || (c < 119210
                    ? (c >= 119173 && c <= 119179)
                    : c <= 119213)))
                : (c <= 119364 || (c < 119966
                  ? (c < 119894
                    ? (c >= 119808 && c <= 119892)
                    : c <= 119964)
                  : (c <= 119967 || c == 119970))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_word_character_set_4(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(34);
      if (lookahead == ']') ADVANCE(13);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (sym_word_character_set_1(lookahead)) ADVANCE(39);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      if (sym_word_character_set_2(lookahead)) ADVANCE(39);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(36);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(16);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == ']') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(16);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == ']') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (sym_word_character_set_1(lookahead)) ADVANCE(39);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(35);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '=') ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == '^') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '[') ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_POUND_CARET_LBRACK);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACK);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(35);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(30);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '=') ADVANCE(28);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(29);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '<') ADVANCE(33);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      if (sym_word_character_set_3(lookahead)) ADVANCE(39);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_LT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_unit_literal);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_digits);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_word);
      if (sym_word_character_set_4(lookahead)) ADVANCE(39);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'c') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'l') ADVANCE(5);
      if (lookahead == 'p') ADVANCE(6);
      if (lookahead == 's') ADVANCE(7);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == 'u') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 'x') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == '3') ADVANCE(12);
      if (lookahead == '6') ADVANCE(13);
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == '1') ADVANCE(16);
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '6') ADVANCE(18);
      if (lookahead == '8') ADVANCE(19);
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 9:
      if (lookahead == '1') ADVANCE(26);
      if (lookahead == '3') ADVANCE(27);
      if (lookahead == '6') ADVANCE(28);
      if (lookahead == '8') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead == '2') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == '4') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 16:
      if (lookahead == '2') ADVANCE(37);
      if (lookahead == '6') ADVANCE(38);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(39);
      END_STATE();
    case 18:
      if (lookahead == '4') ADVANCE(40);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(44);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(47);
      if (lookahead == '6') ADVANCE(48);
      END_STATE();
    case 27:
      if (lookahead == '2') ADVANCE(49);
      END_STATE();
    case 28:
      if (lookahead == '4') ADVANCE(50);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 37:
      if (lookahead == '8') ADVANCE(56);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 41:
      if (lookahead == 'z') ADVANCE(57);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 43:
      if (lookahead == 'k') ADVANCE(58);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_pub);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == '8') ADVANCE(61);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 52:
      if (lookahead == 'z') ADVANCE(63);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_i128);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 62:
      if (lookahead == 'f') ADVANCE(70);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(73);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_super);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_unsafe);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 3},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 3},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 5},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 3},
  [216] = {.lex_state = 3},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 5},
  [219] = {.lex_state = 3},
  [220] = {.lex_state = 3},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 3},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 3},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 5},
  [227] = {.lex_state = 5},
  [228] = {.lex_state = 3},
  [229] = {.lex_state = 3},
  [230] = {.lex_state = 5},
  [231] = {.lex_state = 5},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 3},
  [235] = {.lex_state = 5},
  [236] = {.lex_state = 5},
  [237] = {.lex_state = 3},
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 3},
  [240] = {.lex_state = 5},
  [241] = {.lex_state = 3},
  [242] = {.lex_state = 5},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 3},
  [245] = {.lex_state = 3},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 5},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 3},
  [251] = {.lex_state = 3},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 5},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 3},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 5},
  [262] = {.lex_state = 3},
  [263] = {.lex_state = 5},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 5},
  [266] = {.lex_state = 5},
  [267] = {.lex_state = 3},
  [268] = {.lex_state = 3},
  [269] = {.lex_state = 5},
  [270] = {.lex_state = 5},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 3},
  [273] = {.lex_state = 5},
  [274] = {.lex_state = 5},
  [275] = {.lex_state = 3},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 1},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 5},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 5},
  [282] = {.lex_state = 5},
  [283] = {.lex_state = 5},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 5},
  [287] = {.lex_state = 5},
  [288] = {.lex_state = 3},
  [289] = {.lex_state = 5},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 3},
  [292] = {.lex_state = 3},
  [293] = {.lex_state = 5},
  [294] = {.lex_state = 5},
  [295] = {.lex_state = 3},
  [296] = {.lex_state = 5},
  [297] = {.lex_state = 3},
  [298] = {.lex_state = 5},
  [299] = {.lex_state = 3},
  [300] = {.lex_state = 5},
  [301] = {.lex_state = 5},
  [302] = {.lex_state = 5},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 5},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 5},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 3},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 3},
  [313] = {.lex_state = 5},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 5},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 3},
  [319] = {.lex_state = 5},
  [320] = {.lex_state = 5},
  [321] = {.lex_state = 5},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 5},
  [325] = {.lex_state = 3},
  [326] = {.lex_state = 5},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 3},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 5},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 3},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 5},
  [336] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [anon_sym_POUND_CARET_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_POUND_LBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_unsafe] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_pub] = ACTIONS(1),
    [anon_sym_super] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_COLON_COLON_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_unit_literal] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_u128] = ACTIONS(1),
    [anon_sym_usize] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_i128] = ACTIONS(1),
    [anon_sym_isize] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [sym_digits] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(334),
    [sym__item] = STATE(10),
    [sym__inner_attribute] = STATE(6),
    [sym__outer_attribute] = STATE(75),
    [sym_function] = STATE(10),
    [sym_function_modifier] = STATE(333),
    [sym_extern_block] = STATE(10),
    [sym_visibility_modifier] = STATE(167),
    [aux_sym_file_repeat1] = STATE(6),
    [aux_sym_file_repeat2] = STATE(10),
    [aux_sym_function_repeat1] = STATE(75),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND_CARET_LBRACK] = ACTIONS(5),
    [anon_sym_POUND_LBRACK] = ACTIONS(7),
    [anon_sym_fn] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_unsafe] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pub] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(17), 13,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_pub,
      anon_sym_GT,
    ACTIONS(21), 14,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_usize,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_f32,
      anon_sym_f64,
  [35] = 2,
    ACTIONS(23), 13,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_pub,
      anon_sym_GT,
    ACTIONS(25), 14,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_usize,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_f32,
      anon_sym_f64,
  [67] = 10,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(39), 1,
      sym_digits,
    STATE(285), 1,
      sym_let_binding,
    ACTIONS(35), 2,
      sym_unit_literal,
      sym_string_literal,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_statement,
      aux_sym_codeblock_repeat1,
    STATE(264), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [106] = 9,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(44), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(58), 1,
      sym_digits,
    ACTIONS(52), 2,
      sym_unit_literal,
      sym_string_literal,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_statement,
      aux_sym_codeblock_repeat1,
    STATE(285), 7,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym_let_binding,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [143] = 12,
    ACTIONS(5), 1,
      anon_sym_POUND_CARET_LBRACK,
    ACTIONS(7), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_extern,
    ACTIONS(15), 1,
      anon_sym_pub,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(167), 1,
      sym_visibility_modifier,
    STATE(333), 1,
      sym_function_modifier,
    ACTIONS(11), 2,
      anon_sym_const,
      anon_sym_unsafe,
    STATE(74), 2,
      sym__inner_attribute,
      aux_sym_file_repeat1,
    STATE(75), 2,
      sym__outer_attribute,
      aux_sym_function_repeat1,
    STATE(12), 4,
      sym__item,
      sym_function,
      sym_extern_block,
      aux_sym_file_repeat2,
  [186] = 10,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(285), 1,
      sym_let_binding,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(65), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(4), 2,
      sym_statement,
      aux_sym_codeblock_repeat1,
    STATE(246), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [225] = 9,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(71), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(165), 1,
      sym_path,
    ACTIONS(73), 2,
      sym_unit_literal,
      sym_string_literal,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(260), 5,
      sym_attr,
      sym__attr_data_value,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [259] = 9,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym_path_segment,
    STATE(165), 1,
      sym_path,
    ACTIONS(73), 2,
      sym_unit_literal,
      sym_string_literal,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(260), 5,
      sym_attr,
      sym__attr_data_value,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [293] = 10,
    ACTIONS(7), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_extern,
    ACTIONS(15), 1,
      anon_sym_pub,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(167), 1,
      sym_visibility_modifier,
    STATE(333), 1,
      sym_function_modifier,
    ACTIONS(11), 2,
      anon_sym_const,
      anon_sym_unsafe,
    STATE(75), 2,
      sym__outer_attribute,
      aux_sym_function_repeat1,
    STATE(13), 4,
      sym__item,
      sym_function,
      sym_extern_block,
      aux_sym_file_repeat2,
  [329] = 9,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym_path_segment,
    STATE(165), 1,
      sym_path,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(81), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(187), 5,
      sym_attr,
      sym__attr_data_value,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [363] = 10,
    ACTIONS(7), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_extern,
    ACTIONS(15), 1,
      anon_sym_pub,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    STATE(167), 1,
      sym_visibility_modifier,
    STATE(333), 1,
      sym_function_modifier,
    ACTIONS(11), 2,
      anon_sym_const,
      anon_sym_unsafe,
    STATE(75), 2,
      sym__outer_attribute,
      aux_sym_function_repeat1,
    STATE(13), 4,
      sym__item,
      sym_function,
      sym_extern_block,
      aux_sym_file_repeat2,
  [399] = 10,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(90), 1,
      anon_sym_fn,
    ACTIONS(96), 1,
      anon_sym_extern,
    ACTIONS(99), 1,
      anon_sym_pub,
    STATE(167), 1,
      sym_visibility_modifier,
    STATE(333), 1,
      sym_function_modifier,
    ACTIONS(93), 2,
      anon_sym_const,
      anon_sym_unsafe,
    STATE(75), 2,
      sym__outer_attribute,
      aux_sym_function_repeat1,
    STATE(13), 4,
      sym__item,
      sym_function,
      sym_extern_block,
      aux_sym_file_repeat2,
  [435] = 8,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(71), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(165), 1,
      sym_path,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(102), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(207), 5,
      sym_attr,
      sym__attr_data_value,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [466] = 7,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(104), 1,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(106), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(189), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [495] = 7,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(106), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(189), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [524] = 7,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(110), 1,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(106), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(189), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [553] = 7,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(106), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(189), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [582] = 8,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(71), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(165), 1,
      sym_path,
    ACTIONS(73), 2,
      sym_unit_literal,
      sym_string_literal,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(260), 5,
      sym_attr,
      sym__attr_data_value,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [613] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(114), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(121), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [639] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(106), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(189), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [665] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(116), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(93), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [691] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(118), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(126), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [717] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(120), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(123), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [743] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(122), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(103), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [769] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(124), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(91), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [795] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(126), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(99), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [821] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(106), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [847] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(130), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(116), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [873] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(108), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [899] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(134), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(100), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [925] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(136), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(120), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [951] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(138), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(97), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [977] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(140), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(122), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1003] = 1,
    ACTIONS(142), 13,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_pub,
      anon_sym_GT,
  [1019] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(144), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(210), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1045] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(146), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(132), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1071] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(148), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(128), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1097] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(150), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(117), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1123] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(152), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(95), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1149] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(154), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(107), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1175] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(156), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(112), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1201] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(158), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(101), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1227] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(160), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(133), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1253] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(162), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(119), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1279] = 1,
    ACTIONS(164), 13,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_pub,
      anon_sym_GT,
  [1295] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(166), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(115), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1321] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(168), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(271), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1347] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(170), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(92), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1373] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(172), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(124), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1399] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(174), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(134), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1425] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(176), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(125), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1451] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(178), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(135), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1477] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(180), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(201), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1503] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(182), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(131), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1529] = 1,
    ACTIONS(184), 13,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_pub,
      anon_sym_GT,
  [1545] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(186), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(98), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1571] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(188), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(94), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1597] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(127), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1623] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(102), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1649] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(104), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1675] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(196), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(129), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1701] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(198), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(105), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1727] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(200), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(138), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1753] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(202), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(137), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1779] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_digits,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(204), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(114), 6,
      sym__expr,
      sym_codeblock,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1805] = 1,
    ACTIONS(206), 12,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_pub,
      anon_sym_GT,
  [1820] = 1,
    ACTIONS(208), 12,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_pub,
      anon_sym_GT,
  [1835] = 1,
    ACTIONS(210), 12,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_pub,
      anon_sym_GT,
  [1850] = 1,
    ACTIONS(212), 12,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_pub,
      anon_sym_GT,
  [1865] = 1,
    ACTIONS(214), 12,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_pub,
      anon_sym_GT,
  [1880] = 1,
    ACTIONS(216), 12,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_pub,
      anon_sym_GT,
  [1895] = 1,
    ACTIONS(218), 12,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_pub,
      anon_sym_GT,
  [1910] = 3,
    ACTIONS(222), 1,
      anon_sym_POUND_CARET_LBRACK,
    STATE(74), 2,
      sym__inner_attribute,
      aux_sym_file_repeat1,
    ACTIONS(220), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1927] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(15), 1,
      anon_sym_pub,
    ACTIONS(225), 1,
      anon_sym_fn,
    ACTIONS(227), 1,
      anon_sym_extern,
    STATE(143), 1,
      sym_visibility_modifier,
    STATE(323), 1,
      sym_function_modifier,
    ACTIONS(11), 2,
      anon_sym_const,
      anon_sym_unsafe,
    STATE(88), 2,
      sym__outer_attribute,
      aux_sym_function_repeat1,
  [1954] = 4,
    ACTIONS(233), 1,
      anon_sym_COLON_COLON_LT,
    STATE(86), 1,
      sym_generic_params,
    ACTIONS(231), 2,
      anon_sym_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(229), 6,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1973] = 2,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_let,
      sym_unit_literal,
      sym_string_literal,
      anon_sym_true,
      anon_sym_false,
      sym_digits,
  [1987] = 4,
    ACTIONS(241), 1,
      anon_sym_COLON,
    ACTIONS(243), 1,
      anon_sym_COLON_COLON,
    STATE(82), 1,
      aux_sym_path_repeat1,
    ACTIONS(239), 6,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [2005] = 4,
    ACTIONS(243), 1,
      anon_sym_COLON_COLON,
    ACTIONS(247), 1,
      anon_sym_COLON,
    STATE(80), 1,
      aux_sym_path_repeat1,
    ACTIONS(245), 6,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [2023] = 4,
    ACTIONS(243), 1,
      anon_sym_COLON_COLON,
    ACTIONS(251), 1,
      anon_sym_COLON,
    STATE(82), 1,
      aux_sym_path_repeat1,
    ACTIONS(249), 6,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [2041] = 4,
    ACTIONS(243), 1,
      anon_sym_COLON_COLON,
    ACTIONS(251), 1,
      anon_sym_COLON,
    STATE(78), 1,
      aux_sym_path_repeat1,
    ACTIONS(249), 6,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [2059] = 4,
    ACTIONS(255), 1,
      anon_sym_COLON,
    ACTIONS(257), 1,
      anon_sym_COLON_COLON,
    STATE(82), 1,
      aux_sym_path_repeat1,
    ACTIONS(253), 6,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [2077] = 2,
    ACTIONS(262), 1,
      anon_sym_COLON,
    ACTIONS(260), 7,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
  [2090] = 2,
    ACTIONS(266), 1,
      anon_sym_COLON,
    ACTIONS(264), 7,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
  [2103] = 1,
    ACTIONS(268), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_CARET_LBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2114] = 2,
    ACTIONS(272), 1,
      anon_sym_COLON,
    ACTIONS(270), 7,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
  [2127] = 2,
    ACTIONS(276), 1,
      anon_sym_COLON,
    ACTIONS(274), 7,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
  [2140] = 3,
    ACTIONS(278), 1,
      anon_sym_POUND_LBRACK,
    STATE(88), 2,
      sym__outer_attribute,
      aux_sym_function_repeat1,
    ACTIONS(281), 5,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2155] = 2,
    ACTIONS(255), 1,
      anon_sym_COLON,
    ACTIONS(253), 7,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
  [2168] = 6,
    ACTIONS(15), 1,
      anon_sym_pub,
    ACTIONS(283), 1,
      anon_sym_fn,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    STATE(315), 1,
      sym_visibility_modifier,
    STATE(317), 1,
      sym_extern_function,
    STATE(111), 2,
      sym__extern_item,
      aux_sym_extern_block_repeat1,
  [2188] = 1,
    ACTIONS(287), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2198] = 1,
    ACTIONS(289), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2208] = 1,
    ACTIONS(291), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2218] = 1,
    ACTIONS(293), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2228] = 1,
    ACTIONS(295), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2238] = 1,
    ACTIONS(297), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2248] = 1,
    ACTIONS(299), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2258] = 1,
    ACTIONS(301), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2268] = 1,
    ACTIONS(303), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2278] = 1,
    ACTIONS(305), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2288] = 1,
    ACTIONS(307), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2298] = 1,
    ACTIONS(309), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2308] = 1,
    ACTIONS(311), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2318] = 1,
    ACTIONS(313), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2328] = 1,
    ACTIONS(315), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2338] = 1,
    ACTIONS(317), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2348] = 1,
    ACTIONS(319), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2358] = 1,
    ACTIONS(321), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2368] = 6,
    ACTIONS(15), 1,
      anon_sym_pub,
    ACTIONS(283), 1,
      anon_sym_fn,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    STATE(315), 1,
      sym_visibility_modifier,
    STATE(317), 1,
      sym_extern_function,
    STATE(111), 2,
      sym__extern_item,
      aux_sym_extern_block_repeat1,
  [2388] = 1,
    ACTIONS(325), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2398] = 6,
    ACTIONS(327), 1,
      anon_sym_fn,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
    ACTIONS(332), 1,
      anon_sym_pub,
    STATE(315), 1,
      sym_visibility_modifier,
    STATE(317), 1,
      sym_extern_function,
    STATE(111), 2,
      sym__extern_item,
      aux_sym_extern_block_repeat1,
  [2418] = 1,
    ACTIONS(335), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2428] = 1,
    ACTIONS(337), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2438] = 1,
    ACTIONS(339), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2448] = 1,
    ACTIONS(341), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2458] = 1,
    ACTIONS(343), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2468] = 1,
    ACTIONS(345), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2478] = 6,
    ACTIONS(15), 1,
      anon_sym_pub,
    ACTIONS(283), 1,
      anon_sym_fn,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    STATE(315), 1,
      sym_visibility_modifier,
    STATE(317), 1,
      sym_extern_function,
    STATE(90), 2,
      sym__extern_item,
      aux_sym_extern_block_repeat1,
  [2498] = 1,
    ACTIONS(349), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2508] = 1,
    ACTIONS(351), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2518] = 1,
    ACTIONS(353), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2528] = 1,
    ACTIONS(355), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2538] = 1,
    ACTIONS(357), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2548] = 1,
    ACTIONS(359), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2558] = 1,
    ACTIONS(361), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2568] = 1,
    ACTIONS(363), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2578] = 1,
    ACTIONS(365), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2588] = 1,
    ACTIONS(367), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2598] = 1,
    ACTIONS(369), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2608] = 1,
    ACTIONS(371), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2618] = 1,
    ACTIONS(373), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2628] = 1,
    ACTIONS(375), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2638] = 1,
    ACTIONS(377), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2648] = 1,
    ACTIONS(379), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2658] = 1,
    ACTIONS(381), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2668] = 6,
    ACTIONS(15), 1,
      anon_sym_pub,
    ACTIONS(283), 1,
      anon_sym_fn,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
    STATE(315), 1,
      sym_visibility_modifier,
    STATE(317), 1,
      sym_extern_function,
    STATE(109), 2,
      sym__extern_item,
      aux_sym_extern_block_repeat1,
  [2688] = 1,
    ACTIONS(385), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2698] = 1,
    ACTIONS(387), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2708] = 1,
    ACTIONS(389), 6,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2717] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(320), 1,
      sym_type,
  [2733] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(186), 1,
      sym_type,
  [2749] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(330), 1,
      sym_type,
  [2765] = 4,
    ACTIONS(227), 1,
      anon_sym_extern,
    ACTIONS(393), 1,
      anon_sym_fn,
    STATE(309), 1,
      sym_function_modifier,
    ACTIONS(11), 2,
      anon_sym_const,
      anon_sym_unsafe,
  [2779] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(274), 1,
      sym_type,
  [2795] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(308), 1,
      sym_type,
  [2811] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(335), 1,
      sym_type,
  [2827] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(276), 1,
      sym_type,
  [2843] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(205), 1,
      sym_type,
  [2859] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(302), 1,
      sym_type,
  [2875] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(281), 1,
      sym_type,
  [2891] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(278), 1,
      sym_type,
  [2907] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(280), 1,
      sym_type,
  [2923] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(279), 1,
      sym_type,
  [2939] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(192), 1,
      sym_type,
  [2955] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(321), 1,
      sym_type,
  [2971] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(283), 1,
      sym_type,
  [2987] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(282), 1,
      sym_type,
  [3003] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(286), 1,
      sym_type,
  [3019] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(316), 1,
      sym_type,
  [3035] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(290), 1,
      sym_type,
  [3051] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(289), 1,
      sym_type,
  [3067] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(196), 1,
      sym_type,
  [3083] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(322), 1,
      sym_type,
  [3099] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(304), 1,
      sym_type,
  [3115] = 3,
    ACTIONS(397), 1,
      anon_sym_EQ,
    ACTIONS(399), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3127] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(217), 1,
      sym_type,
  [3143] = 4,
    ACTIONS(225), 1,
      anon_sym_fn,
    ACTIONS(227), 1,
      anon_sym_extern,
    STATE(323), 1,
      sym_function_modifier,
    ACTIONS(11), 2,
      anon_sym_const,
      anon_sym_unsafe,
  [3157] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(313), 1,
      sym_type,
  [3173] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(327), 1,
      sym_type,
  [3189] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(200), 1,
      sym_type,
  [3205] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(294), 1,
      sym_type,
  [3221] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(303), 1,
      sym_type,
  [3237] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(306), 1,
      sym_type,
  [3253] = 2,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 4,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
  [3263] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(296), 1,
      sym_type,
  [3279] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(298), 1,
      sym_type,
  [3295] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(305), 1,
      sym_type,
  [3311] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(165), 1,
      sym_path,
    STATE(331), 1,
      sym_attr,
  [3327] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(326), 1,
      sym_type,
  [3343] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(208), 1,
      sym_type,
  [3359] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(165), 1,
      sym_path,
    STATE(329), 1,
      sym_attr,
  [3375] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(79), 1,
      sym_path_segment,
    STATE(185), 1,
      sym_path,
    STATE(324), 1,
      sym_type,
  [3391] = 1,
    ACTIONS(405), 4,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
  [3398] = 3,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_tuple_expression_repeat1,
    ACTIONS(410), 2,
      anon_sym_RPAREN,
      anon_sym_GT,
  [3409] = 1,
    ACTIONS(412), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
  [3416] = 3,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      aux_sym_function_repeat2,
  [3426] = 3,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    STATE(194), 1,
      aux_sym_attr_repeat1,
  [3436] = 3,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    ACTIONS(422), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_tuple_expression_repeat1,
  [3446] = 1,
    ACTIONS(410), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [3452] = 3,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      aux_sym_function_repeat2,
  [3462] = 3,
    ACTIONS(428), 1,
      anon_sym_fn,
    ACTIONS(430), 1,
      anon_sym_LBRACE,
    ACTIONS(432), 1,
      sym_string_literal,
  [3472] = 3,
    ACTIONS(434), 1,
      anon_sym_COMMA,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    STATE(206), 1,
      aux_sym_function_repeat2,
  [3482] = 1,
    ACTIONS(438), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3488] = 3,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(440), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      aux_sym_attr_repeat1,
  [3498] = 3,
    ACTIONS(442), 1,
      anon_sym_COMMA,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
    STATE(195), 1,
      aux_sym_attr_repeat1,
  [3508] = 3,
    ACTIONS(447), 1,
      anon_sym_COMMA,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    STATE(204), 1,
      aux_sym_function_repeat2,
  [3518] = 1,
    ACTIONS(451), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3524] = 3,
    ACTIONS(453), 1,
      anon_sym_COMMA,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      aux_sym_function_repeat2,
  [3534] = 3,
    ACTIONS(104), 1,
      anon_sym_GT,
    ACTIONS(457), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_tuple_expression_repeat1,
  [3544] = 3,
    ACTIONS(459), 1,
      anon_sym_COMMA,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
    STATE(213), 1,
      aux_sym_function_repeat2,
  [3554] = 3,
    ACTIONS(463), 1,
      anon_sym_COMMA,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    STATE(188), 1,
      aux_sym_tuple_expression_repeat1,
  [3564] = 1,
    ACTIONS(467), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [3570] = 3,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      aux_sym_function_repeat2,
  [3580] = 3,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      aux_sym_function_repeat2,
  [3590] = 3,
    ACTIONS(477), 1,
      anon_sym_COMMA,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
    STATE(190), 1,
      aux_sym_function_repeat2,
  [3600] = 3,
    ACTIONS(481), 1,
      anon_sym_COMMA,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      aux_sym_function_repeat2,
  [3610] = 1,
    ACTIONS(485), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3616] = 3,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(489), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      aux_sym_function_repeat2,
  [3626] = 1,
    ACTIONS(491), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3632] = 3,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      anon_sym_GT,
    STATE(199), 1,
      aux_sym_tuple_expression_repeat1,
  [3642] = 1,
    ACTIONS(497), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3648] = 3,
    ACTIONS(499), 1,
      anon_sym_COMMA,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      aux_sym_function_repeat2,
  [3658] = 3,
    ACTIONS(504), 1,
      anon_sym_COMMA,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      aux_sym_function_repeat2,
  [3668] = 2,
    ACTIONS(508), 1,
      anon_sym_COLON,
    ACTIONS(510), 1,
      anon_sym_DASH_GT,
  [3675] = 2,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
    ACTIONS(514), 1,
      sym_identifier,
  [3682] = 2,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(89), 1,
      sym_path_segment,
  [3689] = 1,
    ACTIONS(516), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3694] = 2,
    ACTIONS(518), 1,
      anon_sym_COLON,
    ACTIONS(520), 1,
      anon_sym_DASH_GT,
  [3701] = 2,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    ACTIONS(524), 1,
      sym_identifier,
  [3708] = 2,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
    ACTIONS(528), 1,
      sym_identifier,
  [3715] = 2,
    ACTIONS(530), 1,
      anon_sym_DASH_GT,
    ACTIONS(532), 1,
      anon_sym_SEMI,
  [3722] = 2,
    ACTIONS(524), 1,
      sym_identifier,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
  [3729] = 2,
    ACTIONS(536), 1,
      anon_sym_DASH_GT,
    ACTIONS(538), 1,
      anon_sym_SEMI,
  [3736] = 2,
    ACTIONS(524), 1,
      sym_identifier,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
  [3743] = 2,
    ACTIONS(542), 1,
      anon_sym_DASH_GT,
    ACTIONS(544), 1,
      anon_sym_SEMI,
  [3750] = 2,
    ACTIONS(546), 1,
      anon_sym_COLON,
    ACTIONS(548), 1,
      anon_sym_DASH_GT,
  [3757] = 2,
    ACTIONS(550), 1,
      anon_sym_COLON,
    ACTIONS(552), 1,
      anon_sym_DASH_GT,
  [3764] = 2,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
    ACTIONS(556), 1,
      sym_identifier,
  [3771] = 2,
    ACTIONS(524), 1,
      sym_identifier,
    ACTIONS(558), 1,
      anon_sym_RPAREN,
  [3778] = 2,
    ACTIONS(560), 1,
      anon_sym_COLON,
    ACTIONS(562), 1,
      anon_sym_DASH_GT,
  [3785] = 2,
    ACTIONS(564), 1,
      anon_sym_COLON,
    ACTIONS(566), 1,
      anon_sym_DASH_GT,
  [3792] = 2,
    ACTIONS(568), 1,
      anon_sym_COLON,
    ACTIONS(570), 1,
      anon_sym_DASH_GT,
  [3799] = 2,
    ACTIONS(572), 1,
      anon_sym_DASH_GT,
    ACTIONS(574), 1,
      anon_sym_SEMI,
  [3806] = 2,
    ACTIONS(524), 1,
      sym_identifier,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
  [3813] = 2,
    ACTIONS(578), 1,
      anon_sym_COLON,
    ACTIONS(580), 1,
      anon_sym_DASH_GT,
  [3820] = 2,
    ACTIONS(582), 1,
      anon_sym_COLON,
    ACTIONS(584), 1,
      anon_sym_DASH_GT,
  [3827] = 2,
    ACTIONS(524), 1,
      sym_identifier,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
  [3834] = 2,
    ACTIONS(588), 1,
      anon_sym_COLON,
    ACTIONS(590), 1,
      anon_sym_DASH_GT,
  [3841] = 2,
    ACTIONS(524), 1,
      sym_identifier,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
  [3848] = 2,
    ACTIONS(594), 1,
      anon_sym_COLON,
    ACTIONS(596), 1,
      anon_sym_DASH_GT,
  [3855] = 2,
    ACTIONS(524), 1,
      sym_identifier,
    ACTIONS(598), 1,
      anon_sym_RPAREN,
  [3862] = 2,
    ACTIONS(600), 1,
      anon_sym_COLON,
    ACTIONS(602), 1,
      anon_sym_DASH_GT,
  [3869] = 2,
    ACTIONS(428), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      sym_string_literal,
  [3876] = 2,
    ACTIONS(606), 1,
      anon_sym_RPAREN,
    ACTIONS(608), 1,
      sym_identifier,
  [3883] = 2,
    ACTIONS(524), 1,
      sym_identifier,
    ACTIONS(610), 1,
      anon_sym_RPAREN,
  [3890] = 2,
    ACTIONS(612), 1,
      anon_sym_RBRACE,
    ACTIONS(614), 1,
      anon_sym_SEMI,
  [3897] = 2,
    ACTIONS(616), 1,
      anon_sym_DASH_GT,
    ACTIONS(618), 1,
      anon_sym_SEMI,
  [3904] = 2,
    ACTIONS(620), 1,
      anon_sym_COLON,
    ACTIONS(622), 1,
      anon_sym_DASH_GT,
  [3911] = 2,
    ACTIONS(624), 1,
      anon_sym_DASH_GT,
    ACTIONS(626), 1,
      anon_sym_SEMI,
  [3918] = 2,
    ACTIONS(628), 1,
      anon_sym_RPAREN,
    ACTIONS(630), 1,
      sym_identifier,
  [3925] = 2,
    ACTIONS(524), 1,
      sym_identifier,
    ACTIONS(632), 1,
      anon_sym_RPAREN,
  [3932] = 2,
    ACTIONS(634), 1,
      anon_sym_DASH_GT,
    ACTIONS(636), 1,
      anon_sym_SEMI,
  [3939] = 2,
    ACTIONS(638), 1,
      anon_sym_COLON,
    ACTIONS(640), 1,
      anon_sym_DASH_GT,
  [3946] = 1,
    ACTIONS(642), 2,
      anon_sym_super,
      anon_sym_package,
  [3951] = 2,
    ACTIONS(644), 1,
      anon_sym_DASH_GT,
    ACTIONS(646), 1,
      anon_sym_SEMI,
  [3958] = 2,
    ACTIONS(648), 1,
      anon_sym_DASH_GT,
    ACTIONS(650), 1,
      anon_sym_SEMI,
  [3965] = 2,
    ACTIONS(652), 1,
      anon_sym_DASH_GT,
    ACTIONS(654), 1,
      anon_sym_SEMI,
  [3972] = 2,
    ACTIONS(524), 1,
      sym_identifier,
    ACTIONS(656), 1,
      anon_sym_RPAREN,
  [3979] = 2,
    ACTIONS(658), 1,
      anon_sym_fn,
    ACTIONS(660), 1,
      anon_sym_LBRACE,
  [3986] = 1,
    ACTIONS(445), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3991] = 2,
    ACTIONS(662), 1,
      anon_sym_COLON,
    ACTIONS(664), 1,
      anon_sym_DASH_GT,
  [3998] = 2,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(81), 1,
      sym_path_segment,
  [4005] = 2,
    ACTIONS(666), 1,
      anon_sym_COLON,
    ACTIONS(668), 1,
      anon_sym_DASH_GT,
  [4012] = 2,
    ACTIONS(614), 1,
      anon_sym_SEMI,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
  [4019] = 2,
    ACTIONS(672), 1,
      anon_sym_COLON,
    ACTIONS(674), 1,
      anon_sym_DASH_GT,
  [4026] = 2,
    ACTIONS(676), 1,
      anon_sym_COLON,
    ACTIONS(678), 1,
      anon_sym_DASH_GT,
  [4033] = 2,
    ACTIONS(680), 1,
      anon_sym_RPAREN,
    ACTIONS(682), 1,
      sym_identifier,
  [4040] = 2,
    ACTIONS(524), 1,
      sym_identifier,
    ACTIONS(684), 1,
      anon_sym_RPAREN,
  [4047] = 2,
    ACTIONS(686), 1,
      anon_sym_COLON,
    ACTIONS(688), 1,
      anon_sym_DASH_GT,
  [4054] = 2,
    ACTIONS(690), 1,
      anon_sym_COLON,
    ACTIONS(692), 1,
      anon_sym_DASH_GT,
  [4061] = 1,
    ACTIONS(694), 1,
      anon_sym_SEMI,
  [4065] = 1,
    ACTIONS(696), 1,
      anon_sym_LPAREN,
  [4069] = 1,
    ACTIONS(698), 1,
      anon_sym_COLON,
  [4073] = 1,
    ACTIONS(700), 1,
      anon_sym_COLON,
  [4077] = 1,
    ACTIONS(702), 1,
      anon_sym_LPAREN,
  [4081] = 1,
    ACTIONS(704), 1,
      anon_sym_SEMI,
  [4085] = 1,
    ACTIONS(706), 1,
      anon_sym_COLON_EQ,
  [4089] = 1,
    ACTIONS(708), 1,
      anon_sym_SEMI,
  [4093] = 1,
    ACTIONS(710), 1,
      anon_sym_COLON,
  [4097] = 1,
    ACTIONS(712), 1,
      anon_sym_SEMI,
  [4101] = 1,
    ACTIONS(714), 1,
      anon_sym_COLON,
  [4105] = 1,
    ACTIONS(716), 1,
      anon_sym_COLON,
  [4109] = 1,
    ACTIONS(718), 1,
      anon_sym_COLON,
  [4113] = 1,
    ACTIONS(720), 1,
      sym_digits,
  [4117] = 1,
    ACTIONS(614), 1,
      anon_sym_SEMI,
  [4121] = 1,
    ACTIONS(722), 1,
      anon_sym_COLON,
  [4125] = 1,
    ACTIONS(724), 1,
      anon_sym_COLON,
  [4129] = 1,
    ACTIONS(726), 1,
      sym_identifier,
  [4133] = 1,
    ACTIONS(728), 1,
      anon_sym_COLON,
  [4137] = 1,
    ACTIONS(730), 1,
      anon_sym_SEMI,
  [4141] = 1,
    ACTIONS(732), 1,
      sym_identifier,
  [4145] = 1,
    ACTIONS(734), 1,
      anon_sym_LPAREN,
  [4149] = 1,
    ACTIONS(736), 1,
      anon_sym_COLON,
  [4153] = 1,
    ACTIONS(738), 1,
      anon_sym_COLON,
  [4157] = 1,
    ACTIONS(740), 1,
      sym_identifier,
  [4161] = 1,
    ACTIONS(742), 1,
      anon_sym_COLON,
  [4165] = 1,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
  [4169] = 1,
    ACTIONS(746), 1,
      anon_sym_COLON,
  [4173] = 1,
    ACTIONS(748), 1,
      sym_identifier,
  [4177] = 1,
    ACTIONS(750), 1,
      anon_sym_COLON,
  [4181] = 1,
    ACTIONS(752), 1,
      anon_sym_COLON,
  [4185] = 1,
    ACTIONS(754), 1,
      anon_sym_COLON,
  [4189] = 1,
    ACTIONS(756), 1,
      anon_sym_SEMI,
  [4193] = 1,
    ACTIONS(758), 1,
      anon_sym_SEMI,
  [4197] = 1,
    ACTIONS(760), 1,
      anon_sym_COLON,
  [4201] = 1,
    ACTIONS(762), 1,
      anon_sym_SEMI,
  [4205] = 1,
    ACTIONS(764), 1,
      anon_sym_COLON,
  [4209] = 1,
    ACTIONS(766), 1,
      anon_sym_SEMI,
  [4213] = 1,
    ACTIONS(768), 1,
      anon_sym_fn,
  [4217] = 1,
    ACTIONS(770), 1,
      sym_identifier,
  [4221] = 1,
    ACTIONS(658), 1,
      anon_sym_fn,
  [4225] = 1,
    ACTIONS(772), 1,
      anon_sym_LPAREN,
  [4229] = 1,
    ACTIONS(774), 1,
      anon_sym_COLON,
  [4233] = 1,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
  [4237] = 1,
    ACTIONS(778), 1,
      anon_sym_fn,
  [4241] = 1,
    ACTIONS(780), 1,
      anon_sym_COLON,
  [4245] = 1,
    ACTIONS(782), 1,
      anon_sym_SEMI,
  [4249] = 1,
    ACTIONS(784), 1,
      sym_identifier,
  [4253] = 1,
    ACTIONS(786), 1,
      anon_sym_COLON,
  [4257] = 1,
    ACTIONS(788), 1,
      anon_sym_COLON,
  [4261] = 1,
    ACTIONS(790), 1,
      anon_sym_COLON,
  [4265] = 1,
    ACTIONS(792), 1,
      anon_sym_SEMI,
  [4269] = 1,
    ACTIONS(393), 1,
      anon_sym_fn,
  [4273] = 1,
    ACTIONS(794), 1,
      anon_sym_COLON,
  [4277] = 1,
    ACTIONS(796), 1,
      sym_identifier,
  [4281] = 1,
    ACTIONS(798), 1,
      anon_sym_COLON,
  [4285] = 1,
    ACTIONS(800), 1,
      anon_sym_SEMI,
  [4289] = 1,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
  [4293] = 1,
    ACTIONS(804), 1,
      anon_sym_RBRACK,
  [4297] = 1,
    ACTIONS(806), 1,
      anon_sym_COLON,
  [4301] = 1,
    ACTIONS(808), 1,
      anon_sym_RBRACK,
  [4305] = 1,
    ACTIONS(524), 1,
      sym_identifier,
  [4309] = 1,
    ACTIONS(225), 1,
      anon_sym_fn,
  [4313] = 1,
    ACTIONS(810), 1,
      ts_builtin_sym_end,
  [4317] = 1,
    ACTIONS(812), 1,
      anon_sym_COLON,
  [4321] = 1,
    ACTIONS(428), 1,
      anon_sym_fn,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 67,
  [SMALL_STATE(5)] = 106,
  [SMALL_STATE(6)] = 143,
  [SMALL_STATE(7)] = 186,
  [SMALL_STATE(8)] = 225,
  [SMALL_STATE(9)] = 259,
  [SMALL_STATE(10)] = 293,
  [SMALL_STATE(11)] = 329,
  [SMALL_STATE(12)] = 363,
  [SMALL_STATE(13)] = 399,
  [SMALL_STATE(14)] = 435,
  [SMALL_STATE(15)] = 466,
  [SMALL_STATE(16)] = 495,
  [SMALL_STATE(17)] = 524,
  [SMALL_STATE(18)] = 553,
  [SMALL_STATE(19)] = 582,
  [SMALL_STATE(20)] = 613,
  [SMALL_STATE(21)] = 639,
  [SMALL_STATE(22)] = 665,
  [SMALL_STATE(23)] = 691,
  [SMALL_STATE(24)] = 717,
  [SMALL_STATE(25)] = 743,
  [SMALL_STATE(26)] = 769,
  [SMALL_STATE(27)] = 795,
  [SMALL_STATE(28)] = 821,
  [SMALL_STATE(29)] = 847,
  [SMALL_STATE(30)] = 873,
  [SMALL_STATE(31)] = 899,
  [SMALL_STATE(32)] = 925,
  [SMALL_STATE(33)] = 951,
  [SMALL_STATE(34)] = 977,
  [SMALL_STATE(35)] = 1003,
  [SMALL_STATE(36)] = 1019,
  [SMALL_STATE(37)] = 1045,
  [SMALL_STATE(38)] = 1071,
  [SMALL_STATE(39)] = 1097,
  [SMALL_STATE(40)] = 1123,
  [SMALL_STATE(41)] = 1149,
  [SMALL_STATE(42)] = 1175,
  [SMALL_STATE(43)] = 1201,
  [SMALL_STATE(44)] = 1227,
  [SMALL_STATE(45)] = 1253,
  [SMALL_STATE(46)] = 1279,
  [SMALL_STATE(47)] = 1295,
  [SMALL_STATE(48)] = 1321,
  [SMALL_STATE(49)] = 1347,
  [SMALL_STATE(50)] = 1373,
  [SMALL_STATE(51)] = 1399,
  [SMALL_STATE(52)] = 1425,
  [SMALL_STATE(53)] = 1451,
  [SMALL_STATE(54)] = 1477,
  [SMALL_STATE(55)] = 1503,
  [SMALL_STATE(56)] = 1529,
  [SMALL_STATE(57)] = 1545,
  [SMALL_STATE(58)] = 1571,
  [SMALL_STATE(59)] = 1597,
  [SMALL_STATE(60)] = 1623,
  [SMALL_STATE(61)] = 1649,
  [SMALL_STATE(62)] = 1675,
  [SMALL_STATE(63)] = 1701,
  [SMALL_STATE(64)] = 1727,
  [SMALL_STATE(65)] = 1753,
  [SMALL_STATE(66)] = 1779,
  [SMALL_STATE(67)] = 1805,
  [SMALL_STATE(68)] = 1820,
  [SMALL_STATE(69)] = 1835,
  [SMALL_STATE(70)] = 1850,
  [SMALL_STATE(71)] = 1865,
  [SMALL_STATE(72)] = 1880,
  [SMALL_STATE(73)] = 1895,
  [SMALL_STATE(74)] = 1910,
  [SMALL_STATE(75)] = 1927,
  [SMALL_STATE(76)] = 1954,
  [SMALL_STATE(77)] = 1973,
  [SMALL_STATE(78)] = 1987,
  [SMALL_STATE(79)] = 2005,
  [SMALL_STATE(80)] = 2023,
  [SMALL_STATE(81)] = 2041,
  [SMALL_STATE(82)] = 2059,
  [SMALL_STATE(83)] = 2077,
  [SMALL_STATE(84)] = 2090,
  [SMALL_STATE(85)] = 2103,
  [SMALL_STATE(86)] = 2114,
  [SMALL_STATE(87)] = 2127,
  [SMALL_STATE(88)] = 2140,
  [SMALL_STATE(89)] = 2155,
  [SMALL_STATE(90)] = 2168,
  [SMALL_STATE(91)] = 2188,
  [SMALL_STATE(92)] = 2198,
  [SMALL_STATE(93)] = 2208,
  [SMALL_STATE(94)] = 2218,
  [SMALL_STATE(95)] = 2228,
  [SMALL_STATE(96)] = 2238,
  [SMALL_STATE(97)] = 2248,
  [SMALL_STATE(98)] = 2258,
  [SMALL_STATE(99)] = 2268,
  [SMALL_STATE(100)] = 2278,
  [SMALL_STATE(101)] = 2288,
  [SMALL_STATE(102)] = 2298,
  [SMALL_STATE(103)] = 2308,
  [SMALL_STATE(104)] = 2318,
  [SMALL_STATE(105)] = 2328,
  [SMALL_STATE(106)] = 2338,
  [SMALL_STATE(107)] = 2348,
  [SMALL_STATE(108)] = 2358,
  [SMALL_STATE(109)] = 2368,
  [SMALL_STATE(110)] = 2388,
  [SMALL_STATE(111)] = 2398,
  [SMALL_STATE(112)] = 2418,
  [SMALL_STATE(113)] = 2428,
  [SMALL_STATE(114)] = 2438,
  [SMALL_STATE(115)] = 2448,
  [SMALL_STATE(116)] = 2458,
  [SMALL_STATE(117)] = 2468,
  [SMALL_STATE(118)] = 2478,
  [SMALL_STATE(119)] = 2498,
  [SMALL_STATE(120)] = 2508,
  [SMALL_STATE(121)] = 2518,
  [SMALL_STATE(122)] = 2528,
  [SMALL_STATE(123)] = 2538,
  [SMALL_STATE(124)] = 2548,
  [SMALL_STATE(125)] = 2558,
  [SMALL_STATE(126)] = 2568,
  [SMALL_STATE(127)] = 2578,
  [SMALL_STATE(128)] = 2588,
  [SMALL_STATE(129)] = 2598,
  [SMALL_STATE(130)] = 2608,
  [SMALL_STATE(131)] = 2618,
  [SMALL_STATE(132)] = 2628,
  [SMALL_STATE(133)] = 2638,
  [SMALL_STATE(134)] = 2648,
  [SMALL_STATE(135)] = 2658,
  [SMALL_STATE(136)] = 2668,
  [SMALL_STATE(137)] = 2688,
  [SMALL_STATE(138)] = 2698,
  [SMALL_STATE(139)] = 2708,
  [SMALL_STATE(140)] = 2717,
  [SMALL_STATE(141)] = 2733,
  [SMALL_STATE(142)] = 2749,
  [SMALL_STATE(143)] = 2765,
  [SMALL_STATE(144)] = 2779,
  [SMALL_STATE(145)] = 2795,
  [SMALL_STATE(146)] = 2811,
  [SMALL_STATE(147)] = 2827,
  [SMALL_STATE(148)] = 2843,
  [SMALL_STATE(149)] = 2859,
  [SMALL_STATE(150)] = 2875,
  [SMALL_STATE(151)] = 2891,
  [SMALL_STATE(152)] = 2907,
  [SMALL_STATE(153)] = 2923,
  [SMALL_STATE(154)] = 2939,
  [SMALL_STATE(155)] = 2955,
  [SMALL_STATE(156)] = 2971,
  [SMALL_STATE(157)] = 2987,
  [SMALL_STATE(158)] = 3003,
  [SMALL_STATE(159)] = 3019,
  [SMALL_STATE(160)] = 3035,
  [SMALL_STATE(161)] = 3051,
  [SMALL_STATE(162)] = 3067,
  [SMALL_STATE(163)] = 3083,
  [SMALL_STATE(164)] = 3099,
  [SMALL_STATE(165)] = 3115,
  [SMALL_STATE(166)] = 3127,
  [SMALL_STATE(167)] = 3143,
  [SMALL_STATE(168)] = 3157,
  [SMALL_STATE(169)] = 3173,
  [SMALL_STATE(170)] = 3189,
  [SMALL_STATE(171)] = 3205,
  [SMALL_STATE(172)] = 3221,
  [SMALL_STATE(173)] = 3237,
  [SMALL_STATE(174)] = 3253,
  [SMALL_STATE(175)] = 3263,
  [SMALL_STATE(176)] = 3279,
  [SMALL_STATE(177)] = 3295,
  [SMALL_STATE(178)] = 3311,
  [SMALL_STATE(179)] = 3327,
  [SMALL_STATE(180)] = 3343,
  [SMALL_STATE(181)] = 3359,
  [SMALL_STATE(182)] = 3375,
  [SMALL_STATE(183)] = 3391,
  [SMALL_STATE(184)] = 3398,
  [SMALL_STATE(185)] = 3409,
  [SMALL_STATE(186)] = 3416,
  [SMALL_STATE(187)] = 3426,
  [SMALL_STATE(188)] = 3436,
  [SMALL_STATE(189)] = 3446,
  [SMALL_STATE(190)] = 3452,
  [SMALL_STATE(191)] = 3462,
  [SMALL_STATE(192)] = 3472,
  [SMALL_STATE(193)] = 3482,
  [SMALL_STATE(194)] = 3488,
  [SMALL_STATE(195)] = 3498,
  [SMALL_STATE(196)] = 3508,
  [SMALL_STATE(197)] = 3518,
  [SMALL_STATE(198)] = 3524,
  [SMALL_STATE(199)] = 3534,
  [SMALL_STATE(200)] = 3544,
  [SMALL_STATE(201)] = 3554,
  [SMALL_STATE(202)] = 3564,
  [SMALL_STATE(203)] = 3570,
  [SMALL_STATE(204)] = 3580,
  [SMALL_STATE(205)] = 3590,
  [SMALL_STATE(206)] = 3600,
  [SMALL_STATE(207)] = 3610,
  [SMALL_STATE(208)] = 3616,
  [SMALL_STATE(209)] = 3626,
  [SMALL_STATE(210)] = 3632,
  [SMALL_STATE(211)] = 3642,
  [SMALL_STATE(212)] = 3648,
  [SMALL_STATE(213)] = 3658,
  [SMALL_STATE(214)] = 3668,
  [SMALL_STATE(215)] = 3675,
  [SMALL_STATE(216)] = 3682,
  [SMALL_STATE(217)] = 3689,
  [SMALL_STATE(218)] = 3694,
  [SMALL_STATE(219)] = 3701,
  [SMALL_STATE(220)] = 3708,
  [SMALL_STATE(221)] = 3715,
  [SMALL_STATE(222)] = 3722,
  [SMALL_STATE(223)] = 3729,
  [SMALL_STATE(224)] = 3736,
  [SMALL_STATE(225)] = 3743,
  [SMALL_STATE(226)] = 3750,
  [SMALL_STATE(227)] = 3757,
  [SMALL_STATE(228)] = 3764,
  [SMALL_STATE(229)] = 3771,
  [SMALL_STATE(230)] = 3778,
  [SMALL_STATE(231)] = 3785,
  [SMALL_STATE(232)] = 3792,
  [SMALL_STATE(233)] = 3799,
  [SMALL_STATE(234)] = 3806,
  [SMALL_STATE(235)] = 3813,
  [SMALL_STATE(236)] = 3820,
  [SMALL_STATE(237)] = 3827,
  [SMALL_STATE(238)] = 3834,
  [SMALL_STATE(239)] = 3841,
  [SMALL_STATE(240)] = 3848,
  [SMALL_STATE(241)] = 3855,
  [SMALL_STATE(242)] = 3862,
  [SMALL_STATE(243)] = 3869,
  [SMALL_STATE(244)] = 3876,
  [SMALL_STATE(245)] = 3883,
  [SMALL_STATE(246)] = 3890,
  [SMALL_STATE(247)] = 3897,
  [SMALL_STATE(248)] = 3904,
  [SMALL_STATE(249)] = 3911,
  [SMALL_STATE(250)] = 3918,
  [SMALL_STATE(251)] = 3925,
  [SMALL_STATE(252)] = 3932,
  [SMALL_STATE(253)] = 3939,
  [SMALL_STATE(254)] = 3946,
  [SMALL_STATE(255)] = 3951,
  [SMALL_STATE(256)] = 3958,
  [SMALL_STATE(257)] = 3965,
  [SMALL_STATE(258)] = 3972,
  [SMALL_STATE(259)] = 3979,
  [SMALL_STATE(260)] = 3986,
  [SMALL_STATE(261)] = 3991,
  [SMALL_STATE(262)] = 3998,
  [SMALL_STATE(263)] = 4005,
  [SMALL_STATE(264)] = 4012,
  [SMALL_STATE(265)] = 4019,
  [SMALL_STATE(266)] = 4026,
  [SMALL_STATE(267)] = 4033,
  [SMALL_STATE(268)] = 4040,
  [SMALL_STATE(269)] = 4047,
  [SMALL_STATE(270)] = 4054,
  [SMALL_STATE(271)] = 4061,
  [SMALL_STATE(272)] = 4065,
  [SMALL_STATE(273)] = 4069,
  [SMALL_STATE(274)] = 4073,
  [SMALL_STATE(275)] = 4077,
  [SMALL_STATE(276)] = 4081,
  [SMALL_STATE(277)] = 4085,
  [SMALL_STATE(278)] = 4089,
  [SMALL_STATE(279)] = 4093,
  [SMALL_STATE(280)] = 4097,
  [SMALL_STATE(281)] = 4101,
  [SMALL_STATE(282)] = 4105,
  [SMALL_STATE(283)] = 4109,
  [SMALL_STATE(284)] = 4113,
  [SMALL_STATE(285)] = 4117,
  [SMALL_STATE(286)] = 4121,
  [SMALL_STATE(287)] = 4125,
  [SMALL_STATE(288)] = 4129,
  [SMALL_STATE(289)] = 4133,
  [SMALL_STATE(290)] = 4137,
  [SMALL_STATE(291)] = 4141,
  [SMALL_STATE(292)] = 4145,
  [SMALL_STATE(293)] = 4149,
  [SMALL_STATE(294)] = 4153,
  [SMALL_STATE(295)] = 4157,
  [SMALL_STATE(296)] = 4161,
  [SMALL_STATE(297)] = 4165,
  [SMALL_STATE(298)] = 4169,
  [SMALL_STATE(299)] = 4173,
  [SMALL_STATE(300)] = 4177,
  [SMALL_STATE(301)] = 4181,
  [SMALL_STATE(302)] = 4185,
  [SMALL_STATE(303)] = 4189,
  [SMALL_STATE(304)] = 4193,
  [SMALL_STATE(305)] = 4197,
  [SMALL_STATE(306)] = 4201,
  [SMALL_STATE(307)] = 4205,
  [SMALL_STATE(308)] = 4209,
  [SMALL_STATE(309)] = 4213,
  [SMALL_STATE(310)] = 4217,
  [SMALL_STATE(311)] = 4221,
  [SMALL_STATE(312)] = 4225,
  [SMALL_STATE(313)] = 4229,
  [SMALL_STATE(314)] = 4233,
  [SMALL_STATE(315)] = 4237,
  [SMALL_STATE(316)] = 4241,
  [SMALL_STATE(317)] = 4245,
  [SMALL_STATE(318)] = 4249,
  [SMALL_STATE(319)] = 4253,
  [SMALL_STATE(320)] = 4257,
  [SMALL_STATE(321)] = 4261,
  [SMALL_STATE(322)] = 4265,
  [SMALL_STATE(323)] = 4269,
  [SMALL_STATE(324)] = 4273,
  [SMALL_STATE(325)] = 4277,
  [SMALL_STATE(326)] = 4281,
  [SMALL_STATE(327)] = 4285,
  [SMALL_STATE(328)] = 4289,
  [SMALL_STATE(329)] = 4293,
  [SMALL_STATE(330)] = 4297,
  [SMALL_STATE(331)] = 4301,
  [SMALL_STATE(332)] = 4305,
  [SMALL_STATE(333)] = 4309,
  [SMALL_STATE(334)] = 4313,
  [SMALL_STATE(335)] = 4317,
  [SMALL_STATE(336)] = 4321,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 1, .production_id = 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 3, .production_id = 9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(54),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(7),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(288),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(285),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(56),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat2, 2),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat2, 2), SHIFT_REPEAT(181),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat2, 2), SHIFT_REPEAT(299),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat2, 2), SHIFT_REPEAT(336),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat2, 2), SHIFT_REPEAT(191),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat2, 2), SHIFT_REPEAT(174),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 2, .production_id = 5),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 4, .production_id = 15),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 4, .production_id = 13),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 5, .production_id = 19),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 3, .production_id = 7),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 4, .production_id = 14),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 3, .production_id = 8),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(178),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_segment, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_segment, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(216),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_params, 4),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_params, 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_params, 5),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_params, 5),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_attribute, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_segment, 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_segment, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_params, 3),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_params, 3),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(181),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 29),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 30),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 25),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 49),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 16, .production_id = 78),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_block, 5, .production_id = 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 48),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 15, .production_id = 77),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, .production_id = 24),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 47),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 28),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 54),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 15, .production_id = 76),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 55),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 56),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 15, .production_id = 75),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 14, .production_id = 74),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 46),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_block, 4, .production_id = 1),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extern_block_repeat1, 2), SHIFT_REPEAT(318),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extern_block_repeat1, 2),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extern_block_repeat1, 2), SHIFT_REPEAT(174),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 14, .production_id = 73),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_block, 4),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 32),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 57),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 45),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, .production_id = 21),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 6, .production_id = 11),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 58),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 14, .production_id = 72),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 36),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 44),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 14, .production_id = 71),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 14, .production_id = 70),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 59),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 7, .production_id = 18),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 37),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 68),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_block, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 39),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 63),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 64),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 65),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 66),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 38),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 67),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__outer_attribute, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility_modifier, 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility_modifier, 4, .production_id = 4),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_expression_repeat1, 2), SHIFT_REPEAT(21),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_expression_repeat1, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_modifier, 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 5, .production_id = 10),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_repeat1, 2), SHIFT_REPEAT(19),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_repeat1, 2),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 4, .production_id = 6),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__extern_item, 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 3, .production_id = 3),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 6, .production_id = 16),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat2, 2, .production_id = 22), SHIFT_REPEAT(332),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat2, 2, .production_id = 22),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat2, 4, .production_id = 31),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 8, .production_id = 33),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 8, .production_id = 34),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 8, .production_id = 35),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 5, .production_id = 17),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 9, .production_id = 41),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 9, .production_id = 42),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 9, .production_id = 43),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 4, .production_id = 12),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 7, .production_id = 26),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 10, .production_id = 53),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_modifier, 2, .production_id = 1),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding, 4, .production_id = 20),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 10, .production_id = 50),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 10, .production_id = 51),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 10, .production_id = 52),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 9, .production_id = 40),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 11, .production_id = 60),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 11, .production_id = 61),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 11, .production_id = 62),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 6, .production_id = 23),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 12, .production_id = 69),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 7, .production_id = 27),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [810] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_chip(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_word,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
