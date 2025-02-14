// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelBar
  class LevelBar;
  // Forward declaring type: FireworksController
  class FireworksController;
  // Forward declaring type: SongPreviewPlayer
  class SongPreviewPlayer;
  // Forward declaring type: AudioManagerSO
  class AudioManagerSO;
  // Forward declaring type: ResultsEnvironmentManager
  class ResultsEnvironmentManager;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: Coroutine
  class Coroutine;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x11A
  #pragma pack(push, 1)
  // Autogenerated type: ResultsViewController
  class ResultsViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::ResultsViewController::$StartFireworksAfterDelay$d__32
    class $StartFireworksAfterDelay$d__32;
    // private UnityEngine.UI.Button _restartButton
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::UI::Button* restartButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _continueButton
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::Button* continueButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [SpaceAttribute] Offset: 0xE267C4
    // private UnityEngine.GameObject _clearedPanel
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::GameObject* clearedPanel;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private TMPro.TextMeshProUGUI _scoreText
    // Size: 0x8
    // Offset: 0x88
    TMPro::TextMeshProUGUI* scoreText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.GameObject _newHighScoreText
    // Size: 0x8
    // Offset: 0x90
    UnityEngine::GameObject* newHighScoreText;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private TMPro.TextMeshProUGUI _rankText
    // Size: 0x8
    // Offset: 0x98
    TMPro::TextMeshProUGUI* rankText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _goodCutsPercentageText
    // Size: 0x8
    // Offset: 0xA0
    TMPro::TextMeshProUGUI* goodCutsPercentageText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _comboText
    // Size: 0x8
    // Offset: 0xA8
    TMPro::TextMeshProUGUI* comboText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // [SpaceAttribute] Offset: 0xE2684C
    // private UnityEngine.GameObject _clearedBannerGo
    // Size: 0x8
    // Offset: 0xB0
    UnityEngine::GameObject* clearedBannerGo;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _failedBannerGo
    // Size: 0x8
    // Offset: 0xB8
    UnityEngine::GameObject* failedBannerGo;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [SpaceAttribute] Offset: 0xE26894
    // private LevelBar _levelBar
    // Size: 0x8
    // Offset: 0xC0
    GlobalNamespace::LevelBar* levelBar;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelBar*) == 0x8);
    // [SpaceAttribute] Offset: 0xE268CC
    // private UnityEngine.AudioClip _levelClearedAudioClip
    // Size: 0x8
    // Offset: 0xC8
    UnityEngine::AudioClip* levelClearedAudioClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioClip*) == 0x8);
    // [InjectAttribute] Offset: 0xE26904
    // private readonly FireworksController _fireworksController
    // Size: 0x8
    // Offset: 0xD0
    GlobalNamespace::FireworksController* fireworksController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FireworksController*) == 0x8);
    // [InjectAttribute] Offset: 0xE26914
    // private readonly SongPreviewPlayer _songPreviewPlayer
    // Size: 0x8
    // Offset: 0xD8
    GlobalNamespace::SongPreviewPlayer* songPreviewPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPreviewPlayer*) == 0x8);
    // [InjectAttribute] Offset: 0xE26924
    // private readonly AudioManagerSO _audioMixer
    // Size: 0x8
    // Offset: 0xE0
    GlobalNamespace::AudioManagerSO* audioMixer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioManagerSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE26934
    // private readonly ResultsEnvironmentManager _resultsEnvironmentManager
    // Size: 0x8
    // Offset: 0xE8
    GlobalNamespace::ResultsEnvironmentManager* resultsEnvironmentManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ResultsEnvironmentManager*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE26944
    // private System.Action`1<ResultsViewController> continueButtonPressedEvent
    // Size: 0x8
    // Offset: 0xF0
    System::Action_1<GlobalNamespace::ResultsViewController*>* continueButtonPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::ResultsViewController*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE26954
    // private System.Action`1<ResultsViewController> restartButtonPressedEvent
    // Size: 0x8
    // Offset: 0xF8
    System::Action_1<GlobalNamespace::ResultsViewController*>* restartButtonPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::ResultsViewController*>*) == 0x8);
    // private LevelCompletionResults _levelCompletionResults
    // Size: 0x8
    // Offset: 0x100
    GlobalNamespace::LevelCompletionResults* levelCompletionResults;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelCompletionResults*) == 0x8);
    // private IDifficultyBeatmap _difficultyBeatmap
    // Size: 0x8
    // Offset: 0x108
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // private UnityEngine.Coroutine _startFireworksAfterDelayCoroutine
    // Size: 0x8
    // Offset: 0x110
    UnityEngine::Coroutine* startFireworksAfterDelayCoroutine;
    // Field size check
    static_assert(sizeof(UnityEngine::Coroutine*) == 0x8);
    // private System.Boolean _newHighScore
    // Size: 0x1
    // Offset: 0x118
    bool newHighScore;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _practice
    // Size: 0x1
    // Offset: 0x119
    bool practice;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ResultsViewController
    ResultsViewController(UnityEngine::UI::Button* restartButton_ = {}, UnityEngine::UI::Button* continueButton_ = {}, UnityEngine::GameObject* clearedPanel_ = {}, TMPro::TextMeshProUGUI* scoreText_ = {}, UnityEngine::GameObject* newHighScoreText_ = {}, TMPro::TextMeshProUGUI* rankText_ = {}, TMPro::TextMeshProUGUI* goodCutsPercentageText_ = {}, TMPro::TextMeshProUGUI* comboText_ = {}, UnityEngine::GameObject* clearedBannerGo_ = {}, UnityEngine::GameObject* failedBannerGo_ = {}, GlobalNamespace::LevelBar* levelBar_ = {}, UnityEngine::AudioClip* levelClearedAudioClip_ = {}, GlobalNamespace::FireworksController* fireworksController_ = {}, GlobalNamespace::SongPreviewPlayer* songPreviewPlayer_ = {}, GlobalNamespace::AudioManagerSO* audioMixer_ = {}, GlobalNamespace::ResultsEnvironmentManager* resultsEnvironmentManager_ = {}, System::Action_1<GlobalNamespace::ResultsViewController*>* continueButtonPressedEvent_ = {}, System::Action_1<GlobalNamespace::ResultsViewController*>* restartButtonPressedEvent_ = {}, GlobalNamespace::LevelCompletionResults* levelCompletionResults_ = {}, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap_ = {}, UnityEngine::Coroutine* startFireworksAfterDelayCoroutine_ = {}, bool newHighScore_ = {}, bool practice_ = {}) noexcept : restartButton{restartButton_}, continueButton{continueButton_}, clearedPanel{clearedPanel_}, scoreText{scoreText_}, newHighScoreText{newHighScoreText_}, rankText{rankText_}, goodCutsPercentageText{goodCutsPercentageText_}, comboText{comboText_}, clearedBannerGo{clearedBannerGo_}, failedBannerGo{failedBannerGo_}, levelBar{levelBar_}, levelClearedAudioClip{levelClearedAudioClip_}, fireworksController{fireworksController_}, songPreviewPlayer{songPreviewPlayer_}, audioMixer{audioMixer_}, resultsEnvironmentManager{resultsEnvironmentManager_}, continueButtonPressedEvent{continueButtonPressedEvent_}, restartButtonPressedEvent{restartButtonPressedEvent_}, levelCompletionResults{levelCompletionResults_}, difficultyBeatmap{difficultyBeatmap_}, startFireworksAfterDelayCoroutine{startFireworksAfterDelayCoroutine_}, newHighScore{newHighScore_}, practice{practice_} {}
    // public System.Void add_continueButtonPressedEvent(System.Action`1<ResultsViewController> value)
    // Offset: 0x10AD110
    void add_continueButtonPressedEvent(System::Action_1<GlobalNamespace::ResultsViewController*>* value);
    // public System.Void remove_continueButtonPressedEvent(System.Action`1<ResultsViewController> value)
    // Offset: 0x10AD1B4
    void remove_continueButtonPressedEvent(System::Action_1<GlobalNamespace::ResultsViewController*>* value);
    // public System.Void add_restartButtonPressedEvent(System.Action`1<ResultsViewController> value)
    // Offset: 0x10AD258
    void add_restartButtonPressedEvent(System::Action_1<GlobalNamespace::ResultsViewController*>* value);
    // public System.Void remove_restartButtonPressedEvent(System.Action`1<ResultsViewController> value)
    // Offset: 0x10AD2FC
    void remove_restartButtonPressedEvent(System::Action_1<GlobalNamespace::ResultsViewController*>* value);
    // public System.Boolean get_practice()
    // Offset: 0x10AD3A0
    bool get_practice();
    // public System.Void Init(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, System.Boolean practice, System.Boolean newHighScore)
    // Offset: 0x10AD3A8
    void Init(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, bool practice, bool newHighScore);
    // private System.Collections.IEnumerator StartFireworksAfterDelay(System.Single delay)
    // Offset: 0x10ADE68
    System::Collections::IEnumerator* StartFireworksAfterDelay(float delay);
    // private System.Void SetDataToUI()
    // Offset: 0x10AD574
    void SetDataToUI();
    // private System.Void EnableResultsEnvironmentController()
    // Offset: 0x10ADAB8
    void EnableResultsEnvironmentController();
    // private System.Void DisableResultEnvironmentController()
    // Offset: 0x10ADFC4
    void DisableResultEnvironmentController();
    // private System.Void ContinueButtonPressed()
    // Offset: 0x10AE2B8
    void ContinueButtonPressed();
    // private System.Void RestartButtonPressed()
    // Offset: 0x10AE324
    void RestartButtonPressed();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x10AD3C0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x10ADEE8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.Void .ctor()
    // Offset: 0x10AE390
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResultsViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ResultsViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResultsViewController*, creationType>()));
    }
  }; // ResultsViewController
  #pragma pack(pop)
  static check_size<sizeof(ResultsViewController), 281 + sizeof(bool)> __GlobalNamespace_ResultsViewControllerSizeCheck;
  static_assert(sizeof(ResultsViewController) == 0x11A);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ResultsViewController*, "", "ResultsViewController");
