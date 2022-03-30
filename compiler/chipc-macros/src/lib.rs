#![forbid(unsafe_code)]

use darling::FromDeriveInput;
use proc_macro::TokenStream;
use quote::ToTokens;
use syn::{parse_macro_input, DeriveInput};

mod hir_pretty;

macro_rules! derive_macro {
  ($mod:path => $name:ident $(($($attr:ident)*))?) => {
    #[proc_macro_derive($name $(, attributes($($attr)*))?)]
    #[allow(non_snake_case)]
    pub fn $name(input: TokenStream) -> TokenStream {
      use $mod::*;
      let input = parse_macro_input!(input as DeriveInput);
      match $name::from_derive_input(&input) {
        Ok(input) => input.into_token_stream(),
        Err(err) => err.write_errors(),
      }
      .into()
    }
  };
}

derive_macro!(hir_pretty => HirPretty(pretty));
