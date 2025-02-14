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
  // Forward declaring type: BoolSO
  class BoolSO;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: OnlineServicesSettingsViewController
  class OnlineServicesSettingsViewController : public HMUI::ViewController {
    public:
    // private BoolSO _onlineServicesEnabled
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::BoolSO* onlineServicesEnabled;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoolSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xE263E4
    // private UnityEngine.UI.Toggle _enableOnlineServicesToggle
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::Toggle* enableOnlineServicesToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private HMUI.ToggleBinder _toggleBinder
    // Size: 0x8
    // Offset: 0x80
    HMUI::ToggleBinder* toggleBinder;
    // Field size check
    static_assert(sizeof(HMUI::ToggleBinder*) == 0x8);
    // Creating value type constructor for type: OnlineServicesSettingsViewController
    OnlineServicesSettingsViewController(GlobalNamespace::BoolSO* onlineServicesEnabled_ = {}, UnityEngine::UI::Toggle* enableOnlineServicesToggle_ = {}, HMUI::ToggleBinder* toggleBinder_ = {}) noexcept : onlineServicesEnabled{onlineServicesEnabled_}, enableOnlineServicesToggle{enableOnlineServicesToggle_}, toggleBinder{toggleBinder_} {}
    // private System.Void HandleEnableOnlineServicesToggleValueChanged(System.Boolean value)
    // Offset: 0x11DC494
    void HandleEnableOnlineServicesToggleValueChanged(bool value);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x11DC3AC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0x11DC498
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OnlineServicesSettingsViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OnlineServicesSettingsViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OnlineServicesSettingsViewController*, creationType>()));
    }
  }; // OnlineServicesSettingsViewController
  #pragma pack(pop)
  static check_size<sizeof(OnlineServicesSettingsViewController), 128 + sizeof(HMUI::ToggleBinder*)> __GlobalNamespace_OnlineServicesSettingsViewControllerSizeCheck;
  static_assert(sizeof(OnlineServicesSettingsViewController) == 0x88);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OnlineServicesSettingsViewController*, "", "OnlineServicesSettingsViewController");
