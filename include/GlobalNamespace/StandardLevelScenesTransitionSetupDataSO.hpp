// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ScenesTransitionSetupDataSO
#include "GlobalNamespace/ScenesTransitionSetupDataSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SceneInfo
  class SceneInfo;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: OverrideEnvironmentSettings
  class OverrideEnvironmentSettings;
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
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  // Autogenerated type: StandardLevelScenesTransitionSetupDataSO
  // [] Offset: FFFFFFFF
  class StandardLevelScenesTransitionSetupDataSO : public GlobalNamespace::ScenesTransitionSetupDataSO {
    public:
    // private SceneInfo _standardGameplaySceneInfo
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::SceneInfo* standardGameplaySceneInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SceneInfo*) == 0x8);
    // private SceneInfo _gameCoreSceneInfo
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::SceneInfo* gameCoreSceneInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SceneInfo*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD3268
    // private System.Action`2<StandardLevelScenesTransitionSetupDataSO,LevelCompletionResults> didFinishEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD3278
    // private System.String <gameMode>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* gameMode;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD3288
    // private IDifficultyBeatmap <difficultyBeatmap>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // Creating value type constructor for type: StandardLevelScenesTransitionSetupDataSO
    StandardLevelScenesTransitionSetupDataSO(GlobalNamespace::SceneInfo* standardGameplaySceneInfo_ = {}, GlobalNamespace::SceneInfo* gameCoreSceneInfo_ = {}, System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*>* didFinishEvent_ = {}, ::Il2CppString* gameMode_ = {}, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap_ = {}) noexcept : standardGameplaySceneInfo{standardGameplaySceneInfo_}, gameCoreSceneInfo{gameCoreSceneInfo_}, didFinishEvent{didFinishEvent_}, gameMode{gameMode_}, difficultyBeatmap{difficultyBeatmap_} {}
    // public System.Void add_didFinishEvent(System.Action`2<StandardLevelScenesTransitionSetupDataSO,LevelCompletionResults> value)
    // Offset: 0xF3DF0C
    void add_didFinishEvent(System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<StandardLevelScenesTransitionSetupDataSO,LevelCompletionResults> value)
    // Offset: 0xF3E040
    void remove_didFinishEvent(System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*>* value);
    // public System.String get_gameMode()
    // Offset: 0xF4512C
    ::Il2CppString* get_gameMode();
    // private System.Void set_gameMode(System.String value)
    // Offset: 0xF45134
    void set_gameMode(::Il2CppString* value);
    // public IDifficultyBeatmap get_difficultyBeatmap()
    // Offset: 0xF4513C
    GlobalNamespace::IDifficultyBeatmap* get_difficultyBeatmap();
    // private System.Void set_difficultyBeatmap(IDifficultyBeatmap value)
    // Offset: 0xF45144
    void set_difficultyBeatmap(GlobalNamespace::IDifficultyBeatmap* value);
    // public System.Void Init(System.String gameMode, IDifficultyBeatmap difficultyBeatmap, OverrideEnvironmentSettings overrideEnvironmentSettings, ColorScheme overrideColorScheme, GameplayModifiers gameplayModifiers, PlayerSpecificSettings playerSpecificSettings, PracticeSettings practiceSettings, System.String backButtonText, System.Boolean useTestNoteCutSoundEffects)
    // Offset: 0xF44AD4
    void Init(::Il2CppString* gameMode, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings, GlobalNamespace::ColorScheme* overrideColorScheme, GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, GlobalNamespace::PracticeSettings* practiceSettings, ::Il2CppString* backButtonText, bool useTestNoteCutSoundEffects);
    // public System.Void Finish(LevelCompletionResults levelCompletionResults)
    // Offset: 0xF43138
    void Finish(GlobalNamespace::LevelCompletionResults* levelCompletionResults);
    // public System.Void .ctor()
    // Offset: 0xF4514C
    // Implemented from: ScenesTransitionSetupDataSO
    // Base method: System.Void ScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardLevelScenesTransitionSetupDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardLevelScenesTransitionSetupDataSO*, creationType>()));
    }
  }; // StandardLevelScenesTransitionSetupDataSO
  static check_size<sizeof(StandardLevelScenesTransitionSetupDataSO), 72 + sizeof(GlobalNamespace::IDifficultyBeatmap*)> __GlobalNamespace_StandardLevelScenesTransitionSetupDataSOSizeCheck;
  static_assert(sizeof(StandardLevelScenesTransitionSetupDataSO) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, "", "StandardLevelScenesTransitionSetupDataSO");
#pragma pack(pop)
