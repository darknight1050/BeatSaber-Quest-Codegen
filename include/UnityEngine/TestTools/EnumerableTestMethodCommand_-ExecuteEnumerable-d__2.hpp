// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.TestTools.EnumerableTestMethodCommand
#include "UnityEngine/TestTools/EnumerableTestMethodCommand.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Forward declaring namespace: UnityEngine::TestTools
namespace UnityEngine::TestTools {
  // Forward declaring type: TestEnumerator
  class TestEnumerator;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Autogenerated type: UnityEngine.TestTools.EnumerableTestMethodCommand/<ExecuteEnumerable>d__2
  class EnumerableTestMethodCommand::$ExecuteEnumerable$d__2 : public ::CsObject, public System::Collections::Generic::IEnumerable_1<::CsObject*>, public System::Collections::IEnumerable, public System::Collections::Generic::IEnumerator_1<::CsObject*>, public System::Collections::IEnumerator, public System::IDisposable {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Object <>2__current
    // Offset: 0x18
    ::CsObject* $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Offset: 0x20
    int $$l__initialThreadId;
    // public UnityEngine.TestTools.EnumerableTestMethodCommand <>4__this
    // Offset: 0x28
    UnityEngine::TestTools::EnumerableTestMethodCommand* $$4__this;
    // private NUnit.Framework.Internal.ITestExecutionContext context
    // Offset: 0x30
    NUnit::Framework::Internal::ITestExecutionContext* context;
    // public NUnit.Framework.Internal.ITestExecutionContext <>3__context
    // Offset: 0x38
    NUnit::Framework::Internal::ITestExecutionContext* $$3__context;
    // private UnityEngine.TestTools.TestEnumerator <testEnumeraterYieldInstruction>5__2
    // Offset: 0x40
    UnityEngine::TestTools::TestEnumerator* $testEnumeraterYieldInstruction$5__2;
    // private System.Collections.IEnumerator <executingEnumerator>5__3
    // Offset: 0x48
    System::Collections::IEnumerator* $executingEnumerator$5__3;
    // public System.Void .ctor(System.Int32 $$1__state)
    // Offset: 0xE29550
    static EnumerableTestMethodCommand::$ExecuteEnumerable$d__2* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xE296B8
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xE296BC
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xE2A12C
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    ::CsObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xE2A134
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xE2A194
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::CsObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<System.Object> System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
    // Offset: 0xE2A19C
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable`1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<::CsObject*>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xE2A260
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnityEngine.TestTools.EnumerableTestMethodCommand/<ExecuteEnumerable>d__2
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2*, "UnityEngine.TestTools", "EnumerableTestMethodCommand/<ExecuteEnumerable>d__2");
#pragma pack(pop)
