// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: NUnit.Framework.Internal.Commands.DelegatingTestCommand
#include "NUnit/Framework/Internal/Commands/DelegatingTestCommand.hpp"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.IEnumerableTestMethodCommand
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/IEnumerableTestMethodCommand.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestResult
  class TestResult;
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine::TestTools::Logging
namespace UnityEngine::TestTools::Logging {
  // Forward declaring type: LogScope
  class LogScope;
}
// Forward declaring namespace: NUnit::Framework::Internal::Commands
namespace NUnit::Framework::Internal::Commands {
  // Skipping declaration: TestCommand because it is already included!
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityLogCheckDelegatingCommand
  class UnityLogCheckDelegatingCommand : public NUnit::Framework::Internal::Commands::DelegatingTestCommand, public UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand {
    public:
    // Nested type: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    // Nested type: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    // Nested type: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$$c__DisplayClass3_1
    class $$c__DisplayClass3_1;
    // Nested type: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3
    class $ExecuteEnumerable$d__3;
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Boolean>> s_AttributeCache
    static System::Collections::Generic::Dictionary_2<::CsObject*, System::Nullable_1<bool>>* _get_s_AttributeCache();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Boolean>> s_AttributeCache
    static void _set_s_AttributeCache(System::Collections::Generic::Dictionary_2<::CsObject*, System::Nullable_1<bool>>* value);
    // static private System.Boolean CaptureException(NUnit.Framework.Internal.TestResult result, System.Action action)
    // Offset: 0xE203E4
    static bool CaptureException(NUnit::Framework::Internal::TestResult* result, System::Action* action);
    // static private System.Boolean ExecuteAndCheckLog(UnityEngine.TestTools.Logging.LogScope logScope, NUnit.Framework.Internal.TestResult result, System.Action action)
    // Offset: 0xE200DC
    static bool ExecuteAndCheckLog(UnityEngine::TestTools::Logging::LogScope* logScope, NUnit::Framework::Internal::TestResult* result, System::Action* action);
    // static private System.Void PostTestValidation(UnityEngine.TestTools.Logging.LogScope logScope, NUnit.Framework.Internal.Commands.TestCommand command, NUnit.Framework.Internal.TestResult result)
    // Offset: 0xE20190
    static void PostTestValidation(UnityEngine::TestTools::Logging::LogScope* logScope, NUnit::Framework::Internal::Commands::TestCommand* command, NUnit::Framework::Internal::TestResult* result);
    // static private System.Boolean CheckLogs(NUnit.Framework.Internal.TestResult result, UnityEngine.TestTools.Logging.LogScope logScope)
    // Offset: 0xE204D4
    static bool CheckLogs(NUnit::Framework::Internal::TestResult* result, UnityEngine::TestTools::Logging::LogScope* logScope);
    // static private System.Boolean CheckFailingLogs(UnityEngine.TestTools.Logging.LogScope logScope, NUnit.Framework.Internal.TestResult result)
    // Offset: 0xE20848
    static bool CheckFailingLogs(UnityEngine::TestTools::Logging::LogScope* logScope, NUnit::Framework::Internal::TestResult* result);
    // static private System.Boolean CheckExpectedLogs(UnityEngine.TestTools.Logging.LogScope logScope, NUnit.Framework.Internal.TestResult result)
    // Offset: 0xE20900
    static bool CheckExpectedLogs(UnityEngine::TestTools::Logging::LogScope* logScope, NUnit::Framework::Internal::TestResult* result);
    // static private System.Boolean MustExpect(System.Reflection.MemberInfo method)
    // Offset: 0xE20584
    static bool MustExpect(System::Reflection::MemberInfo* method);
    // static private System.Void .cctor()
    // Offset: 0xE20A0C
    static void _cctor();
    // public System.Void .ctor(NUnit.Framework.Internal.Commands.TestCommand innerCommand)
    // Offset: 0xE1EAA8
    // Implemented from: NUnit.Framework.Internal.Commands.DelegatingTestCommand
    // Base method: System.Void DelegatingTestCommand::.ctor(NUnit.Framework.Internal.Commands.TestCommand innerCommand)
    static UnityLogCheckDelegatingCommand* New_ctor(NUnit::Framework::Internal::Commands::TestCommand* innerCommand);
    // public override NUnit.Framework.Internal.TestResult Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0xE1FD74
    // Implemented from: NUnit.Framework.Internal.Commands.TestCommand
    // Base method: NUnit.Framework.Internal.TestResult TestCommand::Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    NUnit::Framework::Internal::TestResult* Execute(NUnit::Framework::Internal::ITestExecutionContext* context);
    // public System.Collections.IEnumerable ExecuteEnumerable(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0xE20304
    // Implemented from: UnityEngine.TestRunner.NUnitExtensions.Runner.IEnumerableTestMethodCommand
    // Base method: System.Collections.IEnumerable IEnumerableTestMethodCommand::ExecuteEnumerable(NUnit.Framework.Internal.ITestExecutionContext context)
    System::Collections::IEnumerable* ExecuteEnumerable(NUnit::Framework::Internal::ITestExecutionContext* context);
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.UnityLogCheckDelegatingCommand
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityLogCheckDelegatingCommand");
#pragma pack(pop)
