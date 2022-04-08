use darling::FromMeta;
use proc_macro2::{Span, TokenStream};
use quote::{quote, quote_spanned, ToTokens};
use syn::{
  parse_quote_spanned, spanned::Spanned, AttributeArgs, ItemFn, ReturnType,
};

#[derive(FromMeta)]
#[darling(and_then = "Config::post_process")]
struct Config {
  #[darling(default)]
  with_name: bool,
  #[darling(default)]
  snapshot: bool,
}

impl Config {
  fn post_process(mut self) -> darling::Result<Self> {
    if self.snapshot {
      self.with_name = true;
    }
    Ok(self)
  }
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
  let new_main = new_main(&config, item_fn);
  Ok(new_main.into_token_stream())
}

fn new_main(config: &Config, original_main: ItemFn) -> ItemFn {
  let ident = &original_main.sig.ident;
  let output = &original_main.sig.output;
  let initial_match_arms = initial_match_arms(config);
  let final_match_arms = final_match_args(config, output);

  parse_quote_spanned! {Span::mixed_site() =>
    fn #ident() #output {
      use std::{env, process};

      const IGNORED_ARGS: &[&str] = &["quiet", "nocapture"];
      const IGNORED_FLAGS: &str = "q";
      const SKIP: &[&str] = &["format"];

      let mut raw_args = env::args().skip(1);

      let mut args = raw_args
        .by_ref()
        .scan(false, |should_skip, mut arg| {
        if arg.starts_with("--") {
          arg.replace_range(0..2, "");

          if *should_skip {
            eprintln!("expected value found '--{}'", arg);
            process::exit(1);
          }

          let has_value = match arg.find('=') {
            Some(idx) => {
              arg.truncate(idx);
              true
            }
            None => false,
          };

          if SKIP.contains(&arg.as_str()) {
            *should_skip = has_value;
            None
          } else if IGNORED_ARGS.contains(&arg.as_str()) {
            None
          } else {
            Some(arg)
          }
        } else if arg.starts_with('-') {
          arg.remove(0);

          if *should_skip {
            eprintln!("expected value found '-{}'", arg);
            process::exit(1);
          }

          let flag = match arg.chars().next() {
            Some(flag) => flag,
            None => {
              eprintln!("expected arg or flag found '-'");
              process::exit(1);
            }
          };

          if IGNORED_FLAGS.contains(flag) {
            None
          } else {
            Some(arg)
          }
        } else {
          eprintln!("unexpected `{}` in command line args", arg);
          process::exit(1);
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
    Some(arg) if arg == "list" => {
      if !raw_args.any(|arg| arg == "--ignored") {
        for case in cases() {
          println!("{}: test", case);
        }
      }
      process::exit(0);
    }

    Some(arg) if arg == "exact" => {
      let name = raw_args.next().unwrap();
      let name = &name;
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

  if config.with_name {
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
        for ref name in cases() {
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
  if config.with_name {
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
