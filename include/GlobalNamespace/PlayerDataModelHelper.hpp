// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlayerSaveData
#include "GlobalNamespace/PlayerSaveData.hpp"
// Including type: PlayerSaveDataV1_0_1
#include "GlobalNamespace/PlayerSaveDataV1_0_1.hpp"
// Including type: PlayerAllOverallStatsData
#include "GlobalNamespace/PlayerAllOverallStatsData.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayerDataModelHelper
  class PlayerDataModelHelper : public ::Il2CppObject {
    public:
    // static public PlayerAllOverallStatsData ToPlayerAllOverallStatsData(PlayerSaveData/PlayerAllOverallStatsData playerAllOverallStatsData)
    // Offset: 0x1922354
    static GlobalNamespace::PlayerAllOverallStatsData* ToPlayerAllOverallStatsData(GlobalNamespace::PlayerSaveData::PlayerAllOverallStatsData* playerAllOverallStatsData);
    // static public PlayerAllOverallStatsData ToPlayerAllOverallStatsData(PlayerSaveDataV1_0_1/PlayerAllOverallStatsData playerAllOverallStatsData)
    // Offset: 0x19224BC
    static GlobalNamespace::PlayerAllOverallStatsData* ToPlayerAllOverallStatsData(GlobalNamespace::PlayerSaveDataV1_0_1::PlayerAllOverallStatsData* playerAllOverallStatsData);
    // static public PlayerAllOverallStatsData/PlayerOverallStatsData ToPlayerOverallStats(PlayerSaveData/PlayerOverallStatsData playerAllOverallStatsData)
    // Offset: 0x192286C
    static GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* ToPlayerOverallStats(GlobalNamespace::PlayerSaveData::PlayerOverallStatsData* playerAllOverallStatsData);
    // static public PlayerAllOverallStatsData/PlayerOverallStatsData ToPlayerOverallStats(PlayerSaveDataV1_0_1/PlayerOverallStatsData playerAllOverallStatsData)
    // Offset: 0x1922948
    static GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* ToPlayerOverallStats(GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData* playerAllOverallStatsData);
    // static public PlayerSaveData/PlayerAllOverallStatsData ToPlayerAllOverallStatsData(PlayerAllOverallStatsData playerAllOverallStatsData)
    // Offset: 0x1920C3C
    static GlobalNamespace::PlayerSaveData::PlayerAllOverallStatsData* ToPlayerAllOverallStatsData(GlobalNamespace::PlayerAllOverallStatsData* playerAllOverallStatsData);
    // static public PlayerSaveData/PlayerOverallStatsData ToPlayerOverallStatsData(PlayerAllOverallStatsData/PlayerOverallStatsData playerOverallStatsData)
    // Offset: 0x1922AE8
    static GlobalNamespace::PlayerSaveData::PlayerOverallStatsData* ToPlayerOverallStatsData(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* playerOverallStatsData);
  }; // PlayerDataModelHelper
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerDataModelHelper*, "", "PlayerDataModelHelper");
#pragma pack(pop)
