// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Commands.TestCommand
#include "NUnit/Framework/Internal/Commands/TestCommand.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestMethod
  class TestMethod;
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
  // Forward declaring type: TestResult
  class TestResult;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Commands
namespace NUnit::Framework::Internal::Commands {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Commands.TestMethodCommand
  class TestMethodCommand : public NUnit::Framework::Internal::Commands::TestCommand {
    public:
    // private readonly NUnit.Framework.Internal.TestMethod testMethod
    // Size: 0x8
    // Offset: 0x18
    NUnit::Framework::Internal::TestMethod* testMethod;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::TestMethod*) == 0x8);
    // private readonly System.Object[] arguments
    // Size: 0x8
    // Offset: 0x20
    ::Array<::Il2CppObject*>* arguments;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // Creating value type constructor for type: TestMethodCommand
    TestMethodCommand(NUnit::Framework::Internal::TestMethod* testMethod_ = {}, ::Array<::Il2CppObject*>* arguments_ = {}) noexcept : testMethod{testMethod_}, arguments{arguments_} {}
    // Deleting conversion operator: operator NUnit::Framework::Internal::Test*
    constexpr operator NUnit::Framework::Internal::Test*() const noexcept = delete;
    // public System.Void .ctor(NUnit.Framework.Internal.TestMethod testMethod)
    // Offset: 0x171F5E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestMethodCommand* New_ctor(NUnit::Framework::Internal::TestMethod* testMethod) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Commands::TestMethodCommand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestMethodCommand*, creationType>(testMethod)));
    }
    // private System.Object RunTestMethod(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x171F7C4
    ::Il2CppObject* RunTestMethod(NUnit::Framework::Internal::ITestExecutionContext* context);
    // private System.Object RunNonAsyncTestMethod(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x171F7C8
    ::Il2CppObject* RunNonAsyncTestMethod(NUnit::Framework::Internal::ITestExecutionContext* context);
    // public override NUnit.Framework.Internal.TestResult Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x171F628
    // Implemented from: NUnit.Framework.Internal.Commands.TestCommand
    // Base method: NUnit.Framework.Internal.TestResult TestCommand::Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    NUnit::Framework::Internal::TestResult* Execute(NUnit::Framework::Internal::ITestExecutionContext* context);
  }; // NUnit.Framework.Internal.Commands.TestMethodCommand
  #pragma pack(pop)
  static check_size<sizeof(TestMethodCommand), 32 + sizeof(::Array<::Il2CppObject*>*)> __NUnit_Framework_Internal_Commands_TestMethodCommandSizeCheck;
  static_assert(sizeof(TestMethodCommand) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Commands::TestMethodCommand*, "NUnit.Framework.Internal.Commands", "TestMethodCommand");
