// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: PlayerSaveData
#include "GlobalNamespace/PlayerSaveData.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayerSaveData/PlayerAllOverallStatsData
  class PlayerSaveData::PlayerAllOverallStatsData : public ::CsObject {
    public:
    // public PlayerSaveData/PlayerOverallStatsData campaignOverallStatsData
    // Offset: 0x10
    GlobalNamespace::PlayerSaveData::PlayerOverallStatsData* campaignOverallStatsData;
    // public PlayerSaveData/PlayerOverallStatsData soloFreePlayOverallStatsData
    // Offset: 0x18
    GlobalNamespace::PlayerSaveData::PlayerOverallStatsData* soloFreePlayOverallStatsData;
    // public PlayerSaveData/PlayerOverallStatsData partyFreePlayOverallStatsData
    // Offset: 0x20
    GlobalNamespace::PlayerSaveData::PlayerOverallStatsData* partyFreePlayOverallStatsData;
    // public System.Void .ctor(PlayerSaveData/PlayerOverallStatsData campaignOverallStatsData, PlayerSaveData/PlayerOverallStatsData soloFreePlayOverallStatsData, PlayerSaveData/PlayerOverallStatsData partyFreePlayOverallStatsData)
    // Offset: 0xBC8DE0
    static PlayerSaveData::PlayerAllOverallStatsData* New_ctor(GlobalNamespace::PlayerSaveData::PlayerOverallStatsData* campaignOverallStatsData, GlobalNamespace::PlayerSaveData::PlayerOverallStatsData* soloFreePlayOverallStatsData, GlobalNamespace::PlayerSaveData::PlayerOverallStatsData* partyFreePlayOverallStatsData);
    // public System.Void .ctor()
    // Offset: 0xBC8C1C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PlayerSaveData::PlayerAllOverallStatsData* New_ctor();
  }; // PlayerSaveData/PlayerAllOverallStatsData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData::PlayerAllOverallStatsData*, "", "PlayerSaveData/PlayerAllOverallStatsData");
#pragma pack(pop)
