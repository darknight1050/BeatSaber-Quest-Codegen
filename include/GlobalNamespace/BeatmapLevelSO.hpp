// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
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
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelSO
  class BeatmapLevelSO : public GlobalNamespace::PersistentScriptableObject/*, public GlobalNamespace::IBeatmapLevel*/ {
    public:
    // Nested type: GlobalNamespace::BeatmapLevelSO::DifficultyBeatmapSet
    class DifficultyBeatmapSet;
    // Nested type: GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap
    class DifficultyBeatmap;
    // Nested type: GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataResult
    struct GetBeatmapLevelDataResult;
    // Nested type: GlobalNamespace::BeatmapLevelSO::$GetPreviewAudioClipAsync$d__64
    struct $GetPreviewAudioClipAsync$d__64;
    // Nested type: GlobalNamespace::BeatmapLevelSO::$GetCoverImageAsync$d__65
    struct $GetCoverImageAsync$d__65;
    // Nested type: GlobalNamespace::BeatmapLevelSO::$GetBeatmapLevelDataAsync$d__68
    struct $GetBeatmapLevelDataAsync$d__68;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: BeatmapLevelSO/GetBeatmapLevelDataResult
    struct GetBeatmapLevelDataResult/*, public System::ValueType*/ {
      public:
      // Nested type: GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataResult::Result
      struct Result;
      // Size: 0x4
      #pragma pack(push, 1)
      // Autogenerated type: BeatmapLevelSO/GetBeatmapLevelDataResult/Result
      struct Result/*, public System::Enum*/ {
        public:
        // public System.Int32 value__
        // Size: 0x4
        // Offset: 0x0
        int value;
        // Field size check
        static_assert(sizeof(int) == 0x4);
        // Creating value type constructor for type: Result
        constexpr Result(int value_ = {}) noexcept : value{value_} {}
        // Creating interface conversion operator: operator System::Enum
        operator System::Enum() noexcept {
          return *reinterpret_cast<System::Enum*>(this);
        }
        // Creating conversion operator: operator int
        constexpr operator int() const noexcept {
          return value;
        }
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
      }; // BeatmapLevelSO/GetBeatmapLevelDataResult/Result
      #pragma pack(pop)
      static check_size<sizeof(BeatmapLevelSO::GetBeatmapLevelDataResult::Result), 0 + sizeof(int)> __GlobalNamespace_BeatmapLevelSO_GetBeatmapLevelDataResult_ResultSizeCheck;
      static_assert(sizeof(BeatmapLevelSO::GetBeatmapLevelDataResult::Result) == 0x4);
      // public readonly BeatmapLevelSO/GetBeatmapLevelDataResult/Result result
      // Size: 0x4
      // Offset: 0x0
      GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataResult::Result result;
      // Field size check
      static_assert(sizeof(GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataResult::Result) == 0x4);
      // Padding between fields: result and: beatmapLevelData
      char __padding0[0x4] = {};
      // public readonly IBeatmapLevelData beatmapLevelData
      // Size: 0x8
      // Offset: 0x8
      GlobalNamespace::IBeatmapLevelData* beatmapLevelData;
      // Field size check
      static_assert(sizeof(GlobalNamespace::IBeatmapLevelData*) == 0x8);
      // Creating value type constructor for type: GetBeatmapLevelDataResult
      constexpr GetBeatmapLevelDataResult(GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataResult::Result result_ = {}, GlobalNamespace::IBeatmapLevelData* beatmapLevelData_ = {}) noexcept : result{result_}, beatmapLevelData{beatmapLevelData_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // public System.Void .ctor(BeatmapLevelSO/GetBeatmapLevelDataResult/Result result, IBeatmapLevelData beatmapLevelData)
      // Offset: 0xEE3C08
      // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      // ABORTED: conflicts with another method.  GetBeatmapLevelDataResult(GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataResult::Result result, GlobalNamespace::IBeatmapLevelData* beatmapLevelData)
    }; // BeatmapLevelSO/GetBeatmapLevelDataResult
    #pragma pack(pop)
    static check_size<sizeof(BeatmapLevelSO::GetBeatmapLevelDataResult), 8 + sizeof(GlobalNamespace::IBeatmapLevelData*)> __GlobalNamespace_BeatmapLevelSO_GetBeatmapLevelDataResultSizeCheck;
    static_assert(sizeof(BeatmapLevelSO::GetBeatmapLevelDataResult) == 0x10);
    // private System.String _levelID
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* levelID;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _songName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* songName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _songSubName
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* songSubName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _songAuthorName
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* songAuthorName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _levelAuthorName
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* levelAuthorName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private UnityEngine.AudioClip _audioClip
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::AudioClip* audioClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioClip*) == 0x8);
    // private System.Single _beatsPerMinute
    // Size: 0x4
    // Offset: 0x48
    float beatsPerMinute;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _songTimeOffset
    // Size: 0x4
    // Offset: 0x4C
    float songTimeOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _shuffle
    // Size: 0x4
    // Offset: 0x50
    float shuffle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _shufflePeriod
    // Size: 0x4
    // Offset: 0x54
    float shufflePeriod;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _previewStartTime
    // Size: 0x4
    // Offset: 0x58
    float previewStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _previewDuration
    // Size: 0x4
    // Offset: 0x5C
    float previewDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Sprite _coverImage
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::Sprite* coverImage;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private EnvironmentInfoSO _environmentInfo
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::EnvironmentInfoSO* environmentInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentInfoSO*) == 0x8);
    // private EnvironmentInfoSO _allDirectionsEnvironmentInfo
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::EnvironmentInfoSO* allDirectionsEnvironmentInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentInfoSO*) == 0x8);
    // private BeatmapLevelSO/DifficultyBeatmapSet[] _difficultyBeatmapSets
    // Size: 0x8
    // Offset: 0x78
    ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmapSet*>* difficultyBeatmapSets;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmapSet*>*) == 0x8);
    // public System.Boolean _ignore360MovementBeatmaps
    // Size: 0x1
    // Offset: 0x80
    bool ignore360MovementBeatmaps;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ignore360MovementBeatmaps and: no360MovementDifficultyBeatmapSets
    char __padding16[0x7] = {};
    // private BeatmapLevelSO/DifficultyBeatmapSet[] _no360MovementDifficultyBeatmapSets
    // Size: 0x8
    // Offset: 0x88
    ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmapSet*>* no360MovementDifficultyBeatmapSets;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmapSet*>*) == 0x8);
    // private PreviewDifficultyBeatmapSet[] _previewDifficultyBeatmapSets
    // Size: 0x8
    // Offset: 0x90
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>*) == 0x8);
    // private PreviewDifficultyBeatmapSet[] _no360MovementPreviewDifficultyBeatmapSets
    // Size: 0x8
    // Offset: 0x98
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* no360MovementPreviewDifficultyBeatmapSets;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>*) == 0x8);
    // private IBeatmapLevelData _beatmapLevelData
    // Size: 0x8
    // Offset: 0xA0
    GlobalNamespace::IBeatmapLevelData* beatmapLevelData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapLevelData*) == 0x8);
    // private BeatmapLevelSO/GetBeatmapLevelDataResult _getBeatmapLevelDataResult
    // Size: 0x10
    // Offset: 0xA8
    GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataResult getBeatmapLevelDataResult;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataResult) == 0x10);
    // Creating value type constructor for type: BeatmapLevelSO
    BeatmapLevelSO(::Il2CppString* levelID_ = {}, ::Il2CppString* songName_ = {}, ::Il2CppString* songSubName_ = {}, ::Il2CppString* songAuthorName_ = {}, ::Il2CppString* levelAuthorName_ = {}, UnityEngine::AudioClip* audioClip_ = {}, float beatsPerMinute_ = {}, float songTimeOffset_ = {}, float shuffle_ = {}, float shufflePeriod_ = {}, float previewStartTime_ = {}, float previewDuration_ = {}, UnityEngine::Sprite* coverImage_ = {}, GlobalNamespace::EnvironmentInfoSO* environmentInfo_ = {}, GlobalNamespace::EnvironmentInfoSO* allDirectionsEnvironmentInfo_ = {}, ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmapSet*>* difficultyBeatmapSets_ = {}, bool ignore360MovementBeatmaps_ = {}, ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmapSet*>* no360MovementDifficultyBeatmapSets_ = {}, ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets_ = {}, ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* no360MovementPreviewDifficultyBeatmapSets_ = {}, GlobalNamespace::IBeatmapLevelData* beatmapLevelData_ = {}, GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataResult getBeatmapLevelDataResult_ = {}) noexcept : levelID{levelID_}, songName{songName_}, songSubName{songSubName_}, songAuthorName{songAuthorName_}, levelAuthorName{levelAuthorName_}, audioClip{audioClip_}, beatsPerMinute{beatsPerMinute_}, songTimeOffset{songTimeOffset_}, shuffle{shuffle_}, shufflePeriod{shufflePeriod_}, previewStartTime{previewStartTime_}, previewDuration{previewDuration_}, coverImage{coverImage_}, environmentInfo{environmentInfo_}, allDirectionsEnvironmentInfo{allDirectionsEnvironmentInfo_}, difficultyBeatmapSets{difficultyBeatmapSets_}, ignore360MovementBeatmaps{ignore360MovementBeatmaps_}, no360MovementDifficultyBeatmapSets{no360MovementDifficultyBeatmapSets_}, previewDifficultyBeatmapSets{previewDifficultyBeatmapSets_}, no360MovementPreviewDifficultyBeatmapSets{no360MovementPreviewDifficultyBeatmapSets_}, beatmapLevelData{beatmapLevelData_}, getBeatmapLevelDataResult{getBeatmapLevelDataResult_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IBeatmapLevel
    operator GlobalNamespace::IBeatmapLevel() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatmapLevel*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.String get_levelID()
    // Offset: 0x1076668
    ::Il2CppString* get_levelID();
    // public System.String get_songName()
    // Offset: 0x1076670
    ::Il2CppString* get_songName();
    // public System.String get_songSubName()
    // Offset: 0x1076678
    ::Il2CppString* get_songSubName();
    // public System.String get_songAuthorName()
    // Offset: 0x1076680
    ::Il2CppString* get_songAuthorName();
    // public System.String get_levelAuthorName()
    // Offset: 0x1076688
    ::Il2CppString* get_levelAuthorName();
    // public System.Single get_beatsPerMinute()
    // Offset: 0x1076690
    float get_beatsPerMinute();
    // public System.Single get_songTimeOffset()
    // Offset: 0x1076698
    float get_songTimeOffset();
    // public System.Single get_shuffle()
    // Offset: 0x10766A0
    float get_shuffle();
    // public System.Single get_shufflePeriod()
    // Offset: 0x10766A8
    float get_shufflePeriod();
    // public UnityEngine.AudioClip get_previewAudioClip()
    // Offset: 0x10766B0
    UnityEngine::AudioClip* get_previewAudioClip();
    // public System.Single get_previewStartTime()
    // Offset: 0x10766B8
    float get_previewStartTime();
    // public System.Single get_previewDuration()
    // Offset: 0x10766C0
    float get_previewDuration();
    // public UnityEngine.Sprite get_coverImage()
    // Offset: 0x10766C8
    UnityEngine::Sprite* get_coverImage();
    // public EnvironmentInfoSO get_environmentInfo()
    // Offset: 0x10766D0
    GlobalNamespace::EnvironmentInfoSO* get_environmentInfo();
    // public EnvironmentInfoSO get_allDirectionsEnvironmentInfo()
    // Offset: 0x10766D8
    GlobalNamespace::EnvironmentInfoSO* get_allDirectionsEnvironmentInfo();
    // public IDifficultyBeatmapSet[] get_difficultyBeatmapSets()
    // Offset: 0x10766E0
    ::Array<GlobalNamespace::IDifficultyBeatmapSet*>* get_difficultyBeatmapSets();
    // public System.Single get_songDuration()
    // Offset: 0x10766FC
    float get_songDuration();
    // public PreviewDifficultyBeatmapSet[] get_previewDifficultyBeatmapSets()
    // Offset: 0x1076718
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* get_previewDifficultyBeatmapSets();
    // public System.Void InitFull(System.String levelID, System.String songName, System.String songSubName, System.String songAuthorName, System.String levelAuthorName, UnityEngine.AudioClip audioClip, System.Single beatsPerMinute, System.Single songTimeOffset, System.Single shuffle, System.Single shufflePeriod, System.Single previewStartTime, System.Single previewDuration, UnityEngine.Sprite coverImage, EnvironmentInfoSO environmentInfo, EnvironmentInfoSO allDirectionsEnvironmentInfo, BeatmapLevelSO/DifficultyBeatmapSet[] difficultyBeatmapSets)
    // Offset: 0x1076884
    void InitFull(::Il2CppString* levelID, ::Il2CppString* songName, ::Il2CppString* songSubName, ::Il2CppString* songAuthorName, ::Il2CppString* levelAuthorName, UnityEngine::AudioClip* audioClip, float beatsPerMinute, float songTimeOffset, float shuffle, float shufflePeriod, float previewStartTime, float previewDuration, UnityEngine::Sprite* coverImage, GlobalNamespace::EnvironmentInfoSO* environmentInfo, GlobalNamespace::EnvironmentInfoSO* allDirectionsEnvironmentInfo, ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmapSet*>* difficultyBeatmapSets);
    // private System.Void InitData()
    // Offset: 0x107675C
    void InitData();
    // public System.Threading.Tasks.Task`1<UnityEngine.AudioClip> GetPreviewAudioClipAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1076934
    System::Threading::Tasks::Task_1<UnityEngine::AudioClip*>* GetPreviewAudioClipAsync(System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<UnityEngine.Sprite> GetCoverImageAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1076A58
    System::Threading::Tasks::Task_1<UnityEngine::Sprite*>* GetCoverImageAsync(System::Threading::CancellationToken cancellationToken);
    // public IBeatmapLevelData get_beatmapLevelData()
    // Offset: 0x1076B7C
    GlobalNamespace::IBeatmapLevelData* get_beatmapLevelData();
    // public System.Threading.Tasks.Task`1<BeatmapLevelSO/GetBeatmapLevelDataResult> GetBeatmapLevelDataAsync(System.Threading.CancellationToken token)
    // Offset: 0x1076C00
    System::Threading::Tasks::Task_1<GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataResult>* GetBeatmapLevelDataAsync(System::Threading::CancellationToken token);
    // public IDifficultyBeatmap GetDifficultyBeatmap(BeatmapCharacteristicSO characteristic, BeatmapDifficulty difficulty)
    // Offset: 0x1076D00
    GlobalNamespace::IDifficultyBeatmap* GetDifficultyBeatmap(GlobalNamespace::BeatmapCharacteristicSO* characteristic, GlobalNamespace::BeatmapDifficulty difficulty);
    // protected override System.Void OnEnable()
    // Offset: 0x1076734
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0x1076F84
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapLevelSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelSO*, creationType>()));
    }
  }; // BeatmapLevelSO
  #pragma pack(pop)
  static check_size<sizeof(BeatmapLevelSO), 168 + sizeof(GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataResult)> __GlobalNamespace_BeatmapLevelSOSizeCheck;
  static_assert(sizeof(BeatmapLevelSO) == 0xB8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelSO*, "", "BeatmapLevelSO");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataResult, "", "BeatmapLevelSO/GetBeatmapLevelDataResult");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataResult::Result, "", "BeatmapLevelSO/GetBeatmapLevelDataResult/Result");
