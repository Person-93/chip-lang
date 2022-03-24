use proc_macro::TokenStream;
use proc_macro2::Span;
use quote::{quote_spanned, ToTokens};
use syn::{
  parse::Nothing, parse_macro_input, parse_quote_spanned, ItemFn, Stmt,
};

#[proc_macro_attribute]
pub fn nextest_main(attr: TokenStream, input: TokenStream) -> TokenStream {
  parse_macro_input!(attr as Nothing);
  let mut input = parse_macro_input!(input as ItemFn);

  if input.sig.ident != "main" {
    let err = quote_spanned! {input.sig.ident.span() =>
      compile_error!("the nextest_main test harness should be used on the main function");
    };
    let mut tokens = input.into_token_stream();
    tokens.extend(err);
    return tokens.into();
  }

  let mut stmts: Vec<Stmt> = parse_quote_spanned! {Span::mixed_site() =>
    extern crate std;
    use std::{env, process};

    let mut args = env::args();
    match args.nth(1) {
      Some(arg) if arg == "--list" => {
        if !args.any(|arg| arg == "--ignored") {
          println!(": test");
        }
        process::exit(0);
      }
      Some(arg) if ["--exact", "-q", "--quiet"].contains(&arg.as_str()) => (),
      Some(arg) => {
        eprintln!("unrecognized argument: {}", arg);
        process::exit(1);
      }
      None => (),
    }
  };

  stmts.append(&mut input.block.stmts);

  input.block.stmts = stmts;

  input.into_token_stream().into()
}
