// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionObjectiveCheckersManager
  class MissionObjectiveCheckersManager;
  // Forward declaring type: BeatmapObjectCallbackController
  class BeatmapObjectCallbackController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionClearedEnvironmentEffect
  class MissionClearedEnvironmentEffect : public UnityEngine::MonoBehaviour {
    public:
    // private MissionObjectiveCheckersManager _missionObjectiveCheckersManager
    // Offset: 0x18
    GlobalNamespace::MissionObjectiveCheckersManager* missionObjectiveCheckersManager;
    // private BeatmapObjectCallbackController _beatmapObjectCallbackController
    // Offset: 0x20
    GlobalNamespace::BeatmapObjectCallbackController* beatmapObjectCallbackController;
    // protected System.Void Awake()
    // Offset: 0x1949104
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x1949190
    void OnDestroy();
    // private System.Void HandleMissionObjectiveCheckersManagerObjectiveWasCleared()
    // Offset: 0x194921C
    void HandleMissionObjectiveCheckersManagerObjectiveWasCleared();
    // public System.Void .ctor()
    // Offset: 0x1949298
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MissionClearedEnvironmentEffect* New_ctor();
  }; // MissionClearedEnvironmentEffect
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionClearedEnvironmentEffect*, "", "MissionClearedEnvironmentEffect");
#pragma pack(pop)
