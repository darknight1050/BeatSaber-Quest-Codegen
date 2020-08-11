// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.TestTools.TestActionCommand
#include "UnityEngine/TestTools/TestActionCommand.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework
namespace NUnit::Framework {
  // Forward declaring type: ITestAction
  class ITestAction;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: Test
  class Test;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Autogenerated type: UnityEngine.TestTools.TestActionCommand/<InvokeBefore>d__2
  class TestActionCommand::$InvokeBefore$d__2 : public ::CsObject, public System::Collections::Generic::IEnumerator_1<::CsObject*>, public System::Collections::IEnumerator, public System::IDisposable {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Object <>2__current
    // Offset: 0x18
    ::CsObject* $$2__current;
    // public NUnit.Framework.ITestAction action
    // Offset: 0x20
    NUnit::Framework::ITestAction* action;
    // public NUnit.Framework.Internal.Test test
    // Offset: 0x28
    NUnit::Framework::Internal::Test* test;
    // public System.Void .ctor(System.Int32 $$1__state)
    // Offset: 0xE2CCCC
    static TestActionCommand::$InvokeBefore$d__2* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xE2CF40
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xE2CF44
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xE2D048
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    ::CsObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xE2D050
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xE2D0B0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::CsObject* System_Collections_IEnumerator_get_Current();
  }; // UnityEngine.TestTools.TestActionCommand/<InvokeBefore>d__2
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestActionCommand::$InvokeBefore$d__2*, "UnityEngine.TestTools", "TestActionCommand/<InvokeBefore>d__2");
#pragma pack(pop)
