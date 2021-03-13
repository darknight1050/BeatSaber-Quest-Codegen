// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IPreviewBeatmapLevel
#include "GlobalNamespace/IPreviewBeatmapLevel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StandardLevelInfoSaveData
  class StandardLevelInfoSaveData;
  // Forward declaring type: IAudioClipAsyncLoader
  class IAudioClipAsyncLoader;
  // Forward declaring type: ISpriteAsyncLoader
  class ISpriteAsyncLoader;
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: PreviewDifficultyBeatmapSet
  class PreviewDifficultyBeatmapSet;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: CustomPreviewBeatmapLevel
  // [] Offset: FFFFFFFF
  class CustomPreviewBeatmapLevel : public ::Il2CppObject/*, public GlobalNamespace::IPreviewBeatmapLevel*/ {
    public:
    // Nested type: GlobalNamespace::CustomPreviewBeatmapLevel::$GetPreviewAudioClipAsync$d__60
    struct $GetPreviewAudioClipAsync$d__60;
    // Nested type: GlobalNamespace::CustomPreviewBeatmapLevel::$GetCoverImageAsync$d__61
    struct $GetCoverImageAsync$d__61;
    // private StandardLevelInfoSaveData _standardLevelInfoSaveData
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::StandardLevelInfoSaveData* standardLevelInfoSaveData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StandardLevelInfoSaveData*) == 0x8);
    // private System.String _customLevelPath
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* customLevelPath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private IAudioClipAsyncLoader _audioClipAsyncLoader
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IAudioClipAsyncLoader* audioClipAsyncLoader;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IAudioClipAsyncLoader*) == 0x8);
    // private ISpriteAsyncLoader _spriteAsyncLoader
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ISpriteAsyncLoader* spriteAsyncLoader;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ISpriteAsyncLoader*) == 0x8);
    // private System.String _levelID
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* levelID;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _songName
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* songName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _songSubName
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* songSubName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _songAuthorName
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* songAuthorName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _levelAuthorName
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppString* levelAuthorName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private UnityEngine.AudioClip _previewAudioClip
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::AudioClip* previewAudioClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioClip*) == 0x8);
    // private System.Single _beatsPerMinute
    // Size: 0x4
    // Offset: 0x60
    float beatsPerMinute;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _songTimeOffset
    // Size: 0x4
    // Offset: 0x64
    float songTimeOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _shuffle
    // Size: 0x4
    // Offset: 0x68
    float shuffle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _shufflePeriod
    // Size: 0x4
    // Offset: 0x6C
    float shufflePeriod;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _previewStartTime
    // Size: 0x4
    // Offset: 0x70
    float previewStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _previewDuration
    // Size: 0x4
    // Offset: 0x74
    float previewDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _songDuration
    // Size: 0x4
    // Offset: 0x78
    float songDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: songDuration and: defaultCoverImage
    char __padding16[0x4] = {};
    // [FormerlySerializedAsAttribute] Offset: 0xD203A4
    // private UnityEngine.Sprite _defaultCoverImage
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::Sprite* defaultCoverImage;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xD203F0
    // private UnityEngine.Sprite _coverImage
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::Sprite* coverImage;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private EnvironmentInfoSO _environmentInfo
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::EnvironmentInfoSO* environmentInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentInfoSO*) == 0x8);
    // private EnvironmentInfoSO _allDirectionsEnvironmentInfo
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::EnvironmentInfoSO* allDirectionsEnvironmentInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentInfoSO*) == 0x8);
    // private PreviewDifficultyBeatmapSet[] _previewDifficultyBeatmapSets
    // Size: 0x8
    // Offset: 0xA0
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>*) == 0x8);
    // Creating value type constructor for type: CustomPreviewBeatmapLevel
    CustomPreviewBeatmapLevel(GlobalNamespace::StandardLevelInfoSaveData* standardLevelInfoSaveData_ = {}, ::Il2CppString* customLevelPath_ = {}, GlobalNamespace::IAudioClipAsyncLoader* audioClipAsyncLoader_ = {}, GlobalNamespace::ISpriteAsyncLoader* spriteAsyncLoader_ = {}, ::Il2CppString* levelID_ = {}, ::Il2CppString* songName_ = {}, ::Il2CppString* songSubName_ = {}, ::Il2CppString* songAuthorName_ = {}, ::Il2CppString* levelAuthorName_ = {}, UnityEngine::AudioClip* previewAudioClip_ = {}, float beatsPerMinute_ = {}, float songTimeOffset_ = {}, float shuffle_ = {}, float shufflePeriod_ = {}, float previewStartTime_ = {}, float previewDuration_ = {}, float songDuration_ = {}, UnityEngine::Sprite* defaultCoverImage_ = {}, UnityEngine::Sprite* coverImage_ = {}, GlobalNamespace::EnvironmentInfoSO* environmentInfo_ = {}, GlobalNamespace::EnvironmentInfoSO* allDirectionsEnvironmentInfo_ = {}, ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets_ = {}) noexcept : standardLevelInfoSaveData{standardLevelInfoSaveData_}, customLevelPath{customLevelPath_}, audioClipAsyncLoader{audioClipAsyncLoader_}, spriteAsyncLoader{spriteAsyncLoader_}, levelID{levelID_}, songName{songName_}, songSubName{songSubName_}, songAuthorName{songAuthorName_}, levelAuthorName{levelAuthorName_}, previewAudioClip{previewAudioClip_}, beatsPerMinute{beatsPerMinute_}, songTimeOffset{songTimeOffset_}, shuffle{shuffle_}, shufflePeriod{shufflePeriod_}, previewStartTime{previewStartTime_}, previewDuration{previewDuration_}, songDuration{songDuration_}, defaultCoverImage{defaultCoverImage_}, coverImage{coverImage_}, environmentInfo{environmentInfo_}, allDirectionsEnvironmentInfo{allDirectionsEnvironmentInfo_}, previewDifficultyBeatmapSets{previewDifficultyBeatmapSets_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IPreviewBeatmapLevel
    operator GlobalNamespace::IPreviewBeatmapLevel() noexcept {
      return *reinterpret_cast<GlobalNamespace::IPreviewBeatmapLevel*>(this);
    }
    // public IAudioClipAsyncLoader get_audioClipAsyncLoader()
    // Offset: 0xFD9E58
    GlobalNamespace::IAudioClipAsyncLoader* get_audioClipAsyncLoader();
    // public ISpriteAsyncLoader get_spriteAsyncLoader()
    // Offset: 0xFD9E60
    GlobalNamespace::ISpriteAsyncLoader* get_spriteAsyncLoader();
    // public StandardLevelInfoSaveData get_standardLevelInfoSaveData()
    // Offset: 0xFD9E68
    GlobalNamespace::StandardLevelInfoSaveData* get_standardLevelInfoSaveData();
    // public System.String get_customLevelPath()
    // Offset: 0xFD9E70
    ::Il2CppString* get_customLevelPath();
    // public System.String get_levelID()
    // Offset: 0xFD9E78
    ::Il2CppString* get_levelID_NEW();
    // public System.String get_songName()
    // Offset: 0xFD9E80
    ::Il2CppString* get_songName_NEW();
    // public System.String get_songSubName()
    // Offset: 0xFD9E88
    ::Il2CppString* get_songSubName_NEW();
    // public System.String get_songAuthorName()
    // Offset: 0xFD9E90
    ::Il2CppString* get_songAuthorName_NEW();
    // public System.String get_levelAuthorName()
    // Offset: 0xFD9E98
    ::Il2CppString* get_levelAuthorName_NEW();
    // public System.Single get_beatsPerMinute()
    // Offset: 0xFD9EA0
    float get_beatsPerMinute_NEW();
    // public System.Single get_songTimeOffset()
    // Offset: 0xFD9EA8
    float get_songTimeOffset_NEW();
    // public System.Single get_songDuration()
    // Offset: 0xFD9EB0
    float get_songDuration_NEW();
    // public System.Single get_shuffle()
    // Offset: 0xFD9EB8
    float get_shuffle_NEW();
    // public System.Single get_shufflePeriod()
    // Offset: 0xFD9EC0
    float get_shufflePeriod_NEW();
    // public System.Single get_previewStartTime()
    // Offset: 0xFD9EC8
    float get_previewStartTime_NEW();
    // public UnityEngine.Sprite get_defaultCoverImage()
    // Offset: 0xFD9ED0
    UnityEngine::Sprite* get_defaultCoverImage();
    // public System.Single get_previewDuration()
    // Offset: 0xFD9ED8
    float get_previewDuration_NEW();
    // public EnvironmentInfoSO get_environmentInfo()
    // Offset: 0xFD9EE0
    GlobalNamespace::EnvironmentInfoSO* get_environmentInfo_NEW();
    // public EnvironmentInfoSO get_allDirectionsEnvironmentInfo()
    // Offset: 0xFD9EE8
    GlobalNamespace::EnvironmentInfoSO* get_allDirectionsEnvironmentInfo_NEW();
    // public System.Threading.Tasks.Task`1<UnityEngine.AudioClip> GetPreviewAudioClipAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFD9EF0
    System::Threading::Tasks::Task_1<UnityEngine::AudioClip*>* GetPreviewAudioClipAsync_NEW(System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<UnityEngine.Sprite> GetCoverImageAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFDA014
    System::Threading::Tasks::Task_1<UnityEngine::Sprite*>* GetCoverImageAsync_NEW(System::Threading::CancellationToken cancellationToken);
    // public PreviewDifficultyBeatmapSet[] get_previewDifficultyBeatmapSets()
    // Offset: 0xFDA138
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* get_previewDifficultyBeatmapSets_NEW();
    // public System.Void .ctor(UnityEngine.Sprite defaultCoverImage, StandardLevelInfoSaveData standardLevelInfoSaveData, System.String customLevelPath, IAudioClipAsyncLoader audioClipAsyncLoader, ISpriteAsyncLoader spriteAsyncLoader, System.String levelID, System.String songName, System.String songSubName, System.String songAuthorName, System.String levelAuthorName, System.Single beatsPerMinute, System.Single songTimeOffset, System.Single shuffle, System.Single shufflePeriod, System.Single previewStartTime, System.Single previewDuration, EnvironmentInfoSO environmentInfo, EnvironmentInfoSO allDirectionsEnvironmentInfo, PreviewDifficultyBeatmapSet[] previewDifficultyBeatmapSets)
    // Offset: 0xFD9BB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomPreviewBeatmapLevel* New_ctor(UnityEngine::Sprite* defaultCoverImage, GlobalNamespace::StandardLevelInfoSaveData* standardLevelInfoSaveData, ::Il2CppString* customLevelPath, GlobalNamespace::IAudioClipAsyncLoader* audioClipAsyncLoader, GlobalNamespace::ISpriteAsyncLoader* spriteAsyncLoader, ::Il2CppString* levelID, ::Il2CppString* songName, ::Il2CppString* songSubName, ::Il2CppString* songAuthorName, ::Il2CppString* levelAuthorName, float beatsPerMinute, float songTimeOffset, float shuffle, float shufflePeriod, float previewStartTime, float previewDuration, GlobalNamespace::EnvironmentInfoSO* environmentInfo, GlobalNamespace::EnvironmentInfoSO* allDirectionsEnvironmentInfo, ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CustomPreviewBeatmapLevel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomPreviewBeatmapLevel*, creationType>(defaultCoverImage, standardLevelInfoSaveData, customLevelPath, audioClipAsyncLoader, spriteAsyncLoader, levelID, songName, songSubName, songAuthorName, levelAuthorName, beatsPerMinute, songTimeOffset, shuffle, shufflePeriod, previewStartTime, previewDuration, environmentInfo, allDirectionsEnvironmentInfo, previewDifficultyBeatmapSets)));
    }
  }; // CustomPreviewBeatmapLevel
  #pragma pack(pop)
  static check_size<sizeof(CustomPreviewBeatmapLevel), 160 + sizeof(::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>*)> __GlobalNamespace_CustomPreviewBeatmapLevelSizeCheck;
  static_assert(sizeof(CustomPreviewBeatmapLevel) == 0xA8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CustomPreviewBeatmapLevel*, "", "CustomPreviewBeatmapLevel");
