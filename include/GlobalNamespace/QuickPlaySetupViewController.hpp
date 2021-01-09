// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Including type: MultiplayerLobbyState
#include "GlobalNamespace/MultiplayerLobbyState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: EditableBeatmapSelectionView
  class EditableBeatmapSelectionView;
  // Forward declaring type: GameServersFilterText
  class GameServersFilterText;
  // Forward declaring type: ILobbyPlayerDataModel
  class ILobbyPlayerDataModel;
  // Forward declaring type: BeatmapDifficultyMask
  struct BeatmapDifficultyMask;
  // Forward declaring type: SongPackMask
  struct SongPackMask;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xAD
  // Autogenerated type: QuickPlaySetupViewController
  // [] Offset: FFFFFFFF
  class QuickPlaySetupViewController : public HMUI::ViewController {
    public:
    // private EditableBeatmapSelectionView _beatmapSelectionView
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::EditableBeatmapSelectionView* beatmapSelectionView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EditableBeatmapSelectionView*) == 0x8);
    // private GameServersFilterText _gameServersFilterText
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::GameServersFilterText* gameServersFilterText;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameServersFilterText*) == 0x8);
    // private UnityEngine.UI.Button _readyButton
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::UI::Button* readyButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _unreadyButton
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::UI::Button* unreadyButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD0E88
    // private System.Action suggestBeatmapEvent
    // Size: 0x8
    // Offset: 0x90
    System::Action* suggestBeatmapEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD0E98
    // private System.Action deleteSuggestedBeatmapEvent
    // Size: 0x8
    // Offset: 0x98
    System::Action* deleteSuggestedBeatmapEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD0EA8
    // private System.Action`1<System.Boolean> setPlayerReadyEvent
    // Size: 0x8
    // Offset: 0xA0
    System::Action_1<bool>* setPlayerReadyEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<bool>*) == 0x8);
    // private MultiplayerLobbyState _multiplayerLobbyState
    // Size: 0x4
    // Offset: 0xA8
    GlobalNamespace::MultiplayerLobbyState multiplayerLobbyState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLobbyState) == 0x4);
    // private System.Boolean _isReady
    // Size: 0x1
    // Offset: 0xAC
    bool isReady;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: QuickPlaySetupViewController
    QuickPlaySetupViewController(GlobalNamespace::EditableBeatmapSelectionView* beatmapSelectionView_ = {}, GlobalNamespace::GameServersFilterText* gameServersFilterText_ = {}, UnityEngine::UI::Button* readyButton_ = {}, UnityEngine::UI::Button* unreadyButton_ = {}, System::Action* suggestBeatmapEvent_ = {}, System::Action* deleteSuggestedBeatmapEvent_ = {}, System::Action_1<bool>* setPlayerReadyEvent_ = {}, GlobalNamespace::MultiplayerLobbyState multiplayerLobbyState_ = {}, bool isReady_ = {}) noexcept : beatmapSelectionView{beatmapSelectionView_}, gameServersFilterText{gameServersFilterText_}, readyButton{readyButton_}, unreadyButton{unreadyButton_}, suggestBeatmapEvent{suggestBeatmapEvent_}, deleteSuggestedBeatmapEvent{deleteSuggestedBeatmapEvent_}, setPlayerReadyEvent{setPlayerReadyEvent_}, multiplayerLobbyState{multiplayerLobbyState_}, isReady{isReady_} {}
    // public System.Void add_suggestBeatmapEvent(System.Action value)
    // Offset: 0xF2EF5C
    void add_suggestBeatmapEvent(System::Action* value);
    // public System.Void remove_suggestBeatmapEvent(System.Action value)
    // Offset: 0xF2FC68
    void remove_suggestBeatmapEvent(System::Action* value);
    // public System.Void add_deleteSuggestedBeatmapEvent(System.Action value)
    // Offset: 0xF2F000
    void add_deleteSuggestedBeatmapEvent(System::Action* value);
    // public System.Void remove_deleteSuggestedBeatmapEvent(System.Action value)
    // Offset: 0xF2FD0C
    void remove_deleteSuggestedBeatmapEvent(System::Action* value);
    // public System.Void add_setPlayerReadyEvent(System.Action`1<System.Boolean> value)
    // Offset: 0xF2EEB8
    void add_setPlayerReadyEvent(System::Action_1<bool>* value);
    // public System.Void remove_setPlayerReadyEvent(System.Action`1<System.Boolean> value)
    // Offset: 0xF2FBC4
    void remove_setPlayerReadyEvent(System::Action_1<bool>* value);
    // public System.Void SetLocalPlayerData(ILobbyPlayerDataModel lobbyPlayerData)
    // Offset: 0xF3211C
    void SetLocalPlayerData(GlobalNamespace::ILobbyPlayerDataModel* lobbyPlayerData);
    // public System.Void SetGameServerSettings(BeatmapDifficultyMask beatmapDifficultyMask, SongPackMask songPackMask)
    // Offset: 0xF3234C
    void SetGameServerSettings(GlobalNamespace::BeatmapDifficultyMask beatmapDifficultyMask, GlobalNamespace::SongPackMask songPackMask);
    // public System.Void SetLobbyState(MultiplayerLobbyState lobbyState)
    // Offset: 0xF2F314
    void SetLobbyState(GlobalNamespace::MultiplayerLobbyState lobbyState);
    // private System.Void SetReadyButtonsState()
    // Offset: 0xF32634
    void SetReadyButtonsState();
    // private System.Void <DidActivate>b__18_0()
    // Offset: 0xF32880
    void $DidActivate$b__18_0();
    // private System.Void <DidActivate>b__18_1()
    // Offset: 0xF32894
    void $DidActivate$b__18_1();
    // private System.Void <DidActivate>b__18_2()
    // Offset: 0xF328A8
    void $DidActivate$b__18_2();
    // private System.Void <DidActivate>b__18_3()
    // Offset: 0xF3290C
    void $DidActivate$b__18_3();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0xF326C4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0xF32878
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static QuickPlaySetupViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::QuickPlaySetupViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QuickPlaySetupViewController*, creationType>()));
    }
  }; // QuickPlaySetupViewController
  static check_size<sizeof(QuickPlaySetupViewController), 172 + sizeof(bool)> __GlobalNamespace_QuickPlaySetupViewControllerSizeCheck;
  static_assert(sizeof(QuickPlaySetupViewController) == 0xAD);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::QuickPlaySetupViewController*, "", "QuickPlaySetupViewController");
#pragma pack(pop)
