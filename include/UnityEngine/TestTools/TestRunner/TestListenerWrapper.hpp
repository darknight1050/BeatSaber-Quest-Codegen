// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: NUnit.Framework.Interfaces.ITestListener
#include "NUnit/Framework/Interfaces/ITestListener.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools::TestRunner
namespace UnityEngine::TestTools::TestRunner {
  // Forward declaring type: TestFinishedEvent
  class TestFinishedEvent;
  // Forward declaring type: TestStartedEvent
  class TestStartedEvent;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
  // Forward declaring type: ITestResult
  class ITestResult;
  // Forward declaring type: TestOutput
  class TestOutput;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.TestTools.TestRunner
namespace UnityEngine::TestTools::TestRunner {
  // Autogenerated type: UnityEngine.TestTools.TestRunner.TestListenerWrapper
  class TestListenerWrapper : public ::CsObject, public NUnit::Framework::Interfaces::ITestListener {
    public:
    // private readonly UnityEngine.TestTools.TestRunner.TestFinishedEvent m_TestFinishedEvent
    // Offset: 0x10
    UnityEngine::TestTools::TestRunner::TestFinishedEvent* m_TestFinishedEvent;
    // private readonly UnityEngine.TestTools.TestRunner.TestStartedEvent m_TestStartedEvent
    // Offset: 0x18
    UnityEngine::TestTools::TestRunner::TestStartedEvent* m_TestStartedEvent;
    // public System.Void .ctor(UnityEngine.TestTools.TestRunner.TestStartedEvent testStartedEvent, UnityEngine.TestTools.TestRunner.TestFinishedEvent testFinishedEvent)
    // Offset: 0xE31794
    static TestListenerWrapper* New_ctor(UnityEngine::TestTools::TestRunner::TestStartedEvent* testStartedEvent, UnityEngine::TestTools::TestRunner::TestFinishedEvent* testFinishedEvent);
    // public System.Void TestStarted(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xE320E4
    // Implemented from: NUnit.Framework.Interfaces.ITestListener
    // Base method: System.Void ITestListener::TestStarted(NUnit.Framework.Interfaces.ITest test)
    void TestStarted(NUnit::Framework::Interfaces::ITest* test);
    // public System.Void TestFinished(NUnit.Framework.Interfaces.ITestResult result)
    // Offset: 0xE3214C
    // Implemented from: NUnit.Framework.Interfaces.ITestListener
    // Base method: System.Void ITestListener::TestFinished(NUnit.Framework.Interfaces.ITestResult result)
    void TestFinished(NUnit::Framework::Interfaces::ITestResult* result);
    // public System.Void TestOutput(NUnit.Framework.Interfaces.TestOutput output)
    // Offset: 0xE321B4
    // Implemented from: NUnit.Framework.Interfaces.ITestListener
    // Base method: System.Void ITestListener::TestOutput(NUnit.Framework.Interfaces.TestOutput output)
    void TestOutput(NUnit::Framework::Interfaces::TestOutput* output);
  }; // UnityEngine.TestTools.TestRunner.TestListenerWrapper
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::TestListenerWrapper*, "UnityEngine.TestTools.TestRunner", "TestListenerWrapper");
#pragma pack(pop)
