// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IVRPlatformHelper
#include "GlobalNamespace/IVRPlatformHelper.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRPlatformSDK
  struct VRPlatformSDK;
  // Forward declaring type: XRDeviceModel
  struct XRDeviceModel;
}
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRNode
  struct XRNode;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  // Autogenerated type: PSVRHelper
  // [] Offset: FFFFFFFF
  class PSVRHelper : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IVRPlatformHelper*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD99598
    // private System.Action inputFocusWasCapturedEvent
    // Size: 0x8
    // Offset: 0x18
    System::Action* inputFocusWasCapturedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD995A8
    // private System.Action inputFocusWasReleasedEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action* inputFocusWasReleasedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD995B8
    // private System.Action hmdUnmountedEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action* hmdUnmountedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD995C8
    // private System.Action hmdMountedEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action* hmdMountedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD995D8
    // private System.Action joystickWasCenteredThisFrameEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action* joystickWasCenteredThisFrameEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD995E8
    // private System.Action`1<UnityEngine.Vector2> joystickWasNotCenteredThisFrameEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action_1<UnityEngine::Vector2>* joystickWasNotCenteredThisFrameEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<UnityEngine::Vector2>*) == 0x8);
    // Creating value type constructor for type: PSVRHelper
    PSVRHelper(System::Action* inputFocusWasCapturedEvent_ = {}, System::Action* inputFocusWasReleasedEvent_ = {}, System::Action* hmdUnmountedEvent_ = {}, System::Action* hmdMountedEvent_ = {}, System::Action* joystickWasCenteredThisFrameEvent_ = {}, System::Action_1<UnityEngine::Vector2>* joystickWasNotCenteredThisFrameEvent_ = {}) noexcept : inputFocusWasCapturedEvent{inputFocusWasCapturedEvent_}, inputFocusWasReleasedEvent{inputFocusWasReleasedEvent_}, hmdUnmountedEvent{hmdUnmountedEvent_}, hmdMountedEvent{hmdMountedEvent_}, joystickWasCenteredThisFrameEvent{joystickWasCenteredThisFrameEvent_}, joystickWasNotCenteredThisFrameEvent{joystickWasNotCenteredThisFrameEvent_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IVRPlatformHelper
    operator GlobalNamespace::IVRPlatformHelper() noexcept {
      return *reinterpret_cast<GlobalNamespace::IVRPlatformHelper*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kContinuesRumbleImpulseStrength
    static constexpr const float kContinuesRumbleImpulseStrength = 0.8;
    // Get static field: static private System.Single kContinuesRumbleImpulseStrength
    static float _get_kContinuesRumbleImpulseStrength();
    // Set static field: static private System.Single kContinuesRumbleImpulseStrength
    static void _set_kContinuesRumbleImpulseStrength(float value);
    // public System.Void add_inputFocusWasCapturedEvent(System.Action value)
    // Offset: 0x103A800
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::add_inputFocusWasCapturedEvent(System.Action value)
    void add_inputFocusWasCapturedEvent(System::Action* value);
    // public System.Void remove_inputFocusWasCapturedEvent(System.Action value)
    // Offset: 0x103A8A4
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::remove_inputFocusWasCapturedEvent(System.Action value)
    void remove_inputFocusWasCapturedEvent(System::Action* value);
    // public System.Void add_inputFocusWasReleasedEvent(System.Action value)
    // Offset: 0x103A948
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::add_inputFocusWasReleasedEvent(System.Action value)
    void add_inputFocusWasReleasedEvent(System::Action* value);
    // public System.Void remove_inputFocusWasReleasedEvent(System.Action value)
    // Offset: 0x103A9EC
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::remove_inputFocusWasReleasedEvent(System.Action value)
    void remove_inputFocusWasReleasedEvent(System::Action* value);
    // public System.Void add_hmdUnmountedEvent(System.Action value)
    // Offset: 0x103AA90
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::add_hmdUnmountedEvent(System.Action value)
    void add_hmdUnmountedEvent(System::Action* value);
    // public System.Void remove_hmdUnmountedEvent(System.Action value)
    // Offset: 0x103AB34
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::remove_hmdUnmountedEvent(System.Action value)
    void remove_hmdUnmountedEvent(System::Action* value);
    // public System.Void add_hmdMountedEvent(System.Action value)
    // Offset: 0x103ABD8
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::add_hmdMountedEvent(System.Action value)
    void add_hmdMountedEvent(System::Action* value);
    // public System.Void remove_hmdMountedEvent(System.Action value)
    // Offset: 0x103AC7C
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::remove_hmdMountedEvent(System.Action value)
    void remove_hmdMountedEvent(System::Action* value);
    // public System.Void add_joystickWasCenteredThisFrameEvent(System.Action value)
    // Offset: 0x103AD20
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::add_joystickWasCenteredThisFrameEvent(System.Action value)
    void add_joystickWasCenteredThisFrameEvent(System::Action* value);
    // public System.Void remove_joystickWasCenteredThisFrameEvent(System.Action value)
    // Offset: 0x103ADC4
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::remove_joystickWasCenteredThisFrameEvent(System.Action value)
    void remove_joystickWasCenteredThisFrameEvent(System::Action* value);
    // public System.Void add_joystickWasNotCenteredThisFrameEvent(System.Action`1<UnityEngine.Vector2> value)
    // Offset: 0x103AE68
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::add_joystickWasNotCenteredThisFrameEvent(System.Action`1<UnityEngine.Vector2> value)
    void add_joystickWasNotCenteredThisFrameEvent(System::Action_1<UnityEngine::Vector2>* value);
    // public System.Void remove_joystickWasNotCenteredThisFrameEvent(System.Action`1<UnityEngine.Vector2> value)
    // Offset: 0x103AF0C
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::remove_joystickWasNotCenteredThisFrameEvent(System.Action`1<UnityEngine.Vector2> value)
    void remove_joystickWasNotCenteredThisFrameEvent(System::Action_1<UnityEngine::Vector2>* value);
    // public System.Boolean get_isAlwaysWireless()
    // Offset: 0x103AFB0
    // Implemented from: IVRPlatformHelper
    // Base method: System.Boolean IVRPlatformHelper::get_isAlwaysWireless()
    bool get_isAlwaysWireless();
    // public VRPlatformSDK get_vrPlatformSDK()
    // Offset: 0x103AFB8
    // Implemented from: IVRPlatformHelper
    // Base method: VRPlatformSDK IVRPlatformHelper::get_vrPlatformSDK()
    GlobalNamespace::VRPlatformSDK get_vrPlatformSDK();
    // public XRDeviceModel get_currentXRDeviceModel()
    // Offset: 0x103AFC0
    // Implemented from: IVRPlatformHelper
    // Base method: XRDeviceModel IVRPlatformHelper::get_currentXRDeviceModel()
    GlobalNamespace::XRDeviceModel get_currentXRDeviceModel();
    // public System.Void TriggerHapticPulse(UnityEngine.XR.XRNode node, System.Single duration, System.Single strength, System.Single frequency)
    // Offset: 0x103AFC8
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::TriggerHapticPulse(UnityEngine.XR.XRNode node, System.Single duration, System.Single strength, System.Single frequency)
    void TriggerHapticPulse(UnityEngine::XR::XRNode node, float duration, float strength, float frequency);
    // public System.Void StopHaptics(UnityEngine.XR.XRNode node)
    // Offset: 0x103AFCC
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::StopHaptics(UnityEngine.XR.XRNode node)
    void StopHaptics(UnityEngine::XR::XRNode node);
    // public System.Void AdjustControllerTransform(UnityEngine.XR.XRNode node, UnityEngine.Transform transform, UnityEngine.Vector3 position, UnityEngine.Vector3 rotation)
    // Offset: 0x103AFD0
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::AdjustControllerTransform(UnityEngine.XR.XRNode node, UnityEngine.Transform transform, UnityEngine.Vector3 position, UnityEngine.Vector3 rotation)
    void AdjustControllerTransform(UnityEngine::XR::XRNode node, UnityEngine::Transform* transform, UnityEngine::Vector3 position, UnityEngine::Vector3 rotation);
    // public System.Boolean GetNodePose(UnityEngine.XR.XRNode nodeType, System.Int32 idx, out UnityEngine.Vector3 pos, out UnityEngine.Quaternion rot)
    // Offset: 0x103AFD4
    // Implemented from: IVRPlatformHelper
    // Base method: System.Boolean IVRPlatformHelper::GetNodePose(UnityEngine.XR.XRNode nodeType, System.Int32 idx, out UnityEngine.Vector3 pos, out UnityEngine.Quaternion rot)
    bool GetNodePose(UnityEngine::XR::XRNode nodeType, int idx, UnityEngine::Vector3& pos, UnityEngine::Quaternion& rot);
    // public System.Void .ctor()
    // Offset: 0x103B0F0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PSVRHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PSVRHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PSVRHelper*, creationType>()));
    }
  }; // PSVRHelper
  static check_size<sizeof(PSVRHelper), 64 + sizeof(System::Action_1<UnityEngine::Vector2>*)> __GlobalNamespace_PSVRHelperSizeCheck;
  static_assert(sizeof(PSVRHelper) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PSVRHelper*, "", "PSVRHelper");
#pragma pack(pop)
