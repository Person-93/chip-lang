#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 237
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 15
#define PRODUCTION_ID_COUNT 74

enum {
  sym_word = 1,
  anon_sym_fn = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COLON = 4,
  anon_sym_COMMA = 5,
  anon_sym_RPAREN = 6,
  anon_sym_DASH_GT = 7,
  anon_sym_SEMI = 8,
  anon_sym_const = 9,
  anon_sym_unsafe = 10,
  anon_sym_extern = 11,
  anon_sym_pub = 12,
  anon_sym_super = 13,
  anon_sym_package = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_let = 17,
  anon_sym_COLON_EQ = 18,
  anon_sym_COLON_COLON = 19,
  sym_identifier = 20,
  anon_sym_COLON_COLON_LT = 21,
  anon_sym_GT = 22,
  sym_string_literal = 23,
  anon_sym_true = 24,
  anon_sym_false = 25,
  anon_sym_DOT = 26,
  anon_sym_u8 = 27,
  anon_sym_u16 = 28,
  anon_sym_u32 = 29,
  anon_sym_u64 = 30,
  anon_sym_u128 = 31,
  anon_sym_usize = 32,
  anon_sym_i8 = 33,
  anon_sym_i16 = 34,
  anon_sym_i32 = 35,
  anon_sym_i64 = 36,
  anon_sym_i128 = 37,
  anon_sym_isize = 38,
  anon_sym_f32 = 39,
  anon_sym_f64 = 40,
  sym_digits = 41,
  sym_file = 42,
  sym__item = 43,
  sym_function = 44,
  sym_function_modifier = 45,
  sym_type = 46,
  sym_visibility_modifier = 47,
  sym__expr = 48,
  sym_codeblock = 49,
  sym_binding = 50,
  sym_tuple_expression = 51,
  sym_path = 52,
  sym_path_segment = 53,
  sym_generic_args = 54,
  sym__literal = 55,
  sym_unit_literal = 56,
  sym_boolean_literal = 57,
  sym_numeric_literal = 58,
  aux_sym_file_repeat1 = 59,
  aux_sym_function_repeat1 = 60,
  aux_sym_codeblock_repeat1 = 61,
  aux_sym_tuple_expression_repeat1 = 62,
  aux_sym_path_repeat1 = 63,
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
  [anon_sym_SEMI] = ";",
  [anon_sym_const] = "const",
  [anon_sym_unsafe] = "unsafe",
  [anon_sym_extern] = "extern",
  [anon_sym_pub] = "pub",
  [anon_sym_super] = "super",
  [anon_sym_package] = "package",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_let] = "let",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_COLON_COLON] = "::",
  [sym_identifier] = "identifier",
  [anon_sym_COLON_COLON_LT] = "::<",
  [anon_sym_GT] = ">",
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
  [sym_visibility_modifier] = "visibility_modifier",
  [sym__expr] = "_expr",
  [sym_codeblock] = "codeblock",
  [sym_binding] = "binding",
  [sym_tuple_expression] = "tuple_expression",
  [sym_path] = "path",
  [sym_path_segment] = "path_segment",
  [sym_generic_args] = "generic_args",
  [sym__literal] = "_literal",
  [sym_unit_literal] = "unit_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_numeric_literal] = "numeric_literal",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_function_repeat1] = "function_repeat1",
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
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_unsafe] = anon_sym_unsafe,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_pub] = anon_sym_pub,
  [anon_sym_super] = anon_sym_super,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym_identifier] = sym_identifier,
  [anon_sym_COLON_COLON_LT] = anon_sym_COLON_COLON_LT,
  [anon_sym_GT] = anon_sym_GT,
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
  [sym_visibility_modifier] = sym_visibility_modifier,
  [sym__expr] = sym__expr,
  [sym_codeblock] = sym_codeblock,
  [sym_binding] = sym_binding,
  [sym_tuple_expression] = sym_tuple_expression,
  [sym_path] = sym_path,
  [sym_path_segment] = sym_path_segment,
  [sym_generic_args] = sym_generic_args,
  [sym__literal] = sym__literal,
  [sym_unit_literal] = sym_unit_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_numeric_literal] = sym_numeric_literal,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_function_repeat1] = aux_sym_function_repeat1,
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
  [anon_sym_SEMI] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [sym_unit_literal] = {
    .visible = true,
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
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 1},
  [11] = {.index = 14, .length = 1},
  [12] = {.index = 15, .length = 1},
  [13] = {.index = 16, .length = 2},
  [14] = {.index = 18, .length = 3},
  [15] = {.index = 21, .length = 4},
  [16] = {.index = 25, .length = 4},
  [17] = {.index = 29, .length = 2},
  [18] = {.index = 31, .length = 2},
  [19] = {.index = 33, .length = 2},
  [20] = {.index = 35, .length = 2},
  [21] = {.index = 37, .length = 3},
  [22] = {.index = 40, .length = 5},
  [23] = {.index = 45, .length = 5},
  [24] = {.index = 50, .length = 7},
  [25] = {.index = 57, .length = 3},
  [26] = {.index = 60, .length = 4},
  [27] = {.index = 64, .length = 2},
  [28] = {.index = 66, .length = 3},
  [29] = {.index = 69, .length = 6},
  [30] = {.index = 75, .length = 2},
  [31] = {.index = 77, .length = 5},
  [32] = {.index = 82, .length = 8},
  [33] = {.index = 90, .length = 8},
  [34] = {.index = 98, .length = 5},
  [35] = {.index = 103, .length = 5},
  [36] = {.index = 108, .length = 7},
  [37] = {.index = 115, .length = 3},
  [38] = {.index = 118, .length = 4},
  [39] = {.index = 122, .length = 6},
  [40] = {.index = 128, .length = 6},
  [41] = {.index = 134, .length = 9},
  [42] = {.index = 143, .length = 8},
  [43] = {.index = 151, .length = 6},
  [44] = {.index = 157, .length = 5},
  [45] = {.index = 162, .length = 8},
  [46] = {.index = 170, .length = 8},
  [47] = {.index = 178, .length = 5},
  [48] = {.index = 183, .length = 5},
  [49] = {.index = 188, .length = 7},
  [50] = {.index = 195, .length = 7},
  [51] = {.index = 202, .length = 9},
  [52] = {.index = 211, .length = 9},
  [53] = {.index = 220, .length = 6},
  [54] = {.index = 226, .length = 6},
  [55] = {.index = 232, .length = 9},
  [56] = {.index = 241, .length = 8},
  [57] = {.index = 249, .length = 6},
  [58] = {.index = 255, .length = 5},
  [59] = {.index = 260, .length = 8},
  [60] = {.index = 268, .length = 8},
  [61] = {.index = 276, .length = 10},
  [62] = {.index = 286, .length = 7},
  [63] = {.index = 293, .length = 9},
  [64] = {.index = 302, .length = 9},
  [65] = {.index = 311, .length = 6},
  [66] = {.index = 317, .length = 6},
  [67] = {.index = 323, .length = 9},
  [68] = {.index = 332, .length = 8},
  [69] = {.index = 340, .length = 10},
  [70] = {.index = 350, .length = 7},
  [71] = {.index = 357, .length = 9},
  [72] = {.index = 366, .length = 9},
  [73] = {.index = 375, .length = 10},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_abi, 1},
  [1] =
    {field_name, 1},
  [2] =
    {field_value, 0},
  [3] =
    {field_body, 5},
    {field_name, 1},
  [5] =
    {field_name, 2},
  [6] =
    {field_suffix, 1},
    {field_value, 0},
  [8] =
    {field_name, 1},
    {field_output, 5},
  [10] =
    {field_body, 6},
    {field_name, 2},
  [12] =
    {field_name, 3},
  [13] =
    {field_members, 1},
  [14] =
    {field_trailing, 1},
  [15] =
    {field_statements, 1},
  [16] =
    {field_float_part, 2},
    {field_value, 0},
  [18] =
    {field_body, 7},
    {field_name, 1},
    {field_output, 5},
  [21] =
    {field_identifier, 3},
    {field_inputs, 4},
    {field_name, 1},
    {field_type, 5},
  [25] =
    {field_identifier, 0, .inherited = true},
    {field_identifier, 1, .inherited = true},
    {field_type, 0, .inherited = true},
    {field_type, 1, .inherited = true},
  [29] =
    {field_name, 2},
    {field_output, 6},
  [31] =
    {field_body, 7},
    {field_name, 3},
  [33] =
    {field_members, 1},
    {field_members, 2},
  [35] =
    {field_statements, 1},
    {field_trailing, 2},
  [37] =
    {field_float_part, 2},
    {field_suffix, 3},
    {field_value, 0},
  [40] =
    {field_identifier, 3},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_name, 1},
    {field_type, 5},
  [45] =
    {field_body, 8},
    {field_identifier, 3},
    {field_inputs, 4},
    {field_name, 1},
    {field_type, 5},
  [50] =
    {field_identifier, 3},
    {field_identifier, 6, .inherited = true},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_name, 1},
    {field_type, 5},
    {field_type, 6, .inherited = true},
  [57] =
    {field_body, 8},
    {field_name, 2},
    {field_output, 6},
  [60] =
    {field_identifier, 4},
    {field_inputs, 5},
    {field_name, 2},
    {field_type, 6},
  [64] =
    {field_name, 3},
    {field_output, 7},
  [66] =
    {field_members, 1},
    {field_members, 2},
    {field_members, 3},
  [69] =
    {field_body, 9},
    {field_identifier, 3},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_name, 1},
    {field_type, 5},
  [75] =
    {field_identifier, 1},
    {field_type, 3},
  [77] =
    {field_identifier, 3},
    {field_inputs, 4},
    {field_name, 1},
    {field_output, 8},
    {field_type, 5},
  [82] =
    {field_identifier, 3},
    {field_identifier, 6, .inherited = true},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_inputs, 7},
    {field_name, 1},
    {field_type, 5},
    {field_type, 6, .inherited = true},
  [90] =
    {field_body, 9},
    {field_identifier, 3},
    {field_identifier, 6, .inherited = true},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_name, 1},
    {field_type, 5},
    {field_type, 6, .inherited = true},
  [98] =
    {field_identifier, 4},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_name, 2},
    {field_type, 6},
  [103] =
    {field_body, 9},
    {field_identifier, 4},
    {field_inputs, 5},
    {field_name, 2},
    {field_type, 6},
  [108] =
    {field_identifier, 4},
    {field_identifier, 7, .inherited = true},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_name, 2},
    {field_type, 6},
    {field_type, 7, .inherited = true},
  [115] =
    {field_body, 9},
    {field_name, 3},
    {field_output, 7},
  [118] =
    {field_identifier, 5},
    {field_inputs, 6},
    {field_name, 3},
    {field_type, 7},
  [122] =
    {field_identifier, 3},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_name, 1},
    {field_output, 9},
    {field_type, 5},
  [128] =
    {field_body, 10},
    {field_identifier, 3},
    {field_inputs, 4},
    {field_name, 1},
    {field_output, 8},
    {field_type, 5},
  [134] =
    {field_body, 10},
    {field_identifier, 3},
    {field_identifier, 6, .inherited = true},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_inputs, 7},
    {field_name, 1},
    {field_type, 5},
    {field_type, 6, .inherited = true},
  [143] =
    {field_identifier, 3},
    {field_identifier, 6, .inherited = true},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_name, 1},
    {field_output, 9},
    {field_type, 5},
    {field_type, 6, .inherited = true},
  [151] =
    {field_body, 10},
    {field_identifier, 4},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_name, 2},
    {field_type, 6},
  [157] =
    {field_identifier, 4},
    {field_inputs, 5},
    {field_name, 2},
    {field_output, 9},
    {field_type, 6},
  [162] =
    {field_identifier, 4},
    {field_identifier, 7, .inherited = true},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_inputs, 8},
    {field_name, 2},
    {field_type, 6},
    {field_type, 7, .inherited = true},
  [170] =
    {field_body, 10},
    {field_identifier, 4},
    {field_identifier, 7, .inherited = true},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_name, 2},
    {field_type, 6},
    {field_type, 7, .inherited = true},
  [178] =
    {field_identifier, 5},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_name, 3},
    {field_type, 7},
  [183] =
    {field_body, 10},
    {field_identifier, 5},
    {field_inputs, 6},
    {field_name, 3},
    {field_type, 7},
  [188] =
    {field_identifier, 5},
    {field_identifier, 8, .inherited = true},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_name, 3},
    {field_type, 7},
    {field_type, 8, .inherited = true},
  [195] =
    {field_body, 11},
    {field_identifier, 3},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_name, 1},
    {field_output, 9},
    {field_type, 5},
  [202] =
    {field_identifier, 3},
    {field_identifier, 6, .inherited = true},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_inputs, 7},
    {field_name, 1},
    {field_output, 10},
    {field_type, 5},
    {field_type, 6, .inherited = true},
  [211] =
    {field_body, 11},
    {field_identifier, 3},
    {field_identifier, 6, .inherited = true},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_name, 1},
    {field_output, 9},
    {field_type, 5},
    {field_type, 6, .inherited = true},
  [220] =
    {field_identifier, 4},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_name, 2},
    {field_output, 10},
    {field_type, 6},
  [226] =
    {field_body, 11},
    {field_identifier, 4},
    {field_inputs, 5},
    {field_name, 2},
    {field_output, 9},
    {field_type, 6},
  [232] =
    {field_body, 11},
    {field_identifier, 4},
    {field_identifier, 7, .inherited = true},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_inputs, 8},
    {field_name, 2},
    {field_type, 6},
    {field_type, 7, .inherited = true},
  [241] =
    {field_identifier, 4},
    {field_identifier, 7, .inherited = true},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_name, 2},
    {field_output, 10},
    {field_type, 6},
    {field_type, 7, .inherited = true},
  [249] =
    {field_body, 11},
    {field_identifier, 5},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_name, 3},
    {field_type, 7},
  [255] =
    {field_identifier, 5},
    {field_inputs, 6},
    {field_name, 3},
    {field_output, 10},
    {field_type, 7},
  [260] =
    {field_identifier, 5},
    {field_identifier, 8, .inherited = true},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_inputs, 9},
    {field_name, 3},
    {field_type, 7},
    {field_type, 8, .inherited = true},
  [268] =
    {field_body, 11},
    {field_identifier, 5},
    {field_identifier, 8, .inherited = true},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_name, 3},
    {field_type, 7},
    {field_type, 8, .inherited = true},
  [276] =
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
  [286] =
    {field_body, 12},
    {field_identifier, 4},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_name, 2},
    {field_output, 10},
    {field_type, 6},
  [293] =
    {field_identifier, 4},
    {field_identifier, 7, .inherited = true},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_inputs, 8},
    {field_name, 2},
    {field_output, 11},
    {field_type, 6},
    {field_type, 7, .inherited = true},
  [302] =
    {field_body, 12},
    {field_identifier, 4},
    {field_identifier, 7, .inherited = true},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_name, 2},
    {field_output, 10},
    {field_type, 6},
    {field_type, 7, .inherited = true},
  [311] =
    {field_identifier, 5},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_name, 3},
    {field_output, 11},
    {field_type, 7},
  [317] =
    {field_body, 12},
    {field_identifier, 5},
    {field_inputs, 6},
    {field_name, 3},
    {field_output, 10},
    {field_type, 7},
  [323] =
    {field_body, 12},
    {field_identifier, 5},
    {field_identifier, 8, .inherited = true},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_inputs, 9},
    {field_name, 3},
    {field_type, 7},
    {field_type, 8, .inherited = true},
  [332] =
    {field_identifier, 5},
    {field_identifier, 8, .inherited = true},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_name, 3},
    {field_output, 11},
    {field_type, 7},
    {field_type, 8, .inherited = true},
  [340] =
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
  [350] =
    {field_body, 13},
    {field_identifier, 5},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_name, 3},
    {field_output, 11},
    {field_type, 7},
  [357] =
    {field_identifier, 5},
    {field_identifier, 8, .inherited = true},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_inputs, 9},
    {field_name, 3},
    {field_output, 12},
    {field_type, 7},
    {field_type, 8, .inherited = true},
  [366] =
    {field_body, 13},
    {field_identifier, 5},
    {field_identifier, 8, .inherited = true},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_name, 3},
    {field_output, 11},
    {field_type, 7},
    {field_type, 8, .inherited = true},
  [375] =
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
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == ')') ADVANCE(15);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '>') ADVANCE(25);
      if (lookahead == '{') ADVANCE(18);
      if (lookahead == '}') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (sym_word_character_set_1(lookahead)) ADVANCE(29);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(26);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(15);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(15);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(15);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(16);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(22);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '=') ADVANCE(20);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(21);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '<') ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_LT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_digits);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_word);
      if (sym_word_character_set_2(lookahead)) ADVANCE(29);
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
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 4},
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
  [116] = {.lex_state = 2},
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
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 3},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 3},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 3},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 3},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 3},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 3},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 2},
  [227] = {.lex_state = 5},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 3},
  [230] = {.lex_state = 3},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 2},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 3},
  [236] = {.lex_state = 3},
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
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_unsafe] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_pub] = ACTIONS(1),
    [anon_sym_super] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_COLON_COLON_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
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
    [sym_file] = STATE(221),
    [sym__item] = STATE(53),
    [sym_function] = STATE(53),
    [sym_function_modifier] = STATE(217),
    [sym_visibility_modifier] = STATE(141),
    [aux_sym_file_repeat1] = STATE(53),
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
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
      anon_sym_RBRACE,
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
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
      anon_sym_RBRACE,
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
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(31), 1,
      sym_string_literal,
    ACTIONS(35), 1,
      sym_digits,
    STATE(5), 1,
      aux_sym_codeblock_repeat1,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(214), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [99] = 9,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(40), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(45), 1,
      anon_sym_let,
    ACTIONS(48), 1,
      sym_string_literal,
    ACTIONS(54), 1,
      sym_digits,
    STATE(5), 1,
      aux_sym_codeblock_repeat1,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(228), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [135] = 9,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 1,
      sym_string_literal,
    STATE(4), 1,
      aux_sym_codeblock_repeat1,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(194), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [171] = 8,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(63), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(181), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [204] = 8,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(63), 1,
      sym_string_literal,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(181), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [237] = 8,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(63), 1,
      sym_string_literal,
    ACTIONS(67), 1,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(181), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [270] = 8,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(71), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(163), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [303] = 8,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(63), 1,
      sym_string_literal,
    ACTIONS(73), 1,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(181), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [336] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(75), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(65), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [366] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(77), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(72), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [396] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(79), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(91), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [426] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(81), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(103), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [456] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(83), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(107), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [486] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(85), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(171), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [516] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(87), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(108), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [546] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(89), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(111), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [576] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(91), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(113), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [606] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(93), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(119), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [636] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(95), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(126), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [666] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(97), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(121), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [696] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(99), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [726] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(101), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(114), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [756] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(103), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(104), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [786] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(63), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(181), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [816] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(105), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(125), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [846] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(107), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(97), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [876] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(109), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(96), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [906] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(111), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [936] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(113), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(63), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [966] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(115), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(86), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [996] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(117), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(90), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1026] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(119), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(64), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1056] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(121), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(71), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1086] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(123), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1116] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(125), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(62), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1146] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(127), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(124), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1176] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(129), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(83), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1206] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(131), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1236] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(133), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1266] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(135), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1296] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      sym_digits,
    ACTIONS(137), 1,
      sym_string_literal,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 8,
      sym__expr,
      sym_codeblock,
      sym_binding,
      sym_tuple_expression,
      sym__literal,
      sym_unit_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [1326] = 1,
    ACTIONS(139), 11,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1340] = 1,
    ACTIONS(141), 11,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1354] = 1,
    ACTIONS(143), 11,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1368] = 1,
    ACTIONS(145), 11,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1382] = 1,
    ACTIONS(147), 11,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1396] = 1,
    ACTIONS(149), 11,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1410] = 1,
    ACTIONS(151), 11,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1424] = 1,
    ACTIONS(153), 11,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1438] = 8,
    ACTIONS(5), 1,
      anon_sym_fn,
    ACTIONS(9), 1,
      anon_sym_extern,
    ACTIONS(11), 1,
      anon_sym_pub,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    STATE(141), 1,
      sym_visibility_modifier,
    STATE(217), 1,
      sym_function_modifier,
    ACTIONS(7), 2,
      anon_sym_const,
      anon_sym_unsafe,
    STATE(58), 3,
      sym__item,
      sym_function,
      aux_sym_file_repeat1,
  [1466] = 1,
    ACTIONS(157), 11,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1480] = 1,
    ACTIONS(159), 11,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1494] = 1,
    ACTIONS(161), 11,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1508] = 1,
    ACTIONS(163), 11,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1522] = 8,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(167), 1,
      anon_sym_fn,
    ACTIONS(173), 1,
      anon_sym_extern,
    ACTIONS(176), 1,
      anon_sym_pub,
    STATE(141), 1,
      sym_visibility_modifier,
    STATE(217), 1,
      sym_function_modifier,
    ACTIONS(170), 2,
      anon_sym_const,
      anon_sym_unsafe,
    STATE(58), 3,
      sym__item,
      sym_function,
      aux_sym_file_repeat1,
  [1550] = 1,
    ACTIONS(43), 8,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_let,
      sym_string_literal,
      anon_sym_true,
      anon_sym_false,
      sym_digits,
  [1561] = 4,
    ACTIONS(183), 1,
      anon_sym_COLON_COLON_LT,
    STATE(153), 1,
      sym_generic_args,
    ACTIONS(179), 2,
      anon_sym_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(181), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1577] = 1,
    ACTIONS(185), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1586] = 1,
    ACTIONS(187), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1595] = 1,
    ACTIONS(189), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1604] = 1,
    ACTIONS(191), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1613] = 1,
    ACTIONS(193), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1622] = 4,
    ACTIONS(195), 1,
      anon_sym_COLON,
    ACTIONS(199), 1,
      anon_sym_COLON_COLON,
    STATE(81), 1,
      aux_sym_path_repeat1,
    ACTIONS(197), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1637] = 1,
    ACTIONS(201), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1646] = 1,
    ACTIONS(203), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1655] = 1,
    ACTIONS(205), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1664] = 1,
    ACTIONS(207), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1673] = 1,
    ACTIONS(209), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1682] = 1,
    ACTIONS(211), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1691] = 1,
    ACTIONS(213), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1700] = 1,
    ACTIONS(215), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1709] = 1,
    ACTIONS(217), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1718] = 1,
    ACTIONS(219), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1727] = 4,
    ACTIONS(221), 1,
      anon_sym_COLON,
    ACTIONS(225), 1,
      anon_sym_COLON_COLON,
    STATE(94), 1,
      aux_sym_path_repeat1,
    ACTIONS(223), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1742] = 1,
    ACTIONS(227), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1751] = 1,
    ACTIONS(229), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1760] = 3,
    ACTIONS(231), 1,
      sym_identifier,
    STATE(129), 1,
      sym_path_segment,
    ACTIONS(223), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1773] = 4,
    ACTIONS(221), 1,
      anon_sym_COLON,
    ACTIONS(225), 1,
      anon_sym_COLON_COLON,
    STATE(98), 1,
      aux_sym_path_repeat1,
    ACTIONS(223), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1788] = 1,
    ACTIONS(233), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1797] = 1,
    ACTIONS(235), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1806] = 1,
    ACTIONS(237), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1815] = 1,
    ACTIONS(239), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1824] = 1,
    ACTIONS(241), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1833] = 1,
    ACTIONS(243), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1842] = 1,
    ACTIONS(245), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1851] = 1,
    ACTIONS(247), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1860] = 1,
    ACTIONS(249), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1869] = 1,
    ACTIONS(251), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1878] = 1,
    ACTIONS(253), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1887] = 3,
    ACTIONS(231), 1,
      sym_identifier,
    STATE(129), 1,
      sym_path_segment,
    ACTIONS(255), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1900] = 4,
    ACTIONS(257), 1,
      anon_sym_COLON,
    ACTIONS(259), 1,
      anon_sym_COLON_COLON,
    STATE(98), 1,
      aux_sym_path_repeat1,
    ACTIONS(255), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1915] = 1,
    ACTIONS(261), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1924] = 1,
    ACTIONS(263), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1933] = 1,
    ACTIONS(265), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1942] = 4,
    ACTIONS(267), 1,
      anon_sym_COLON,
    ACTIONS(271), 1,
      anon_sym_COLON_COLON,
    STATE(98), 1,
      aux_sym_path_repeat1,
    ACTIONS(269), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1957] = 1,
    ACTIONS(274), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1966] = 1,
    ACTIONS(276), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1975] = 1,
    ACTIONS(278), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1984] = 1,
    ACTIONS(280), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1993] = 1,
    ACTIONS(282), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2002] = 1,
    ACTIONS(284), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2011] = 1,
    ACTIONS(286), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2020] = 1,
    ACTIONS(288), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2029] = 1,
    ACTIONS(290), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2038] = 1,
    ACTIONS(292), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2047] = 1,
    ACTIONS(294), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2056] = 1,
    ACTIONS(296), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2065] = 1,
    ACTIONS(298), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2074] = 1,
    ACTIONS(300), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2083] = 1,
    ACTIONS(302), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2092] = 1,
    ACTIONS(304), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2101] = 1,
    ACTIONS(306), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2110] = 3,
    ACTIONS(231), 1,
      sym_identifier,
    STATE(129), 1,
      sym_path_segment,
    ACTIONS(308), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [2123] = 1,
    ACTIONS(310), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2132] = 1,
    ACTIONS(312), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2141] = 1,
    ACTIONS(314), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2150] = 1,
    ACTIONS(316), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2159] = 1,
    ACTIONS(318), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2168] = 1,
    ACTIONS(320), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2177] = 1,
    ACTIONS(322), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2186] = 1,
    ACTIONS(324), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2195] = 1,
    ACTIONS(326), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2204] = 1,
    ACTIONS(328), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2213] = 1,
    ACTIONS(330), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2222] = 1,
    ACTIONS(332), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [2231] = 2,
    ACTIONS(267), 1,
      anon_sym_COLON,
    ACTIONS(269), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
  [2241] = 2,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 4,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
  [2251] = 5,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_COLON_COLON,
    STATE(66), 1,
      sym_path_segment,
    STATE(157), 1,
      sym_path,
    STATE(186), 1,
      sym_type,
  [2267] = 5,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_COLON_COLON,
    STATE(66), 1,
      sym_path_segment,
    STATE(157), 1,
      sym_path,
    STATE(205), 1,
      sym_type,
  [2283] = 5,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_COLON_COLON,
    STATE(66), 1,
      sym_path_segment,
    STATE(157), 1,
      sym_path,
    STATE(197), 1,
      sym_type,
  [2299] = 5,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_COLON_COLON,
    STATE(66), 1,
      sym_path_segment,
    STATE(157), 1,
      sym_path,
    STATE(190), 1,
      sym_type,
  [2315] = 5,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_COLON_COLON,
    STATE(66), 1,
      sym_path_segment,
    STATE(157), 1,
      sym_path,
    STATE(213), 1,
      sym_type,
  [2331] = 2,
    ACTIONS(340), 1,
      anon_sym_COLON,
    ACTIONS(342), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
  [2341] = 5,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_COLON_COLON,
    STATE(66), 1,
      sym_path_segment,
    STATE(157), 1,
      sym_path,
    STATE(210), 1,
      sym_type,
  [2357] = 5,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_COLON_COLON,
    STATE(66), 1,
      sym_path_segment,
    STATE(157), 1,
      sym_path,
    STATE(201), 1,
      sym_type,
  [2373] = 5,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_COLON_COLON,
    STATE(66), 1,
      sym_path_segment,
    STATE(157), 1,
      sym_path,
    STATE(193), 1,
      sym_type,
  [2389] = 2,
    ACTIONS(344), 1,
      anon_sym_COLON,
    ACTIONS(346), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
  [2399] = 4,
    ACTIONS(9), 1,
      anon_sym_extern,
    ACTIONS(348), 1,
      anon_sym_fn,
    STATE(231), 1,
      sym_function_modifier,
    ACTIONS(7), 2,
      anon_sym_const,
      anon_sym_unsafe,
  [2413] = 5,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_COLON_COLON,
    STATE(66), 1,
      sym_path_segment,
    STATE(157), 1,
      sym_path,
    STATE(160), 1,
      sym_type,
  [2429] = 5,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_COLON_COLON,
    STATE(66), 1,
      sym_path_segment,
    STATE(157), 1,
      sym_path,
    STATE(208), 1,
      sym_type,
  [2445] = 5,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_COLON_COLON,
    STATE(66), 1,
      sym_path_segment,
    STATE(157), 1,
      sym_path,
    STATE(195), 1,
      sym_type,
  [2461] = 2,
    ACTIONS(350), 1,
      anon_sym_COLON,
    ACTIONS(352), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
  [2471] = 5,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_COLON_COLON,
    STATE(66), 1,
      sym_path_segment,
    STATE(157), 1,
      sym_path,
    STATE(199), 1,
      sym_type,
  [2487] = 5,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_COLON_COLON,
    STATE(66), 1,
      sym_path_segment,
    STATE(157), 1,
      sym_path,
    STATE(179), 1,
      sym_type,
  [2503] = 5,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_COLON_COLON,
    STATE(66), 1,
      sym_path_segment,
    STATE(157), 1,
      sym_path,
    STATE(204), 1,
      sym_type,
  [2519] = 5,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_COLON_COLON,
    STATE(66), 1,
      sym_path_segment,
    STATE(157), 1,
      sym_path,
    STATE(191), 1,
      sym_type,
  [2535] = 5,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_COLON_COLON,
    STATE(66), 1,
      sym_path_segment,
    STATE(157), 1,
      sym_path,
    STATE(189), 1,
      sym_type,
  [2551] = 5,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_COLON_COLON,
    STATE(66), 1,
      sym_path_segment,
    STATE(157), 1,
      sym_path,
    STATE(207), 1,
      sym_type,
  [2567] = 5,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_COLON_COLON,
    STATE(66), 1,
      sym_path_segment,
    STATE(157), 1,
      sym_path,
    STATE(206), 1,
      sym_type,
  [2583] = 2,
    ACTIONS(354), 1,
      anon_sym_COLON,
    ACTIONS(356), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
  [2593] = 5,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_COLON_COLON,
    STATE(66), 1,
      sym_path_segment,
    STATE(157), 1,
      sym_path,
    STATE(166), 1,
      sym_type,
  [2609] = 1,
    ACTIONS(358), 4,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
  [2616] = 3,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      aux_sym_tuple_expression_repeat1,
    ACTIONS(363), 2,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2627] = 1,
    ACTIONS(365), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [2634] = 3,
    ACTIONS(367), 1,
      anon_sym_COLON,
    ACTIONS(369), 1,
      anon_sym_DASH_GT,
    ACTIONS(371), 1,
      anon_sym_SEMI,
  [2644] = 3,
    ACTIONS(373), 1,
      anon_sym_COLON,
    ACTIONS(375), 1,
      anon_sym_DASH_GT,
    ACTIONS(377), 1,
      anon_sym_SEMI,
  [2654] = 3,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      aux_sym_function_repeat1,
  [2664] = 3,
    ACTIONS(383), 1,
      anon_sym_COLON,
    ACTIONS(385), 1,
      anon_sym_DASH_GT,
    ACTIONS(387), 1,
      anon_sym_SEMI,
  [2674] = 3,
    ACTIONS(389), 1,
      anon_sym_COLON,
    ACTIONS(391), 1,
      anon_sym_DASH_GT,
    ACTIONS(393), 1,
      anon_sym_SEMI,
  [2684] = 3,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_tuple_expression_repeat1,
  [2694] = 3,
    ACTIONS(399), 1,
      anon_sym_COLON,
    ACTIONS(401), 1,
      anon_sym_DASH_GT,
    ACTIONS(403), 1,
      anon_sym_SEMI,
  [2704] = 3,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      aux_sym_function_repeat1,
  [2714] = 3,
    ACTIONS(409), 1,
      anon_sym_COMMA,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    STATE(178), 1,
      aux_sym_function_repeat1,
  [2724] = 3,
    ACTIONS(413), 1,
      anon_sym_COLON,
    ACTIONS(415), 1,
      anon_sym_DASH_GT,
    ACTIONS(417), 1,
      anon_sym_SEMI,
  [2734] = 3,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      aux_sym_tuple_expression_repeat1,
  [2744] = 3,
    ACTIONS(421), 1,
      anon_sym_COLON,
    ACTIONS(423), 1,
      anon_sym_DASH_GT,
    ACTIONS(425), 1,
      anon_sym_SEMI,
  [2754] = 3,
    ACTIONS(427), 1,
      anon_sym_COMMA,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      aux_sym_function_repeat1,
  [2764] = 3,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    ACTIONS(433), 1,
      anon_sym_GT,
    STATE(182), 1,
      aux_sym_tuple_expression_repeat1,
  [2774] = 3,
    ACTIONS(435), 1,
      anon_sym_COLON,
    ACTIONS(437), 1,
      anon_sym_DASH_GT,
    ACTIONS(439), 1,
      anon_sym_SEMI,
  [2784] = 3,
    ACTIONS(441), 1,
      anon_sym_COLON,
    ACTIONS(443), 1,
      anon_sym_DASH_GT,
    ACTIONS(445), 1,
      anon_sym_SEMI,
  [2794] = 3,
    ACTIONS(447), 1,
      anon_sym_COLON,
    ACTIONS(449), 1,
      anon_sym_DASH_GT,
    ACTIONS(451), 1,
      anon_sym_SEMI,
  [2804] = 3,
    ACTIONS(453), 1,
      anon_sym_COLON,
    ACTIONS(455), 1,
      anon_sym_DASH_GT,
    ACTIONS(457), 1,
      anon_sym_SEMI,
  [2814] = 3,
    ACTIONS(459), 1,
      anon_sym_COMMA,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      aux_sym_function_repeat1,
  [2824] = 3,
    ACTIONS(464), 1,
      anon_sym_COLON,
    ACTIONS(466), 1,
      anon_sym_DASH_GT,
    ACTIONS(468), 1,
      anon_sym_SEMI,
  [2834] = 3,
    ACTIONS(470), 1,
      anon_sym_COMMA,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      aux_sym_function_repeat1,
  [2844] = 3,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      aux_sym_function_repeat1,
  [2854] = 3,
    ACTIONS(478), 1,
      anon_sym_COLON,
    ACTIONS(480), 1,
      anon_sym_DASH_GT,
    ACTIONS(482), 1,
      anon_sym_SEMI,
  [2864] = 1,
    ACTIONS(363), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2870] = 3,
    ACTIONS(67), 1,
      anon_sym_GT,
    ACTIONS(484), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      aux_sym_tuple_expression_repeat1,
  [2880] = 3,
    ACTIONS(486), 1,
      anon_sym_COLON,
    ACTIONS(488), 1,
      anon_sym_DASH_GT,
    ACTIONS(490), 1,
      anon_sym_SEMI,
  [2890] = 3,
    ACTIONS(492), 1,
      anon_sym_COLON,
    ACTIONS(494), 1,
      anon_sym_DASH_GT,
    ACTIONS(496), 1,
      anon_sym_SEMI,
  [2900] = 2,
    ACTIONS(231), 1,
      sym_identifier,
    STATE(129), 1,
      sym_path_segment,
  [2907] = 2,
    ACTIONS(498), 1,
      anon_sym_COLON,
    ACTIONS(500), 1,
      anon_sym_SEMI,
  [2914] = 2,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
    ACTIONS(504), 1,
      sym_identifier,
  [2921] = 2,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
    ACTIONS(508), 1,
      sym_identifier,
  [2928] = 2,
    ACTIONS(510), 1,
      anon_sym_COLON,
    ACTIONS(512), 1,
      anon_sym_SEMI,
  [2935] = 2,
    ACTIONS(514), 1,
      anon_sym_COLON,
    ACTIONS(516), 1,
      anon_sym_SEMI,
  [2942] = 2,
    ACTIONS(518), 1,
      anon_sym_COLON,
    ACTIONS(520), 1,
      anon_sym_SEMI,
  [2949] = 2,
    ACTIONS(231), 1,
      sym_identifier,
    STATE(77), 1,
      sym_path_segment,
  [2956] = 2,
    ACTIONS(522), 1,
      anon_sym_COLON,
    ACTIONS(524), 1,
      anon_sym_SEMI,
  [2963] = 2,
    ACTIONS(526), 1,
      anon_sym_SEMI,
    ACTIONS(528), 1,
      anon_sym_RBRACE,
  [2970] = 2,
    ACTIONS(530), 1,
      anon_sym_COLON,
    ACTIONS(532), 1,
      anon_sym_SEMI,
  [2977] = 2,
    ACTIONS(534), 1,
      anon_sym_fn,
    ACTIONS(536), 1,
      sym_string_literal,
  [2984] = 2,
    ACTIONS(538), 1,
      anon_sym_COLON,
    ACTIONS(540), 1,
      anon_sym_SEMI,
  [2991] = 2,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    ACTIONS(544), 1,
      sym_identifier,
  [2998] = 2,
    ACTIONS(546), 1,
      anon_sym_COLON,
    ACTIONS(548), 1,
      anon_sym_SEMI,
  [3005] = 1,
    ACTIONS(550), 2,
      anon_sym_super,
      anon_sym_package,
  [3010] = 2,
    ACTIONS(552), 1,
      anon_sym_COLON,
    ACTIONS(554), 1,
      anon_sym_SEMI,
  [3017] = 2,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    ACTIONS(558), 1,
      sym_identifier,
  [3024] = 2,
    ACTIONS(558), 1,
      sym_identifier,
    ACTIONS(560), 1,
      anon_sym_RPAREN,
  [3031] = 2,
    ACTIONS(562), 1,
      anon_sym_COLON,
    ACTIONS(564), 1,
      anon_sym_SEMI,
  [3038] = 1,
    ACTIONS(566), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3043] = 2,
    ACTIONS(568), 1,
      anon_sym_COLON,
    ACTIONS(570), 1,
      anon_sym_SEMI,
  [3050] = 2,
    ACTIONS(572), 1,
      anon_sym_COLON,
    ACTIONS(574), 1,
      anon_sym_SEMI,
  [3057] = 2,
    ACTIONS(576), 1,
      anon_sym_COLON,
    ACTIONS(578), 1,
      anon_sym_SEMI,
  [3064] = 2,
    ACTIONS(558), 1,
      sym_identifier,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
  [3071] = 2,
    ACTIONS(582), 1,
      anon_sym_COLON,
    ACTIONS(584), 1,
      anon_sym_SEMI,
  [3078] = 2,
    ACTIONS(558), 1,
      sym_identifier,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
  [3085] = 2,
    ACTIONS(558), 1,
      sym_identifier,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
  [3092] = 2,
    ACTIONS(590), 1,
      anon_sym_COLON,
    ACTIONS(592), 1,
      anon_sym_SEMI,
  [3099] = 2,
    ACTIONS(526), 1,
      anon_sym_SEMI,
    ACTIONS(594), 1,
      anon_sym_RBRACE,
  [3106] = 2,
    ACTIONS(558), 1,
      sym_identifier,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
  [3113] = 1,
    ACTIONS(598), 1,
      sym_digits,
  [3117] = 1,
    ACTIONS(348), 1,
      anon_sym_fn,
  [3121] = 1,
    ACTIONS(600), 1,
      anon_sym_COLON,
  [3125] = 1,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
  [3129] = 1,
    ACTIONS(604), 1,
      anon_sym_COLON,
  [3133] = 1,
    ACTIONS(606), 1,
      ts_builtin_sym_end,
  [3137] = 1,
    ACTIONS(608), 1,
      sym_identifier,
  [3141] = 1,
    ACTIONS(610), 1,
      anon_sym_LPAREN,
  [3145] = 1,
    ACTIONS(612), 1,
      anon_sym_LPAREN,
  [3149] = 1,
    ACTIONS(614), 1,
      anon_sym_fn,
  [3153] = 1,
    ACTIONS(616), 1,
      anon_sym_COLON,
  [3157] = 1,
    ACTIONS(618), 1,
      anon_sym_COLON_EQ,
  [3161] = 1,
    ACTIONS(526), 1,
      anon_sym_SEMI,
  [3165] = 1,
    ACTIONS(620), 1,
      sym_identifier,
  [3169] = 1,
    ACTIONS(622), 1,
      sym_identifier,
  [3173] = 1,
    ACTIONS(624), 1,
      anon_sym_fn,
  [3177] = 1,
    ACTIONS(626), 1,
      anon_sym_COLON,
  [3181] = 1,
    ACTIONS(534), 1,
      anon_sym_fn,
  [3185] = 1,
    ACTIONS(628), 1,
      anon_sym_LPAREN,
  [3189] = 1,
    ACTIONS(630), 1,
      sym_identifier,
  [3193] = 1,
    ACTIONS(558), 1,
      sym_identifier,
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
  [SMALL_STATE(12)] = 336,
  [SMALL_STATE(13)] = 366,
  [SMALL_STATE(14)] = 396,
  [SMALL_STATE(15)] = 426,
  [SMALL_STATE(16)] = 456,
  [SMALL_STATE(17)] = 486,
  [SMALL_STATE(18)] = 516,
  [SMALL_STATE(19)] = 546,
  [SMALL_STATE(20)] = 576,
  [SMALL_STATE(21)] = 606,
  [SMALL_STATE(22)] = 636,
  [SMALL_STATE(23)] = 666,
  [SMALL_STATE(24)] = 696,
  [SMALL_STATE(25)] = 726,
  [SMALL_STATE(26)] = 756,
  [SMALL_STATE(27)] = 786,
  [SMALL_STATE(28)] = 816,
  [SMALL_STATE(29)] = 846,
  [SMALL_STATE(30)] = 876,
  [SMALL_STATE(31)] = 906,
  [SMALL_STATE(32)] = 936,
  [SMALL_STATE(33)] = 966,
  [SMALL_STATE(34)] = 996,
  [SMALL_STATE(35)] = 1026,
  [SMALL_STATE(36)] = 1056,
  [SMALL_STATE(37)] = 1086,
  [SMALL_STATE(38)] = 1116,
  [SMALL_STATE(39)] = 1146,
  [SMALL_STATE(40)] = 1176,
  [SMALL_STATE(41)] = 1206,
  [SMALL_STATE(42)] = 1236,
  [SMALL_STATE(43)] = 1266,
  [SMALL_STATE(44)] = 1296,
  [SMALL_STATE(45)] = 1326,
  [SMALL_STATE(46)] = 1340,
  [SMALL_STATE(47)] = 1354,
  [SMALL_STATE(48)] = 1368,
  [SMALL_STATE(49)] = 1382,
  [SMALL_STATE(50)] = 1396,
  [SMALL_STATE(51)] = 1410,
  [SMALL_STATE(52)] = 1424,
  [SMALL_STATE(53)] = 1438,
  [SMALL_STATE(54)] = 1466,
  [SMALL_STATE(55)] = 1480,
  [SMALL_STATE(56)] = 1494,
  [SMALL_STATE(57)] = 1508,
  [SMALL_STATE(58)] = 1522,
  [SMALL_STATE(59)] = 1550,
  [SMALL_STATE(60)] = 1561,
  [SMALL_STATE(61)] = 1577,
  [SMALL_STATE(62)] = 1586,
  [SMALL_STATE(63)] = 1595,
  [SMALL_STATE(64)] = 1604,
  [SMALL_STATE(65)] = 1613,
  [SMALL_STATE(66)] = 1622,
  [SMALL_STATE(67)] = 1637,
  [SMALL_STATE(68)] = 1646,
  [SMALL_STATE(69)] = 1655,
  [SMALL_STATE(70)] = 1664,
  [SMALL_STATE(71)] = 1673,
  [SMALL_STATE(72)] = 1682,
  [SMALL_STATE(73)] = 1691,
  [SMALL_STATE(74)] = 1700,
  [SMALL_STATE(75)] = 1709,
  [SMALL_STATE(76)] = 1718,
  [SMALL_STATE(77)] = 1727,
  [SMALL_STATE(78)] = 1742,
  [SMALL_STATE(79)] = 1751,
  [SMALL_STATE(80)] = 1760,
  [SMALL_STATE(81)] = 1773,
  [SMALL_STATE(82)] = 1788,
  [SMALL_STATE(83)] = 1797,
  [SMALL_STATE(84)] = 1806,
  [SMALL_STATE(85)] = 1815,
  [SMALL_STATE(86)] = 1824,
  [SMALL_STATE(87)] = 1833,
  [SMALL_STATE(88)] = 1842,
  [SMALL_STATE(89)] = 1851,
  [SMALL_STATE(90)] = 1860,
  [SMALL_STATE(91)] = 1869,
  [SMALL_STATE(92)] = 1878,
  [SMALL_STATE(93)] = 1887,
  [SMALL_STATE(94)] = 1900,
  [SMALL_STATE(95)] = 1915,
  [SMALL_STATE(96)] = 1924,
  [SMALL_STATE(97)] = 1933,
  [SMALL_STATE(98)] = 1942,
  [SMALL_STATE(99)] = 1957,
  [SMALL_STATE(100)] = 1966,
  [SMALL_STATE(101)] = 1975,
  [SMALL_STATE(102)] = 1984,
  [SMALL_STATE(103)] = 1993,
  [SMALL_STATE(104)] = 2002,
  [SMALL_STATE(105)] = 2011,
  [SMALL_STATE(106)] = 2020,
  [SMALL_STATE(107)] = 2029,
  [SMALL_STATE(108)] = 2038,
  [SMALL_STATE(109)] = 2047,
  [SMALL_STATE(110)] = 2056,
  [SMALL_STATE(111)] = 2065,
  [SMALL_STATE(112)] = 2074,
  [SMALL_STATE(113)] = 2083,
  [SMALL_STATE(114)] = 2092,
  [SMALL_STATE(115)] = 2101,
  [SMALL_STATE(116)] = 2110,
  [SMALL_STATE(117)] = 2123,
  [SMALL_STATE(118)] = 2132,
  [SMALL_STATE(119)] = 2141,
  [SMALL_STATE(120)] = 2150,
  [SMALL_STATE(121)] = 2159,
  [SMALL_STATE(122)] = 2168,
  [SMALL_STATE(123)] = 2177,
  [SMALL_STATE(124)] = 2186,
  [SMALL_STATE(125)] = 2195,
  [SMALL_STATE(126)] = 2204,
  [SMALL_STATE(127)] = 2213,
  [SMALL_STATE(128)] = 2222,
  [SMALL_STATE(129)] = 2231,
  [SMALL_STATE(130)] = 2241,
  [SMALL_STATE(131)] = 2251,
  [SMALL_STATE(132)] = 2267,
  [SMALL_STATE(133)] = 2283,
  [SMALL_STATE(134)] = 2299,
  [SMALL_STATE(135)] = 2315,
  [SMALL_STATE(136)] = 2331,
  [SMALL_STATE(137)] = 2341,
  [SMALL_STATE(138)] = 2357,
  [SMALL_STATE(139)] = 2373,
  [SMALL_STATE(140)] = 2389,
  [SMALL_STATE(141)] = 2399,
  [SMALL_STATE(142)] = 2413,
  [SMALL_STATE(143)] = 2429,
  [SMALL_STATE(144)] = 2445,
  [SMALL_STATE(145)] = 2461,
  [SMALL_STATE(146)] = 2471,
  [SMALL_STATE(147)] = 2487,
  [SMALL_STATE(148)] = 2503,
  [SMALL_STATE(149)] = 2519,
  [SMALL_STATE(150)] = 2535,
  [SMALL_STATE(151)] = 2551,
  [SMALL_STATE(152)] = 2567,
  [SMALL_STATE(153)] = 2583,
  [SMALL_STATE(154)] = 2593,
  [SMALL_STATE(155)] = 2609,
  [SMALL_STATE(156)] = 2616,
  [SMALL_STATE(157)] = 2627,
  [SMALL_STATE(158)] = 2634,
  [SMALL_STATE(159)] = 2644,
  [SMALL_STATE(160)] = 2654,
  [SMALL_STATE(161)] = 2664,
  [SMALL_STATE(162)] = 2674,
  [SMALL_STATE(163)] = 2684,
  [SMALL_STATE(164)] = 2694,
  [SMALL_STATE(165)] = 2704,
  [SMALL_STATE(166)] = 2714,
  [SMALL_STATE(167)] = 2724,
  [SMALL_STATE(168)] = 2734,
  [SMALL_STATE(169)] = 2744,
  [SMALL_STATE(170)] = 2754,
  [SMALL_STATE(171)] = 2764,
  [SMALL_STATE(172)] = 2774,
  [SMALL_STATE(173)] = 2784,
  [SMALL_STATE(174)] = 2794,
  [SMALL_STATE(175)] = 2804,
  [SMALL_STATE(176)] = 2814,
  [SMALL_STATE(177)] = 2824,
  [SMALL_STATE(178)] = 2834,
  [SMALL_STATE(179)] = 2844,
  [SMALL_STATE(180)] = 2854,
  [SMALL_STATE(181)] = 2864,
  [SMALL_STATE(182)] = 2870,
  [SMALL_STATE(183)] = 2880,
  [SMALL_STATE(184)] = 2890,
  [SMALL_STATE(185)] = 2900,
  [SMALL_STATE(186)] = 2907,
  [SMALL_STATE(187)] = 2914,
  [SMALL_STATE(188)] = 2921,
  [SMALL_STATE(189)] = 2928,
  [SMALL_STATE(190)] = 2935,
  [SMALL_STATE(191)] = 2942,
  [SMALL_STATE(192)] = 2949,
  [SMALL_STATE(193)] = 2956,
  [SMALL_STATE(194)] = 2963,
  [SMALL_STATE(195)] = 2970,
  [SMALL_STATE(196)] = 2977,
  [SMALL_STATE(197)] = 2984,
  [SMALL_STATE(198)] = 2991,
  [SMALL_STATE(199)] = 2998,
  [SMALL_STATE(200)] = 3005,
  [SMALL_STATE(201)] = 3010,
  [SMALL_STATE(202)] = 3017,
  [SMALL_STATE(203)] = 3024,
  [SMALL_STATE(204)] = 3031,
  [SMALL_STATE(205)] = 3038,
  [SMALL_STATE(206)] = 3043,
  [SMALL_STATE(207)] = 3050,
  [SMALL_STATE(208)] = 3057,
  [SMALL_STATE(209)] = 3064,
  [SMALL_STATE(210)] = 3071,
  [SMALL_STATE(211)] = 3078,
  [SMALL_STATE(212)] = 3085,
  [SMALL_STATE(213)] = 3092,
  [SMALL_STATE(214)] = 3099,
  [SMALL_STATE(215)] = 3106,
  [SMALL_STATE(216)] = 3113,
  [SMALL_STATE(217)] = 3117,
  [SMALL_STATE(218)] = 3121,
  [SMALL_STATE(219)] = 3125,
  [SMALL_STATE(220)] = 3129,
  [SMALL_STATE(221)] = 3133,
  [SMALL_STATE(222)] = 3137,
  [SMALL_STATE(223)] = 3141,
  [SMALL_STATE(224)] = 3145,
  [SMALL_STATE(225)] = 3149,
  [SMALL_STATE(226)] = 3153,
  [SMALL_STATE(227)] = 3157,
  [SMALL_STATE(228)] = 3161,
  [SMALL_STATE(229)] = 3165,
  [SMALL_STATE(230)] = 3169,
  [SMALL_STATE(231)] = 3173,
  [SMALL_STATE(232)] = 3177,
  [SMALL_STATE(233)] = 3181,
  [SMALL_STATE(234)] = 3185,
  [SMALL_STATE(235)] = 3189,
  [SMALL_STATE(236)] = 3193,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 1, .production_id = 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 3, .production_id = 13),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(10),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(6),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(235),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(228),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(54),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 4, .production_id = 19),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 3, .production_id = 12),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 3, .production_id = 11),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_literal, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 4, .production_id = 21),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 4, .production_id = 20),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 3, .production_id = 10),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 2, .production_id = 6),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 5, .production_id = 28),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(230),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(233),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(196),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(130),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_segment, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_segment, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 41),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, .production_id = 18),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 15, .production_id = 73),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 14, .production_id = 72),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 35),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 14, .production_id = 71),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 34),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 6, .production_id = 5),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 33),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 14, .production_id = 70),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 14, .production_id = 69),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 68),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 67),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 66),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 65),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 32),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 7, .production_id = 7),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 31),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 64),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 63),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 7, .production_id = 8),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 62),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 61),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 36),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 7, .production_id = 9),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 29),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 60),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 59),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 5, .production_id = 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, .production_id = 14),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 37),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(185),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 58),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 38),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 27),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, .production_id = 15),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 57),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 6, .production_id = 4),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 56),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, .production_id = 17),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 55),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 54),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 53),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 39),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 52),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 51),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 50),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 40),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 49),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 4),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 42),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 26),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 48),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 47),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 43),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 22),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 44),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 23),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 25),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 46),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 45),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 24),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility_modifier, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_args, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_args, 3),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_args, 5),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_args, 5),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_args, 4),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_args, 4),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_segment, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_segment, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility_modifier, 4),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_expression_repeat1, 2), SHIFT_REPEAT(27),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_expression_repeat1, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2, .production_id = 16), SHIFT_REPEAT(236),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2, .production_id = 16),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_modifier, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 4, .production_id = 30),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [606] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_modifier, 2, .production_id = 1),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
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
