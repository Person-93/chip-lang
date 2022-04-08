use chipc_mir::Package;
use cxx::UniquePtr;
pub use ffi::*;

#[cxx::bridge(namespace = "chipc::codegen")]
mod ffi {
  unsafe extern "C++" {
    include!("chipc-codegen/include/chipc-codegen.hpp");

    type CodeGen<'cg>;

    /// # Safety
    /// This function is unsafe because it doesn't enforce lifetime bounds.
    /// Use [`CodeGen::new`] instead.
    pub(crate) unsafe fn new_code_gen<'mir, 'cg>(
      name: &str,
      package: &'cg Package<'mir>,
    ) -> UniquePtr<CodeGen<'cg>>;

    #[cxx_name = "print_llvm_ir_to_cout"]
    pub fn print_llvm_ir(self: Pin<&CodeGen<'_>>);

    pub fn print_llvm_ir_to_string(
      self: Pin<&CodeGen<'_>>,
      s: Pin<&mut CxxString>,
    );

    pub fn emit_obj_file(self: Pin<&CodeGen<'_>>, path: &str);

    #[namespace = "chipc::mir"]
    type Package<'mir> = chipc_mir::Package<'mir>;
  }
}

impl<'cg> CodeGen<'cg> {
  pub fn new<'mir: 'cg>(
    name: &str,
    package: &'cg Package<'mir>,
  ) -> UniquePtr<Self> {
    unsafe { new_code_gen(name, package) }
  }
}
