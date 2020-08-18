// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Autogenerated type: UnityEngine.XR.InputDevice
  struct InputDevice : public System::IEquatable_1<UnityEngine::XR::InputDevice>, public System::ValueType {
    public:
    // private System.UInt64 m_DeviceId
    // Offset: 0x0
    uint64_t m_DeviceId;
    // private System.Boolean m_Initialized
    // Offset: 0x8
    bool m_Initialized;
    // Creating value type constructor for type: InputDevice
    InputDevice(uint64_t m_DeviceId_ = {}, bool m_Initialized_ = {}) : m_DeviceId{m_DeviceId_}, m_Initialized{m_Initialized_} {}
    // System.Void .ctor(System.UInt64 deviceId)
    // Offset: 0x9C57BC
    static InputDevice* New_ctor(uint64_t deviceId);
    // private System.UInt64 get_deviceId()
    // Offset: 0x9C57CC
    uint64_t get_deviceId();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x9C57E4
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public System.Boolean Equals(UnityEngine.XR.InputDevice other)
    // Offset: 0x9C57EC
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(UnityEngine.XR.InputDevice other)
    bool Equals(UnityEngine::XR::InputDevice other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x9C5814
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.XR.InputDevice
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::InputDevice, "UnityEngine.XR", "InputDevice");
#pragma pack(pop)
