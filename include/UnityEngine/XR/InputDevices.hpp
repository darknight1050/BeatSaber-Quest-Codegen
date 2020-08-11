// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.XR.InputDevice
#include "UnityEngine/XR/InputDevice.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: ConnectionChangeType
  struct ConnectionChangeType;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Autogenerated type: UnityEngine.XR.InputDevices
  class InputDevices : public ::CsObject {
    public:
    // Get static field: static private System.Action`1<UnityEngine.XR.InputDevice> deviceConnected
    static System::Action_1<UnityEngine::XR::InputDevice>* _get_deviceConnected();
    // Set static field: static private System.Action`1<UnityEngine.XR.InputDevice> deviceConnected
    static void _set_deviceConnected(System::Action_1<UnityEngine::XR::InputDevice>* value);
    // Get static field: static private System.Action`1<UnityEngine.XR.InputDevice> deviceDisconnected
    static System::Action_1<UnityEngine::XR::InputDevice>* _get_deviceDisconnected();
    // Set static field: static private System.Action`1<UnityEngine.XR.InputDevice> deviceDisconnected
    static void _set_deviceDisconnected(System::Action_1<UnityEngine::XR::InputDevice>* value);
    // Get static field: static private System.Action`1<UnityEngine.XR.InputDevice> deviceConfigChanged
    static System::Action_1<UnityEngine::XR::InputDevice>* _get_deviceConfigChanged();
    // Set static field: static private System.Action`1<UnityEngine.XR.InputDevice> deviceConfigChanged
    static void _set_deviceConfigChanged(System::Action_1<UnityEngine::XR::InputDevice>* value);
    // static private System.Void InvokeConnectionEvent(System.UInt64 deviceId, UnityEngine.XR.ConnectionChangeType change)
    // Offset: 0x194B5C8
    static void InvokeConnectionEvent(uint64_t deviceId, UnityEngine::XR::ConnectionChangeType change);
  }; // UnityEngine.XR.InputDevices
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::InputDevices*, "UnityEngine.XR", "InputDevices");
#pragma pack(pop)
