// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: EnvironmentOverrideSettingsPanelController
#include "GlobalNamespace/EnvironmentOverrideSettingsPanelController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: LabelAndValueDropdownWithTableView
  class LabelAndValueDropdownWithTableView;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: EnvironmentTypeSO
  class EnvironmentTypeSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: EnvironmentOverrideSettingsPanelController/Elements
  class EnvironmentOverrideSettingsPanelController::Elements : public ::CsObject {
    public:
    // public HMUI.LabelAndValueDropdownWithTableView overrideEnvironmentDropDown
    // Offset: 0x10
    HMUI::LabelAndValueDropdownWithTableView* overrideEnvironmentDropDown;
    // public EnvironmentTypeSO environmentType
    // Offset: 0x18
    GlobalNamespace::EnvironmentTypeSO* environmentType;
    // public System.Void .ctor()
    // Offset: 0xBD5890
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static EnvironmentOverrideSettingsPanelController::Elements* New_ctor();
  }; // EnvironmentOverrideSettingsPanelController/Elements
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentOverrideSettingsPanelController::Elements*, "", "EnvironmentOverrideSettingsPanelController/Elements");
#pragma pack(pop)
