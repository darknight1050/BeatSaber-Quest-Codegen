// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.TestTools.TestRunner.PlaymodeTestsController
#include "UnityEngine/TestTools/TestRunner/PlaymodeTestsController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.TestTools.TestRunner
namespace UnityEngine::TestTools::TestRunner {
  // Autogenerated type: UnityEngine.TestTools.TestRunner.PlaymodeTestsController/<TestRunnerCoroutine>d__15
  class PlaymodeTestsController::$TestRunnerCoroutine$d__15 : public ::CsObject, public System::Collections::Generic::IEnumerator_1<::CsObject*>, public System::Collections::IEnumerator, public System::IDisposable {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Object <>2__current
    // Offset: 0x18
    ::CsObject* $$2__current;
    // public UnityEngine.TestTools.TestRunner.PlaymodeTestsController <>4__this
    // Offset: 0x20
    UnityEngine::TestTools::TestRunner::PlaymodeTestsController* $$4__this;
    // public System.Void .ctor(System.Int32 $$1__state)
    // Offset: 0xE30DB4
    static PlaymodeTestsController::$TestRunnerCoroutine$d__15* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xE31AB0
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xE31AB4
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xE31C90
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    ::CsObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xE31C98
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xE31CF8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::CsObject* System_Collections_IEnumerator_get_Current();
  }; // UnityEngine.TestTools.TestRunner.PlaymodeTestsController/<TestRunnerCoroutine>d__15
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::PlaymodeTestsController::$TestRunnerCoroutine$d__15*, "UnityEngine.TestTools.TestRunner", "PlaymodeTestsController/<TestRunnerCoroutine>d__15");
#pragma pack(pop)
