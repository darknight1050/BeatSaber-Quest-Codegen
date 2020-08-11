// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PreviewDifficultyBeatmapSet
  class PreviewDifficultyBeatmapSet : public ::CsObject {
    public:
    // private BeatmapCharacteristicSO _beatmapCharacteristic
    // Offset: 0x10
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // private BeatmapDifficulty[] _beatmapDifficulties
    // Offset: 0x18
    ::Array<GlobalNamespace::BeatmapDifficulty>* beatmapDifficulties;
    // public BeatmapCharacteristicSO get_beatmapCharacteristic()
    // Offset: 0xC09008
    GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();
    // public BeatmapDifficulty[] get_beatmapDifficulties()
    // Offset: 0xC09010
    ::Array<GlobalNamespace::BeatmapDifficulty>* get_beatmapDifficulties();
    // public System.Void .ctor(BeatmapCharacteristicSO beatmapCharacteristic, BeatmapDifficulty[] beatmapDifficulties)
    // Offset: 0xC09018
    static PreviewDifficultyBeatmapSet* New_ctor(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, ::Array<GlobalNamespace::BeatmapDifficulty>* beatmapDifficulties);
  }; // PreviewDifficultyBeatmapSet
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PreviewDifficultyBeatmapSet*, "", "PreviewDifficultyBeatmapSet");
#pragma pack(pop)
