// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRInput
#include "GlobalNamespace/OVRInput.hpp"
// Including type: OVRInput/OVRControllerBase
#include "GlobalNamespace/OVRInput_OVRControllerBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x102
  #pragma pack(push, 1)
  // Autogenerated type: OVRInput/OVRControllerGamepadMac
  class OVRInput::OVRControllerGamepadMac : public GlobalNamespace::OVRInput::OVRControllerBase {
    public:
    // Nested type: GlobalNamespace::OVRInput::OVRControllerGamepadMac::AxisGPC
    struct AxisGPC;
    // Nested type: GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC
    struct ButtonGPC;
    // private System.Boolean initialized
    // Size: 0x1
    // Offset: 0x101
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: OVRControllerGamepadMac
    OVRControllerGamepadMac(bool initialized_ = {}) noexcept : initialized{initialized_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return initialized;
    }
    // static field const value: static private System.String DllName
    static constexpr const char* DllName = "OVRGamepad";
    // Get static field: static private System.String DllName
    static ::Il2CppString* _get_DllName();
    // Set static field: static private System.String DllName
    static void _set_DllName(::Il2CppString* value);
    // static private System.Boolean OVR_GamepadController_Initialize()
    // Offset: 0x14FFC20
    static bool OVR_GamepadController_Initialize();
    // static private System.Boolean OVR_GamepadController_Destroy()
    // Offset: 0x14FFD0C
    static bool OVR_GamepadController_Destroy();
    // static private System.Boolean OVR_GamepadController_Update()
    // Offset: 0x1500334
    static bool OVR_GamepadController_Update();
    // static private System.Single OVR_GamepadController_GetAxis(System.Int32 axis)
    // Offset: 0x1500438
    static float OVR_GamepadController_GetAxis(int axis);
    // static private System.Boolean OVR_GamepadController_GetButton(System.Int32 button)
    // Offset: 0x15003B0
    static bool OVR_GamepadController_GetButton(int button);
    // static private System.Boolean OVR_GamepadController_SetVibration(System.Int32 node, System.Single strength, System.Single frequency)
    // Offset: 0x1500894
    static bool OVR_GamepadController_SetVibration(int node, float strength, float frequency);
    // public System.Void .ctor()
    // Offset: 0x14FFBEC
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRInput::OVRControllerGamepadMac* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRInput::OVRControllerGamepadMac::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRInput::OVRControllerGamepadMac*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x14FFC9C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public override OVRInput/Controller Update()
    // Offset: 0x14FFD88
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: OVRInput/Controller OVRControllerBase::Update()
    GlobalNamespace::OVRInput::Controller Update();
    // public override System.Void ConfigureButtonMap()
    // Offset: 0x15004B8
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureButtonMap()
    void ConfigureButtonMap();
    // public override System.Void ConfigureTouchMap()
    // Offset: 0x15006C8
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureTouchMap()
    void ConfigureTouchMap();
    // public override System.Void ConfigureNearTouchMap()
    // Offset: 0x1500778
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureNearTouchMap()
    void ConfigureNearTouchMap();
    // public override System.Void ConfigureAxis1DMap()
    // Offset: 0x15007C8
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureAxis1DMap()
    void ConfigureAxis1DMap();
    // public override System.Void ConfigureAxis2DMap()
    // Offset: 0x1500820
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureAxis2DMap()
    void ConfigureAxis2DMap();
    // public override System.Void SetControllerVibration(System.Single frequency, System.Single amplitude)
    // Offset: 0x1500878
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::SetControllerVibration(System.Single frequency, System.Single amplitude)
    void SetControllerVibration(float frequency, float amplitude);
  }; // OVRInput/OVRControllerGamepadMac
  #pragma pack(pop)
  static check_size<sizeof(OVRInput::OVRControllerGamepadMac), 257 + sizeof(bool)> __GlobalNamespace_OVRInput_OVRControllerGamepadMacSizeCheck;
  static_assert(sizeof(OVRInput::OVRControllerGamepadMac) == 0x102);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput::OVRControllerGamepadMac*, "", "OVRInput/OVRControllerGamepadMac");
