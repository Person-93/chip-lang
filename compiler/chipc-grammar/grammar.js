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

  rules: {
    file: $ => seq(repeat($._inner_attribute), repeat($._item)),

    _item: $ => choice(
      $.function,
      $.extern_block,
      // TODO other items
      //  - top-level attrs
      //  - static items (including constants)
      //  - imports
      //  - ADTs
      //  - impl blocks?
      //  - traits
    ),


    _inner_attribute: $ => seq("#^[", $.attr, "]"),
    _outer_attribute: $ => seq("#[", $.attr, "]"),
    attr: $ => seq(
      $.path,
      optional(choice(
        seq("=", field("value", $._attr_data_value)),
        seq(
          "(",
          field("args", sepBy(",", $._attr_data_value)),
          ")",
        ),
      )),
    ),
    _attr_data_value: $ => choice(
      $._literal,
      $.attr,
    ),


    function: $ => seq(
      repeat($._outer_attribute),
      optional($.visibility_modifier),
      optional($.function_modifier),
      "fn",
      // TODO generic params
      field("name", $.identifier),
      "(",
      field(
        "inputs",
        sepBy(",", seq(
          field("identifier", $.identifier),
          ":",
          field("type", $.type),
        )),
      ),
      ")",
      optional(seq("->", field("output", $.type))),
      ":",
      field("body", $._expr),
    ),
    function_modifier: $ => choice(
      "const",
      "unsafe",
      seq("extern", field("abi", optional($.string_literal))),
    ),


    type: $ => $.path,

    extern_block: $ => seq(
      "extern",
      field("abi", optional($.string_literal)),
      "{",
      repeat($._extern_item),
      "}",
    ),
    _extern_item: $ => seq(choice($.extern_function), ";"),
    extern_function: $ => seq(
      optional($.visibility_modifier),
      "fn",
      field("name", $.identifier),
      "(",
      field(
        "inputs",
        sepBy(",", seq(
          field("identifier", $.identifier),
          ":",
          field("type", $.type),
        )),
      ),
      ")",
      optional(seq("->", field("output", $.type))),
    ),


    visibility_modifier: $ => seq(
      "pub",
      optional(seq("(",
        field("restriction", choice("super", "package")),
        ")"),
      ),
    ),


    _expr: $ => choice(
      $._literal,
      $.tuple_expression,
      $.codeblock,
      // TODO unary operation
      // TODO binary operation
      // TODO member access
      // TODO cast operation
    ),
    codeblock: $ => seq(
      "{",
      repeat($.statement),
      field("trailing", optional($._expr)),
      "}",
    ),
    statement: $ => seq(choice($._expr, $.let_binding), ";"),

    tuple_expression: $ => seq(
      "(",
      field("members", sepBy1(",", $._expr)),
      ")",
    ),

    let_binding: $ => seq(
      "let",
      $.identifier,
      ":=",
      field("value", $._expr),
    ),


    path: $ => seq(optional("::"), sepBy1("::", $.path_segment, false)),
    path_segment: $ => seq($.identifier, optional($.generic_params)),
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    generic_params: $ => seq("::<", sepBy1(",", $._expr), ">"),


    _literal: $ => choice(
      $.unit_literal,
      $.string_literal,
      $.boolean_literal,
      $.numeric_literal,
    ),
    unit_literal: $ => token(seq("(", ")")),
    string_literal: $ => /"[^"]*"/, // TODO handle escape sequence in string literal
    boolean_literal: $ => choice("true", "false"),
    numeric_literal: $ => seq(
      field("value", $.digits),
      optional(seq(".", field("float_part", $.digits))),
      field("suffix", optional(choice(...NUMERIC_TYPES))),
    ),
    digits: $ => /\d+/,


    word: $ => /[_\p{XID_Start}][_\p{XID_Continue}]*/
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
