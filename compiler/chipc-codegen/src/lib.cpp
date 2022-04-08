#include "../include/chipc-codegen.hpp"
#include "chipc-mir/src/lib.rs.h"

#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/Instruction.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/LegacyPassManager.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Verifier.h"
#include "llvm/Support/FileSystem.h"
#include "llvm/Support/Host.h"
#include "llvm/Support/TargetRegistry.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/Support/raw_os_ostream.h"
#include "llvm/Target/TargetMachine.h"
#include "llvm/Target/TargetOptions.h"

#include <algorithm>
#include <filesystem>
#include <iostream>

namespace fs      = std::filesystem;
namespace codegen = chipc::codegen;
using chipc::mir::Package;
using codegen::CodeGen;
using llvm::StringRef;

std::unique_ptr<CodeGen> codegen::new_code_gen(rust::Str name,
                                               const mir::Package& package) {
  return std::make_unique<CodeGen>(
      CodeGen::create(std::string_view{name.data(), name.size()}, package));
}

struct CodeGen::Impl {
  Impl(std::string_view name);

  llvm::Function* lower_function(const mir::Function&);

  void lower_body(llvm::Function&, const mir::Body&);

  llvm::FunctionType* lower_function_type(const mir::Type& output,
                                          rust::Slice<const mir::Type*> inputs);

  llvm::Type* lower_type(const mir::Type&);

  llvm::Type* get_ptr(const mir::Type*);

  llvm::LLVMContext context;
  llvm::IRBuilder<> builder;
  llvm::Module module;
  llvm::StructType* size_type;
  llvm::TargetMachine* target_machine;
};

CodeGen::CodeGen(std::unique_ptr<Impl> pimpl): pimpl{std::move(pimpl)} {}

CodeGen CodeGen::create(std::string_view name, const Package& package) {
  auto pimpl = std::make_unique<Impl>(name);

  llvm::InitializeAllTargetInfos();
  llvm::InitializeAllTargets();
  llvm::InitializeAllTargetMCs();
  llvm::InitializeAllAsmParsers();
  llvm::InitializeAllAsmPrinters();

  std::string error;
  const std::string triple = llvm::sys::getProcessTriple();
  auto* target             = llvm::TargetRegistry::lookupTarget(triple, error);
  if(!target) {
    std::cerr << error << std::endl;
    std::exit(1);
  }
  // TODO get cpu features
  pimpl->target_machine =
      target->createTargetMachine(triple, llvm::sys::getHostCPUName(), "",
                                  llvm::TargetOptions{}, llvm::None);
  assert(pimpl->target_machine);

  pimpl->module.setTargetTriple(triple);
  pimpl->module.setDataLayout(pimpl->target_machine->createDataLayout());

  pimpl->size_type = llvm::StructType::create(
      "Size", pimpl->module.getDataLayout().getIntPtrType(pimpl->context));
  assert(pimpl->size_type != nullptr);

  for(const auto& function: package.functions) {
    pimpl->lower_function(function);
  }

  llvm::raw_os_ostream os = std::cerr;
  bool has_errors         = llvm::verifyModule(pimpl->module, &os);
  (void) has_errors;// TODO handle failure to verify module

  return CodeGen{std::move(pimpl)};
}

CodeGen::~CodeGen() = default;

void CodeGen::print_llvm_ir(std::ostream& ostream) const {
  llvm::raw_os_ostream os{ostream};
  pimpl->module.print(os, nullptr);
}

void CodeGen::print_llvm_ir_to_cout() const { this->print_llvm_ir(std::cout); }

void CodeGen::print_llvm_ir_to_string(std::string& s) const {
  llvm::raw_string_ostream ss{s};
  pimpl->module.print(ss, nullptr);
}

void CodeGen::emit_obj_file(rust::Str path) const {
  std::error_code error_code;

  fs::path p{std::string_view{path.data(), path.length()}};
  fs::create_directories(p.parent_path(), error_code);
  if(error_code) {
    std::cerr << "failed creating directory for output file: "
              << error_code.message() << std::endl;
    std::exit(1);
  }

  llvm::legacy::PassManager pass_manager;
  llvm::raw_fd_ostream file{StringRef{path.data(), path.length()}, error_code,
                            llvm::sys::fs::CD_CreateAlways};
  if(error_code) {
    std::cerr << "failed opening output file: " << error_code.message()
              << std::endl;
    std::exit(1);
  }
  if(pimpl->target_machine->addPassesToEmitFile(pass_manager, file, nullptr,
                                                llvm::CGFT_ObjectFile)) {
    std::cerr << "target machine cannot emit file of this type\n";
    std::exit(1);
  }
  pass_manager.run(pimpl->module);
  file.flush();
}

CodeGen::Impl::Impl(std::string_view name)
    : builder{this->context}, module{name, this->context} {}

llvm::Function* CodeGen::Impl::lower_function(const mir::Function& function) {
  const auto name = function.path().mangle();
  auto* func_type =
      this->lower_function_type(function.output(), function.inputs());

  // TODO use correct function abi
  llvm::Function::LinkageTypes linkage;
  switch(function.linkage()) {
    case mir::Linkage::Intern:
      linkage = llvm::Function::InternalLinkage;
      break;
    case mir::Linkage::Extern:
      if(const auto* body = function.body(); !body || body->blocks().empty()) {
        linkage = llvm::Function::AvailableExternallyLinkage;
      } else {
        linkage = llvm::Function::ExternalLinkage;
      }
      break;
  }
  auto* func = llvm::Function::Create(
      func_type, linkage, StringRef{name.data(), name.length()}, this->module);

  for(unsigned long i = 0;
      i < std::min(function.params().size(), func->arg_size()); ++i) {
    const auto& arg_name = function.params()[i];
    func->getArg(i)->setName(StringRef{arg_name.data(), arg_name.size()});
  }

  if(const auto* body = function.body()) this->lower_body(*func, *body);

  return func;
}

void CodeGen::Impl::lower_body(llvm::Function& func, const mir::Body& body) {
  std::vector<llvm::BasicBlock*> blocks;
  blocks.reserve(body.blocks().length());
  std::transform(
      body.blocks().begin(), body.blocks().end(), std::back_inserter(blocks),
      [this](const auto& block) {
        auto* basic_block = llvm::BasicBlock::Create(this->context, "bb");
        this->builder.SetInsertPoint(basic_block);

        std::vector<llvm::Value*> values;
        for(const auto& instr: block.instructions) {
          if(const auto* bin_op = instr.as_bin_op()) {
            auto* rhs = values[bin_op->operand0];
            auto* lhs = values[bin_op->operand1];

            using BinaryOp = llvm::Instruction::BinaryOps;
            BinaryOp op_code;
            switch(bin_op->op) {
              case mir::BinOp::Add:
                op_code = BinaryOp::Add;
                break;
              case mir::BinOp::FAdd:
                op_code = BinaryOp::FAdd;
                break;
              case mir::BinOp::Sub:
                op_code = BinaryOp::Sub;
                break;
              case mir::BinOp::FSub:
                op_code = BinaryOp::FSub;
                break;
              case mir::BinOp::Mul:
                op_code = BinaryOp::Mul;
                break;
              case mir::BinOp::FMul:
                op_code = BinaryOp::FMul;
                break;
              case mir::BinOp::UDiv:
                op_code = BinaryOp::UDiv;
                break;
              case mir::BinOp::SDiv:
                op_code = BinaryOp::SDiv;
                break;
              case mir::BinOp::FDiv:
                op_code = BinaryOp::FDiv;
                break;
            }

            values.push_back(this->builder.CreateBinOp(op_code, lhs, rhs));
          } else if(const auto* num_lit = instr.as_num_lit()) {
            switch(num_lit->kind) {
              case mir::NumLitKind::Floating:
                switch(num_lit->bits) {
                  case 32:
                    values.push_back(llvm::ConstantFP::get(
                        llvm::Type::getFloatTy(this->context),
                        *(float*) &num_lit->repr));
                    break;

                  case 64:
                    values.push_back(llvm::ConstantFP::get(
                        llvm::Type::getDoubleTy(this->context),
                        *(double*) &num_lit->repr));
                    break;

                  default:
                    assert(false && "reached unreachable code");
                }
                break;

              case mir::NumLitKind::Regular:
                values.push_back(llvm::ConstantInt::get(
                    llvm::Type::getIntNTy(this->context, num_lit->bits),
                    llvm::APSInt{
                        llvm::APInt{num_lit->bits, num_lit->repr, false},
                        true}));
                break;

              case mir::NumLitKind::Signed:
                values.push_back(llvm::ConstantInt::get(
                    llvm::Type::getIntNTy(this->context, num_lit->bits),
                    llvm::APSInt{
                        llvm::APInt{num_lit->bits, num_lit->repr, false},
                        false}));
                break;
            }
          } else {
            assert(false && "reached unreachable code");
          }
        }

        if(block.terminal.as_ret_void()) {
          this->builder.CreateRetVoid();
        } else if(auto* idx = block.terminal.as_ret_val()) {
          this->builder.CreateRet(values[*idx]);
        } else {
          assert(false && "reached unreachable code");
        };

        return basic_block;
      });

  auto* entry_block = llvm::BasicBlock::Create(this->context, "entry", &func);
  this->builder.SetInsertPoint(entry_block);
  const auto* void_type = llvm::Type::getVoidTy(this->context);
  // TODO add variables for params?
  for(const auto* var_type: body.variables()) {
    assert(var_type);
    auto* type = this->lower_type(*var_type);
    assert(type != nullptr);
    assert(type != void_type);
    this->builder.CreateAlloca(type, nullptr, "var");
  }
  this->builder.CreateBr(blocks[0]);

  for(auto* block: blocks) func.getBasicBlockList().push_back(block);
}

llvm::FunctionType*
CodeGen::Impl::lower_function_type(const mir::Type& output,
                                   rust::Slice<const mir::Type*> inputs) {
  auto* ret = this->lower_type(output);

  std::vector<llvm::Type*> params;
  params.reserve(inputs.length());
  for(const auto* input: inputs) {
    assert(input);
    params.push_back(this->lower_type(*input));
  }

  return llvm::FunctionType::get(ret, params, false);
}

llvm::Type* CodeGen::Impl::lower_type(const mir::Type& type) {
  if(const auto* prim = type.as_primitive(); prim) {
    switch(*prim) {
      case mir::PrimTy::Bool:
        return llvm::Type::getInt1Ty(this->context);
      case mir::PrimTy::Int8:
      case mir::PrimTy::UInt8:
        return llvm::Type::getInt8Ty(this->context);
      case mir::PrimTy::Int16:
      case mir::PrimTy::UInt16:
        return llvm::Type::getInt16Ty(this->context);
      case mir::PrimTy::Int32:
      case mir::PrimTy::UInt32:
        return llvm::Type::getInt32Ty(this->context);
      case mir::PrimTy::Int64:
      case mir::PrimTy::UInt64:
        return llvm::Type::getInt64Ty(this->context);
      case mir::PrimTy::Int128:
      case mir::PrimTy::UInt128:
        return llvm::Type::getInt128Ty(this->context);
      case mir::PrimTy::ISize:
      case mir::PrimTy::USize:
        return this->size_type;
      case mir::PrimTy::Float32:
        return llvm::Type::getFloatTy(this->context);
      case mir::PrimTy::Float64:
        return llvm::Type::getDoubleTy(this->context);
      case mir::PrimTy::Str:
        return llvm::Type::getInt8Ty(this->context);
      case mir::PrimTy::Unit:
        return llvm::Type::getVoidTy(this->context);
      case mir::PrimTy::Never:
        return nullptr;
    }
  } else if(const auto* inner = type.as_ref_type()) {
    return this->get_ptr(inner);
  } else {
    return nullptr;
  }
}

llvm::Type* CodeGen::Impl::get_ptr(const mir::Type* type) {
  if(!type) return llvm::Type::getVoidTy(this->context)->getPointerTo();

  auto* llvm_type = this->lower_type(*type);
  if(!llvm_type) return nullptr;

  auto* ptr_type = llvm_type->getPointerTo();
  if(type->sized()) return ptr_type;

  return llvm::StructType::get(ptr_type, this->size_type);
}
