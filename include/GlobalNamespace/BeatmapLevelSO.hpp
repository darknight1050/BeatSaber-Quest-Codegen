// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: IBeatmapLevel
#include "GlobalNamespace/IBeatmapLevel.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmapSet
  class IDifficultyBeatmapSet;
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: PreviewDifficultyBeatmapSet
  class PreviewDifficultyBeatmapSet;
  // Forward declaring type: IBeatmapLevelData
  class IBeatmapLevelData;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
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
  // Autogenerated type: BeatmapLevelSO
  class BeatmapLevelSO : public GlobalNamespace::PersistentScriptableObject, public GlobalNamespace::IBeatmapLevel, public GlobalNamespace::IPreviewBeatmapLevel {
    public:
    // Nested type: GlobalNamespace::BeatmapLevelSO::DifficultyBeatmapSet
    class DifficultyBeatmapSet;
    // Nested type: GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap
    class DifficultyBeatmap;
    // Nested type: GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataResult
    struct GetBeatmapLevelDataResult;
    // Nested type: GlobalNamespace::BeatmapLevelSO::$GetPreviewAudioClipAsync$d__64
    struct $GetPreviewAudioClipAsync$d__64;
    // Nested type: GlobalNamespace::BeatmapLevelSO::$GetCoverImageTexture2DAsync$d__65
    struct $GetCoverImageTexture2DAsync$d__65;
    // Nested type: GlobalNamespace::BeatmapLevelSO::$GetBeatmapLevelDataAsync$d__68
    struct $GetBeatmapLevelDataAsync$d__68;
    // Autogenerated type: BeatmapLevelSO/GetBeatmapLevelDataResult
    struct GetBeatmapLevelDataResult : public System::ValueType {
      public:
      // Nested type: GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataResult::Result
      struct Result;
      // Autogenerated type: BeatmapLevelSO/GetBeatmapLevelDataResult/Result
      struct Result : public System::Enum {
        public:
        // public System.Int32 value__
        // Offset: 0x0
        int value;
        // static field const value: static public BeatmapLevelSO/GetBeatmapLevelDataResult/Result OK
        static constexpr const int OK = 0;
        // Get static field: static public BeatmapLevelSO/GetBeatmapLevelDataResult/Result OK
        static GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataResult::Result _get_OK();
        // Set static field: static public BeatmapLevelSO/GetBeatmapLevelDataResult/Result OK
        static void _set_OK(GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataResult::Result value);
        // static field const value: static public BeatmapLevelSO/GetBeatmapLevelDataResult/Result NotOwned
        static constexpr const int NotOwned = 1;
        // Get static field: static public BeatmapLevelSO/GetBeatmapLevelDataResult/Result NotOwned
        static GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataResult::Result _get_NotOwned();
        // Set static field: static public BeatmapLevelSO/GetBeatmapLevelDataResult/Result NotOwned
        static void _set_NotOwned(GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataResult::Result value);
        // static field const value: static public BeatmapLevelSO/GetBeatmapLevelDataResult/Result Fail
        static constexpr const int Fail = 2;
        // Get static field: static public BeatmapLevelSO/GetBeatmapLevelDataResult/Result Fail
        static GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataResult::Result _get_Fail();
        // Set static field: static public BeatmapLevelSO/GetBeatmapLevelDataResult/Result Fail
        static void _set_Fail(GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataResult::Result value);
        // Creating value type constructor for type: Result
        Result(int value_ = {}) : value{value_} {}
      }; // BeatmapLevelSO/GetBeatmapLevelDataResult/Result
      // public readonly BeatmapLevelSO/GetBeatmapLevelDataResult/Result result
      // Offset: 0x0
      GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataResult::Result result;
      // public readonly IBeatmapLevelData beatmapLevelData
      // Offset: 0x8
      GlobalNamespace::IBeatmapLevelData* beatmapLevelData;
      // Creating value type constructor for type: GetBeatmapLevelDataResult
      GetBeatmapLevelDataResult(GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataResult::Result result_ = {}, GlobalNamespace::IBeatmapLevelData* beatmapLevelData_ = {}) : result{result_}, beatmapLevelData{beatmapLevelData_} {}
      // public System.Void .ctor(BeatmapLevelSO/GetBeatmapLevelDataResult/Result result, IBeatmapLevelData beatmapLevelData)
      // Offset: 0xA269EC
      static BeatmapLevelSO::GetBeatmapLevelDataResult* New_ctor(GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataResult::Result result, GlobalNamespace::IBeatmapLevelData* beatmapLevelData);
    }; // BeatmapLevelSO/GetBeatmapLevelDataResult
    // private System.String _levelID
    // Offset: 0x18
    ::CsString* levelID;
    // private System.String _songName
    // Offset: 0x20
    ::CsString* songName;
    // private System.String _songSubName
    // Offset: 0x28
    ::CsString* songSubName;
    // private System.String _songAuthorName
    // Offset: 0x30
    ::CsString* songAuthorName;
    // private System.String _levelAuthorName
    // Offset: 0x38
    ::CsString* levelAuthorName;
    // private UnityEngine.AudioClip _audioClip
    // Offset: 0x40
    UnityEngine::AudioClip* audioClip;
    // private System.Single _beatsPerMinute
    // Offset: 0x48
    float beatsPerMinute;
    // private System.Single _songTimeOffset
    // Offset: 0x4C
    float songTimeOffset;
    // private System.Single _shuffle
    // Offset: 0x50
    float shuffle;
    // private System.Single _shufflePeriod
    // Offset: 0x54
    float shufflePeriod;
    // private System.Single _previewStartTime
    // Offset: 0x58
    float previewStartTime;
    // private System.Single _previewDuration
    // Offset: 0x5C
    float previewDuration;
    // private UnityEngine.Texture2D _coverImageTexture2D
    // Offset: 0x60
    UnityEngine::Texture2D* coverImageTexture2D;
    // private EnvironmentInfoSO _environmentInfo
    // Offset: 0x68
    GlobalNamespace::EnvironmentInfoSO* environmentInfo;
    // private EnvironmentInfoSO _allDirectionsEnvironmentInfo
    // Offset: 0x70
    GlobalNamespace::EnvironmentInfoSO* allDirectionsEnvironmentInfo;
    // private BeatmapLevelSO/DifficultyBeatmapSet[] _difficultyBeatmapSets
    // Offset: 0x78
    ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmapSet*>* difficultyBeatmapSets;
    // public System.Boolean _ignore360MovementBeatmaps
    // Offset: 0x80
    bool ignore360MovementBeatmaps;
    // private BeatmapLevelSO/DifficultyBeatmapSet[] _no360MovementDifficultyBeatmapSets
    // Offset: 0x88
    ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmapSet*>* no360MovementDifficultyBeatmapSets;
    // private PreviewDifficultyBeatmapSet[] _previewDifficultyBeatmapSets
    // Offset: 0x90
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets;
    // private PreviewDifficultyBeatmapSet[] _no360MovementPreviewDifficultyBeatmapSets
    // Offset: 0x98
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* no360MovementPreviewDifficultyBeatmapSets;
    // private IBeatmapLevelData _beatmapLevelData
    // Offset: 0xA0
    GlobalNamespace::IBeatmapLevelData* beatmapLevelData;
    // private BeatmapLevelSO/GetBeatmapLevelDataResult _getBeatmapLevelDataResult
    // Offset: 0xA8
    GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataResult getBeatmapLevelDataResult;
    // public UnityEngine.AudioClip get_previewAudioClip()
    // Offset: 0xB53340
    UnityEngine::AudioClip* get_previewAudioClip();
    // public UnityEngine.Texture2D get_coverImageTexture2D()
    // Offset: 0xB53358
    UnityEngine::Texture2D* get_coverImageTexture2D();
    // public IDifficultyBeatmapSet[] get_difficultyBeatmapSets()
    // Offset: 0xB53370
    ::Array<GlobalNamespace::IDifficultyBeatmapSet*>* get_difficultyBeatmapSets();
    // public System.Void InitFull(System.String levelID, System.String songName, System.String songSubName, System.String songAuthorName, System.String levelAuthorName, UnityEngine.AudioClip audioClip, System.Single beatsPerMinute, System.Single songTimeOffset, System.Single shuffle, System.Single shufflePeriod, System.Single previewStartTime, System.Single previewDuration, UnityEngine.Texture2D coverImageTexture2D, EnvironmentInfoSO environmentInfo, EnvironmentInfoSO allDirectionsEnvironmentInfo, BeatmapLevelSO/DifficultyBeatmapSet[] difficultyBeatmapSets)
    // Offset: 0xB53558
    void InitFull(::CsString* levelID, ::CsString* songName, ::CsString* songSubName, ::CsString* songAuthorName, ::CsString* levelAuthorName, UnityEngine::AudioClip* audioClip, float beatsPerMinute, float songTimeOffset, float shuffle, float shufflePeriod, float previewStartTime, float previewDuration, UnityEngine::Texture2D* coverImageTexture2D, GlobalNamespace::EnvironmentInfoSO* environmentInfo, GlobalNamespace::EnvironmentInfoSO* allDirectionsEnvironmentInfo, ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmapSet*>* difficultyBeatmapSets);
    // private System.Void InitData()
    // Offset: 0xB533EC
    void InitData();
    // public System.Threading.Tasks.Task`1<BeatmapLevelSO/GetBeatmapLevelDataResult> GetBeatmapLevelDataAsync(System.Threading.CancellationToken token)
    // Offset: 0xB53A40
    System::Threading::Tasks::Task_1<GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataResult>* GetBeatmapLevelDataAsync(System::Threading::CancellationToken token);
    // public IDifficultyBeatmap GetDifficultyBeatmap(BeatmapCharacteristicSO characteristic, BeatmapDifficulty difficulty)
    // Offset: 0xB53B58
    GlobalNamespace::IDifficultyBeatmap* GetDifficultyBeatmap(GlobalNamespace::BeatmapCharacteristicSO* characteristic, GlobalNamespace::BeatmapDifficulty difficulty);
    // public System.String get_levelID()
    // Offset: 0xB532F8
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_levelID()
    ::CsString* get_levelID();
    // public System.String get_songName()
    // Offset: 0xB53300
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_songName()
    ::CsString* get_songName();
    // public System.String get_songSubName()
    // Offset: 0xB53308
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_songSubName()
    ::CsString* get_songSubName();
    // public System.String get_songAuthorName()
    // Offset: 0xB53310
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_songAuthorName()
    ::CsString* get_songAuthorName();
    // public System.String get_levelAuthorName()
    // Offset: 0xB53318
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_levelAuthorName()
    ::CsString* get_levelAuthorName();
    // public System.Single get_beatsPerMinute()
    // Offset: 0xB53320
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_beatsPerMinute()
    float get_beatsPerMinute();
    // public System.Single get_songTimeOffset()
    // Offset: 0xB53328
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_songTimeOffset()
    float get_songTimeOffset();
    // public System.Single get_shuffle()
    // Offset: 0xB53330
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_shuffle()
    float get_shuffle();
    // public System.Single get_shufflePeriod()
    // Offset: 0xB53338
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_shufflePeriod()
    float get_shufflePeriod();
    // public System.Single get_previewStartTime()
    // Offset: 0xB53348
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_previewStartTime()
    float get_previewStartTime();
    // public System.Single get_previewDuration()
    // Offset: 0xB53350
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_previewDuration()
    float get_previewDuration();
    // public EnvironmentInfoSO get_environmentInfo()
    // Offset: 0xB53360
    // Implemented from: IPreviewBeatmapLevel
    // Base method: EnvironmentInfoSO IPreviewBeatmapLevel::get_environmentInfo()
    GlobalNamespace::EnvironmentInfoSO* get_environmentInfo();
    // public EnvironmentInfoSO get_allDirectionsEnvironmentInfo()
    // Offset: 0xB53368
    // Implemented from: IPreviewBeatmapLevel
    // Base method: EnvironmentInfoSO IPreviewBeatmapLevel::get_allDirectionsEnvironmentInfo()
    GlobalNamespace::EnvironmentInfoSO* get_allDirectionsEnvironmentInfo();
    // public System.Single get_songDuration()
    // Offset: 0xB5338C
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_songDuration()
    float get_songDuration();
    // public PreviewDifficultyBeatmapSet[] get_previewDifficultyBeatmapSets()
    // Offset: 0xB533A8
    // Implemented from: IPreviewBeatmapLevel
    // Base method: PreviewDifficultyBeatmapSet[] IPreviewBeatmapLevel::get_previewDifficultyBeatmapSets()
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* get_previewDifficultyBeatmapSets();
    // protected override System.Void OnEnable()
    // Offset: 0xB533C4
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public System.Threading.Tasks.Task`1<UnityEngine.AudioClip> GetPreviewAudioClipAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xB5370C
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Threading.Tasks.Task`1<UnityEngine.AudioClip> IPreviewBeatmapLevel::GetPreviewAudioClipAsync(System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<UnityEngine::AudioClip*>* GetPreviewAudioClipAsync(System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<UnityEngine.Texture2D> GetCoverImageTexture2DAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xB53858
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Threading.Tasks.Task`1<UnityEngine.Texture2D> IPreviewBeatmapLevel::GetCoverImageTexture2DAsync(System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<UnityEngine::Texture2D*>* GetCoverImageTexture2DAsync(System::Threading::CancellationToken cancellationToken);
    // public IBeatmapLevelData get_beatmapLevelData()
    // Offset: 0xB539A4
    // Implemented from: IBeatmapLevel
    // Base method: IBeatmapLevelData IBeatmapLevel::get_beatmapLevelData()
    GlobalNamespace::IBeatmapLevelData* get_beatmapLevelData();
    // public System.Void .ctor()
    // Offset: 0xB53DDC
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BeatmapLevelSO* New_ctor();
  }; // BeatmapLevelSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelSO*, "", "BeatmapLevelSO");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataResult, "", "BeatmapLevelSO/GetBeatmapLevelDataResult");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataResult::Result, "", "BeatmapLevelSO/GetBeatmapLevelDataResult/Result");
#pragma pack(pop)
