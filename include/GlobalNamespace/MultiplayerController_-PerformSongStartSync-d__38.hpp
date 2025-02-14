// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerController
#include "GlobalNamespace/MultiplayerController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: MultiplayerPlayerStartState
#include "GlobalNamespace/MultiplayerPlayerStartState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerController/<PerformSongStartSync>d__38
  // [CompilerGeneratedAttribute] Offset: E1226C
  class MultiplayerController::$PerformSongStartSync$d__38 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public MultiplayerController <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerController*) == 0x8);
    // public MultiplayerPlayerStartState localPlayerSyncState
    // Size: 0x4
    // Offset: 0x28
    GlobalNamespace::MultiplayerPlayerStartState localPlayerSyncState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerPlayerStartState) == 0x4);
    // Creating value type constructor for type: $PerformSongStartSync$d__38
    $PerformSongStartSync$d__38(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::MultiplayerController* $$4__this_ = {}, GlobalNamespace::MultiplayerPlayerStartState localPlayerSyncState_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, localPlayerSyncState{localPlayerSyncState_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x114C084
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerController::$PerformSongStartSync$d__38* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerController::$PerformSongStartSync$d__38::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerController::$PerformSongStartSync$d__38*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x114D7A8
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x114D7AC
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x114DEC4
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x114DECC
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x114DF2C
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // MultiplayerController/<PerformSongStartSync>d__38
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerController::$PerformSongStartSync$d__38), 40 + sizeof(GlobalNamespace::MultiplayerPlayerStartState)> __GlobalNamespace_MultiplayerController_$PerformSongStartSync$d__38SizeCheck;
  static_assert(sizeof(MultiplayerController::$PerformSongStartSync$d__38) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerController::$PerformSongStartSync$d__38*, "", "MultiplayerController/<PerformSongStartSync>d__38");
