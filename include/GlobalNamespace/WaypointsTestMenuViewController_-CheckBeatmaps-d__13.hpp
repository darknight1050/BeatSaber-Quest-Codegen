// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: WaypointsTestMenuViewController
#include "GlobalNamespace/WaypointsTestMenuViewController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
// Including type: System.Collections.Generic.List`1/Enumerator
#include "System/Collections/Generic/List_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: List`1 because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelSO
  class BeatmapLevelSO;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: WaypointsTestMenuViewController/<CheckBeatmaps>d__13
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D1B854
  class WaypointsTestMenuViewController::$CheckBeatmaps$d__13 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public WaypointsTestMenuViewController <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::WaypointsTestMenuViewController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::WaypointsTestMenuViewController*) == 0x8);
    // public System.Collections.Generic.List`1<BeatmapLevelSO> levels
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelSO*>* levels;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelSO*>*) == 0x8);
    // private System.Int32 <count>5__2
    // Size: 0x4
    // Offset: 0x30
    int $count$5__2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.Generic.List`1<BeatmapDifficulty> <difficultiesToCheck>5__3
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapDifficulty>* $difficultiesToCheck$5__3;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapDifficulty>*) == 0x8);
    // private System.Collections.Generic.List`1/Enumerator<BeatmapLevelSO> <>7__wrap3
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    typename System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelSO*>::Enumerator $$7__wrap3;
    // private BeatmapLevelSO <level>5__5
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::BeatmapLevelSO* $level$5__5;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelSO*) == 0x8);
    // private System.Collections.Generic.List`1/Enumerator<BeatmapCharacteristicSO> <>7__wrap5
    // Size: 0xFFFFFFFF
    // Offset: 0x60
    typename System::Collections::Generic::List_1<GlobalNamespace::BeatmapCharacteristicSO*>::Enumerator $$7__wrap5;
    // private BeatmapCharacteristicSO <characteristic>5__7
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::BeatmapCharacteristicSO* $characteristic$5__7;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // private System.Collections.Generic.List`1/Enumerator<BeatmapDifficulty> <>7__wrap7
    // Size: 0xFFFFFFFF
    // Offset: 0x80
    typename System::Collections::Generic::List_1<GlobalNamespace::BeatmapDifficulty>::Enumerator $$7__wrap7;
    // private BeatmapDifficulty <difficulty>5__9
    // Size: 0x4
    // Offset: 0x98
    GlobalNamespace::BeatmapDifficulty $difficulty$5__9;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // Creating value type constructor for type: $CheckBeatmaps$d__13
    $CheckBeatmaps$d__13(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::WaypointsTestMenuViewController* $$4__this_ = {}, System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelSO*>* levels_ = {}, int $count$5__2_ = {}, System::Collections::Generic::List_1<GlobalNamespace::BeatmapDifficulty>* $difficultiesToCheck$5__3_ = {}, typename System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelSO*>::Enumerator $$7__wrap3_ = {}, GlobalNamespace::BeatmapLevelSO* $level$5__5_ = {}, typename System::Collections::Generic::List_1<GlobalNamespace::BeatmapCharacteristicSO*>::Enumerator $$7__wrap5_ = {}, GlobalNamespace::BeatmapCharacteristicSO* $characteristic$5__7_ = {}, typename System::Collections::Generic::List_1<GlobalNamespace::BeatmapDifficulty>::Enumerator $$7__wrap7_ = {}, GlobalNamespace::BeatmapDifficulty $difficulty$5__9_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, levels{levels_}, $count$5__2{$count$5__2_}, $difficultiesToCheck$5__3{$difficultiesToCheck$5__3_}, $$7__wrap3{$$7__wrap3_}, $level$5__5{$level$5__5_}, $$7__wrap5{$$7__wrap5_}, $characteristic$5__7{$characteristic$5__7_}, $$7__wrap7{$$7__wrap7_}, $difficulty$5__9{$difficulty$5__9_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x20E48D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WaypointsTestMenuViewController::$CheckBeatmaps$d__13* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WaypointsTestMenuViewController::$CheckBeatmaps$d__13*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x20E4A8C
    void System_IDisposable_Dispose_NEW();
    // private System.Boolean MoveNext()
    // Offset: 0x20E4C88
    bool MoveNext_NEW();
    // private System.Void <>m__Finally1()
    // Offset: 0x20E4C30
    void $$m__Finally1();
    // private System.Void <>m__Finally2()
    // Offset: 0x20E4BD8
    void $$m__Finally2();
    // private System.Void <>m__Finally3()
    // Offset: 0x20E4B80
    void $$m__Finally3();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x20E5388
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current_NEW();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x20E5390
    void System_Collections_IEnumerator_Reset_NEW();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x20E53F0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current_NEW();
  }; // WaypointsTestMenuViewController/<CheckBeatmaps>d__13
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13*, "", "WaypointsTestMenuViewController/<CheckBeatmaps>d__13");
