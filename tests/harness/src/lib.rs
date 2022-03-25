use proc_macro::TokenStream;
use syn::{parse_macro_input, AttributeArgs, ItemFn};

mod nextest;

#[proc_macro_attribute]
pub fn nextest_main(attr: TokenStream, input: TokenStream) -> TokenStream {
  let attr = parse_macro_input!(attr as AttributeArgs);
  let input = parse_macro_input!(input as ItemFn);
  let (Ok(tokens) | Err(tokens)) = nextest::main(attr, input);
  tokens.into()
}
