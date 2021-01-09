// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: StandardLevelInfoSaveData
#include "GlobalNamespace/StandardLevelInfoSaveData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  // Autogenerated type: StandardLevelInfoSaveData/DifficultyBeatmapSet
  // [] Offset: FFFFFFFF
  class StandardLevelInfoSaveData::DifficultyBeatmapSet : public ::Il2CppObject {
    public:
    // private System.String _beatmapCharacteristicName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* beatmapCharacteristicName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private StandardLevelInfoSaveData/DifficultyBeatmap[] _difficultyBeatmaps
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap*>* difficultyBeatmaps;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap*>*) == 0x8);
    // Creating value type constructor for type: DifficultyBeatmapSet
    DifficultyBeatmapSet(::Il2CppString* beatmapCharacteristicName_ = {}, ::Array<GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap*>* difficultyBeatmaps_ = {}) noexcept : beatmapCharacteristicName{beatmapCharacteristicName_}, difficultyBeatmaps{difficultyBeatmaps_} {}
    // public System.String get_beatmapCharacteristicName()
    // Offset: 0xF44530
    ::Il2CppString* get_beatmapCharacteristicName();
    // public StandardLevelInfoSaveData/DifficultyBeatmap[] get_difficultyBeatmaps()
    // Offset: 0xF44538
    ::Array<GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap*>* get_difficultyBeatmaps();
    // public System.Void .ctor(System.String beatmapCharacteristicName, StandardLevelInfoSaveData/DifficultyBeatmap[] difficultyBeatmaps)
    // Offset: 0xF444B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardLevelInfoSaveData::DifficultyBeatmapSet* New_ctor(::Il2CppString* beatmapCharacteristicName, ::Array<GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap*>* difficultyBeatmaps) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardLevelInfoSaveData::DifficultyBeatmapSet*, creationType>(beatmapCharacteristicName, difficultyBeatmaps)));
    }
  }; // StandardLevelInfoSaveData/DifficultyBeatmapSet
  static check_size<sizeof(StandardLevelInfoSaveData::DifficultyBeatmapSet), 24 + sizeof(::Array<GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap*>*)> __GlobalNamespace_StandardLevelInfoSaveData_DifficultyBeatmapSetSizeCheck;
  static_assert(sizeof(StandardLevelInfoSaveData::DifficultyBeatmapSet) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet*, "", "StandardLevelInfoSaveData/DifficultyBeatmapSet");
#pragma pack(pop)
