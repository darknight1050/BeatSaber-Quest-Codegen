// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IncDecSettingsController
#include "GlobalNamespace/IncDecSettingsController.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SwitchSettingsController
  class SwitchSettingsController : public GlobalNamespace::IncDecSettingsController {
    public:
    // private System.Boolean _on
    // Offset: 0x30
    bool on;
    // protected System.Boolean GetInitValue()
    // Offset: 0xFFFFFFFF
    bool GetInitValue();
    // protected System.Void ApplyValue(System.Boolean value)
    // Offset: 0xFFFFFFFF
    void ApplyValue(bool value);
    // protected System.String TextForValue(System.Boolean value)
    // Offset: 0xFFFFFFFF
    ::CsString* TextForValue(bool value);
    // private System.Void RefreshUI()
    // Offset: 0xB93DF0
    void RefreshUI();
    // protected override System.Void OnEnable()
    // Offset: 0xB93D9C
    // Implemented from: IncDecSettingsController
    // Base method: System.Void IncDecSettingsController::OnEnable()
    void OnEnable();
    // public override System.Void IncButtonPressed()
    // Offset: 0xB93E50
    // Implemented from: IncDecSettingsController
    // Base method: System.Void IncDecSettingsController::IncButtonPressed()
    void IncButtonPressed();
    // public override System.Void DecButtonPressed()
    // Offset: 0xB93E88
    // Implemented from: IncDecSettingsController
    // Base method: System.Void IncDecSettingsController::DecButtonPressed()
    void DecButtonPressed();
    // protected System.Void .ctor()
    // Offset: 0xB93EBC
    // Implemented from: IncDecSettingsController
    // Base method: System.Void IncDecSettingsController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SwitchSettingsController* New_ctor();
  }; // SwitchSettingsController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SwitchSettingsController*, "", "SwitchSettingsController");
#pragma pack(pop)
