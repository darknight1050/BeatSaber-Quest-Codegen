// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine::TestRunner
namespace UnityEngine::TestRunner {
  // Forward declaring type: ITestRunCallback
  class ITestRunCallback;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner
namespace UnityEngine::TestRunner {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.TestRunCallbackAttribute
  // [AttributeUsageAttribute] Offset: E3C794
  class TestRunCallbackAttribute : public System::Attribute {
    public:
    // private System.Type m_Type
    // Size: 0x8
    // Offset: 0x10
    System::Type* m_Type;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // Creating value type constructor for type: TestRunCallbackAttribute
    TestRunCallbackAttribute(System::Type* m_Type_ = {}) noexcept : m_Type{m_Type_} {}
    // Creating conversion operator: operator System::Type*
    constexpr operator System::Type*() const noexcept {
      return m_Type;
    }
    // UnityEngine.TestRunner.ITestRunCallback ConstructCallback()
    // Offset: 0x1498F00
    UnityEngine::TestRunner::ITestRunCallback* ConstructCallback();
  }; // UnityEngine.TestRunner.TestRunCallbackAttribute
  #pragma pack(pop)
  static check_size<sizeof(TestRunCallbackAttribute), 16 + sizeof(System::Type*)> __UnityEngine_TestRunner_TestRunCallbackAttributeSizeCheck;
  static_assert(sizeof(TestRunCallbackAttribute) == 0x18);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::TestRunCallbackAttribute*, "UnityEngine.TestRunner", "TestRunCallbackAttribute");
