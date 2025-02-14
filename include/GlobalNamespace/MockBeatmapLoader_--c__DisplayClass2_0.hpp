// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MockBeatmapLoader
#include "GlobalNamespace/MockBeatmapLoader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapIdentifierNetSerializable
  class BeatmapIdentifierNetSerializable;
  // Forward declaring type: IDifficultyBeatmapSet
  class IDifficultyBeatmapSet;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: MockBeatmapLoader/<>c__DisplayClass2_0
  // [CompilerGeneratedAttribute] Offset: E121CC
  class MockBeatmapLoader::$$c__DisplayClass2_0 : public ::Il2CppObject {
    public:
    // public BeatmapIdentifierNetSerializable beatmap
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::BeatmapIdentifierNetSerializable* beatmap;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapIdentifierNetSerializable*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass2_0
    $$c__DisplayClass2_0(GlobalNamespace::BeatmapIdentifierNetSerializable* beatmap_ = {}) noexcept : beatmap{beatmap_} {}
    // Creating conversion operator: operator GlobalNamespace::BeatmapIdentifierNetSerializable*
    constexpr operator GlobalNamespace::BeatmapIdentifierNetSerializable*() const noexcept {
      return beatmap;
    }
    // System.Boolean <GetBeatmapData>b__0(IDifficultyBeatmapSet bds)
    // Offset: 0x105A118
    bool $GetBeatmapData$b__0(GlobalNamespace::IDifficultyBeatmapSet* bds);
    // System.Boolean <GetBeatmapData>b__2(IDifficultyBeatmap dbm)
    // Offset: 0x105A1EC
    bool $GetBeatmapData$b__2(GlobalNamespace::IDifficultyBeatmap* dbm);
    // public System.Void .ctor()
    // Offset: 0x105A110
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockBeatmapLoader::$$c__DisplayClass2_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockBeatmapLoader::$$c__DisplayClass2_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockBeatmapLoader::$$c__DisplayClass2_0*, creationType>()));
    }
  }; // MockBeatmapLoader/<>c__DisplayClass2_0
  #pragma pack(pop)
  static check_size<sizeof(MockBeatmapLoader::$$c__DisplayClass2_0), 16 + sizeof(GlobalNamespace::BeatmapIdentifierNetSerializable*)> __GlobalNamespace_MockBeatmapLoader_$$c__DisplayClass2_0SizeCheck;
  static_assert(sizeof(MockBeatmapLoader::$$c__DisplayClass2_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockBeatmapLoader::$$c__DisplayClass2_0*, "", "MockBeatmapLoader/<>c__DisplayClass2_0");
