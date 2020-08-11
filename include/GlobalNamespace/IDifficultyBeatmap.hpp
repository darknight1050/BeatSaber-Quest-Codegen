// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevel
  class IBeatmapLevel;
  // Forward declaring type: IDifficultyBeatmapSet
  class IDifficultyBeatmapSet;
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
  // Forward declaring type: BeatmapData
  class BeatmapData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: IDifficultyBeatmap
  class IDifficultyBeatmap {
    public:
    // public IBeatmapLevel get_level()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::IBeatmapLevel* get_level();
    // public IDifficultyBeatmapSet get_parentDifficultyBeatmapSet()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::IDifficultyBeatmapSet* get_parentDifficultyBeatmapSet();
    // public BeatmapDifficulty get_difficulty()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::BeatmapDifficulty get_difficulty();
    // public System.Int32 get_difficultyRank()
    // Offset: 0xFFFFFFFF
    int get_difficultyRank();
    // public System.Single get_noteJumpMovementSpeed()
    // Offset: 0xFFFFFFFF
    float get_noteJumpMovementSpeed();
    // public System.Single get_noteJumpStartBeatOffset()
    // Offset: 0xFFFFFFFF
    float get_noteJumpStartBeatOffset();
    // public BeatmapData get_beatmapData()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::BeatmapData* get_beatmapData();
  }; // IDifficultyBeatmap
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IDifficultyBeatmap*, "", "IDifficultyBeatmap");
#pragma pack(pop)
