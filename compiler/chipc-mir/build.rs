fn main() {
  cxx_build::bridge("src/lib.rs")
    .compiler("clang")
    .flag("-Wno-duplicate-decl-specifier")
    .compile(env!("CARGO_PKG_NAME"));
  println!("cargo:rerun-if-changed=src/lib.rs");
}
