// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SimpleValueMissionObjectiveChecker
#include "GlobalNamespace/SimpleValueMissionObjectiveChecker.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ScoreController
  class ScoreController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ScoreMissionObjectiveChecker
  class ScoreMissionObjectiveChecker : public GlobalNamespace::SimpleValueMissionObjectiveChecker {
    public:
    // private ScoreController _scoreController
    // Offset: 0x48
    GlobalNamespace::ScoreController* scoreController;
    // protected System.Void OnDestroy()
    // Offset: 0xBA0C74
    void OnDestroy();
    // private System.Void HandleScoreDidChange(System.Int32 rawScore, System.Int32 modifiedScore)
    // Offset: 0xBA0D4C
    void HandleScoreDidChange(int rawScore, int modifiedScore);
    // protected override System.Void Init()
    // Offset: 0xBA0D78
    // Implemented from: MissionObjectiveChecker
    // Base method: System.Void MissionObjectiveChecker::Init()
    void Init();
    // public System.Void .ctor()
    // Offset: 0xBA0E70
    // Implemented from: SimpleValueMissionObjectiveChecker
    // Base method: System.Void SimpleValueMissionObjectiveChecker::.ctor()
    // Base method: System.Void MissionObjectiveChecker::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ScoreMissionObjectiveChecker* New_ctor();
  }; // ScoreMissionObjectiveChecker
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScoreMissionObjectiveChecker*, "", "ScoreMissionObjectiveChecker");
#pragma pack(pop)
