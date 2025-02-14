// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.TestResult
#include "NUnit/Framework/Internal/TestResult.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Skipping declaration: ITestResult because it is already included!
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestSuite
  class TestSuite;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TestSuiteResult
  class TestSuiteResult : public NUnit::Framework::Internal::TestResult {
    public:
    // private System.Int32 _passCount
    // Size: 0x4
    // Offset: 0x60
    int passCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _failCount
    // Size: 0x4
    // Offset: 0x64
    int failCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _skipCount
    // Size: 0x4
    // Offset: 0x68
    int skipCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _inconclusiveCount
    // Size: 0x4
    // Offset: 0x6C
    int inconclusiveCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.Generic.List`1<NUnit.Framework.Interfaces.ITestResult> _children
    // Size: 0x8
    // Offset: 0x70
    System::Collections::Generic::List_1<NUnit::Framework::Interfaces::ITestResult*>* children;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<NUnit::Framework::Interfaces::ITestResult*>*) == 0x8);
    // Creating value type constructor for type: TestSuiteResult
    TestSuiteResult(int passCount_ = {}, int failCount_ = {}, int skipCount_ = {}, int inconclusiveCount_ = {}, System::Collections::Generic::List_1<NUnit::Framework::Interfaces::ITestResult*>* children_ = {}) noexcept : passCount{passCount_}, failCount{failCount_}, skipCount{skipCount_}, inconclusiveCount{inconclusiveCount_}, children{children_} {}
    // public System.Void .ctor(NUnit.Framework.Internal.TestSuite suite)
    // Offset: 0x2299DD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestSuiteResult* New_ctor(NUnit::Framework::Internal::TestSuite* suite) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestSuiteResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestSuiteResult*, creationType>(suite)));
    }
    // public System.Void AddResult(NUnit.Framework.Interfaces.ITestResult result)
    // Offset: 0x229A318
    void AddResult(NUnit::Framework::Interfaces::ITestResult* result);
    // public override System.Int32 get_FailCount()
    // Offset: 0x229A298
    // Implemented from: NUnit.Framework.Internal.TestResult
    // Base method: System.Int32 TestResult::get_FailCount()
    int get_FailCount();
    // public override System.Int32 get_PassCount()
    // Offset: 0x229A2A0
    // Implemented from: NUnit.Framework.Internal.TestResult
    // Base method: System.Int32 TestResult::get_PassCount()
    int get_PassCount();
    // public override System.Int32 get_SkipCount()
    // Offset: 0x229A2A8
    // Implemented from: NUnit.Framework.Internal.TestResult
    // Base method: System.Int32 TestResult::get_SkipCount()
    int get_SkipCount();
    // public override System.Int32 get_InconclusiveCount()
    // Offset: 0x229A2B0
    // Implemented from: NUnit.Framework.Internal.TestResult
    // Base method: System.Int32 TestResult::get_InconclusiveCount()
    int get_InconclusiveCount();
    // public override System.Boolean get_HasChildren()
    // Offset: 0x229A2B8
    // Implemented from: NUnit.Framework.Internal.TestResult
    // Base method: System.Boolean TestResult::get_HasChildren()
    bool get_HasChildren();
    // public override System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.ITestResult> get_Children()
    // Offset: 0x229A310
    // Implemented from: NUnit.Framework.Internal.TestResult
    // Base method: System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.ITestResult> TestResult::get_Children()
    System::Collections::Generic::IEnumerable_1<NUnit::Framework::Interfaces::ITestResult*>* get_Children();
  }; // NUnit.Framework.Internal.TestSuiteResult
  #pragma pack(pop)
  static check_size<sizeof(TestSuiteResult), 112 + sizeof(System::Collections::Generic::List_1<NUnit::Framework::Interfaces::ITestResult*>*)> __NUnit_Framework_Internal_TestSuiteResultSizeCheck;
  static_assert(sizeof(TestSuiteResult) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestSuiteResult*, "NUnit.Framework.Internal", "TestSuiteResult");
