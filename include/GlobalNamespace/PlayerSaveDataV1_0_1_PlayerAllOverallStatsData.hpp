// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlayerSaveDataV1_0_1
#include "GlobalNamespace/PlayerSaveDataV1_0_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveDataV1_0_1/PlayerAllOverallStatsData
  // [] Offset: FFFFFFFF
  class PlayerSaveDataV1_0_1::PlayerAllOverallStatsData : public ::Il2CppObject {
    public:
    // public PlayerSaveDataV1_0_1/PlayerOverallStatsData campaignOverallStatsData
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData* campaignOverallStatsData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData*) == 0x8);
    // public PlayerSaveDataV1_0_1/PlayerOverallStatsData soloFreePlayOverallStatsData
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData* soloFreePlayOverallStatsData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData*) == 0x8);
    // public PlayerSaveDataV1_0_1/PlayerOverallStatsData partyFreePlayOverallStatsData
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData* partyFreePlayOverallStatsData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData*) == 0x8);
    // Creating value type constructor for type: PlayerAllOverallStatsData
    PlayerAllOverallStatsData(GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData* campaignOverallStatsData_ = {}, GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData* soloFreePlayOverallStatsData_ = {}, GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData* partyFreePlayOverallStatsData_ = {}) noexcept : campaignOverallStatsData{campaignOverallStatsData_}, soloFreePlayOverallStatsData{soloFreePlayOverallStatsData_}, partyFreePlayOverallStatsData{partyFreePlayOverallStatsData_} {}
    // public System.Void .ctor(PlayerSaveDataV1_0_1/PlayerOverallStatsData campaignOverallStatsData, PlayerSaveDataV1_0_1/PlayerOverallStatsData soloFreePlayOverallStatsData, PlayerSaveDataV1_0_1/PlayerOverallStatsData partyFreePlayOverallStatsData)
    // Offset: 0xF67158
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveDataV1_0_1::PlayerAllOverallStatsData* New_ctor(GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData* campaignOverallStatsData, GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData* soloFreePlayOverallStatsData, GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData* partyFreePlayOverallStatsData) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSaveDataV1_0_1::PlayerAllOverallStatsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveDataV1_0_1::PlayerAllOverallStatsData*, creationType>(campaignOverallStatsData, soloFreePlayOverallStatsData, partyFreePlayOverallStatsData)));
    }
    // public System.Void .ctor()
    // Offset: 0xF670AC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveDataV1_0_1::PlayerAllOverallStatsData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSaveDataV1_0_1::PlayerAllOverallStatsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveDataV1_0_1::PlayerAllOverallStatsData*, creationType>()));
    }
  }; // PlayerSaveDataV1_0_1/PlayerAllOverallStatsData
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveDataV1_0_1::PlayerAllOverallStatsData), 32 + sizeof(GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData*)> __GlobalNamespace_PlayerSaveDataV1_0_1_PlayerAllOverallStatsDataSizeCheck;
  static_assert(sizeof(PlayerSaveDataV1_0_1::PlayerAllOverallStatsData) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveDataV1_0_1::PlayerAllOverallStatsData*, "", "PlayerSaveDataV1_0_1/PlayerAllOverallStatsData");
