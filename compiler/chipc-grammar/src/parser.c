#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 268
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 15
#define PRODUCTION_ID_COUNT 64

enum {
  sym_word = 1,
  anon_sym_fn = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COLON = 4,
  anon_sym_COMMA = 5,
  anon_sym_RPAREN = 6,
  anon_sym_DASH_GT = 7,
  anon_sym_const = 8,
  anon_sym_unsafe = 9,
  anon_sym_extern = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_SEMI = 13,
  anon_sym_pub = 14,
  anon_sym_super = 15,
  anon_sym_package = 16,
  anon_sym_let = 17,
  anon_sym_COLON_EQ = 18,
  anon_sym_COLON_COLON = 19,
  sym_identifier = 20,
  anon_sym_COLON_COLON_LT = 21,
  anon_sym_GT = 22,
  sym_unit_literal = 23,
  sym_string_literal = 24,
  anon_sym_true = 25,
  anon_sym_false = 26,
  anon_sym_DOT = 27,
  anon_sym_u8 = 28,
  anon_sym_u16 = 29,
  anon_sym_u32 = 30,
  anon_sym_u64 = 31,
  anon_sym_u128 = 32,
  anon_sym_usize = 33,
  anon_sym_i8 = 34,
  anon_sym_i16 = 35,
  anon_sym_i32 = 36,
  anon_sym_i64 = 37,
  anon_sym_i128 = 38,
  anon_sym_isize = 39,
  anon_sym_f32 = 40,
  anon_sym_f64 = 41,
  sym_digits = 42,
  sym_file = 43,
  sym__item = 44,
  sym_function = 45,
  sym_function_modifier = 46,
  sym_type = 47,
  sym_extern_block = 48,
  sym__extern_item = 49,
  sym_extern_function = 50,
  sym_visibility_modifier = 51,
  sym__expr = 52,
  sym_codeblock = 53,
  sym_binding = 54,
  sym_tuple_expression = 55,
  sym_path = 56,
  sym_path_segment = 57,
  sym_generic_args = 58,
  sym__literal = 59,
  sym_boolean_literal = 60,
  sym_numeric_literal = 61,
  aux_sym_file_repeat1 = 62,
  aux_sym_function_repeat1 = 63,
  aux_sym_extern_block_repeat1 = 64,
  aux_sym_codeblock_repeat1 = 65,
  aux_sym_tuple_expression_repeat1 = 66,
  aux_sym_path_repeat1 = 67,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_word] = "word",
  [anon_sym_fn] = "fn",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
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
  [sym_generic_args] = "generic_args",
  [sym__literal] = "_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_numeric_literal] = "numeric_literal",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_function_repeat1] = "function_repeat1",
  [aux_sym_extern_block_repeat1] = "extern_block_repeat1",
  [aux_sym_codeblock_repeat1] = "codeblock_repeat1",
  [aux_sym_tuple_expression_repeat1] = "tuple_expression_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_word] = sym_word,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [sym_generic_args] = sym_generic_args,
  [sym__literal] = sym__literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_numeric_literal] = sym_numeric_literal,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_function_repeat1] = aux_sym_function_repeat1,
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
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [sym_generic_args] = {
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
  [aux_sym_function_repeat1] = {
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
  field_body = 2,
  field_float_part = 3,
  field_identifier = 4,
  field_inputs = 5,
  field_members = 6,
  field_name = 7,
  field_output = 8,
  field_statements = 9,
  field_suffix = 10,
  field_trailing = 11,
  field_type = 12,
  field_value = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_abi] = "abi",
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
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 1},
  [9] = {.index = 11, .length = 1},
  [10] = {.index = 12, .length = 1},
  [11] = {.index = 13, .length = 2},
  [12] = {.index = 15, .length = 3},
  [13] = {.index = 18, .length = 4},
  [14] = {.index = 22, .length = 2},
  [15] = {.index = 24, .length = 2},
  [16] = {.index = 26, .length = 2},
  [17] = {.index = 28, .length = 2},
  [18] = {.index = 30, .length = 3},
  [19] = {.index = 33, .length = 5},
  [20] = {.index = 38, .length = 4},
  [21] = {.index = 42, .length = 2},
  [22] = {.index = 44, .length = 3},
  [23] = {.index = 47, .length = 3},
  [24] = {.index = 50, .length = 6},
  [25] = {.index = 56, .length = 2},
  [26] = {.index = 58, .length = 8},
  [27] = {.index = 66, .length = 5},
  [28] = {.index = 71, .length = 7},
  [29] = {.index = 78, .length = 4},
  [30] = {.index = 82, .length = 5},
  [31] = {.index = 87, .length = 3},
  [32] = {.index = 90, .length = 6},
  [33] = {.index = 96, .length = 9},
  [34] = {.index = 105, .length = 5},
  [35] = {.index = 110, .length = 8},
  [36] = {.index = 118, .length = 5},
  [37] = {.index = 123, .length = 7},
  [38] = {.index = 130, .length = 6},
  [39] = {.index = 136, .length = 8},
  [40] = {.index = 144, .length = 5},
  [41] = {.index = 149, .length = 7},
  [42] = {.index = 156, .length = 9},
  [43] = {.index = 165, .length = 6},
  [44] = {.index = 171, .length = 8},
  [45] = {.index = 179, .length = 5},
  [46] = {.index = 184, .length = 8},
  [47] = {.index = 192, .length = 6},
  [48] = {.index = 198, .length = 9},
  [49] = {.index = 207, .length = 6},
  [50] = {.index = 213, .length = 8},
  [51] = {.index = 221, .length = 10},
  [52] = {.index = 231, .length = 9},
  [53] = {.index = 240, .length = 6},
  [54] = {.index = 246, .length = 8},
  [55] = {.index = 254, .length = 7},
  [56] = {.index = 261, .length = 9},
  [57] = {.index = 270, .length = 6},
  [58] = {.index = 276, .length = 9},
  [59] = {.index = 285, .length = 9},
  [60] = {.index = 294, .length = 10},
  [61] = {.index = 304, .length = 7},
  [62] = {.index = 311, .length = 9},
  [63] = {.index = 320, .length = 10},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_abi, 1},
  [1] =
    {field_value, 0},
  [2] =
    {field_body, 5},
    {field_name, 1},
  [4] =
    {field_name, 1},
  [5] =
    {field_suffix, 1},
    {field_value, 0},
  [7] =
    {field_name, 2},
  [8] =
    {field_body, 6},
    {field_name, 2},
  [10] =
    {field_members, 1},
  [11] =
    {field_trailing, 1},
  [12] =
    {field_statements, 1},
  [13] =
    {field_float_part, 2},
    {field_value, 0},
  [15] =
    {field_body, 7},
    {field_name, 1},
    {field_output, 5},
  [18] =
    {field_identifier, 0, .inherited = true},
    {field_identifier, 1, .inherited = true},
    {field_type, 0, .inherited = true},
    {field_type, 1, .inherited = true},
  [22] =
    {field_name, 1},
    {field_output, 5},
  [24] =
    {field_body, 7},
    {field_name, 3},
  [26] =
    {field_members, 1},
    {field_members, 2},
  [28] =
    {field_statements, 1},
    {field_trailing, 2},
  [30] =
    {field_float_part, 2},
    {field_suffix, 3},
    {field_value, 0},
  [33] =
    {field_body, 8},
    {field_identifier, 3},
    {field_inputs, 4},
    {field_name, 1},
    {field_type, 5},
  [38] =
    {field_identifier, 3},
    {field_inputs, 4},
    {field_name, 1},
    {field_type, 5},
  [42] =
    {field_name, 2},
    {field_output, 6},
  [44] =
    {field_body, 8},
    {field_name, 2},
    {field_output, 6},
  [47] =
    {field_members, 1},
    {field_members, 2},
    {field_members, 3},
  [50] =
    {field_body, 9},
    {field_identifier, 3},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_name, 1},
    {field_type, 5},
  [56] =
    {field_identifier, 1},
    {field_type, 3},
  [58] =
    {field_body, 9},
    {field_identifier, 3},
    {field_identifier, 6, .inherited = true},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_name, 1},
    {field_type, 5},
    {field_type, 6, .inherited = true},
  [66] =
    {field_identifier, 3},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_name, 1},
    {field_type, 5},
  [71] =
    {field_identifier, 3},
    {field_identifier, 6, .inherited = true},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_name, 1},
    {field_type, 5},
    {field_type, 6, .inherited = true},
  [78] =
    {field_identifier, 4},
    {field_inputs, 5},
    {field_name, 2},
    {field_type, 6},
  [82] =
    {field_body, 9},
    {field_identifier, 4},
    {field_inputs, 5},
    {field_name, 2},
    {field_type, 6},
  [87] =
    {field_body, 9},
    {field_name, 3},
    {field_output, 7},
  [90] =
    {field_body, 10},
    {field_identifier, 3},
    {field_inputs, 4},
    {field_name, 1},
    {field_output, 8},
    {field_type, 5},
  [96] =
    {field_body, 10},
    {field_identifier, 3},
    {field_identifier, 6, .inherited = true},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_inputs, 7},
    {field_name, 1},
    {field_type, 5},
    {field_type, 6, .inherited = true},
  [105] =
    {field_identifier, 3},
    {field_inputs, 4},
    {field_name, 1},
    {field_output, 8},
    {field_type, 5},
  [110] =
    {field_identifier, 3},
    {field_identifier, 6, .inherited = true},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_inputs, 7},
    {field_name, 1},
    {field_type, 5},
    {field_type, 6, .inherited = true},
  [118] =
    {field_identifier, 4},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_name, 2},
    {field_type, 6},
  [123] =
    {field_identifier, 4},
    {field_identifier, 7, .inherited = true},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_name, 2},
    {field_type, 6},
    {field_type, 7, .inherited = true},
  [130] =
    {field_body, 10},
    {field_identifier, 4},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_name, 2},
    {field_type, 6},
  [136] =
    {field_body, 10},
    {field_identifier, 4},
    {field_identifier, 7, .inherited = true},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_name, 2},
    {field_type, 6},
    {field_type, 7, .inherited = true},
  [144] =
    {field_body, 10},
    {field_identifier, 5},
    {field_inputs, 6},
    {field_name, 3},
    {field_type, 7},
  [149] =
    {field_body, 11},
    {field_identifier, 3},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_name, 1},
    {field_output, 9},
    {field_type, 5},
  [156] =
    {field_body, 11},
    {field_identifier, 3},
    {field_identifier, 6, .inherited = true},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_name, 1},
    {field_output, 9},
    {field_type, 5},
    {field_type, 6, .inherited = true},
  [165] =
    {field_identifier, 3},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_name, 1},
    {field_output, 9},
    {field_type, 5},
  [171] =
    {field_identifier, 3},
    {field_identifier, 6, .inherited = true},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_name, 1},
    {field_output, 9},
    {field_type, 5},
    {field_type, 6, .inherited = true},
  [179] =
    {field_identifier, 4},
    {field_inputs, 5},
    {field_name, 2},
    {field_output, 9},
    {field_type, 6},
  [184] =
    {field_identifier, 4},
    {field_identifier, 7, .inherited = true},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_inputs, 8},
    {field_name, 2},
    {field_type, 6},
    {field_type, 7, .inherited = true},
  [192] =
    {field_body, 11},
    {field_identifier, 4},
    {field_inputs, 5},
    {field_name, 2},
    {field_output, 9},
    {field_type, 6},
  [198] =
    {field_body, 11},
    {field_identifier, 4},
    {field_identifier, 7, .inherited = true},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_inputs, 8},
    {field_name, 2},
    {field_type, 6},
    {field_type, 7, .inherited = true},
  [207] =
    {field_body, 11},
    {field_identifier, 5},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_name, 3},
    {field_type, 7},
  [213] =
    {field_body, 11},
    {field_identifier, 5},
    {field_identifier, 8, .inherited = true},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_name, 3},
    {field_type, 7},
    {field_type, 8, .inherited = true},
  [221] =
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
  [231] =
    {field_identifier, 3},
    {field_identifier, 6, .inherited = true},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_inputs, 7},
    {field_name, 1},
    {field_output, 10},
    {field_type, 5},
    {field_type, 6, .inherited = true},
  [240] =
    {field_identifier, 4},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_name, 2},
    {field_output, 10},
    {field_type, 6},
  [246] =
    {field_identifier, 4},
    {field_identifier, 7, .inherited = true},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_name, 2},
    {field_output, 10},
    {field_type, 6},
    {field_type, 7, .inherited = true},
  [254] =
    {field_body, 12},
    {field_identifier, 4},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_name, 2},
    {field_output, 10},
    {field_type, 6},
  [261] =
    {field_body, 12},
    {field_identifier, 4},
    {field_identifier, 7, .inherited = true},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_name, 2},
    {field_output, 10},
    {field_type, 6},
    {field_type, 7, .inherited = true},
  [270] =
    {field_body, 12},
    {field_identifier, 5},
    {field_inputs, 6},
    {field_name, 3},
    {field_output, 10},
    {field_type, 7},
  [276] =
    {field_body, 12},
    {field_identifier, 5},
    {field_identifier, 8, .inherited = true},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_inputs, 9},
    {field_name, 3},
    {field_type, 7},
    {field_type, 8, .inherited = true},
  [285] =
    {field_identifier, 4},
    {field_identifier, 7, .inherited = true},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_inputs, 8},
    {field_name, 2},
    {field_output, 11},
    {field_type, 6},
    {field_type, 7, .inherited = true},
  [294] =
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
  [304] =
    {field_body, 13},
    {field_identifier, 5},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_name, 3},
    {field_output, 11},
    {field_type, 7},
  [311] =
    {field_body, 13},
    {field_identifier, 5},
    {field_identifier, 8, .inherited = true},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_name, 3},
    {field_output, 11},
    {field_type, 7},
    {field_type, 8, .inherited = true},
  [320] =
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
      if (eof) ADVANCE(8);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '>') ADVANCE(26);
      if (lookahead == '{') ADVANCE(18);
      if (lookahead == '}') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (sym_word_character_set_1(lookahead)) ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (sym_word_character_set_1(lookahead)) ADVANCE(31);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(17);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(27);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(23);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '=') ADVANCE(21);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(22);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '<') ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_LT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_unit_literal);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_digits);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_word);
      if (sym_word_character_set_2(lookahead)) ADVANCE(31);
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
  [19] = {.lex_state = 0},
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
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 4},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 4},
  [223] = {.lex_state = 4},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 4},
  [227] = {.lex_state = 2},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 4},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 4},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 2},
  [237] = {.lex_state = 4},
  [238] = {.lex_state = 2},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 2},
  [242] = {.lex_state = 4},
  [243] = {.lex_state = 4},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 2},
  [248] = {.lex_state = 4},
  [249] = {.lex_state = 4},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 2},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 4},
  [256] = {.lex_state = 2},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 4},
  [259] = {.lex_state = 2},
  [260] = {.lex_state = 4},
  [261] = {.lex_state = 5},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 4},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 4},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [sym_file] = STATE(264),
    [sym__item] = STATE(45),
    [sym_function] = STATE(45),
    [sym_function_modifier] = STATE(240),
    [sym_extern_block] = STATE(45),
    [sym_visibility_modifier] = STATE(116),
    [aux_sym_file_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_fn] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(7),
    [anon_sym_unsafe] = ACTIONS(7),
    [anon_sym_extern] = ACTIONS(9),
    [anon_sym_pub] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(13), 11,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_pub,
      anon_sym_GT,
    ACTIONS(17), 14,
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
  [33] = 2,
    ACTIONS(19), 11,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [63] = 9,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(26), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(40), 1,
      sym_digits,
    STATE(4), 1,
      aux_sym_codeblock_repeat1,
    ACTIONS(34), 2,
      sym_unit_literal,
      sym_string_literal,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(221), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [99] = 9,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    STATE(6), 1,
      aux_sym_codeblock_repeat1,
    ACTIONS(51), 2,
      sym_unit_literal,
      sym_string_literal,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(173), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [135] = 9,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_codeblock_repeat1,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(59), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(192), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [171] = 8,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(63), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(151), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [204] = 8,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(65), 1,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(63), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(151), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [237] = 8,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(67), 1,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(63), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(151), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [270] = 8,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(63), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(151), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [303] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(71), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(87), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [333] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(73), 2,
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
  [363] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(63), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(151), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [393] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(75), 2,
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
  [423] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(77), 2,
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
  [453] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(79), 2,
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
  [483] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(81), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(74), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [513] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(83), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(67), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [543] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(85), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(79), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [573] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(87), 2,
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
  [603] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(89), 2,
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
  [633] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(91), 2,
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
  [663] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(93), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(90), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [693] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(95), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(73), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [723] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(97), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(76), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [753] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(99), 2,
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
  [783] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(78), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [813] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(103), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(72), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [843] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(105), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(80), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [873] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(107), 2,
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
  [903] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(109), 2,
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
  [933] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(111), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(96), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [963] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(113), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(52), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [993] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(115), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(69), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1023] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(117), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(148), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1053] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(119), 2,
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
  [1083] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(121), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(86), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1113] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(123), 2,
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
  [1143] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(125), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(161), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1173] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(127), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(65), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1203] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(129), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(68), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1233] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(131), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(89), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1263] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(133), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(88), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1293] = 7,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      sym_digits,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(135), 2,
      sym_unit_literal,
      sym_string_literal,
    STATE(66), 7,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1323] = 8,
    ACTIONS(5), 1,
      anon_sym_fn,
    ACTIONS(9), 1,
      anon_sym_extern,
    ACTIONS(11), 1,
      anon_sym_pub,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    STATE(116), 1,
      sym_visibility_modifier,
    STATE(240), 1,
      sym_function_modifier,
    ACTIONS(7), 2,
      anon_sym_const,
      anon_sym_unsafe,
    STATE(46), 4,
      sym__item,
      sym_function,
      sym_extern_block,
      aux_sym_file_repeat1,
  [1352] = 8,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 1,
      anon_sym_fn,
    ACTIONS(147), 1,
      anon_sym_extern,
    ACTIONS(150), 1,
      anon_sym_pub,
    STATE(116), 1,
      sym_visibility_modifier,
    STATE(240), 1,
      sym_function_modifier,
    ACTIONS(144), 2,
      anon_sym_const,
      anon_sym_unsafe,
    STATE(46), 4,
      sym__item,
      sym_function,
      sym_extern_block,
      aux_sym_file_repeat1,
  [1381] = 1,
    ACTIONS(153), 11,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_pub,
      anon_sym_GT,
  [1395] = 1,
    ACTIONS(155), 11,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_pub,
      anon_sym_GT,
  [1409] = 1,
    ACTIONS(157), 11,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_pub,
      anon_sym_GT,
  [1423] = 1,
    ACTIONS(159), 11,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_pub,
      anon_sym_GT,
  [1437] = 1,
    ACTIONS(161), 11,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_pub,
      anon_sym_GT,
  [1451] = 1,
    ACTIONS(163), 11,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_pub,
      anon_sym_GT,
  [1465] = 1,
    ACTIONS(165), 11,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_pub,
      anon_sym_GT,
  [1479] = 1,
    ACTIONS(167), 11,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_pub,
      anon_sym_GT,
  [1493] = 1,
    ACTIONS(169), 11,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_pub,
      anon_sym_GT,
  [1507] = 1,
    ACTIONS(171), 11,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_pub,
      anon_sym_GT,
  [1521] = 1,
    ACTIONS(173), 11,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_pub,
      anon_sym_GT,
  [1535] = 2,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_let,
      sym_unit_literal,
      sym_string_literal,
      anon_sym_true,
      anon_sym_false,
      sym_digits,
  [1549] = 6,
    ACTIONS(11), 1,
      anon_sym_pub,
    ACTIONS(177), 1,
      anon_sym_fn,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    STATE(244), 1,
      sym_visibility_modifier,
    STATE(245), 1,
      sym_extern_function,
    STATE(64), 2,
      sym__extern_item,
      aux_sym_extern_block_repeat1,
  [1569] = 6,
    ACTIONS(11), 1,
      anon_sym_pub,
    ACTIONS(177), 1,
      anon_sym_fn,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    STATE(244), 1,
      sym_visibility_modifier,
    STATE(245), 1,
      sym_extern_function,
    STATE(61), 2,
      sym__extern_item,
      aux_sym_extern_block_repeat1,
  [1589] = 6,
    ACTIONS(183), 1,
      anon_sym_fn,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    ACTIONS(188), 1,
      anon_sym_pub,
    STATE(244), 1,
      sym_visibility_modifier,
    STATE(245), 1,
      sym_extern_function,
    STATE(61), 2,
      sym__extern_item,
      aux_sym_extern_block_repeat1,
  [1609] = 4,
    ACTIONS(195), 1,
      anon_sym_COLON_COLON_LT,
    STATE(133), 1,
      sym_generic_args,
    ACTIONS(191), 2,
      anon_sym_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(193), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1625] = 6,
    ACTIONS(11), 1,
      anon_sym_pub,
    ACTIONS(177), 1,
      anon_sym_fn,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    STATE(244), 1,
      sym_visibility_modifier,
    STATE(245), 1,
      sym_extern_function,
    STATE(60), 2,
      sym__extern_item,
      aux_sym_extern_block_repeat1,
  [1645] = 6,
    ACTIONS(11), 1,
      anon_sym_pub,
    ACTIONS(177), 1,
      anon_sym_fn,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    STATE(244), 1,
      sym_visibility_modifier,
    STATE(245), 1,
      sym_extern_function,
    STATE(61), 2,
      sym__extern_item,
      aux_sym_extern_block_repeat1,
  [1665] = 1,
    ACTIONS(201), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1674] = 1,
    ACTIONS(203), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1683] = 1,
    ACTIONS(205), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1692] = 1,
    ACTIONS(207), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1701] = 1,
    ACTIONS(209), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1710] = 4,
    ACTIONS(211), 1,
      anon_sym_COLON,
    ACTIONS(215), 1,
      anon_sym_COLON_COLON,
    STATE(82), 1,
      aux_sym_path_repeat1,
    ACTIONS(213), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1725] = 1,
    ACTIONS(217), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1734] = 1,
    ACTIONS(219), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1743] = 1,
    ACTIONS(221), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1752] = 1,
    ACTIONS(223), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1761] = 1,
    ACTIONS(225), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1770] = 1,
    ACTIONS(227), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1779] = 4,
    ACTIONS(229), 1,
      anon_sym_COLON,
    ACTIONS(233), 1,
      anon_sym_COLON_COLON,
    STATE(91), 1,
      aux_sym_path_repeat1,
    ACTIONS(231), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1794] = 1,
    ACTIONS(235), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1803] = 1,
    ACTIONS(237), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1812] = 1,
    ACTIONS(239), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1821] = 3,
    ACTIONS(241), 1,
      sym_identifier,
    STATE(114), 1,
      sym_path_segment,
    ACTIONS(231), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1834] = 4,
    ACTIONS(229), 1,
      anon_sym_COLON,
    ACTIONS(233), 1,
      anon_sym_COLON_COLON,
    STATE(98), 1,
      aux_sym_path_repeat1,
    ACTIONS(231), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1849] = 1,
    ACTIONS(243), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1858] = 1,
    ACTIONS(245), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1867] = 3,
    ACTIONS(241), 1,
      sym_identifier,
    STATE(114), 1,
      sym_path_segment,
    ACTIONS(247), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1880] = 1,
    ACTIONS(249), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1889] = 1,
    ACTIONS(251), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1898] = 1,
    ACTIONS(253), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1907] = 1,
    ACTIONS(255), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1916] = 1,
    ACTIONS(257), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1925] = 4,
    ACTIONS(259), 1,
      anon_sym_COLON,
    ACTIONS(263), 1,
      anon_sym_COLON_COLON,
    STATE(98), 1,
      aux_sym_path_repeat1,
    ACTIONS(261), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1940] = 1,
    ACTIONS(265), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1949] = 1,
    ACTIONS(267), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1958] = 1,
    ACTIONS(269), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1967] = 1,
    ACTIONS(271), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1976] = 1,
    ACTIONS(273), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1985] = 1,
    ACTIONS(275), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1994] = 4,
    ACTIONS(277), 1,
      anon_sym_COLON,
    ACTIONS(281), 1,
      anon_sym_COLON_COLON,
    STATE(98), 1,
      aux_sym_path_repeat1,
    ACTIONS(279), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [2009] = 1,
    ACTIONS(284), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2018] = 1,
    ACTIONS(286), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2027] = 1,
    ACTIONS(288), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2036] = 1,
    ACTIONS(290), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2045] = 1,
    ACTIONS(292), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2054] = 1,
    ACTIONS(294), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2063] = 1,
    ACTIONS(296), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2072] = 3,
    ACTIONS(241), 1,
      sym_identifier,
    STATE(114), 1,
      sym_path_segment,
    ACTIONS(261), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [2085] = 5,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_path_segment,
    STATE(146), 1,
      sym_path,
    STATE(150), 1,
      sym_type,
  [2101] = 5,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_path_segment,
    STATE(146), 1,
      sym_path,
    STATE(237), 1,
      sym_type,
  [2117] = 5,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_path_segment,
    STATE(146), 1,
      sym_path,
    STATE(231), 1,
      sym_type,
  [2133] = 5,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_path_segment,
    STATE(146), 1,
      sym_path,
    STATE(152), 1,
      sym_type,
  [2149] = 5,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_path_segment,
    STATE(146), 1,
      sym_path,
    STATE(220), 1,
      sym_type,
  [2165] = 5,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_path_segment,
    STATE(146), 1,
      sym_path,
    STATE(263), 1,
      sym_type,
  [2181] = 5,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_path_segment,
    STATE(146), 1,
      sym_path,
    STATE(226), 1,
      sym_type,
  [2197] = 2,
    ACTIONS(277), 1,
      anon_sym_COLON,
    ACTIONS(279), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
  [2207] = 2,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 4,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
  [2217] = 4,
    ACTIONS(304), 1,
      anon_sym_fn,
    ACTIONS(306), 1,
      anon_sym_extern,
    STATE(254), 1,
      sym_function_modifier,
    ACTIONS(7), 2,
      anon_sym_const,
      anon_sym_unsafe,
  [2231] = 5,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_path_segment,
    STATE(146), 1,
      sym_path,
    STATE(216), 1,
      sym_type,
  [2247] = 5,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_path_segment,
    STATE(146), 1,
      sym_path,
    STATE(262), 1,
      sym_type,
  [2263] = 5,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_path_segment,
    STATE(146), 1,
      sym_path,
    STATE(260), 1,
      sym_type,
  [2279] = 5,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_path_segment,
    STATE(146), 1,
      sym_path,
    STATE(249), 1,
      sym_type,
  [2295] = 5,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_path_segment,
    STATE(146), 1,
      sym_path,
    STATE(253), 1,
      sym_type,
  [2311] = 2,
    ACTIONS(308), 1,
      anon_sym_COLON,
    ACTIONS(310), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
  [2321] = 5,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_path_segment,
    STATE(146), 1,
      sym_path,
    STATE(217), 1,
      sym_type,
  [2337] = 5,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_path_segment,
    STATE(146), 1,
      sym_path,
    STATE(156), 1,
      sym_type,
  [2353] = 5,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_path_segment,
    STATE(146), 1,
      sym_path,
    STATE(251), 1,
      sym_type,
  [2369] = 5,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_path_segment,
    STATE(146), 1,
      sym_path,
    STATE(250), 1,
      sym_type,
  [2385] = 5,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_path_segment,
    STATE(146), 1,
      sym_path,
    STATE(233), 1,
      sym_type,
  [2401] = 5,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_path_segment,
    STATE(146), 1,
      sym_path,
    STATE(219), 1,
      sym_type,
  [2417] = 5,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_path_segment,
    STATE(146), 1,
      sym_path,
    STATE(223), 1,
      sym_type,
  [2433] = 5,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_path_segment,
    STATE(146), 1,
      sym_path,
    STATE(248), 1,
      sym_type,
  [2449] = 2,
    ACTIONS(312), 1,
      anon_sym_COLON,
    ACTIONS(314), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
  [2459] = 5,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_path_segment,
    STATE(146), 1,
      sym_path,
    STATE(215), 1,
      sym_type,
  [2475] = 2,
    ACTIONS(316), 1,
      anon_sym_COLON,
    ACTIONS(318), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
  [2485] = 5,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_path_segment,
    STATE(146), 1,
      sym_path,
    STATE(243), 1,
      sym_type,
  [2501] = 5,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_path_segment,
    STATE(146), 1,
      sym_path,
    STATE(214), 1,
      sym_type,
  [2517] = 5,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_path_segment,
    STATE(146), 1,
      sym_path,
    STATE(230), 1,
      sym_type,
  [2533] = 5,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_path_segment,
    STATE(146), 1,
      sym_path,
    STATE(158), 1,
      sym_type,
  [2549] = 5,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_path_segment,
    STATE(146), 1,
      sym_path,
    STATE(246), 1,
      sym_type,
  [2565] = 5,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_path_segment,
    STATE(146), 1,
      sym_path,
    STATE(232), 1,
      sym_type,
  [2581] = 2,
    ACTIONS(320), 1,
      anon_sym_COLON,
    ACTIONS(322), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
  [2591] = 5,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_path_segment,
    STATE(146), 1,
      sym_path,
    STATE(179), 1,
      sym_type,
  [2607] = 5,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_path_segment,
    STATE(146), 1,
      sym_path,
    STATE(159), 1,
      sym_type,
  [2623] = 5,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_path_segment,
    STATE(146), 1,
      sym_path,
    STATE(234), 1,
      sym_type,
  [2639] = 5,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_path_segment,
    STATE(146), 1,
      sym_path,
    STATE(242), 1,
      sym_type,
  [2655] = 1,
    ACTIONS(324), 4,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
  [2662] = 1,
    ACTIONS(326), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [2669] = 3,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_tuple_expression_repeat1,
    ACTIONS(331), 2,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2680] = 3,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    STATE(164), 1,
      aux_sym_tuple_expression_repeat1,
  [2690] = 3,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      aux_sym_function_repeat1,
  [2700] = 3,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      aux_sym_function_repeat1,
  [2710] = 1,
    ACTIONS(331), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2716] = 3,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      aux_sym_function_repeat1,
  [2726] = 1,
    ACTIONS(349), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [2732] = 3,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      aux_sym_function_repeat1,
  [2742] = 3,
    ACTIONS(67), 1,
      anon_sym_GT,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_tuple_expression_repeat1,
  [2752] = 3,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      aux_sym_function_repeat1,
  [2762] = 3,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      aux_sym_function_repeat1,
  [2772] = 3,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      aux_sym_function_repeat1,
  [2782] = 3,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(163), 1,
      aux_sym_function_repeat1,
  [2792] = 3,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      aux_sym_function_repeat1,
  [2802] = 3,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    ACTIONS(380), 1,
      anon_sym_GT,
    STATE(155), 1,
      aux_sym_tuple_expression_repeat1,
  [2812] = 3,
    ACTIONS(382), 1,
      anon_sym_fn,
    ACTIONS(384), 1,
      anon_sym_LBRACE,
    ACTIONS(386), 1,
      sym_string_literal,
  [2822] = 3,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      aux_sym_function_repeat1,
  [2832] = 3,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_tuple_expression_repeat1,
  [2842] = 3,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      aux_sym_function_repeat1,
  [2852] = 2,
    ACTIONS(398), 1,
      anon_sym_COLON,
    ACTIONS(400), 1,
      anon_sym_DASH_GT,
  [2859] = 2,
    ACTIONS(402), 1,
      anon_sym_DASH_GT,
    ACTIONS(404), 1,
      anon_sym_SEMI,
  [2866] = 2,
    ACTIONS(406), 1,
      anon_sym_COLON,
    ACTIONS(408), 1,
      anon_sym_DASH_GT,
  [2873] = 2,
    ACTIONS(410), 1,
      anon_sym_COLON,
    ACTIONS(412), 1,
      anon_sym_DASH_GT,
  [2880] = 2,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    ACTIONS(416), 1,
      sym_identifier,
  [2887] = 2,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
  [2894] = 2,
    ACTIONS(420), 1,
      anon_sym_COLON,
    ACTIONS(422), 1,
      anon_sym_DASH_GT,
  [2901] = 2,
    ACTIONS(424), 1,
      anon_sym_RBRACE,
    ACTIONS(426), 1,
      anon_sym_SEMI,
  [2908] = 2,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
  [2915] = 2,
    ACTIONS(430), 1,
      anon_sym_COLON,
    ACTIONS(432), 1,
      anon_sym_DASH_GT,
  [2922] = 2,
    ACTIONS(434), 1,
      anon_sym_fn,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
  [2929] = 2,
    ACTIONS(438), 1,
      anon_sym_COLON,
    ACTIONS(440), 1,
      anon_sym_DASH_GT,
  [2936] = 1,
    ACTIONS(442), 2,
      anon_sym_super,
      anon_sym_package,
  [2941] = 1,
    ACTIONS(444), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2946] = 2,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    ACTIONS(448), 1,
      sym_identifier,
  [2953] = 2,
    ACTIONS(382), 1,
      anon_sym_fn,
    ACTIONS(450), 1,
      sym_string_literal,
  [2960] = 2,
    ACTIONS(452), 1,
      anon_sym_DASH_GT,
    ACTIONS(454), 1,
      anon_sym_SEMI,
  [2967] = 2,
    ACTIONS(456), 1,
      anon_sym_COLON,
    ACTIONS(458), 1,
      anon_sym_DASH_GT,
  [2974] = 2,
    ACTIONS(460), 1,
      anon_sym_DASH_GT,
    ACTIONS(462), 1,
      anon_sym_SEMI,
  [2981] = 2,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
  [2988] = 2,
    ACTIONS(466), 1,
      anon_sym_DASH_GT,
    ACTIONS(468), 1,
      anon_sym_SEMI,
  [2995] = 2,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
  [3002] = 2,
    ACTIONS(472), 1,
      anon_sym_DASH_GT,
    ACTIONS(474), 1,
      anon_sym_SEMI,
  [3009] = 2,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
    ACTIONS(478), 1,
      sym_identifier,
  [3016] = 2,
    ACTIONS(480), 1,
      anon_sym_COLON,
    ACTIONS(482), 1,
      anon_sym_DASH_GT,
  [3023] = 2,
    ACTIONS(484), 1,
      anon_sym_COLON,
    ACTIONS(486), 1,
      anon_sym_DASH_GT,
  [3030] = 2,
    ACTIONS(426), 1,
      anon_sym_SEMI,
    ACTIONS(488), 1,
      anon_sym_RBRACE,
  [3037] = 2,
    ACTIONS(241), 1,
      sym_identifier,
    STATE(77), 1,
      sym_path_segment,
  [3044] = 2,
    ACTIONS(490), 1,
      anon_sym_COLON,
    ACTIONS(492), 1,
      anon_sym_DASH_GT,
  [3051] = 2,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
  [3058] = 2,
    ACTIONS(496), 1,
      anon_sym_DASH_GT,
    ACTIONS(498), 1,
      anon_sym_SEMI,
  [3065] = 2,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
  [3072] = 2,
    ACTIONS(502), 1,
      anon_sym_COLON,
    ACTIONS(504), 1,
      anon_sym_DASH_GT,
  [3079] = 2,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
  [3086] = 2,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
    ACTIONS(510), 1,
      sym_identifier,
  [3093] = 2,
    ACTIONS(512), 1,
      anon_sym_DASH_GT,
    ACTIONS(514), 1,
      anon_sym_SEMI,
  [3100] = 2,
    ACTIONS(516), 1,
      anon_sym_COLON,
    ACTIONS(518), 1,
      anon_sym_DASH_GT,
  [3107] = 2,
    ACTIONS(520), 1,
      anon_sym_COLON,
    ACTIONS(522), 1,
      anon_sym_DASH_GT,
  [3114] = 2,
    ACTIONS(524), 1,
      anon_sym_COLON,
    ACTIONS(526), 1,
      anon_sym_DASH_GT,
  [3121] = 2,
    ACTIONS(528), 1,
      anon_sym_COLON,
    ACTIONS(530), 1,
      anon_sym_DASH_GT,
  [3128] = 2,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 1,
      sym_identifier,
  [3135] = 2,
    ACTIONS(536), 1,
      anon_sym_DASH_GT,
    ACTIONS(538), 1,
      anon_sym_SEMI,
  [3142] = 2,
    ACTIONS(241), 1,
      sym_identifier,
    STATE(114), 1,
      sym_path_segment,
  [3149] = 2,
    ACTIONS(540), 1,
      anon_sym_DASH_GT,
    ACTIONS(542), 1,
      anon_sym_SEMI,
  [3156] = 2,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
  [3163] = 2,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
  [3170] = 2,
    ACTIONS(548), 1,
      anon_sym_DASH_GT,
    ACTIONS(550), 1,
      anon_sym_SEMI,
  [3177] = 2,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
    ACTIONS(554), 1,
      sym_identifier,
  [3184] = 1,
    ACTIONS(556), 1,
      anon_sym_COLON,
  [3188] = 1,
    ACTIONS(558), 1,
      anon_sym_COLON,
  [3192] = 1,
    ACTIONS(560), 1,
      anon_sym_COLON,
  [3196] = 1,
    ACTIONS(562), 1,
      anon_sym_SEMI,
  [3200] = 1,
    ACTIONS(564), 1,
      anon_sym_LPAREN,
  [3204] = 1,
    ACTIONS(566), 1,
      anon_sym_COLON,
  [3208] = 1,
    ACTIONS(568), 1,
      anon_sym_SEMI,
  [3212] = 1,
    ACTIONS(426), 1,
      anon_sym_SEMI,
  [3216] = 1,
    ACTIONS(570), 1,
      anon_sym_COLON,
  [3220] = 1,
    ACTIONS(572), 1,
      anon_sym_COLON,
  [3224] = 1,
    ACTIONS(416), 1,
      sym_identifier,
  [3228] = 1,
    ACTIONS(574), 1,
      sym_identifier,
  [3232] = 1,
    ACTIONS(576), 1,
      anon_sym_COLON,
  [3236] = 1,
    ACTIONS(578), 1,
      anon_sym_LPAREN,
  [3240] = 1,
    ACTIONS(580), 1,
      anon_sym_LPAREN,
  [3244] = 1,
    ACTIONS(582), 1,
      anon_sym_COLON,
  [3248] = 1,
    ACTIONS(584), 1,
      anon_sym_SEMI,
  [3252] = 1,
    ACTIONS(586), 1,
      anon_sym_COLON,
  [3256] = 1,
    ACTIONS(588), 1,
      anon_sym_SEMI,
  [3260] = 1,
    ACTIONS(590), 1,
      anon_sym_COLON,
  [3264] = 1,
    ACTIONS(592), 1,
      anon_sym_SEMI,
  [3268] = 1,
    ACTIONS(594), 1,
      anon_sym_COLON,
  [3272] = 1,
    ACTIONS(596), 1,
      sym_identifier,
  [3276] = 1,
    ACTIONS(598), 1,
      anon_sym_COLON,
  [3280] = 1,
    ACTIONS(600), 1,
      sym_identifier,
  [3284] = 1,
    ACTIONS(434), 1,
      anon_sym_fn,
  [3288] = 1,
    ACTIONS(304), 1,
      anon_sym_fn,
  [3292] = 1,
    ACTIONS(602), 1,
      sym_identifier,
  [3296] = 1,
    ACTIONS(604), 1,
      anon_sym_COLON,
  [3300] = 1,
    ACTIONS(606), 1,
      anon_sym_COLON,
  [3304] = 1,
    ACTIONS(608), 1,
      anon_sym_fn,
  [3308] = 1,
    ACTIONS(610), 1,
      anon_sym_SEMI,
  [3312] = 1,
    ACTIONS(612), 1,
      anon_sym_SEMI,
  [3316] = 1,
    ACTIONS(614), 1,
      sym_identifier,
  [3320] = 1,
    ACTIONS(616), 1,
      anon_sym_COLON,
  [3324] = 1,
    ACTIONS(618), 1,
      anon_sym_COLON,
  [3328] = 1,
    ACTIONS(620), 1,
      anon_sym_SEMI,
  [3332] = 1,
    ACTIONS(622), 1,
      anon_sym_SEMI,
  [3336] = 1,
    ACTIONS(624), 1,
      anon_sym_LPAREN,
  [3340] = 1,
    ACTIONS(626), 1,
      anon_sym_SEMI,
  [3344] = 1,
    ACTIONS(628), 1,
      anon_sym_fn,
  [3348] = 1,
    ACTIONS(630), 1,
      anon_sym_COLON,
  [3352] = 1,
    ACTIONS(632), 1,
      sym_identifier,
  [3356] = 1,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
  [3360] = 1,
    ACTIONS(636), 1,
      anon_sym_COLON,
  [3364] = 1,
    ACTIONS(638), 1,
      anon_sym_LPAREN,
  [3368] = 1,
    ACTIONS(640), 1,
      anon_sym_COLON,
  [3372] = 1,
    ACTIONS(642), 1,
      anon_sym_COLON_EQ,
  [3376] = 1,
    ACTIONS(644), 1,
      anon_sym_SEMI,
  [3380] = 1,
    ACTIONS(646), 1,
      anon_sym_COLON,
  [3384] = 1,
    ACTIONS(648), 1,
      ts_builtin_sym_end,
  [3388] = 1,
    ACTIONS(650), 1,
      anon_sym_COLON,
  [3392] = 1,
    ACTIONS(652), 1,
      sym_digits,
  [3396] = 1,
    ACTIONS(382), 1,
      anon_sym_fn,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 63,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 135,
  [SMALL_STATE(7)] = 171,
  [SMALL_STATE(8)] = 204,
  [SMALL_STATE(9)] = 237,
  [SMALL_STATE(10)] = 270,
  [SMALL_STATE(11)] = 303,
  [SMALL_STATE(12)] = 333,
  [SMALL_STATE(13)] = 363,
  [SMALL_STATE(14)] = 393,
  [SMALL_STATE(15)] = 423,
  [SMALL_STATE(16)] = 453,
  [SMALL_STATE(17)] = 483,
  [SMALL_STATE(18)] = 513,
  [SMALL_STATE(19)] = 543,
  [SMALL_STATE(20)] = 573,
  [SMALL_STATE(21)] = 603,
  [SMALL_STATE(22)] = 633,
  [SMALL_STATE(23)] = 663,
  [SMALL_STATE(24)] = 693,
  [SMALL_STATE(25)] = 723,
  [SMALL_STATE(26)] = 753,
  [SMALL_STATE(27)] = 783,
  [SMALL_STATE(28)] = 813,
  [SMALL_STATE(29)] = 843,
  [SMALL_STATE(30)] = 873,
  [SMALL_STATE(31)] = 903,
  [SMALL_STATE(32)] = 933,
  [SMALL_STATE(33)] = 963,
  [SMALL_STATE(34)] = 993,
  [SMALL_STATE(35)] = 1023,
  [SMALL_STATE(36)] = 1053,
  [SMALL_STATE(37)] = 1083,
  [SMALL_STATE(38)] = 1113,
  [SMALL_STATE(39)] = 1143,
  [SMALL_STATE(40)] = 1173,
  [SMALL_STATE(41)] = 1203,
  [SMALL_STATE(42)] = 1233,
  [SMALL_STATE(43)] = 1263,
  [SMALL_STATE(44)] = 1293,
  [SMALL_STATE(45)] = 1323,
  [SMALL_STATE(46)] = 1352,
  [SMALL_STATE(47)] = 1381,
  [SMALL_STATE(48)] = 1395,
  [SMALL_STATE(49)] = 1409,
  [SMALL_STATE(50)] = 1423,
  [SMALL_STATE(51)] = 1437,
  [SMALL_STATE(52)] = 1451,
  [SMALL_STATE(53)] = 1465,
  [SMALL_STATE(54)] = 1479,
  [SMALL_STATE(55)] = 1493,
  [SMALL_STATE(56)] = 1507,
  [SMALL_STATE(57)] = 1521,
  [SMALL_STATE(58)] = 1535,
  [SMALL_STATE(59)] = 1549,
  [SMALL_STATE(60)] = 1569,
  [SMALL_STATE(61)] = 1589,
  [SMALL_STATE(62)] = 1609,
  [SMALL_STATE(63)] = 1625,
  [SMALL_STATE(64)] = 1645,
  [SMALL_STATE(65)] = 1665,
  [SMALL_STATE(66)] = 1674,
  [SMALL_STATE(67)] = 1683,
  [SMALL_STATE(68)] = 1692,
  [SMALL_STATE(69)] = 1701,
  [SMALL_STATE(70)] = 1710,
  [SMALL_STATE(71)] = 1725,
  [SMALL_STATE(72)] = 1734,
  [SMALL_STATE(73)] = 1743,
  [SMALL_STATE(74)] = 1752,
  [SMALL_STATE(75)] = 1761,
  [SMALL_STATE(76)] = 1770,
  [SMALL_STATE(77)] = 1779,
  [SMALL_STATE(78)] = 1794,
  [SMALL_STATE(79)] = 1803,
  [SMALL_STATE(80)] = 1812,
  [SMALL_STATE(81)] = 1821,
  [SMALL_STATE(82)] = 1834,
  [SMALL_STATE(83)] = 1849,
  [SMALL_STATE(84)] = 1858,
  [SMALL_STATE(85)] = 1867,
  [SMALL_STATE(86)] = 1880,
  [SMALL_STATE(87)] = 1889,
  [SMALL_STATE(88)] = 1898,
  [SMALL_STATE(89)] = 1907,
  [SMALL_STATE(90)] = 1916,
  [SMALL_STATE(91)] = 1925,
  [SMALL_STATE(92)] = 1940,
  [SMALL_STATE(93)] = 1949,
  [SMALL_STATE(94)] = 1958,
  [SMALL_STATE(95)] = 1967,
  [SMALL_STATE(96)] = 1976,
  [SMALL_STATE(97)] = 1985,
  [SMALL_STATE(98)] = 1994,
  [SMALL_STATE(99)] = 2009,
  [SMALL_STATE(100)] = 2018,
  [SMALL_STATE(101)] = 2027,
  [SMALL_STATE(102)] = 2036,
  [SMALL_STATE(103)] = 2045,
  [SMALL_STATE(104)] = 2054,
  [SMALL_STATE(105)] = 2063,
  [SMALL_STATE(106)] = 2072,
  [SMALL_STATE(107)] = 2085,
  [SMALL_STATE(108)] = 2101,
  [SMALL_STATE(109)] = 2117,
  [SMALL_STATE(110)] = 2133,
  [SMALL_STATE(111)] = 2149,
  [SMALL_STATE(112)] = 2165,
  [SMALL_STATE(113)] = 2181,
  [SMALL_STATE(114)] = 2197,
  [SMALL_STATE(115)] = 2207,
  [SMALL_STATE(116)] = 2217,
  [SMALL_STATE(117)] = 2231,
  [SMALL_STATE(118)] = 2247,
  [SMALL_STATE(119)] = 2263,
  [SMALL_STATE(120)] = 2279,
  [SMALL_STATE(121)] = 2295,
  [SMALL_STATE(122)] = 2311,
  [SMALL_STATE(123)] = 2321,
  [SMALL_STATE(124)] = 2337,
  [SMALL_STATE(125)] = 2353,
  [SMALL_STATE(126)] = 2369,
  [SMALL_STATE(127)] = 2385,
  [SMALL_STATE(128)] = 2401,
  [SMALL_STATE(129)] = 2417,
  [SMALL_STATE(130)] = 2433,
  [SMALL_STATE(131)] = 2449,
  [SMALL_STATE(132)] = 2459,
  [SMALL_STATE(133)] = 2475,
  [SMALL_STATE(134)] = 2485,
  [SMALL_STATE(135)] = 2501,
  [SMALL_STATE(136)] = 2517,
  [SMALL_STATE(137)] = 2533,
  [SMALL_STATE(138)] = 2549,
  [SMALL_STATE(139)] = 2565,
  [SMALL_STATE(140)] = 2581,
  [SMALL_STATE(141)] = 2591,
  [SMALL_STATE(142)] = 2607,
  [SMALL_STATE(143)] = 2623,
  [SMALL_STATE(144)] = 2639,
  [SMALL_STATE(145)] = 2655,
  [SMALL_STATE(146)] = 2662,
  [SMALL_STATE(147)] = 2669,
  [SMALL_STATE(148)] = 2680,
  [SMALL_STATE(149)] = 2690,
  [SMALL_STATE(150)] = 2700,
  [SMALL_STATE(151)] = 2710,
  [SMALL_STATE(152)] = 2716,
  [SMALL_STATE(153)] = 2726,
  [SMALL_STATE(154)] = 2732,
  [SMALL_STATE(155)] = 2742,
  [SMALL_STATE(156)] = 2752,
  [SMALL_STATE(157)] = 2762,
  [SMALL_STATE(158)] = 2772,
  [SMALL_STATE(159)] = 2782,
  [SMALL_STATE(160)] = 2792,
  [SMALL_STATE(161)] = 2802,
  [SMALL_STATE(162)] = 2812,
  [SMALL_STATE(163)] = 2822,
  [SMALL_STATE(164)] = 2832,
  [SMALL_STATE(165)] = 2842,
  [SMALL_STATE(166)] = 2852,
  [SMALL_STATE(167)] = 2859,
  [SMALL_STATE(168)] = 2866,
  [SMALL_STATE(169)] = 2873,
  [SMALL_STATE(170)] = 2880,
  [SMALL_STATE(171)] = 2887,
  [SMALL_STATE(172)] = 2894,
  [SMALL_STATE(173)] = 2901,
  [SMALL_STATE(174)] = 2908,
  [SMALL_STATE(175)] = 2915,
  [SMALL_STATE(176)] = 2922,
  [SMALL_STATE(177)] = 2929,
  [SMALL_STATE(178)] = 2936,
  [SMALL_STATE(179)] = 2941,
  [SMALL_STATE(180)] = 2946,
  [SMALL_STATE(181)] = 2953,
  [SMALL_STATE(182)] = 2960,
  [SMALL_STATE(183)] = 2967,
  [SMALL_STATE(184)] = 2974,
  [SMALL_STATE(185)] = 2981,
  [SMALL_STATE(186)] = 2988,
  [SMALL_STATE(187)] = 2995,
  [SMALL_STATE(188)] = 3002,
  [SMALL_STATE(189)] = 3009,
  [SMALL_STATE(190)] = 3016,
  [SMALL_STATE(191)] = 3023,
  [SMALL_STATE(192)] = 3030,
  [SMALL_STATE(193)] = 3037,
  [SMALL_STATE(194)] = 3044,
  [SMALL_STATE(195)] = 3051,
  [SMALL_STATE(196)] = 3058,
  [SMALL_STATE(197)] = 3065,
  [SMALL_STATE(198)] = 3072,
  [SMALL_STATE(199)] = 3079,
  [SMALL_STATE(200)] = 3086,
  [SMALL_STATE(201)] = 3093,
  [SMALL_STATE(202)] = 3100,
  [SMALL_STATE(203)] = 3107,
  [SMALL_STATE(204)] = 3114,
  [SMALL_STATE(205)] = 3121,
  [SMALL_STATE(206)] = 3128,
  [SMALL_STATE(207)] = 3135,
  [SMALL_STATE(208)] = 3142,
  [SMALL_STATE(209)] = 3149,
  [SMALL_STATE(210)] = 3156,
  [SMALL_STATE(211)] = 3163,
  [SMALL_STATE(212)] = 3170,
  [SMALL_STATE(213)] = 3177,
  [SMALL_STATE(214)] = 3184,
  [SMALL_STATE(215)] = 3188,
  [SMALL_STATE(216)] = 3192,
  [SMALL_STATE(217)] = 3196,
  [SMALL_STATE(218)] = 3200,
  [SMALL_STATE(219)] = 3204,
  [SMALL_STATE(220)] = 3208,
  [SMALL_STATE(221)] = 3212,
  [SMALL_STATE(222)] = 3216,
  [SMALL_STATE(223)] = 3220,
  [SMALL_STATE(224)] = 3224,
  [SMALL_STATE(225)] = 3228,
  [SMALL_STATE(226)] = 3232,
  [SMALL_STATE(227)] = 3236,
  [SMALL_STATE(228)] = 3240,
  [SMALL_STATE(229)] = 3244,
  [SMALL_STATE(230)] = 3248,
  [SMALL_STATE(231)] = 3252,
  [SMALL_STATE(232)] = 3256,
  [SMALL_STATE(233)] = 3260,
  [SMALL_STATE(234)] = 3264,
  [SMALL_STATE(235)] = 3268,
  [SMALL_STATE(236)] = 3272,
  [SMALL_STATE(237)] = 3276,
  [SMALL_STATE(238)] = 3280,
  [SMALL_STATE(239)] = 3284,
  [SMALL_STATE(240)] = 3288,
  [SMALL_STATE(241)] = 3292,
  [SMALL_STATE(242)] = 3296,
  [SMALL_STATE(243)] = 3300,
  [SMALL_STATE(244)] = 3304,
  [SMALL_STATE(245)] = 3308,
  [SMALL_STATE(246)] = 3312,
  [SMALL_STATE(247)] = 3316,
  [SMALL_STATE(248)] = 3320,
  [SMALL_STATE(249)] = 3324,
  [SMALL_STATE(250)] = 3328,
  [SMALL_STATE(251)] = 3332,
  [SMALL_STATE(252)] = 3336,
  [SMALL_STATE(253)] = 3340,
  [SMALL_STATE(254)] = 3344,
  [SMALL_STATE(255)] = 3348,
  [SMALL_STATE(256)] = 3352,
  [SMALL_STATE(257)] = 3356,
  [SMALL_STATE(258)] = 3360,
  [SMALL_STATE(259)] = 3364,
  [SMALL_STATE(260)] = 3368,
  [SMALL_STATE(261)] = 3372,
  [SMALL_STATE(262)] = 3376,
  [SMALL_STATE(263)] = 3380,
  [SMALL_STATE(264)] = 3384,
  [SMALL_STATE(265)] = 3388,
  [SMALL_STATE(266)] = 3392,
  [SMALL_STATE(267)] = 3396,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 1, .production_id = 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 3, .production_id = 11),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(35),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(236),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(221),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(50),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(2),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(241),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(267),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(162),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(115),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 3, .production_id = 10),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 2, .production_id = 5),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 4, .production_id = 18),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 4, .production_id = 17),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 4, .production_id = 16),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 3, .production_id = 8),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 3, .production_id = 9),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 5, .production_id = 23),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extern_block_repeat1, 2), SHIFT_REPEAT(247),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extern_block_repeat1, 2),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extern_block_repeat1, 2), SHIFT_REPEAT(115),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_segment, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_segment, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 48),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 26),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 30),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 6, .production_id = 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 24),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 15, .production_id = 63),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 31),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 32),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 22),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_block, 5, .production_id = 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 33),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 38),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 19),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 39),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_block, 4, .production_id = 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_block, 4),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 4),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 40),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 41),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 42),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 47),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 7, .production_id = 7),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, .production_id = 15),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 49),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, .production_id = 12),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_block, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 50),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 51),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(208),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 55),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 56),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 57),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 58),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 14, .production_id = 60),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 14, .production_id = 61),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 14, .production_id = 62),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility_modifier, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_args, 4),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_args, 4),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_args, 5),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_args, 5),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_segment, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_segment, 2),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_args, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_args, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility_modifier, 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_expression_repeat1, 2), SHIFT_REPEAT(13),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_expression_repeat1, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__extern_item, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2, .production_id = 13), SHIFT_REPEAT(224),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2, .production_id = 13),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_modifier, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 5, .production_id = 6),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_modifier, 2, .production_id = 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 4, .production_id = 25),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 4, .production_id = 4),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 8, .production_id = 27),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 8, .production_id = 28),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 8, .production_id = 29),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 7, .production_id = 20),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 10, .production_id = 46),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 9, .production_id = 35),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 9, .production_id = 36),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 9, .production_id = 37),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 7, .production_id = 21),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 9, .production_id = 34),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 10, .production_id = 43),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 10, .production_id = 44),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 10, .production_id = 45),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 6, .production_id = 14),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 11, .production_id = 52),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 11, .production_id = 53),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 11, .production_id = 54),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 12, .production_id = 59),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [648] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
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
