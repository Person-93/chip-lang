#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 215
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 15
#define PRODUCTION_ID_COUNT 65

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
  anon_sym_COLON_COLON = 15,
  sym_identifier = 16,
  anon_sym_COLON_COLON_LT = 17,
  anon_sym_GT = 18,
  sym_string_literal = 19,
  anon_sym_true = 20,
  anon_sym_false = 21,
  sym_numeric_literal = 22,
  sym_file = 23,
  sym__item = 24,
  sym_function = 25,
  sym_function_modifier = 26,
  sym_type = 27,
  sym_visibility_modifier = 28,
  sym_expr = 29,
  sym_tuple_expression = 30,
  sym_path = 31,
  sym_path_segment = 32,
  sym_generic_args = 33,
  sym_literal = 34,
  sym_unit_literal = 35,
  sym_boolean_literal = 36,
  aux_sym_file_repeat1 = 37,
  aux_sym_function_repeat1 = 38,
  aux_sym_tuple_expression_repeat1 = 39,
  aux_sym_path_repeat1 = 40,
  aux_sym_generic_args_repeat1 = 41,
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
  [anon_sym_COLON_COLON] = "::",
  [sym_identifier] = "identifier",
  [anon_sym_COLON_COLON_LT] = "::<",
  [anon_sym_GT] = ">",
  [sym_string_literal] = "string_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_numeric_literal] = "numeric_literal",
  [sym_file] = "file",
  [sym__item] = "_item",
  [sym_function] = "function",
  [sym_function_modifier] = "function_modifier",
  [sym_type] = "type",
  [sym_visibility_modifier] = "visibility_modifier",
  [sym_expr] = "expr",
  [sym_tuple_expression] = "tuple_expression",
  [sym_path] = "path",
  [sym_path_segment] = "path_segment",
  [sym_generic_args] = "generic_args",
  [sym_literal] = "literal",
  [sym_unit_literal] = "unit_literal",
  [sym_boolean_literal] = "boolean_literal",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_function_repeat1] = "function_repeat1",
  [aux_sym_tuple_expression_repeat1] = "tuple_expression_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_generic_args_repeat1] = "generic_args_repeat1",
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
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym_identifier] = sym_identifier,
  [anon_sym_COLON_COLON_LT] = anon_sym_COLON_COLON_LT,
  [anon_sym_GT] = anon_sym_GT,
  [sym_string_literal] = sym_string_literal,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_numeric_literal] = sym_numeric_literal,
  [sym_file] = sym_file,
  [sym__item] = sym__item,
  [sym_function] = sym_function,
  [sym_function_modifier] = sym_function_modifier,
  [sym_type] = sym_type,
  [sym_visibility_modifier] = sym_visibility_modifier,
  [sym_expr] = sym_expr,
  [sym_tuple_expression] = sym_tuple_expression,
  [sym_path] = sym_path,
  [sym_path_segment] = sym_path_segment,
  [sym_generic_args] = sym_generic_args,
  [sym_literal] = sym_literal,
  [sym_unit_literal] = sym_unit_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_function_repeat1] = aux_sym_function_repeat1,
  [aux_sym_tuple_expression_repeat1] = aux_sym_tuple_expression_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_generic_args_repeat1] = aux_sym_generic_args_repeat1,
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
  [sym_numeric_literal] = {
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
  [sym_expr] = {
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
  [sym_literal] = {
    .visible = true,
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
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_repeat1] = {
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
  [aux_sym_generic_args_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_abi = 1,
  field_body = 2,
  field_identifier = 3,
  field_inputs = 4,
  field_members = 5,
  field_name = 6,
  field_output = 7,
  field_type = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_abi] = "abi",
  [field_body] = "body",
  [field_identifier] = "identifier",
  [field_inputs] = "inputs",
  [field_members] = "members",
  [field_name] = "name",
  [field_output] = "output",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 1},
  [9] = {.index = 11, .length = 3},
  [10] = {.index = 14, .length = 4},
  [11] = {.index = 18, .length = 4},
  [12] = {.index = 22, .length = 2},
  [13] = {.index = 24, .length = 2},
  [14] = {.index = 26, .length = 5},
  [15] = {.index = 31, .length = 5},
  [16] = {.index = 36, .length = 7},
  [17] = {.index = 43, .length = 3},
  [18] = {.index = 46, .length = 4},
  [19] = {.index = 50, .length = 2},
  [20] = {.index = 52, .length = 6},
  [21] = {.index = 58, .length = 2},
  [22] = {.index = 60, .length = 5},
  [23] = {.index = 65, .length = 8},
  [24] = {.index = 73, .length = 8},
  [25] = {.index = 81, .length = 5},
  [26] = {.index = 86, .length = 5},
  [27] = {.index = 91, .length = 7},
  [28] = {.index = 98, .length = 3},
  [29] = {.index = 101, .length = 4},
  [30] = {.index = 105, .length = 6},
  [31] = {.index = 111, .length = 6},
  [32] = {.index = 117, .length = 9},
  [33] = {.index = 126, .length = 8},
  [34] = {.index = 134, .length = 6},
  [35] = {.index = 140, .length = 5},
  [36] = {.index = 145, .length = 8},
  [37] = {.index = 153, .length = 8},
  [38] = {.index = 161, .length = 5},
  [39] = {.index = 166, .length = 5},
  [40] = {.index = 171, .length = 7},
  [41] = {.index = 178, .length = 7},
  [42] = {.index = 185, .length = 9},
  [43] = {.index = 194, .length = 9},
  [44] = {.index = 203, .length = 6},
  [45] = {.index = 209, .length = 6},
  [46] = {.index = 215, .length = 9},
  [47] = {.index = 224, .length = 8},
  [48] = {.index = 232, .length = 6},
  [49] = {.index = 238, .length = 5},
  [50] = {.index = 243, .length = 8},
  [51] = {.index = 251, .length = 8},
  [52] = {.index = 259, .length = 10},
  [53] = {.index = 269, .length = 7},
  [54] = {.index = 276, .length = 9},
  [55] = {.index = 285, .length = 9},
  [56] = {.index = 294, .length = 6},
  [57] = {.index = 300, .length = 6},
  [58] = {.index = 306, .length = 9},
  [59] = {.index = 315, .length = 8},
  [60] = {.index = 323, .length = 10},
  [61] = {.index = 333, .length = 7},
  [62] = {.index = 340, .length = 9},
  [63] = {.index = 349, .length = 9},
  [64] = {.index = 358, .length = 10},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_abi, 1},
  [1] =
    {field_name, 1},
  [2] =
    {field_body, 5},
    {field_name, 1},
  [4] =
    {field_name, 2},
  [5] =
    {field_name, 1},
    {field_output, 5},
  [7] =
    {field_body, 6},
    {field_name, 2},
  [9] =
    {field_name, 3},
  [10] =
    {field_members, 1},
  [11] =
    {field_body, 7},
    {field_name, 1},
    {field_output, 5},
  [14] =
    {field_identifier, 3},
    {field_inputs, 4},
    {field_name, 1},
    {field_type, 5},
  [18] =
    {field_identifier, 0, .inherited = true},
    {field_identifier, 1, .inherited = true},
    {field_type, 0, .inherited = true},
    {field_type, 1, .inherited = true},
  [22] =
    {field_name, 2},
    {field_output, 6},
  [24] =
    {field_body, 7},
    {field_name, 3},
  [26] =
    {field_identifier, 3},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_name, 1},
    {field_type, 5},
  [31] =
    {field_body, 8},
    {field_identifier, 3},
    {field_inputs, 4},
    {field_name, 1},
    {field_type, 5},
  [36] =
    {field_identifier, 3},
    {field_identifier, 6, .inherited = true},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_name, 1},
    {field_type, 5},
    {field_type, 6, .inherited = true},
  [43] =
    {field_body, 8},
    {field_name, 2},
    {field_output, 6},
  [46] =
    {field_identifier, 4},
    {field_inputs, 5},
    {field_name, 2},
    {field_type, 6},
  [50] =
    {field_name, 3},
    {field_output, 7},
  [52] =
    {field_body, 9},
    {field_identifier, 3},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_name, 1},
    {field_type, 5},
  [58] =
    {field_identifier, 1},
    {field_type, 3},
  [60] =
    {field_identifier, 3},
    {field_inputs, 4},
    {field_name, 1},
    {field_output, 8},
    {field_type, 5},
  [65] =
    {field_identifier, 3},
    {field_identifier, 6, .inherited = true},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_inputs, 7},
    {field_name, 1},
    {field_type, 5},
    {field_type, 6, .inherited = true},
  [73] =
    {field_body, 9},
    {field_identifier, 3},
    {field_identifier, 6, .inherited = true},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_name, 1},
    {field_type, 5},
    {field_type, 6, .inherited = true},
  [81] =
    {field_identifier, 4},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_name, 2},
    {field_type, 6},
  [86] =
    {field_body, 9},
    {field_identifier, 4},
    {field_inputs, 5},
    {field_name, 2},
    {field_type, 6},
  [91] =
    {field_identifier, 4},
    {field_identifier, 7, .inherited = true},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_name, 2},
    {field_type, 6},
    {field_type, 7, .inherited = true},
  [98] =
    {field_body, 9},
    {field_name, 3},
    {field_output, 7},
  [101] =
    {field_identifier, 5},
    {field_inputs, 6},
    {field_name, 3},
    {field_type, 7},
  [105] =
    {field_identifier, 3},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_name, 1},
    {field_output, 9},
    {field_type, 5},
  [111] =
    {field_body, 10},
    {field_identifier, 3},
    {field_inputs, 4},
    {field_name, 1},
    {field_output, 8},
    {field_type, 5},
  [117] =
    {field_body, 10},
    {field_identifier, 3},
    {field_identifier, 6, .inherited = true},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_inputs, 7},
    {field_name, 1},
    {field_type, 5},
    {field_type, 6, .inherited = true},
  [126] =
    {field_identifier, 3},
    {field_identifier, 6, .inherited = true},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_name, 1},
    {field_output, 9},
    {field_type, 5},
    {field_type, 6, .inherited = true},
  [134] =
    {field_body, 10},
    {field_identifier, 4},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_name, 2},
    {field_type, 6},
  [140] =
    {field_identifier, 4},
    {field_inputs, 5},
    {field_name, 2},
    {field_output, 9},
    {field_type, 6},
  [145] =
    {field_identifier, 4},
    {field_identifier, 7, .inherited = true},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_inputs, 8},
    {field_name, 2},
    {field_type, 6},
    {field_type, 7, .inherited = true},
  [153] =
    {field_body, 10},
    {field_identifier, 4},
    {field_identifier, 7, .inherited = true},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_name, 2},
    {field_type, 6},
    {field_type, 7, .inherited = true},
  [161] =
    {field_identifier, 5},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_name, 3},
    {field_type, 7},
  [166] =
    {field_body, 10},
    {field_identifier, 5},
    {field_inputs, 6},
    {field_name, 3},
    {field_type, 7},
  [171] =
    {field_identifier, 5},
    {field_identifier, 8, .inherited = true},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_name, 3},
    {field_type, 7},
    {field_type, 8, .inherited = true},
  [178] =
    {field_body, 11},
    {field_identifier, 3},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_name, 1},
    {field_output, 9},
    {field_type, 5},
  [185] =
    {field_identifier, 3},
    {field_identifier, 6, .inherited = true},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_inputs, 7},
    {field_name, 1},
    {field_output, 10},
    {field_type, 5},
    {field_type, 6, .inherited = true},
  [194] =
    {field_body, 11},
    {field_identifier, 3},
    {field_identifier, 6, .inherited = true},
    {field_inputs, 4},
    {field_inputs, 6},
    {field_name, 1},
    {field_output, 9},
    {field_type, 5},
    {field_type, 6, .inherited = true},
  [203] =
    {field_identifier, 4},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_name, 2},
    {field_output, 10},
    {field_type, 6},
  [209] =
    {field_body, 11},
    {field_identifier, 4},
    {field_inputs, 5},
    {field_name, 2},
    {field_output, 9},
    {field_type, 6},
  [215] =
    {field_body, 11},
    {field_identifier, 4},
    {field_identifier, 7, .inherited = true},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_inputs, 8},
    {field_name, 2},
    {field_type, 6},
    {field_type, 7, .inherited = true},
  [224] =
    {field_identifier, 4},
    {field_identifier, 7, .inherited = true},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_name, 2},
    {field_output, 10},
    {field_type, 6},
    {field_type, 7, .inherited = true},
  [232] =
    {field_body, 11},
    {field_identifier, 5},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_name, 3},
    {field_type, 7},
  [238] =
    {field_identifier, 5},
    {field_inputs, 6},
    {field_name, 3},
    {field_output, 10},
    {field_type, 7},
  [243] =
    {field_identifier, 5},
    {field_identifier, 8, .inherited = true},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_inputs, 9},
    {field_name, 3},
    {field_type, 7},
    {field_type, 8, .inherited = true},
  [251] =
    {field_body, 11},
    {field_identifier, 5},
    {field_identifier, 8, .inherited = true},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_name, 3},
    {field_type, 7},
    {field_type, 8, .inherited = true},
  [259] =
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
  [269] =
    {field_body, 12},
    {field_identifier, 4},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_name, 2},
    {field_output, 10},
    {field_type, 6},
  [276] =
    {field_identifier, 4},
    {field_identifier, 7, .inherited = true},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_inputs, 8},
    {field_name, 2},
    {field_output, 11},
    {field_type, 6},
    {field_type, 7, .inherited = true},
  [285] =
    {field_body, 12},
    {field_identifier, 4},
    {field_identifier, 7, .inherited = true},
    {field_inputs, 5},
    {field_inputs, 7},
    {field_name, 2},
    {field_output, 10},
    {field_type, 6},
    {field_type, 7, .inherited = true},
  [294] =
    {field_identifier, 5},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_name, 3},
    {field_output, 11},
    {field_type, 7},
  [300] =
    {field_body, 12},
    {field_identifier, 5},
    {field_inputs, 6},
    {field_name, 3},
    {field_output, 10},
    {field_type, 7},
  [306] =
    {field_body, 12},
    {field_identifier, 5},
    {field_identifier, 8, .inherited = true},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_inputs, 9},
    {field_name, 3},
    {field_type, 7},
    {field_type, 8, .inherited = true},
  [315] =
    {field_identifier, 5},
    {field_identifier, 8, .inherited = true},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_name, 3},
    {field_output, 11},
    {field_type, 7},
    {field_type, 8, .inherited = true},
  [323] =
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
  [333] =
    {field_body, 13},
    {field_identifier, 5},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_name, 3},
    {field_output, 11},
    {field_type, 7},
  [340] =
    {field_identifier, 5},
    {field_identifier, 8, .inherited = true},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_inputs, 9},
    {field_name, 3},
    {field_output, 12},
    {field_type, 7},
    {field_type, 8, .inherited = true},
  [349] =
    {field_body, 13},
    {field_identifier, 5},
    {field_identifier, 8, .inherited = true},
    {field_inputs, 6},
    {field_inputs, 8},
    {field_name, 3},
    {field_output, 11},
    {field_type, 7},
    {field_type, 8, .inherited = true},
  [358] =
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
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == ')') ADVANCE(12);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '>') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (sym_word_character_set_1(lookahead)) ADVANCE(23);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(20);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(12);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(12);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(13);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(16);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(15);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '<') ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_LT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == '.') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_word);
      if (sym_word_character_set_2(lookahead)) ADVANCE(23);
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
      if (lookahead == 'p') ADVANCE(4);
      if (lookahead == 's') ADVANCE(5);
      if (lookahead == 't') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == 'x') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'k') ADVANCE(28);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_pub);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 35:
      if (lookahead == 'g') ADVANCE(39);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_super);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_unsafe);
      END_STATE();
    case 41:
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
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 0},
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
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 2},
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
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 3},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 3},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 3},
  [214] = {.lex_state = 0},
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
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_COLON_COLON_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_numeric_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(199),
    [sym__item] = STATE(10),
    [sym_function] = STATE(10),
    [sym_function_modifier] = STATE(202),
    [sym_visibility_modifier] = STATE(116),
    [aux_sym_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_fn] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(7),
    [anon_sym_unsafe] = ACTIONS(7),
    [anon_sym_extern] = ACTIONS(9),
    [anon_sym_pub] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(13), 14,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
      anon_sym_GT,
      sym_string_literal,
      anon_sym_true,
      anon_sym_false,
      sym_numeric_literal,
  [17] = 1,
    ACTIONS(15), 14,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
      anon_sym_GT,
      sym_string_literal,
      anon_sym_true,
      anon_sym_false,
      sym_numeric_literal,
  [34] = 1,
    ACTIONS(17), 14,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
      anon_sym_GT,
      sym_string_literal,
      anon_sym_true,
      anon_sym_false,
      sym_numeric_literal,
  [51] = 1,
    ACTIONS(19), 14,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
      anon_sym_GT,
      sym_string_literal,
      anon_sym_true,
      anon_sym_false,
      sym_numeric_literal,
  [68] = 1,
    ACTIONS(21), 14,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
      anon_sym_GT,
      sym_string_literal,
      anon_sym_true,
      anon_sym_false,
      sym_numeric_literal,
  [85] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(26), 1,
      anon_sym_RPAREN,
    ACTIONS(28), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
    STATE(7), 2,
      sym_expr,
      aux_sym_tuple_expression_repeat1,
  [112] = 7,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(36), 1,
      anon_sym_RPAREN,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
    STATE(7), 2,
      sym_expr,
      aux_sym_tuple_expression_repeat1,
  [139] = 7,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(42), 1,
      anon_sym_RPAREN,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
    STATE(8), 2,
      sym_expr,
      aux_sym_tuple_expression_repeat1,
  [166] = 8,
    ACTIONS(5), 1,
      anon_sym_fn,
    ACTIONS(9), 1,
      anon_sym_extern,
    ACTIONS(11), 1,
      anon_sym_pub,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    STATE(116), 1,
      sym_visibility_modifier,
    STATE(202), 1,
      sym_function_modifier,
    ACTIONS(7), 2,
      anon_sym_const,
      anon_sym_unsafe,
    STATE(13), 3,
      sym__item,
      sym_function,
      aux_sym_file_repeat1,
  [194] = 7,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(46), 1,
      anon_sym_GT,
    STATE(194), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [220] = 7,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(48), 1,
      anon_sym_GT,
    STATE(194), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [246] = 8,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 1,
      anon_sym_fn,
    ACTIONS(58), 1,
      anon_sym_extern,
    ACTIONS(61), 1,
      anon_sym_pub,
    STATE(116), 1,
      sym_visibility_modifier,
    STATE(202), 1,
      sym_function_modifier,
    ACTIONS(55), 2,
      anon_sym_const,
      anon_sym_unsafe,
    STATE(13), 3,
      sym__item,
      sym_function,
      aux_sym_file_repeat1,
  [274] = 6,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [297] = 6,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [320] = 6,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(79), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [343] = 6,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [366] = 6,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(83), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [389] = 6,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [412] = 6,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(194), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [435] = 6,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [458] = 6,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [481] = 6,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [504] = 6,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(97), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [527] = 6,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [550] = 6,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [573] = 6,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [596] = 6,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(103), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [619] = 6,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(105), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [642] = 6,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [665] = 6,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [688] = 6,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [711] = 6,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [734] = 6,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(58), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [757] = 6,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [780] = 6,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [803] = 6,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(51), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [826] = 6,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(102), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [849] = 6,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [872] = 6,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(108), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [895] = 6,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [918] = 6,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(109), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [941] = 6,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [964] = 6,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(92), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [987] = 6,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_expr,
    ACTIONS(38), 2,
      sym_string_literal,
      sym_numeric_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_tuple_expression,
      sym_literal,
    STATE(4), 2,
      sym_unit_literal,
      sym_boolean_literal,
  [1010] = 4,
    ACTIONS(68), 1,
      anon_sym_COLON_COLON_LT,
    STATE(121), 1,
      sym_generic_args,
    ACTIONS(64), 2,
      anon_sym_COLON,
      anon_sym_COLON_COLON,
    ACTIONS(66), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1026] = 1,
    ACTIONS(70), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1035] = 1,
    ACTIONS(72), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1044] = 1,
    ACTIONS(74), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1053] = 1,
    ACTIONS(76), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1062] = 1,
    ACTIONS(78), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1071] = 1,
    ACTIONS(80), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1080] = 1,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1089] = 4,
    ACTIONS(84), 1,
      anon_sym_COLON,
    ACTIONS(88), 1,
      anon_sym_COLON_COLON,
    STATE(65), 1,
      aux_sym_path_repeat1,
    ACTIONS(86), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1104] = 1,
    ACTIONS(90), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1113] = 1,
    ACTIONS(92), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1122] = 1,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1131] = 1,
    ACTIONS(96), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1140] = 1,
    ACTIONS(98), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1149] = 1,
    ACTIONS(100), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1158] = 4,
    ACTIONS(102), 1,
      anon_sym_COLON,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    STATE(76), 1,
      aux_sym_path_repeat1,
    ACTIONS(104), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1173] = 1,
    ACTIONS(108), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1182] = 1,
    ACTIONS(110), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1191] = 3,
    ACTIONS(112), 1,
      sym_identifier,
    STATE(129), 1,
      sym_path_segment,
    ACTIONS(104), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1204] = 4,
    ACTIONS(102), 1,
      anon_sym_COLON,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    STATE(80), 1,
      aux_sym_path_repeat1,
    ACTIONS(104), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1219] = 1,
    ACTIONS(114), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1228] = 1,
    ACTIONS(116), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1237] = 1,
    ACTIONS(118), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1246] = 1,
    ACTIONS(120), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1255] = 1,
    ACTIONS(122), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1264] = 1,
    ACTIONS(124), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1273] = 1,
    ACTIONS(126), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1282] = 1,
    ACTIONS(128), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1291] = 1,
    ACTIONS(130), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1300] = 3,
    ACTIONS(112), 1,
      sym_identifier,
    STATE(129), 1,
      sym_path_segment,
    ACTIONS(132), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1313] = 4,
    ACTIONS(134), 1,
      anon_sym_COLON,
    ACTIONS(136), 1,
      anon_sym_COLON_COLON,
    STATE(80), 1,
      aux_sym_path_repeat1,
    ACTIONS(132), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1328] = 1,
    ACTIONS(138), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1337] = 1,
    ACTIONS(140), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1346] = 1,
    ACTIONS(142), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1355] = 4,
    ACTIONS(144), 1,
      anon_sym_COLON,
    ACTIONS(148), 1,
      anon_sym_COLON_COLON,
    STATE(80), 1,
      aux_sym_path_repeat1,
    ACTIONS(146), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1370] = 1,
    ACTIONS(151), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1379] = 1,
    ACTIONS(153), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1388] = 1,
    ACTIONS(155), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1397] = 1,
    ACTIONS(157), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1406] = 1,
    ACTIONS(159), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1415] = 1,
    ACTIONS(161), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1424] = 1,
    ACTIONS(163), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1433] = 1,
    ACTIONS(165), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1442] = 1,
    ACTIONS(167), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1451] = 1,
    ACTIONS(169), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1460] = 1,
    ACTIONS(171), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1469] = 1,
    ACTIONS(173), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1478] = 1,
    ACTIONS(175), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1487] = 1,
    ACTIONS(177), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1496] = 3,
    ACTIONS(112), 1,
      sym_identifier,
    STATE(129), 1,
      sym_path_segment,
    ACTIONS(179), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1509] = 1,
    ACTIONS(181), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1518] = 1,
    ACTIONS(183), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1527] = 1,
    ACTIONS(185), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1536] = 1,
    ACTIONS(187), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1545] = 1,
    ACTIONS(189), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1554] = 1,
    ACTIONS(191), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1563] = 1,
    ACTIONS(193), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1572] = 1,
    ACTIONS(195), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1581] = 1,
    ACTIONS(197), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1590] = 1,
    ACTIONS(199), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1599] = 1,
    ACTIONS(201), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1608] = 1,
    ACTIONS(203), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1617] = 1,
    ACTIONS(205), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1626] = 1,
    ACTIONS(207), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1635] = 1,
    ACTIONS(209), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1644] = 1,
    ACTIONS(211), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1653] = 1,
    ACTIONS(213), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1662] = 1,
    ACTIONS(215), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1671] = 1,
    ACTIONS(217), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
      anon_sym_pub,
  [1680] = 5,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(219), 1,
      anon_sym_COLON_COLON,
    STATE(54), 1,
      sym_path_segment,
    STATE(142), 1,
      sym_path,
    STATE(175), 1,
      sym_type,
  [1696] = 4,
    ACTIONS(9), 1,
      anon_sym_extern,
    ACTIONS(221), 1,
      anon_sym_fn,
    STATE(214), 1,
      sym_function_modifier,
    ACTIONS(7), 2,
      anon_sym_const,
      anon_sym_unsafe,
  [1710] = 5,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(219), 1,
      anon_sym_COLON_COLON,
    STATE(54), 1,
      sym_path_segment,
    STATE(142), 1,
      sym_path,
    STATE(179), 1,
      sym_type,
  [1726] = 5,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(219), 1,
      anon_sym_COLON_COLON,
    STATE(54), 1,
      sym_path_segment,
    STATE(142), 1,
      sym_path,
    STATE(176), 1,
      sym_type,
  [1742] = 5,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(219), 1,
      anon_sym_COLON_COLON,
    STATE(54), 1,
      sym_path_segment,
    STATE(142), 1,
      sym_path,
    STATE(197), 1,
      sym_type,
  [1758] = 5,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(219), 1,
      anon_sym_COLON_COLON,
    STATE(54), 1,
      sym_path_segment,
    STATE(142), 1,
      sym_path,
    STATE(159), 1,
      sym_type,
  [1774] = 2,
    ACTIONS(223), 1,
      anon_sym_COLON,
    ACTIONS(225), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
  [1784] = 2,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 4,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
  [1794] = 5,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(219), 1,
      anon_sym_COLON_COLON,
    STATE(54), 1,
      sym_path_segment,
    STATE(142), 1,
      sym_path,
    STATE(170), 1,
      sym_type,
  [1810] = 2,
    ACTIONS(231), 1,
      anon_sym_COLON,
    ACTIONS(233), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
  [1820] = 5,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(219), 1,
      anon_sym_COLON_COLON,
    STATE(54), 1,
      sym_path_segment,
    STATE(142), 1,
      sym_path,
    STATE(188), 1,
      sym_type,
  [1836] = 5,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(219), 1,
      anon_sym_COLON_COLON,
    STATE(54), 1,
      sym_path_segment,
    STATE(142), 1,
      sym_path,
    STATE(147), 1,
      sym_type,
  [1852] = 5,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(219), 1,
      anon_sym_COLON_COLON,
    STATE(54), 1,
      sym_path_segment,
    STATE(142), 1,
      sym_path,
    STATE(143), 1,
      sym_type,
  [1868] = 2,
    ACTIONS(235), 1,
      anon_sym_COLON,
    ACTIONS(237), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
  [1878] = 2,
    ACTIONS(144), 1,
      anon_sym_COLON,
    ACTIONS(146), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
  [1888] = 5,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(219), 1,
      anon_sym_COLON_COLON,
    STATE(54), 1,
      sym_path_segment,
    STATE(142), 1,
      sym_path,
    STATE(183), 1,
      sym_type,
  [1904] = 5,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(219), 1,
      anon_sym_COLON_COLON,
    STATE(54), 1,
      sym_path_segment,
    STATE(142), 1,
      sym_path,
    STATE(195), 1,
      sym_type,
  [1920] = 5,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(219), 1,
      anon_sym_COLON_COLON,
    STATE(54), 1,
      sym_path_segment,
    STATE(142), 1,
      sym_path,
    STATE(196), 1,
      sym_type,
  [1936] = 5,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(219), 1,
      anon_sym_COLON_COLON,
    STATE(54), 1,
      sym_path_segment,
    STATE(142), 1,
      sym_path,
    STATE(189), 1,
      sym_type,
  [1952] = 5,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(219), 1,
      anon_sym_COLON_COLON,
    STATE(54), 1,
      sym_path_segment,
    STATE(142), 1,
      sym_path,
    STATE(185), 1,
      sym_type,
  [1968] = 5,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(219), 1,
      anon_sym_COLON_COLON,
    STATE(54), 1,
      sym_path_segment,
    STATE(142), 1,
      sym_path,
    STATE(168), 1,
      sym_type,
  [1984] = 5,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(219), 1,
      anon_sym_COLON_COLON,
    STATE(54), 1,
      sym_path_segment,
    STATE(142), 1,
      sym_path,
    STATE(171), 1,
      sym_type,
  [2000] = 5,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(219), 1,
      anon_sym_COLON_COLON,
    STATE(54), 1,
      sym_path_segment,
    STATE(142), 1,
      sym_path,
    STATE(174), 1,
      sym_type,
  [2016] = 2,
    ACTIONS(239), 1,
      anon_sym_COLON,
    ACTIONS(241), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
  [2026] = 5,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(219), 1,
      anon_sym_COLON_COLON,
    STATE(54), 1,
      sym_path_segment,
    STATE(142), 1,
      sym_path,
    STATE(190), 1,
      sym_type,
  [2042] = 5,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(219), 1,
      anon_sym_COLON_COLON,
    STATE(54), 1,
      sym_path_segment,
    STATE(142), 1,
      sym_path,
    STATE(169), 1,
      sym_type,
  [2058] = 1,
    ACTIONS(243), 4,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_unsafe,
      anon_sym_extern,
  [2065] = 1,
    ACTIONS(245), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [2072] = 3,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(155), 1,
      aux_sym_function_repeat1,
  [2082] = 3,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      aux_sym_function_repeat1,
  [2092] = 3,
    ACTIONS(256), 1,
      anon_sym_COLON,
    ACTIONS(258), 1,
      anon_sym_DASH_GT,
    ACTIONS(260), 1,
      anon_sym_SEMI,
  [2102] = 3,
    ACTIONS(262), 1,
      anon_sym_COLON,
    ACTIONS(264), 1,
      anon_sym_DASH_GT,
    ACTIONS(266), 1,
      anon_sym_SEMI,
  [2112] = 3,
    ACTIONS(268), 1,
      anon_sym_COMMA,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      aux_sym_function_repeat1,
  [2122] = 3,
    ACTIONS(272), 1,
      anon_sym_COLON,
    ACTIONS(274), 1,
      anon_sym_DASH_GT,
    ACTIONS(276), 1,
      anon_sym_SEMI,
  [2132] = 3,
    ACTIONS(278), 1,
      anon_sym_COLON,
    ACTIONS(280), 1,
      anon_sym_DASH_GT,
    ACTIONS(282), 1,
      anon_sym_SEMI,
  [2142] = 3,
    ACTIONS(284), 1,
      anon_sym_COLON,
    ACTIONS(286), 1,
      anon_sym_DASH_GT,
    ACTIONS(288), 1,
      anon_sym_SEMI,
  [2152] = 3,
    ACTIONS(290), 1,
      anon_sym_COLON,
    ACTIONS(292), 1,
      anon_sym_DASH_GT,
    ACTIONS(294), 1,
      anon_sym_SEMI,
  [2162] = 3,
    ACTIONS(296), 1,
      anon_sym_COLON,
    ACTIONS(298), 1,
      anon_sym_DASH_GT,
    ACTIONS(300), 1,
      anon_sym_SEMI,
  [2172] = 3,
    ACTIONS(302), 1,
      anon_sym_COLON,
    ACTIONS(304), 1,
      anon_sym_DASH_GT,
    ACTIONS(306), 1,
      anon_sym_SEMI,
  [2182] = 3,
    ACTIONS(308), 1,
      anon_sym_COLON,
    ACTIONS(310), 1,
      anon_sym_DASH_GT,
    ACTIONS(312), 1,
      anon_sym_SEMI,
  [2192] = 3,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      aux_sym_function_repeat1,
  [2202] = 3,
    ACTIONS(318), 1,
      anon_sym_COLON,
    ACTIONS(320), 1,
      anon_sym_DASH_GT,
    ACTIONS(322), 1,
      anon_sym_SEMI,
  [2212] = 3,
    ACTIONS(324), 1,
      anon_sym_COLON,
    ACTIONS(326), 1,
      anon_sym_DASH_GT,
    ACTIONS(328), 1,
      anon_sym_SEMI,
  [2222] = 3,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      aux_sym_function_repeat1,
  [2232] = 3,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      aux_sym_function_repeat1,
  [2242] = 3,
    ACTIONS(46), 1,
      anon_sym_GT,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_generic_args_repeat1,
  [2252] = 3,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    ACTIONS(343), 1,
      anon_sym_GT,
    STATE(161), 1,
      aux_sym_generic_args_repeat1,
  [2262] = 3,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_GT,
    STATE(160), 1,
      aux_sym_generic_args_repeat1,
  [2272] = 3,
    ACTIONS(349), 1,
      anon_sym_COLON,
    ACTIONS(351), 1,
      anon_sym_DASH_GT,
    ACTIONS(353), 1,
      anon_sym_SEMI,
  [2282] = 3,
    ACTIONS(355), 1,
      anon_sym_COLON,
    ACTIONS(357), 1,
      anon_sym_DASH_GT,
    ACTIONS(359), 1,
      anon_sym_SEMI,
  [2292] = 3,
    ACTIONS(361), 1,
      anon_sym_COLON,
    ACTIONS(363), 1,
      anon_sym_DASH_GT,
    ACTIONS(365), 1,
      anon_sym_SEMI,
  [2302] = 3,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      aux_sym_function_repeat1,
  [2312] = 3,
    ACTIONS(371), 1,
      anon_sym_COLON,
    ACTIONS(373), 1,
      anon_sym_DASH_GT,
    ACTIONS(375), 1,
      anon_sym_SEMI,
  [2322] = 2,
    ACTIONS(377), 1,
      anon_sym_COLON,
    ACTIONS(379), 1,
      anon_sym_SEMI,
  [2329] = 2,
    ACTIONS(381), 1,
      anon_sym_COLON,
    ACTIONS(383), 1,
      anon_sym_SEMI,
  [2336] = 2,
    ACTIONS(385), 1,
      anon_sym_COLON,
    ACTIONS(387), 1,
      anon_sym_SEMI,
  [2343] = 2,
    ACTIONS(389), 1,
      anon_sym_COLON,
    ACTIONS(391), 1,
      anon_sym_SEMI,
  [2350] = 2,
    ACTIONS(112), 1,
      sym_identifier,
    STATE(61), 1,
      sym_path_segment,
  [2357] = 2,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    ACTIONS(395), 1,
      sym_identifier,
  [2364] = 2,
    ACTIONS(397), 1,
      anon_sym_COLON,
    ACTIONS(399), 1,
      anon_sym_SEMI,
  [2371] = 2,
    ACTIONS(401), 1,
      anon_sym_COLON,
    ACTIONS(403), 1,
      anon_sym_SEMI,
  [2378] = 2,
    ACTIONS(405), 1,
      anon_sym_COLON,
    ACTIONS(407), 1,
      anon_sym_SEMI,
  [2385] = 2,
    ACTIONS(395), 1,
      sym_identifier,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
  [2392] = 1,
    ACTIONS(411), 2,
      anon_sym_super,
      anon_sym_package,
  [2397] = 2,
    ACTIONS(413), 1,
      anon_sym_COLON,
    ACTIONS(415), 1,
      anon_sym_SEMI,
  [2404] = 2,
    ACTIONS(395), 1,
      sym_identifier,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
  [2411] = 2,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    ACTIONS(421), 1,
      sym_identifier,
  [2418] = 2,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    ACTIONS(425), 1,
      sym_identifier,
  [2425] = 2,
    ACTIONS(427), 1,
      anon_sym_COLON,
    ACTIONS(429), 1,
      anon_sym_SEMI,
  [2432] = 2,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    ACTIONS(433), 1,
      sym_identifier,
  [2439] = 2,
    ACTIONS(435), 1,
      anon_sym_COLON,
    ACTIONS(437), 1,
      anon_sym_SEMI,
  [2446] = 2,
    ACTIONS(395), 1,
      sym_identifier,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
  [2453] = 2,
    ACTIONS(441), 1,
      anon_sym_fn,
    ACTIONS(443), 1,
      sym_string_literal,
  [2460] = 2,
    ACTIONS(445), 1,
      anon_sym_COLON,
    ACTIONS(447), 1,
      anon_sym_SEMI,
  [2467] = 2,
    ACTIONS(449), 1,
      anon_sym_COLON,
    ACTIONS(451), 1,
      anon_sym_SEMI,
  [2474] = 1,
    ACTIONS(453), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2479] = 2,
    ACTIONS(395), 1,
      sym_identifier,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
  [2486] = 2,
    ACTIONS(112), 1,
      sym_identifier,
    STATE(129), 1,
      sym_path_segment,
  [2493] = 2,
    ACTIONS(395), 1,
      sym_identifier,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
  [2500] = 1,
    ACTIONS(343), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2505] = 2,
    ACTIONS(459), 1,
      anon_sym_COLON,
    ACTIONS(461), 1,
      anon_sym_SEMI,
  [2512] = 2,
    ACTIONS(463), 1,
      anon_sym_COLON,
    ACTIONS(465), 1,
      anon_sym_SEMI,
  [2519] = 2,
    ACTIONS(467), 1,
      anon_sym_COLON,
    ACTIONS(469), 1,
      anon_sym_SEMI,
  [2526] = 1,
    ACTIONS(471), 1,
      sym_identifier,
  [2530] = 1,
    ACTIONS(473), 1,
      ts_builtin_sym_end,
  [2534] = 1,
    ACTIONS(475), 1,
      anon_sym_LPAREN,
  [2538] = 1,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
  [2542] = 1,
    ACTIONS(221), 1,
      anon_sym_fn,
  [2546] = 1,
    ACTIONS(479), 1,
      anon_sym_COLON,
  [2550] = 1,
    ACTIONS(481), 1,
      anon_sym_COLON,
  [2554] = 1,
    ACTIONS(483), 1,
      sym_identifier,
  [2558] = 1,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
  [2562] = 1,
    ACTIONS(487), 1,
      anon_sym_COLON,
  [2566] = 1,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
  [2570] = 1,
    ACTIONS(491), 1,
      anon_sym_COLON,
  [2574] = 1,
    ACTIONS(493), 1,
      anon_sym_fn,
  [2578] = 1,
    ACTIONS(441), 1,
      anon_sym_fn,
  [2582] = 1,
    ACTIONS(395), 1,
      sym_identifier,
  [2586] = 1,
    ACTIONS(495), 1,
      sym_identifier,
  [2590] = 1,
    ACTIONS(497), 1,
      anon_sym_fn,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 51,
  [SMALL_STATE(6)] = 68,
  [SMALL_STATE(7)] = 85,
  [SMALL_STATE(8)] = 112,
  [SMALL_STATE(9)] = 139,
  [SMALL_STATE(10)] = 166,
  [SMALL_STATE(11)] = 194,
  [SMALL_STATE(12)] = 220,
  [SMALL_STATE(13)] = 246,
  [SMALL_STATE(14)] = 274,
  [SMALL_STATE(15)] = 297,
  [SMALL_STATE(16)] = 320,
  [SMALL_STATE(17)] = 343,
  [SMALL_STATE(18)] = 366,
  [SMALL_STATE(19)] = 389,
  [SMALL_STATE(20)] = 412,
  [SMALL_STATE(21)] = 435,
  [SMALL_STATE(22)] = 458,
  [SMALL_STATE(23)] = 481,
  [SMALL_STATE(24)] = 504,
  [SMALL_STATE(25)] = 527,
  [SMALL_STATE(26)] = 550,
  [SMALL_STATE(27)] = 573,
  [SMALL_STATE(28)] = 596,
  [SMALL_STATE(29)] = 619,
  [SMALL_STATE(30)] = 642,
  [SMALL_STATE(31)] = 665,
  [SMALL_STATE(32)] = 688,
  [SMALL_STATE(33)] = 711,
  [SMALL_STATE(34)] = 734,
  [SMALL_STATE(35)] = 757,
  [SMALL_STATE(36)] = 780,
  [SMALL_STATE(37)] = 803,
  [SMALL_STATE(38)] = 826,
  [SMALL_STATE(39)] = 849,
  [SMALL_STATE(40)] = 872,
  [SMALL_STATE(41)] = 895,
  [SMALL_STATE(42)] = 918,
  [SMALL_STATE(43)] = 941,
  [SMALL_STATE(44)] = 964,
  [SMALL_STATE(45)] = 987,
  [SMALL_STATE(46)] = 1010,
  [SMALL_STATE(47)] = 1026,
  [SMALL_STATE(48)] = 1035,
  [SMALL_STATE(49)] = 1044,
  [SMALL_STATE(50)] = 1053,
  [SMALL_STATE(51)] = 1062,
  [SMALL_STATE(52)] = 1071,
  [SMALL_STATE(53)] = 1080,
  [SMALL_STATE(54)] = 1089,
  [SMALL_STATE(55)] = 1104,
  [SMALL_STATE(56)] = 1113,
  [SMALL_STATE(57)] = 1122,
  [SMALL_STATE(58)] = 1131,
  [SMALL_STATE(59)] = 1140,
  [SMALL_STATE(60)] = 1149,
  [SMALL_STATE(61)] = 1158,
  [SMALL_STATE(62)] = 1173,
  [SMALL_STATE(63)] = 1182,
  [SMALL_STATE(64)] = 1191,
  [SMALL_STATE(65)] = 1204,
  [SMALL_STATE(66)] = 1219,
  [SMALL_STATE(67)] = 1228,
  [SMALL_STATE(68)] = 1237,
  [SMALL_STATE(69)] = 1246,
  [SMALL_STATE(70)] = 1255,
  [SMALL_STATE(71)] = 1264,
  [SMALL_STATE(72)] = 1273,
  [SMALL_STATE(73)] = 1282,
  [SMALL_STATE(74)] = 1291,
  [SMALL_STATE(75)] = 1300,
  [SMALL_STATE(76)] = 1313,
  [SMALL_STATE(77)] = 1328,
  [SMALL_STATE(78)] = 1337,
  [SMALL_STATE(79)] = 1346,
  [SMALL_STATE(80)] = 1355,
  [SMALL_STATE(81)] = 1370,
  [SMALL_STATE(82)] = 1379,
  [SMALL_STATE(83)] = 1388,
  [SMALL_STATE(84)] = 1397,
  [SMALL_STATE(85)] = 1406,
  [SMALL_STATE(86)] = 1415,
  [SMALL_STATE(87)] = 1424,
  [SMALL_STATE(88)] = 1433,
  [SMALL_STATE(89)] = 1442,
  [SMALL_STATE(90)] = 1451,
  [SMALL_STATE(91)] = 1460,
  [SMALL_STATE(92)] = 1469,
  [SMALL_STATE(93)] = 1478,
  [SMALL_STATE(94)] = 1487,
  [SMALL_STATE(95)] = 1496,
  [SMALL_STATE(96)] = 1509,
  [SMALL_STATE(97)] = 1518,
  [SMALL_STATE(98)] = 1527,
  [SMALL_STATE(99)] = 1536,
  [SMALL_STATE(100)] = 1545,
  [SMALL_STATE(101)] = 1554,
  [SMALL_STATE(102)] = 1563,
  [SMALL_STATE(103)] = 1572,
  [SMALL_STATE(104)] = 1581,
  [SMALL_STATE(105)] = 1590,
  [SMALL_STATE(106)] = 1599,
  [SMALL_STATE(107)] = 1608,
  [SMALL_STATE(108)] = 1617,
  [SMALL_STATE(109)] = 1626,
  [SMALL_STATE(110)] = 1635,
  [SMALL_STATE(111)] = 1644,
  [SMALL_STATE(112)] = 1653,
  [SMALL_STATE(113)] = 1662,
  [SMALL_STATE(114)] = 1671,
  [SMALL_STATE(115)] = 1680,
  [SMALL_STATE(116)] = 1696,
  [SMALL_STATE(117)] = 1710,
  [SMALL_STATE(118)] = 1726,
  [SMALL_STATE(119)] = 1742,
  [SMALL_STATE(120)] = 1758,
  [SMALL_STATE(121)] = 1774,
  [SMALL_STATE(122)] = 1784,
  [SMALL_STATE(123)] = 1794,
  [SMALL_STATE(124)] = 1810,
  [SMALL_STATE(125)] = 1820,
  [SMALL_STATE(126)] = 1836,
  [SMALL_STATE(127)] = 1852,
  [SMALL_STATE(128)] = 1868,
  [SMALL_STATE(129)] = 1878,
  [SMALL_STATE(130)] = 1888,
  [SMALL_STATE(131)] = 1904,
  [SMALL_STATE(132)] = 1920,
  [SMALL_STATE(133)] = 1936,
  [SMALL_STATE(134)] = 1952,
  [SMALL_STATE(135)] = 1968,
  [SMALL_STATE(136)] = 1984,
  [SMALL_STATE(137)] = 2000,
  [SMALL_STATE(138)] = 2016,
  [SMALL_STATE(139)] = 2026,
  [SMALL_STATE(140)] = 2042,
  [SMALL_STATE(141)] = 2058,
  [SMALL_STATE(142)] = 2065,
  [SMALL_STATE(143)] = 2072,
  [SMALL_STATE(144)] = 2082,
  [SMALL_STATE(145)] = 2092,
  [SMALL_STATE(146)] = 2102,
  [SMALL_STATE(147)] = 2112,
  [SMALL_STATE(148)] = 2122,
  [SMALL_STATE(149)] = 2132,
  [SMALL_STATE(150)] = 2142,
  [SMALL_STATE(151)] = 2152,
  [SMALL_STATE(152)] = 2162,
  [SMALL_STATE(153)] = 2172,
  [SMALL_STATE(154)] = 2182,
  [SMALL_STATE(155)] = 2192,
  [SMALL_STATE(156)] = 2202,
  [SMALL_STATE(157)] = 2212,
  [SMALL_STATE(158)] = 2222,
  [SMALL_STATE(159)] = 2232,
  [SMALL_STATE(160)] = 2242,
  [SMALL_STATE(161)] = 2252,
  [SMALL_STATE(162)] = 2262,
  [SMALL_STATE(163)] = 2272,
  [SMALL_STATE(164)] = 2282,
  [SMALL_STATE(165)] = 2292,
  [SMALL_STATE(166)] = 2302,
  [SMALL_STATE(167)] = 2312,
  [SMALL_STATE(168)] = 2322,
  [SMALL_STATE(169)] = 2329,
  [SMALL_STATE(170)] = 2336,
  [SMALL_STATE(171)] = 2343,
  [SMALL_STATE(172)] = 2350,
  [SMALL_STATE(173)] = 2357,
  [SMALL_STATE(174)] = 2364,
  [SMALL_STATE(175)] = 2371,
  [SMALL_STATE(176)] = 2378,
  [SMALL_STATE(177)] = 2385,
  [SMALL_STATE(178)] = 2392,
  [SMALL_STATE(179)] = 2397,
  [SMALL_STATE(180)] = 2404,
  [SMALL_STATE(181)] = 2411,
  [SMALL_STATE(182)] = 2418,
  [SMALL_STATE(183)] = 2425,
  [SMALL_STATE(184)] = 2432,
  [SMALL_STATE(185)] = 2439,
  [SMALL_STATE(186)] = 2446,
  [SMALL_STATE(187)] = 2453,
  [SMALL_STATE(188)] = 2460,
  [SMALL_STATE(189)] = 2467,
  [SMALL_STATE(190)] = 2474,
  [SMALL_STATE(191)] = 2479,
  [SMALL_STATE(192)] = 2486,
  [SMALL_STATE(193)] = 2493,
  [SMALL_STATE(194)] = 2500,
  [SMALL_STATE(195)] = 2505,
  [SMALL_STATE(196)] = 2512,
  [SMALL_STATE(197)] = 2519,
  [SMALL_STATE(198)] = 2526,
  [SMALL_STATE(199)] = 2530,
  [SMALL_STATE(200)] = 2534,
  [SMALL_STATE(201)] = 2538,
  [SMALL_STATE(202)] = 2542,
  [SMALL_STATE(203)] = 2546,
  [SMALL_STATE(204)] = 2550,
  [SMALL_STATE(205)] = 2554,
  [SMALL_STATE(206)] = 2558,
  [SMALL_STATE(207)] = 2562,
  [SMALL_STATE(208)] = 2566,
  [SMALL_STATE(209)] = 2570,
  [SMALL_STATE(210)] = 2574,
  [SMALL_STATE(211)] = 2578,
  [SMALL_STATE(212)] = 2582,
  [SMALL_STATE(213)] = 2586,
  [SMALL_STATE(214)] = 2590,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_literal, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 3, .production_id = 8),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_expression_repeat1, 2), SHIFT_REPEAT(9),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_expression_repeat1, 2),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_expression_repeat1, 2), SHIFT_REPEAT(4),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_expression_repeat1, 2), SHIFT_REPEAT(3),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(205),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(211),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(187),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(122),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_segment, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_segment, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 34),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 20),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 15, .production_id = 64),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 6, .production_id = 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 14, .production_id = 63),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 14, .production_id = 62),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 14, .production_id = 61),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 14, .production_id = 60),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 59),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 6, .production_id = 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 58),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 57),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 56),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 55),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 7, .production_id = 5),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 54),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 53),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 52),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 7, .production_id = 6),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 51),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 50),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 49),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 7, .production_id = 7),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 48),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 47),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, .production_id = 9),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 46),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(192),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 45),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 44),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 43),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, .production_id = 10),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 42),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 41),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 40),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, .production_id = 12),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 39),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 38),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 37),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, .production_id = 13),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 36),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 35),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 33),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 32),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 31),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 30),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 14),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 29),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 15),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 28),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 27),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 26),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 16),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 25),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 17),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 24),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 19),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 22),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 18),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 23),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 5, .production_id = 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_segment, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_segment, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility_modifier, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_args, 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_args, 4),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_args, 5),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_args, 5),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_args, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_args, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility_modifier, 4),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2, .production_id = 11), SHIFT_REPEAT(212),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2, .production_id = 11),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generic_args_repeat1, 2), SHIFT_REPEAT(20),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_args_repeat1, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_modifier, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 4, .production_id = 21),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [473] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_modifier, 2, .production_id = 1),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
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
