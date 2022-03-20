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
    file: $ => repeat($._item),

    _item: $ => seq(
      choice(
        $.function,
        // TODO other items
        //  - top-level attrs
        //  - static items (including constants)
        //  - imports
        //  - ADTs
        //  - impl blocks?
        //  - traits
      ),
    ),


    function: $ => seq(
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
      choice(";", seq(":", field("body", $.expr))),
    ),
    function_modifier: $ => choice(
      "const",
      "unsafe",
      seq("extern", field("abi", optional($.string_literal))),
    ),


    type: $ => $.path,


    visibility_modifier: $ => seq(
      "pub",
      optional(seq("(", choice("super", "package"), ")")),
    ),


    expr: $ => choice(
      $.literal,
      $.tuple_expression,
      // TODO unary operation
      // TODO binary operation
      // TODO member access
      // TODO cast operation
    ),

    tuple_expression: $ => seq("(", field("members", repeat($.expr)), ")"),


    path: $ => seq(optional("::"), sepBy1("::", $.path_segment)),
    path_segment: $ => seq($.identifier, optional($.generic_args)),
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    generic_args: $ => seq("::<", sepBy1(",", $.expr), ">"),


    literal: $ => choice(
      $.unit_literal,
      $.string_literal,
      $.boolean_literal,
      $.numeric_literal,
    ),
    unit_literal: $ => prec(2, seq("(", ")")),
    string_literal: $ => /"[^"]*"/, // TODO handle escape sequence in string literal
    boolean_literal: $ => choice("true", "false"),
    numeric_literal: $ => /\d+(\.\d+)?/,


    word: $ => /[_\p{XID_Start}][_\p{XID_Continue}]*/
  },
});

function sepBy(sep, rule, trailing = true) {
  return optional(sepBy1(sep, rule, trailing));
}

function sepBy1(sep, rule, trailing = true) {
  return seq(rule, repeat(seq(sep, rule)), trailing ? optional(sep) : undefined);
}
