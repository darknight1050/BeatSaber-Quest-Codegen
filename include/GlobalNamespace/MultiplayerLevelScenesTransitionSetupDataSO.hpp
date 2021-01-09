// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ScenesTransitionSetupDataSO
#include "GlobalNamespace/ScenesTransitionSetupDataSO.hpp"
// Including type: DisconnectedReason
#include "GlobalNamespace/DisconnectedReason.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SceneInfo
  class SceneInfo;
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: ColorScheme
  class ColorScheme;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
  // Forward declaring type: PracticeSettings
  class PracticeSettings;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x78
  // Autogenerated type: MultiplayerLevelScenesTransitionSetupDataSO
  // [] Offset: FFFFFFFF
  class MultiplayerLevelScenesTransitionSetupDataSO : public GlobalNamespace::ScenesTransitionSetupDataSO {
    public:
    // private SceneInfo _multiplayerLevelSceneInfo
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::SceneInfo* multiplayerLevelSceneInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SceneInfo*) == 0x8);
    // private SceneInfo _gameCoreSceneInfo
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::SceneInfo* gameCoreSceneInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SceneInfo*) == 0x8);
    // private EnvironmentInfoSO _multiplayerEnvironmentInfo
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::EnvironmentInfoSO* multiplayerEnvironmentInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentInfoSO*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD3198
    // private System.Action`3<MultiplayerLevelScenesTransitionSetupDataSO,LevelCompletionResults,System.Collections.Generic.Dictionary`2<System.String,LevelCompletionResults>> didFinishEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action_3<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_3<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD31A8
    // private System.Action`2<MultiplayerLevelScenesTransitionSetupDataSO,DisconnectedReason> didDisconnectEvent
    // Size: 0x8
    // Offset: 0x48
    System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::DisconnectedReason>* didDisconnectEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::DisconnectedReason>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD31B8
    // private System.String <gameMode>k__BackingField
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppString* gameMode;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD31C8
    // private IPreviewBeatmapLevel <previewBeatmapLevel>k__BackingField
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD31D8
    // private BeatmapDifficulty <beatmapDifficulty>k__BackingField
    // Size: 0x4
    // Offset: 0x60
    GlobalNamespace::BeatmapDifficulty beatmapDifficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // Padding between fields: beatmapDifficulty and: difficultyBeatmap
    char __padding7[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDD31E8
    // private IDifficultyBeatmap <difficultyBeatmap>k__BackingField
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD31F8
    // private BeatmapCharacteristicSO <beatmapCharacteristic>k__BackingField
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // Creating value type constructor for type: MultiplayerLevelScenesTransitionSetupDataSO
    MultiplayerLevelScenesTransitionSetupDataSO(GlobalNamespace::SceneInfo* multiplayerLevelSceneInfo_ = {}, GlobalNamespace::SceneInfo* gameCoreSceneInfo_ = {}, GlobalNamespace::EnvironmentInfoSO* multiplayerEnvironmentInfo_ = {}, System::Action_3<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>*>* didFinishEvent_ = {}, System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::DisconnectedReason>* didDisconnectEvent_ = {}, ::Il2CppString* gameMode_ = {}, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel_ = {}, GlobalNamespace::BeatmapDifficulty beatmapDifficulty_ = {}, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap_ = {}, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic_ = {}) noexcept : multiplayerLevelSceneInfo{multiplayerLevelSceneInfo_}, gameCoreSceneInfo{gameCoreSceneInfo_}, multiplayerEnvironmentInfo{multiplayerEnvironmentInfo_}, didFinishEvent{didFinishEvent_}, didDisconnectEvent{didDisconnectEvent_}, gameMode{gameMode_}, previewBeatmapLevel{previewBeatmapLevel_}, beatmapDifficulty{beatmapDifficulty_}, difficultyBeatmap{difficultyBeatmap_}, beatmapCharacteristic{beatmapCharacteristic_} {}
    // public System.Void add_didFinishEvent(System.Action`3<MultiplayerLevelScenesTransitionSetupDataSO,LevelCompletionResults,System.Collections.Generic.Dictionary`2<System.String,LevelCompletionResults>> value)
    // Offset: 0xFB5DB0
    void add_didFinishEvent(System::Action_3<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>*>* value);
    // public System.Void remove_didFinishEvent(System.Action`3<MultiplayerLevelScenesTransitionSetupDataSO,LevelCompletionResults,System.Collections.Generic.Dictionary`2<System.String,LevelCompletionResults>> value)
    // Offset: 0xFB5EE4
    void remove_didFinishEvent(System::Action_3<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>*>* value);
    // public System.Void add_didDisconnectEvent(System.Action`2<MultiplayerLevelScenesTransitionSetupDataSO,DisconnectedReason> value)
    // Offset: 0xFB7DC0
    void add_didDisconnectEvent(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::DisconnectedReason>* value);
    // public System.Void remove_didDisconnectEvent(System.Action`2<MultiplayerLevelScenesTransitionSetupDataSO,DisconnectedReason> value)
    // Offset: 0xFB7E64
    void remove_didDisconnectEvent(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::DisconnectedReason>* value);
    // public System.String get_gameMode()
    // Offset: 0xFB7F08
    ::Il2CppString* get_gameMode();
    // private System.Void set_gameMode(System.String value)
    // Offset: 0xFB7F10
    void set_gameMode(::Il2CppString* value);
    // public IPreviewBeatmapLevel get_previewBeatmapLevel()
    // Offset: 0xFB7F18
    GlobalNamespace::IPreviewBeatmapLevel* get_previewBeatmapLevel();
    // private System.Void set_previewBeatmapLevel(IPreviewBeatmapLevel value)
    // Offset: 0xFB7F20
    void set_previewBeatmapLevel(GlobalNamespace::IPreviewBeatmapLevel* value);
    // public BeatmapDifficulty get_beatmapDifficulty()
    // Offset: 0xFB7F28
    GlobalNamespace::BeatmapDifficulty get_beatmapDifficulty();
    // private System.Void set_beatmapDifficulty(BeatmapDifficulty value)
    // Offset: 0xFB7F30
    void set_beatmapDifficulty(GlobalNamespace::BeatmapDifficulty value);
    // public IDifficultyBeatmap get_difficultyBeatmap()
    // Offset: 0xFB7F38
    GlobalNamespace::IDifficultyBeatmap* get_difficultyBeatmap();
    // private System.Void set_difficultyBeatmap(IDifficultyBeatmap value)
    // Offset: 0xFB7F40
    void set_difficultyBeatmap(GlobalNamespace::IDifficultyBeatmap* value);
    // public BeatmapCharacteristicSO get_beatmapCharacteristic()
    // Offset: 0xFB7F48
    GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();
    // private System.Void set_beatmapCharacteristic(BeatmapCharacteristicSO value)
    // Offset: 0xFB7F50
    void set_beatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO* value);
    // public System.Void Init(System.String gameMode, IPreviewBeatmapLevel previewBeatmapLevel, BeatmapDifficulty beatmapDifficulty, BeatmapCharacteristicSO beatmapCharacteristic, IDifficultyBeatmap difficultyBeatmap, ColorScheme overrideColorScheme, GameplayModifiers gameplayModifiers, PlayerSpecificSettings playerSpecificSettings, PracticeSettings practiceSettings, System.Boolean useTestNoteCutSoundEffects)
    // Offset: 0xFB79C0
    void Init(::Il2CppString* gameMode, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::ColorScheme* overrideColorScheme, GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, GlobalNamespace::PracticeSettings* practiceSettings, bool useTestNoteCutSoundEffects);
    // public System.Void Finish(LevelCompletionResults levelCompletionResults, System.Collections.Generic.Dictionary`2<System.String,LevelCompletionResults> otherPlayersLevelCompletionResults)
    // Offset: 0xFAF00C
    void Finish(GlobalNamespace::LevelCompletionResults* levelCompletionResults, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>* otherPlayersLevelCompletionResults);
    // public System.Void FinishWithDisconnect(DisconnectedReason disconnectedReason)
    // Offset: 0xFB0BBC
    void FinishWithDisconnect(GlobalNamespace::DisconnectedReason disconnectedReason);
    // public System.Void .ctor()
    // Offset: 0xFB7F58
    // Implemented from: ScenesTransitionSetupDataSO
    // Base method: System.Void ScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLevelScenesTransitionSetupDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLevelScenesTransitionSetupDataSO*, creationType>()));
    }
  }; // MultiplayerLevelScenesTransitionSetupDataSO
  static check_size<sizeof(MultiplayerLevelScenesTransitionSetupDataSO), 112 + sizeof(GlobalNamespace::BeatmapCharacteristicSO*)> __GlobalNamespace_MultiplayerLevelScenesTransitionSetupDataSOSizeCheck;
  static_assert(sizeof(MultiplayerLevelScenesTransitionSetupDataSO) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, "", "MultiplayerLevelScenesTransitionSetupDataSO");
#pragma pack(pop)
