// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapLevelDataLoaderSO
#include "GlobalNamespace/BeatmapLevelDataLoaderSO.hpp"
// Including type: IBeatmapLevel
#include "GlobalNamespace/IBeatmapLevel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: IPreviewBeatmapLevel because it is already included!
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: PreviewDifficultyBeatmapSet
  class PreviewDifficultyBeatmapSet;
  // Forward declaring type: IBeatmapLevelData
  class IBeatmapLevelData;
  // Forward declaring type: BeatmapCharacteristicCollectionSO
  class BeatmapCharacteristicCollectionSO;
  // Forward declaring type: BeatmapLevelDataSO
  class BeatmapLevelDataSO;
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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview
  // [] Offset: FFFFFFFF
  class BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview : public ::Il2CppObject/*, public GlobalNamespace::IBeatmapLevel*/ {
    public:
    // Nested type: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData
    class BeatmapLevelData;
    // Nested type: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::$GetPreviewAudioClipAsync$d__33
    struct $GetPreviewAudioClipAsync$d__33;
    // Nested type: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::$GetCoverImageAsync$d__34
    struct $GetCoverImageAsync$d__34;
    // private IPreviewBeatmapLevel _level
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IPreviewBeatmapLevel* level;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
    // private BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview/BeatmapLevelData _beatmapLevelData
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData* beatmapLevelData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData*) == 0x8);
    // Creating value type constructor for type: BeatmapLevelFromPreview
    BeatmapLevelFromPreview(GlobalNamespace::IPreviewBeatmapLevel* level_ = {}, GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData* beatmapLevelData_ = {}) noexcept : level{level_}, beatmapLevelData{beatmapLevelData_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IBeatmapLevel
    operator GlobalNamespace::IBeatmapLevel() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatmapLevel*>(this);
    }
    // public System.String get_levelID()
    // Offset: 0x1073280
    ::Il2CppString* get_levelID_NEW();
    // public System.String get_songName()
    // Offset: 0x1073330
    ::Il2CppString* get_songName_NEW();
    // public System.String get_songSubName()
    // Offset: 0x10733E4
    ::Il2CppString* get_songSubName_NEW();
    // public System.String get_songAuthorName()
    // Offset: 0x1073498
    ::Il2CppString* get_songAuthorName_NEW();
    // public System.String get_levelAuthorName()
    // Offset: 0x107354C
    ::Il2CppString* get_levelAuthorName_NEW();
    // public System.Single get_beatsPerMinute()
    // Offset: 0x1073600
    float get_beatsPerMinute_NEW();
    // public System.Single get_songTimeOffset()
    // Offset: 0x10736B4
    float get_songTimeOffset_NEW();
    // public System.Single get_songDuration()
    // Offset: 0x1073768
    float get_songDuration_NEW();
    // public System.Single get_shuffle()
    // Offset: 0x107381C
    float get_shuffle_NEW();
    // public System.Single get_shufflePeriod()
    // Offset: 0x10738D0
    float get_shufflePeriod_NEW();
    // public System.Single get_previewStartTime()
    // Offset: 0x1073984
    float get_previewStartTime_NEW();
    // public System.Single get_previewDuration()
    // Offset: 0x1073A38
    float get_previewDuration_NEW();
    // public EnvironmentInfoSO get_environmentInfo()
    // Offset: 0x1073AEC
    GlobalNamespace::EnvironmentInfoSO* get_environmentInfo_NEW();
    // public EnvironmentInfoSO get_allDirectionsEnvironmentInfo()
    // Offset: 0x1073BA0
    GlobalNamespace::EnvironmentInfoSO* get_allDirectionsEnvironmentInfo_NEW();
    // public PreviewDifficultyBeatmapSet[] get_previewDifficultyBeatmapSets()
    // Offset: 0x1073C54
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* get_previewDifficultyBeatmapSets_NEW();
    // public IBeatmapLevelData get_beatmapLevelData()
    // Offset: 0x1073D08
    GlobalNamespace::IBeatmapLevelData* get_beatmapLevelData_NEW();
    // public System.Threading.Tasks.Task`1<UnityEngine.AudioClip> GetPreviewAudioClipAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1073D10
    System::Threading::Tasks::Task_1<UnityEngine::AudioClip*>* GetPreviewAudioClipAsync_NEW(System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<UnityEngine.Sprite> GetCoverImageAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1073E34
    System::Threading::Tasks::Task_1<UnityEngine::Sprite*>* GetCoverImageAsync_NEW(System::Threading::CancellationToken cancellationToken);
    // public System.Void .ctor(IPreviewBeatmapLevel previewLevel)
    // Offset: 0x1072D98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview* New_ctor(GlobalNamespace::IPreviewBeatmapLevel* previewLevel) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview*, creationType>(previewLevel)));
    }
    // public System.Void LoadData(BeatmapCharacteristicCollectionSO beatmapCharacteristicCollection, BeatmapLevelDataSO beatmapLevelData)
    // Offset: 0x1072DC4
    void LoadData(GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection, GlobalNamespace::BeatmapLevelDataSO* beatmapLevelData);
  }; // BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview
  #pragma pack(pop)
  static check_size<sizeof(BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview), 24 + sizeof(GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData*)> __GlobalNamespace_BeatmapLevelDataLoaderSO_BeatmapLevelFromPreviewSizeCheck;
  static_assert(sizeof(BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview*, "", "BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview");
