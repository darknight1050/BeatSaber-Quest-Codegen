// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PauseMenuManager
#include "GlobalNamespace/PauseMenuManager.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x32
  #pragma pack(push, 1)
  // Autogenerated type: PauseMenuManager/InitData
  // [] Offset: FFFFFFFF
  class PauseMenuManager::InitData : public ::Il2CppObject {
    public:
    // public readonly System.String backButtonText
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* backButtonText;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly IPreviewBeatmapLevel previewBeatmapLevel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
    // public readonly BeatmapDifficulty beatmapDifficulty
    // Size: 0x4
    // Offset: 0x20
    GlobalNamespace::BeatmapDifficulty beatmapDifficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // Padding between fields: beatmapDifficulty and: beatmapCharacteristic
    char __padding2[0x4] = {};
    // public readonly BeatmapCharacteristicSO beatmapCharacteristic
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // public readonly System.Boolean showRestartButton
    // Size: 0x1
    // Offset: 0x30
    bool showRestartButton;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public readonly System.Boolean showLevelBar
    // Size: 0x1
    // Offset: 0x31
    bool showLevelBar;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: InitData
    InitData(::Il2CppString* backButtonText_ = {}, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel_ = {}, GlobalNamespace::BeatmapDifficulty beatmapDifficulty_ = {}, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic_ = {}, bool showRestartButton_ = {}, bool showLevelBar_ = {}) noexcept : backButtonText{backButtonText_}, previewBeatmapLevel{previewBeatmapLevel_}, beatmapDifficulty{beatmapDifficulty_}, beatmapCharacteristic{beatmapCharacteristic_}, showRestartButton{showRestartButton_}, showLevelBar{showLevelBar_} {}
    // public System.Void .ctor(System.String backButtonText, IPreviewBeatmapLevel previewBeatmapLevel, BeatmapDifficulty beatmapDifficulty, BeatmapCharacteristicSO beatmapCharacteristic, System.Boolean showRestartButton, System.Boolean showLevelBar)
    // Offset: 0xF5D5CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PauseMenuManager::InitData* New_ctor(::Il2CppString* backButtonText, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, bool showRestartButton, bool showLevelBar) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PauseMenuManager::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PauseMenuManager::InitData*, creationType>(backButtonText, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, showRestartButton, showLevelBar)));
    }
  }; // PauseMenuManager/InitData
  #pragma pack(pop)
  static check_size<sizeof(PauseMenuManager::InitData), 49 + sizeof(bool)> __GlobalNamespace_PauseMenuManager_InitDataSizeCheck;
  static_assert(sizeof(PauseMenuManager::InitData) == 0x32);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PauseMenuManager::InitData*, "", "PauseMenuManager/InitData");
