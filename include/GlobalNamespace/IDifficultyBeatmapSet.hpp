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
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: IDifficultyBeatmapSet
  class IDifficultyBeatmapSet {
    public:
    // public BeatmapCharacteristicSO get_beatmapCharacteristic()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();
    // public IDifficultyBeatmap[] get_difficultyBeatmaps()
    // Offset: 0xFFFFFFFF
    ::Array<GlobalNamespace::IDifficultyBeatmap*>* get_difficultyBeatmaps();
  }; // IDifficultyBeatmapSet
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IDifficultyBeatmapSet*, "", "IDifficultyBeatmapSet");
#pragma pack(pop)
