use std::{
  error::Error,
  fmt::{self, Display, Formatter},
  process,
};

pub trait ResultExt<T, E> {
  fn exit(&self) -> !;

  fn exit_on_err(self) -> T;

  fn context(self, message: impl ToString) -> Result<T, AnyErr>
  where
    E: 'static;

  fn with_context<F, C>(self, f: F) -> Result<T, AnyErr>
  where
    E: 'static,
    F: FnOnce() -> C,
    C: ToString;
}

impl<T, E: Error> ResultExt<T, E> for Result<T, E> {
  fn exit(&self) -> ! {
    match self {
      Ok(_) => process::exit(0),
      Err(err) => {
        print_err(err);
        process::exit(1);
      }
    }
  }

  fn exit_on_err(self) -> T {
    match self {
      Ok(obj) => obj,
      Err(err) => err.exit(),
    }
  }

  fn context(self, message: impl ToString) -> Result<T, AnyErr>
  where
    E: 'static,
  {
    self.map_err(|source| AnyErr {
      message: message.to_string(),
      source: Some(Box::new(source)),
    })
  }

  fn with_context<F, C>(self, f: F) -> Result<T, AnyErr>
  where
    E: 'static,
    F: FnOnce() -> C,
    C: ToString,
  {
    self.map_err(|source| AnyErr {
      message: f().to_string(),
      source: Some(Box::new(source)),
    })
  }
}

pub trait ErrorExt: Error {
  fn exit(&self) -> ! {
    print_err(self);
    process::exit(1);
  }

  fn context(self, message: impl ToString) -> AnyErr
  where
    Self: Sized + 'static,
  {
    AnyErr {
      message: message.to_string(),
      source: Some(Box::new(self)),
    }
  }
}

impl<T: Error + ?Sized> ErrorExt for T {}

fn print_err<E: Error + ?Sized>(err: &E) {
  eprintln!("{err}");
  if let Some(mut err) = err.source() {
    eprintln!();
    eprintln!("Caused by:");
    eprintln!("  {err}");

    loop {
      err = match err.source() {
        Some(err) => err,
        None => break,
      };
      eprintln!("  {err}");
    }
  }
}

#[derive(Debug)]
pub struct AnyErr {
  message: String,
  source: Option<Box<dyn Error + 'static>>,
}

impl Error for AnyErr {
  fn source(&self) -> Option<&(dyn Error + 'static)> {
    self.source.as_deref()
  }
}

impl Display for AnyErr {
  fn fmt(&self, f: &mut Formatter<'_>) -> fmt::Result {
    Display::fmt(&self.message, f)
  }
}
