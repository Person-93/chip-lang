const INT_TYPES = [
  "u8",
  "u16",
  "u32",
  "u64",
  "u128",
  "usize",
  "i8",
  "i16",
  "i32",
  "i64",
  "i128",
  "isize",
];

const FLOAT_TYPES = ["f32", "f64"];

const NUMERIC_TYPES = [...INT_TYPES, ...FLOAT_TYPES];

module.exports = grammar({
  name: "chip",

  extras: $ => [/\s/], // TODO add line comments and block comments

  word: $ => $.word,

  inline: $ => [
    $.attr_data_value,
    $.expr,
    $.extern_item,
    $.generic_args,
    $.generic_params,
    $.inner_attribute,
    $.inputs,
    $.item,
    $.literal,
    $.outer_attribute,
    $.output,
    $.type,
  ],

  conflicts: $ => [],

  rules: {
    file: $ => seq(repeat($.inner_attribute), repeat($.item)),

    item: $ => choice(
      $.function,
      $.extern_block,
      // TODO other items
      //  - static items (including constants)
      //  - imports
      //  - ADTs
      //  - impl blocks?
      //  - traits
    ),


    inner_attribute: $ => seq("#^[", $.attr, "]"),
    outer_attribute: $ => seq("#[", $.attr, "]"),
    attr: $ => seq(
      $.path,
      optional(choice(
        seq("=", field("value", $.attr_data_value)),
        parenthesized(sepBy(",", field("arg", $.attr_data_value))),
      )),
    ),
    attr_data_value: $ => choice(
      $.literal,
      $.attr,
    ),


    function: $ => seq(
      repeat($.outer_attribute),
      optional(field("vis", $.visibility_modifier)),
      optional(field("modifier", $.function_modifier)),
      "fn",
      // TODO generic params
      field("name", $.identifier),
      $.inputs,
      optional($.output),
      ":",
      field("body", $.expr),
    ),
    function_modifier: $ => choice(
      "const",
      "unsafe",
      alias(
        seq("extern", optional(field("abi", $.string_literal))),
        $.extern,
      ),
    ),


    extern_block: $ => seq(
      "extern",
      optional(field("abi", $.string_literal)),
      braced(repeat(field("item", $.extern_item))),
    ),
    extern_item: $ => choice($.extern_function),
    extern_function: $ => seq(
      optional(field("vis", $.visibility_modifier)),
      "fn",
      field("name", $.identifier),
      $.inputs,
      optional($.output),
      ";"
    ),


    inputs: $ => parenthesized(sepBy(",", field("input", $.annotated))),
    annotated: $ => seq($.identifier, ":", $.type),

    output: $ => seq("->", field("output", $.type)),


    visibility_modifier: $ => seq(
      "pub",
      optional(parenthesized(
        field("restriction", choice("super", "package")),
      )),
    ),


    type: $ => choice(
      $.basic_type,
      $.tuple_type,
      $.function_type,
      "Self",
    ),

    basic_type: $ => seq($.path, optional($.generic_args)),

    unit_type: $ => token(seq("(", ")")),

    tuple_type: $ => parenthesized(sepBy1(",", $.type)),

    function_type: $ => seq(
      $.function_modifier,
      "fn",
      parenthesized(sepBy(",", field("input", $.type))),
      optional(seq("->", field("output", $.type)))
    ),

    type_projection: $ => seq(
      field("base", $.type),
      "::",
      $.identifier,
      optional($.generic_args),
    ),

    generic_params: $ => seq("<", sepBy1(",", $.generic_param), ">"),

    generic_param: $ => choice(
      seq(
        "const",
        field("name", $.identifier),
        ":",
        $.type,
        optional(seq("=", field("default", $.expr))),
      ),
      seq(
        field("name", $.identifier),
        optional(seq("=", field("default", $.type))),
      ),
    ),

    generic_args: $ => seq(
      "::<",
      sepBy1(
        ",",
        choice(
          $.infer,
          field("value", $.expr),
        )
      ),
      ">",
    ),

    path: $ => seq(
      choice(
        seq(optional("::"), field("segment", $.identifier)),
        "package",
        "self",
        sepBy1("::", "super", false),
      ),
      optional(seq(
        "::",
        sepBy1("::", field("segment", $.identifier), false),
      )),
    ),


    expr: $ => choice(
      $.literal,
      $.tuple_expression,
      $.codeblock,
      // TODO unary operation
      // TODO binary operation
      // TODO member access
      // TODO cast operation
    ),

    codeblock: $ => braced(seq(
      repeat($.statement),
      field("trailing", optional($.expr)),
    )),

    statement: $ => seq(optional(choice($.let_binding, $.expr)), ";"),

    tuple_expression: $ => parenthesized(
      sepBy(",", field("member", $.expr)),
    ),

    let_binding: $ => seq(
      "let",
      $.identifier,
      optional(seq(":", $.type)),
      ":=",
      field("value", $.expr),
    ),


    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,


    infer: $ => "_",


    literal: $ => choice(
      $.string_literal,
      $.boolean_literal,
      $.numeric_literal,
    ),
    string_literal: $ => /"[^"]*"/,
    // TODO more robust string literals
    //  - multiline
    //  - unescaped?
    //  - with quotes
    boolean_literal: $ => choice("true", "false"),
    numeric_literal: $ => seq(
      choice(
        seq(
          field("digits", $.digits),
          optional(seq(".", field("float_part", $.digits))),
        ),
        seq(
          field("prefix", "0x"),
          field("digits", $.hex_digits),
          optional(seq(".", field("float_part", $.hex_digits))),
        ),
        seq(
          field("prefix", "0b"),
          field("digits", $.bin_digits),
          optional(seq(".", field("float_part", $.bin_digits))),
        ),
      ),
      field("suffix", optional(choice(...NUMERIC_TYPES))),
    ),
    digits: $ => /\d+/,
    bin_digits: $ => /[01]+/,
    hex_digits: $ => /[\da-f]+/,


    word: $ => /[_\p{XID_Start}][_\p{XID_Continue}]*/,
  },
});

function sepBy(sep, rule, trailing = true) {
  return optional(sepBy1(sep, rule, trailing));
}

function sepBy1(sep, rule, trailing = true) {
  return trailing ?
    seq(rule, repeat(seq(sep, rule)), optional(sep)) :
    seq(rule, repeat(seq(sep, rule)));
}

function parenthesized(rule) {
  return seq("(", rule, ")");
}

function bracketed(rule) {
  return seq("[", rule, "]");
}

function braced(rule) {
  return seq("{", rule, "}");
}
