// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IBeatmapLevelData
#include "GlobalNamespace/IBeatmapLevelData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmapSet
  class IDifficultyBeatmapSet;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelData
  class BeatmapLevelData : public ::Il2CppObject/*, public GlobalNamespace::IBeatmapLevelData*/ {
    public:
    // private UnityEngine.AudioClip _audioClip
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::AudioClip* audioClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioClip*) == 0x8);
    // private IDifficultyBeatmapSet[] _difficultyBeatmapSets
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::IDifficultyBeatmapSet*>* difficultyBeatmapSets;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::IDifficultyBeatmapSet*>*) == 0x8);
    // Creating value type constructor for type: BeatmapLevelData
    BeatmapLevelData(UnityEngine::AudioClip* audioClip_ = {}, ::Array<GlobalNamespace::IDifficultyBeatmapSet*>* difficultyBeatmapSets_ = {}) noexcept : audioClip{audioClip_}, difficultyBeatmapSets{difficultyBeatmapSets_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IBeatmapLevelData
    operator GlobalNamespace::IBeatmapLevelData() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatmapLevelData*>(this);
    }
    // public UnityEngine.AudioClip get_audioClip()
    // Offset: 0x11AEBB4
    UnityEngine::AudioClip* get_audioClip();
    // public IDifficultyBeatmapSet[] get_difficultyBeatmapSets()
    // Offset: 0x11AEBBC
    ::Array<GlobalNamespace::IDifficultyBeatmapSet*>* get_difficultyBeatmapSets();
    // public System.Void .ctor(UnityEngine.AudioClip audioClip, IDifficultyBeatmapSet[] difficultyBeatmapSets)
    // Offset: 0x11AEBC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelData* New_ctor(UnityEngine::AudioClip* audioClip, ::Array<GlobalNamespace::IDifficultyBeatmapSet*>* difficultyBeatmapSets) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapLevelData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelData*, creationType>(audioClip, difficultyBeatmapSets)));
    }
  }; // BeatmapLevelData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapLevelData), 24 + sizeof(::Array<GlobalNamespace::IDifficultyBeatmapSet*>*)> __GlobalNamespace_BeatmapLevelDataSizeCheck;
  static_assert(sizeof(BeatmapLevelData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelData*, "", "BeatmapLevelData");
