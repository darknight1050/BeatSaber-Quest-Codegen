// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ViewController
  class ViewController;
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SettingsFlowCoordinator
  class SettingsFlowCoordinator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: PresentServerSettingsAfterNClicks
  class PresentServerSettingsAfterNClicks : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.UI.Button _serverSettingsButton
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::UI::Button* serverSettingsButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private HMUI.ViewController _serverSettingsViewController
    // Size: 0x8
    // Offset: 0x20
    HMUI::ViewController* serverSettingsViewController;
    // Field size check
    static_assert(sizeof(HMUI::ViewController*) == 0x8);
    // private System.Int32 _numberOfClicksRequired
    // Size: 0x4
    // Offset: 0x28
    int numberOfClicksRequired;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: numberOfClicksRequired and: settingsFlowCoordinator
    char __padding2[0x4] = {};
    // [InjectAttribute] Offset: 0xE24288
    // private readonly SettingsFlowCoordinator _settingsFlowCoordinator
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::SettingsFlowCoordinator* settingsFlowCoordinator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SettingsFlowCoordinator*) == 0x8);
    // private System.Int32 _currentNumberOfClicks
    // Size: 0x4
    // Offset: 0x38
    int currentNumberOfClicks;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: currentNumberOfClicks and: buttonBinder
    char __padding4[0x4] = {};
    // private readonly HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x40
    HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(HMUI::ButtonBinder*) == 0x8);
    // Creating value type constructor for type: PresentServerSettingsAfterNClicks
    PresentServerSettingsAfterNClicks(UnityEngine::UI::Button* serverSettingsButton_ = {}, HMUI::ViewController* serverSettingsViewController_ = {}, int numberOfClicksRequired_ = {}, GlobalNamespace::SettingsFlowCoordinator* settingsFlowCoordinator_ = {}, int currentNumberOfClicks_ = {}, HMUI::ButtonBinder* buttonBinder_ = {}) noexcept : serverSettingsButton{serverSettingsButton_}, serverSettingsViewController{serverSettingsViewController_}, numberOfClicksRequired{numberOfClicksRequired_}, settingsFlowCoordinator{settingsFlowCoordinator_}, currentNumberOfClicks{currentNumberOfClicks_}, buttonBinder{buttonBinder_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void OnEnable()
    // Offset: 0x10A3BFC
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x10A3C90
    void OnDisable();
    // private System.Void <OnEnable>b__6_0()
    // Offset: 0x10A3D1C
    void $OnEnable$b__6_0();
    // public System.Void .ctor()
    // Offset: 0x10A3CAC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PresentServerSettingsAfterNClicks* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PresentServerSettingsAfterNClicks::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PresentServerSettingsAfterNClicks*, creationType>()));
    }
  }; // PresentServerSettingsAfterNClicks
  #pragma pack(pop)
  static check_size<sizeof(PresentServerSettingsAfterNClicks), 64 + sizeof(HMUI::ButtonBinder*)> __GlobalNamespace_PresentServerSettingsAfterNClicksSizeCheck;
  static_assert(sizeof(PresentServerSettingsAfterNClicks) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PresentServerSettingsAfterNClicks*, "", "PresentServerSettingsAfterNClicks");
