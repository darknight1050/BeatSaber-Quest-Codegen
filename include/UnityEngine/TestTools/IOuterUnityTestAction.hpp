// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.IOuterUnityTestAction
  class IOuterUnityTestAction {
    public:
    // Creating value type constructor for type: IOuterUnityTestAction
    IOuterUnityTestAction() noexcept {}
    // public System.Collections.IEnumerator BeforeTest(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xFFFFFFFF
    System::Collections::IEnumerator* BeforeTest(NUnit::Framework::Interfaces::ITest* test);
    // public System.Collections.IEnumerator AfterTest(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xFFFFFFFF
    System::Collections::IEnumerator* AfterTest(NUnit::Framework::Interfaces::ITest* test);
  }; // UnityEngine.TestTools.IOuterUnityTestAction
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::IOuterUnityTestAction*, "UnityEngine.TestTools", "IOuterUnityTestAction");
