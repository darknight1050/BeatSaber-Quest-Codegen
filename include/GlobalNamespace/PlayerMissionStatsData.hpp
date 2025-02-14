// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: PlayerMissionStatsData
  class PlayerMissionStatsData : public ::Il2CppObject {
    public:
    // private System.String _missionId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* missionId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean _cleared
    // Size: 0x1
    // Offset: 0x18
    bool cleared;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: PlayerMissionStatsData
    PlayerMissionStatsData(::Il2CppString* missionId_ = {}, bool cleared_ = {}) noexcept : missionId{missionId_}, cleared{cleared_} {}
    // public System.String get_missionId()
    // Offset: 0x1014710
    ::Il2CppString* get_missionId();
    // public System.Boolean get_cleared()
    // Offset: 0x1014718
    bool get_cleared();
    // public System.Void set_cleared(System.Boolean value)
    // Offset: 0x1014720
    void set_cleared(bool value);
    // public System.Void .ctor(System.String missionId, System.Boolean cleared)
    // Offset: 0x1010298
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerMissionStatsData* New_ctor(::Il2CppString* missionId, bool cleared) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerMissionStatsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerMissionStatsData*, creationType>(missionId, cleared)));
    }
  }; // PlayerMissionStatsData
  #pragma pack(pop)
  static check_size<sizeof(PlayerMissionStatsData), 24 + sizeof(bool)> __GlobalNamespace_PlayerMissionStatsDataSizeCheck;
  static_assert(sizeof(PlayerMissionStatsData) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerMissionStatsData*, "", "PlayerMissionStatsData");
