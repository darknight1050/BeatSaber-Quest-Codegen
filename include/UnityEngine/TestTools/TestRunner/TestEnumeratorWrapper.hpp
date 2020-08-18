// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestMethod
  class TestMethod;
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner
namespace UnityEngine::TestTools::TestRunner {
  // Autogenerated type: UnityEngine.TestTools.TestRunner.TestEnumeratorWrapper
  class TestEnumeratorWrapper : public ::Il2CppObject {
    public:
    // private readonly NUnit.Framework.Internal.TestMethod m_TestMethod
    // Offset: 0x10
    NUnit::Framework::Internal::TestMethod* m_TestMethod;
    // public System.Void .ctor(NUnit.Framework.Internal.TestMethod testMethod)
    // Offset: 0xD9C7BC
    static TestEnumeratorWrapper* New_ctor(NUnit::Framework::Internal::TestMethod* testMethod);
    // public System.Collections.IEnumerator GetEnumerator(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0xD9C7F0
    System::Collections::IEnumerator* GetEnumerator(NUnit::Framework::Internal::ITestExecutionContext* context);
    // private System.Collections.IEnumerator HandleEnumerableTest(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0xDA4A90
    System::Collections::IEnumerator* HandleEnumerableTest(NUnit::Framework::Internal::ITestExecutionContext* context);
  }; // UnityEngine.TestTools.TestRunner.TestEnumeratorWrapper
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::TestEnumeratorWrapper*, "UnityEngine.TestTools.TestRunner", "TestEnumeratorWrapper");
#pragma pack(pop)
