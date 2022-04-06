#pragma once

#include "rust/cxx.h"

#include <iosfwd>
#include <memory>
#include <string_view>

namespace chipc::mir {
  struct Package;
}// namespace chipc::mir

namespace chipc::codegen {
  class CodeGen {
  public:
    static CodeGen create(std::string_view name, const mir::Package&);

    CodeGen()               = delete;
    CodeGen(const CodeGen&) = delete;
    CodeGen(CodeGen&&)      = default;
    CodeGen& operator=(const CodeGen&) = delete;
    CodeGen& operator=(CodeGen&&) = default;
    ~CodeGen();

    void print_llvm_ir(std::ostream&) const;

    void print_llvm_ir_to_cout() const;

    void print_llvm_ir_to_string(std::string&) const;

  private:
    struct Impl;

    CodeGen(std::unique_ptr<Impl>);

    std::unique_ptr<Impl> pimpl;
  };

  std::unique_ptr<codegen::CodeGen> new_code_gen(rust::Str name,
                                                 const mir::Package&);
}// namespace chipc::codegen
