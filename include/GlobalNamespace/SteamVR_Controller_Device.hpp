// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SteamVR_Controller
#include "GlobalNamespace/SteamVR_Controller.hpp"
// Including type: Valve.VR.VRControllerState_t
#include "Valve/VR/VRControllerState_t.hpp"
// Including type: Valve.VR.TrackedDevicePose_t
#include "Valve/VR/TrackedDevicePose_t.hpp"
// Including type: SteamVR_Utils
#include "GlobalNamespace/SteamVR_Utils.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRButtonId
  struct EVRButtonId;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xF6
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_Controller/Device
  // [] Offset: FFFFFFFF
  class SteamVR_Controller::Device : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xCE6ECC
    // private System.UInt32 <index>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    uint index;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xCE6EDC
    // private System.Boolean <valid>k__BackingField
    // Size: 0x1
    // Offset: 0x14
    bool valid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: valid and: state
    char __padding1[0x3] = {};
    // private Valve.VR.VRControllerState_t state
    // Size: 0x40
    // Offset: 0x18
    Valve::VR::VRControllerState_t state;
    // Field size check
    static_assert(sizeof(Valve::VR::VRControllerState_t) == 0x40);
    // private Valve.VR.VRControllerState_t prevState
    // Size: 0x40
    // Offset: 0x58
    Valve::VR::VRControllerState_t prevState;
    // Field size check
    static_assert(sizeof(Valve::VR::VRControllerState_t) == 0x40);
    // private Valve.VR.TrackedDevicePose_t pose
    // Size: 0x4E
    // Offset: 0x98
    Valve::VR::TrackedDevicePose_t pose;
    // Field size check
    static_assert(sizeof(Valve::VR::TrackedDevicePose_t) == 0x4E);
    // Padding between fields: pose and: prevFrameCount
    char __padding4[0x2] = {};
    // private System.Int32 prevFrameCount
    // Size: 0x4
    // Offset: 0xE8
    int prevFrameCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single hairTriggerDelta
    // Size: 0x4
    // Offset: 0xEC
    float hairTriggerDelta;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single hairTriggerLimit
    // Size: 0x4
    // Offset: 0xF0
    float hairTriggerLimit;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean hairTriggerState
    // Size: 0x1
    // Offset: 0xF4
    bool hairTriggerState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean hairTriggerPrevState
    // Size: 0x1
    // Offset: 0xF5
    bool hairTriggerPrevState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Device
    Device(uint index_ = {}, bool valid_ = {}, Valve::VR::VRControllerState_t state_ = {}, Valve::VR::VRControllerState_t prevState_ = {}, Valve::VR::TrackedDevicePose_t pose_ = {}, int prevFrameCount_ = {}, float hairTriggerDelta_ = {}, float hairTriggerLimit_ = {}, bool hairTriggerState_ = {}, bool hairTriggerPrevState_ = {}) noexcept : index{index_}, valid{valid_}, state{state_}, prevState{prevState_}, pose{pose_}, prevFrameCount{prevFrameCount_}, hairTriggerDelta{hairTriggerDelta_}, hairTriggerLimit{hairTriggerLimit_}, hairTriggerState{hairTriggerState_}, hairTriggerPrevState{hairTriggerPrevState_} {}
    // public System.Void .ctor(System.UInt32 i)
    // Offset: 0x12C8898
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_Controller::Device* New_ctor(uint i) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_Controller::Device::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_Controller::Device*, creationType>(i)));
    }
    // public System.UInt32 get_index()
    // Offset: 0x12C8E80
    uint get_index();
    // private System.Void set_index(System.UInt32 value)
    // Offset: 0x12C8E88
    void set_index(uint value);
    // public System.Boolean get_valid()
    // Offset: 0x12C8E90
    bool get_valid();
    // private System.Void set_valid(System.Boolean value)
    // Offset: 0x12C8E98
    void set_valid(bool value);
    // public System.Boolean get_connected()
    // Offset: 0x12C8E4C
    bool get_connected();
    // public System.Boolean get_hasTracking()
    // Offset: 0x12C8EA4
    bool get_hasTracking();
    // public System.Boolean get_outOfRange()
    // Offset: 0x12C8EC8
    bool get_outOfRange();
    // public System.Boolean get_calibrating()
    // Offset: 0x12C8F00
    bool get_calibrating();
    // public System.Boolean get_uninitialized()
    // Offset: 0x12C8F30
    bool get_uninitialized();
    // public SteamVR_Utils/RigidTransform get_transform()
    // Offset: 0x12C8DF0
    GlobalNamespace::SteamVR_Utils::RigidTransform get_transform();
    // public UnityEngine.Vector3 get_velocity()
    // Offset: 0x12C8F5C
    UnityEngine::Vector3 get_velocity();
    // public UnityEngine.Vector3 get_angularVelocity()
    // Offset: 0x12C8FAC
    UnityEngine::Vector3 get_angularVelocity();
    // public Valve.VR.VRControllerState_t GetState()
    // Offset: 0x12C9000
    Valve::VR::VRControllerState_t GetState();
    // public Valve.VR.VRControllerState_t GetPrevState()
    // Offset: 0x12C903C
    Valve::VR::VRControllerState_t GetPrevState();
    // public Valve.VR.TrackedDevicePose_t GetPose()
    // Offset: 0x12C9078
    Valve::VR::TrackedDevicePose_t GetPose();
    // public System.Void Update()
    // Offset: 0x12C890C
    void Update();
    // public System.Boolean GetPress(System.UInt64 buttonMask)
    // Offset: 0x12C92DC
    bool GetPress(uint64_t buttonMask);
    // public System.Boolean GetPressDown(System.UInt64 buttonMask)
    // Offset: 0x12C930C
    bool GetPressDown(uint64_t buttonMask);
    // public System.Boolean GetPressUp(System.UInt64 buttonMask)
    // Offset: 0x12C9350
    bool GetPressUp(uint64_t buttonMask);
    // public System.Boolean GetPress(Valve.VR.EVRButtonId buttonId)
    // Offset: 0x12C9394
    bool GetPress(Valve::VR::EVRButtonId buttonId);
    // public System.Boolean GetPressDown(Valve.VR.EVRButtonId buttonId)
    // Offset: 0x12C93C8
    bool GetPressDown(Valve::VR::EVRButtonId buttonId);
    // public System.Boolean GetPressUp(Valve.VR.EVRButtonId buttonId)
    // Offset: 0x12C9410
    bool GetPressUp(Valve::VR::EVRButtonId buttonId);
    // public System.Boolean GetTouch(System.UInt64 buttonMask)
    // Offset: 0x12C9458
    bool GetTouch(uint64_t buttonMask);
    // public System.Boolean GetTouchDown(System.UInt64 buttonMask)
    // Offset: 0x12C9488
    bool GetTouchDown(uint64_t buttonMask);
    // public System.Boolean GetTouchUp(System.UInt64 buttonMask)
    // Offset: 0x12C94CC
    bool GetTouchUp(uint64_t buttonMask);
    // public System.Boolean GetTouch(Valve.VR.EVRButtonId buttonId)
    // Offset: 0x12C9510
    bool GetTouch(Valve::VR::EVRButtonId buttonId);
    // public System.Boolean GetTouchDown(Valve.VR.EVRButtonId buttonId)
    // Offset: 0x12C9544
    bool GetTouchDown(Valve::VR::EVRButtonId buttonId);
    // public System.Boolean GetTouchUp(Valve.VR.EVRButtonId buttonId)
    // Offset: 0x12C958C
    bool GetTouchUp(Valve::VR::EVRButtonId buttonId);
    // public UnityEngine.Vector2 GetAxis(Valve.VR.EVRButtonId buttonId)
    // Offset: 0x12C95D4
    UnityEngine::Vector2 GetAxis(Valve::VR::EVRButtonId buttonId);
    // public System.Void TriggerHapticPulse(System.UInt16 durationMicroSec, Valve.VR.EVRButtonId buttonId)
    // Offset: 0x12C96B0
    void TriggerHapticPulse(uint16_t durationMicroSec, Valve::VR::EVRButtonId buttonId);
    // private System.Void UpdateHairTrigger()
    // Offset: 0x12C91DC
    void UpdateHairTrigger();
    // public System.Boolean GetHairTrigger()
    // Offset: 0x12C974C
    bool GetHairTrigger();
    // public System.Boolean GetHairTriggerDown()
    // Offset: 0x12C9770
    bool GetHairTriggerDown();
    // public System.Boolean GetHairTriggerUp()
    // Offset: 0x12C97AC
    bool GetHairTriggerUp();
  }; // SteamVR_Controller/Device
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_Controller::Device), 245 + sizeof(bool)> __GlobalNamespace_SteamVR_Controller_DeviceSizeCheck;
  static_assert(sizeof(SteamVR_Controller::Device) == 0xF6);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_Controller::Device*, "", "SteamVR_Controller/Device");
