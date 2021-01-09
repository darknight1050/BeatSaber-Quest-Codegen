// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Commands.TestCommand
#include "NUnit/Framework/Internal/Commands/TestCommand.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: Test
  class Test;
  // Forward declaring type: TestResult
  class TestResult;
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Commands
namespace NUnit::Framework::Internal::Commands {
  // Size: 0x18
  // Autogenerated type: NUnit.Framework.Internal.Commands.SkipCommand
  // [] Offset: FFFFFFFF
  class SkipCommand : public NUnit::Framework::Internal::Commands::TestCommand {
    public:
    // Creating value type constructor for type: SkipCommand
    SkipCommand() noexcept {}
    // private System.String GetSkipReason()
    // Offset: 0x13EF888
    ::Il2CppString* GetSkipReason();
    // private System.String GetProviderStackTrace()
    // Offset: 0x13EF980
    ::Il2CppString* GetProviderStackTrace();
    // public System.Void .ctor(NUnit.Framework.Internal.Test test)
    // Offset: 0x13EF674
    // Implemented from: NUnit.Framework.Internal.Commands.TestCommand
    // Base method: System.Void TestCommand::.ctor(NUnit.Framework.Internal.Test test)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SkipCommand* New_ctor(NUnit::Framework::Internal::Test* test) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Commands::SkipCommand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SkipCommand*, creationType>(test)));
    }
    // public override NUnit.Framework.Internal.TestResult Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x13EF6A8
    // Implemented from: NUnit.Framework.Internal.Commands.TestCommand
    // Base method: NUnit.Framework.Internal.TestResult TestCommand::Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    NUnit::Framework::Internal::TestResult* Execute(NUnit::Framework::Internal::ITestExecutionContext* context);
  }; // NUnit.Framework.Internal.Commands.SkipCommand
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Commands::SkipCommand*, "NUnit.Framework.Internal.Commands", "SkipCommand");
#pragma pack(pop)
