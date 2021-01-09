// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerConnectedPlayerSongTimeSyncController
#include "GlobalNamespace/MultiplayerConnectedPlayerSongTimeSyncController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  // Autogenerated type: MultiplayerConnectedPlayerSongTimeSyncController/InitData
  // [] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerSongTimeSyncController::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Single startSongTime
    // Size: 0x4
    // Offset: 0x10
    float startSongTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single songTimeOffset
    // Size: 0x4
    // Offset: 0x14
    float songTimeOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single timeScale
    // Size: 0x4
    // Offset: 0x18
    float timeScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: InitData
    InitData(float startSongTime_ = {}, float songTimeOffset_ = {}, float timeScale_ = {}) noexcept : startSongTime{startSongTime_}, songTimeOffset{songTimeOffset_}, timeScale{timeScale_} {}
    // public System.Void .ctor(System.Single startSongTime, System.Single songTimeOffset, System.Single timeScale)
    // Offset: 0xFAB858
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerSongTimeSyncController::InitData* New_ctor(float startSongTime, float songTimeOffset, float timeScale) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerSongTimeSyncController::InitData*, creationType>(startSongTime, songTimeOffset, timeScale)));
    }
  }; // MultiplayerConnectedPlayerSongTimeSyncController/InitData
  static check_size<sizeof(MultiplayerConnectedPlayerSongTimeSyncController::InitData), 24 + sizeof(float)> __GlobalNamespace_MultiplayerConnectedPlayerSongTimeSyncController_InitDataSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerSongTimeSyncController::InitData) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::InitData*, "", "MultiplayerConnectedPlayerSongTimeSyncController/InitData");
#pragma pack(pop)
