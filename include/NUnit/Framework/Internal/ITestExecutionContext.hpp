// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestResult
  class TestResult;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextWriter
  class TextWriter;
}
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: ValueFormatter
  class ValueFormatter;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.ITestExecutionContext
  // [] Offset: FFFFFFFF
  class ITestExecutionContext {
    public:
    // Creating value type constructor for type: ITestExecutionContext
    ITestExecutionContext() noexcept {}
    // public NUnit.Framework.Internal.TestResult get_CurrentResult()
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Internal::TestResult* get_CurrentResult_NEW();
    // public System.Void set_CurrentResult(NUnit.Framework.Internal.TestResult value)
    // Offset: 0xFFFFFFFF
    void set_CurrentResult_NEW(NUnit::Framework::Internal::TestResult* value);
    // public System.IO.TextWriter get_OutWriter()
    // Offset: 0xFFFFFFFF
    System::IO::TextWriter* get_OutWriter_NEW();
    // public System.Object get_TestObject()
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* get_TestObject_NEW();
    // public System.Void set_TestObject(System.Object value)
    // Offset: 0xFFFFFFFF
    void set_TestObject_NEW(::Il2CppObject* value);
    // public NUnit.Framework.Constraints.ValueFormatter get_CurrentValueFormatter()
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Constraints::ValueFormatter* get_CurrentValueFormatter_NEW();
    // public System.Void IncrementAssertCount()
    // Offset: 0xFFFFFFFF
    void IncrementAssertCount_NEW();
  }; // NUnit.Framework.Internal.ITestExecutionContext
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::ITestExecutionContext*, "NUnit.Framework.Internal", "ITestExecutionContext");
