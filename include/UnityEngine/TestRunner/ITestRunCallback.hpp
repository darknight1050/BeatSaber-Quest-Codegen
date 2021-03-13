// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
  // Forward declaring type: ITestResult
  class ITestResult;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner
namespace UnityEngine::TestRunner {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.ITestRunCallback
  // [] Offset: FFFFFFFF
  class ITestRunCallback {
    public:
    // Creating value type constructor for type: ITestRunCallback
    ITestRunCallback() noexcept {}
    // public System.Void RunStarted(NUnit.Framework.Interfaces.ITest testsToRun)
    // Offset: 0xFFFFFFFF
    void RunStarted_NEW(NUnit::Framework::Interfaces::ITest* testsToRun);
    // public System.Void RunFinished(NUnit.Framework.Interfaces.ITestResult testResults)
    // Offset: 0xFFFFFFFF
    void RunFinished_NEW(NUnit::Framework::Interfaces::ITestResult* testResults);
    // public System.Void TestStarted(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xFFFFFFFF
    void TestStarted_NEW(NUnit::Framework::Interfaces::ITest* test);
    // public System.Void TestFinished(NUnit.Framework.Interfaces.ITestResult result)
    // Offset: 0xFFFFFFFF
    void TestFinished_NEW(NUnit::Framework::Interfaces::ITestResult* result);
  }; // UnityEngine.TestRunner.ITestRunCallback
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::ITestRunCallback*, "UnityEngine.TestRunner", "ITestRunCallback");
