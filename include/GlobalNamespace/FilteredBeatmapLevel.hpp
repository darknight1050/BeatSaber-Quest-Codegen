// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IBeatmapLevel
#include "GlobalNamespace/IBeatmapLevel.hpp"
// Including type: BeatmapDifficultyMask
#include "GlobalNamespace/BeatmapDifficultyMask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PreviewDifficultyBeatmapSet
  class PreviewDifficultyBeatmapSet;
  // Forward declaring type: IBeatmapLevelData
  class IBeatmapLevelData;
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: FilteredBeatmapLevel
  // [] Offset: FFFFFFFF
  class FilteredBeatmapLevel : public ::Il2CppObject/*, public GlobalNamespace::IBeatmapLevel*/ {
    public:
    // Nested type: GlobalNamespace::FilteredBeatmapLevel::FilteredBeatmapLevelData
    class FilteredBeatmapLevelData;
    // [CompilerGeneratedAttribute] Offset: 0xD2E1C8
    // private PreviewDifficultyBeatmapSet[] <previewDifficultyBeatmapSets>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD2E1D8
    // private IBeatmapLevelData <beatmapLevelData>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IBeatmapLevelData* beatmapLevelData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapLevelData*) == 0x8);
    // private readonly IBeatmapLevel _beatmapLevel
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IBeatmapLevel* beatmapLevel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapLevel*) == 0x8);
    // Creating value type constructor for type: FilteredBeatmapLevel
    FilteredBeatmapLevel(::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets_ = {}, GlobalNamespace::IBeatmapLevelData* beatmapLevelData_ = {}, GlobalNamespace::IBeatmapLevel* beatmapLevel_ = {}) noexcept : previewDifficultyBeatmapSets{previewDifficultyBeatmapSets_}, beatmapLevelData{beatmapLevelData_}, beatmapLevel{beatmapLevel_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IBeatmapLevel
    operator GlobalNamespace::IBeatmapLevel() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatmapLevel*>(this);
    }
    // public System.String get_levelID()
    // Offset: 0xF2C114
    ::Il2CppString* get_levelID_NEW();
    // public System.String get_songName()
    // Offset: 0xF2C1C4
    ::Il2CppString* get_songName_NEW();
    // public System.String get_songSubName()
    // Offset: 0xF2C278
    ::Il2CppString* get_songSubName_NEW();
    // public System.String get_songAuthorName()
    // Offset: 0xF2C32C
    ::Il2CppString* get_songAuthorName_NEW();
    // public System.String get_levelAuthorName()
    // Offset: 0xF2C3E0
    ::Il2CppString* get_levelAuthorName_NEW();
    // public System.Single get_beatsPerMinute()
    // Offset: 0xF2C494
    float get_beatsPerMinute_NEW();
    // public System.Single get_songTimeOffset()
    // Offset: 0xF2C548
    float get_songTimeOffset_NEW();
    // public System.Single get_shuffle()
    // Offset: 0xF2C5FC
    float get_shuffle_NEW();
    // public System.Single get_shufflePeriod()
    // Offset: 0xF2C6B0
    float get_shufflePeriod_NEW();
    // public System.Single get_previewStartTime()
    // Offset: 0xF2C764
    float get_previewStartTime_NEW();
    // public System.Single get_previewDuration()
    // Offset: 0xF2C818
    float get_previewDuration_NEW();
    // public System.Single get_songDuration()
    // Offset: 0xF2C8CC
    float get_songDuration_NEW();
    // public EnvironmentInfoSO get_environmentInfo()
    // Offset: 0xF2C980
    GlobalNamespace::EnvironmentInfoSO* get_environmentInfo_NEW();
    // public EnvironmentInfoSO get_allDirectionsEnvironmentInfo()
    // Offset: 0xF2CA34
    GlobalNamespace::EnvironmentInfoSO* get_allDirectionsEnvironmentInfo_NEW();
    // public PreviewDifficultyBeatmapSet[] get_previewDifficultyBeatmapSets()
    // Offset: 0xF2CAE8
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* get_previewDifficultyBeatmapSets_NEW();
    // private System.Void set_previewDifficultyBeatmapSets(PreviewDifficultyBeatmapSet[] value)
    // Offset: 0xF2CAF0
    void set_previewDifficultyBeatmapSets(::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* value);
    // public System.Threading.Tasks.Task`1<UnityEngine.AudioClip> GetPreviewAudioClipAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xF2CAF8
    System::Threading::Tasks::Task_1<UnityEngine::AudioClip*>* GetPreviewAudioClipAsync_NEW(System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<UnityEngine.Sprite> GetCoverImageAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xF2CBBC
    System::Threading::Tasks::Task_1<UnityEngine::Sprite*>* GetCoverImageAsync_NEW(System::Threading::CancellationToken cancellationToken);
    // public IBeatmapLevelData get_beatmapLevelData()
    // Offset: 0xF2CC80
    GlobalNamespace::IBeatmapLevelData* get_beatmapLevelData_NEW();
    // private System.Void set_beatmapLevelData(IBeatmapLevelData value)
    // Offset: 0xF2CC88
    void set_beatmapLevelData(GlobalNamespace::IBeatmapLevelData* value);
    // public System.Boolean get_isEmpty()
    // Offset: 0xF2CC90
    bool get_isEmpty();
    // public System.Void .ctor(IBeatmapLevel beatmapLevel, BeatmapDifficultyMask allowedBeatmapDifficultyMask, System.Collections.Generic.HashSet`1<BeatmapCharacteristicSO> notAllowedCharacteristics)
    // Offset: 0xF2CD58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FilteredBeatmapLevel* New_ctor(GlobalNamespace::IBeatmapLevel* beatmapLevel, GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask, System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapCharacteristicSO*>* notAllowedCharacteristics) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FilteredBeatmapLevel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FilteredBeatmapLevel*, creationType>(beatmapLevel, allowedBeatmapDifficultyMask, notAllowedCharacteristics)));
    }
  }; // FilteredBeatmapLevel
  #pragma pack(pop)
  static check_size<sizeof(FilteredBeatmapLevel), 32 + sizeof(GlobalNamespace::IBeatmapLevel*)> __GlobalNamespace_FilteredBeatmapLevelSizeCheck;
  static_assert(sizeof(FilteredBeatmapLevel) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FilteredBeatmapLevel*, "", "FilteredBeatmapLevel");
