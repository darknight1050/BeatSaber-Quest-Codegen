// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MissionLevelFailedController
#include "GlobalNamespace/MissionLevelFailedController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionCompletionResults
  class MissionCompletionResults;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionLevelFailedController/<LevelFailedCoroutine>d__13
  class MissionLevelFailedController::$LevelFailedCoroutine$d__13 : public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>, public ::Il2CppObject {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Object <>2__current
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // public MissionLevelFailedController <>4__this
    // Offset: 0x20
    GlobalNamespace::MissionLevelFailedController* $$4__this;
    // private MissionCompletionResults <missionCompletionResults>5__2
    // Offset: 0x28
    GlobalNamespace::MissionCompletionResults* $missionCompletionResults$5__2;
    // public System.Void .ctor(System.Int32 $$1__state)
    // Offset: 0x194AD50
    static MissionLevelFailedController::$LevelFailedCoroutine$d__13* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x194AD84
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x194AD88
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x194AF18
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x194AF20
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x194AF80
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // MissionLevelFailedController/<LevelFailedCoroutine>d__13
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionLevelFailedController::$LevelFailedCoroutine$d__13*, "", "MissionLevelFailedController/<LevelFailedCoroutine>d__13");
#pragma pack(pop)
