#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 337
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 16
#define PRODUCTION_ID_COUNT 78

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
  sym_binding = 62,
  sym_tuple_expression = 63,
  sym_path = 64,
  sym_path_segment = 65,
  sym_generic_params = 66,
  sym__literal = 67,
  sym_boolean_literal = 68,
  sym_numeric_literal = 69,
  aux_sym_file_repeat1 = 70,
  aux_sym_file_repeat2 = 71,
  aux_sym_attr_repeat1 = 72,
  aux_sym_function_repeat1 = 73,
  aux_sym_function_repeat2 = 74,
  aux_sym_extern_block_repeat1 = 75,
  aux_sym_codeblock_repeat1 = 76,
  aux_sym_tuple_expression_repeat1 = 77,
  aux_sym_path_repeat1 = 78,
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
  [sym_binding] = "binding",
  [sym_tuple_expression] = "tuple_expression",
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
  [sym_binding] = sym_binding,
  [sym_tuple_expression] = sym_tuple_expression,
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
  [sym_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_expression] = {
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
  field_statements = 10,
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
  [field_statements] = "statements",
  [field_suffix] = "suffix",
  [field_trailing] = "trailing",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 1},
  [9] = {.index = 9, .length = 2},
  [10] = {.index = 11, .length = 2},
  [11] = {.index = 13, .length = 2},
  [12] = {.index = 15, .length = 1},
  [13] = {.index = 16, .length = 2},
  [14] = {.index = 18, .length = 2},
  [15] = {.index = 20, .length = 3},
  [16] = {.index = 23, .length = 3},
  [17] = {.index = 26, .length = 1},
  [18] = {.index = 27, .length = 2},
  [19] = {.index = 29, .length = 3},
  [20] = {.index = 32, .length = 3},
  [21] = {.index = 35, .length = 4},
  [22] = {.index = 39, .length = 2},
  [23] = {.index = 41, .length = 2},
  [24] = {.index = 43, .length = 5},
  [25] = {.index = 48, .length = 4},
  [26] = {.index = 52, .length = 2},
  [27] = {.index = 54, .length = 3},
  [28] = {.index = 57, .length = 2},
  [29] = {.index = 59, .length = 6},
  [30] = {.index = 65, .length = 2},
  [31] = {.index = 67, .length = 8},
  [32] = {.index = 75, .length = 5},
  [33] = {.index = 80, .length = 7},
  [34] = {.index = 87, .length = 4},
  [35] = {.index = 91, .length = 5},
  [36] = {.index = 96, .length = 3},
  [37] = {.index = 99, .length = 6},
  [38] = {.index = 105, .length = 9},
  [39] = {.index = 114, .length = 5},
  [40] = {.index = 119, .length = 8},
  [41] = {.index = 127, .length = 5},
  [42] = {.index = 132, .length = 7},
  [43] = {.index = 139, .length = 6},
  [44] = {.index = 145, .length = 8},
  [45] = {.index = 153, .length = 5},
  [46] = {.index = 158, .length = 3},
  [47] = {.index = 161, .length = 7},
  [48] = {.index = 168, .length = 9},
  [49] = {.index = 177, .length = 6},
  [50] = {.index = 183, .length = 8},
  [51] = {.index = 191, .length = 5},
  [52] = {.index = 196, .length = 8},
  [53] = {.index = 204, .length = 6},
  [54] = {.index = 210, .length = 9},
  [55] = {.index = 219, .length = 6},
  [56] = {.index = 225, .length = 8},
  [57] = {.index = 233, .length = 5},
  [58] = {.index = 238, .length = 10},
  [59] = {.index = 248, .length = 9},
  [60] = {.index = 257, .length = 6},
  [61] = {.index = 263, .length = 8},
  [62] = {.index = 271, .length = 7},
  [63] = {.index = 278, .length = 9},
  [64] = {.index = 287, .length = 6},
  [65] = {.index = 293, .length = 9},
  [66] = {.index = 302, .length = 6},
  [67] = {.index = 308, .length = 8},
  [68] = {.index = 316, .length = 9},
  [69] = {.index = 325, .length = 10},
  [70] = {.index = 335, .length = 7},
  [71] = {.index = 342, .length = 9},
  [72] = {.index = 351, .length = 6},
  [73] = {.index = 357, .length = 9},
  [74] = {.index = 366, .length = 10},
  [75] = {.index = 376, .length = 7},
  [76] = {.index = 383, .length = 9},
  [77] = {.index = 392, .length = 10},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_abi, 1},
  [1] =
    {field_value, 0},
  [2] =
    {field_value, 2},
  [3] =
    {field_suffix, 1},
    {field_value, 0},
  [5] =
    {field_args, 2},
  [6] =
    {field_members, 1},
  [7] =
    {field_trailing, 1},
  [8] =
    {field_statements, 1},
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
    {field_statements, 1},
    {field_trailing, 2},
  [20] =
    {field_float_part, 2},
    {field_suffix, 3},
    {field_value, 0},
  [23] =
    {field_args, 2},
    {field_args, 3},
    {field_args, 4},
  [26] =
    {field_name, 2},
  [27] =
    {field_body, 6},
    {field_name, 2},
  [29] =
    {field_members, 1},
    {field_members, 2},
    {field_members, 3},
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
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
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
  [37] = {.lex_state = 1},
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
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
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
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
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
  [140] = {.lex_state = 0},
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
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 5},
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
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 5},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 5},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 3},
  [225] = {.lex_state = 3},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 3},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 3},
  [230] = {.lex_state = 5},
  [231] = {.lex_state = 3},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 5},
  [234] = {.lex_state = 5},
  [235] = {.lex_state = 3},
  [236] = {.lex_state = 5},
  [237] = {.lex_state = 3},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 3},
  [240] = {.lex_state = 5},
  [241] = {.lex_state = 3},
  [242] = {.lex_state = 5},
  [243] = {.lex_state = 5},
  [244] = {.lex_state = 3},
  [245] = {.lex_state = 5},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 3},
  [248] = {.lex_state = 3},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 5},
  [253] = {.lex_state = 3},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 3},
  [256] = {.lex_state = 5},
  [257] = {.lex_state = 3},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 5},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 5},
  [263] = {.lex_state = 3},
  [264] = {.lex_state = 5},
  [265] = {.lex_state = 5},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 3},
  [268] = {.lex_state = 5},
  [269] = {.lex_state = 5},
  [270] = {.lex_state = 3},
  [271] = {.lex_state = 3},
  [272] = {.lex_state = 3},
  [273] = {.lex_state = 5},
  [274] = {.lex_state = 5},
  [275] = {.lex_state = 5},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 5},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 5},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 5},
  [282] = {.lex_state = 5},
  [283] = {.lex_state = 5},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 1},
  [286] = {.lex_state = 5},
  [287] = {.lex_state = 5},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 5},
  [290] = {.lex_state = 3},
  [291] = {.lex_state = 3},
  [292] = {.lex_state = 5},
  [293] = {.lex_state = 3},
  [294] = {.lex_state = 5},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 3},
  [297] = {.lex_state = 5},
  [298] = {.lex_state = 5},
  [299] = {.lex_state = 3},
  [300] = {.lex_state = 5},
  [301] = {.lex_state = 5},
  [302] = {.lex_state = 3},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 3},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 5},
  [308] = {.lex_state = 3},
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
  [332] = {.lex_state = 0},
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
    [sym__item] = STATE(55),
    [sym__inner_attribute] = STATE(4),
    [sym__outer_attribute] = STATE(77),
    [sym_function] = STATE(55),
    [sym_function_modifier] = STATE(333),
    [sym_extern_block] = STATE(55),
    [sym_visibility_modifier] = STATE(167),
    [aux_sym_file_repeat1] = STATE(4),
    [aux_sym_file_repeat2] = STATE(55),
    [aux_sym_function_repeat1] = STATE(77),
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
  [67] = 12,
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
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(167), 1,
      sym_visibility_modifier,
    STATE(333), 1,
      sym_function_modifier,
    ACTIONS(11), 2,
      anon_sym_const,
      anon_sym_unsafe,
    STATE(76), 2,
      sym__inner_attribute,
      aux_sym_file_repeat1,
    STATE(77), 2,
      sym__outer_attribute,
      aux_sym_function_repeat1,
    STATE(28), 4,
      sym__item,
      sym_function,
      sym_extern_block,
      aux_sym_file_repeat2,
  [110] = 9,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    STATE(6), 1,
      aux_sym_codeblock_repeat1,
    ACTIONS(37), 2,
      sym_unit_literal,
      sym_string_literal,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(266), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [146] = 9,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 1,
      anon_sym_let,
    ACTIONS(60), 1,
      sym_digits,
    STATE(6), 1,
      aux_sym_codeblock_repeat1,
    ACTIONS(54), 2,
      sym_unit_literal,
      sym_string_literal,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(332), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [182] = 9,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_codeblock_repeat1,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(65), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(250), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [218] = 8,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(69), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(204), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [251] = 8,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(69), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(204), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [284] = 8,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(73), 1,
      anon_sym_GT,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(69), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(204), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [317] = 8,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(75), 1,
      anon_sym_GT,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(69), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(204), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [350] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(77), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(106), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [380] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(79), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(71), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [410] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(81), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(101), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [440] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(83), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(126), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [470] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(85), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(98), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [500] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(87), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(124), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [530] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(89), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(122), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [560] = 9,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(95), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(162), 1,
      sym_path,
    ACTIONS(97), 2,
      sym_unit_literal,
      sym_string_literal,
    ACTIONS(99), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(261), 5,
      sym_attr,
      sym__attr_data_value,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [594] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(107), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [624] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(103), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(102), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [654] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(105), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(118), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [684] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(107), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(113), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [714] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(109), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(112), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [744] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(111), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(100), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [774] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(113), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(97), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [804] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(115), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(93), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [834] = 10,
    ACTIONS(7), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_extern,
    ACTIONS(15), 1,
      anon_sym_pub,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    STATE(167), 1,
      sym_visibility_modifier,
    STATE(333), 1,
      sym_function_modifier,
    ACTIONS(11), 2,
      anon_sym_const,
      anon_sym_unsafe,
    STATE(77), 2,
      sym__outer_attribute,
      aux_sym_function_repeat1,
    STATE(29), 4,
      sym__item,
      sym_function,
      sym_extern_block,
      aux_sym_file_repeat2,
  [870] = 10,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(124), 1,
      anon_sym_fn,
    ACTIONS(130), 1,
      anon_sym_extern,
    ACTIONS(133), 1,
      anon_sym_pub,
    STATE(167), 1,
      sym_visibility_modifier,
    STATE(333), 1,
      sym_function_modifier,
    ACTIONS(127), 2,
      anon_sym_const,
      anon_sym_unsafe,
    STATE(77), 2,
      sym__outer_attribute,
      aux_sym_function_repeat1,
    STATE(29), 4,
      sym__item,
      sym_function,
      sym_extern_block,
      aux_sym_file_repeat2,
  [906] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(136), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(120), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [936] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(138), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(123), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [966] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(140), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(132), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [996] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(142), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(191), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1026] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(144), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(129), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1056] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(146), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(133), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1086] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(148), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(134), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1116] = 9,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_path_segment,
    STATE(162), 1,
      sym_path,
    ACTIONS(99), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(152), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(195), 5,
      sym_attr,
      sym__attr_data_value,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1150] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(154), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(136), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1180] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(156), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(92), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1210] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(69), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(204), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1240] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(158), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(114), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1270] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(160), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(117), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1300] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(162), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(99), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1330] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(164), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(103), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1360] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(166), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(125), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1390] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(168), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(115), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1420] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(170), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(116), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1450] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(172), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(138), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1480] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(174), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(95), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1510] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(176), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(127), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1540] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(178), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(119), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1570] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(180), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(130), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1600] = 9,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_path_segment,
    STATE(162), 1,
      sym_path,
    ACTIONS(97), 2,
      sym_unit_literal,
      sym_string_literal,
    ACTIONS(99), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(261), 5,
      sym_attr,
      sym__attr_data_value,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1634] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(184), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(197), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1664] = 10,
    ACTIONS(7), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_extern,
    ACTIONS(15), 1,
      anon_sym_pub,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(167), 1,
      sym_visibility_modifier,
    STATE(333), 1,
      sym_function_modifier,
    ACTIONS(11), 2,
      anon_sym_const,
      anon_sym_unsafe,
    STATE(77), 2,
      sym__outer_attribute,
      aux_sym_function_repeat1,
    STATE(29), 4,
      sym__item,
      sym_function,
      sym_extern_block,
      aux_sym_file_repeat2,
  [1700] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(186), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(94), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1730] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(188), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(131), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1760] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(135), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1790] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(128), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1820] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(194), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(104), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1850] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(196), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(105), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1880] = 8,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(95), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(162), 1,
      sym_path,
    ACTIONS(97), 2,
      sym_unit_literal,
      sym_string_literal,
    ACTIONS(99), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(261), 5,
      sym_attr,
      sym__attr_data_value,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1911] = 8,
    ACTIONS(41), 1,
      sym_digits,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(95), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(162), 1,
      sym_path,
    ACTIONS(99), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(198), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(193), 5,
      sym_attr,
      sym__attr_data_value,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1942] = 1,
    ACTIONS(200), 13,
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
  [1958] = 1,
    ACTIONS(202), 13,
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
  [1974] = 1,
    ACTIONS(204), 13,
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
  [1990] = 1,
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
  [2005] = 1,
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
  [2020] = 1,
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
  [2035] = 1,
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
  [2050] = 1,
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
  [2065] = 1,
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
  [2080] = 1,
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
  [2095] = 1,
    ACTIONS(220), 12,
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
  [2110] = 4,
    ACTIONS(226), 1,
      anon_sym_COLON_COLON_LT,
    STATE(85), 1,
      sym_generic_params,
    ACTIONS(224), 2,
      anon_sym_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(222), 6,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [2129] = 3,
    ACTIONS(230), 1,
      anon_sym_POUND_CARET_LBRACK,
    STATE(76), 2,
      sym__inner_attribute,
      aux_sym_file_repeat1,
    ACTIONS(228), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2146] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(15), 1,
      anon_sym_pub,
    ACTIONS(233), 1,
      anon_sym_fn,
    ACTIONS(235), 1,
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
  [2173] = 4,
    ACTIONS(239), 1,
      anon_sym_COLON,
    ACTIONS(241), 1,
      anon_sym_COLON_COLON,
    STATE(81), 1,
      aux_sym_path_repeat1,
    ACTIONS(237), 6,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [2191] = 2,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_let,
      sym_unit_literal,
      sym_string_literal,
      anon_sym_true,
      anon_sym_false,
      sym_digits,
  [2205] = 4,
    ACTIONS(239), 1,
      anon_sym_COLON,
    ACTIONS(241), 1,
      anon_sym_COLON_COLON,
    STATE(83), 1,
      aux_sym_path_repeat1,
    ACTIONS(237), 6,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [2223] = 4,
    ACTIONS(241), 1,
      anon_sym_COLON_COLON,
    ACTIONS(247), 1,
      anon_sym_COLON,
    STATE(83), 1,
      aux_sym_path_repeat1,
    ACTIONS(245), 6,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [2241] = 4,
    ACTIONS(241), 1,
      anon_sym_COLON_COLON,
    ACTIONS(251), 1,
      anon_sym_COLON,
    STATE(80), 1,
      aux_sym_path_repeat1,
    ACTIONS(249), 6,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [2259] = 4,
    ACTIONS(255), 1,
      anon_sym_COLON,
    ACTIONS(257), 1,
      anon_sym_COLON_COLON,
    STATE(83), 1,
      aux_sym_path_repeat1,
    ACTIONS(253), 6,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [2277] = 1,
    ACTIONS(260), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_CARET_LBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2288] = 2,
    ACTIONS(264), 1,
      anon_sym_COLON,
    ACTIONS(262), 7,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
  [2301] = 2,
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
  [2314] = 2,
    ACTIONS(268), 1,
      anon_sym_COLON,
    ACTIONS(266), 7,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
  [2327] = 3,
    ACTIONS(270), 1,
      anon_sym_POUND_LBRACK,
    STATE(88), 2,
      sym__outer_attribute,
      aux_sym_function_repeat1,
    ACTIONS(273), 5,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2342] = 2,
    ACTIONS(277), 1,
      anon_sym_COLON,
    ACTIONS(275), 7,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
  [2355] = 2,
    ACTIONS(281), 1,
      anon_sym_COLON,
    ACTIONS(279), 7,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
  [2368] = 6,
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
    STATE(110), 2,
      sym__extern_item,
      aux_sym_extern_block_repeat1,
  [2388] = 1,
    ACTIONS(287), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2398] = 1,
    ACTIONS(289), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2408] = 1,
    ACTIONS(291), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2418] = 1,
    ACTIONS(293), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2428] = 1,
    ACTIONS(295), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2438] = 1,
    ACTIONS(297), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2448] = 1,
    ACTIONS(299), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2458] = 1,
    ACTIONS(301), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2468] = 1,
    ACTIONS(303), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2478] = 1,
    ACTIONS(305), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2488] = 1,
    ACTIONS(307), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2498] = 1,
    ACTIONS(309), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2508] = 1,
    ACTIONS(311), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2518] = 1,
    ACTIONS(313), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2528] = 1,
    ACTIONS(315), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2538] = 1,
    ACTIONS(317), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2548] = 6,
    ACTIONS(15), 1,
      anon_sym_pub,
    ACTIONS(283), 1,
      anon_sym_fn,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
    STATE(315), 1,
      sym_visibility_modifier,
    STATE(317), 1,
      sym_extern_function,
    STATE(110), 2,
      sym__extern_item,
      aux_sym_extern_block_repeat1,
  [2568] = 1,
    ACTIONS(321), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2578] = 6,
    ACTIONS(323), 1,
      anon_sym_fn,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
    ACTIONS(328), 1,
      anon_sym_pub,
    STATE(315), 1,
      sym_visibility_modifier,
    STATE(317), 1,
      sym_extern_function,
    STATE(110), 2,
      sym__extern_item,
      aux_sym_extern_block_repeat1,
  [2598] = 1,
    ACTIONS(331), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2608] = 1,
    ACTIONS(333), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2618] = 1,
    ACTIONS(335), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2628] = 1,
    ACTIONS(337), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2638] = 1,
    ACTIONS(339), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2648] = 1,
    ACTIONS(341), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2658] = 1,
    ACTIONS(343), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2668] = 1,
    ACTIONS(345), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2678] = 1,
    ACTIONS(347), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2688] = 1,
    ACTIONS(349), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2698] = 6,
    ACTIONS(15), 1,
      anon_sym_pub,
    ACTIONS(283), 1,
      anon_sym_fn,
    ACTIONS(351), 1,
      anon_sym_RBRACE,
    STATE(315), 1,
      sym_visibility_modifier,
    STATE(317), 1,
      sym_extern_function,
    STATE(91), 2,
      sym__extern_item,
      aux_sym_extern_block_repeat1,
  [2718] = 1,
    ACTIONS(353), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2728] = 1,
    ACTIONS(355), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2738] = 1,
    ACTIONS(357), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2748] = 1,
    ACTIONS(359), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2758] = 1,
    ACTIONS(361), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2768] = 1,
    ACTIONS(363), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2778] = 1,
    ACTIONS(365), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2788] = 1,
    ACTIONS(367), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2798] = 1,
    ACTIONS(369), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2808] = 1,
    ACTIONS(371), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2818] = 1,
    ACTIONS(373), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2828] = 1,
    ACTIONS(375), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2838] = 1,
    ACTIONS(377), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2848] = 1,
    ACTIONS(379), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2858] = 1,
    ACTIONS(381), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2868] = 6,
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
    STATE(108), 2,
      sym__extern_item,
      aux_sym_extern_block_repeat1,
  [2888] = 1,
    ACTIONS(385), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2898] = 1,
    ACTIONS(387), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2908] = 1,
    ACTIONS(389), 6,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2917] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(289), 1,
      sym_type,
  [2933] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(316), 1,
      sym_type,
  [2949] = 4,
    ACTIONS(235), 1,
      anon_sym_extern,
    ACTIONS(393), 1,
      anon_sym_fn,
    STATE(309), 1,
      sym_function_modifier,
    ACTIONS(11), 2,
      anon_sym_const,
      anon_sym_unsafe,
  [2963] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(209), 1,
      sym_type,
  [2979] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(279), 1,
      sym_type,
  [2995] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(327), 1,
      sym_type,
  [3011] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(187), 1,
      sym_type,
  [3027] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(322), 1,
      sym_type,
  [3043] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(276), 1,
      sym_type,
  [3059] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(278), 1,
      sym_type,
  [3075] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(281), 1,
      sym_type,
  [3091] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(207), 1,
      sym_type,
  [3107] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(273), 1,
      sym_type,
  [3123] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(335), 1,
      sym_type,
  [3139] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(192), 1,
      sym_type,
  [3155] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(280), 1,
      sym_type,
  [3171] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(287), 1,
      sym_type,
  [3187] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(321), 1,
      sym_type,
  [3203] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(162), 1,
      sym_path,
    STATE(331), 1,
      sym_attr,
  [3219] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(286), 1,
      sym_type,
  [3235] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(295), 1,
      sym_type,
  [3251] = 3,
    ACTIONS(397), 1,
      anon_sym_EQ,
    ACTIONS(399), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3263] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(307), 1,
      sym_type,
  [3279] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(330), 1,
      sym_type,
  [3295] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(300), 1,
      sym_type,
  [3311] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(282), 1,
      sym_type,
  [3327] = 4,
    ACTIONS(233), 1,
      anon_sym_fn,
    ACTIONS(235), 1,
      anon_sym_extern,
    STATE(323), 1,
      sym_function_modifier,
    ACTIONS(11), 2,
      anon_sym_const,
      anon_sym_unsafe,
  [3341] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(298), 1,
      sym_type,
  [3357] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(288), 1,
      sym_type,
  [3373] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(200), 1,
      sym_type,
  [3389] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(313), 1,
      sym_type,
  [3405] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(326), 1,
      sym_type,
  [3421] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(303), 1,
      sym_type,
  [3437] = 2,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 4,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
  [3447] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(294), 1,
      sym_type,
  [3463] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(306), 1,
      sym_type,
  [3479] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(319), 1,
      sym_type,
  [3495] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(304), 1,
      sym_type,
  [3511] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(275), 1,
      sym_type,
  [3527] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(208), 1,
      sym_type,
  [3543] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(162), 1,
      sym_path,
    STATE(329), 1,
      sym_attr,
  [3559] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(277), 1,
      sym_type,
  [3575] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(82), 1,
      sym_path_segment,
    STATE(186), 1,
      sym_path,
    STATE(218), 1,
      sym_type,
  [3591] = 1,
    ACTIONS(405), 4,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
  [3598] = 3,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_tuple_expression_repeat1,
    ACTIONS(410), 2,
      anon_sym_RPAREN,
      anon_sym_GT,
  [3609] = 1,
    ACTIONS(412), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
  [3616] = 3,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      aux_sym_function_repeat2,
  [3626] = 3,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    STATE(213), 1,
      aux_sym_function_repeat2,
  [3636] = 3,
    ACTIONS(422), 1,
      anon_sym_fn,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    ACTIONS(426), 1,
      sym_string_literal,
  [3646] = 3,
    ACTIONS(428), 1,
      anon_sym_COMMA,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    STATE(213), 1,
      aux_sym_function_repeat2,
  [3656] = 3,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    ACTIONS(434), 1,
      anon_sym_GT,
    STATE(199), 1,
      aux_sym_tuple_expression_repeat1,
  [3666] = 3,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    STATE(206), 1,
      aux_sym_function_repeat2,
  [3676] = 1,
    ACTIONS(440), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3682] = 1,
    ACTIONS(442), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3688] = 3,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    STATE(202), 1,
      aux_sym_attr_repeat1,
  [3698] = 1,
    ACTIONS(448), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [3704] = 3,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      aux_sym_tuple_expression_repeat1,
  [3714] = 3,
    ACTIONS(454), 1,
      anon_sym_COMMA,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    STATE(213), 1,
      aux_sym_function_repeat2,
  [3724] = 3,
    ACTIONS(73), 1,
      anon_sym_GT,
    ACTIONS(458), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_tuple_expression_repeat1,
  [3734] = 3,
    ACTIONS(460), 1,
      anon_sym_COMMA,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
    STATE(188), 1,
      aux_sym_function_repeat2,
  [3744] = 1,
    ACTIONS(464), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3750] = 3,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(466), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      aux_sym_attr_repeat1,
  [3760] = 3,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(468), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_tuple_expression_repeat1,
  [3770] = 1,
    ACTIONS(410), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [3776] = 1,
    ACTIONS(470), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3782] = 3,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    STATE(213), 1,
      aux_sym_function_repeat2,
  [3792] = 3,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    STATE(190), 1,
      aux_sym_function_repeat2,
  [3802] = 3,
    ACTIONS(480), 1,
      anon_sym_COMMA,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      aux_sym_function_repeat2,
  [3812] = 3,
    ACTIONS(484), 1,
      anon_sym_COMMA,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
    STATE(210), 1,
      aux_sym_function_repeat2,
  [3822] = 3,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
    STATE(213), 1,
      aux_sym_function_repeat2,
  [3832] = 3,
    ACTIONS(492), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      anon_sym_RPAREN,
    STATE(211), 1,
      aux_sym_attr_repeat1,
  [3842] = 1,
    ACTIONS(497), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3848] = 3,
    ACTIONS(499), 1,
      anon_sym_COMMA,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
    STATE(213), 1,
      aux_sym_function_repeat2,
  [3858] = 3,
    ACTIONS(504), 1,
      anon_sym_COMMA,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
    STATE(213), 1,
      aux_sym_function_repeat2,
  [3868] = 2,
    ACTIONS(508), 1,
      anon_sym_COLON,
    ACTIONS(510), 1,
      anon_sym_DASH_GT,
  [3875] = 2,
    ACTIONS(512), 1,
      anon_sym_COLON,
    ACTIONS(514), 1,
      anon_sym_DASH_GT,
  [3882] = 2,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(78), 1,
      sym_path_segment,
  [3889] = 1,
    ACTIONS(516), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3894] = 2,
    ACTIONS(518), 1,
      anon_sym_fn,
    ACTIONS(520), 1,
      anon_sym_LBRACE,
  [3901] = 1,
    ACTIONS(522), 2,
      anon_sym_super,
      anon_sym_package,
  [3906] = 2,
    ACTIONS(524), 1,
      anon_sym_COLON,
    ACTIONS(526), 1,
      anon_sym_DASH_GT,
  [3913] = 2,
    ACTIONS(422), 1,
      anon_sym_fn,
    ACTIONS(528), 1,
      sym_string_literal,
  [3920] = 2,
    ACTIONS(530), 1,
      anon_sym_DASH_GT,
    ACTIONS(532), 1,
      anon_sym_SEMI,
  [3927] = 2,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    ACTIONS(536), 1,
      sym_identifier,
  [3934] = 2,
    ACTIONS(536), 1,
      sym_identifier,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
  [3941] = 2,
    ACTIONS(540), 1,
      anon_sym_DASH_GT,
    ACTIONS(542), 1,
      anon_sym_SEMI,
  [3948] = 2,
    ACTIONS(536), 1,
      sym_identifier,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
  [3955] = 2,
    ACTIONS(546), 1,
      anon_sym_DASH_GT,
    ACTIONS(548), 1,
      anon_sym_SEMI,
  [3962] = 2,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(86), 1,
      sym_path_segment,
  [3969] = 2,
    ACTIONS(550), 1,
      anon_sym_COLON,
    ACTIONS(552), 1,
      anon_sym_DASH_GT,
  [3976] = 2,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
    ACTIONS(556), 1,
      sym_identifier,
  [3983] = 2,
    ACTIONS(558), 1,
      anon_sym_COLON,
    ACTIONS(560), 1,
      anon_sym_DASH_GT,
  [3990] = 2,
    ACTIONS(562), 1,
      anon_sym_COLON,
    ACTIONS(564), 1,
      anon_sym_DASH_GT,
  [3997] = 2,
    ACTIONS(566), 1,
      anon_sym_COLON,
    ACTIONS(568), 1,
      anon_sym_DASH_GT,
  [4004] = 2,
    ACTIONS(536), 1,
      sym_identifier,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
  [4011] = 2,
    ACTIONS(572), 1,
      anon_sym_COLON,
    ACTIONS(574), 1,
      anon_sym_DASH_GT,
  [4018] = 2,
    ACTIONS(536), 1,
      sym_identifier,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
  [4025] = 2,
    ACTIONS(578), 1,
      anon_sym_DASH_GT,
    ACTIONS(580), 1,
      anon_sym_SEMI,
  [4032] = 2,
    ACTIONS(536), 1,
      sym_identifier,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
  [4039] = 2,
    ACTIONS(584), 1,
      anon_sym_COLON,
    ACTIONS(586), 1,
      anon_sym_DASH_GT,
  [4046] = 2,
    ACTIONS(536), 1,
      sym_identifier,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
  [4053] = 2,
    ACTIONS(590), 1,
      anon_sym_COLON,
    ACTIONS(592), 1,
      anon_sym_DASH_GT,
  [4060] = 2,
    ACTIONS(594), 1,
      anon_sym_COLON,
    ACTIONS(596), 1,
      anon_sym_DASH_GT,
  [4067] = 2,
    ACTIONS(536), 1,
      sym_identifier,
    ACTIONS(598), 1,
      anon_sym_RPAREN,
  [4074] = 2,
    ACTIONS(600), 1,
      anon_sym_COLON,
    ACTIONS(602), 1,
      anon_sym_DASH_GT,
  [4081] = 2,
    ACTIONS(604), 1,
      anon_sym_DASH_GT,
    ACTIONS(606), 1,
      anon_sym_SEMI,
  [4088] = 2,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    ACTIONS(610), 1,
      sym_identifier,
  [4095] = 2,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    ACTIONS(614), 1,
      sym_identifier,
  [4102] = 2,
    ACTIONS(616), 1,
      anon_sym_DASH_GT,
    ACTIONS(618), 1,
      anon_sym_SEMI,
  [4109] = 2,
    ACTIONS(620), 1,
      anon_sym_RBRACE,
    ACTIONS(622), 1,
      anon_sym_SEMI,
  [4116] = 2,
    ACTIONS(624), 1,
      anon_sym_DASH_GT,
    ACTIONS(626), 1,
      anon_sym_SEMI,
  [4123] = 2,
    ACTIONS(628), 1,
      anon_sym_COLON,
    ACTIONS(630), 1,
      anon_sym_DASH_GT,
  [4130] = 2,
    ACTIONS(536), 1,
      sym_identifier,
    ACTIONS(632), 1,
      anon_sym_RPAREN,
  [4137] = 2,
    ACTIONS(634), 1,
      anon_sym_DASH_GT,
    ACTIONS(636), 1,
      anon_sym_SEMI,
  [4144] = 2,
    ACTIONS(638), 1,
      anon_sym_RPAREN,
    ACTIONS(640), 1,
      sym_identifier,
  [4151] = 2,
    ACTIONS(642), 1,
      anon_sym_COLON,
    ACTIONS(644), 1,
      anon_sym_DASH_GT,
  [4158] = 2,
    ACTIONS(536), 1,
      sym_identifier,
    ACTIONS(646), 1,
      anon_sym_RPAREN,
  [4165] = 2,
    ACTIONS(648), 1,
      anon_sym_DASH_GT,
    ACTIONS(650), 1,
      anon_sym_SEMI,
  [4172] = 2,
    ACTIONS(652), 1,
      anon_sym_DASH_GT,
    ACTIONS(654), 1,
      anon_sym_SEMI,
  [4179] = 2,
    ACTIONS(656), 1,
      anon_sym_COLON,
    ACTIONS(658), 1,
      anon_sym_DASH_GT,
  [4186] = 1,
    ACTIONS(495), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4191] = 2,
    ACTIONS(660), 1,
      anon_sym_COLON,
    ACTIONS(662), 1,
      anon_sym_DASH_GT,
  [4198] = 2,
    ACTIONS(664), 1,
      anon_sym_RPAREN,
    ACTIONS(666), 1,
      sym_identifier,
  [4205] = 2,
    ACTIONS(668), 1,
      anon_sym_COLON,
    ACTIONS(670), 1,
      anon_sym_DASH_GT,
  [4212] = 2,
    ACTIONS(672), 1,
      anon_sym_COLON,
    ACTIONS(674), 1,
      anon_sym_DASH_GT,
  [4219] = 2,
    ACTIONS(622), 1,
      anon_sym_SEMI,
    ACTIONS(676), 1,
      anon_sym_RBRACE,
  [4226] = 2,
    ACTIONS(536), 1,
      sym_identifier,
    ACTIONS(678), 1,
      anon_sym_RPAREN,
  [4233] = 2,
    ACTIONS(680), 1,
      anon_sym_COLON,
    ACTIONS(682), 1,
      anon_sym_DASH_GT,
  [4240] = 2,
    ACTIONS(684), 1,
      anon_sym_COLON,
    ACTIONS(686), 1,
      anon_sym_DASH_GT,
  [4247] = 2,
    ACTIONS(688), 1,
      anon_sym_RPAREN,
    ACTIONS(690), 1,
      sym_identifier,
  [4254] = 2,
    ACTIONS(536), 1,
      sym_identifier,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
  [4261] = 1,
    ACTIONS(694), 1,
      anon_sym_LPAREN,
  [4265] = 1,
    ACTIONS(696), 1,
      anon_sym_COLON,
  [4269] = 1,
    ACTIONS(698), 1,
      anon_sym_COLON,
  [4273] = 1,
    ACTIONS(700), 1,
      anon_sym_COLON,
  [4277] = 1,
    ACTIONS(702), 1,
      anon_sym_SEMI,
  [4281] = 1,
    ACTIONS(704), 1,
      anon_sym_COLON,
  [4285] = 1,
    ACTIONS(706), 1,
      anon_sym_SEMI,
  [4289] = 1,
    ACTIONS(708), 1,
      anon_sym_COLON,
  [4293] = 1,
    ACTIONS(710), 1,
      anon_sym_SEMI,
  [4297] = 1,
    ACTIONS(712), 1,
      anon_sym_COLON,
  [4301] = 1,
    ACTIONS(714), 1,
      anon_sym_COLON,
  [4305] = 1,
    ACTIONS(716), 1,
      anon_sym_COLON,
  [4309] = 1,
    ACTIONS(718), 1,
      sym_digits,
  [4313] = 1,
    ACTIONS(720), 1,
      anon_sym_COLON_EQ,
  [4317] = 1,
    ACTIONS(722), 1,
      anon_sym_COLON,
  [4321] = 1,
    ACTIONS(724), 1,
      anon_sym_COLON,
  [4325] = 1,
    ACTIONS(726), 1,
      anon_sym_SEMI,
  [4329] = 1,
    ACTIONS(728), 1,
      anon_sym_COLON,
  [4333] = 1,
    ACTIONS(730), 1,
      sym_identifier,
  [4337] = 1,
    ACTIONS(732), 1,
      anon_sym_LPAREN,
  [4341] = 1,
    ACTIONS(734), 1,
      anon_sym_COLON,
  [4345] = 1,
    ACTIONS(736), 1,
      sym_identifier,
  [4349] = 1,
    ACTIONS(738), 1,
      anon_sym_COLON,
  [4353] = 1,
    ACTIONS(740), 1,
      anon_sym_SEMI,
  [4357] = 1,
    ACTIONS(742), 1,
      anon_sym_LPAREN,
  [4361] = 1,
    ACTIONS(744), 1,
      anon_sym_COLON,
  [4365] = 1,
    ACTIONS(746), 1,
      anon_sym_COLON,
  [4369] = 1,
    ACTIONS(748), 1,
      sym_identifier,
  [4373] = 1,
    ACTIONS(750), 1,
      anon_sym_COLON,
  [4377] = 1,
    ACTIONS(752), 1,
      anon_sym_COLON,
  [4381] = 1,
    ACTIONS(536), 1,
      sym_identifier,
  [4385] = 1,
    ACTIONS(754), 1,
      anon_sym_SEMI,
  [4389] = 1,
    ACTIONS(756), 1,
      anon_sym_SEMI,
  [4393] = 1,
    ACTIONS(758), 1,
      anon_sym_LPAREN,
  [4397] = 1,
    ACTIONS(760), 1,
      anon_sym_SEMI,
  [4401] = 1,
    ACTIONS(762), 1,
      anon_sym_COLON,
  [4405] = 1,
    ACTIONS(764), 1,
      sym_identifier,
  [4409] = 1,
    ACTIONS(766), 1,
      anon_sym_fn,
  [4413] = 1,
    ACTIONS(768), 1,
      sym_identifier,
  [4417] = 1,
    ACTIONS(518), 1,
      anon_sym_fn,
  [4421] = 1,
    ACTIONS(770), 1,
      anon_sym_LPAREN,
  [4425] = 1,
    ACTIONS(772), 1,
      anon_sym_COLON,
  [4429] = 1,
    ACTIONS(774), 1,
      anon_sym_RPAREN,
  [4433] = 1,
    ACTIONS(776), 1,
      anon_sym_fn,
  [4437] = 1,
    ACTIONS(778), 1,
      anon_sym_COLON,
  [4441] = 1,
    ACTIONS(780), 1,
      anon_sym_SEMI,
  [4445] = 1,
    ACTIONS(782), 1,
      sym_identifier,
  [4449] = 1,
    ACTIONS(784), 1,
      anon_sym_COLON,
  [4453] = 1,
    ACTIONS(786), 1,
      anon_sym_COLON,
  [4457] = 1,
    ACTIONS(788), 1,
      anon_sym_COLON,
  [4461] = 1,
    ACTIONS(790), 1,
      anon_sym_SEMI,
  [4465] = 1,
    ACTIONS(393), 1,
      anon_sym_fn,
  [4469] = 1,
    ACTIONS(792), 1,
      anon_sym_COLON,
  [4473] = 1,
    ACTIONS(794), 1,
      sym_identifier,
  [4477] = 1,
    ACTIONS(796), 1,
      anon_sym_COLON,
  [4481] = 1,
    ACTIONS(798), 1,
      anon_sym_SEMI,
  [4485] = 1,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
  [4489] = 1,
    ACTIONS(802), 1,
      anon_sym_RBRACK,
  [4493] = 1,
    ACTIONS(804), 1,
      anon_sym_COLON,
  [4497] = 1,
    ACTIONS(806), 1,
      anon_sym_RBRACK,
  [4501] = 1,
    ACTIONS(622), 1,
      anon_sym_SEMI,
  [4505] = 1,
    ACTIONS(233), 1,
      anon_sym_fn,
  [4509] = 1,
    ACTIONS(808), 1,
      ts_builtin_sym_end,
  [4513] = 1,
    ACTIONS(810), 1,
      anon_sym_COLON,
  [4517] = 1,
    ACTIONS(422), 1,
      anon_sym_fn,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 67,
  [SMALL_STATE(5)] = 110,
  [SMALL_STATE(6)] = 146,
  [SMALL_STATE(7)] = 182,
  [SMALL_STATE(8)] = 218,
  [SMALL_STATE(9)] = 251,
  [SMALL_STATE(10)] = 284,
  [SMALL_STATE(11)] = 317,
  [SMALL_STATE(12)] = 350,
  [SMALL_STATE(13)] = 380,
  [SMALL_STATE(14)] = 410,
  [SMALL_STATE(15)] = 440,
  [SMALL_STATE(16)] = 470,
  [SMALL_STATE(17)] = 500,
  [SMALL_STATE(18)] = 530,
  [SMALL_STATE(19)] = 560,
  [SMALL_STATE(20)] = 594,
  [SMALL_STATE(21)] = 624,
  [SMALL_STATE(22)] = 654,
  [SMALL_STATE(23)] = 684,
  [SMALL_STATE(24)] = 714,
  [SMALL_STATE(25)] = 744,
  [SMALL_STATE(26)] = 774,
  [SMALL_STATE(27)] = 804,
  [SMALL_STATE(28)] = 834,
  [SMALL_STATE(29)] = 870,
  [SMALL_STATE(30)] = 906,
  [SMALL_STATE(31)] = 936,
  [SMALL_STATE(32)] = 966,
  [SMALL_STATE(33)] = 996,
  [SMALL_STATE(34)] = 1026,
  [SMALL_STATE(35)] = 1056,
  [SMALL_STATE(36)] = 1086,
  [SMALL_STATE(37)] = 1116,
  [SMALL_STATE(38)] = 1150,
  [SMALL_STATE(39)] = 1180,
  [SMALL_STATE(40)] = 1210,
  [SMALL_STATE(41)] = 1240,
  [SMALL_STATE(42)] = 1270,
  [SMALL_STATE(43)] = 1300,
  [SMALL_STATE(44)] = 1330,
  [SMALL_STATE(45)] = 1360,
  [SMALL_STATE(46)] = 1390,
  [SMALL_STATE(47)] = 1420,
  [SMALL_STATE(48)] = 1450,
  [SMALL_STATE(49)] = 1480,
  [SMALL_STATE(50)] = 1510,
  [SMALL_STATE(51)] = 1540,
  [SMALL_STATE(52)] = 1570,
  [SMALL_STATE(53)] = 1600,
  [SMALL_STATE(54)] = 1634,
  [SMALL_STATE(55)] = 1664,
  [SMALL_STATE(56)] = 1700,
  [SMALL_STATE(57)] = 1730,
  [SMALL_STATE(58)] = 1760,
  [SMALL_STATE(59)] = 1790,
  [SMALL_STATE(60)] = 1820,
  [SMALL_STATE(61)] = 1850,
  [SMALL_STATE(62)] = 1880,
  [SMALL_STATE(63)] = 1911,
  [SMALL_STATE(64)] = 1942,
  [SMALL_STATE(65)] = 1958,
  [SMALL_STATE(66)] = 1974,
  [SMALL_STATE(67)] = 1990,
  [SMALL_STATE(68)] = 2005,
  [SMALL_STATE(69)] = 2020,
  [SMALL_STATE(70)] = 2035,
  [SMALL_STATE(71)] = 2050,
  [SMALL_STATE(72)] = 2065,
  [SMALL_STATE(73)] = 2080,
  [SMALL_STATE(74)] = 2095,
  [SMALL_STATE(75)] = 2110,
  [SMALL_STATE(76)] = 2129,
  [SMALL_STATE(77)] = 2146,
  [SMALL_STATE(78)] = 2173,
  [SMALL_STATE(79)] = 2191,
  [SMALL_STATE(80)] = 2205,
  [SMALL_STATE(81)] = 2223,
  [SMALL_STATE(82)] = 2241,
  [SMALL_STATE(83)] = 2259,
  [SMALL_STATE(84)] = 2277,
  [SMALL_STATE(85)] = 2288,
  [SMALL_STATE(86)] = 2301,
  [SMALL_STATE(87)] = 2314,
  [SMALL_STATE(88)] = 2327,
  [SMALL_STATE(89)] = 2342,
  [SMALL_STATE(90)] = 2355,
  [SMALL_STATE(91)] = 2368,
  [SMALL_STATE(92)] = 2388,
  [SMALL_STATE(93)] = 2398,
  [SMALL_STATE(94)] = 2408,
  [SMALL_STATE(95)] = 2418,
  [SMALL_STATE(96)] = 2428,
  [SMALL_STATE(97)] = 2438,
  [SMALL_STATE(98)] = 2448,
  [SMALL_STATE(99)] = 2458,
  [SMALL_STATE(100)] = 2468,
  [SMALL_STATE(101)] = 2478,
  [SMALL_STATE(102)] = 2488,
  [SMALL_STATE(103)] = 2498,
  [SMALL_STATE(104)] = 2508,
  [SMALL_STATE(105)] = 2518,
  [SMALL_STATE(106)] = 2528,
  [SMALL_STATE(107)] = 2538,
  [SMALL_STATE(108)] = 2548,
  [SMALL_STATE(109)] = 2568,
  [SMALL_STATE(110)] = 2578,
  [SMALL_STATE(111)] = 2598,
  [SMALL_STATE(112)] = 2608,
  [SMALL_STATE(113)] = 2618,
  [SMALL_STATE(114)] = 2628,
  [SMALL_STATE(115)] = 2638,
  [SMALL_STATE(116)] = 2648,
  [SMALL_STATE(117)] = 2658,
  [SMALL_STATE(118)] = 2668,
  [SMALL_STATE(119)] = 2678,
  [SMALL_STATE(120)] = 2688,
  [SMALL_STATE(121)] = 2698,
  [SMALL_STATE(122)] = 2718,
  [SMALL_STATE(123)] = 2728,
  [SMALL_STATE(124)] = 2738,
  [SMALL_STATE(125)] = 2748,
  [SMALL_STATE(126)] = 2758,
  [SMALL_STATE(127)] = 2768,
  [SMALL_STATE(128)] = 2778,
  [SMALL_STATE(129)] = 2788,
  [SMALL_STATE(130)] = 2798,
  [SMALL_STATE(131)] = 2808,
  [SMALL_STATE(132)] = 2818,
  [SMALL_STATE(133)] = 2828,
  [SMALL_STATE(134)] = 2838,
  [SMALL_STATE(135)] = 2848,
  [SMALL_STATE(136)] = 2858,
  [SMALL_STATE(137)] = 2868,
  [SMALL_STATE(138)] = 2888,
  [SMALL_STATE(139)] = 2898,
  [SMALL_STATE(140)] = 2908,
  [SMALL_STATE(141)] = 2917,
  [SMALL_STATE(142)] = 2933,
  [SMALL_STATE(143)] = 2949,
  [SMALL_STATE(144)] = 2963,
  [SMALL_STATE(145)] = 2979,
  [SMALL_STATE(146)] = 2995,
  [SMALL_STATE(147)] = 3011,
  [SMALL_STATE(148)] = 3027,
  [SMALL_STATE(149)] = 3043,
  [SMALL_STATE(150)] = 3059,
  [SMALL_STATE(151)] = 3075,
  [SMALL_STATE(152)] = 3091,
  [SMALL_STATE(153)] = 3107,
  [SMALL_STATE(154)] = 3123,
  [SMALL_STATE(155)] = 3139,
  [SMALL_STATE(156)] = 3155,
  [SMALL_STATE(157)] = 3171,
  [SMALL_STATE(158)] = 3187,
  [SMALL_STATE(159)] = 3203,
  [SMALL_STATE(160)] = 3219,
  [SMALL_STATE(161)] = 3235,
  [SMALL_STATE(162)] = 3251,
  [SMALL_STATE(163)] = 3263,
  [SMALL_STATE(164)] = 3279,
  [SMALL_STATE(165)] = 3295,
  [SMALL_STATE(166)] = 3311,
  [SMALL_STATE(167)] = 3327,
  [SMALL_STATE(168)] = 3341,
  [SMALL_STATE(169)] = 3357,
  [SMALL_STATE(170)] = 3373,
  [SMALL_STATE(171)] = 3389,
  [SMALL_STATE(172)] = 3405,
  [SMALL_STATE(173)] = 3421,
  [SMALL_STATE(174)] = 3437,
  [SMALL_STATE(175)] = 3447,
  [SMALL_STATE(176)] = 3463,
  [SMALL_STATE(177)] = 3479,
  [SMALL_STATE(178)] = 3495,
  [SMALL_STATE(179)] = 3511,
  [SMALL_STATE(180)] = 3527,
  [SMALL_STATE(181)] = 3543,
  [SMALL_STATE(182)] = 3559,
  [SMALL_STATE(183)] = 3575,
  [SMALL_STATE(184)] = 3591,
  [SMALL_STATE(185)] = 3598,
  [SMALL_STATE(186)] = 3609,
  [SMALL_STATE(187)] = 3616,
  [SMALL_STATE(188)] = 3626,
  [SMALL_STATE(189)] = 3636,
  [SMALL_STATE(190)] = 3646,
  [SMALL_STATE(191)] = 3656,
  [SMALL_STATE(192)] = 3666,
  [SMALL_STATE(193)] = 3676,
  [SMALL_STATE(194)] = 3682,
  [SMALL_STATE(195)] = 3688,
  [SMALL_STATE(196)] = 3698,
  [SMALL_STATE(197)] = 3704,
  [SMALL_STATE(198)] = 3714,
  [SMALL_STATE(199)] = 3724,
  [SMALL_STATE(200)] = 3734,
  [SMALL_STATE(201)] = 3744,
  [SMALL_STATE(202)] = 3750,
  [SMALL_STATE(203)] = 3760,
  [SMALL_STATE(204)] = 3770,
  [SMALL_STATE(205)] = 3776,
  [SMALL_STATE(206)] = 3782,
  [SMALL_STATE(207)] = 3792,
  [SMALL_STATE(208)] = 3802,
  [SMALL_STATE(209)] = 3812,
  [SMALL_STATE(210)] = 3822,
  [SMALL_STATE(211)] = 3832,
  [SMALL_STATE(212)] = 3842,
  [SMALL_STATE(213)] = 3848,
  [SMALL_STATE(214)] = 3858,
  [SMALL_STATE(215)] = 3868,
  [SMALL_STATE(216)] = 3875,
  [SMALL_STATE(217)] = 3882,
  [SMALL_STATE(218)] = 3889,
  [SMALL_STATE(219)] = 3894,
  [SMALL_STATE(220)] = 3901,
  [SMALL_STATE(221)] = 3906,
  [SMALL_STATE(222)] = 3913,
  [SMALL_STATE(223)] = 3920,
  [SMALL_STATE(224)] = 3927,
  [SMALL_STATE(225)] = 3934,
  [SMALL_STATE(226)] = 3941,
  [SMALL_STATE(227)] = 3948,
  [SMALL_STATE(228)] = 3955,
  [SMALL_STATE(229)] = 3962,
  [SMALL_STATE(230)] = 3969,
  [SMALL_STATE(231)] = 3976,
  [SMALL_STATE(232)] = 3983,
  [SMALL_STATE(233)] = 3990,
  [SMALL_STATE(234)] = 3997,
  [SMALL_STATE(235)] = 4004,
  [SMALL_STATE(236)] = 4011,
  [SMALL_STATE(237)] = 4018,
  [SMALL_STATE(238)] = 4025,
  [SMALL_STATE(239)] = 4032,
  [SMALL_STATE(240)] = 4039,
  [SMALL_STATE(241)] = 4046,
  [SMALL_STATE(242)] = 4053,
  [SMALL_STATE(243)] = 4060,
  [SMALL_STATE(244)] = 4067,
  [SMALL_STATE(245)] = 4074,
  [SMALL_STATE(246)] = 4081,
  [SMALL_STATE(247)] = 4088,
  [SMALL_STATE(248)] = 4095,
  [SMALL_STATE(249)] = 4102,
  [SMALL_STATE(250)] = 4109,
  [SMALL_STATE(251)] = 4116,
  [SMALL_STATE(252)] = 4123,
  [SMALL_STATE(253)] = 4130,
  [SMALL_STATE(254)] = 4137,
  [SMALL_STATE(255)] = 4144,
  [SMALL_STATE(256)] = 4151,
  [SMALL_STATE(257)] = 4158,
  [SMALL_STATE(258)] = 4165,
  [SMALL_STATE(259)] = 4172,
  [SMALL_STATE(260)] = 4179,
  [SMALL_STATE(261)] = 4186,
  [SMALL_STATE(262)] = 4191,
  [SMALL_STATE(263)] = 4198,
  [SMALL_STATE(264)] = 4205,
  [SMALL_STATE(265)] = 4212,
  [SMALL_STATE(266)] = 4219,
  [SMALL_STATE(267)] = 4226,
  [SMALL_STATE(268)] = 4233,
  [SMALL_STATE(269)] = 4240,
  [SMALL_STATE(270)] = 4247,
  [SMALL_STATE(271)] = 4254,
  [SMALL_STATE(272)] = 4261,
  [SMALL_STATE(273)] = 4265,
  [SMALL_STATE(274)] = 4269,
  [SMALL_STATE(275)] = 4273,
  [SMALL_STATE(276)] = 4277,
  [SMALL_STATE(277)] = 4281,
  [SMALL_STATE(278)] = 4285,
  [SMALL_STATE(279)] = 4289,
  [SMALL_STATE(280)] = 4293,
  [SMALL_STATE(281)] = 4297,
  [SMALL_STATE(282)] = 4301,
  [SMALL_STATE(283)] = 4305,
  [SMALL_STATE(284)] = 4309,
  [SMALL_STATE(285)] = 4313,
  [SMALL_STATE(286)] = 4317,
  [SMALL_STATE(287)] = 4321,
  [SMALL_STATE(288)] = 4325,
  [SMALL_STATE(289)] = 4329,
  [SMALL_STATE(290)] = 4333,
  [SMALL_STATE(291)] = 4337,
  [SMALL_STATE(292)] = 4341,
  [SMALL_STATE(293)] = 4345,
  [SMALL_STATE(294)] = 4349,
  [SMALL_STATE(295)] = 4353,
  [SMALL_STATE(296)] = 4357,
  [SMALL_STATE(297)] = 4361,
  [SMALL_STATE(298)] = 4365,
  [SMALL_STATE(299)] = 4369,
  [SMALL_STATE(300)] = 4373,
  [SMALL_STATE(301)] = 4377,
  [SMALL_STATE(302)] = 4381,
  [SMALL_STATE(303)] = 4385,
  [SMALL_STATE(304)] = 4389,
  [SMALL_STATE(305)] = 4393,
  [SMALL_STATE(306)] = 4397,
  [SMALL_STATE(307)] = 4401,
  [SMALL_STATE(308)] = 4405,
  [SMALL_STATE(309)] = 4409,
  [SMALL_STATE(310)] = 4413,
  [SMALL_STATE(311)] = 4417,
  [SMALL_STATE(312)] = 4421,
  [SMALL_STATE(313)] = 4425,
  [SMALL_STATE(314)] = 4429,
  [SMALL_STATE(315)] = 4433,
  [SMALL_STATE(316)] = 4437,
  [SMALL_STATE(317)] = 4441,
  [SMALL_STATE(318)] = 4445,
  [SMALL_STATE(319)] = 4449,
  [SMALL_STATE(320)] = 4453,
  [SMALL_STATE(321)] = 4457,
  [SMALL_STATE(322)] = 4461,
  [SMALL_STATE(323)] = 4465,
  [SMALL_STATE(324)] = 4469,
  [SMALL_STATE(325)] = 4473,
  [SMALL_STATE(326)] = 4477,
  [SMALL_STATE(327)] = 4481,
  [SMALL_STATE(328)] = 4485,
  [SMALL_STATE(329)] = 4489,
  [SMALL_STATE(330)] = 4493,
  [SMALL_STATE(331)] = 4497,
  [SMALL_STATE(332)] = 4501,
  [SMALL_STATE(333)] = 4505,
  [SMALL_STATE(334)] = 4509,
  [SMALL_STATE(335)] = 4513,
  [SMALL_STATE(336)] = 4517,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 1, .production_id = 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 3, .production_id = 9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(54),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(7),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(308),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(332),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(66),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat2, 2),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat2, 2), SHIFT_REPEAT(181),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat2, 2), SHIFT_REPEAT(299),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat2, 2), SHIFT_REPEAT(336),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat2, 2), SHIFT_REPEAT(189),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat2, 2), SHIFT_REPEAT(174),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 2, .production_id = 4),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 4, .production_id = 15),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 3, .production_id = 7),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 5, .production_id = 19),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 4, .production_id = 13),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 4, .production_id = 14),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 4),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 3, .production_id = 6),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 3, .production_id = 8),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_segment, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_segment, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(159),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(229),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_attribute, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_segment, 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_segment, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_params, 5),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_params, 5),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(181),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_params, 3),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_params, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_params, 4),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_params, 4),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 56),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 28),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 48),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 29),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_block, 5, .production_id = 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 47),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 24),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 16, .production_id = 77),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 46),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 15, .production_id = 76),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, .production_id = 23),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 27),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 53),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 54),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 55),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 15, .production_id = 75),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_block, 4, .production_id = 1),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extern_block_repeat1, 2), SHIFT_REPEAT(318),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extern_block_repeat1, 2),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extern_block_repeat1, 2), SHIFT_REPEAT(174),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_block, 4),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 45),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 15, .production_id = 74),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 14, .production_id = 73),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 31),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 37),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 14, .production_id = 72),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 44),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 6, .production_id = 11),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, .production_id = 20),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 57),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 35),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 43),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 14, .production_id = 71),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 58),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 14, .production_id = 70),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 7, .production_id = 18),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 36),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 14, .production_id = 69),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 67),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 62),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 63),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 64),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 38),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 65),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 66),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_block, 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__outer_attribute, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility_modifier, 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility_modifier, 4),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_expression_repeat1, 2), SHIFT_REPEAT(40),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_expression_repeat1, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_modifier, 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 3, .production_id = 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__extern_item, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 4, .production_id = 5),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 5, .production_id = 10),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_repeat1, 2), SHIFT_REPEAT(62),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_repeat1, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 6, .production_id = 16),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat2, 2, .production_id = 21), SHIFT_REPEAT(302),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat2, 2, .production_id = 21),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat2, 4, .production_id = 30),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_modifier, 2, .production_id = 1),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 8, .production_id = 32),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 8, .production_id = 33),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 8, .production_id = 34),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 5, .production_id = 17),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 7, .production_id = 25),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 9, .production_id = 40),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 9, .production_id = 41),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 9, .production_id = 42),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 4, .production_id = 12),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 10, .production_id = 52),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 10, .production_id = 49),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 10, .production_id = 50),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 10, .production_id = 51),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 7, .production_id = 26),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 9, .production_id = 39),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 11, .production_id = 59),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 11, .production_id = 60),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 11, .production_id = 61),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 12, .production_id = 68),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 6, .production_id = 22),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [808] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
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
