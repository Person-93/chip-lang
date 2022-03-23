const UNSIGNED_TYPES = [
  "u8",
  "u16",
  "u32",
  "u64",
  "u128",
  "usize",
];

const SIGNED_TYPES = [
  "i8",
  "i16",
  "i32",
  "i64",
  "i128",
  "isize",
];

const INT_TYPES = [...UNSIGNED_TYPES, ...SIGNED_TYPES];

const FLOAT_TYPES = ["f32", "f64"];

const NUMERIC_TYPES = [...INT_TYPES, ...FLOAT_TYPES];

module.exports = grammar({
  name: "chip",

  extras: $ => [/\s/], // TODO add line comments and block comments

  word: $ => $.identifier,

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
      optional(field("output", $.output)),
      ";"
    ),


    inputs: $ => parenthesized(sepBy(",", field("input", $.annotated))),
    annotated: $ => seq($.identifier, ":", $.type),

    output: $ => seq("->", field("output", $.type)),


    visibility_modifier: $ => seq(
      "pub",
      optional(parenthesized(
        field("restriction", choice("self", "super", "package")),
      )),
    ),


    type: $ => choice(
      $.basic_type,
      $.unit_type,
      $.tuple_type,
      $.function_type,
      "Self",
    ),

    basic_type: $ => seq($.path, optional($.generic_args)),

    unit_type: $ => token(seq("(", ")")),

    tuple_type: $ => parenthesized(sepBy1(",", field("element", $.type))),

    function_type: $ => seq(
      field("modifier", $.function_modifier),
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
        field("generic_arg", choice($.infer, $.expr)),
      ),
      ">",
    ),

    path: $ => seq(
      choice(
        seq(
          optional(field("rooted", "::")),
          field("first_segment", $.identifier),
        ),
        named_literal("package"),
        named_literal("self"),
        sepBy1("::", named_literal("super"), false),
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
      $.basic_type,
      $.unit_type,
      // TODO unary operation
      // TODO binary operation
      // TODO member access
      // TODO cast operation
    ),

    codeblock: $ => braced(seq(
      repeat($.statement),
      field("trailing", optional($.expr)),
    )),

    statement: $ => seq(
      optional(choice($.let_binding, $.expr)),
      ";",
    ),

    tuple_expression: $ => parenthesized(
      sepBy(",", field("element", $.expr)),
    ),

    let_binding: $ => seq(
      "let",
      $.identifier,
      optional(seq(":", field("type", $.type))),
      ":=",
      field("value", $.expr),
    ),


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


    identifier: $ => /[_\p{XID_Start}][_\p{XID_Continue}]*/,
  },
});

/**
 * Create a rule that matches <i>zero</i> or more items separated by a given token
 *
 * @param {string} sep - The token that separates the items.
 * @param {RuleOrLiteral} rule - The item in the list.
 * @param {boolean} trailing - Is a trailing separator permitted?
 * @returns {ChoiceRule}
 */
function sepBy(sep, rule, trailing = true) {
  return optional(sepBy1(sep, rule, trailing));
}

/**
 * Create a rule that matches <i>one</i> or more items separated by a given token.
 *
 * @param {string} sep - The token that separates the items.
 * @param {RuleOrLiteral} rule - The item in the list.
 * @param {boolean} trailing - Is a trailing separator permitted?
 * @returns {SeqRule}
 */
function sepBy1(sep, rule, trailing = true) {
  return trailing ?
    seq(rule, repeat(seq(sep, rule)), optional(sep)) :
    seq(rule, repeat(seq(sep, rule)));
}

/**
 * Create a rule that matches the given rule in parentheses.
 *
 * @param {RuleOrLiteral} rule
 * @returns {SeqRule}
 */
function parenthesized(rule) {
  return seq("(", rule, ")");
}

/**
 * Create a rule that matches the given rule in brackets.
 *
 * @param {RuleOrLiteral} rule
 * @returns {SeqRule}
 */
function bracketed(rule) {
  return seq("[", rule, "]");
}

/**
 * Create a rule that matches the given rule in braces.
 *
 * @param {RuleOrLiteral} rule
 * @returns {SeqRule}
 */
function braced(rule) {
  return seq("{", rule, "}");
}

/**
 * Create a named field that matches the name of the field.
 *
 * @param {string} name
 * @returns {FieldRule}
 */
function named_literal(name) {
  return field(name, name);
}
