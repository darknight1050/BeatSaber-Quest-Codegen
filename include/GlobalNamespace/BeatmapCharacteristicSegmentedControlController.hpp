// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: IDifficultyBeatmapSet
  class IDifficultyBeatmapSet;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: IconSegmentedControl
  class IconSegmentedControl;
  // Forward declaring type: SegmentedControl
  class SegmentedControl;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  // Autogenerated type: BeatmapCharacteristicSegmentedControlController
  // [] Offset: FFFFFFFF
  class BeatmapCharacteristicSegmentedControlController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BeatmapCharacteristicSegmentedControlController::$$c
    class $$c;
    // private HMUI.IconSegmentedControl _segmentedControl
    // Size: 0x8
    // Offset: 0x18
    HMUI::IconSegmentedControl* segmentedControl;
    // Field size check
    static_assert(sizeof(HMUI::IconSegmentedControl*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCF1A0
    // private System.Action`2<BeatmapCharacteristicSegmentedControlController,BeatmapCharacteristicSO> didSelectBeatmapCharacteristicEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action_2<GlobalNamespace::BeatmapCharacteristicSegmentedControlController*, GlobalNamespace::BeatmapCharacteristicSO*>* didSelectBeatmapCharacteristicEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::BeatmapCharacteristicSegmentedControlController*, GlobalNamespace::BeatmapCharacteristicSO*>*) == 0x8);
    // private BeatmapCharacteristicSO _selectedBeatmapCharacteristic
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BeatmapCharacteristicSO* selectedBeatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // private System.Collections.Generic.List`1<BeatmapCharacteristicSO> _beatmapCharacteristics
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapCharacteristicSO*>* beatmapCharacteristics;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapCharacteristicSO*>*) == 0x8);
    // Creating value type constructor for type: BeatmapCharacteristicSegmentedControlController
    BeatmapCharacteristicSegmentedControlController(HMUI::IconSegmentedControl* segmentedControl_ = {}, System::Action_2<GlobalNamespace::BeatmapCharacteristicSegmentedControlController*, GlobalNamespace::BeatmapCharacteristicSO*>* didSelectBeatmapCharacteristicEvent_ = {}, GlobalNamespace::BeatmapCharacteristicSO* selectedBeatmapCharacteristic_ = {}, System::Collections::Generic::List_1<GlobalNamespace::BeatmapCharacteristicSO*>* beatmapCharacteristics_ = {}) noexcept : segmentedControl{segmentedControl_}, didSelectBeatmapCharacteristicEvent{didSelectBeatmapCharacteristicEvent_}, selectedBeatmapCharacteristic{selectedBeatmapCharacteristic_}, beatmapCharacteristics{beatmapCharacteristics_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didSelectBeatmapCharacteristicEvent(System.Action`2<BeatmapCharacteristicSegmentedControlController,BeatmapCharacteristicSO> value)
    // Offset: 0x1A7BC0C
    void add_didSelectBeatmapCharacteristicEvent(System::Action_2<GlobalNamespace::BeatmapCharacteristicSegmentedControlController*, GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // public System.Void remove_didSelectBeatmapCharacteristicEvent(System.Action`2<BeatmapCharacteristicSegmentedControlController,BeatmapCharacteristicSO> value)
    // Offset: 0x1A7BCB0
    void remove_didSelectBeatmapCharacteristicEvent(System::Action_2<GlobalNamespace::BeatmapCharacteristicSegmentedControlController*, GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // public BeatmapCharacteristicSO get_selectedBeatmapCharacteristic()
    // Offset: 0x1A7BD54
    GlobalNamespace::BeatmapCharacteristicSO* get_selectedBeatmapCharacteristic();
    // protected System.Void Awake()
    // Offset: 0x1A7BD5C
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x1A7BDF0
    void OnDestroy();
    // public System.Void SetData(IDifficultyBeatmapSet[] difficultyBeatmapSets, BeatmapCharacteristicSO selectedBeatmapCharacteristic)
    // Offset: 0x1A7BECC
    void SetData(::Array<GlobalNamespace::IDifficultyBeatmapSet*>* difficultyBeatmapSets, GlobalNamespace::BeatmapCharacteristicSO* selectedBeatmapCharacteristic);
    // private System.Void HandleDifficultySegmentedControlDidSelectCell(HMUI.SegmentedControl segmentedControl, System.Int32 cellIdx)
    // Offset: 0x1A7C240
    void HandleDifficultySegmentedControlDidSelectCell(HMUI::SegmentedControl* segmentedControl, int cellIdx);
    // public System.Void .ctor()
    // Offset: 0x1A7C2F4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapCharacteristicSegmentedControlController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapCharacteristicSegmentedControlController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapCharacteristicSegmentedControlController*, creationType>()));
    }
  }; // BeatmapCharacteristicSegmentedControlController
  static check_size<sizeof(BeatmapCharacteristicSegmentedControlController), 48 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapCharacteristicSO*>*)> __GlobalNamespace_BeatmapCharacteristicSegmentedControlControllerSizeCheck;
  static_assert(sizeof(BeatmapCharacteristicSegmentedControlController) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCharacteristicSegmentedControlController*, "", "BeatmapCharacteristicSegmentedControlController");
#pragma pack(pop)
