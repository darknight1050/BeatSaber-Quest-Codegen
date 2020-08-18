// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TextSegmentedControl
  class TextSegmentedControl;
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapDifficultySegmentedControlController
  class BeatmapDifficultySegmentedControlController : public UnityEngine::MonoBehaviour {
    public:
    // private HMUI.TextSegmentedControl _difficultySegmentedControl
    // Offset: 0x18
    HMUI::TextSegmentedControl* difficultySegmentedControl;
    // private System.Action`2<BeatmapDifficultySegmentedControlController,BeatmapDifficulty> didSelectDifficultyEvent
    // Offset: 0x20
    System::Action_2<GlobalNamespace::BeatmapDifficultySegmentedControlController*, GlobalNamespace::BeatmapDifficulty>* didSelectDifficultyEvent;
    // private System.Collections.Generic.List`1<BeatmapDifficulty> _difficulties
    // Offset: 0x28
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapDifficulty>* difficulties;
    // private BeatmapDifficulty _selectedDifficulty
    // Offset: 0x30
    GlobalNamespace::BeatmapDifficulty selectedDifficulty;
    // public System.Void add_didSelectDifficultyEvent(System.Action`2<BeatmapDifficultySegmentedControlController,BeatmapDifficulty> value)
    // Offset: 0x18FB9C4
    void add_didSelectDifficultyEvent(System::Action_2<GlobalNamespace::BeatmapDifficultySegmentedControlController*, GlobalNamespace::BeatmapDifficulty>* value);
    // public System.Void remove_didSelectDifficultyEvent(System.Action`2<BeatmapDifficultySegmentedControlController,BeatmapDifficulty> value)
    // Offset: 0x18FBA68
    void remove_didSelectDifficultyEvent(System::Action_2<GlobalNamespace::BeatmapDifficultySegmentedControlController*, GlobalNamespace::BeatmapDifficulty>* value);
    // public BeatmapDifficulty get_selectedDifficulty()
    // Offset: 0x18FBB0C
    GlobalNamespace::BeatmapDifficulty get_selectedDifficulty();
    // protected System.Void Awake()
    // Offset: 0x18FBB14
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x18FBBA8
    void OnDestroy();
    // private System.Int32 GetClosestDifficultyIndex(BeatmapDifficulty searchDifficulty)
    // Offset: 0x18FBC84
    int GetClosestDifficultyIndex(GlobalNamespace::BeatmapDifficulty searchDifficulty);
    // private System.Void HandleDifficultySegmentedControlDidSelectCell(HMUI.SegmentedControl segmentedControl, System.Int32 cellIdx)
    // Offset: 0x18FBD8C
    void HandleDifficultySegmentedControlDidSelectCell(HMUI::SegmentedControl* segmentedControl, int cellIdx);
    // public System.Void SetData(IDifficultyBeatmap[] difficultyBeatmaps, BeatmapDifficulty selectedDifficulty)
    // Offset: 0x18FBE30
    void SetData(::Array<GlobalNamespace::IDifficultyBeatmap*>* difficultyBeatmaps, GlobalNamespace::BeatmapDifficulty selectedDifficulty);
    // public System.Void .ctor()
    // Offset: 0x18FC0C0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BeatmapDifficultySegmentedControlController* New_ctor();
  }; // BeatmapDifficultySegmentedControlController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDifficultySegmentedControlController*, "", "BeatmapDifficultySegmentedControlController");
#pragma pack(pop)
