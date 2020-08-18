// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlayerSaveDataV1_0_1
#include "GlobalNamespace/PlayerSaveDataV1_0_1.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayerSaveDataV1_0_1/PlayerOverallStatsData
  class PlayerSaveDataV1_0_1::PlayerOverallStatsData : public ::Il2CppObject {
    public:
    // public System.Int32 goodCutsCount
    // Offset: 0x10
    int goodCutsCount;
    // public System.Int32 badCutsCount
    // Offset: 0x14
    int badCutsCount;
    // public System.Int32 missedCutsCount
    // Offset: 0x18
    int missedCutsCount;
    // public System.Int64 totalScore
    // Offset: 0x20
    int64_t totalScore;
    // public System.Int32 playedLevelsCount
    // Offset: 0x28
    int playedLevelsCount;
    // public System.Int32 cleardLevelsCount
    // Offset: 0x2C
    int cleardLevelsCount;
    // public System.Int32 failedLevelsCount
    // Offset: 0x30
    int failedLevelsCount;
    // public System.Int32 fullComboCount
    // Offset: 0x34
    int fullComboCount;
    // public System.Single timePlayed
    // Offset: 0x38
    float timePlayed;
    // public System.Int32 handDistanceTravelled
    // Offset: 0x3C
    int handDistanceTravelled;
    // public System.Int64 cummulativeCutScoreWithoutMultiplier
    // Offset: 0x40
    int64_t cummulativeCutScoreWithoutMultiplier;
    // public System.Void .ctor(System.Int32 goodCutsCount, System.Int32 badCutsCount, System.Int32 missedCutsCount, System.Int64 totalScore, System.Int32 playedLevelsCount, System.Int32 cleardLevelsCount, System.Int32 failedLevelsCount, System.Int32 fullComboCount, System.Single timePlayed, System.Int32 handDistanceTravelled, System.Int64 cummulativeCutScoreWithoutMultiplier)
    // Offset: 0xB8F294
    static PlayerSaveDataV1_0_1::PlayerOverallStatsData* New_ctor(int goodCutsCount, int badCutsCount, int missedCutsCount, int64_t totalScore, int playedLevelsCount, int cleardLevelsCount, int failedLevelsCount, int fullComboCount, float timePlayed, int handDistanceTravelled, int64_t cummulativeCutScoreWithoutMultiplier);
    // public System.Void .ctor()
    // Offset: 0xB8F218
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PlayerSaveDataV1_0_1::PlayerOverallStatsData* New_ctor();
  }; // PlayerSaveDataV1_0_1/PlayerOverallStatsData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData*, "", "PlayerSaveDataV1_0_1/PlayerOverallStatsData");
#pragma pack(pop)
