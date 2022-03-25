use darling::FromMeta;
use proc_macro2::{Span, TokenStream};
use quote::{quote, quote_spanned, ToTokens};
use syn::{
  parse_quote_spanned, spanned::Spanned, AttributeArgs, ItemFn, ReturnType,
};

#[derive(FromMeta)]
struct Config {
  #[darling(default)]
  snapshot: bool,
}

pub fn main(
  attr: AttributeArgs,
  item_fn: ItemFn,
) -> Result<TokenStream, TokenStream> {
  let config = Config::from_list(&attr).map_err(|err| err.write_errors())?;

  if item_fn.sig.ident != "main" {
    let err = quote_spanned! {item_fn.sig.ident.span() =>
      compile_error!("the nextest_main test harness should be used on the main function");
    };
    let mut tokens = item_fn.into_token_stream();
    tokens.extend(err);
    return Err(tokens);
  }
  let new_main: ItemFn = new_main(&config, item_fn);
  Ok(new_main.into_token_stream())
}

fn new_main(config: &Config, original_main: ItemFn) -> ItemFn {
  let ident = &original_main.sig.ident;
  let output = &original_main.sig.output;
  let initial_match_arms = initial_match_arms(config);
  let final_match_arms = final_match_args(config, output);

  parse_quote_spanned! {Span::mixed_site() =>
    fn #ident() #output {
      extern crate std;
      use std::{env, process};

      const IGNORE: &[&str] = &["-q", "--quiet", "--nocapture"];
      const SKIP: &[&str] = &["--format"];

      let mut args =
        env::args()
          .skip(1)
          .scan(false, |should_skip, arg| {
        if *should_skip {
          *should_skip = false;
          None
        } else if SKIP.contains(&arg.as_str()) {
          *should_skip = true;
          None
        } else if IGNORE.contains(&arg.as_str()) {
          None
        } else {
          Some(arg)
        }
      });

      match args.next() {
        #initial_match_arms
        #final_match_arms
      }

      #original_main
    }
  }
}

fn initial_match_arms(config: &Config) -> TokenStream {
  let run_main = run_main(config);
  quote_spanned! {Span::mixed_site() =>
    Some(arg) if arg == "--list" => {
      if !args.any(|arg| arg == "--ignored") {
        for case in cases() {
          println!("{}: test", case);
        }
      }
      process::exit(0);
    }

    Some(arg) if arg == "--exact" => {
      let name = args.next().unwrap();
      #run_main
    }

    Some(arg) if arg.starts_with('-') => {
      eprintln!("unrecognized argument: {}", arg);
      process::exit(1);
    }
  }
}

fn final_match_args(config: &Config, output: &ReturnType) -> TokenStream {
  let run_main = run_main(config);

  if config.snapshot {
    let err = match output {
      ReturnType::Default => None,
      ReturnType::Type(_, ty) => Some(quote_spanned! {ty.span() =>
        compile_error!("main function should have default return type");
      }),
    };

    quote_spanned! {Span::mixed_site() =>
      Some(arg) => {
        eprintln!("unrecognized argument: {}", arg);
        process::exit(1);
      }
      None => {
        #err
        use std::panic::catch_unwind;

        let mut panicked = false;
        for name in cases() {
          if let Err(_) = catch_unwind(|| #run_main) {
            panicked = true;
          }
        }
        if panicked {
          process::exit(1);
        }
      }
    }
  } else {
    quote_spanned! {Span::mixed_site() =>
      Some(arg) => {
        eprintln!("unrecognized argument: {}", arg);
        process::exit(1);
      }
      None => {
        #run_main
      }
    }
  }
}

fn run_main(config: &Config) -> TokenStream {
  if config.snapshot {
    quote_spanned! {Span::mixed_site() =>
      {
        chip_snapshot_tests::with_settings!(
          { snapshot_suffix => name.clone() },
          { main(name) }
        );
      }
    }
  } else {
    quote! { main() }
  }
}
