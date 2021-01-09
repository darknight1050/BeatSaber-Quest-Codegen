// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: FlyingScoreSpawner
#include "GlobalNamespace/FlyingScoreSpawner.hpp"
// Including type: FlyingScoreSpawner/SpawnPosition
#include "GlobalNamespace/FlyingScoreSpawner_SpawnPosition.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  // Autogenerated type: FlyingScoreSpawner/InitData
  // [] Offset: FFFFFFFF
  class FlyingScoreSpawner::InitData : public ::Il2CppObject {
    public:
    // public readonly FlyingScoreSpawner/SpawnPosition spawnPosition
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::FlyingScoreSpawner::SpawnPosition spawnPosition;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FlyingScoreSpawner::SpawnPosition) == 0x4);
    // Creating value type constructor for type: InitData
    InitData(GlobalNamespace::FlyingScoreSpawner::SpawnPosition spawnPosition_ = {}) noexcept : spawnPosition{spawnPosition_} {}
    // Creating conversion operator: operator GlobalNamespace::FlyingScoreSpawner::SpawnPosition
    constexpr operator GlobalNamespace::FlyingScoreSpawner::SpawnPosition() const noexcept {
      return spawnPosition;
    }
    // public System.Void .ctor(FlyingScoreSpawner/SpawnPosition spawnPosition)
    // Offset: 0x1A158E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlyingScoreSpawner::InitData* New_ctor(GlobalNamespace::FlyingScoreSpawner::SpawnPosition spawnPosition) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FlyingScoreSpawner::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlyingScoreSpawner::InitData*, creationType>(spawnPosition)));
    }
  }; // FlyingScoreSpawner/InitData
  static check_size<sizeof(FlyingScoreSpawner::InitData), 16 + sizeof(GlobalNamespace::FlyingScoreSpawner::SpawnPosition)> __GlobalNamespace_FlyingScoreSpawner_InitDataSizeCheck;
  static_assert(sizeof(FlyingScoreSpawner::InitData) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlyingScoreSpawner::InitData*, "", "FlyingScoreSpawner/InitData");
#pragma pack(pop)
