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
  // Forward declaring type: BeatmapDifficultyDropdown
  class BeatmapDifficultyDropdown;
  // Forward declaring type: QuickPlaySongPacksDropdown
  class QuickPlaySongPacksDropdown;
  // Forward declaring type: MultiplayerModeSettings
  class MultiplayerModeSettings;
  // Forward declaring type: MasterServerQuickPlaySetupData
  class MasterServerQuickPlaySetupData;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: JoinQuickPlayViewController
  class JoinQuickPlayViewController : public HMUI::ViewController {
    public:
    // private BeatmapDifficultyDropdown _beatmapDifficultyDropdown
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::BeatmapDifficultyDropdown* beatmapDifficultyDropdown;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficultyDropdown*) == 0x8);
    // private QuickPlaySongPacksDropdown _songPacksDropdown
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::QuickPlaySongPacksDropdown* songPacksDropdown;
    // Field size check
    static_assert(sizeof(GlobalNamespace::QuickPlaySongPacksDropdown*) == 0x8);
    // private UnityEngine.UI.Button _joinButton
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::UI::Button* joinButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _cancelJoinButton
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::UI::Button* cancelJoinButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE26060
    // private System.Action`1<System.Boolean> didFinishEvent
    // Size: 0x8
    // Offset: 0x90
    System::Action_1<bool>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<bool>*) == 0x8);
    // private MultiplayerModeSettings _multiplayerModeSettings
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerModeSettings*) == 0x8);
    // Creating value type constructor for type: JoinQuickPlayViewController
    JoinQuickPlayViewController(GlobalNamespace::BeatmapDifficultyDropdown* beatmapDifficultyDropdown_ = {}, GlobalNamespace::QuickPlaySongPacksDropdown* songPacksDropdown_ = {}, UnityEngine::UI::Button* joinButton_ = {}, UnityEngine::UI::Button* cancelJoinButton_ = {}, System::Action_1<bool>* didFinishEvent_ = {}, GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings_ = {}) noexcept : beatmapDifficultyDropdown{beatmapDifficultyDropdown_}, songPacksDropdown{songPacksDropdown_}, joinButton{joinButton_}, cancelJoinButton{cancelJoinButton_}, didFinishEvent{didFinishEvent_}, multiplayerModeSettings{multiplayerModeSettings_} {}
    // public System.Void add_didFinishEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x106AFC8
    void add_didFinishEvent(System::Action_1<bool>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x106B06C
    void remove_didFinishEvent(System::Action_1<bool>* value);
    // public MultiplayerModeSettings get_multiplayerModeSettings()
    // Offset: 0x106B110
    GlobalNamespace::MultiplayerModeSettings* get_multiplayerModeSettings();
    // public System.Void Setup(MasterServerQuickPlaySetupData masterServerQuickPlaySetupData, MultiplayerModeSettings multiplayerModeSettings)
    // Offset: 0x106B118
    void Setup(GlobalNamespace::MasterServerQuickPlaySetupData* masterServerQuickPlaySetupData, GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings);
    // private System.Void ButtonPressed(System.Boolean success)
    // Offset: 0x106B2B4
    void ButtonPressed(bool success);
    // private System.Void <DidActivate>b__11_0()
    // Offset: 0x106B36C
    void $DidActivate$b__11_0();
    // private System.Void <DidActivate>b__11_1()
    // Offset: 0x106B374
    void $DidActivate$b__11_1();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x106B198
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0x106B364
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JoinQuickPlayViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::JoinQuickPlayViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JoinQuickPlayViewController*, creationType>()));
    }
  }; // JoinQuickPlayViewController
  #pragma pack(pop)
  static check_size<sizeof(JoinQuickPlayViewController), 152 + sizeof(GlobalNamespace::MultiplayerModeSettings*)> __GlobalNamespace_JoinQuickPlayViewControllerSizeCheck;
  static_assert(sizeof(JoinQuickPlayViewController) == 0xA0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::JoinQuickPlayViewController*, "", "JoinQuickPlayViewController");
