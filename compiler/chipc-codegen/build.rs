use serde::Serialize;
use std::{
  env,
  fs::File,
  path::Path,
  process::{Command, Stdio},
};

fn main() {
  let mut cc = cxx_build::bridge("src/lib.rs");

  let llvm_flags = llvm_config("--cxxflags");
  for flag in llvm_flags.split_whitespace() {
    cc.flag(flag);
  }
  cc.compiler("clang")
    .flag("-std=c++17")
    .flag("-Wno-c++17-extensions")
    .flag("-Wno-duplicate-decl-specifier")
    .flag("--system-header-prefix=llvm");

  let file = Path::new("src/lib.cpp")
    .canonicalize()
    .unwrap()
    .into_os_string()
    .into_string()
    .unwrap();
  let tool = cc.get_compiler();
  let mut arguments: Vec<_> = tool
    .args()
    .iter()
    .map(|arg| arg.to_str().unwrap().to_owned())
    .collect();
  arguments.push(file.clone());
  let commands = vec![CompileCmd {
    directory: env::current_dir()
      .unwrap()
      .into_os_string()
      .into_string()
      .unwrap(),
    arguments,
    file,
  }];
  let file = File::options()
    .create(true)
    .write(true)
    .truncate(true)
    .open("compile_commands.json")
    .unwrap();
  serde_json::to_writer_pretty(file, &commands).unwrap();

  cc.file("src/lib.cpp")
    .compile(concat!(env!("CARGO_PKG_NAME")));

  let llvm_ld_flags = llvm_config("--ldflags");
  for flag in llvm_ld_flags.split_whitespace() {
    println!("cargo:rustc-link-arg={flag}");
  }

  let llvm_libs = llvm_config("--libs");
  for lib in llvm_libs.split_whitespace() {
    let lib = lib.strip_prefix("-l").unwrap_or(lib).trim();
    println!("cargo:rustc-link-lib={lib}");
  }

  println!("cargo:rerun-if-changed=src/lib.rs",);
  println!("cargo:rerun-if-changed=src/lib.cpp",);
  println!("cargo:rerun-if-changed=include",);
}

#[derive(Serialize)]
struct CompileCmd {
  directory: String,
  arguments: Vec<String>,
  file: String,
}

fn llvm_config(arg: &str) -> String {
  let llvm_config = Command::new("llvm-config")
    .arg(arg)
    .stderr(Stdio::inherit())
    .output()
    .expect("failed running llvm-config");
  if !llvm_config.status.success() {
    panic!("failed running llvm-config");
  }
  String::from_utf8(llvm_config.stdout)
    .expect("failed parsing llvm-config output as utf8")
}
