// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: GameEnergyCounter
#include "GlobalNamespace/GameEnergyCounter.hpp"
// Including type: GameplayModifiers/EnergyType
#include "GlobalNamespace/GameplayModifiers.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x17
  // Autogenerated type: GameEnergyCounter/InitData
  // [] Offset: FFFFFFFF
  class GameEnergyCounter::InitData : public ::Il2CppObject {
    public:
    // public readonly GameplayModifiers/EnergyType energyType
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::GameplayModifiers::EnergyType energyType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiers::EnergyType) == 0x4);
    // public readonly System.Boolean noFail
    // Size: 0x1
    // Offset: 0x14
    bool noFail;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public readonly System.Boolean instaFail
    // Size: 0x1
    // Offset: 0x15
    bool instaFail;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public readonly System.Boolean failOnSaberClash
    // Size: 0x1
    // Offset: 0x16
    bool failOnSaberClash;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: InitData
    InitData(GlobalNamespace::GameplayModifiers::EnergyType energyType_ = {}, bool noFail_ = {}, bool instaFail_ = {}, bool failOnSaberClash_ = {}) noexcept : energyType{energyType_}, noFail{noFail_}, instaFail{instaFail_}, failOnSaberClash{failOnSaberClash_} {}
    // public System.Void .ctor(GameplayModifiers/EnergyType energyType, System.Boolean noFail, System.Boolean instaFail, System.Boolean failOnSaberClash)
    // Offset: 0x1A18EB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameEnergyCounter::InitData* New_ctor(GlobalNamespace::GameplayModifiers::EnergyType energyType, bool noFail, bool instaFail, bool failOnSaberClash) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameEnergyCounter::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameEnergyCounter::InitData*, creationType>(energyType, noFail, instaFail, failOnSaberClash)));
    }
  }; // GameEnergyCounter/InitData
  static check_size<sizeof(GameEnergyCounter::InitData), 22 + sizeof(bool)> __GlobalNamespace_GameEnergyCounter_InitDataSizeCheck;
  static_assert(sizeof(GameEnergyCounter::InitData) == 0x17);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameEnergyCounter::InitData*, "", "GameEnergyCounter/InitData");
#pragma pack(pop)
