#[cfg(unix)]
use std::os::unix::process::CommandExt as UnixCommand;
use std::{
  fmt::{self, Display, Formatter},
  io,
  process::{self, Command, ExitStatus},
};

pub trait CommandExt {
  fn exec(&mut self) -> Error;

  fn wait(&mut self) -> Result<(), Error>;
}

impl CommandExt for Command {
  /// Run the command and exit with its exit code.
  ///
  /// On unix it uses `exec`
  fn exec(&mut self) -> Error {
    #[cfg(unix)]
    return Error {
      source: UnixCommand::exec(self),
      message: format!(
        "failed to exec child process: {}",
        self.get_program().to_string_lossy()
      ),
    };

    #[cfg(not(unix))]
    match self.wait() {
      Ok(status) => process::exit(status.code().unwrap()),
      Err(err) => err,
    }
  }

  /// Spawn the command and wait for it to complete
  fn wait(&mut self) -> Result<(), Error> {
    match self
      .spawn()
      .map_err(|source| Error {
        source,
        message: format!(
          "failed to spawn child process: {}",
          self.get_program().to_string_lossy()
        ),
      })?
      .wait()
    {
      Ok(status) => {
        status.exit_on_err();
        Ok(())
      }
      Err(source) => Err(Error {
        source,
        message: format!(
          "failed waiting for child process: {}",
          self.get_program().to_string_lossy()
        ),
      }),
    }
  }
}

pub trait ExitStatusExt {
  fn exit_on_err(&self);

  fn exit_on_err_with<F: FnOnce()>(&self, f: F);
}

impl ExitStatusExt for ExitStatus {
  fn exit_on_err(&self) {
    if !self.success() {
      print_status_and_exit(self);
    }
  }

  fn exit_on_err_with<F: FnOnce()>(&self, f: F) {
    if !self.success() {
      f();
      print_status_and_exit(self);
    }
  }
}

fn print_status_and_exit(status: &ExitStatus) -> ! {
  eprintln!("\n--------------------------------------\n{}", status);
  process::exit(status.code().unwrap_or(1));
}

#[derive(Debug)]
pub struct Error {
  message: String,
  source: io::Error,
}

impl std::error::Error for Error {
  fn source(&self) -> Option<&(dyn std::error::Error + 'static)> {
    Some(&self.source)
  }
}

impl Display for Error {
  fn fmt(&self, f: &mut Formatter<'_>) -> fmt::Result {
    Display::fmt(&self.message, f)
  }
}
