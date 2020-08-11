// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: BeatmapLevelDataSO
#include "GlobalNamespace/BeatmapLevelDataSO.hpp"
// Including type: BeatmapLevelSO
#include "GlobalNamespace/BeatmapLevelSO.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapLevelDataSO/DifficultyBeatmapSet
  class BeatmapLevelDataSO::DifficultyBeatmapSet : public ::CsObject {
    public:
    // private System.String _beatmapCharacteristicSerializedName
    // Offset: 0x10
    ::CsString* beatmapCharacteristicSerializedName;
    // private BeatmapLevelSO/DifficultyBeatmap[] _difficultyBeatmaps
    // Offset: 0x18
    ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>* difficultyBeatmaps;
    // public System.String get_beatmapCharacteristicSerializedName()
    // Offset: 0xB51930
    ::CsString* get_beatmapCharacteristicSerializedName();
    // public BeatmapLevelSO/DifficultyBeatmap[] get_difficultyBeatmaps()
    // Offset: 0xB51938
    ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>* get_difficultyBeatmaps();
    // public System.Void .ctor(System.String beatmapCharacteristicSerializedName, BeatmapLevelSO/DifficultyBeatmap[] difficultyBeatmaps)
    // Offset: 0xB51940
    static BeatmapLevelDataSO::DifficultyBeatmapSet* New_ctor(::CsString* beatmapCharacteristicSerializedName, ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>* difficultyBeatmaps);
  }; // BeatmapLevelDataSO/DifficultyBeatmapSet
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet*, "", "BeatmapLevelDataSO/DifficultyBeatmapSet");
#pragma pack(pop)
