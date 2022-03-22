#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 1089
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 85
#define ALIAS_COUNT 1
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 18
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 149

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
  anon_sym_const = 11,
  anon_sym_unsafe = 12,
  anon_sym_extern = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym_SEMI = 16,
  anon_sym_DASH_GT = 17,
  anon_sym_pub = 18,
  anon_sym_super = 19,
  anon_sym_package = 20,
  anon_sym_Self = 21,
  anon_sym_COLON_COLON = 22,
  anon_sym_LT = 23,
  anon_sym_GT = 24,
  anon_sym_COLON_COLON_LT = 25,
  anon_sym_self = 26,
  anon_sym_let = 27,
  anon_sym_COLON_EQ = 28,
  sym_identifier = 29,
  sym_infer = 30,
  sym_string_literal = 31,
  anon_sym_true = 32,
  anon_sym_false = 33,
  anon_sym_DOT = 34,
  anon_sym_0x = 35,
  anon_sym_0b = 36,
  anon_sym_u8 = 37,
  anon_sym_u16 = 38,
  anon_sym_u32 = 39,
  anon_sym_u64 = 40,
  anon_sym_u128 = 41,
  anon_sym_usize = 42,
  anon_sym_i8 = 43,
  anon_sym_i16 = 44,
  anon_sym_i32 = 45,
  anon_sym_i64 = 46,
  anon_sym_i128 = 47,
  anon_sym_isize = 48,
  anon_sym_f32 = 49,
  anon_sym_f64 = 50,
  sym_digits = 51,
  sym_bin_digits = 52,
  sym_hex_digits = 53,
  sym_file = 54,
  sym_attr = 55,
  sym_function = 56,
  sym_function_modifier = 57,
  sym_extern_block = 58,
  sym_extern_function = 59,
  sym_annotated = 60,
  sym_visibility_modifier = 61,
  sym_basic_type = 62,
  sym_tuple_type = 63,
  sym_function_type = 64,
  sym_path = 65,
  sym_codeblock = 66,
  sym_statement = 67,
  sym_tuple_expression = 68,
  sym_let_binding = 69,
  sym_boolean_literal = 70,
  sym_numeric_literal = 71,
  aux_sym_file_repeat1 = 72,
  aux_sym_file_repeat2 = 73,
  aux_sym_attr_repeat1 = 74,
  aux_sym_function_repeat1 = 75,
  aux_sym_extern_block_repeat1 = 76,
  aux_sym_inputs_repeat1 = 77,
  aux_sym_tuple_type_repeat1 = 78,
  aux_sym_function_type_repeat1 = 79,
  aux_sym_generic_args_repeat1 = 80,
  aux_sym_path_repeat1 = 81,
  aux_sym_path_repeat2 = 82,
  aux_sym_codeblock_repeat1 = 83,
  aux_sym_tuple_expression_repeat1 = 84,
  alias_sym_extern = 85,
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
  [anon_sym_const] = "const",
  [anon_sym_unsafe] = "unsafe",
  [anon_sym_extern] = "extern",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_pub] = "pub",
  [anon_sym_super] = "super",
  [anon_sym_package] = "package",
  [anon_sym_Self] = "Self",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_COLON_COLON_LT] = "::<",
  [anon_sym_self] = "self",
  [anon_sym_let] = "let",
  [anon_sym_COLON_EQ] = ":=",
  [sym_identifier] = "identifier",
  [sym_infer] = "infer",
  [sym_string_literal] = "string_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DOT] = ".",
  [anon_sym_0x] = "0x",
  [anon_sym_0b] = "0b",
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
  [sym_bin_digits] = "bin_digits",
  [sym_hex_digits] = "hex_digits",
  [sym_file] = "file",
  [sym_attr] = "attr",
  [sym_function] = "function",
  [sym_function_modifier] = "function_modifier",
  [sym_extern_block] = "extern_block",
  [sym_extern_function] = "extern_function",
  [sym_annotated] = "annotated",
  [sym_visibility_modifier] = "visibility_modifier",
  [sym_basic_type] = "basic_type",
  [sym_tuple_type] = "tuple_type",
  [sym_function_type] = "function_type",
  [sym_path] = "path",
  [sym_codeblock] = "codeblock",
  [sym_statement] = "statement",
  [sym_tuple_expression] = "tuple_expression",
  [sym_let_binding] = "let_binding",
  [sym_boolean_literal] = "boolean_literal",
  [sym_numeric_literal] = "numeric_literal",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_file_repeat2] = "file_repeat2",
  [aux_sym_attr_repeat1] = "attr_repeat1",
  [aux_sym_function_repeat1] = "function_repeat1",
  [aux_sym_extern_block_repeat1] = "extern_block_repeat1",
  [aux_sym_inputs_repeat1] = "inputs_repeat1",
  [aux_sym_tuple_type_repeat1] = "tuple_type_repeat1",
  [aux_sym_function_type_repeat1] = "function_type_repeat1",
  [aux_sym_generic_args_repeat1] = "generic_args_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_path_repeat2] = "path_repeat2",
  [aux_sym_codeblock_repeat1] = "codeblock_repeat1",
  [aux_sym_tuple_expression_repeat1] = "tuple_expression_repeat1",
  [alias_sym_extern] = "extern",
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
  [anon_sym_const] = anon_sym_const,
  [anon_sym_unsafe] = anon_sym_unsafe,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_pub] = anon_sym_pub,
  [anon_sym_super] = anon_sym_super,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_Self] = anon_sym_Self,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_COLON_COLON_LT] = anon_sym_COLON_COLON_LT,
  [anon_sym_self] = anon_sym_self,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [sym_identifier] = sym_identifier,
  [sym_infer] = sym_infer,
  [sym_string_literal] = sym_string_literal,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_0x] = anon_sym_0x,
  [anon_sym_0b] = anon_sym_0b,
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
  [sym_bin_digits] = sym_bin_digits,
  [sym_hex_digits] = sym_hex_digits,
  [sym_file] = sym_file,
  [sym_attr] = sym_attr,
  [sym_function] = sym_function,
  [sym_function_modifier] = sym_function_modifier,
  [sym_extern_block] = sym_extern_block,
  [sym_extern_function] = sym_extern_function,
  [sym_annotated] = sym_annotated,
  [sym_visibility_modifier] = sym_visibility_modifier,
  [sym_basic_type] = sym_basic_type,
  [sym_tuple_type] = sym_tuple_type,
  [sym_function_type] = sym_function_type,
  [sym_path] = sym_path,
  [sym_codeblock] = sym_codeblock,
  [sym_statement] = sym_statement,
  [sym_tuple_expression] = sym_tuple_expression,
  [sym_let_binding] = sym_let_binding,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_numeric_literal] = sym_numeric_literal,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_file_repeat2] = aux_sym_file_repeat2,
  [aux_sym_attr_repeat1] = aux_sym_attr_repeat1,
  [aux_sym_function_repeat1] = aux_sym_function_repeat1,
  [aux_sym_extern_block_repeat1] = aux_sym_extern_block_repeat1,
  [aux_sym_inputs_repeat1] = aux_sym_inputs_repeat1,
  [aux_sym_tuple_type_repeat1] = aux_sym_tuple_type_repeat1,
  [aux_sym_function_type_repeat1] = aux_sym_function_type_repeat1,
  [aux_sym_generic_args_repeat1] = aux_sym_generic_args_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_path_repeat2] = aux_sym_path_repeat2,
  [aux_sym_codeblock_repeat1] = aux_sym_codeblock_repeat1,
  [aux_sym_tuple_expression_repeat1] = aux_sym_tuple_expression_repeat1,
  [alias_sym_extern] = alias_sym_extern,
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
  [anon_sym_DASH_GT] = {
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
  [anon_sym_Self] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_self] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_infer] = {
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
  [anon_sym_0x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0b] = {
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
  [sym_bin_digits] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_digits] = {
    .visible = true,
    .named = true,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_attr] = {
    .visible = true,
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
  [sym_extern_block] = {
    .visible = true,
    .named = true,
  },
  [sym_extern_function] = {
    .visible = true,
    .named = true,
  },
  [sym_annotated] = {
    .visible = true,
    .named = true,
  },
  [sym_visibility_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_basic_type] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_type] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
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
  [aux_sym_extern_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inputs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_generic_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat2] = {
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
  [alias_sym_extern] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_abi = 1,
  field_arg = 2,
  field_body = 3,
  field_digits = 4,
  field_float_part = 5,
  field_input = 6,
  field_item = 7,
  field_member = 8,
  field_modifier = 9,
  field_name = 10,
  field_output = 11,
  field_prefix = 12,
  field_restriction = 13,
  field_segment = 14,
  field_suffix = 15,
  field_trailing = 16,
  field_value = 17,
  field_vis = 18,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_abi] = "abi",
  [field_arg] = "arg",
  [field_body] = "body",
  [field_digits] = "digits",
  [field_float_part] = "float_part",
  [field_input] = "input",
  [field_item] = "item",
  [field_member] = "member",
  [field_modifier] = "modifier",
  [field_name] = "name",
  [field_output] = "output",
  [field_prefix] = "prefix",
  [field_restriction] = "restriction",
  [field_segment] = "segment",
  [field_suffix] = "suffix",
  [field_trailing] = "trailing",
  [field_value] = "value",
  [field_vis] = "vis",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 1},
  [6] = {.index = 4, .length = 1},
  [7] = {.index = 5, .length = 2},
  [8] = {.index = 7, .length = 1},
  [9] = {.index = 8, .length = 1},
  [10] = {.index = 9, .length = 1},
  [11] = {.index = 10, .length = 2},
  [12] = {.index = 1, .length = 1},
  [13] = {.index = 12, .length = 1},
  [14] = {.index = 13, .length = 2},
  [15] = {.index = 15, .length = 1},
  [16] = {.index = 16, .length = 2},
  [17] = {.index = 18, .length = 3},
  [18] = {.index = 21, .length = 2},
  [19] = {.index = 23, .length = 2},
  [20] = {.index = 25, .length = 1},
  [21] = {.index = 26, .length = 2},
  [22] = {.index = 28, .length = 2},
  [23] = {.index = 30, .length = 2},
  [24] = {.index = 32, .length = 3},
  [25] = {.index = 35, .length = 3},
  [26] = {.index = 38, .length = 2},
  [27] = {.index = 40, .length = 1},
  [28] = {.index = 41, .length = 2},
  [29] = {.index = 43, .length = 2},
  [30] = {.index = 45, .length = 2},
  [31] = {.index = 47, .length = 1},
  [32] = {.index = 48, .length = 2},
  [33] = {.index = 50, .length = 3},
  [34] = {.index = 53, .length = 3},
  [35] = {.index = 56, .length = 3},
  [36] = {.index = 59, .length = 1},
  [37] = {.index = 60, .length = 3},
  [38] = {.index = 63, .length = 3},
  [39] = {.index = 66, .length = 2},
  [40] = {.index = 68, .length = 4},
  [41] = {.index = 72, .length = 1},
  [42] = {.index = 73, .length = 1},
  [43] = {.index = 74, .length = 3},
  [44] = {.index = 77, .length = 3},
  [45] = {.index = 80, .length = 4},
  [46] = {.index = 84, .length = 2},
  [47] = {.index = 86, .length = 2},
  [48] = {.index = 88, .length = 4},
  [49] = {.index = 92, .length = 4},
  [50] = {.index = 96, .length = 4},
  [51] = {.index = 100, .length = 3},
  [52] = {.index = 103, .length = 3},
  [53] = {.index = 106, .length = 3},
  [54] = {.index = 109, .length = 2},
  [55] = {.index = 111, .length = 2},
  [56] = {.index = 113, .length = 1},
  [57] = {.index = 114, .length = 4},
  [58] = {.index = 118, .length = 4},
  [59] = {.index = 122, .length = 2},
  [60] = {.index = 124, .length = 3},
  [61] = {.index = 127, .length = 3},
  [62] = {.index = 130, .length = 4},
  [63] = {.index = 134, .length = 4},
  [64] = {.index = 138, .length = 5},
  [65] = {.index = 143, .length = 4},
  [66] = {.index = 147, .length = 4},
  [67] = {.index = 151, .length = 5},
  [68] = {.index = 156, .length = 5},
  [69] = {.index = 161, .length = 3},
  [70] = {.index = 164, .length = 3},
  [71] = {.index = 167, .length = 4},
  [72] = {.index = 171, .length = 4},
  [73] = {.index = 175, .length = 4},
  [74] = {.index = 179, .length = 4},
  [75] = {.index = 183, .length = 1},
  [76] = {.index = 184, .length = 1},
  [77] = {.index = 185, .length = 1},
  [78] = {.index = 186, .length = 1},
  [79] = {.index = 187, .length = 2},
  [80] = {.index = 189, .length = 2},
  [81] = {.index = 191, .length = 4},
  [82] = {.index = 195, .length = 5},
  [83] = {.index = 200, .length = 3},
  [84] = {.index = 203, .length = 3},
  [85] = {.index = 206, .length = 4},
  [86] = {.index = 210, .length = 5},
  [87] = {.index = 215, .length = 5},
  [88] = {.index = 220, .length = 5},
  [89] = {.index = 225, .length = 5},
  [90] = {.index = 230, .length = 5},
  [91] = {.index = 235, .length = 5},
  [92] = {.index = 240, .length = 6},
  [93] = {.index = 246, .length = 4},
  [94] = {.index = 250, .length = 4},
  [95] = {.index = 254, .length = 4},
  [96] = {.index = 258, .length = 4},
  [97] = {.index = 262, .length = 5},
  [98] = {.index = 267, .length = 4},
  [99] = {.index = 271, .length = 4},
  [100] = {.index = 275, .length = 5},
  [101] = {.index = 280, .length = 5},
  [102] = {.index = 285, .length = 1},
  [103] = {.index = 286, .length = 2},
  [104] = {.index = 288, .length = 5},
  [105] = {.index = 293, .length = 3},
  [106] = {.index = 296, .length = 4},
  [107] = {.index = 300, .length = 4},
  [108] = {.index = 304, .length = 5},
  [109] = {.index = 309, .length = 6},
  [110] = {.index = 315, .length = 5},
  [111] = {.index = 320, .length = 6},
  [112] = {.index = 326, .length = 6},
  [113] = {.index = 332, .length = 6},
  [114] = {.index = 338, .length = 4},
  [115] = {.index = 342, .length = 5},
  [116] = {.index = 347, .length = 5},
  [117] = {.index = 352, .length = 5},
  [118] = {.index = 357, .length = 5},
  [119] = {.index = 362, .length = 5},
  [120] = {.index = 367, .length = 5},
  [121] = {.index = 372, .length = 5},
  [122] = {.index = 377, .length = 6},
  [123] = {.index = 383, .length = 1},
  [124] = {.index = 384, .length = 2},
  [125] = {.index = 386, .length = 4},
  [126] = {.index = 390, .length = 4},
  [127] = {.index = 394, .length = 5},
  [128] = {.index = 399, .length = 6},
  [129] = {.index = 405, .length = 6},
  [130] = {.index = 411, .length = 6},
  [131] = {.index = 417, .length = 7},
  [132] = {.index = 424, .length = 5},
  [133] = {.index = 429, .length = 5},
  [134] = {.index = 434, .length = 6},
  [135] = {.index = 440, .length = 5},
  [136] = {.index = 445, .length = 6},
  [137] = {.index = 451, .length = 6},
  [138] = {.index = 457, .length = 6},
  [139] = {.index = 463, .length = 2},
  [140] = {.index = 465, .length = 3},
  [141] = {.index = 468, .length = 5},
  [142] = {.index = 473, .length = 7},
  [143] = {.index = 480, .length = 6},
  [144] = {.index = 486, .length = 6},
  [145] = {.index = 492, .length = 6},
  [146] = {.index = 498, .length = 7},
  [147] = {.index = 505, .length = 3},
  [148] = {.index = 508, .length = 7},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_segment, 0},
  [1] =
    {field_abi, 1},
  [2] =
    {field_segment, 1},
  [3] =
    {field_item, 0},
  [4] =
    {field_segment, 2},
  [5] =
    {field_segment, 0},
    {field_segment, 2},
  [7] =
    {field_value, 2},
  [8] =
    {field_digits, 0},
  [9] =
    {field_item, 2, .inherited = true},
  [10] =
    {field_item, 0, .inherited = true},
    {field_item, 1, .inherited = true},
  [12] =
    {field_restriction, 2},
  [13] =
    {field_segment, 2},
    {field_segment, 3, .inherited = true},
  [15] =
    {field_segment, 3},
  [16] =
    {field_segment, 1},
    {field_segment, 3},
  [18] =
    {field_segment, 0},
    {field_segment, 2},
    {field_segment, 3, .inherited = true},
  [21] =
    {field_digits, 1},
    {field_prefix, 0},
  [23] =
    {field_digits, 0},
    {field_suffix, 1},
  [25] =
    {field_arg, 2},
  [26] =
    {field_abi, 1},
    {field_item, 3, .inherited = true},
  [28] =
    {field_segment, 0, .inherited = true},
    {field_segment, 1, .inherited = true},
  [30] =
    {field_segment, 3},
    {field_segment, 4, .inherited = true},
  [32] =
    {field_segment, 1},
    {field_segment, 3},
    {field_segment, 4, .inherited = true},
  [35] =
    {field_digits, 1},
    {field_prefix, 0},
    {field_suffix, 2},
  [38] =
    {field_digits, 0},
    {field_float_part, 2},
  [40] =
    {field_arg, 1},
  [41] =
    {field_arg, 2},
    {field_arg, 3, .inherited = true},
  [43] =
    {field_arg, 0, .inherited = true},
    {field_arg, 1, .inherited = true},
  [45] =
    {field_body, 5},
    {field_name, 1},
  [47] =
    {field_input, 1},
  [48] =
    {field_input, 0, .inherited = true},
    {field_input, 1, .inherited = true},
  [50] =
    {field_digits, 1},
    {field_float_part, 3},
    {field_prefix, 0},
  [53] =
    {field_digits, 0},
    {field_float_part, 2},
    {field_suffix, 3},
  [56] =
    {field_body, 6},
    {field_input, 3},
    {field_name, 1},
  [59] =
    {field_name, 1},
  [60] =
    {field_body, 6},
    {field_modifier, 0},
    {field_name, 2},
  [63] =
    {field_body, 6},
    {field_name, 2},
    {field_vis, 0},
  [66] =
    {field_body, 6},
    {field_name, 2},
  [68] =
    {field_digits, 1},
    {field_float_part, 3},
    {field_prefix, 0},
    {field_suffix, 4},
  [72] =
    {field_member, 1},
  [73] =
    {field_trailing, 1},
  [74] =
    {field_body, 7},
    {field_name, 1},
    {field_output, 5},
  [77] =
    {field_body, 7},
    {field_input, 3},
    {field_name, 1},
  [80] =
    {field_body, 7},
    {field_input, 3},
    {field_input, 4, .inherited = true},
    {field_name, 1},
  [84] =
    {field_input, 3},
    {field_name, 1},
  [86] =
    {field_name, 2},
    {field_vis, 0},
  [88] =
    {field_body, 7},
    {field_input, 4},
    {field_modifier, 0},
    {field_name, 2},
  [92] =
    {field_body, 7},
    {field_input, 4},
    {field_name, 2},
    {field_vis, 0},
  [96] =
    {field_body, 7},
    {field_modifier, 1},
    {field_name, 3},
    {field_vis, 0},
  [100] =
    {field_body, 7},
    {field_input, 4},
    {field_name, 2},
  [103] =
    {field_body, 7},
    {field_modifier, 1},
    {field_name, 3},
  [106] =
    {field_body, 7},
    {field_name, 3},
    {field_vis, 1},
  [109] =
    {field_member, 1},
    {field_member, 2, .inherited = true},
  [111] =
    {field_member, 0, .inherited = true},
    {field_member, 1, .inherited = true},
  [113] =
    {field_trailing, 2},
  [114] =
    {field_body, 8},
    {field_input, 3},
    {field_name, 1},
    {field_output, 6},
  [118] =
    {field_body, 8},
    {field_input, 3},
    {field_input, 4, .inherited = true},
    {field_name, 1},
  [122] =
    {field_name, 1},
    {field_output, 5},
  [124] =
    {field_input, 3},
    {field_input, 4, .inherited = true},
    {field_name, 1},
  [127] =
    {field_input, 4},
    {field_name, 2},
    {field_vis, 0},
  [130] =
    {field_body, 8},
    {field_modifier, 0},
    {field_name, 2},
    {field_output, 6},
  [134] =
    {field_body, 8},
    {field_input, 4},
    {field_modifier, 0},
    {field_name, 2},
  [138] =
    {field_body, 8},
    {field_input, 4},
    {field_input, 5, .inherited = true},
    {field_modifier, 0},
    {field_name, 2},
  [143] =
    {field_body, 8},
    {field_name, 2},
    {field_output, 6},
    {field_vis, 0},
  [147] =
    {field_body, 8},
    {field_input, 4},
    {field_name, 2},
    {field_vis, 0},
  [151] =
    {field_body, 8},
    {field_input, 4},
    {field_input, 5, .inherited = true},
    {field_name, 2},
    {field_vis, 0},
  [156] =
    {field_body, 8},
    {field_input, 5},
    {field_modifier, 1},
    {field_name, 3},
    {field_vis, 0},
  [161] =
    {field_body, 8},
    {field_name, 2},
    {field_output, 6},
  [164] =
    {field_body, 8},
    {field_input, 4},
    {field_name, 2},
  [167] =
    {field_body, 8},
    {field_input, 4},
    {field_input, 5, .inherited = true},
    {field_name, 2},
  [171] =
    {field_body, 8},
    {field_input, 5},
    {field_modifier, 1},
    {field_name, 3},
  [175] =
    {field_body, 8},
    {field_input, 5},
    {field_name, 3},
    {field_vis, 1},
  [179] =
    {field_body, 8},
    {field_modifier, 2},
    {field_name, 4},
    {field_vis, 1},
  [183] =
    {field_value, 3},
  [184] =
    {field_input, 3},
  [185] =
    {field_value, 1},
  [186] =
    {field_value, 3, .inherited = true},
  [187] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [189] =
    {field_value, 2},
    {field_value, 3, .inherited = true},
  [191] =
    {field_body, 9},
    {field_input, 3},
    {field_name, 1},
    {field_output, 7},
  [195] =
    {field_body, 9},
    {field_input, 3},
    {field_input, 4, .inherited = true},
    {field_name, 1},
    {field_output, 7},
  [200] =
    {field_input, 3},
    {field_name, 1},
    {field_output, 6},
  [203] =
    {field_name, 2},
    {field_output, 6},
    {field_vis, 0},
  [206] =
    {field_input, 4},
    {field_input, 5, .inherited = true},
    {field_name, 2},
    {field_vis, 0},
  [210] =
    {field_body, 9},
    {field_input, 4},
    {field_modifier, 0},
    {field_name, 2},
    {field_output, 7},
  [215] =
    {field_body, 9},
    {field_input, 4},
    {field_input, 5, .inherited = true},
    {field_modifier, 0},
    {field_name, 2},
  [220] =
    {field_body, 9},
    {field_input, 4},
    {field_name, 2},
    {field_output, 7},
    {field_vis, 0},
  [225] =
    {field_body, 9},
    {field_input, 4},
    {field_input, 5, .inherited = true},
    {field_name, 2},
    {field_vis, 0},
  [230] =
    {field_body, 9},
    {field_modifier, 1},
    {field_name, 3},
    {field_output, 7},
    {field_vis, 0},
  [235] =
    {field_body, 9},
    {field_input, 5},
    {field_modifier, 1},
    {field_name, 3},
    {field_vis, 0},
  [240] =
    {field_body, 9},
    {field_input, 5},
    {field_input, 6, .inherited = true},
    {field_modifier, 1},
    {field_name, 3},
    {field_vis, 0},
  [246] =
    {field_body, 9},
    {field_input, 4},
    {field_name, 2},
    {field_output, 7},
  [250] =
    {field_body, 9},
    {field_input, 4},
    {field_input, 5, .inherited = true},
    {field_name, 2},
  [254] =
    {field_body, 9},
    {field_modifier, 1},
    {field_name, 3},
    {field_output, 7},
  [258] =
    {field_body, 9},
    {field_input, 5},
    {field_modifier, 1},
    {field_name, 3},
  [262] =
    {field_body, 9},
    {field_input, 5},
    {field_input, 6, .inherited = true},
    {field_modifier, 1},
    {field_name, 3},
  [267] =
    {field_body, 9},
    {field_name, 3},
    {field_output, 7},
    {field_vis, 1},
  [271] =
    {field_body, 9},
    {field_input, 5},
    {field_name, 3},
    {field_vis, 1},
  [275] =
    {field_body, 9},
    {field_input, 5},
    {field_input, 6, .inherited = true},
    {field_name, 3},
    {field_vis, 1},
  [280] =
    {field_body, 9},
    {field_input, 6},
    {field_modifier, 2},
    {field_name, 4},
    {field_vis, 1},
  [285] =
    {field_output, 5},
  [286] =
    {field_input, 3},
    {field_input, 4, .inherited = true},
  [288] =
    {field_body, 10},
    {field_input, 3},
    {field_input, 4, .inherited = true},
    {field_name, 1},
    {field_output, 8},
  [293] =
    {field_input, 3},
    {field_name, 1},
    {field_output, 7},
  [296] =
    {field_input, 3},
    {field_input, 4, .inherited = true},
    {field_name, 1},
    {field_output, 7},
  [300] =
    {field_input, 4},
    {field_name, 2},
    {field_output, 7},
    {field_vis, 0},
  [304] =
    {field_body, 10},
    {field_input, 4},
    {field_modifier, 0},
    {field_name, 2},
    {field_output, 8},
  [309] =
    {field_body, 10},
    {field_input, 4},
    {field_input, 5, .inherited = true},
    {field_modifier, 0},
    {field_name, 2},
    {field_output, 8},
  [315] =
    {field_body, 10},
    {field_input, 4},
    {field_name, 2},
    {field_output, 8},
    {field_vis, 0},
  [320] =
    {field_body, 10},
    {field_input, 4},
    {field_input, 5, .inherited = true},
    {field_name, 2},
    {field_output, 8},
    {field_vis, 0},
  [326] =
    {field_body, 10},
    {field_input, 5},
    {field_modifier, 1},
    {field_name, 3},
    {field_output, 8},
    {field_vis, 0},
  [332] =
    {field_body, 10},
    {field_input, 5},
    {field_input, 6, .inherited = true},
    {field_modifier, 1},
    {field_name, 3},
    {field_vis, 0},
  [338] =
    {field_body, 10},
    {field_input, 4},
    {field_name, 2},
    {field_output, 8},
  [342] =
    {field_body, 10},
    {field_input, 4},
    {field_input, 5, .inherited = true},
    {field_name, 2},
    {field_output, 8},
  [347] =
    {field_body, 10},
    {field_input, 5},
    {field_modifier, 1},
    {field_name, 3},
    {field_output, 8},
  [352] =
    {field_body, 10},
    {field_input, 5},
    {field_input, 6, .inherited = true},
    {field_modifier, 1},
    {field_name, 3},
  [357] =
    {field_body, 10},
    {field_input, 5},
    {field_name, 3},
    {field_output, 8},
    {field_vis, 1},
  [362] =
    {field_body, 10},
    {field_input, 5},
    {field_input, 6, .inherited = true},
    {field_name, 3},
    {field_vis, 1},
  [367] =
    {field_body, 10},
    {field_modifier, 2},
    {field_name, 4},
    {field_output, 8},
    {field_vis, 1},
  [372] =
    {field_body, 10},
    {field_input, 6},
    {field_modifier, 2},
    {field_name, 4},
    {field_vis, 1},
  [377] =
    {field_body, 10},
    {field_input, 6},
    {field_input, 7, .inherited = true},
    {field_modifier, 2},
    {field_name, 4},
    {field_vis, 1},
  [383] =
    {field_value, 5},
  [384] =
    {field_input, 3},
    {field_output, 6},
  [386] =
    {field_input, 3},
    {field_input, 4, .inherited = true},
    {field_name, 1},
    {field_output, 8},
  [390] =
    {field_input, 4},
    {field_name, 2},
    {field_output, 8},
    {field_vis, 0},
  [394] =
    {field_input, 4},
    {field_input, 5, .inherited = true},
    {field_name, 2},
    {field_output, 8},
    {field_vis, 0},
  [399] =
    {field_body, 11},
    {field_input, 4},
    {field_input, 5, .inherited = true},
    {field_modifier, 0},
    {field_name, 2},
    {field_output, 9},
  [405] =
    {field_body, 11},
    {field_input, 4},
    {field_input, 5, .inherited = true},
    {field_name, 2},
    {field_output, 9},
    {field_vis, 0},
  [411] =
    {field_body, 11},
    {field_input, 5},
    {field_modifier, 1},
    {field_name, 3},
    {field_output, 9},
    {field_vis, 0},
  [417] =
    {field_body, 11},
    {field_input, 5},
    {field_input, 6, .inherited = true},
    {field_modifier, 1},
    {field_name, 3},
    {field_output, 9},
    {field_vis, 0},
  [424] =
    {field_body, 11},
    {field_input, 4},
    {field_input, 5, .inherited = true},
    {field_name, 2},
    {field_output, 9},
  [429] =
    {field_body, 11},
    {field_input, 5},
    {field_modifier, 1},
    {field_name, 3},
    {field_output, 9},
  [434] =
    {field_body, 11},
    {field_input, 5},
    {field_input, 6, .inherited = true},
    {field_modifier, 1},
    {field_name, 3},
    {field_output, 9},
  [440] =
    {field_body, 11},
    {field_input, 5},
    {field_name, 3},
    {field_output, 9},
    {field_vis, 1},
  [445] =
    {field_body, 11},
    {field_input, 5},
    {field_input, 6, .inherited = true},
    {field_name, 3},
    {field_output, 9},
    {field_vis, 1},
  [451] =
    {field_body, 11},
    {field_input, 6},
    {field_modifier, 2},
    {field_name, 4},
    {field_output, 9},
    {field_vis, 1},
  [457] =
    {field_body, 11},
    {field_input, 6},
    {field_input, 7, .inherited = true},
    {field_modifier, 2},
    {field_name, 4},
    {field_vis, 1},
  [463] =
    {field_input, 3},
    {field_output, 7},
  [465] =
    {field_input, 3},
    {field_input, 4, .inherited = true},
    {field_output, 7},
  [468] =
    {field_input, 4},
    {field_input, 5, .inherited = true},
    {field_name, 2},
    {field_output, 9},
    {field_vis, 0},
  [473] =
    {field_body, 12},
    {field_input, 5},
    {field_input, 6, .inherited = true},
    {field_modifier, 1},
    {field_name, 3},
    {field_output, 10},
    {field_vis, 0},
  [480] =
    {field_body, 12},
    {field_input, 5},
    {field_input, 6, .inherited = true},
    {field_modifier, 1},
    {field_name, 3},
    {field_output, 10},
  [486] =
    {field_body, 12},
    {field_input, 5},
    {field_input, 6, .inherited = true},
    {field_name, 3},
    {field_output, 10},
    {field_vis, 1},
  [492] =
    {field_body, 12},
    {field_input, 6},
    {field_modifier, 2},
    {field_name, 4},
    {field_output, 10},
    {field_vis, 1},
  [498] =
    {field_body, 12},
    {field_input, 6},
    {field_input, 7, .inherited = true},
    {field_modifier, 2},
    {field_name, 4},
    {field_output, 10},
    {field_vis, 1},
  [505] =
    {field_input, 3},
    {field_input, 4, .inherited = true},
    {field_output, 8},
  [508] =
    {field_body, 13},
    {field_input, 6},
    {field_input, 7, .inherited = true},
    {field_modifier, 2},
    {field_name, 4},
    {field_output, 11},
    {field_vis, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_extern,
  },
  [3] = {
    [0] = alias_sym_extern,
    [1] = alias_sym_extern,
  },
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
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '(') ADVANCE(16);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '0') ADVANCE(38);
      if (lookahead == '1') ADVANCE(40);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == ']') ADVANCE(13);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (sym_word_character_set_1(lookahead)) ADVANCE(44);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(16);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '0') ADVANCE(39);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (sym_word_character_set_1(lookahead)) ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(16);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == '0') ADVANCE(39);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (sym_word_character_set_2(lookahead)) ADVANCE(44);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(34);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == '<') ADVANCE(30);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == '^') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '[') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
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
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '=') ADVANCE(31);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '=') ADVANCE(31);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(31);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '<') ADVANCE(30);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_LT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (sym_word_character_set_3(lookahead)) ADVANCE(44);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_0b);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_digits);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'x') ADVANCE(36);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(40);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_digits);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'x') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_digits);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(40);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_digits);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_bin_digits);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_hex_digits);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_word);
      if (sym_word_character_set_4(lookahead)) ADVANCE(44);
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
      if (lookahead == 'S') ADVANCE(1);
      if (lookahead == '_') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'p') ADVANCE(8);
      if (lookahead == 's') ADVANCE(9);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == 'u') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_infer);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'x') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == '3') ADVANCE(15);
      if (lookahead == '6') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(19);
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == '6') ADVANCE(21);
      if (lookahead == '8') ADVANCE(22);
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(30);
      if (lookahead == '3') ADVANCE(31);
      if (lookahead == '6') ADVANCE(32);
      if (lookahead == '8') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == '2') ADVANCE(39);
      END_STATE();
    case 16:
      if (lookahead == '4') ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(42);
      if (lookahead == '6') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(44);
      END_STATE();
    case 21:
      if (lookahead == '4') ADVANCE(45);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(49);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 30:
      if (lookahead == '2') ADVANCE(53);
      if (lookahead == '6') ADVANCE(54);
      END_STATE();
    case 31:
      if (lookahead == '2') ADVANCE(55);
      END_STATE();
    case 32:
      if (lookahead == '4') ADVANCE(56);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 42:
      if (lookahead == '8') ADVANCE(63);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 46:
      if (lookahead == 'z') ADVANCE(64);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 48:
      if (lookahead == 'k') ADVANCE(65);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_pub);
      END_STATE();
    case 50:
      if (lookahead == 'f') ADVANCE(66);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 53:
      if (lookahead == '8') ADVANCE(69);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 58:
      if (lookahead == 'z') ADVANCE(71);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_Self);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_i128);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_self);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(78);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(81);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_super);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_unsafe);
      END_STATE();
    case 83:
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
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 1},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 1},
  [235] = {.lex_state = 1},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 1},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 1},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 2},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 2},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 1},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 1},
  [720] = {.lex_state = 1},
  [721] = {.lex_state = 1},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 4},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 1},
  [727] = {.lex_state = 1},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 1},
  [731] = {.lex_state = 1},
  [732] = {.lex_state = 1},
  [733] = {.lex_state = 1},
  [734] = {.lex_state = 1},
  [735] = {.lex_state = 1},
  [736] = {.lex_state = 1},
  [737] = {.lex_state = 1},
  [738] = {.lex_state = 1},
  [739] = {.lex_state = 1},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 1},
  [742] = {.lex_state = 1},
  [743] = {.lex_state = 1},
  [744] = {.lex_state = 1},
  [745] = {.lex_state = 1},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 1},
  [748] = {.lex_state = 1},
  [749] = {.lex_state = 1},
  [750] = {.lex_state = 1},
  [751] = {.lex_state = 1},
  [752] = {.lex_state = 1},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 4},
  [758] = {.lex_state = 4},
  [759] = {.lex_state = 4},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 4},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 4},
  [770] = {.lex_state = 4},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 4},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 4},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 4},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 4},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 4},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 4},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 4},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 4},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 4},
  [806] = {.lex_state = 4},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 4},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 4},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 4},
  [821] = {.lex_state = 4},
  [822] = {.lex_state = 4},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 4},
  [826] = {.lex_state = 4},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 4},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 4},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 4},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 4},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 4},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 4},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 4},
  [862] = {.lex_state = 1},
  [863] = {.lex_state = 1},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 1},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 1},
  [869] = {.lex_state = 1},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 1},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 1},
  [875] = {.lex_state = 1},
  [876] = {.lex_state = 4},
  [877] = {.lex_state = 1},
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 1},
  [881] = {.lex_state = 1},
  [882] = {.lex_state = 1},
  [883] = {.lex_state = 1},
  [884] = {.lex_state = 1},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 1},
  [887] = {.lex_state = 2},
  [888] = {.lex_state = 1},
  [889] = {.lex_state = 1},
  [890] = {.lex_state = 1},
  [891] = {.lex_state = 1},
  [892] = {.lex_state = 1},
  [893] = {.lex_state = 1},
  [894] = {.lex_state = 1},
  [895] = {.lex_state = 1},
  [896] = {.lex_state = 1},
  [897] = {.lex_state = 1},
  [898] = {.lex_state = 1},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 1},
  [901] = {.lex_state = 1},
  [902] = {.lex_state = 1},
  [903] = {.lex_state = 1},
  [904] = {.lex_state = 1},
  [905] = {.lex_state = 1},
  [906] = {.lex_state = 0},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 0},
  [909] = {.lex_state = 1},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 1},
  [912] = {.lex_state = 1},
  [913] = {.lex_state = 0},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 1},
  [916] = {.lex_state = 0},
  [917] = {.lex_state = 0},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 1},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 2},
  [923] = {.lex_state = 1},
  [924] = {.lex_state = 1},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 1},
  [927] = {.lex_state = 1},
  [928] = {.lex_state = 0},
  [929] = {.lex_state = 1},
  [930] = {.lex_state = 1},
  [931] = {.lex_state = 0},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 1},
  [937] = {.lex_state = 1},
  [938] = {.lex_state = 1},
  [939] = {.lex_state = 1},
  [940] = {.lex_state = 1},
  [941] = {.lex_state = 1},
  [942] = {.lex_state = 1},
  [943] = {.lex_state = 1},
  [944] = {.lex_state = 0},
  [945] = {.lex_state = 1},
  [946] = {.lex_state = 1},
  [947] = {.lex_state = 1},
  [948] = {.lex_state = 1},
  [949] = {.lex_state = 1},
  [950] = {.lex_state = 1},
  [951] = {.lex_state = 1},
  [952] = {.lex_state = 1},
  [953] = {.lex_state = 0},
  [954] = {.lex_state = 0},
  [955] = {.lex_state = 0},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 0},
  [958] = {.lex_state = 0},
  [959] = {.lex_state = 0},
  [960] = {.lex_state = 0},
  [961] = {.lex_state = 0},
  [962] = {.lex_state = 1},
  [963] = {.lex_state = 1},
  [964] = {.lex_state = 1},
  [965] = {.lex_state = 1},
  [966] = {.lex_state = 1},
  [967] = {.lex_state = 1},
  [968] = {.lex_state = 1},
  [969] = {.lex_state = 1},
  [970] = {.lex_state = 1},
  [971] = {.lex_state = 1},
  [972] = {.lex_state = 1},
  [973] = {.lex_state = 1},
  [974] = {.lex_state = 1},
  [975] = {.lex_state = 1},
  [976] = {.lex_state = 1},
  [977] = {.lex_state = 1},
  [978] = {.lex_state = 1},
  [979] = {.lex_state = 1},
  [980] = {.lex_state = 1},
  [981] = {.lex_state = 1},
  [982] = {.lex_state = 1},
  [983] = {.lex_state = 1},
  [984] = {.lex_state = 1},
  [985] = {.lex_state = 1},
  [986] = {.lex_state = 1},
  [987] = {.lex_state = 1},
  [988] = {.lex_state = 1},
  [989] = {.lex_state = 1},
  [990] = {.lex_state = 1},
  [991] = {.lex_state = 1},
  [992] = {.lex_state = 1},
  [993] = {.lex_state = 1},
  [994] = {.lex_state = 1},
  [995] = {.lex_state = 0},
  [996] = {.lex_state = 0},
  [997] = {.lex_state = 0},
  [998] = {.lex_state = 0},
  [999] = {.lex_state = 0},
  [1000] = {.lex_state = 0},
  [1001] = {.lex_state = 0},
  [1002] = {.lex_state = 1},
  [1003] = {.lex_state = 1},
  [1004] = {.lex_state = 1},
  [1005] = {.lex_state = 1},
  [1006] = {.lex_state = 1},
  [1007] = {.lex_state = 1},
  [1008] = {.lex_state = 1},
  [1009] = {.lex_state = 1},
  [1010] = {.lex_state = 1},
  [1011] = {.lex_state = 1},
  [1012] = {.lex_state = 1},
  [1013] = {.lex_state = 1},
  [1014] = {.lex_state = 1},
  [1015] = {.lex_state = 1},
  [1016] = {.lex_state = 1},
  [1017] = {.lex_state = 1},
  [1018] = {.lex_state = 1},
  [1019] = {.lex_state = 1},
  [1020] = {.lex_state = 1},
  [1021] = {.lex_state = 0},
  [1022] = {.lex_state = 0},
  [1023] = {.lex_state = 1},
  [1024] = {.lex_state = 1},
  [1025] = {.lex_state = 1},
  [1026] = {.lex_state = 1},
  [1027] = {.lex_state = 1},
  [1028] = {.lex_state = 1},
  [1029] = {.lex_state = 1},
  [1030] = {.lex_state = 1},
  [1031] = {.lex_state = 1},
  [1032] = {.lex_state = 1},
  [1033] = {.lex_state = 0},
  [1034] = {.lex_state = 1},
  [1035] = {.lex_state = 1},
  [1036] = {.lex_state = 1},
  [1037] = {.lex_state = 1},
  [1038] = {.lex_state = 1},
  [1039] = {.lex_state = 1},
  [1040] = {.lex_state = 1},
  [1041] = {.lex_state = 1},
  [1042] = {.lex_state = 0},
  [1043] = {.lex_state = 0},
  [1044] = {.lex_state = 4},
  [1045] = {.lex_state = 0},
  [1046] = {.lex_state = 4},
  [1047] = {.lex_state = 4},
  [1048] = {.lex_state = 10},
  [1049] = {.lex_state = 0},
  [1050] = {.lex_state = 0},
  [1051] = {.lex_state = 1},
  [1052] = {.lex_state = 0},
  [1053] = {.lex_state = 4},
  [1054] = {.lex_state = 4},
  [1055] = {.lex_state = 0},
  [1056] = {.lex_state = 0},
  [1057] = {.lex_state = 0},
  [1058] = {.lex_state = 4},
  [1059] = {.lex_state = 0},
  [1060] = {.lex_state = 1},
  [1061] = {.lex_state = 4},
  [1062] = {.lex_state = 10},
  [1063] = {.lex_state = 4},
  [1064] = {.lex_state = 0},
  [1065] = {.lex_state = 4},
  [1066] = {.lex_state = 4},
  [1067] = {.lex_state = 0},
  [1068] = {.lex_state = 4},
  [1069] = {.lex_state = 0},
  [1070] = {.lex_state = 0},
  [1071] = {.lex_state = 0},
  [1072] = {.lex_state = 0},
  [1073] = {.lex_state = 0},
  [1074] = {.lex_state = 4},
  [1075] = {.lex_state = 4},
  [1076] = {.lex_state = 4},
  [1077] = {.lex_state = 0},
  [1078] = {.lex_state = 4},
  [1079] = {.lex_state = 0},
  [1080] = {.lex_state = 4},
  [1081] = {.lex_state = 4},
  [1082] = {.lex_state = 0},
  [1083] = {.lex_state = 0},
  [1084] = {.lex_state = 0},
  [1085] = {.lex_state = 4},
  [1086] = {.lex_state = 0},
  [1087] = {.lex_state = 0},
  [1088] = {.lex_state = 0},
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
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_unsafe] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_pub] = ACTIONS(1),
    [anon_sym_super] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_Self] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_COLON_COLON_LT] = ACTIONS(1),
    [anon_sym_self] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [sym_infer] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_0x] = ACTIONS(1),
    [anon_sym_0b] = ACTIONS(1),
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
    [sym_bin_digits] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(1087),
    [sym_function] = STATE(97),
    [sym_function_modifier] = STATE(1086),
    [sym_extern_block] = STATE(97),
    [sym_visibility_modifier] = STATE(729),
    [aux_sym_file_repeat1] = STATE(67),
    [aux_sym_file_repeat2] = STATE(97),
    [aux_sym_function_repeat1] = STATE(257),
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
  [35] = 3,
    ACTIONS(23), 1,
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
  [70] = 3,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(25), 13,
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
    ACTIONS(29), 14,
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
  [105] = 2,
    ACTIONS(31), 13,
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
    ACTIONS(33), 14,
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
  [137] = 2,
    ACTIONS(35), 13,
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
    ACTIONS(37), 14,
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
  [169] = 12,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 1,
      anon_sym_SEMI,
    ACTIONS(50), 1,
      anon_sym_let,
    ACTIONS(53), 1,
      sym_string_literal,
    ACTIONS(59), 1,
      anon_sym_0x,
    ACTIONS(62), 1,
      anon_sym_0b,
    ACTIONS(65), 1,
      sym_digits,
    ACTIONS(56), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 2,
      sym_statement,
      aux_sym_codeblock_repeat1,
    STATE(1043), 5,
      sym_codeblock,
      sym_tuple_expression,
      sym_let_binding,
      sym_boolean_literal,
      sym_numeric_literal,
  [212] = 13,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 1,
      anon_sym_SEMI,
    ACTIONS(76), 1,
      anon_sym_let,
    ACTIONS(78), 1,
      sym_string_literal,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    STATE(1043), 1,
      sym_let_binding,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 2,
      sym_statement,
      aux_sym_codeblock_repeat1,
    STATE(864), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [257] = 13,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(74), 1,
      anon_sym_SEMI,
    ACTIONS(76), 1,
      anon_sym_let,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    ACTIONS(90), 1,
      sym_string_literal,
    STATE(1043), 1,
      sym_let_binding,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 2,
      sym_statement,
      aux_sym_codeblock_repeat1,
    STATE(919), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [302] = 12,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(104), 1,
      anon_sym_Self,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(853), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [343] = 12,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    ACTIONS(112), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(873), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [384] = 12,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    ACTIONS(116), 1,
      sym_string_literal,
    STATE(740), 1,
      sym_path,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    ACTIONS(118), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(914), 3,
      sym_attr,
      sym_boolean_literal,
      sym_numeric_literal,
  [425] = 12,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(116), 1,
      sym_string_literal,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    STATE(740), 1,
      sym_path,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    ACTIONS(118), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(914), 3,
      sym_attr,
      sym_boolean_literal,
      sym_numeric_literal,
  [466] = 12,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    ACTIONS(124), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(928), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [507] = 12,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(124), 1,
      anon_sym_Self,
    ACTIONS(126), 1,
      anon_sym_RPAREN,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(928), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [548] = 12,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    ACTIONS(130), 1,
      sym_string_literal,
    STATE(740), 1,
      sym_path,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    ACTIONS(118), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(796), 3,
      sym_attr,
      sym_boolean_literal,
      sym_numeric_literal,
  [589] = 12,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_Self,
    ACTIONS(132), 1,
      anon_sym_RPAREN,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(873), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [630] = 13,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(134), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(995), 1,
      sym_function_type,
    STATE(996), 1,
      sym_tuple_type,
    STATE(997), 1,
      sym_basic_type,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
  [672] = 13,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(136), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(981), 1,
      sym_function_type,
    STATE(982), 1,
      sym_tuple_type,
    STATE(983), 1,
      sym_basic_type,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
  [714] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(1028), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [752] = 13,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(140), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1011), 1,
      sym_function_type,
    STATE(1012), 1,
      sym_tuple_type,
    STATE(1013), 1,
      sym_basic_type,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
  [794] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(124), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(928), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [832] = 13,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(142), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(738), 1,
      sym_tuple_type,
    STATE(741), 1,
      sym_function_type,
    STATE(750), 1,
      sym_basic_type,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
  [874] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(144), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(733), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [912] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(146), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(1029), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [950] = 13,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(148), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(963), 1,
      sym_basic_type,
    STATE(964), 1,
      sym_tuple_type,
    STATE(965), 1,
      sym_function_type,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
  [992] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(150), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(1010), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [1030] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(152), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(1009), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [1068] = 13,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(154), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1005), 1,
      sym_function_type,
    STATE(1006), 1,
      sym_tuple_type,
    STATE(1007), 1,
      sym_basic_type,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
  [1110] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(156), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(1030), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [1148] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(1004), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [1186] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(160), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(1031), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [1224] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(162), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(1022), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [1262] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(164), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(957), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [1300] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(166), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(907), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [1338] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(1003), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [1376] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(1002), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [1414] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(172), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(1032), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [1452] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(174), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(1037), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [1490] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(176), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(1001), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [1528] = 13,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(178), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(953), 1,
      sym_function_type,
    STATE(954), 1,
      sym_tuple_type,
    STATE(955), 1,
      sym_basic_type,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
  [1570] = 13,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(180), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(949), 1,
      sym_function_type,
    STATE(950), 1,
      sym_tuple_type,
    STATE(951), 1,
      sym_basic_type,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
  [1612] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(182), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(1033), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [1650] = 13,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1034), 1,
      sym_function_type,
    STATE(1035), 1,
      sym_tuple_type,
    STATE(1036), 1,
      sym_basic_type,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
  [1692] = 11,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(186), 1,
      sym_string_literal,
    STATE(740), 1,
      sym_path,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    ACTIONS(118), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(774), 3,
      sym_attr,
      sym_boolean_literal,
      sym_numeric_literal,
  [1730] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(188), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(1019), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [1768] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(1021), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [1806] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(192), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(999), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [1844] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(961), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [1882] = 11,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(116), 1,
      sym_string_literal,
    STATE(740), 1,
      sym_path,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    ACTIONS(118), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(914), 3,
      sym_attr,
      sym_boolean_literal,
      sym_numeric_literal,
  [1920] = 13,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(196), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(958), 1,
      sym_function_type,
    STATE(959), 1,
      sym_tuple_type,
    STATE(960), 1,
      sym_basic_type,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
  [1962] = 13,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1023), 1,
      sym_function_type,
    STATE(1024), 1,
      sym_tuple_type,
    STATE(1025), 1,
      sym_basic_type,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
  [2004] = 13,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(990), 1,
      sym_function_type,
    STATE(991), 1,
      sym_tuple_type,
    STATE(992), 1,
      sym_basic_type,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
  [2046] = 13,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(202), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(986), 1,
      sym_function_type,
    STATE(987), 1,
      sym_tuple_type,
    STATE(988), 1,
      sym_basic_type,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
  [2088] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(985), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [2126] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(206), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(1038), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [2164] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(1015), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [2202] = 13,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(210), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(977), 1,
      sym_function_type,
    STATE(978), 1,
      sym_tuple_type,
    STATE(979), 1,
      sym_basic_type,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
  [2244] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(1039), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [2282] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(214), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(976), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [2320] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(1040), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [2358] = 13,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(218), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(972), 1,
      sym_function_type,
    STATE(973), 1,
      sym_tuple_type,
    STATE(974), 1,
      sym_basic_type,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
  [2400] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(971), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [2438] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(222), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(1041), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [2476] = 13,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(224), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(931), 1,
      sym_function_type,
    STATE(932), 1,
      sym_tuple_type,
    STATE(933), 1,
      sym_basic_type,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
  [2518] = 13,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(226), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(967), 1,
      sym_function_type,
    STATE(968), 1,
      sym_tuple_type,
    STATE(969), 1,
      sym_basic_type,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
  [2560] = 12,
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
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    STATE(257), 1,
      aux_sym_function_repeat1,
    STATE(258), 1,
      aux_sym_file_repeat1,
    STATE(729), 1,
      sym_visibility_modifier,
    STATE(1086), 1,
      sym_function_modifier,
    ACTIONS(11), 2,
      anon_sym_const,
      anon_sym_unsafe,
    STATE(96), 3,
      sym_function,
      sym_extern_block,
      aux_sym_file_repeat2,
  [2600] = 13,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(230), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(945), 1,
      sym_function_type,
    STATE(946), 1,
      sym_tuple_type,
    STATE(947), 1,
      sym_basic_type,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
  [2642] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(1027), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [2680] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(234), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(731), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [2718] = 13,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1016), 1,
      sym_function_type,
    STATE(1017), 1,
      sym_tuple_type,
    STATE(1018), 1,
      sym_basic_type,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
  [2760] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(238), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(966), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [2798] = 13,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(936), 1,
      sym_function_type,
    STATE(937), 1,
      sym_tuple_type,
    STATE(938), 1,
      sym_basic_type,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
  [2840] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(242), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(840), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [2878] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(244), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(940), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [2916] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(873), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [2954] = 13,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(743), 1,
      sym_tuple_type,
    STATE(748), 1,
      sym_basic_type,
    STATE(752), 1,
      sym_function_type,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
  [2996] = 13,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(248), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(941), 1,
      sym_function_type,
    STATE(942), 1,
      sym_tuple_type,
    STATE(943), 1,
      sym_basic_type,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
  [3038] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(751), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [3076] = 11,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_extern,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(252), 1,
      anon_sym_Self,
    STATE(723), 1,
      sym_path,
    STATE(1045), 1,
      sym_function_modifier,
    ACTIONS(96), 2,
      anon_sym_const,
      anon_sym_unsafe,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
    STATE(1020), 3,
      sym_basic_type,
      sym_tuple_type,
      sym_function_type,
  [3114] = 10,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(254), 1,
      anon_sym_GT,
    ACTIONS(256), 1,
      sym_infer,
    ACTIONS(258), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(910), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [3149] = 10,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(256), 1,
      sym_infer,
    ACTIONS(258), 1,
      sym_string_literal,
    ACTIONS(260), 1,
      anon_sym_GT,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(910), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [3184] = 10,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(256), 1,
      sym_infer,
    ACTIONS(258), 1,
      sym_string_literal,
    ACTIONS(262), 1,
      anon_sym_GT,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(910), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [3219] = 10,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(256), 1,
      sym_infer,
    ACTIONS(258), 1,
      sym_string_literal,
    ACTIONS(264), 1,
      anon_sym_GT,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(910), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [3254] = 9,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    ACTIONS(268), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(879), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [3286] = 9,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
    ACTIONS(272), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(837), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [3318] = 1,
    ACTIONS(274), 13,
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
  [3334] = 1,
    ACTIONS(276), 13,
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
  [3350] = 9,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(256), 1,
      sym_infer,
    ACTIONS(258), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(910), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [3382] = 1,
    ACTIONS(278), 13,
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
  [3398] = 1,
    ACTIONS(280), 13,
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
  [3414] = 9,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(282), 1,
      sym_infer,
    ACTIONS(284), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(767), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [3446] = 1,
    ACTIONS(286), 13,
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
  [3462] = 9,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(268), 1,
      sym_string_literal,
    ACTIONS(288), 1,
      anon_sym_RPAREN,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(879), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [3494] = 10,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    ACTIONS(292), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(295), 1,
      anon_sym_fn,
    ACTIONS(301), 1,
      anon_sym_extern,
    ACTIONS(304), 1,
      anon_sym_pub,
    STATE(257), 1,
      aux_sym_function_repeat1,
    STATE(729), 1,
      sym_visibility_modifier,
    STATE(1086), 1,
      sym_function_modifier,
    ACTIONS(298), 2,
      anon_sym_const,
      anon_sym_unsafe,
    STATE(95), 3,
      sym_function,
      sym_extern_block,
      aux_sym_file_repeat2,
  [3528] = 10,
    ACTIONS(7), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_extern,
    ACTIONS(15), 1,
      anon_sym_pub,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    STATE(257), 1,
      aux_sym_function_repeat1,
    STATE(729), 1,
      sym_visibility_modifier,
    STATE(1086), 1,
      sym_function_modifier,
    ACTIONS(11), 2,
      anon_sym_const,
      anon_sym_unsafe,
    STATE(95), 3,
      sym_function,
      sym_extern_block,
      aux_sym_file_repeat2,
  [3562] = 10,
    ACTIONS(7), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_extern,
    ACTIONS(15), 1,
      anon_sym_pub,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    STATE(257), 1,
      aux_sym_function_repeat1,
    STATE(729), 1,
      sym_visibility_modifier,
    STATE(1086), 1,
      sym_function_modifier,
    ACTIONS(11), 2,
      anon_sym_const,
      anon_sym_unsafe,
    STATE(95), 3,
      sym_function,
      sym_extern_block,
      aux_sym_file_repeat2,
  [3596] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(309), 1,
      sym_string_literal,
    STATE(496), 1,
      sym_codeblock,
    STATE(497), 1,
      sym_tuple_expression,
    STATE(498), 1,
      sym_boolean_literal,
    STATE(499), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [3631] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(311), 1,
      sym_string_literal,
    STATE(350), 1,
      sym_numeric_literal,
    STATE(351), 1,
      sym_boolean_literal,
    STATE(352), 1,
      sym_tuple_expression,
    STATE(353), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [3666] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(313), 1,
      sym_string_literal,
    STATE(574), 1,
      sym_numeric_literal,
    STATE(575), 1,
      sym_boolean_literal,
    STATE(582), 1,
      sym_tuple_expression,
    STATE(585), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [3701] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(315), 1,
      sym_string_literal,
    STATE(592), 1,
      sym_numeric_literal,
    STATE(593), 1,
      sym_boolean_literal,
    STATE(597), 1,
      sym_tuple_expression,
    STATE(598), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [3736] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(317), 1,
      sym_string_literal,
    STATE(600), 1,
      sym_numeric_literal,
    STATE(606), 1,
      sym_boolean_literal,
    STATE(608), 1,
      sym_tuple_expression,
    STATE(612), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [3771] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(319), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(358), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [3800] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(321), 1,
      sym_string_literal,
    STATE(402), 1,
      sym_numeric_literal,
    STATE(411), 1,
      sym_boolean_literal,
    STATE(412), 1,
      sym_tuple_expression,
    STATE(413), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [3835] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(323), 1,
      sym_string_literal,
    STATE(617), 1,
      sym_numeric_literal,
    STATE(618), 1,
      sym_boolean_literal,
    STATE(619), 1,
      sym_tuple_expression,
    STATE(620), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [3870] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(325), 1,
      sym_string_literal,
    STATE(419), 1,
      sym_numeric_literal,
    STATE(425), 1,
      sym_boolean_literal,
    STATE(434), 1,
      sym_tuple_expression,
    STATE(435), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [3905] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(327), 1,
      sym_string_literal,
    STATE(437), 1,
      sym_numeric_literal,
    STATE(442), 1,
      sym_boolean_literal,
    STATE(450), 1,
      sym_tuple_expression,
    STATE(455), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [3940] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(329), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(625), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [3969] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(331), 1,
      sym_string_literal,
    STATE(657), 1,
      sym_numeric_literal,
    STATE(659), 1,
      sym_boolean_literal,
    STATE(660), 1,
      sym_tuple_expression,
    STATE(667), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [4004] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(333), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(467), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [4033] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(335), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(692), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [4062] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(337), 1,
      sym_string_literal,
    STATE(694), 1,
      sym_numeric_literal,
    STATE(712), 1,
      sym_codeblock,
    STATE(713), 1,
      sym_tuple_expression,
    STATE(714), 1,
      sym_boolean_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [4097] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(339), 1,
      sym_string_literal,
    STATE(707), 1,
      sym_codeblock,
    STATE(708), 1,
      sym_tuple_expression,
    STATE(709), 1,
      sym_boolean_literal,
    STATE(710), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [4132] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(341), 1,
      sym_string_literal,
    STATE(702), 1,
      sym_codeblock,
    STATE(703), 1,
      sym_tuple_expression,
    STATE(704), 1,
      sym_boolean_literal,
    STATE(705), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [4167] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(343), 1,
      sym_string_literal,
    STATE(697), 1,
      sym_codeblock,
    STATE(698), 1,
      sym_tuple_expression,
    STATE(699), 1,
      sym_boolean_literal,
    STATE(700), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [4202] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(345), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(691), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [4231] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(347), 1,
      sym_string_literal,
    STATE(687), 1,
      sym_codeblock,
    STATE(688), 1,
      sym_tuple_expression,
    STATE(689), 1,
      sym_boolean_literal,
    STATE(690), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [4266] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(349), 1,
      sym_string_literal,
    STATE(682), 1,
      sym_codeblock,
    STATE(683), 1,
      sym_tuple_expression,
    STATE(684), 1,
      sym_boolean_literal,
    STATE(685), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [4301] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(351), 1,
      sym_string_literal,
    STATE(677), 1,
      sym_codeblock,
    STATE(678), 1,
      sym_tuple_expression,
    STATE(679), 1,
      sym_boolean_literal,
    STATE(680), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [4336] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(353), 1,
      sym_string_literal,
    STATE(672), 1,
      sym_codeblock,
    STATE(673), 1,
      sym_tuple_expression,
    STATE(674), 1,
      sym_boolean_literal,
    STATE(675), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [4371] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(355), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(666), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [4400] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(357), 1,
      sym_string_literal,
    STATE(645), 1,
      sym_codeblock,
    STATE(646), 1,
      sym_tuple_expression,
    STATE(647), 1,
      sym_boolean_literal,
    STATE(648), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [4435] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(359), 1,
      sym_string_literal,
    STATE(640), 1,
      sym_codeblock,
    STATE(641), 1,
      sym_tuple_expression,
    STATE(642), 1,
      sym_boolean_literal,
    STATE(643), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [4470] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(361), 1,
      sym_string_literal,
    STATE(464), 1,
      sym_numeric_literal,
    STATE(505), 1,
      sym_boolean_literal,
    STATE(509), 1,
      sym_tuple_expression,
    STATE(510), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [4505] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(363), 1,
      sym_string_literal,
    STATE(512), 1,
      sym_numeric_literal,
    STATE(516), 1,
      sym_boolean_literal,
    STATE(527), 1,
      sym_tuple_expression,
    STATE(528), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [4540] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(365), 1,
      sym_string_literal,
    STATE(530), 1,
      sym_numeric_literal,
    STATE(542), 1,
      sym_boolean_literal,
    STATE(543), 1,
      sym_tuple_expression,
    STATE(544), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [4575] = 1,
    ACTIONS(367), 12,
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
  [4590] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(369), 1,
      sym_string_literal,
    STATE(635), 1,
      sym_codeblock,
    STATE(636), 1,
      sym_tuple_expression,
    STATE(637), 1,
      sym_boolean_literal,
    STATE(638), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [4625] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(371), 1,
      sym_string_literal,
    STATE(630), 1,
      sym_codeblock,
    STATE(631), 1,
      sym_tuple_expression,
    STATE(632), 1,
      sym_boolean_literal,
    STATE(633), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [4660] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(373), 1,
      sym_string_literal,
    STATE(261), 1,
      sym_numeric_literal,
    STATE(554), 1,
      sym_boolean_literal,
    STATE(555), 1,
      sym_tuple_expression,
    STATE(565), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [4695] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(375), 1,
      sym_string_literal,
    STATE(387), 1,
      sym_numeric_literal,
    STATE(396), 1,
      sym_boolean_literal,
    STATE(397), 1,
      sym_tuple_expression,
    STATE(398), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [4730] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(377), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(531), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [4759] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(379), 1,
      sym_string_literal,
    STATE(515), 1,
      sym_numeric_literal,
    STATE(517), 1,
      sym_boolean_literal,
    STATE(518), 1,
      sym_tuple_expression,
    STATE(519), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [4794] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(381), 1,
      sym_string_literal,
    STATE(627), 1,
      sym_codeblock,
    STATE(662), 1,
      sym_tuple_expression,
    STATE(668), 1,
      sym_boolean_literal,
    STATE(669), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [4829] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(383), 1,
      sym_string_literal,
    STATE(594), 1,
      sym_codeblock,
    STATE(610), 1,
      sym_tuple_expression,
    STATE(611), 1,
      sym_boolean_literal,
    STATE(616), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [4864] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(385), 1,
      sym_string_literal,
    STATE(577), 1,
      sym_codeblock,
    STATE(578), 1,
      sym_tuple_expression,
    STATE(579), 1,
      sym_boolean_literal,
    STATE(583), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [4899] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(387), 1,
      sym_string_literal,
    STATE(482), 1,
      sym_codeblock,
    STATE(483), 1,
      sym_tuple_expression,
    STATE(484), 1,
      sym_boolean_literal,
    STATE(547), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [4934] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(389), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(478), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [4963] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(391), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(477), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [4992] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(268), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(879), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [5021] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(393), 1,
      sym_string_literal,
    STATE(296), 1,
      sym_numeric_literal,
    STATE(297), 1,
      sym_boolean_literal,
    STATE(355), 1,
      sym_tuple_expression,
    STATE(356), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [5056] = 1,
    ACTIONS(395), 12,
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
  [5071] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(397), 1,
      sym_string_literal,
    STATE(469), 1,
      sym_numeric_literal,
    STATE(470), 1,
      sym_boolean_literal,
    STATE(471), 1,
      sym_tuple_expression,
    STATE(472), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [5106] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(399), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(613), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [5135] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(401), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(935), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [5164] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(403), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(374), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [5193] = 1,
    ACTIONS(405), 12,
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
  [5208] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(407), 1,
      sym_string_literal,
    STATE(602), 1,
      sym_codeblock,
    STATE(603), 1,
      sym_tuple_expression,
    STATE(604), 1,
      sym_boolean_literal,
    STATE(605), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [5243] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(409), 1,
      sym_string_literal,
    STATE(552), 1,
      sym_numeric_literal,
    STATE(561), 1,
      sym_boolean_literal,
    STATE(562), 1,
      sym_tuple_expression,
    STATE(563), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [5278] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(411), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(596), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [5307] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(413), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(595), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [5336] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(415), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(371), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [5365] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(417), 1,
      sym_string_literal,
    STATE(587), 1,
      sym_codeblock,
    STATE(588), 1,
      sym_tuple_expression,
    STATE(589), 1,
      sym_boolean_literal,
    STATE(590), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [5400] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(419), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(343), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [5429] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(421), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(385), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [5458] = 1,
    ACTIONS(423), 12,
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
  [5473] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(425), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(581), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [5502] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(427), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(580), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [5531] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(429), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(333), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [5560] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(431), 1,
      sym_string_literal,
    STATE(447), 1,
      sym_numeric_literal,
    STATE(448), 1,
      sym_boolean_literal,
    STATE(451), 1,
      sym_tuple_expression,
    STATE(452), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [5595] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(433), 1,
      sym_string_literal,
    STATE(440), 1,
      sym_numeric_literal,
    STATE(443), 1,
      sym_boolean_literal,
    STATE(444), 1,
      sym_tuple_expression,
    STATE(445), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [5630] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(435), 1,
      sym_string_literal,
    STATE(568), 1,
      sym_codeblock,
    STATE(569), 1,
      sym_tuple_expression,
    STATE(570), 1,
      sym_boolean_literal,
    STATE(571), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [5665] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(437), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(566), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [5694] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(439), 1,
      sym_string_literal,
    STATE(426), 1,
      sym_numeric_literal,
    STATE(427), 1,
      sym_boolean_literal,
    STATE(428), 1,
      sym_tuple_expression,
    STATE(438), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [5729] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(441), 1,
      sym_string_literal,
    STATE(557), 1,
      sym_codeblock,
    STATE(558), 1,
      sym_tuple_expression,
    STATE(559), 1,
      sym_boolean_literal,
    STATE(560), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [5764] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(443), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(312), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [5793] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(445), 1,
      sym_string_literal,
    STATE(416), 1,
      sym_numeric_literal,
    STATE(417), 1,
      sym_boolean_literal,
    STATE(420), 1,
      sym_tuple_expression,
    STATE(421), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [5828] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(447), 1,
      sym_string_literal,
    STATE(390), 1,
      sym_numeric_literal,
    STATE(403), 1,
      sym_boolean_literal,
    STATE(404), 1,
      sym_tuple_expression,
    STATE(405), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [5863] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(449), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(551), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [5892] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(451), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(550), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [5921] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(453), 1,
      sym_string_literal,
    STATE(382), 1,
      sym_numeric_literal,
    STATE(383), 1,
      sym_boolean_literal,
    STATE(384), 1,
      sym_tuple_expression,
    STATE(388), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [5956] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(455), 1,
      sym_string_literal,
    STATE(538), 1,
      sym_codeblock,
    STATE(539), 1,
      sym_tuple_expression,
    STATE(540), 1,
      sym_boolean_literal,
    STATE(541), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [5991] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(457), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(536), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [6020] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(459), 1,
      sym_string_literal,
    STATE(376), 1,
      sym_numeric_literal,
    STATE(377), 1,
      sym_boolean_literal,
    STATE(378), 1,
      sym_tuple_expression,
    STATE(380), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [6055] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(461), 1,
      sym_string_literal,
    STATE(523), 1,
      sym_codeblock,
    STATE(524), 1,
      sym_tuple_expression,
    STATE(525), 1,
      sym_boolean_literal,
    STATE(526), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [6090] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(463), 1,
      sym_string_literal,
    STATE(368), 1,
      sym_numeric_literal,
    STATE(369), 1,
      sym_boolean_literal,
    STATE(370), 1,
      sym_tuple_expression,
    STATE(372), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [6125] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(465), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(357), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [6154] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(467), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(521), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [6183] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(469), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(573), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [6212] = 1,
    ACTIONS(471), 12,
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
  [6227] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(473), 1,
      sym_string_literal,
    STATE(345), 1,
      sym_numeric_literal,
    STATE(346), 1,
      sym_boolean_literal,
    STATE(347), 1,
      sym_tuple_expression,
    STATE(348), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [6262] = 1,
    ACTIONS(475), 12,
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
  [6277] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(477), 1,
      sym_string_literal,
    STATE(365), 1,
      sym_numeric_literal,
    STATE(366), 1,
      sym_boolean_literal,
    STATE(367), 1,
      sym_tuple_expression,
    STATE(375), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [6312] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(479), 1,
      sym_string_literal,
    STATE(458), 1,
      sym_numeric_literal,
    STATE(459), 1,
      sym_boolean_literal,
    STATE(460), 1,
      sym_tuple_expression,
    STATE(474), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [6347] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(481), 1,
      sym_string_literal,
    STATE(338), 1,
      sym_numeric_literal,
    STATE(339), 1,
      sym_boolean_literal,
    STATE(340), 1,
      sym_tuple_expression,
    STATE(341), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [6382] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(483), 1,
      sym_string_literal,
    STATE(479), 1,
      sym_numeric_literal,
    STATE(481), 1,
      sym_boolean_literal,
    STATE(533), 1,
      sym_codeblock,
    STATE(661), 1,
      sym_tuple_expression,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [6417] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(485), 1,
      sym_string_literal,
    STATE(331), 1,
      sym_numeric_literal,
    STATE(334), 1,
      sym_boolean_literal,
    STATE(335), 1,
      sym_tuple_expression,
    STATE(336), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [6452] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(487), 1,
      sym_string_literal,
    STATE(324), 1,
      sym_numeric_literal,
    STATE(327), 1,
      sym_boolean_literal,
    STATE(328), 1,
      sym_tuple_expression,
    STATE(329), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [6487] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(489), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(264), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [6516] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(491), 1,
      sym_string_literal,
    STATE(622), 1,
      sym_numeric_literal,
    STATE(626), 1,
      sym_boolean_literal,
    STATE(628), 1,
      sym_tuple_expression,
    STATE(693), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [6551] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(493), 1,
      sym_string_literal,
    STATE(317), 1,
      sym_numeric_literal,
    STATE(320), 1,
      sym_boolean_literal,
    STATE(321), 1,
      sym_tuple_expression,
    STATE(322), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [6586] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(495), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(262), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [6615] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(497), 1,
      sym_string_literal,
    STATE(308), 1,
      sym_numeric_literal,
    STATE(309), 1,
      sym_boolean_literal,
    STATE(310), 1,
      sym_tuple_expression,
    STATE(315), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [6650] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(499), 1,
      sym_string_literal,
    STATE(501), 1,
      sym_codeblock,
    STATE(502), 1,
      sym_tuple_expression,
    STATE(503), 1,
      sym_boolean_literal,
    STATE(504), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [6685] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(501), 1,
      sym_string_literal,
    STATE(360), 1,
      sym_codeblock,
    STATE(361), 1,
      sym_tuple_expression,
    STATE(362), 1,
      sym_boolean_literal,
    STATE(363), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [6720] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(503), 1,
      sym_string_literal,
    STATE(491), 1,
      sym_codeblock,
    STATE(492), 1,
      sym_tuple_expression,
    STATE(493), 1,
      sym_boolean_literal,
    STATE(494), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [6755] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(505), 1,
      sym_string_literal,
    STATE(268), 1,
      sym_codeblock,
    STATE(269), 1,
      sym_tuple_expression,
    STATE(270), 1,
      sym_boolean_literal,
    STATE(271), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [6790] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(507), 1,
      sym_string_literal,
    STATE(301), 1,
      sym_numeric_literal,
    STATE(302), 1,
      sym_boolean_literal,
    STATE(305), 1,
      sym_tuple_expression,
    STATE(306), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [6825] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(509), 1,
      sym_string_literal,
    STATE(486), 1,
      sym_codeblock,
    STATE(487), 1,
      sym_tuple_expression,
    STATE(488), 1,
      sym_boolean_literal,
    STATE(489), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [6860] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(511), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(480), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [6889] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(513), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(386), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [6918] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(515), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(300), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [6947] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(517), 1,
      sym_string_literal,
    STATE(392), 1,
      sym_codeblock,
    STATE(393), 1,
      sym_tuple_expression,
    STATE(394), 1,
      sym_boolean_literal,
    STATE(395), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [6982] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(519), 1,
      sym_string_literal,
    STATE(288), 1,
      sym_numeric_literal,
    STATE(289), 1,
      sym_boolean_literal,
    STATE(292), 1,
      sym_tuple_expression,
    STATE(293), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [7017] = 1,
    ACTIONS(521), 12,
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
  [7032] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(523), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(1000), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [7061] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(525), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(400), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [7090] = 1,
    ACTIONS(527), 12,
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
  [7105] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(529), 1,
      sym_string_literal,
    STATE(283), 1,
      sym_numeric_literal,
    STATE(284), 1,
      sym_boolean_literal,
    STATE(285), 1,
      sym_tuple_expression,
    STATE(286), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [7140] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(531), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(290), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [7169] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(533), 1,
      sym_string_literal,
    STATE(278), 1,
      sym_numeric_literal,
    STATE(279), 1,
      sym_boolean_literal,
    STATE(280), 1,
      sym_tuple_expression,
    STATE(281), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [7204] = 1,
    ACTIONS(535), 12,
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
  [7219] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(537), 1,
      sym_string_literal,
    STATE(265), 1,
      sym_boolean_literal,
    STATE(266), 1,
      sym_tuple_expression,
    STATE(272), 1,
      sym_codeblock,
    STATE(696), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [7254] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(539), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(454), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [7283] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(541), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(456), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [7312] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(543), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(449), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [7341] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(545), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(298), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [7370] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(547), 1,
      sym_string_literal,
    STATE(462), 1,
      sym_codeblock,
    STATE(465), 1,
      sym_tuple_expression,
    STATE(468), 1,
      sym_boolean_literal,
    STATE(476), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [7405] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(549), 1,
      sym_string_literal,
    STATE(304), 1,
      sym_numeric_literal,
    STATE(314), 1,
      sym_boolean_literal,
    STATE(319), 1,
      sym_tuple_expression,
    STATE(326), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [7440] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(551), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(441), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [7469] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(553), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(303), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [7498] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(555), 1,
      sym_string_literal,
    STATE(508), 1,
      sym_codeblock,
    STATE(513), 1,
      sym_tuple_expression,
    STATE(514), 1,
      sym_boolean_literal,
    STATE(535), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [7533] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(557), 1,
      sym_string_literal,
    STATE(549), 1,
      sym_codeblock,
    STATE(553), 1,
      sym_tuple_expression,
    STATE(649), 1,
      sym_boolean_literal,
    STATE(654), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [7568] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(559), 1,
      sym_string_literal,
    STATE(430), 1,
      sym_codeblock,
    STATE(431), 1,
      sym_tuple_expression,
    STATE(432), 1,
      sym_boolean_literal,
    STATE(433), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [7603] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(561), 1,
      sym_string_literal,
    STATE(656), 1,
      sym_codeblock,
    STATE(663), 1,
      sym_numeric_literal,
    STATE(664), 1,
      sym_boolean_literal,
    STATE(665), 1,
      sym_tuple_expression,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [7638] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(563), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(424), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [7667] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(565), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(423), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [7696] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(567), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(658), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [7725] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(569), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(313), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [7754] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(571), 1,
      sym_string_literal,
    STATE(614), 1,
      sym_numeric_literal,
    STATE(650), 1,
      sym_boolean_literal,
    STATE(651), 1,
      sym_tuple_expression,
    STATE(652), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [7789] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(573), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(418), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [7818] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(575), 1,
      sym_string_literal,
    STATE(263), 1,
      sym_codeblock,
    STATE(311), 1,
      sym_tuple_expression,
    STATE(332), 1,
      sym_boolean_literal,
    STATE(342), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [7853] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(577), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(318), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [7882] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(579), 1,
      sym_string_literal,
    STATE(274), 1,
      sym_numeric_literal,
    STATE(275), 1,
      sym_boolean_literal,
    STATE(276), 1,
      sym_tuple_expression,
    STATE(291), 1,
      sym_codeblock,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [7917] = 11,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(581), 1,
      sym_string_literal,
    STATE(407), 1,
      sym_codeblock,
    STATE(408), 1,
      sym_tuple_expression,
    STATE(409), 1,
      sym_boolean_literal,
    STATE(410), 1,
      sym_numeric_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [7952] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(583), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(325), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [7981] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_0x,
    ACTIONS(84), 1,
      anon_sym_0b,
    ACTIONS(86), 1,
      sym_digits,
    ACTIONS(585), 1,
      sym_string_literal,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(401), 4,
      sym_codeblock,
      sym_tuple_expression,
      sym_boolean_literal,
      sym_numeric_literal,
  [8010] = 4,
    ACTIONS(589), 1,
      anon_sym_COLON,
    ACTIONS(591), 1,
      anon_sym_COLON_COLON,
    STATE(240), 1,
      aux_sym_path_repeat2,
    ACTIONS(587), 8,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON_LT,
      anon_sym_COLON_EQ,
  [8030] = 4,
    ACTIONS(595), 1,
      anon_sym_COLON,
    ACTIONS(597), 1,
      anon_sym_COLON_COLON,
    STATE(239), 1,
      aux_sym_path_repeat2,
    ACTIONS(593), 8,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON_LT,
      anon_sym_COLON_EQ,
  [8050] = 4,
    ACTIONS(591), 1,
      anon_sym_COLON_COLON,
    ACTIONS(602), 1,
      anon_sym_COLON,
    STATE(239), 1,
      aux_sym_path_repeat2,
    ACTIONS(600), 8,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON_LT,
      anon_sym_COLON_EQ,
  [8070] = 4,
    ACTIONS(591), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      anon_sym_COLON,
    STATE(244), 1,
      aux_sym_path_repeat2,
    ACTIONS(604), 8,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON_LT,
      anon_sym_COLON_EQ,
  [8090] = 4,
    ACTIONS(591), 1,
      anon_sym_COLON_COLON,
    ACTIONS(610), 1,
      anon_sym_COLON,
    STATE(247), 1,
      aux_sym_path_repeat2,
    ACTIONS(608), 8,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON_LT,
      anon_sym_COLON_EQ,
  [8110] = 4,
    ACTIONS(614), 1,
      anon_sym_COLON,
    ACTIONS(616), 1,
      anon_sym_COLON_COLON,
    STATE(243), 1,
      aux_sym_path_repeat1,
    ACTIONS(612), 8,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON_LT,
      anon_sym_COLON_EQ,
  [8130] = 4,
    ACTIONS(591), 1,
      anon_sym_COLON_COLON,
    ACTIONS(621), 1,
      anon_sym_COLON,
    STATE(239), 1,
      aux_sym_path_repeat2,
    ACTIONS(619), 8,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON_LT,
      anon_sym_COLON_EQ,
  [8150] = 4,
    ACTIONS(591), 1,
      anon_sym_COLON_COLON,
    ACTIONS(625), 1,
      anon_sym_COLON,
    STATE(239), 1,
      aux_sym_path_repeat2,
    ACTIONS(623), 8,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON_LT,
      anon_sym_COLON_EQ,
  [8170] = 2,
    ACTIONS(629), 1,
      sym_digits,
    ACTIONS(627), 10,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_let,
      sym_string_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0b,
  [8186] = 4,
    ACTIONS(591), 1,
      anon_sym_COLON_COLON,
    ACTIONS(633), 1,
      anon_sym_COLON,
    STATE(239), 1,
      aux_sym_path_repeat2,
    ACTIONS(631), 8,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON_LT,
      anon_sym_COLON_EQ,
  [8206] = 4,
    ACTIONS(637), 1,
      anon_sym_COLON,
    ACTIONS(639), 1,
      anon_sym_COLON_COLON,
    STATE(243), 1,
      aux_sym_path_repeat1,
    ACTIONS(635), 8,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON_LT,
      anon_sym_COLON_EQ,
  [8226] = 4,
    ACTIONS(643), 1,
      anon_sym_COLON,
    ACTIONS(645), 1,
      anon_sym_COLON_COLON,
    STATE(248), 1,
      aux_sym_path_repeat1,
    ACTIONS(641), 8,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON_LT,
      anon_sym_COLON_EQ,
  [8246] = 4,
    ACTIONS(591), 1,
      anon_sym_COLON_COLON,
    ACTIONS(649), 1,
      anon_sym_COLON,
    STATE(245), 1,
      aux_sym_path_repeat2,
    ACTIONS(647), 8,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON_LT,
      anon_sym_COLON_EQ,
  [8266] = 2,
    ACTIONS(653), 1,
      sym_digits,
    ACTIONS(651), 10,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_let,
      sym_string_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0b,
  [8282] = 2,
    ACTIONS(614), 2,
      anon_sym_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(612), 8,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON_LT,
      anon_sym_COLON_EQ,
  [8297] = 2,
    ACTIONS(657), 2,
      anon_sym_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(655), 8,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON_LT,
      anon_sym_COLON_EQ,
  [8312] = 3,
    ACTIONS(661), 1,
      anon_sym_COLON,
    ACTIONS(663), 1,
      anon_sym_COLON_COLON,
    ACTIONS(659), 8,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON_LT,
      anon_sym_COLON_EQ,
  [8329] = 3,
    ACTIONS(643), 1,
      anon_sym_COLON,
    ACTIONS(665), 1,
      anon_sym_COLON_COLON,
    ACTIONS(641), 8,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON_LT,
      anon_sym_COLON_EQ,
  [8346] = 3,
    ACTIONS(669), 1,
      anon_sym_COLON,
    ACTIONS(671), 1,
      anon_sym_COLON_COLON,
    ACTIONS(667), 8,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON_LT,
      anon_sym_COLON_EQ,
  [8363] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(15), 1,
      anon_sym_pub,
    ACTIONS(673), 1,
      anon_sym_fn,
    ACTIONS(675), 1,
      anon_sym_extern,
    STATE(532), 1,
      aux_sym_function_repeat1,
    STATE(746), 1,
      sym_visibility_modifier,
    STATE(1077), 1,
      sym_function_modifier,
    ACTIONS(11), 2,
      anon_sym_const,
      anon_sym_unsafe,
  [8389] = 3,
    ACTIONS(679), 1,
      anon_sym_POUND_CARET_LBRACK,
    STATE(258), 1,
      aux_sym_file_repeat1,
    ACTIONS(677), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8405] = 1,
    ACTIONS(682), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_CARET_LBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8416] = 1,
    ACTIONS(684), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8426] = 1,
    ACTIONS(686), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8436] = 1,
    ACTIONS(688), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8446] = 1,
    ACTIONS(690), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8456] = 1,
    ACTIONS(692), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8466] = 1,
    ACTIONS(694), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8476] = 1,
    ACTIONS(694), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8486] = 1,
    ACTIONS(696), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8496] = 1,
    ACTIONS(696), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8506] = 1,
    ACTIONS(696), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8516] = 1,
    ACTIONS(696), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8526] = 1,
    ACTIONS(696), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8536] = 1,
    ACTIONS(694), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8546] = 1,
    ACTIONS(690), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8556] = 1,
    ACTIONS(690), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8566] = 1,
    ACTIONS(690), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8576] = 1,
    ACTIONS(690), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8586] = 1,
    ACTIONS(694), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8596] = 1,
    ACTIONS(694), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8606] = 1,
    ACTIONS(694), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8616] = 1,
    ACTIONS(694), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8626] = 1,
    ACTIONS(694), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8636] = 1,
    ACTIONS(694), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8646] = 1,
    ACTIONS(694), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8656] = 1,
    ACTIONS(694), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8666] = 1,
    ACTIONS(694), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8676] = 1,
    ACTIONS(694), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8686] = 1,
    ACTIONS(694), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8696] = 1,
    ACTIONS(694), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8706] = 1,
    ACTIONS(694), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8716] = 1,
    ACTIONS(698), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8726] = 1,
    ACTIONS(690), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8736] = 1,
    ACTIONS(694), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8746] = 1,
    ACTIONS(694), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8756] = 1,
    ACTIONS(694), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8766] = 6,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    STATE(740), 1,
      sym_path,
    STATE(1083), 1,
      sym_attr,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
  [8786] = 1,
    ACTIONS(700), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8796] = 1,
    ACTIONS(700), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8806] = 1,
    ACTIONS(702), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8816] = 1,
    ACTIONS(690), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8826] = 1,
    ACTIONS(704), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8836] = 1,
    ACTIONS(706), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8846] = 1,
    ACTIONS(706), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8856] = 1,
    ACTIONS(708), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8866] = 1,
    ACTIONS(690), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8876] = 1,
    ACTIONS(706), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8886] = 1,
    ACTIONS(706), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8896] = 1,
    ACTIONS(706), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8906] = 1,
    ACTIONS(706), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8916] = 1,
    ACTIONS(706), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8926] = 1,
    ACTIONS(706), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8936] = 1,
    ACTIONS(690), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8946] = 1,
    ACTIONS(710), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8956] = 1,
    ACTIONS(712), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8966] = 1,
    ACTIONS(690), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8976] = 1,
    ACTIONS(706), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8986] = 1,
    ACTIONS(706), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [8996] = 1,
    ACTIONS(706), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9006] = 1,
    ACTIONS(714), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9016] = 1,
    ACTIONS(690), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9026] = 1,
    ACTIONS(706), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9036] = 1,
    ACTIONS(706), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9046] = 1,
    ACTIONS(706), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9056] = 1,
    ACTIONS(706), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9066] = 1,
    ACTIONS(706), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9076] = 1,
    ACTIONS(716), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9086] = 1,
    ACTIONS(690), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9096] = 1,
    ACTIONS(706), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9106] = 1,
    ACTIONS(706), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9116] = 1,
    ACTIONS(706), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9126] = 1,
    ACTIONS(706), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9136] = 1,
    ACTIONS(718), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9146] = 1,
    ACTIONS(690), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9156] = 1,
    ACTIONS(720), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9166] = 1,
    ACTIONS(718), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9176] = 1,
    ACTIONS(718), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9186] = 1,
    ACTIONS(718), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9196] = 1,
    ACTIONS(718), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9206] = 1,
    ACTIONS(718), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9216] = 1,
    ACTIONS(718), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9226] = 1,
    ACTIONS(718), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9236] = 1,
    ACTIONS(718), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9246] = 1,
    ACTIONS(690), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9256] = 1,
    ACTIONS(722), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9266] = 1,
    ACTIONS(718), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9276] = 1,
    ACTIONS(718), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9286] = 1,
    ACTIONS(718), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9296] = 1,
    ACTIONS(718), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9306] = 1,
    ACTIONS(718), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9316] = 1,
    ACTIONS(718), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9326] = 1,
    ACTIONS(718), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9336] = 1,
    ACTIONS(718), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9346] = 1,
    ACTIONS(718), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9356] = 1,
    ACTIONS(718), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9366] = 1,
    ACTIONS(718), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9376] = 1,
    ACTIONS(700), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9386] = 1,
    ACTIONS(700), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9396] = 1,
    ACTIONS(724), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9406] = 1,
    ACTIONS(726), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9416] = 1,
    ACTIONS(728), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9426] = 1,
    ACTIONS(728), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9436] = 1,
    ACTIONS(728), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9446] = 1,
    ACTIONS(728), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9456] = 1,
    ACTIONS(728), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9466] = 1,
    ACTIONS(690), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9476] = 1,
    ACTIONS(690), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9486] = 1,
    ACTIONS(690), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9496] = 1,
    ACTIONS(690), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9506] = 1,
    ACTIONS(730), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9516] = 1,
    ACTIONS(730), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9526] = 1,
    ACTIONS(730), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9536] = 1,
    ACTIONS(732), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9546] = 1,
    ACTIONS(730), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9556] = 1,
    ACTIONS(730), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9566] = 1,
    ACTIONS(734), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9576] = 1,
    ACTIONS(690), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9586] = 1,
    ACTIONS(730), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9596] = 1,
    ACTIONS(730), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9606] = 1,
    ACTIONS(730), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9616] = 1,
    ACTIONS(690), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9626] = 1,
    ACTIONS(730), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9636] = 1,
    ACTIONS(730), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9646] = 1,
    ACTIONS(730), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9656] = 1,
    ACTIONS(730), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9666] = 1,
    ACTIONS(730), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9676] = 1,
    ACTIONS(736), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9686] = 1,
    ACTIONS(738), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9696] = 1,
    ACTIONS(740), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9706] = 1,
    ACTIONS(730), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9716] = 1,
    ACTIONS(730), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9726] = 1,
    ACTIONS(730), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9736] = 1,
    ACTIONS(742), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9746] = 1,
    ACTIONS(742), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9756] = 1,
    ACTIONS(742), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9766] = 1,
    ACTIONS(742), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9776] = 1,
    ACTIONS(742), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9786] = 1,
    ACTIONS(740), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9796] = 1,
    ACTIONS(740), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9806] = 1,
    ACTIONS(740), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9816] = 1,
    ACTIONS(740), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9826] = 1,
    ACTIONS(744), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9836] = 1,
    ACTIONS(746), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9846] = 1,
    ACTIONS(740), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9856] = 1,
    ACTIONS(730), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9866] = 1,
    ACTIONS(730), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9876] = 1,
    ACTIONS(730), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9886] = 1,
    ACTIONS(748), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9896] = 1,
    ACTIONS(748), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9906] = 1,
    ACTIONS(748), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9916] = 1,
    ACTIONS(748), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9926] = 1,
    ACTIONS(748), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9936] = 1,
    ACTIONS(740), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9946] = 1,
    ACTIONS(740), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9956] = 1,
    ACTIONS(740), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9966] = 1,
    ACTIONS(740), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9976] = 1,
    ACTIONS(730), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9986] = 1,
    ACTIONS(750), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [9996] = 1,
    ACTIONS(750), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10006] = 1,
    ACTIONS(752), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10016] = 1,
    ACTIONS(740), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10026] = 1,
    ACTIONS(750), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10036] = 1,
    ACTIONS(750), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10046] = 1,
    ACTIONS(750), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10056] = 1,
    ACTIONS(754), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10066] = 1,
    ACTIONS(756), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10076] = 1,
    ACTIONS(740), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10086] = 1,
    ACTIONS(750), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10096] = 1,
    ACTIONS(750), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10106] = 1,
    ACTIONS(750), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10116] = 1,
    ACTIONS(758), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10126] = 1,
    ACTIONS(758), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10136] = 1,
    ACTIONS(758), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10146] = 1,
    ACTIONS(758), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10156] = 1,
    ACTIONS(758), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10166] = 1,
    ACTIONS(740), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10176] = 1,
    ACTIONS(740), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10186] = 1,
    ACTIONS(740), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10196] = 1,
    ACTIONS(740), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10206] = 1,
    ACTIONS(750), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10216] = 1,
    ACTIONS(750), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10226] = 1,
    ACTIONS(750), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10236] = 1,
    ACTIONS(760), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10246] = 1,
    ACTIONS(740), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10256] = 1,
    ACTIONS(750), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10266] = 1,
    ACTIONS(750), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10276] = 1,
    ACTIONS(750), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10286] = 1,
    ACTIONS(750), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10296] = 1,
    ACTIONS(750), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10306] = 1,
    ACTIONS(750), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10316] = 1,
    ACTIONS(762), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10326] = 1,
    ACTIONS(740), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10336] = 1,
    ACTIONS(750), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10346] = 1,
    ACTIONS(750), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10356] = 1,
    ACTIONS(750), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10366] = 1,
    ACTIONS(764), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10376] = 1,
    ACTIONS(740), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10386] = 1,
    ACTIONS(766), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10396] = 1,
    ACTIONS(700), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10406] = 1,
    ACTIONS(700), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10416] = 1,
    ACTIONS(700), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10426] = 1,
    ACTIONS(700), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10436] = 1,
    ACTIONS(768), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10446] = 1,
    ACTIONS(768), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10456] = 1,
    ACTIONS(740), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10466] = 1,
    ACTIONS(770), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10476] = 1,
    ACTIONS(768), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10486] = 1,
    ACTIONS(772), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10496] = 1,
    ACTIONS(774), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10506] = 1,
    ACTIONS(768), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10516] = 1,
    ACTIONS(776), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10526] = 1,
    ACTIONS(776), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10536] = 1,
    ACTIONS(776), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10546] = 1,
    ACTIONS(776), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10556] = 1,
    ACTIONS(776), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10566] = 1,
    ACTIONS(700), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10576] = 1,
    ACTIONS(700), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10586] = 1,
    ACTIONS(768), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10596] = 1,
    ACTIONS(778), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10606] = 1,
    ACTIONS(780), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10616] = 1,
    ACTIONS(700), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10626] = 1,
    ACTIONS(782), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10636] = 1,
    ACTIONS(700), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10646] = 1,
    ACTIONS(772), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10656] = 1,
    ACTIONS(772), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10666] = 1,
    ACTIONS(772), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10676] = 1,
    ACTIONS(784), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10686] = 1,
    ACTIONS(784), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10696] = 1,
    ACTIONS(784), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10706] = 1,
    ACTIONS(784), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10716] = 1,
    ACTIONS(784), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10726] = 1,
    ACTIONS(784), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10736] = 1,
    ACTIONS(784), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10746] = 1,
    ACTIONS(784), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10756] = 1,
    ACTIONS(784), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10766] = 1,
    ACTIONS(784), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10776] = 1,
    ACTIONS(784), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10786] = 1,
    ACTIONS(784), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10796] = 1,
    ACTIONS(784), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10806] = 1,
    ACTIONS(784), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10816] = 1,
    ACTIONS(784), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10826] = 1,
    ACTIONS(784), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10836] = 1,
    ACTIONS(784), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10846] = 1,
    ACTIONS(784), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10856] = 1,
    ACTIONS(784), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10866] = 1,
    ACTIONS(784), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10876] = 1,
    ACTIONS(770), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10886] = 6,
    ACTIONS(100), 1,
      anon_sym_super,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      sym_identifier,
    STATE(740), 1,
      sym_path,
    STATE(1084), 1,
      sym_attr,
    ACTIONS(102), 2,
      anon_sym_package,
      anon_sym_self,
  [10906] = 1,
    ACTIONS(768), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10916] = 1,
    ACTIONS(768), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10926] = 1,
    ACTIONS(770), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10936] = 1,
    ACTIONS(770), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10946] = 1,
    ACTIONS(770), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10956] = 1,
    ACTIONS(770), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10966] = 1,
    ACTIONS(768), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10976] = 1,
    ACTIONS(768), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10986] = 1,
    ACTIONS(786), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [10996] = 1,
    ACTIONS(770), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11006] = 1,
    ACTIONS(786), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11016] = 1,
    ACTIONS(786), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11026] = 1,
    ACTIONS(786), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11036] = 1,
    ACTIONS(786), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11046] = 1,
    ACTIONS(788), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11056] = 1,
    ACTIONS(790), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11066] = 1,
    ACTIONS(790), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11076] = 1,
    ACTIONS(790), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11086] = 1,
    ACTIONS(790), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11096] = 1,
    ACTIONS(790), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11106] = 1,
    ACTIONS(770), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11116] = 1,
    ACTIONS(770), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11126] = 1,
    ACTIONS(770), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11136] = 1,
    ACTIONS(770), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11146] = 1,
    ACTIONS(792), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11156] = 3,
    ACTIONS(794), 1,
      anon_sym_POUND_LBRACK,
    STATE(532), 1,
      aux_sym_function_repeat1,
    ACTIONS(797), 5,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11170] = 1,
    ACTIONS(700), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11180] = 1,
    ACTIONS(700), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11190] = 1,
    ACTIONS(768), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11200] = 1,
    ACTIONS(799), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11210] = 1,
    ACTIONS(801), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11220] = 1,
    ACTIONS(801), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11230] = 1,
    ACTIONS(801), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11240] = 1,
    ACTIONS(801), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11250] = 1,
    ACTIONS(801), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11260] = 1,
    ACTIONS(770), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11270] = 1,
    ACTIONS(770), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11280] = 1,
    ACTIONS(770), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11290] = 1,
    ACTIONS(770), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11300] = 1,
    ACTIONS(803), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11310] = 1,
    ACTIONS(772), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11320] = 1,
    ACTIONS(768), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11330] = 1,
    ACTIONS(768), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11340] = 1,
    ACTIONS(805), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11350] = 1,
    ACTIONS(807), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11360] = 1,
    ACTIONS(770), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11370] = 1,
    ACTIONS(768), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11380] = 1,
    ACTIONS(686), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11390] = 1,
    ACTIONS(686), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11400] = 1,
    ACTIONS(809), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11410] = 1,
    ACTIONS(809), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11420] = 1,
    ACTIONS(809), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11430] = 1,
    ACTIONS(809), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11440] = 1,
    ACTIONS(809), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11450] = 1,
    ACTIONS(770), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11460] = 1,
    ACTIONS(770), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11470] = 1,
    ACTIONS(770), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11480] = 1,
    ACTIONS(770), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11490] = 1,
    ACTIONS(686), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11500] = 1,
    ACTIONS(811), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11510] = 1,
    ACTIONS(813), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11520] = 1,
    ACTIONS(813), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11530] = 1,
    ACTIONS(813), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11540] = 1,
    ACTIONS(813), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11550] = 1,
    ACTIONS(813), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11560] = 1,
    ACTIONS(686), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11570] = 1,
    ACTIONS(815), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11580] = 1,
    ACTIONS(817), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11590] = 1,
    ACTIONS(817), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11600] = 1,
    ACTIONS(772), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11610] = 1,
    ACTIONS(772), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11620] = 1,
    ACTIONS(772), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11630] = 1,
    ACTIONS(772), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11640] = 1,
    ACTIONS(819), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11650] = 1,
    ACTIONS(821), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11660] = 1,
    ACTIONS(817), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11670] = 1,
    ACTIONS(772), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11680] = 1,
    ACTIONS(772), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11690] = 1,
    ACTIONS(817), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11700] = 1,
    ACTIONS(823), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11710] = 1,
    ACTIONS(823), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11720] = 1,
    ACTIONS(823), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11730] = 1,
    ACTIONS(823), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11740] = 1,
    ACTIONS(823), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11750] = 1,
    ACTIONS(817), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11760] = 1,
    ACTIONS(817), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11770] = 1,
    ACTIONS(817), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11780] = 1,
    ACTIONS(772), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11790] = 1,
    ACTIONS(825), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11800] = 1,
    ACTIONS(827), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11810] = 1,
    ACTIONS(817), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11820] = 1,
    ACTIONS(817), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11830] = 1,
    ACTIONS(817), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11840] = 1,
    ACTIONS(817), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11850] = 1,
    ACTIONS(829), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11860] = 1,
    ACTIONS(829), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11870] = 1,
    ACTIONS(829), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11880] = 1,
    ACTIONS(829), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11890] = 1,
    ACTIONS(829), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11900] = 1,
    ACTIONS(817), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11910] = 1,
    ACTIONS(831), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11920] = 1,
    ACTIONS(817), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11930] = 1,
    ACTIONS(833), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11940] = 1,
    ACTIONS(772), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11950] = 1,
    ACTIONS(772), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11960] = 1,
    ACTIONS(817), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11970] = 1,
    ACTIONS(835), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11980] = 1,
    ACTIONS(837), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [11990] = 1,
    ACTIONS(817), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12000] = 1,
    ACTIONS(772), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12010] = 1,
    ACTIONS(817), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12020] = 1,
    ACTIONS(817), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12030] = 1,
    ACTIONS(817), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12040] = 1,
    ACTIONS(817), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12050] = 1,
    ACTIONS(817), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12060] = 1,
    ACTIONS(700), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12070] = 1,
    ACTIONS(772), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12080] = 1,
    ACTIONS(839), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12090] = 1,
    ACTIONS(841), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12100] = 1,
    ACTIONS(700), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12110] = 1,
    ACTIONS(772), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12120] = 1,
    ACTIONS(700), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12130] = 1,
    ACTIONS(843), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12140] = 1,
    ACTIONS(843), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12150] = 1,
    ACTIONS(843), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12160] = 1,
    ACTIONS(843), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12170] = 1,
    ACTIONS(843), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12180] = 1,
    ACTIONS(843), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12190] = 1,
    ACTIONS(843), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12200] = 1,
    ACTIONS(843), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12210] = 1,
    ACTIONS(843), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12220] = 1,
    ACTIONS(843), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12230] = 1,
    ACTIONS(843), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12240] = 1,
    ACTIONS(843), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12250] = 1,
    ACTIONS(843), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12260] = 1,
    ACTIONS(843), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12270] = 1,
    ACTIONS(843), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12280] = 1,
    ACTIONS(843), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12290] = 1,
    ACTIONS(843), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12300] = 1,
    ACTIONS(843), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12310] = 1,
    ACTIONS(843), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12320] = 1,
    ACTIONS(843), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12330] = 1,
    ACTIONS(768), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12340] = 1,
    ACTIONS(837), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12350] = 1,
    ACTIONS(837), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12360] = 1,
    ACTIONS(837), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12370] = 1,
    ACTIONS(837), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12380] = 1,
    ACTIONS(768), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12390] = 1,
    ACTIONS(768), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12400] = 1,
    ACTIONS(768), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12410] = 1,
    ACTIONS(845), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12420] = 1,
    ACTIONS(847), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12430] = 1,
    ACTIONS(845), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12440] = 1,
    ACTIONS(845), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12450] = 1,
    ACTIONS(700), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12460] = 1,
    ACTIONS(772), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12470] = 1,
    ACTIONS(768), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12480] = 1,
    ACTIONS(768), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12490] = 1,
    ACTIONS(768), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12500] = 1,
    ACTIONS(849), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12510] = 1,
    ACTIONS(845), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12520] = 1,
    ACTIONS(772), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12530] = 1,
    ACTIONS(772), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12540] = 1,
    ACTIONS(845), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12550] = 1,
    ACTIONS(851), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12560] = 1,
    ACTIONS(851), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12570] = 1,
    ACTIONS(851), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12580] = 1,
    ACTIONS(851), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12590] = 1,
    ACTIONS(851), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12600] = 1,
    ACTIONS(851), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12610] = 1,
    ACTIONS(851), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12620] = 1,
    ACTIONS(851), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12630] = 1,
    ACTIONS(851), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12640] = 1,
    ACTIONS(851), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12650] = 1,
    ACTIONS(851), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12660] = 1,
    ACTIONS(851), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12670] = 1,
    ACTIONS(851), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12680] = 1,
    ACTIONS(851), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12690] = 1,
    ACTIONS(851), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12700] = 1,
    ACTIONS(851), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12710] = 1,
    ACTIONS(851), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12720] = 1,
    ACTIONS(851), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12730] = 1,
    ACTIONS(851), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12740] = 1,
    ACTIONS(851), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12750] = 1,
    ACTIONS(853), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12760] = 1,
    ACTIONS(855), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12770] = 1,
    ACTIONS(700), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12780] = 1,
    ACTIONS(684), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12790] = 1,
    ACTIONS(700), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12800] = 1,
    ACTIONS(694), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12810] = 1,
    ACTIONS(684), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12820] = 1,
    ACTIONS(684), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12830] = 1,
    ACTIONS(684), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12840] = 1,
    ACTIONS(684), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12850] = 1,
    ACTIONS(684), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12860] = 1,
    ACTIONS(684), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12870] = 1,
    ACTIONS(684), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12880] = 1,
    ACTIONS(684), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12890] = 1,
    ACTIONS(684), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12900] = 1,
    ACTIONS(684), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12910] = 1,
    ACTIONS(684), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12920] = 1,
    ACTIONS(684), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12930] = 1,
    ACTIONS(684), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12940] = 1,
    ACTIONS(684), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12950] = 1,
    ACTIONS(684), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12960] = 1,
    ACTIONS(684), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12970] = 1,
    ACTIONS(684), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12980] = 1,
    ACTIONS(684), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12990] = 1,
    ACTIONS(857), 6,
      anon_sym_POUND_LBRACK,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [12999] = 6,
    ACTIONS(859), 1,
      anon_sym_fn,
    ACTIONS(862), 1,
      anon_sym_RBRACE,
    ACTIONS(864), 1,
      anon_sym_pub,
    STATE(716), 1,
      aux_sym_extern_block_repeat1,
    STATE(803), 1,
      sym_extern_function,
    STATE(1073), 1,
      sym_visibility_modifier,
  [13018] = 3,
    ACTIONS(869), 1,
      anon_sym_COLON,
    ACTIONS(871), 1,
      anon_sym_DASH_GT,
    ACTIONS(867), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [13031] = 6,
    ACTIONS(15), 1,
      anon_sym_pub,
    ACTIONS(873), 1,
      anon_sym_fn,
    ACTIONS(875), 1,
      anon_sym_RBRACE,
    STATE(716), 1,
      aux_sym_extern_block_repeat1,
    STATE(803), 1,
      sym_extern_function,
    STATE(1073), 1,
      sym_visibility_modifier,
  [13050] = 3,
    ACTIONS(879), 1,
      anon_sym_COLON,
    ACTIONS(881), 1,
      anon_sym_DASH_GT,
    ACTIONS(877), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [13063] = 3,
    ACTIONS(885), 1,
      anon_sym_COLON,
    ACTIONS(887), 1,
      anon_sym_DASH_GT,
    ACTIONS(883), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [13076] = 3,
    ACTIONS(891), 1,
      anon_sym_COLON,
    ACTIONS(893), 1,
      anon_sym_DASH_GT,
    ACTIONS(889), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [13089] = 6,
    ACTIONS(15), 1,
      anon_sym_pub,
    ACTIONS(873), 1,
      anon_sym_fn,
    ACTIONS(895), 1,
      anon_sym_RBRACE,
    STATE(724), 1,
      aux_sym_extern_block_repeat1,
    STATE(803), 1,
      sym_extern_function,
    STATE(1073), 1,
      sym_visibility_modifier,
  [13108] = 3,
    ACTIONS(899), 1,
      anon_sym_COLON,
    ACTIONS(901), 1,
      anon_sym_COLON_COLON_LT,
    ACTIONS(897), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [13121] = 6,
    ACTIONS(15), 1,
      anon_sym_pub,
    ACTIONS(873), 1,
      anon_sym_fn,
    ACTIONS(903), 1,
      anon_sym_RBRACE,
    STATE(716), 1,
      aux_sym_extern_block_repeat1,
    STATE(803), 1,
      sym_extern_function,
    STATE(1073), 1,
      sym_visibility_modifier,
  [13140] = 6,
    ACTIONS(15), 1,
      anon_sym_pub,
    ACTIONS(873), 1,
      anon_sym_fn,
    ACTIONS(905), 1,
      anon_sym_RBRACE,
    STATE(718), 1,
      aux_sym_extern_block_repeat1,
    STATE(803), 1,
      sym_extern_function,
    STATE(1073), 1,
      sym_visibility_modifier,
  [13159] = 3,
    ACTIONS(909), 1,
      anon_sym_COLON,
    ACTIONS(911), 1,
      anon_sym_DASH_GT,
    ACTIONS(907), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [13172] = 2,
    ACTIONS(915), 1,
      anon_sym_COLON,
    ACTIONS(913), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [13182] = 2,
    ACTIONS(917), 1,
      anon_sym_LPAREN,
    ACTIONS(919), 4,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
  [13192] = 4,
    ACTIONS(675), 1,
      anon_sym_extern,
    ACTIONS(921), 1,
      anon_sym_fn,
    STATE(1079), 1,
      sym_function_modifier,
    ACTIONS(11), 2,
      anon_sym_const,
      anon_sym_unsafe,
  [13206] = 2,
    ACTIONS(925), 1,
      anon_sym_COLON,
    ACTIONS(923), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [13216] = 2,
    ACTIONS(929), 1,
      anon_sym_COLON,
    ACTIONS(927), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [13226] = 2,
    ACTIONS(933), 1,
      anon_sym_COLON,
    ACTIONS(931), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [13236] = 2,
    ACTIONS(937), 1,
      anon_sym_COLON,
    ACTIONS(935), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [13246] = 2,
    ACTIONS(941), 1,
      anon_sym_COLON,
    ACTIONS(939), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [13256] = 2,
    ACTIONS(945), 1,
      anon_sym_COLON,
    ACTIONS(943), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [13266] = 2,
    ACTIONS(949), 1,
      anon_sym_COLON,
    ACTIONS(947), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [13276] = 2,
    ACTIONS(953), 1,
      anon_sym_COLON,
    ACTIONS(951), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [13286] = 2,
    ACTIONS(957), 1,
      anon_sym_COLON,
    ACTIONS(955), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [13296] = 2,
    ACTIONS(961), 1,
      anon_sym_COLON,
    ACTIONS(959), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [13306] = 3,
    ACTIONS(965), 1,
      anon_sym_EQ,
    ACTIONS(967), 1,
      anon_sym_LPAREN,
    ACTIONS(963), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13318] = 2,
    ACTIONS(957), 1,
      anon_sym_COLON,
    ACTIONS(955), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [13328] = 2,
    ACTIONS(971), 1,
      anon_sym_COLON,
    ACTIONS(969), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [13338] = 2,
    ACTIONS(975), 1,
      anon_sym_COLON,
    ACTIONS(973), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [13348] = 2,
    ACTIONS(975), 1,
      anon_sym_COLON,
    ACTIONS(973), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [13358] = 2,
    ACTIONS(979), 1,
      anon_sym_COLON,
    ACTIONS(977), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [13368] = 4,
    ACTIONS(675), 1,
      anon_sym_extern,
    ACTIONS(981), 1,
      anon_sym_fn,
    STATE(1064), 1,
      sym_function_modifier,
    ACTIONS(11), 2,
      anon_sym_const,
      anon_sym_unsafe,
  [13382] = 2,
    ACTIONS(985), 1,
      anon_sym_COLON,
    ACTIONS(983), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [13392] = 2,
    ACTIONS(975), 1,
      anon_sym_COLON,
    ACTIONS(973), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [13402] = 2,
    ACTIONS(957), 1,
      anon_sym_COLON,
    ACTIONS(955), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [13412] = 2,
    ACTIONS(957), 1,
      anon_sym_COLON,
    ACTIONS(955), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [13422] = 2,
    ACTIONS(989), 1,
      anon_sym_COLON,
    ACTIONS(987), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [13432] = 2,
    ACTIONS(975), 1,
      anon_sym_COLON,
    ACTIONS(973), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [13442] = 1,
    ACTIONS(991), 4,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
  [13449] = 3,
    ACTIONS(993), 1,
      anon_sym_COMMA,
    ACTIONS(995), 1,
      anon_sym_RPAREN,
    STATE(860), 1,
      aux_sym_inputs_repeat1,
  [13459] = 1,
    ACTIONS(997), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [13465] = 3,
    ACTIONS(999), 1,
      anon_sym_COMMA,
    ACTIONS(1001), 1,
      anon_sym_RPAREN,
    STATE(768), 1,
      aux_sym_inputs_repeat1,
  [13475] = 3,
    ACTIONS(1003), 1,
      anon_sym_RPAREN,
    ACTIONS(1005), 1,
      sym_identifier,
    STATE(771), 1,
      sym_annotated,
  [13485] = 3,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(1007), 1,
      anon_sym_RPAREN,
    STATE(773), 1,
      sym_annotated,
  [13495] = 3,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(1009), 1,
      anon_sym_RPAREN,
    STATE(776), 1,
      sym_annotated,
  [13505] = 1,
    ACTIONS(1011), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [13511] = 1,
    ACTIONS(1011), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [13517] = 1,
    ACTIONS(1011), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [13523] = 1,
    ACTIONS(1011), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [13529] = 1,
    ACTIONS(1013), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13535] = 3,
    ACTIONS(1015), 1,
      anon_sym_COMMA,
    ACTIONS(1017), 1,
      anon_sym_RPAREN,
    STATE(797), 1,
      aux_sym_attr_repeat1,
  [13545] = 3,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
    STATE(899), 1,
      sym_annotated,
  [13555] = 3,
    ACTIONS(1021), 1,
      anon_sym_COMMA,
    ACTIONS(1023), 1,
      anon_sym_GT,
    STATE(847), 1,
      aux_sym_generic_args_repeat1,
  [13565] = 3,
    ACTIONS(1025), 1,
      anon_sym_COMMA,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
    STATE(823), 1,
      aux_sym_inputs_repeat1,
  [13575] = 3,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
    STATE(824), 1,
      sym_annotated,
  [13585] = 3,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(1031), 1,
      anon_sym_RPAREN,
    STATE(899), 1,
      sym_annotated,
  [13595] = 3,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1035), 1,
      anon_sym_RPAREN,
    STATE(827), 1,
      aux_sym_inputs_repeat1,
  [13605] = 1,
    ACTIONS(1037), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [13611] = 3,
    ACTIONS(1039), 1,
      anon_sym_COMMA,
    ACTIONS(1041), 1,
      anon_sym_RPAREN,
    STATE(829), 1,
      aux_sym_inputs_repeat1,
  [13621] = 1,
    ACTIONS(1043), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13627] = 3,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(1045), 1,
      anon_sym_RPAREN,
    STATE(899), 1,
      sym_annotated,
  [13637] = 3,
    ACTIONS(1047), 1,
      anon_sym_COMMA,
    ACTIONS(1049), 1,
      anon_sym_RPAREN,
    STATE(832), 1,
      aux_sym_inputs_repeat1,
  [13647] = 1,
    ACTIONS(1051), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [13653] = 3,
    ACTIONS(1053), 1,
      anon_sym_COMMA,
    ACTIONS(1055), 1,
      anon_sym_RPAREN,
    STATE(823), 1,
      aux_sym_inputs_repeat1,
  [13663] = 3,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(1057), 1,
      anon_sym_RPAREN,
    STATE(833), 1,
      sym_annotated,
  [13673] = 1,
    ACTIONS(1059), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [13679] = 1,
    ACTIONS(1061), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [13685] = 3,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(1063), 1,
      anon_sym_RPAREN,
    STATE(794), 1,
      sym_annotated,
  [13695] = 1,
    ACTIONS(1065), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [13701] = 1,
    ACTIONS(1067), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [13707] = 3,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(1069), 1,
      anon_sym_RPAREN,
    STATE(830), 1,
      sym_annotated,
  [13717] = 3,
    ACTIONS(1071), 1,
      anon_sym_COMMA,
    ACTIONS(1073), 1,
      anon_sym_RPAREN,
    STATE(858), 1,
      aux_sym_tuple_expression_repeat1,
  [13727] = 3,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(1075), 1,
      anon_sym_RPAREN,
    STATE(899), 1,
      sym_annotated,
  [13737] = 3,
    ACTIONS(1077), 1,
      anon_sym_COMMA,
    ACTIONS(1080), 1,
      anon_sym_GT,
    STATE(788), 1,
      aux_sym_generic_args_repeat1,
  [13747] = 3,
    ACTIONS(1082), 1,
      anon_sym_COMMA,
    ACTIONS(1084), 1,
      anon_sym_GT,
    STATE(850), 1,
      aux_sym_generic_args_repeat1,
  [13757] = 1,
    ACTIONS(1086), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13763] = 3,
    ACTIONS(1088), 1,
      anon_sym_COMMA,
    ACTIONS(1090), 1,
      anon_sym_RPAREN,
    STATE(823), 1,
      aux_sym_inputs_repeat1,
  [13773] = 3,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(1092), 1,
      anon_sym_RPAREN,
    STATE(899), 1,
      sym_annotated,
  [13783] = 3,
    ACTIONS(1094), 1,
      anon_sym_COMMA,
    ACTIONS(1096), 1,
      anon_sym_RPAREN,
    STATE(823), 1,
      aux_sym_inputs_repeat1,
  [13793] = 3,
    ACTIONS(1098), 1,
      anon_sym_COMMA,
    ACTIONS(1100), 1,
      anon_sym_RPAREN,
    STATE(791), 1,
      aux_sym_inputs_repeat1,
  [13803] = 3,
    ACTIONS(1102), 1,
      anon_sym_COMMA,
    ACTIONS(1104), 1,
      anon_sym_RPAREN,
    STATE(804), 1,
      aux_sym_function_type_repeat1,
  [13813] = 3,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    ACTIONS(1108), 1,
      anon_sym_RPAREN,
    STATE(765), 1,
      aux_sym_attr_repeat1,
  [13823] = 3,
    ACTIONS(1110), 1,
      anon_sym_COMMA,
    ACTIONS(1113), 1,
      anon_sym_RPAREN,
    STATE(797), 1,
      aux_sym_attr_repeat1,
  [13833] = 3,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    ACTIONS(1115), 1,
      anon_sym_COMMA,
    STATE(855), 1,
      aux_sym_tuple_type_repeat1,
  [13843] = 3,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(1117), 1,
      anon_sym_RPAREN,
    STATE(756), 1,
      sym_annotated,
  [13853] = 3,
    ACTIONS(1119), 1,
      anon_sym_fn,
    ACTIONS(1121), 1,
      anon_sym_LBRACE,
    ACTIONS(1123), 1,
      sym_string_literal,
  [13863] = 3,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(1125), 1,
      anon_sym_RPAREN,
    STATE(899), 1,
      sym_annotated,
  [13873] = 1,
    ACTIONS(1127), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13879] = 1,
    ACTIONS(1129), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [13885] = 3,
    ACTIONS(1131), 1,
      anon_sym_COMMA,
    ACTIONS(1134), 1,
      anon_sym_RPAREN,
    STATE(804), 1,
      aux_sym_function_type_repeat1,
  [13895] = 3,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(1136), 1,
      anon_sym_RPAREN,
    STATE(899), 1,
      sym_annotated,
  [13905] = 3,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(1138), 1,
      anon_sym_RPAREN,
    STATE(899), 1,
      sym_annotated,
  [13915] = 1,
    ACTIONS(1140), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [13921] = 1,
    ACTIONS(997), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [13927] = 1,
    ACTIONS(997), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [13933] = 1,
    ACTIONS(997), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [13939] = 1,
    ACTIONS(1142), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [13945] = 1,
    ACTIONS(1144), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [13951] = 3,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(1146), 1,
      anon_sym_RPAREN,
    STATE(899), 1,
      sym_annotated,
  [13961] = 3,
    ACTIONS(1148), 1,
      anon_sym_COMMA,
    ACTIONS(1150), 1,
      anon_sym_RPAREN,
    STATE(823), 1,
      aux_sym_inputs_repeat1,
  [13971] = 3,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(1152), 1,
      anon_sym_RPAREN,
    STATE(899), 1,
      sym_annotated,
  [13981] = 1,
    ACTIONS(1154), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [13987] = 1,
    ACTIONS(1154), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [13993] = 1,
    ACTIONS(1154), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [13999] = 1,
    ACTIONS(1154), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [14005] = 3,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(1156), 1,
      anon_sym_RPAREN,
    STATE(899), 1,
      sym_annotated,
  [14015] = 3,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(1158), 1,
      anon_sym_RPAREN,
    STATE(899), 1,
      sym_annotated,
  [14025] = 3,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(1160), 1,
      anon_sym_RPAREN,
    STATE(899), 1,
      sym_annotated,
  [14035] = 3,
    ACTIONS(1162), 1,
      anon_sym_COMMA,
    ACTIONS(1165), 1,
      anon_sym_RPAREN,
    STATE(823), 1,
      aux_sym_inputs_repeat1,
  [14045] = 3,
    ACTIONS(1167), 1,
      anon_sym_COMMA,
    ACTIONS(1169), 1,
      anon_sym_RPAREN,
    STATE(852), 1,
      aux_sym_inputs_repeat1,
  [14055] = 3,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(1171), 1,
      anon_sym_RPAREN,
    STATE(857), 1,
      sym_annotated,
  [14065] = 3,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(1173), 1,
      anon_sym_RPAREN,
    STATE(899), 1,
      sym_annotated,
  [14075] = 3,
    ACTIONS(1175), 1,
      anon_sym_COMMA,
    ACTIONS(1177), 1,
      anon_sym_RPAREN,
    STATE(823), 1,
      aux_sym_inputs_repeat1,
  [14085] = 3,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(1179), 1,
      anon_sym_RPAREN,
    STATE(899), 1,
      sym_annotated,
  [14095] = 3,
    ACTIONS(1181), 1,
      anon_sym_COMMA,
    ACTIONS(1183), 1,
      anon_sym_RPAREN,
    STATE(823), 1,
      aux_sym_inputs_repeat1,
  [14105] = 3,
    ACTIONS(1185), 1,
      anon_sym_COMMA,
    ACTIONS(1187), 1,
      anon_sym_RPAREN,
    STATE(814), 1,
      aux_sym_inputs_repeat1,
  [14115] = 3,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(1189), 1,
      anon_sym_RPAREN,
    STATE(899), 1,
      sym_annotated,
  [14125] = 3,
    ACTIONS(1191), 1,
      anon_sym_COMMA,
    ACTIONS(1193), 1,
      anon_sym_RPAREN,
    STATE(823), 1,
      aux_sym_inputs_repeat1,
  [14135] = 3,
    ACTIONS(1195), 1,
      anon_sym_COMMA,
    ACTIONS(1197), 1,
      anon_sym_RPAREN,
    STATE(793), 1,
      aux_sym_inputs_repeat1,
  [14145] = 1,
    ACTIONS(1199), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14151] = 3,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(1201), 1,
      anon_sym_RPAREN,
    STATE(754), 1,
      sym_annotated,
  [14161] = 1,
    ACTIONS(1203), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14167] = 3,
    ACTIONS(1205), 1,
      anon_sym_COMMA,
    ACTIONS(1207), 1,
      anon_sym_RPAREN,
    STATE(786), 1,
      aux_sym_tuple_expression_repeat1,
  [14177] = 3,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(1209), 1,
      anon_sym_RPAREN,
    STATE(899), 1,
      sym_annotated,
  [14187] = 1,
    ACTIONS(1211), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [14193] = 3,
    ACTIONS(1213), 1,
      anon_sym_COMMA,
    ACTIONS(1215), 1,
      anon_sym_RPAREN,
    STATE(798), 1,
      aux_sym_tuple_type_repeat1,
  [14203] = 1,
    ACTIONS(1217), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [14209] = 1,
    ACTIONS(1219), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [14215] = 1,
    ACTIONS(1221), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [14221] = 1,
    ACTIONS(1223), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [14227] = 3,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(1225), 1,
      anon_sym_RPAREN,
    STATE(899), 1,
      sym_annotated,
  [14237] = 1,
    ACTIONS(1227), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [14243] = 3,
    ACTIONS(1229), 1,
      anon_sym_COMMA,
    ACTIONS(1231), 1,
      anon_sym_GT,
    STATE(788), 1,
      aux_sym_generic_args_repeat1,
  [14253] = 1,
    ACTIONS(1227), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [14259] = 1,
    ACTIONS(1227), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [14265] = 3,
    ACTIONS(1233), 1,
      anon_sym_COMMA,
    ACTIONS(1235), 1,
      anon_sym_GT,
    STATE(788), 1,
      aux_sym_generic_args_repeat1,
  [14275] = 1,
    ACTIONS(1227), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [14281] = 3,
    ACTIONS(1237), 1,
      anon_sym_COMMA,
    ACTIONS(1239), 1,
      anon_sym_RPAREN,
    STATE(823), 1,
      aux_sym_inputs_repeat1,
  [14291] = 3,
    ACTIONS(1241), 1,
      anon_sym_COMMA,
    ACTIONS(1243), 1,
      anon_sym_RPAREN,
    STATE(795), 1,
      aux_sym_function_type_repeat1,
  [14301] = 1,
    ACTIONS(1245), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [14307] = 3,
    ACTIONS(1247), 1,
      anon_sym_COMMA,
    ACTIONS(1250), 1,
      anon_sym_RPAREN,
    STATE(855), 1,
      aux_sym_tuple_type_repeat1,
  [14317] = 1,
    ACTIONS(1252), 3,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_pub,
  [14323] = 3,
    ACTIONS(1254), 1,
      anon_sym_COMMA,
    ACTIONS(1256), 1,
      anon_sym_RPAREN,
    STATE(778), 1,
      aux_sym_inputs_repeat1,
  [14333] = 3,
    ACTIONS(1258), 1,
      anon_sym_COMMA,
    ACTIONS(1261), 1,
      anon_sym_RPAREN,
    STATE(858), 1,
      aux_sym_tuple_expression_repeat1,
  [14343] = 3,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(1263), 1,
      anon_sym_RPAREN,
    STATE(899), 1,
      sym_annotated,
  [14353] = 3,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    ACTIONS(1267), 1,
      anon_sym_RPAREN,
    STATE(823), 1,
      aux_sym_inputs_repeat1,
  [14363] = 3,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(1269), 1,
      anon_sym_RPAREN,
    STATE(899), 1,
      sym_annotated,
  [14373] = 2,
    ACTIONS(1271), 1,
      anon_sym_COLON,
    ACTIONS(1273), 1,
      anon_sym_DASH_GT,
  [14380] = 2,
    ACTIONS(1275), 1,
      anon_sym_COLON,
    ACTIONS(1277), 1,
      anon_sym_DASH_GT,
  [14387] = 2,
    ACTIONS(1279), 1,
      anon_sym_RBRACE,
    ACTIONS(1281), 1,
      anon_sym_SEMI,
  [14394] = 2,
    ACTIONS(1283), 1,
      anon_sym_SEMI,
    ACTIONS(1285), 1,
      anon_sym_DASH_GT,
  [14401] = 2,
    ACTIONS(1287), 1,
      anon_sym_COLON,
    ACTIONS(1289), 1,
      anon_sym_DASH_GT,
  [14408] = 2,
    ACTIONS(1291), 1,
      anon_sym_SEMI,
    ACTIONS(1293), 1,
      anon_sym_DASH_GT,
  [14415] = 2,
    ACTIONS(1295), 1,
      anon_sym_COLON,
    ACTIONS(1297), 1,
      anon_sym_DASH_GT,
  [14422] = 2,
    ACTIONS(1299), 1,
      anon_sym_COLON,
    ACTIONS(1301), 1,
      anon_sym_DASH_GT,
  [14429] = 2,
    ACTIONS(1303), 1,
      anon_sym_SEMI,
    ACTIONS(1305), 1,
      anon_sym_DASH_GT,
  [14436] = 2,
    ACTIONS(1307), 1,
      anon_sym_COLON,
    ACTIONS(1309), 1,
      anon_sym_DASH_GT,
  [14443] = 2,
    ACTIONS(1311), 1,
      anon_sym_SEMI,
    ACTIONS(1313), 1,
      anon_sym_DASH_GT,
  [14450] = 1,
    ACTIONS(1250), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14455] = 2,
    ACTIONS(1315), 1,
      anon_sym_COLON,
    ACTIONS(1317), 1,
      anon_sym_DASH_GT,
  [14462] = 2,
    ACTIONS(1319), 1,
      anon_sym_COLON,
    ACTIONS(1321), 1,
      anon_sym_DASH_GT,
  [14469] = 2,
    ACTIONS(1005), 1,
      sym_identifier,
    STATE(899), 1,
      sym_annotated,
  [14476] = 2,
    ACTIONS(1323), 1,
      anon_sym_COLON,
    ACTIONS(1325), 1,
      anon_sym_DASH_GT,
  [14483] = 2,
    ACTIONS(1327), 1,
      anon_sym_SEMI,
    ACTIONS(1329), 1,
      anon_sym_DASH_GT,
  [14490] = 1,
    ACTIONS(1331), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14495] = 2,
    ACTIONS(1333), 1,
      anon_sym_COLON,
    ACTIONS(1335), 1,
      anon_sym_DASH_GT,
  [14502] = 2,
    ACTIONS(1337), 1,
      anon_sym_COLON,
    ACTIONS(1339), 1,
      anon_sym_DASH_GT,
  [14509] = 2,
    ACTIONS(1341), 1,
      anon_sym_COLON,
    ACTIONS(1343), 1,
      anon_sym_DASH_GT,
  [14516] = 2,
    ACTIONS(1345), 1,
      anon_sym_COLON,
    ACTIONS(1347), 1,
      anon_sym_DASH_GT,
  [14523] = 2,
    ACTIONS(1349), 1,
      anon_sym_COLON,
    ACTIONS(1351), 1,
      anon_sym_DASH_GT,
  [14530] = 2,
    ACTIONS(1353), 1,
      anon_sym_SEMI,
    ACTIONS(1355), 1,
      anon_sym_DASH_GT,
  [14537] = 2,
    ACTIONS(1357), 1,
      anon_sym_COLON,
    ACTIONS(1359), 1,
      anon_sym_DASH_GT,
  [14544] = 2,
    ACTIONS(1361), 1,
      anon_sym_super,
    ACTIONS(1363), 1,
      sym_identifier,
  [14551] = 2,
    ACTIONS(1365), 1,
      anon_sym_COLON,
    ACTIONS(1367), 1,
      anon_sym_DASH_GT,
  [14558] = 2,
    ACTIONS(1369), 1,
      anon_sym_COLON,
    ACTIONS(1371), 1,
      anon_sym_DASH_GT,
  [14565] = 2,
    ACTIONS(1373), 1,
      anon_sym_COLON,
    ACTIONS(1375), 1,
      anon_sym_DASH_GT,
  [14572] = 2,
    ACTIONS(1377), 1,
      anon_sym_COLON,
    ACTIONS(1379), 1,
      anon_sym_DASH_GT,
  [14579] = 2,
    ACTIONS(1381), 1,
      anon_sym_COLON,
    ACTIONS(1383), 1,
      anon_sym_DASH_GT,
  [14586] = 2,
    ACTIONS(1385), 1,
      anon_sym_COLON,
    ACTIONS(1387), 1,
      anon_sym_DASH_GT,
  [14593] = 2,
    ACTIONS(1389), 1,
      anon_sym_COLON,
    ACTIONS(1391), 1,
      anon_sym_DASH_GT,
  [14600] = 2,
    ACTIONS(1393), 1,
      anon_sym_COLON,
    ACTIONS(1395), 1,
      anon_sym_DASH_GT,
  [14607] = 2,
    ACTIONS(1397), 1,
      anon_sym_COLON,
    ACTIONS(1399), 1,
      anon_sym_DASH_GT,
  [14614] = 2,
    ACTIONS(1401), 1,
      anon_sym_COLON,
    ACTIONS(1403), 1,
      anon_sym_DASH_GT,
  [14621] = 2,
    ACTIONS(1405), 1,
      anon_sym_COLON,
    ACTIONS(1407), 1,
      anon_sym_DASH_GT,
  [14628] = 1,
    ACTIONS(1409), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14633] = 2,
    ACTIONS(1411), 1,
      anon_sym_COLON,
    ACTIONS(1413), 1,
      anon_sym_DASH_GT,
  [14640] = 2,
    ACTIONS(1415), 1,
      anon_sym_COLON,
    ACTIONS(1417), 1,
      anon_sym_DASH_GT,
  [14647] = 2,
    ACTIONS(1419), 1,
      anon_sym_COLON,
    ACTIONS(1421), 1,
      anon_sym_DASH_GT,
  [14654] = 2,
    ACTIONS(1423), 1,
      anon_sym_COLON,
    ACTIONS(1425), 1,
      anon_sym_DASH_GT,
  [14661] = 2,
    ACTIONS(1427), 1,
      anon_sym_COLON,
    ACTIONS(1429), 1,
      anon_sym_DASH_GT,
  [14668] = 2,
    ACTIONS(1431), 1,
      anon_sym_COLON,
    ACTIONS(1433), 1,
      anon_sym_DASH_GT,
  [14675] = 2,
    ACTIONS(1435), 1,
      anon_sym_fn,
    ACTIONS(1437), 1,
      anon_sym_LBRACE,
  [14682] = 1,
    ACTIONS(1439), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14687] = 1,
    ACTIONS(1441), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14692] = 2,
    ACTIONS(1443), 1,
      anon_sym_COLON,
    ACTIONS(1445), 1,
      anon_sym_DASH_GT,
  [14699] = 1,
    ACTIONS(1447), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14704] = 2,
    ACTIONS(1449), 1,
      anon_sym_COLON,
    ACTIONS(1451), 1,
      anon_sym_DASH_GT,
  [14711] = 2,
    ACTIONS(1453), 1,
      anon_sym_COLON,
    ACTIONS(1455), 1,
      anon_sym_DASH_GT,
  [14718] = 1,
    ACTIONS(1457), 2,
      anon_sym_super,
      anon_sym_package,
  [14723] = 1,
    ACTIONS(1459), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14728] = 2,
    ACTIONS(1461), 1,
      anon_sym_COLON,
    ACTIONS(1463), 1,
      anon_sym_COLON_EQ,
  [14735] = 2,
    ACTIONS(1119), 1,
      anon_sym_fn,
    ACTIONS(1465), 1,
      sym_string_literal,
  [14742] = 2,
    ACTIONS(1467), 1,
      anon_sym_SEMI,
    ACTIONS(1469), 1,
      anon_sym_DASH_GT,
  [14749] = 2,
    ACTIONS(1471), 1,
      anon_sym_SEMI,
    ACTIONS(1473), 1,
      anon_sym_DASH_GT,
  [14756] = 2,
    ACTIONS(1281), 1,
      anon_sym_SEMI,
    ACTIONS(1475), 1,
      anon_sym_RBRACE,
  [14763] = 2,
    ACTIONS(1477), 1,
      anon_sym_COLON,
    ACTIONS(1479), 1,
      anon_sym_DASH_GT,
  [14770] = 2,
    ACTIONS(1481), 1,
      anon_sym_SEMI,
    ACTIONS(1483), 1,
      anon_sym_DASH_GT,
  [14777] = 2,
    ACTIONS(1361), 1,
      anon_sym_super,
    ACTIONS(1485), 1,
      sym_identifier,
  [14784] = 2,
    ACTIONS(1487), 1,
      anon_sym_COLON,
    ACTIONS(1489), 1,
      anon_sym_DASH_GT,
  [14791] = 2,
    ACTIONS(1491), 1,
      anon_sym_COLON,
    ACTIONS(1493), 1,
      anon_sym_DASH_GT,
  [14798] = 2,
    ACTIONS(1495), 1,
      anon_sym_SEMI,
    ACTIONS(1497), 1,
      anon_sym_DASH_GT,
  [14805] = 2,
    ACTIONS(1499), 1,
      anon_sym_COLON,
    ACTIONS(1501), 1,
      anon_sym_DASH_GT,
  [14812] = 2,
    ACTIONS(1503), 1,
      anon_sym_COLON,
    ACTIONS(1505), 1,
      anon_sym_DASH_GT,
  [14819] = 1,
    ACTIONS(1507), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14824] = 1,
    ACTIONS(1509), 1,
      anon_sym_COLON,
  [14828] = 1,
    ACTIONS(1511), 1,
      anon_sym_COLON,
  [14832] = 1,
    ACTIONS(1513), 1,
      anon_sym_SEMI,
  [14836] = 1,
    ACTIONS(1515), 1,
      anon_sym_SEMI,
  [14840] = 1,
    ACTIONS(1517), 1,
      anon_sym_SEMI,
  [14844] = 1,
    ACTIONS(1519), 1,
      anon_sym_SEMI,
  [14848] = 1,
    ACTIONS(1521), 1,
      anon_sym_SEMI,
  [14852] = 1,
    ACTIONS(1523), 1,
      anon_sym_COLON,
  [14856] = 1,
    ACTIONS(1525), 1,
      anon_sym_COLON,
  [14860] = 1,
    ACTIONS(1527), 1,
      anon_sym_COLON,
  [14864] = 1,
    ACTIONS(1529), 1,
      anon_sym_COLON,
  [14868] = 1,
    ACTIONS(1531), 1,
      anon_sym_COLON,
  [14872] = 1,
    ACTIONS(1533), 1,
      anon_sym_COLON,
  [14876] = 1,
    ACTIONS(1535), 1,
      anon_sym_COLON,
  [14880] = 1,
    ACTIONS(1537), 1,
      anon_sym_COLON,
  [14884] = 1,
    ACTIONS(1539), 1,
      anon_sym_SEMI,
  [14888] = 1,
    ACTIONS(1541), 1,
      anon_sym_COLON,
  [14892] = 1,
    ACTIONS(1543), 1,
      anon_sym_COLON,
  [14896] = 1,
    ACTIONS(1545), 1,
      anon_sym_COLON,
  [14900] = 1,
    ACTIONS(1547), 1,
      anon_sym_COLON,
  [14904] = 1,
    ACTIONS(1549), 1,
      anon_sym_COLON,
  [14908] = 1,
    ACTIONS(1551), 1,
      anon_sym_COLON,
  [14912] = 1,
    ACTIONS(1553), 1,
      anon_sym_COLON,
  [14916] = 1,
    ACTIONS(1555), 1,
      anon_sym_COLON,
  [14920] = 1,
    ACTIONS(1557), 1,
      anon_sym_SEMI,
  [14924] = 1,
    ACTIONS(1559), 1,
      anon_sym_SEMI,
  [14928] = 1,
    ACTIONS(1561), 1,
      anon_sym_SEMI,
  [14932] = 1,
    ACTIONS(1563), 1,
      anon_sym_SEMI,
  [14936] = 1,
    ACTIONS(1565), 1,
      anon_sym_SEMI,
  [14940] = 1,
    ACTIONS(1567), 1,
      anon_sym_SEMI,
  [14944] = 1,
    ACTIONS(1569), 1,
      anon_sym_SEMI,
  [14948] = 1,
    ACTIONS(1571), 1,
      anon_sym_SEMI,
  [14952] = 1,
    ACTIONS(1573), 1,
      anon_sym_SEMI,
  [14956] = 1,
    ACTIONS(1575), 1,
      anon_sym_COLON,
  [14960] = 1,
    ACTIONS(1577), 1,
      anon_sym_COLON,
  [14964] = 1,
    ACTIONS(1579), 1,
      anon_sym_COLON,
  [14968] = 1,
    ACTIONS(1581), 1,
      anon_sym_COLON,
  [14972] = 1,
    ACTIONS(1583), 1,
      anon_sym_COLON,
  [14976] = 1,
    ACTIONS(1585), 1,
      anon_sym_COLON,
  [14980] = 1,
    ACTIONS(1587), 1,
      anon_sym_COLON,
  [14984] = 1,
    ACTIONS(1589), 1,
      anon_sym_COLON,
  [14988] = 1,
    ACTIONS(1591), 1,
      anon_sym_COLON,
  [14992] = 1,
    ACTIONS(1593), 1,
      anon_sym_COLON,
  [14996] = 1,
    ACTIONS(1595), 1,
      anon_sym_COLON,
  [15000] = 1,
    ACTIONS(1597), 1,
      anon_sym_COLON,
  [15004] = 1,
    ACTIONS(1599), 1,
      anon_sym_COLON,
  [15008] = 1,
    ACTIONS(1601), 1,
      anon_sym_COLON,
  [15012] = 1,
    ACTIONS(1603), 1,
      anon_sym_COLON,
  [15016] = 1,
    ACTIONS(1605), 1,
      anon_sym_COLON,
  [15020] = 1,
    ACTIONS(1607), 1,
      anon_sym_COLON,
  [15024] = 1,
    ACTIONS(1609), 1,
      anon_sym_COLON,
  [15028] = 1,
    ACTIONS(1611), 1,
      anon_sym_COLON,
  [15032] = 1,
    ACTIONS(1613), 1,
      anon_sym_COLON,
  [15036] = 1,
    ACTIONS(1615), 1,
      anon_sym_COLON,
  [15040] = 1,
    ACTIONS(1617), 1,
      anon_sym_COLON,
  [15044] = 1,
    ACTIONS(1619), 1,
      anon_sym_COLON,
  [15048] = 1,
    ACTIONS(1621), 1,
      anon_sym_COLON,
  [15052] = 1,
    ACTIONS(1623), 1,
      anon_sym_COLON,
  [15056] = 1,
    ACTIONS(1625), 1,
      anon_sym_COLON,
  [15060] = 1,
    ACTIONS(1627), 1,
      anon_sym_COLON,
  [15064] = 1,
    ACTIONS(1629), 1,
      anon_sym_COLON,
  [15068] = 1,
    ACTIONS(1631), 1,
      anon_sym_COLON,
  [15072] = 1,
    ACTIONS(1633), 1,
      anon_sym_COLON,
  [15076] = 1,
    ACTIONS(1635), 1,
      anon_sym_COLON,
  [15080] = 1,
    ACTIONS(1637), 1,
      anon_sym_COLON,
  [15084] = 1,
    ACTIONS(1639), 1,
      anon_sym_COLON,
  [15088] = 1,
    ACTIONS(1641), 1,
      anon_sym_SEMI,
  [15092] = 1,
    ACTIONS(1643), 1,
      anon_sym_SEMI,
  [15096] = 1,
    ACTIONS(1645), 1,
      anon_sym_SEMI,
  [15100] = 1,
    ACTIONS(1647), 1,
      anon_sym_SEMI,
  [15104] = 1,
    ACTIONS(1649), 1,
      anon_sym_SEMI,
  [15108] = 1,
    ACTIONS(1651), 1,
      anon_sym_SEMI,
  [15112] = 1,
    ACTIONS(1653), 1,
      anon_sym_COLON_EQ,
  [15116] = 1,
    ACTIONS(1655), 1,
      anon_sym_COLON,
  [15120] = 1,
    ACTIONS(1657), 1,
      anon_sym_COLON,
  [15124] = 1,
    ACTIONS(1659), 1,
      anon_sym_COLON,
  [15128] = 1,
    ACTIONS(1661), 1,
      anon_sym_COLON,
  [15132] = 1,
    ACTIONS(1663), 1,
      anon_sym_COLON,
  [15136] = 1,
    ACTIONS(1665), 1,
      anon_sym_COLON,
  [15140] = 1,
    ACTIONS(1667), 1,
      anon_sym_COLON,
  [15144] = 1,
    ACTIONS(1669), 1,
      anon_sym_COLON,
  [15148] = 1,
    ACTIONS(1671), 1,
      anon_sym_COLON,
  [15152] = 1,
    ACTIONS(1673), 1,
      anon_sym_COLON,
  [15156] = 1,
    ACTIONS(1675), 1,
      anon_sym_COLON,
  [15160] = 1,
    ACTIONS(1677), 1,
      anon_sym_COLON,
  [15164] = 1,
    ACTIONS(1679), 1,
      anon_sym_COLON,
  [15168] = 1,
    ACTIONS(1681), 1,
      anon_sym_COLON,
  [15172] = 1,
    ACTIONS(1683), 1,
      anon_sym_COLON,
  [15176] = 1,
    ACTIONS(1685), 1,
      anon_sym_COLON,
  [15180] = 1,
    ACTIONS(1687), 1,
      anon_sym_COLON,
  [15184] = 1,
    ACTIONS(1689), 1,
      anon_sym_COLON,
  [15188] = 1,
    ACTIONS(1691), 1,
      anon_sym_COLON,
  [15192] = 1,
    ACTIONS(1693), 1,
      anon_sym_SEMI,
  [15196] = 1,
    ACTIONS(1695), 1,
      anon_sym_SEMI,
  [15200] = 1,
    ACTIONS(1697), 1,
      anon_sym_COLON,
  [15204] = 1,
    ACTIONS(1699), 1,
      anon_sym_COLON,
  [15208] = 1,
    ACTIONS(1701), 1,
      anon_sym_COLON,
  [15212] = 1,
    ACTIONS(1703), 1,
      anon_sym_COLON,
  [15216] = 1,
    ACTIONS(1705), 1,
      anon_sym_COLON,
  [15220] = 1,
    ACTIONS(1707), 1,
      anon_sym_COLON,
  [15224] = 1,
    ACTIONS(1709), 1,
      anon_sym_COLON,
  [15228] = 1,
    ACTIONS(1711), 1,
      anon_sym_COLON,
  [15232] = 1,
    ACTIONS(1713), 1,
      anon_sym_COLON,
  [15236] = 1,
    ACTIONS(1715), 1,
      anon_sym_COLON,
  [15240] = 1,
    ACTIONS(1717), 1,
      anon_sym_SEMI,
  [15244] = 1,
    ACTIONS(1719), 1,
      anon_sym_COLON,
  [15248] = 1,
    ACTIONS(1721), 1,
      anon_sym_COLON,
  [15252] = 1,
    ACTIONS(1723), 1,
      anon_sym_COLON,
  [15256] = 1,
    ACTIONS(1725), 1,
      anon_sym_COLON,
  [15260] = 1,
    ACTIONS(1727), 1,
      anon_sym_COLON,
  [15264] = 1,
    ACTIONS(1729), 1,
      anon_sym_COLON,
  [15268] = 1,
    ACTIONS(1731), 1,
      anon_sym_COLON,
  [15272] = 1,
    ACTIONS(1733), 1,
      anon_sym_COLON,
  [15276] = 1,
    ACTIONS(1735), 1,
      anon_sym_LPAREN,
  [15280] = 1,
    ACTIONS(1281), 1,
      anon_sym_SEMI,
  [15284] = 1,
    ACTIONS(1737), 1,
      sym_identifier,
  [15288] = 1,
    ACTIONS(1739), 1,
      anon_sym_fn,
  [15292] = 1,
    ACTIONS(1741), 1,
      sym_identifier,
  [15296] = 1,
    ACTIONS(1743), 1,
      sym_bin_digits,
  [15300] = 1,
    ACTIONS(1743), 1,
      sym_hex_digits,
  [15304] = 1,
    ACTIONS(1745), 1,
      anon_sym_LPAREN,
  [15308] = 1,
    ACTIONS(1747), 1,
      anon_sym_LPAREN,
  [15312] = 1,
    ACTIONS(1749), 1,
      sym_digits,
  [15316] = 1,
    ACTIONS(1751), 1,
      anon_sym_super,
  [15320] = 1,
    ACTIONS(1753), 1,
      sym_identifier,
  [15324] = 1,
    ACTIONS(1755), 1,
      sym_identifier,
  [15328] = 1,
    ACTIONS(1757), 1,
      anon_sym_LPAREN,
  [15332] = 1,
    ACTIONS(1759), 1,
      anon_sym_LPAREN,
  [15336] = 1,
    ACTIONS(1761), 1,
      anon_sym_LPAREN,
  [15340] = 1,
    ACTIONS(1763), 1,
      sym_identifier,
  [15344] = 1,
    ACTIONS(1765), 1,
      anon_sym_LPAREN,
  [15348] = 1,
    ACTIONS(1767), 1,
      anon_sym_COLON,
  [15352] = 1,
    ACTIONS(1769), 1,
      sym_bin_digits,
  [15356] = 1,
    ACTIONS(1771), 1,
      sym_hex_digits,
  [15360] = 1,
    ACTIONS(1773), 1,
      sym_identifier,
  [15364] = 1,
    ACTIONS(1775), 1,
      anon_sym_fn,
  [15368] = 1,
    ACTIONS(1777), 1,
      sym_identifier,
  [15372] = 1,
    ACTIONS(1779), 1,
      sym_identifier,
  [15376] = 1,
    ACTIONS(1781), 1,
      anon_sym_LPAREN,
  [15380] = 1,
    ACTIONS(1783), 1,
      sym_identifier,
  [15384] = 1,
    ACTIONS(1435), 1,
      anon_sym_fn,
  [15388] = 1,
    ACTIONS(1785), 1,
      anon_sym_LPAREN,
  [15392] = 1,
    ACTIONS(1787), 1,
      anon_sym_LPAREN,
  [15396] = 1,
    ACTIONS(1789), 1,
      anon_sym_RPAREN,
  [15400] = 1,
    ACTIONS(1791), 1,
      anon_sym_fn,
  [15404] = 1,
    ACTIONS(1793), 1,
      sym_identifier,
  [15408] = 1,
    ACTIONS(1795), 1,
      sym_identifier,
  [15412] = 1,
    ACTIONS(1797), 1,
      sym_identifier,
  [15416] = 1,
    ACTIONS(1799), 1,
      anon_sym_fn,
  [15420] = 1,
    ACTIONS(1801), 1,
      sym_identifier,
  [15424] = 1,
    ACTIONS(1803), 1,
      anon_sym_fn,
  [15428] = 1,
    ACTIONS(1805), 1,
      sym_identifier,
  [15432] = 1,
    ACTIONS(1807), 1,
      sym_identifier,
  [15436] = 1,
    ACTIONS(1809), 1,
      anon_sym_LPAREN,
  [15440] = 1,
    ACTIONS(1811), 1,
      anon_sym_RBRACK,
  [15444] = 1,
    ACTIONS(1813), 1,
      anon_sym_RBRACK,
  [15448] = 1,
    ACTIONS(1815), 1,
      sym_identifier,
  [15452] = 1,
    ACTIONS(1817), 1,
      anon_sym_fn,
  [15456] = 1,
    ACTIONS(1819), 1,
      ts_builtin_sym_end,
  [15460] = 1,
    ACTIONS(1821), 1,
      anon_sym_fn,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 105,
  [SMALL_STATE(6)] = 137,
  [SMALL_STATE(7)] = 169,
  [SMALL_STATE(8)] = 212,
  [SMALL_STATE(9)] = 257,
  [SMALL_STATE(10)] = 302,
  [SMALL_STATE(11)] = 343,
  [SMALL_STATE(12)] = 384,
  [SMALL_STATE(13)] = 425,
  [SMALL_STATE(14)] = 466,
  [SMALL_STATE(15)] = 507,
  [SMALL_STATE(16)] = 548,
  [SMALL_STATE(17)] = 589,
  [SMALL_STATE(18)] = 630,
  [SMALL_STATE(19)] = 672,
  [SMALL_STATE(20)] = 714,
  [SMALL_STATE(21)] = 752,
  [SMALL_STATE(22)] = 794,
  [SMALL_STATE(23)] = 832,
  [SMALL_STATE(24)] = 874,
  [SMALL_STATE(25)] = 912,
  [SMALL_STATE(26)] = 950,
  [SMALL_STATE(27)] = 992,
  [SMALL_STATE(28)] = 1030,
  [SMALL_STATE(29)] = 1068,
  [SMALL_STATE(30)] = 1110,
  [SMALL_STATE(31)] = 1148,
  [SMALL_STATE(32)] = 1186,
  [SMALL_STATE(33)] = 1224,
  [SMALL_STATE(34)] = 1262,
  [SMALL_STATE(35)] = 1300,
  [SMALL_STATE(36)] = 1338,
  [SMALL_STATE(37)] = 1376,
  [SMALL_STATE(38)] = 1414,
  [SMALL_STATE(39)] = 1452,
  [SMALL_STATE(40)] = 1490,
  [SMALL_STATE(41)] = 1528,
  [SMALL_STATE(42)] = 1570,
  [SMALL_STATE(43)] = 1612,
  [SMALL_STATE(44)] = 1650,
  [SMALL_STATE(45)] = 1692,
  [SMALL_STATE(46)] = 1730,
  [SMALL_STATE(47)] = 1768,
  [SMALL_STATE(48)] = 1806,
  [SMALL_STATE(49)] = 1844,
  [SMALL_STATE(50)] = 1882,
  [SMALL_STATE(51)] = 1920,
  [SMALL_STATE(52)] = 1962,
  [SMALL_STATE(53)] = 2004,
  [SMALL_STATE(54)] = 2046,
  [SMALL_STATE(55)] = 2088,
  [SMALL_STATE(56)] = 2126,
  [SMALL_STATE(57)] = 2164,
  [SMALL_STATE(58)] = 2202,
  [SMALL_STATE(59)] = 2244,
  [SMALL_STATE(60)] = 2282,
  [SMALL_STATE(61)] = 2320,
  [SMALL_STATE(62)] = 2358,
  [SMALL_STATE(63)] = 2400,
  [SMALL_STATE(64)] = 2438,
  [SMALL_STATE(65)] = 2476,
  [SMALL_STATE(66)] = 2518,
  [SMALL_STATE(67)] = 2560,
  [SMALL_STATE(68)] = 2600,
  [SMALL_STATE(69)] = 2642,
  [SMALL_STATE(70)] = 2680,
  [SMALL_STATE(71)] = 2718,
  [SMALL_STATE(72)] = 2760,
  [SMALL_STATE(73)] = 2798,
  [SMALL_STATE(74)] = 2840,
  [SMALL_STATE(75)] = 2878,
  [SMALL_STATE(76)] = 2916,
  [SMALL_STATE(77)] = 2954,
  [SMALL_STATE(78)] = 2996,
  [SMALL_STATE(79)] = 3038,
  [SMALL_STATE(80)] = 3076,
  [SMALL_STATE(81)] = 3114,
  [SMALL_STATE(82)] = 3149,
  [SMALL_STATE(83)] = 3184,
  [SMALL_STATE(84)] = 3219,
  [SMALL_STATE(85)] = 3254,
  [SMALL_STATE(86)] = 3286,
  [SMALL_STATE(87)] = 3318,
  [SMALL_STATE(88)] = 3334,
  [SMALL_STATE(89)] = 3350,
  [SMALL_STATE(90)] = 3382,
  [SMALL_STATE(91)] = 3398,
  [SMALL_STATE(92)] = 3414,
  [SMALL_STATE(93)] = 3446,
  [SMALL_STATE(94)] = 3462,
  [SMALL_STATE(95)] = 3494,
  [SMALL_STATE(96)] = 3528,
  [SMALL_STATE(97)] = 3562,
  [SMALL_STATE(98)] = 3596,
  [SMALL_STATE(99)] = 3631,
  [SMALL_STATE(100)] = 3666,
  [SMALL_STATE(101)] = 3701,
  [SMALL_STATE(102)] = 3736,
  [SMALL_STATE(103)] = 3771,
  [SMALL_STATE(104)] = 3800,
  [SMALL_STATE(105)] = 3835,
  [SMALL_STATE(106)] = 3870,
  [SMALL_STATE(107)] = 3905,
  [SMALL_STATE(108)] = 3940,
  [SMALL_STATE(109)] = 3969,
  [SMALL_STATE(110)] = 4004,
  [SMALL_STATE(111)] = 4033,
  [SMALL_STATE(112)] = 4062,
  [SMALL_STATE(113)] = 4097,
  [SMALL_STATE(114)] = 4132,
  [SMALL_STATE(115)] = 4167,
  [SMALL_STATE(116)] = 4202,
  [SMALL_STATE(117)] = 4231,
  [SMALL_STATE(118)] = 4266,
  [SMALL_STATE(119)] = 4301,
  [SMALL_STATE(120)] = 4336,
  [SMALL_STATE(121)] = 4371,
  [SMALL_STATE(122)] = 4400,
  [SMALL_STATE(123)] = 4435,
  [SMALL_STATE(124)] = 4470,
  [SMALL_STATE(125)] = 4505,
  [SMALL_STATE(126)] = 4540,
  [SMALL_STATE(127)] = 4575,
  [SMALL_STATE(128)] = 4590,
  [SMALL_STATE(129)] = 4625,
  [SMALL_STATE(130)] = 4660,
  [SMALL_STATE(131)] = 4695,
  [SMALL_STATE(132)] = 4730,
  [SMALL_STATE(133)] = 4759,
  [SMALL_STATE(134)] = 4794,
  [SMALL_STATE(135)] = 4829,
  [SMALL_STATE(136)] = 4864,
  [SMALL_STATE(137)] = 4899,
  [SMALL_STATE(138)] = 4934,
  [SMALL_STATE(139)] = 4963,
  [SMALL_STATE(140)] = 4992,
  [SMALL_STATE(141)] = 5021,
  [SMALL_STATE(142)] = 5056,
  [SMALL_STATE(143)] = 5071,
  [SMALL_STATE(144)] = 5106,
  [SMALL_STATE(145)] = 5135,
  [SMALL_STATE(146)] = 5164,
  [SMALL_STATE(147)] = 5193,
  [SMALL_STATE(148)] = 5208,
  [SMALL_STATE(149)] = 5243,
  [SMALL_STATE(150)] = 5278,
  [SMALL_STATE(151)] = 5307,
  [SMALL_STATE(152)] = 5336,
  [SMALL_STATE(153)] = 5365,
  [SMALL_STATE(154)] = 5400,
  [SMALL_STATE(155)] = 5429,
  [SMALL_STATE(156)] = 5458,
  [SMALL_STATE(157)] = 5473,
  [SMALL_STATE(158)] = 5502,
  [SMALL_STATE(159)] = 5531,
  [SMALL_STATE(160)] = 5560,
  [SMALL_STATE(161)] = 5595,
  [SMALL_STATE(162)] = 5630,
  [SMALL_STATE(163)] = 5665,
  [SMALL_STATE(164)] = 5694,
  [SMALL_STATE(165)] = 5729,
  [SMALL_STATE(166)] = 5764,
  [SMALL_STATE(167)] = 5793,
  [SMALL_STATE(168)] = 5828,
  [SMALL_STATE(169)] = 5863,
  [SMALL_STATE(170)] = 5892,
  [SMALL_STATE(171)] = 5921,
  [SMALL_STATE(172)] = 5956,
  [SMALL_STATE(173)] = 5991,
  [SMALL_STATE(174)] = 6020,
  [SMALL_STATE(175)] = 6055,
  [SMALL_STATE(176)] = 6090,
  [SMALL_STATE(177)] = 6125,
  [SMALL_STATE(178)] = 6154,
  [SMALL_STATE(179)] = 6183,
  [SMALL_STATE(180)] = 6212,
  [SMALL_STATE(181)] = 6227,
  [SMALL_STATE(182)] = 6262,
  [SMALL_STATE(183)] = 6277,
  [SMALL_STATE(184)] = 6312,
  [SMALL_STATE(185)] = 6347,
  [SMALL_STATE(186)] = 6382,
  [SMALL_STATE(187)] = 6417,
  [SMALL_STATE(188)] = 6452,
  [SMALL_STATE(189)] = 6487,
  [SMALL_STATE(190)] = 6516,
  [SMALL_STATE(191)] = 6551,
  [SMALL_STATE(192)] = 6586,
  [SMALL_STATE(193)] = 6615,
  [SMALL_STATE(194)] = 6650,
  [SMALL_STATE(195)] = 6685,
  [SMALL_STATE(196)] = 6720,
  [SMALL_STATE(197)] = 6755,
  [SMALL_STATE(198)] = 6790,
  [SMALL_STATE(199)] = 6825,
  [SMALL_STATE(200)] = 6860,
  [SMALL_STATE(201)] = 6889,
  [SMALL_STATE(202)] = 6918,
  [SMALL_STATE(203)] = 6947,
  [SMALL_STATE(204)] = 6982,
  [SMALL_STATE(205)] = 7017,
  [SMALL_STATE(206)] = 7032,
  [SMALL_STATE(207)] = 7061,
  [SMALL_STATE(208)] = 7090,
  [SMALL_STATE(209)] = 7105,
  [SMALL_STATE(210)] = 7140,
  [SMALL_STATE(211)] = 7169,
  [SMALL_STATE(212)] = 7204,
  [SMALL_STATE(213)] = 7219,
  [SMALL_STATE(214)] = 7254,
  [SMALL_STATE(215)] = 7283,
  [SMALL_STATE(216)] = 7312,
  [SMALL_STATE(217)] = 7341,
  [SMALL_STATE(218)] = 7370,
  [SMALL_STATE(219)] = 7405,
  [SMALL_STATE(220)] = 7440,
  [SMALL_STATE(221)] = 7469,
  [SMALL_STATE(222)] = 7498,
  [SMALL_STATE(223)] = 7533,
  [SMALL_STATE(224)] = 7568,
  [SMALL_STATE(225)] = 7603,
  [SMALL_STATE(226)] = 7638,
  [SMALL_STATE(227)] = 7667,
  [SMALL_STATE(228)] = 7696,
  [SMALL_STATE(229)] = 7725,
  [SMALL_STATE(230)] = 7754,
  [SMALL_STATE(231)] = 7789,
  [SMALL_STATE(232)] = 7818,
  [SMALL_STATE(233)] = 7853,
  [SMALL_STATE(234)] = 7882,
  [SMALL_STATE(235)] = 7917,
  [SMALL_STATE(236)] = 7952,
  [SMALL_STATE(237)] = 7981,
  [SMALL_STATE(238)] = 8010,
  [SMALL_STATE(239)] = 8030,
  [SMALL_STATE(240)] = 8050,
  [SMALL_STATE(241)] = 8070,
  [SMALL_STATE(242)] = 8090,
  [SMALL_STATE(243)] = 8110,
  [SMALL_STATE(244)] = 8130,
  [SMALL_STATE(245)] = 8150,
  [SMALL_STATE(246)] = 8170,
  [SMALL_STATE(247)] = 8186,
  [SMALL_STATE(248)] = 8206,
  [SMALL_STATE(249)] = 8226,
  [SMALL_STATE(250)] = 8246,
  [SMALL_STATE(251)] = 8266,
  [SMALL_STATE(252)] = 8282,
  [SMALL_STATE(253)] = 8297,
  [SMALL_STATE(254)] = 8312,
  [SMALL_STATE(255)] = 8329,
  [SMALL_STATE(256)] = 8346,
  [SMALL_STATE(257)] = 8363,
  [SMALL_STATE(258)] = 8389,
  [SMALL_STATE(259)] = 8405,
  [SMALL_STATE(260)] = 8416,
  [SMALL_STATE(261)] = 8426,
  [SMALL_STATE(262)] = 8436,
  [SMALL_STATE(263)] = 8446,
  [SMALL_STATE(264)] = 8456,
  [SMALL_STATE(265)] = 8466,
  [SMALL_STATE(266)] = 8476,
  [SMALL_STATE(267)] = 8486,
  [SMALL_STATE(268)] = 8496,
  [SMALL_STATE(269)] = 8506,
  [SMALL_STATE(270)] = 8516,
  [SMALL_STATE(271)] = 8526,
  [SMALL_STATE(272)] = 8536,
  [SMALL_STATE(273)] = 8546,
  [SMALL_STATE(274)] = 8556,
  [SMALL_STATE(275)] = 8566,
  [SMALL_STATE(276)] = 8576,
  [SMALL_STATE(277)] = 8586,
  [SMALL_STATE(278)] = 8596,
  [SMALL_STATE(279)] = 8606,
  [SMALL_STATE(280)] = 8616,
  [SMALL_STATE(281)] = 8626,
  [SMALL_STATE(282)] = 8636,
  [SMALL_STATE(283)] = 8646,
  [SMALL_STATE(284)] = 8656,
  [SMALL_STATE(285)] = 8666,
  [SMALL_STATE(286)] = 8676,
  [SMALL_STATE(287)] = 8686,
  [SMALL_STATE(288)] = 8696,
  [SMALL_STATE(289)] = 8706,
  [SMALL_STATE(290)] = 8716,
  [SMALL_STATE(291)] = 8726,
  [SMALL_STATE(292)] = 8736,
  [SMALL_STATE(293)] = 8746,
  [SMALL_STATE(294)] = 8756,
  [SMALL_STATE(295)] = 8766,
  [SMALL_STATE(296)] = 8786,
  [SMALL_STATE(297)] = 8796,
  [SMALL_STATE(298)] = 8806,
  [SMALL_STATE(299)] = 8816,
  [SMALL_STATE(300)] = 8826,
  [SMALL_STATE(301)] = 8836,
  [SMALL_STATE(302)] = 8846,
  [SMALL_STATE(303)] = 8856,
  [SMALL_STATE(304)] = 8866,
  [SMALL_STATE(305)] = 8876,
  [SMALL_STATE(306)] = 8886,
  [SMALL_STATE(307)] = 8896,
  [SMALL_STATE(308)] = 8906,
  [SMALL_STATE(309)] = 8916,
  [SMALL_STATE(310)] = 8926,
  [SMALL_STATE(311)] = 8936,
  [SMALL_STATE(312)] = 8946,
  [SMALL_STATE(313)] = 8956,
  [SMALL_STATE(314)] = 8966,
  [SMALL_STATE(315)] = 8976,
  [SMALL_STATE(316)] = 8986,
  [SMALL_STATE(317)] = 8996,
  [SMALL_STATE(318)] = 9006,
  [SMALL_STATE(319)] = 9016,
  [SMALL_STATE(320)] = 9026,
  [SMALL_STATE(321)] = 9036,
  [SMALL_STATE(322)] = 9046,
  [SMALL_STATE(323)] = 9056,
  [SMALL_STATE(324)] = 9066,
  [SMALL_STATE(325)] = 9076,
  [SMALL_STATE(326)] = 9086,
  [SMALL_STATE(327)] = 9096,
  [SMALL_STATE(328)] = 9106,
  [SMALL_STATE(329)] = 9116,
  [SMALL_STATE(330)] = 9126,
  [SMALL_STATE(331)] = 9136,
  [SMALL_STATE(332)] = 9146,
  [SMALL_STATE(333)] = 9156,
  [SMALL_STATE(334)] = 9166,
  [SMALL_STATE(335)] = 9176,
  [SMALL_STATE(336)] = 9186,
  [SMALL_STATE(337)] = 9196,
  [SMALL_STATE(338)] = 9206,
  [SMALL_STATE(339)] = 9216,
  [SMALL_STATE(340)] = 9226,
  [SMALL_STATE(341)] = 9236,
  [SMALL_STATE(342)] = 9246,
  [SMALL_STATE(343)] = 9256,
  [SMALL_STATE(344)] = 9266,
  [SMALL_STATE(345)] = 9276,
  [SMALL_STATE(346)] = 9286,
  [SMALL_STATE(347)] = 9296,
  [SMALL_STATE(348)] = 9306,
  [SMALL_STATE(349)] = 9316,
  [SMALL_STATE(350)] = 9326,
  [SMALL_STATE(351)] = 9336,
  [SMALL_STATE(352)] = 9346,
  [SMALL_STATE(353)] = 9356,
  [SMALL_STATE(354)] = 9366,
  [SMALL_STATE(355)] = 9376,
  [SMALL_STATE(356)] = 9386,
  [SMALL_STATE(357)] = 9396,
  [SMALL_STATE(358)] = 9406,
  [SMALL_STATE(359)] = 9416,
  [SMALL_STATE(360)] = 9426,
  [SMALL_STATE(361)] = 9436,
  [SMALL_STATE(362)] = 9446,
  [SMALL_STATE(363)] = 9456,
  [SMALL_STATE(364)] = 9466,
  [SMALL_STATE(365)] = 9476,
  [SMALL_STATE(366)] = 9486,
  [SMALL_STATE(367)] = 9496,
  [SMALL_STATE(368)] = 9506,
  [SMALL_STATE(369)] = 9516,
  [SMALL_STATE(370)] = 9526,
  [SMALL_STATE(371)] = 9536,
  [SMALL_STATE(372)] = 9546,
  [SMALL_STATE(373)] = 9556,
  [SMALL_STATE(374)] = 9566,
  [SMALL_STATE(375)] = 9576,
  [SMALL_STATE(376)] = 9586,
  [SMALL_STATE(377)] = 9596,
  [SMALL_STATE(378)] = 9606,
  [SMALL_STATE(379)] = 9616,
  [SMALL_STATE(380)] = 9626,
  [SMALL_STATE(381)] = 9636,
  [SMALL_STATE(382)] = 9646,
  [SMALL_STATE(383)] = 9656,
  [SMALL_STATE(384)] = 9666,
  [SMALL_STATE(385)] = 9676,
  [SMALL_STATE(386)] = 9686,
  [SMALL_STATE(387)] = 9696,
  [SMALL_STATE(388)] = 9706,
  [SMALL_STATE(389)] = 9716,
  [SMALL_STATE(390)] = 9726,
  [SMALL_STATE(391)] = 9736,
  [SMALL_STATE(392)] = 9746,
  [SMALL_STATE(393)] = 9756,
  [SMALL_STATE(394)] = 9766,
  [SMALL_STATE(395)] = 9776,
  [SMALL_STATE(396)] = 9786,
  [SMALL_STATE(397)] = 9796,
  [SMALL_STATE(398)] = 9806,
  [SMALL_STATE(399)] = 9816,
  [SMALL_STATE(400)] = 9826,
  [SMALL_STATE(401)] = 9836,
  [SMALL_STATE(402)] = 9846,
  [SMALL_STATE(403)] = 9856,
  [SMALL_STATE(404)] = 9866,
  [SMALL_STATE(405)] = 9876,
  [SMALL_STATE(406)] = 9886,
  [SMALL_STATE(407)] = 9896,
  [SMALL_STATE(408)] = 9906,
  [SMALL_STATE(409)] = 9916,
  [SMALL_STATE(410)] = 9926,
  [SMALL_STATE(411)] = 9936,
  [SMALL_STATE(412)] = 9946,
  [SMALL_STATE(413)] = 9956,
  [SMALL_STATE(414)] = 9966,
  [SMALL_STATE(415)] = 9976,
  [SMALL_STATE(416)] = 9986,
  [SMALL_STATE(417)] = 9996,
  [SMALL_STATE(418)] = 10006,
  [SMALL_STATE(419)] = 10016,
  [SMALL_STATE(420)] = 10026,
  [SMALL_STATE(421)] = 10036,
  [SMALL_STATE(422)] = 10046,
  [SMALL_STATE(423)] = 10056,
  [SMALL_STATE(424)] = 10066,
  [SMALL_STATE(425)] = 10076,
  [SMALL_STATE(426)] = 10086,
  [SMALL_STATE(427)] = 10096,
  [SMALL_STATE(428)] = 10106,
  [SMALL_STATE(429)] = 10116,
  [SMALL_STATE(430)] = 10126,
  [SMALL_STATE(431)] = 10136,
  [SMALL_STATE(432)] = 10146,
  [SMALL_STATE(433)] = 10156,
  [SMALL_STATE(434)] = 10166,
  [SMALL_STATE(435)] = 10176,
  [SMALL_STATE(436)] = 10186,
  [SMALL_STATE(437)] = 10196,
  [SMALL_STATE(438)] = 10206,
  [SMALL_STATE(439)] = 10216,
  [SMALL_STATE(440)] = 10226,
  [SMALL_STATE(441)] = 10236,
  [SMALL_STATE(442)] = 10246,
  [SMALL_STATE(443)] = 10256,
  [SMALL_STATE(444)] = 10266,
  [SMALL_STATE(445)] = 10276,
  [SMALL_STATE(446)] = 10286,
  [SMALL_STATE(447)] = 10296,
  [SMALL_STATE(448)] = 10306,
  [SMALL_STATE(449)] = 10316,
  [SMALL_STATE(450)] = 10326,
  [SMALL_STATE(451)] = 10336,
  [SMALL_STATE(452)] = 10346,
  [SMALL_STATE(453)] = 10356,
  [SMALL_STATE(454)] = 10366,
  [SMALL_STATE(455)] = 10376,
  [SMALL_STATE(456)] = 10386,
  [SMALL_STATE(457)] = 10396,
  [SMALL_STATE(458)] = 10406,
  [SMALL_STATE(459)] = 10416,
  [SMALL_STATE(460)] = 10426,
  [SMALL_STATE(461)] = 10436,
  [SMALL_STATE(462)] = 10446,
  [SMALL_STATE(463)] = 10456,
  [SMALL_STATE(464)] = 10466,
  [SMALL_STATE(465)] = 10476,
  [SMALL_STATE(466)] = 10486,
  [SMALL_STATE(467)] = 10496,
  [SMALL_STATE(468)] = 10506,
  [SMALL_STATE(469)] = 10516,
  [SMALL_STATE(470)] = 10526,
  [SMALL_STATE(471)] = 10536,
  [SMALL_STATE(472)] = 10546,
  [SMALL_STATE(473)] = 10556,
  [SMALL_STATE(474)] = 10566,
  [SMALL_STATE(475)] = 10576,
  [SMALL_STATE(476)] = 10586,
  [SMALL_STATE(477)] = 10596,
  [SMALL_STATE(478)] = 10606,
  [SMALL_STATE(479)] = 10616,
  [SMALL_STATE(480)] = 10626,
  [SMALL_STATE(481)] = 10636,
  [SMALL_STATE(482)] = 10646,
  [SMALL_STATE(483)] = 10656,
  [SMALL_STATE(484)] = 10666,
  [SMALL_STATE(485)] = 10676,
  [SMALL_STATE(486)] = 10686,
  [SMALL_STATE(487)] = 10696,
  [SMALL_STATE(488)] = 10706,
  [SMALL_STATE(489)] = 10716,
  [SMALL_STATE(490)] = 10726,
  [SMALL_STATE(491)] = 10736,
  [SMALL_STATE(492)] = 10746,
  [SMALL_STATE(493)] = 10756,
  [SMALL_STATE(494)] = 10766,
  [SMALL_STATE(495)] = 10776,
  [SMALL_STATE(496)] = 10786,
  [SMALL_STATE(497)] = 10796,
  [SMALL_STATE(498)] = 10806,
  [SMALL_STATE(499)] = 10816,
  [SMALL_STATE(500)] = 10826,
  [SMALL_STATE(501)] = 10836,
  [SMALL_STATE(502)] = 10846,
  [SMALL_STATE(503)] = 10856,
  [SMALL_STATE(504)] = 10866,
  [SMALL_STATE(505)] = 10876,
  [SMALL_STATE(506)] = 10886,
  [SMALL_STATE(507)] = 10906,
  [SMALL_STATE(508)] = 10916,
  [SMALL_STATE(509)] = 10926,
  [SMALL_STATE(510)] = 10936,
  [SMALL_STATE(511)] = 10946,
  [SMALL_STATE(512)] = 10956,
  [SMALL_STATE(513)] = 10966,
  [SMALL_STATE(514)] = 10976,
  [SMALL_STATE(515)] = 10986,
  [SMALL_STATE(516)] = 10996,
  [SMALL_STATE(517)] = 11006,
  [SMALL_STATE(518)] = 11016,
  [SMALL_STATE(519)] = 11026,
  [SMALL_STATE(520)] = 11036,
  [SMALL_STATE(521)] = 11046,
  [SMALL_STATE(522)] = 11056,
  [SMALL_STATE(523)] = 11066,
  [SMALL_STATE(524)] = 11076,
  [SMALL_STATE(525)] = 11086,
  [SMALL_STATE(526)] = 11096,
  [SMALL_STATE(527)] = 11106,
  [SMALL_STATE(528)] = 11116,
  [SMALL_STATE(529)] = 11126,
  [SMALL_STATE(530)] = 11136,
  [SMALL_STATE(531)] = 11146,
  [SMALL_STATE(532)] = 11156,
  [SMALL_STATE(533)] = 11170,
  [SMALL_STATE(534)] = 11180,
  [SMALL_STATE(535)] = 11190,
  [SMALL_STATE(536)] = 11200,
  [SMALL_STATE(537)] = 11210,
  [SMALL_STATE(538)] = 11220,
  [SMALL_STATE(539)] = 11230,
  [SMALL_STATE(540)] = 11240,
  [SMALL_STATE(541)] = 11250,
  [SMALL_STATE(542)] = 11260,
  [SMALL_STATE(543)] = 11270,
  [SMALL_STATE(544)] = 11280,
  [SMALL_STATE(545)] = 11290,
  [SMALL_STATE(546)] = 11300,
  [SMALL_STATE(547)] = 11310,
  [SMALL_STATE(548)] = 11320,
  [SMALL_STATE(549)] = 11330,
  [SMALL_STATE(550)] = 11340,
  [SMALL_STATE(551)] = 11350,
  [SMALL_STATE(552)] = 11360,
  [SMALL_STATE(553)] = 11370,
  [SMALL_STATE(554)] = 11380,
  [SMALL_STATE(555)] = 11390,
  [SMALL_STATE(556)] = 11400,
  [SMALL_STATE(557)] = 11410,
  [SMALL_STATE(558)] = 11420,
  [SMALL_STATE(559)] = 11430,
  [SMALL_STATE(560)] = 11440,
  [SMALL_STATE(561)] = 11450,
  [SMALL_STATE(562)] = 11460,
  [SMALL_STATE(563)] = 11470,
  [SMALL_STATE(564)] = 11480,
  [SMALL_STATE(565)] = 11490,
  [SMALL_STATE(566)] = 11500,
  [SMALL_STATE(567)] = 11510,
  [SMALL_STATE(568)] = 11520,
  [SMALL_STATE(569)] = 11530,
  [SMALL_STATE(570)] = 11540,
  [SMALL_STATE(571)] = 11550,
  [SMALL_STATE(572)] = 11560,
  [SMALL_STATE(573)] = 11570,
  [SMALL_STATE(574)] = 11580,
  [SMALL_STATE(575)] = 11590,
  [SMALL_STATE(576)] = 11600,
  [SMALL_STATE(577)] = 11610,
  [SMALL_STATE(578)] = 11620,
  [SMALL_STATE(579)] = 11630,
  [SMALL_STATE(580)] = 11640,
  [SMALL_STATE(581)] = 11650,
  [SMALL_STATE(582)] = 11660,
  [SMALL_STATE(583)] = 11670,
  [SMALL_STATE(584)] = 11680,
  [SMALL_STATE(585)] = 11690,
  [SMALL_STATE(586)] = 11700,
  [SMALL_STATE(587)] = 11710,
  [SMALL_STATE(588)] = 11720,
  [SMALL_STATE(589)] = 11730,
  [SMALL_STATE(590)] = 11740,
  [SMALL_STATE(591)] = 11750,
  [SMALL_STATE(592)] = 11760,
  [SMALL_STATE(593)] = 11770,
  [SMALL_STATE(594)] = 11780,
  [SMALL_STATE(595)] = 11790,
  [SMALL_STATE(596)] = 11800,
  [SMALL_STATE(597)] = 11810,
  [SMALL_STATE(598)] = 11820,
  [SMALL_STATE(599)] = 11830,
  [SMALL_STATE(600)] = 11840,
  [SMALL_STATE(601)] = 11850,
  [SMALL_STATE(602)] = 11860,
  [SMALL_STATE(603)] = 11870,
  [SMALL_STATE(604)] = 11880,
  [SMALL_STATE(605)] = 11890,
  [SMALL_STATE(606)] = 11900,
  [SMALL_STATE(607)] = 11910,
  [SMALL_STATE(608)] = 11920,
  [SMALL_STATE(609)] = 11930,
  [SMALL_STATE(610)] = 11940,
  [SMALL_STATE(611)] = 11950,
  [SMALL_STATE(612)] = 11960,
  [SMALL_STATE(613)] = 11970,
  [SMALL_STATE(614)] = 11980,
  [SMALL_STATE(615)] = 11990,
  [SMALL_STATE(616)] = 12000,
  [SMALL_STATE(617)] = 12010,
  [SMALL_STATE(618)] = 12020,
  [SMALL_STATE(619)] = 12030,
  [SMALL_STATE(620)] = 12040,
  [SMALL_STATE(621)] = 12050,
  [SMALL_STATE(622)] = 12060,
  [SMALL_STATE(623)] = 12070,
  [SMALL_STATE(624)] = 12080,
  [SMALL_STATE(625)] = 12090,
  [SMALL_STATE(626)] = 12100,
  [SMALL_STATE(627)] = 12110,
  [SMALL_STATE(628)] = 12120,
  [SMALL_STATE(629)] = 12130,
  [SMALL_STATE(630)] = 12140,
  [SMALL_STATE(631)] = 12150,
  [SMALL_STATE(632)] = 12160,
  [SMALL_STATE(633)] = 12170,
  [SMALL_STATE(634)] = 12180,
  [SMALL_STATE(635)] = 12190,
  [SMALL_STATE(636)] = 12200,
  [SMALL_STATE(637)] = 12210,
  [SMALL_STATE(638)] = 12220,
  [SMALL_STATE(639)] = 12230,
  [SMALL_STATE(640)] = 12240,
  [SMALL_STATE(641)] = 12250,
  [SMALL_STATE(642)] = 12260,
  [SMALL_STATE(643)] = 12270,
  [SMALL_STATE(644)] = 12280,
  [SMALL_STATE(645)] = 12290,
  [SMALL_STATE(646)] = 12300,
  [SMALL_STATE(647)] = 12310,
  [SMALL_STATE(648)] = 12320,
  [SMALL_STATE(649)] = 12330,
  [SMALL_STATE(650)] = 12340,
  [SMALL_STATE(651)] = 12350,
  [SMALL_STATE(652)] = 12360,
  [SMALL_STATE(653)] = 12370,
  [SMALL_STATE(654)] = 12380,
  [SMALL_STATE(655)] = 12390,
  [SMALL_STATE(656)] = 12400,
  [SMALL_STATE(657)] = 12410,
  [SMALL_STATE(658)] = 12420,
  [SMALL_STATE(659)] = 12430,
  [SMALL_STATE(660)] = 12440,
  [SMALL_STATE(661)] = 12450,
  [SMALL_STATE(662)] = 12460,
  [SMALL_STATE(663)] = 12470,
  [SMALL_STATE(664)] = 12480,
  [SMALL_STATE(665)] = 12490,
  [SMALL_STATE(666)] = 12500,
  [SMALL_STATE(667)] = 12510,
  [SMALL_STATE(668)] = 12520,
  [SMALL_STATE(669)] = 12530,
  [SMALL_STATE(670)] = 12540,
  [SMALL_STATE(671)] = 12550,
  [SMALL_STATE(672)] = 12560,
  [SMALL_STATE(673)] = 12570,
  [SMALL_STATE(674)] = 12580,
  [SMALL_STATE(675)] = 12590,
  [SMALL_STATE(676)] = 12600,
  [SMALL_STATE(677)] = 12610,
  [SMALL_STATE(678)] = 12620,
  [SMALL_STATE(679)] = 12630,
  [SMALL_STATE(680)] = 12640,
  [SMALL_STATE(681)] = 12650,
  [SMALL_STATE(682)] = 12660,
  [SMALL_STATE(683)] = 12670,
  [SMALL_STATE(684)] = 12680,
  [SMALL_STATE(685)] = 12690,
  [SMALL_STATE(686)] = 12700,
  [SMALL_STATE(687)] = 12710,
  [SMALL_STATE(688)] = 12720,
  [SMALL_STATE(689)] = 12730,
  [SMALL_STATE(690)] = 12740,
  [SMALL_STATE(691)] = 12750,
  [SMALL_STATE(692)] = 12760,
  [SMALL_STATE(693)] = 12770,
  [SMALL_STATE(694)] = 12780,
  [SMALL_STATE(695)] = 12790,
  [SMALL_STATE(696)] = 12800,
  [SMALL_STATE(697)] = 12810,
  [SMALL_STATE(698)] = 12820,
  [SMALL_STATE(699)] = 12830,
  [SMALL_STATE(700)] = 12840,
  [SMALL_STATE(701)] = 12850,
  [SMALL_STATE(702)] = 12860,
  [SMALL_STATE(703)] = 12870,
  [SMALL_STATE(704)] = 12880,
  [SMALL_STATE(705)] = 12890,
  [SMALL_STATE(706)] = 12900,
  [SMALL_STATE(707)] = 12910,
  [SMALL_STATE(708)] = 12920,
  [SMALL_STATE(709)] = 12930,
  [SMALL_STATE(710)] = 12940,
  [SMALL_STATE(711)] = 12950,
  [SMALL_STATE(712)] = 12960,
  [SMALL_STATE(713)] = 12970,
  [SMALL_STATE(714)] = 12980,
  [SMALL_STATE(715)] = 12990,
  [SMALL_STATE(716)] = 12999,
  [SMALL_STATE(717)] = 13018,
  [SMALL_STATE(718)] = 13031,
  [SMALL_STATE(719)] = 13050,
  [SMALL_STATE(720)] = 13063,
  [SMALL_STATE(721)] = 13076,
  [SMALL_STATE(722)] = 13089,
  [SMALL_STATE(723)] = 13108,
  [SMALL_STATE(724)] = 13121,
  [SMALL_STATE(725)] = 13140,
  [SMALL_STATE(726)] = 13159,
  [SMALL_STATE(727)] = 13172,
  [SMALL_STATE(728)] = 13182,
  [SMALL_STATE(729)] = 13192,
  [SMALL_STATE(730)] = 13206,
  [SMALL_STATE(731)] = 13216,
  [SMALL_STATE(732)] = 13226,
  [SMALL_STATE(733)] = 13236,
  [SMALL_STATE(734)] = 13246,
  [SMALL_STATE(735)] = 13256,
  [SMALL_STATE(736)] = 13266,
  [SMALL_STATE(737)] = 13276,
  [SMALL_STATE(738)] = 13286,
  [SMALL_STATE(739)] = 13296,
  [SMALL_STATE(740)] = 13306,
  [SMALL_STATE(741)] = 13318,
  [SMALL_STATE(742)] = 13328,
  [SMALL_STATE(743)] = 13338,
  [SMALL_STATE(744)] = 13348,
  [SMALL_STATE(745)] = 13358,
  [SMALL_STATE(746)] = 13368,
  [SMALL_STATE(747)] = 13382,
  [SMALL_STATE(748)] = 13392,
  [SMALL_STATE(749)] = 13402,
  [SMALL_STATE(750)] = 13412,
  [SMALL_STATE(751)] = 13422,
  [SMALL_STATE(752)] = 13432,
  [SMALL_STATE(753)] = 13442,
  [SMALL_STATE(754)] = 13449,
  [SMALL_STATE(755)] = 13459,
  [SMALL_STATE(756)] = 13465,
  [SMALL_STATE(757)] = 13475,
  [SMALL_STATE(758)] = 13485,
  [SMALL_STATE(759)] = 13495,
  [SMALL_STATE(760)] = 13505,
  [SMALL_STATE(761)] = 13511,
  [SMALL_STATE(762)] = 13517,
  [SMALL_STATE(763)] = 13523,
  [SMALL_STATE(764)] = 13529,
  [SMALL_STATE(765)] = 13535,
  [SMALL_STATE(766)] = 13545,
  [SMALL_STATE(767)] = 13555,
  [SMALL_STATE(768)] = 13565,
  [SMALL_STATE(769)] = 13575,
  [SMALL_STATE(770)] = 13585,
  [SMALL_STATE(771)] = 13595,
  [SMALL_STATE(772)] = 13605,
  [SMALL_STATE(773)] = 13611,
  [SMALL_STATE(774)] = 13621,
  [SMALL_STATE(775)] = 13627,
  [SMALL_STATE(776)] = 13637,
  [SMALL_STATE(777)] = 13647,
  [SMALL_STATE(778)] = 13653,
  [SMALL_STATE(779)] = 13663,
  [SMALL_STATE(780)] = 13673,
  [SMALL_STATE(781)] = 13679,
  [SMALL_STATE(782)] = 13685,
  [SMALL_STATE(783)] = 13695,
  [SMALL_STATE(784)] = 13701,
  [SMALL_STATE(785)] = 13707,
  [SMALL_STATE(786)] = 13717,
  [SMALL_STATE(787)] = 13727,
  [SMALL_STATE(788)] = 13737,
  [SMALL_STATE(789)] = 13747,
  [SMALL_STATE(790)] = 13757,
  [SMALL_STATE(791)] = 13763,
  [SMALL_STATE(792)] = 13773,
  [SMALL_STATE(793)] = 13783,
  [SMALL_STATE(794)] = 13793,
  [SMALL_STATE(795)] = 13803,
  [SMALL_STATE(796)] = 13813,
  [SMALL_STATE(797)] = 13823,
  [SMALL_STATE(798)] = 13833,
  [SMALL_STATE(799)] = 13843,
  [SMALL_STATE(800)] = 13853,
  [SMALL_STATE(801)] = 13863,
  [SMALL_STATE(802)] = 13873,
  [SMALL_STATE(803)] = 13879,
  [SMALL_STATE(804)] = 13885,
  [SMALL_STATE(805)] = 13895,
  [SMALL_STATE(806)] = 13905,
  [SMALL_STATE(807)] = 13915,
  [SMALL_STATE(808)] = 13921,
  [SMALL_STATE(809)] = 13927,
  [SMALL_STATE(810)] = 13933,
  [SMALL_STATE(811)] = 13939,
  [SMALL_STATE(812)] = 13945,
  [SMALL_STATE(813)] = 13951,
  [SMALL_STATE(814)] = 13961,
  [SMALL_STATE(815)] = 13971,
  [SMALL_STATE(816)] = 13981,
  [SMALL_STATE(817)] = 13987,
  [SMALL_STATE(818)] = 13993,
  [SMALL_STATE(819)] = 13999,
  [SMALL_STATE(820)] = 14005,
  [SMALL_STATE(821)] = 14015,
  [SMALL_STATE(822)] = 14025,
  [SMALL_STATE(823)] = 14035,
  [SMALL_STATE(824)] = 14045,
  [SMALL_STATE(825)] = 14055,
  [SMALL_STATE(826)] = 14065,
  [SMALL_STATE(827)] = 14075,
  [SMALL_STATE(828)] = 14085,
  [SMALL_STATE(829)] = 14095,
  [SMALL_STATE(830)] = 14105,
  [SMALL_STATE(831)] = 14115,
  [SMALL_STATE(832)] = 14125,
  [SMALL_STATE(833)] = 14135,
  [SMALL_STATE(834)] = 14145,
  [SMALL_STATE(835)] = 14151,
  [SMALL_STATE(836)] = 14161,
  [SMALL_STATE(837)] = 14167,
  [SMALL_STATE(838)] = 14177,
  [SMALL_STATE(839)] = 14187,
  [SMALL_STATE(840)] = 14193,
  [SMALL_STATE(841)] = 14203,
  [SMALL_STATE(842)] = 14209,
  [SMALL_STATE(843)] = 14215,
  [SMALL_STATE(844)] = 14221,
  [SMALL_STATE(845)] = 14227,
  [SMALL_STATE(846)] = 14237,
  [SMALL_STATE(847)] = 14243,
  [SMALL_STATE(848)] = 14253,
  [SMALL_STATE(849)] = 14259,
  [SMALL_STATE(850)] = 14265,
  [SMALL_STATE(851)] = 14275,
  [SMALL_STATE(852)] = 14281,
  [SMALL_STATE(853)] = 14291,
  [SMALL_STATE(854)] = 14301,
  [SMALL_STATE(855)] = 14307,
  [SMALL_STATE(856)] = 14317,
  [SMALL_STATE(857)] = 14323,
  [SMALL_STATE(858)] = 14333,
  [SMALL_STATE(859)] = 14343,
  [SMALL_STATE(860)] = 14353,
  [SMALL_STATE(861)] = 14363,
  [SMALL_STATE(862)] = 14373,
  [SMALL_STATE(863)] = 14380,
  [SMALL_STATE(864)] = 14387,
  [SMALL_STATE(865)] = 14394,
  [SMALL_STATE(866)] = 14401,
  [SMALL_STATE(867)] = 14408,
  [SMALL_STATE(868)] = 14415,
  [SMALL_STATE(869)] = 14422,
  [SMALL_STATE(870)] = 14429,
  [SMALL_STATE(871)] = 14436,
  [SMALL_STATE(872)] = 14443,
  [SMALL_STATE(873)] = 14450,
  [SMALL_STATE(874)] = 14455,
  [SMALL_STATE(875)] = 14462,
  [SMALL_STATE(876)] = 14469,
  [SMALL_STATE(877)] = 14476,
  [SMALL_STATE(878)] = 14483,
  [SMALL_STATE(879)] = 14490,
  [SMALL_STATE(880)] = 14495,
  [SMALL_STATE(881)] = 14502,
  [SMALL_STATE(882)] = 14509,
  [SMALL_STATE(883)] = 14516,
  [SMALL_STATE(884)] = 14523,
  [SMALL_STATE(885)] = 14530,
  [SMALL_STATE(886)] = 14537,
  [SMALL_STATE(887)] = 14544,
  [SMALL_STATE(888)] = 14551,
  [SMALL_STATE(889)] = 14558,
  [SMALL_STATE(890)] = 14565,
  [SMALL_STATE(891)] = 14572,
  [SMALL_STATE(892)] = 14579,
  [SMALL_STATE(893)] = 14586,
  [SMALL_STATE(894)] = 14593,
  [SMALL_STATE(895)] = 14600,
  [SMALL_STATE(896)] = 14607,
  [SMALL_STATE(897)] = 14614,
  [SMALL_STATE(898)] = 14621,
  [SMALL_STATE(899)] = 14628,
  [SMALL_STATE(900)] = 14633,
  [SMALL_STATE(901)] = 14640,
  [SMALL_STATE(902)] = 14647,
  [SMALL_STATE(903)] = 14654,
  [SMALL_STATE(904)] = 14661,
  [SMALL_STATE(905)] = 14668,
  [SMALL_STATE(906)] = 14675,
  [SMALL_STATE(907)] = 14682,
  [SMALL_STATE(908)] = 14687,
  [SMALL_STATE(909)] = 14692,
  [SMALL_STATE(910)] = 14699,
  [SMALL_STATE(911)] = 14704,
  [SMALL_STATE(912)] = 14711,
  [SMALL_STATE(913)] = 14718,
  [SMALL_STATE(914)] = 14723,
  [SMALL_STATE(915)] = 14728,
  [SMALL_STATE(916)] = 14735,
  [SMALL_STATE(917)] = 14742,
  [SMALL_STATE(918)] = 14749,
  [SMALL_STATE(919)] = 14756,
  [SMALL_STATE(920)] = 14763,
  [SMALL_STATE(921)] = 14770,
  [SMALL_STATE(922)] = 14777,
  [SMALL_STATE(923)] = 14784,
  [SMALL_STATE(924)] = 14791,
  [SMALL_STATE(925)] = 14798,
  [SMALL_STATE(926)] = 14805,
  [SMALL_STATE(927)] = 14812,
  [SMALL_STATE(928)] = 14819,
  [SMALL_STATE(929)] = 14824,
  [SMALL_STATE(930)] = 14828,
  [SMALL_STATE(931)] = 14832,
  [SMALL_STATE(932)] = 14836,
  [SMALL_STATE(933)] = 14840,
  [SMALL_STATE(934)] = 14844,
  [SMALL_STATE(935)] = 14848,
  [SMALL_STATE(936)] = 14852,
  [SMALL_STATE(937)] = 14856,
  [SMALL_STATE(938)] = 14860,
  [SMALL_STATE(939)] = 14864,
  [SMALL_STATE(940)] = 14868,
  [SMALL_STATE(941)] = 14872,
  [SMALL_STATE(942)] = 14876,
  [SMALL_STATE(943)] = 14880,
  [SMALL_STATE(944)] = 14884,
  [SMALL_STATE(945)] = 14888,
  [SMALL_STATE(946)] = 14892,
  [SMALL_STATE(947)] = 14896,
  [SMALL_STATE(948)] = 14900,
  [SMALL_STATE(949)] = 14904,
  [SMALL_STATE(950)] = 14908,
  [SMALL_STATE(951)] = 14912,
  [SMALL_STATE(952)] = 14916,
  [SMALL_STATE(953)] = 14920,
  [SMALL_STATE(954)] = 14924,
  [SMALL_STATE(955)] = 14928,
  [SMALL_STATE(956)] = 14932,
  [SMALL_STATE(957)] = 14936,
  [SMALL_STATE(958)] = 14940,
  [SMALL_STATE(959)] = 14944,
  [SMALL_STATE(960)] = 14948,
  [SMALL_STATE(961)] = 14952,
  [SMALL_STATE(962)] = 14956,
  [SMALL_STATE(963)] = 14960,
  [SMALL_STATE(964)] = 14964,
  [SMALL_STATE(965)] = 14968,
  [SMALL_STATE(966)] = 14972,
  [SMALL_STATE(967)] = 14976,
  [SMALL_STATE(968)] = 14980,
  [SMALL_STATE(969)] = 14984,
  [SMALL_STATE(970)] = 14988,
  [SMALL_STATE(971)] = 14992,
  [SMALL_STATE(972)] = 14996,
  [SMALL_STATE(973)] = 15000,
  [SMALL_STATE(974)] = 15004,
  [SMALL_STATE(975)] = 15008,
  [SMALL_STATE(976)] = 15012,
  [SMALL_STATE(977)] = 15016,
  [SMALL_STATE(978)] = 15020,
  [SMALL_STATE(979)] = 15024,
  [SMALL_STATE(980)] = 15028,
  [SMALL_STATE(981)] = 15032,
  [SMALL_STATE(982)] = 15036,
  [SMALL_STATE(983)] = 15040,
  [SMALL_STATE(984)] = 15044,
  [SMALL_STATE(985)] = 15048,
  [SMALL_STATE(986)] = 15052,
  [SMALL_STATE(987)] = 15056,
  [SMALL_STATE(988)] = 15060,
  [SMALL_STATE(989)] = 15064,
  [SMALL_STATE(990)] = 15068,
  [SMALL_STATE(991)] = 15072,
  [SMALL_STATE(992)] = 15076,
  [SMALL_STATE(993)] = 15080,
  [SMALL_STATE(994)] = 15084,
  [SMALL_STATE(995)] = 15088,
  [SMALL_STATE(996)] = 15092,
  [SMALL_STATE(997)] = 15096,
  [SMALL_STATE(998)] = 15100,
  [SMALL_STATE(999)] = 15104,
  [SMALL_STATE(1000)] = 15108,
  [SMALL_STATE(1001)] = 15112,
  [SMALL_STATE(1002)] = 15116,
  [SMALL_STATE(1003)] = 15120,
  [SMALL_STATE(1004)] = 15124,
  [SMALL_STATE(1005)] = 15128,
  [SMALL_STATE(1006)] = 15132,
  [SMALL_STATE(1007)] = 15136,
  [SMALL_STATE(1008)] = 15140,
  [SMALL_STATE(1009)] = 15144,
  [SMALL_STATE(1010)] = 15148,
  [SMALL_STATE(1011)] = 15152,
  [SMALL_STATE(1012)] = 15156,
  [SMALL_STATE(1013)] = 15160,
  [SMALL_STATE(1014)] = 15164,
  [SMALL_STATE(1015)] = 15168,
  [SMALL_STATE(1016)] = 15172,
  [SMALL_STATE(1017)] = 15176,
  [SMALL_STATE(1018)] = 15180,
  [SMALL_STATE(1019)] = 15184,
  [SMALL_STATE(1020)] = 15188,
  [SMALL_STATE(1021)] = 15192,
  [SMALL_STATE(1022)] = 15196,
  [SMALL_STATE(1023)] = 15200,
  [SMALL_STATE(1024)] = 15204,
  [SMALL_STATE(1025)] = 15208,
  [SMALL_STATE(1026)] = 15212,
  [SMALL_STATE(1027)] = 15216,
  [SMALL_STATE(1028)] = 15220,
  [SMALL_STATE(1029)] = 15224,
  [SMALL_STATE(1030)] = 15228,
  [SMALL_STATE(1031)] = 15232,
  [SMALL_STATE(1032)] = 15236,
  [SMALL_STATE(1033)] = 15240,
  [SMALL_STATE(1034)] = 15244,
  [SMALL_STATE(1035)] = 15248,
  [SMALL_STATE(1036)] = 15252,
  [SMALL_STATE(1037)] = 15256,
  [SMALL_STATE(1038)] = 15260,
  [SMALL_STATE(1039)] = 15264,
  [SMALL_STATE(1040)] = 15268,
  [SMALL_STATE(1041)] = 15272,
  [SMALL_STATE(1042)] = 15276,
  [SMALL_STATE(1043)] = 15280,
  [SMALL_STATE(1044)] = 15284,
  [SMALL_STATE(1045)] = 15288,
  [SMALL_STATE(1046)] = 15292,
  [SMALL_STATE(1047)] = 15296,
  [SMALL_STATE(1048)] = 15300,
  [SMALL_STATE(1049)] = 15304,
  [SMALL_STATE(1050)] = 15308,
  [SMALL_STATE(1051)] = 15312,
  [SMALL_STATE(1052)] = 15316,
  [SMALL_STATE(1053)] = 15320,
  [SMALL_STATE(1054)] = 15324,
  [SMALL_STATE(1055)] = 15328,
  [SMALL_STATE(1056)] = 15332,
  [SMALL_STATE(1057)] = 15336,
  [SMALL_STATE(1058)] = 15340,
  [SMALL_STATE(1059)] = 15344,
  [SMALL_STATE(1060)] = 15348,
  [SMALL_STATE(1061)] = 15352,
  [SMALL_STATE(1062)] = 15356,
  [SMALL_STATE(1063)] = 15360,
  [SMALL_STATE(1064)] = 15364,
  [SMALL_STATE(1065)] = 15368,
  [SMALL_STATE(1066)] = 15372,
  [SMALL_STATE(1067)] = 15376,
  [SMALL_STATE(1068)] = 15380,
  [SMALL_STATE(1069)] = 15384,
  [SMALL_STATE(1070)] = 15388,
  [SMALL_STATE(1071)] = 15392,
  [SMALL_STATE(1072)] = 15396,
  [SMALL_STATE(1073)] = 15400,
  [SMALL_STATE(1074)] = 15404,
  [SMALL_STATE(1075)] = 15408,
  [SMALL_STATE(1076)] = 15412,
  [SMALL_STATE(1077)] = 15416,
  [SMALL_STATE(1078)] = 15420,
  [SMALL_STATE(1079)] = 15424,
  [SMALL_STATE(1080)] = 15428,
  [SMALL_STATE(1081)] = 15432,
  [SMALL_STATE(1082)] = 15436,
  [SMALL_STATE(1083)] = 15440,
  [SMALL_STATE(1084)] = 15444,
  [SMALL_STATE(1085)] = 15448,
  [SMALL_STATE(1086)] = 15452,
  [SMALL_STATE(1087)] = 15456,
  [SMALL_STATE(1088)] = 15460,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1046),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1088),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 2, .production_id = 18),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1047),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1048),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 1, .production_id = 9),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1051),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 3, .production_id = 26),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 4, .production_id = 33),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(86),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(8),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(246),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(1044),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(1043),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(88),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(1062),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(1061),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(4),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1044),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1062),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1061),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1088),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(916),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(853),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1085),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(873),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(928),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(998),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(984),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1028),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1014),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(749),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(733),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1029),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(962),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1010),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1009),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1008),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1030),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1004),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1031),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1022),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(957),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(907),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1003),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1002),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1032),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1037),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1001),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(956),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(952),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1033),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(929),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1019),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1021),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(999),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(961),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(944),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1026),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(993),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(989),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(985),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1038),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1015),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(980),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1039),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(976),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1040),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(975),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(971),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1041),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(934),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(970),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(948),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1027),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(731),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(994),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(966),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(939),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(840),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(940),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(744),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(930),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(751),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1020),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 5, .production_id = 40),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 4, .production_id = 34),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 2, .production_id = 19),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 3, .production_id = 25),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat2, 2),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat2, 2), SHIFT_REPEAT(295),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat2, 2), SHIFT_REPEAT(1046),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat2, 2), SHIFT_REPEAT(1088),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat2, 2), SHIFT_REPEAT(800),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat2, 2), SHIFT_REPEAT(728),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 5, .production_id = 54),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 3, .production_id = 42),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 3, .production_id = 41),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 4, .production_id = 56),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1000),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 4, .production_id = 54),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 4, .production_id = 41),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3, .production_id = 6),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3, .production_id = 6),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1053),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat2, 2, .production_id = 22),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat2, 2, .production_id = 22),
  [597] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat2, 2, .production_id = 22), SHIFT_REPEAT(1053),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 4, .production_id = 14),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 4, .production_id = 14),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3, .production_id = 7),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3, .production_id = 7),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 4, .production_id = 16),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 4, .production_id = 16),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [616] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(1052),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 4, .production_id = 17),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 4, .production_id = 17),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 5, .production_id = 23),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 5, .production_id = 23),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 5, .production_id = 24),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 5, .production_id = 24),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(887),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(922),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 4, .production_id = 15),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 4, .production_id = 15),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat2, 2, .production_id = 4),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat2, 2, .production_id = 4),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2, .production_id = 4),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2, .production_id = 4),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1063),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1076),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, .production_id = 2),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, .production_id = 2),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1075),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1078),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [679] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(506),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 3),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 111),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 117),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, .production_id = 44),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 144),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, .production_id = 43),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 134),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, .production_id = 45),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, .production_id = 48),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 14, .production_id = 148),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, .production_id = 49),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 133),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 132),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, .production_id = 50),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 7, .production_id = 39),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, .production_id = 51),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, .production_id = 52),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, .production_id = 53),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 131),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 7, .production_id = 38),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 7, .production_id = 37),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 130),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 57),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 58),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 129),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 145),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 7, .production_id = 35),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 62),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 63),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 143),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 64),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 65),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 66),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 67),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 128),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 68),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 69),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 70),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 71),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 72),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 73),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 74),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 135),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 136),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 142),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 146),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 6, .production_id = 30),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 122),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 121),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 120),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 81),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 82),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 119),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 86),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 87),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 118),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(295),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 88),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 89),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_block, 5, .production_id = 21),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 90),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 91),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 92),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 93),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 94),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 116),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 115),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 95),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 96),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 97),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 98),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 99),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 100),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_block, 4, .production_id = 12),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_block, 4, .production_id = 10),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 101),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 138),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_block, 3),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 114),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 104),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 113),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 137),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 108),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 109),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 110),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 112),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 3),
  [859] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extern_block_repeat1, 2, .production_id = 11), SHIFT_REPEAT(1074),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extern_block_repeat1, 2, .production_id = 11),
  [864] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extern_block_repeat1, 2, .production_id = 11), SHIFT_REPEAT(728),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 6, .production_id = 103),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 6, .production_id = 103),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1074),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 6, .production_id = 76),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 6, .production_id = 76),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 4),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 4),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 5, .production_id = 76),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 5, .production_id = 76),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 1),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_type, 1),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 7, .production_id = 103),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 7, .production_id = 103),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 4),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_type, 4),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility_modifier, 1),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1080),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 6, .production_id = 78),
  [925] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_type, 6, .production_id = 78),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 7, .production_id = 124),
  [929] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 7, .production_id = 124),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 4, .production_id = 8),
  [933] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_type, 4, .production_id = 8),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 8, .production_id = 139),
  [937] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 8, .production_id = 139),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 6, .production_id = 80),
  [941] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_type, 6, .production_id = 80),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 5, .production_id = 78),
  [945] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_type, 5, .production_id = 78),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 5),
  [949] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_type, 5),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4),
  [953] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 4),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 8, .production_id = 140),
  [957] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 8, .production_id = 140),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 5, .production_id = 8),
  [961] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_type, 5, .production_id = 8),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 1),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 5, .production_id = 80),
  [971] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_type, 5, .production_id = 80),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 9, .production_id = 147),
  [975] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 9, .production_id = 147),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 5),
  [979] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 5),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1065),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3),
  [985] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 3),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 6, .production_id = 102),
  [989] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 6, .production_id = 102),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility_modifier, 4, .production_id = 13),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 10, .production_id = 125),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1060),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 11, .production_id = 141),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 4, .production_id = 20),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 6, .production_id = 47),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 3, .production_id = 8),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 8, .production_id = 85),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 8, .production_id = 61),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 8, .production_id = 84),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 8, .production_id = 60),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 8, .production_id = 83),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [1077] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generic_args_repeat1, 2, .production_id = 79), SHIFT_REPEAT(89),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_args_repeat1, 2, .production_id = 79),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 5, .production_id = 28),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_repeat1, 2, .production_id = 29), SHIFT_REPEAT(50),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_repeat1, 2, .production_id = 29),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_modifier, 1, .production_id = 1),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 3),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extern_block_repeat1, 1, .production_id = 5),
  [1131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_type_repeat1, 2, .production_id = 32), SHIFT_REPEAT(22),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_type_repeat1, 2, .production_id = 32),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 6, .production_id = 46),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 10, .production_id = 126),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 9, .production_id = 105),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 10, .production_id = 127),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [1162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inputs_repeat1, 2, .production_id = 32), SHIFT_REPEAT(876),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inputs_repeat1, 2, .production_id = 32),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 5, .production_id = 20),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 6, .production_id = 28),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 7, .production_id = 61),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 7, .production_id = 60),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 7, .production_id = 46),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 7, .production_id = 59),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 5, .production_id = 36),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 9, .production_id = 106),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 9, .production_id = 107),
  [1247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2), SHIFT_REPEAT(76),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_function, 9, .production_id = 85),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [1258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_expression_repeat1, 2, .production_id = 55), SHIFT_REPEAT(140),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_expression_repeat1, 2, .production_id = 55),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_expression_repeat1, 2, .production_id = 41),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [1363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inputs_repeat1, 2, .production_id = 31),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_modifier, 2, .production_id = 3),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotated, 3),
  [1441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_args_repeat1, 2),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_args_repeat1, 2, .production_id = 77),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1072),
  [1459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_repeat1, 2, .production_id = 27),
  [1461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1069),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_type_repeat1, 2, .production_id = 31),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding, 6, .production_id = 123),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding, 4, .production_id = 75),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1042),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1082),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1049),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1050),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1054),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1055),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1056),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1057),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1058),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1059),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1066),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1067),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1068),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1070),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1071),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1081),
  [1819] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_modifier, 1),
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
