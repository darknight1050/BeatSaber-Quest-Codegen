// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestResult
  class TestResult;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ResultState
  class ResultState;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions
namespace UnityEngine::TestRunner::NUnitExtensions {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.TestResultExtensions
  // [] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class TestResultExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: TestResultExtensions
    TestResultExtensions() noexcept {}
    // static public System.Void RecordPrefixedException(NUnit.Framework.Internal.TestResult testResult, System.String prefix, System.Exception ex, NUnit.Framework.Interfaces.ResultState resultState)
    // Offset: 0x13499A8
    static void RecordPrefixedException(NUnit::Framework::Internal::TestResult* testResult, ::Il2CppString* prefix, System::Exception* ex, NUnit::Framework::Interfaces::ResultState* resultState);
    // static public System.Void RecordPrefixedError(NUnit.Framework.Internal.TestResult testResult, System.String prefix, System.String error, NUnit.Framework.Interfaces.ResultState resultState)
    // Offset: 0x1349E18
    static void RecordPrefixedError(NUnit::Framework::Internal::TestResult* testResult, ::Il2CppString* prefix, ::Il2CppString* error, NUnit::Framework::Interfaces::ResultState* resultState);
  }; // UnityEngine.TestRunner.NUnitExtensions.TestResultExtensions
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::TestResultExtensions*, "UnityEngine.TestRunner.NUnitExtensions", "TestResultExtensions");
