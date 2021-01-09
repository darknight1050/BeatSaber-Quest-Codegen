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
// Including type: Valve.VR.TrackedDevicePose_t
#include "Valve/VR/TrackedDevicePose_t.hpp"
// Including type: UnityEngine.XR.XRNodeState
#include "UnityEngine/XR/XRNodeState.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: VRControllerManufacturerName because it is already included!
  // Forward declaring type: IOpenVRHaptics
  class IOpenVRHaptics;
  // Forward declaring type: VRPlatformSDK
  struct VRPlatformSDK;
  // Forward declaring type: XRDeviceModel
  struct XRDeviceModel;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: EventSystem
  class EventSystem;
}
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Skipping declaration: XRNode because it is already included!
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
  // Size: 0x7D
  // Autogenerated type: OpenVRHelper
  // [] Offset: FFFFFFFF
  class OpenVRHelper : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IVRPlatformHelper*/ {
    public:
    // Nested type: GlobalNamespace::OpenVRHelper::VRControllerManufacturerName
    struct VRControllerManufacturerName;
    // Size: 0x4
    // Autogenerated type: OpenVRHelper/VRControllerManufacturerName
    // [] Offset: FFFFFFFF
    struct VRControllerManufacturerName/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: VRControllerManufacturerName
      constexpr VRControllerManufacturerName(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OpenVRHelper/VRControllerManufacturerName HTC
      static constexpr const int HTC = 0;
      // Get static field: static public OpenVRHelper/VRControllerManufacturerName HTC
      static GlobalNamespace::OpenVRHelper::VRControllerManufacturerName _get_HTC();
      // Set static field: static public OpenVRHelper/VRControllerManufacturerName HTC
      static void _set_HTC(GlobalNamespace::OpenVRHelper::VRControllerManufacturerName value);
      // static field const value: static public OpenVRHelper/VRControllerManufacturerName Oculus
      static constexpr const int Oculus = 1;
      // Get static field: static public OpenVRHelper/VRControllerManufacturerName Oculus
      static GlobalNamespace::OpenVRHelper::VRControllerManufacturerName _get_Oculus();
      // Set static field: static public OpenVRHelper/VRControllerManufacturerName Oculus
      static void _set_Oculus(GlobalNamespace::OpenVRHelper::VRControllerManufacturerName value);
      // static field const value: static public OpenVRHelper/VRControllerManufacturerName Valve
      static constexpr const int Valve = 2;
      // Get static field: static public OpenVRHelper/VRControllerManufacturerName Valve
      static GlobalNamespace::OpenVRHelper::VRControllerManufacturerName _get_Valve();
      // Set static field: static public OpenVRHelper/VRControllerManufacturerName Valve
      static void _set_Valve(GlobalNamespace::OpenVRHelper::VRControllerManufacturerName value);
      // static field const value: static public OpenVRHelper/VRControllerManufacturerName Unknown
      static constexpr const int Unknown = 3;
      // Get static field: static public OpenVRHelper/VRControllerManufacturerName Unknown
      static GlobalNamespace::OpenVRHelper::VRControllerManufacturerName _get_Unknown();
      // Set static field: static public OpenVRHelper/VRControllerManufacturerName Unknown
      static void _set_Unknown(GlobalNamespace::OpenVRHelper::VRControllerManufacturerName value);
      // static field const value: static public OpenVRHelper/VRControllerManufacturerName Undefined
      static constexpr const int Undefined = 4;
      // Get static field: static public OpenVRHelper/VRControllerManufacturerName Undefined
      static GlobalNamespace::OpenVRHelper::VRControllerManufacturerName _get_Undefined();
      // Set static field: static public OpenVRHelper/VRControllerManufacturerName Undefined
      static void _set_Undefined(GlobalNamespace::OpenVRHelper::VRControllerManufacturerName value);
    }; // OpenVRHelper/VRControllerManufacturerName
    static check_size<sizeof(OpenVRHelper::VRControllerManufacturerName), 0 + sizeof(int)> __GlobalNamespace_OpenVRHelper_VRControllerManufacturerNameSizeCheck;
    static_assert(sizeof(OpenVRHelper::VRControllerManufacturerName) == 0x4);
    // [InjectAttribute] Offset: 0xD99528
    // private readonly IOpenVRHaptics _openVrHaptics
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IOpenVRHaptics* openVrHaptics;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IOpenVRHaptics*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD99538
    // private System.Action inputFocusWasCapturedEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action* inputFocusWasCapturedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD99548
    // private System.Action inputFocusWasReleasedEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action* inputFocusWasReleasedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD99558
    // private System.Action hmdUnmountedEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action* hmdUnmountedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD99568
    // private System.Action hmdMountedEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action* hmdMountedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD99578
    // private System.Action joystickWasCenteredThisFrameEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action* joystickWasCenteredThisFrameEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD99588
    // private System.Action`1<UnityEngine.Vector2> joystickWasNotCenteredThisFrameEvent
    // Size: 0x8
    // Offset: 0x48
    System::Action_1<UnityEngine::Vector2>* joystickWasNotCenteredThisFrameEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<UnityEngine::Vector2>*) == 0x8);
    // private readonly Valve.VR.TrackedDevicePose_t[] _gamePoses
    // Size: 0x8
    // Offset: 0x50
    ::Array<Valve::VR::TrackedDevicePose_t>* gamePoses;
    // Field size check
    static_assert(sizeof(::Array<Valve::VR::TrackedDevicePose_t>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState> _nodeStates
    // Size: 0x8
    // Offset: 0x58
    System::Collections::Generic::List_1<UnityEngine::XR::XRNodeState>* nodeStates;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::XR::XRNodeState>*) == 0x8);
    // private readonly Valve.VR.TrackedDevicePose_t[] _poses
    // Size: 0x8
    // Offset: 0x60
    ::Array<Valve::VR::TrackedDevicePose_t>* poses;
    // Field size check
    static_assert(sizeof(::Array<Valve::VR::TrackedDevicePose_t>*) == 0x8);
    // private System.Boolean _didGetNodeStatesThisFrame
    // Size: 0x1
    // Offset: 0x68
    bool didGetNodeStatesThisFrame;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: didGetNodeStatesThisFrame and: disabledEventSystem
    char __padding10[0x7] = {};
    // private UnityEngine.EventSystems.EventSystem _disabledEventSystem
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::EventSystems::EventSystem* disabledEventSystem;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::EventSystem*) == 0x8);
    // private OpenVRHelper/VRControllerManufacturerName _vrControllerManufacturerName
    // Size: 0x4
    // Offset: 0x78
    GlobalNamespace::OpenVRHelper::VRControllerManufacturerName vrControllerManufacturerName;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OpenVRHelper::VRControllerManufacturerName) == 0x4);
    // private System.Boolean _scrollingLastFrame
    // Size: 0x1
    // Offset: 0x7C
    bool scrollingLastFrame;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: OpenVRHelper
    OpenVRHelper(GlobalNamespace::IOpenVRHaptics* openVrHaptics_ = {}, System::Action* inputFocusWasCapturedEvent_ = {}, System::Action* inputFocusWasReleasedEvent_ = {}, System::Action* hmdUnmountedEvent_ = {}, System::Action* hmdMountedEvent_ = {}, System::Action* joystickWasCenteredThisFrameEvent_ = {}, System::Action_1<UnityEngine::Vector2>* joystickWasNotCenteredThisFrameEvent_ = {}, ::Array<Valve::VR::TrackedDevicePose_t>* gamePoses_ = {}, System::Collections::Generic::List_1<UnityEngine::XR::XRNodeState>* nodeStates_ = {}, ::Array<Valve::VR::TrackedDevicePose_t>* poses_ = {}, bool didGetNodeStatesThisFrame_ = {}, UnityEngine::EventSystems::EventSystem* disabledEventSystem_ = {}, GlobalNamespace::OpenVRHelper::VRControllerManufacturerName vrControllerManufacturerName_ = {}, bool scrollingLastFrame_ = {}) noexcept : openVrHaptics{openVrHaptics_}, inputFocusWasCapturedEvent{inputFocusWasCapturedEvent_}, inputFocusWasReleasedEvent{inputFocusWasReleasedEvent_}, hmdUnmountedEvent{hmdUnmountedEvent_}, hmdMountedEvent{hmdMountedEvent_}, joystickWasCenteredThisFrameEvent{joystickWasCenteredThisFrameEvent_}, joystickWasNotCenteredThisFrameEvent{joystickWasNotCenteredThisFrameEvent_}, gamePoses{gamePoses_}, nodeStates{nodeStates_}, poses{poses_}, didGetNodeStatesThisFrame{didGetNodeStatesThisFrame_}, disabledEventSystem{disabledEventSystem_}, vrControllerManufacturerName{vrControllerManufacturerName_}, scrollingLastFrame{scrollingLastFrame_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IVRPlatformHelper
    operator GlobalNamespace::IVRPlatformHelper() noexcept {
      return *reinterpret_cast<GlobalNamespace::IVRPlatformHelper*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static public System.Single kMicroSecondsInSecond
    static constexpr const float kMicroSecondsInSecond = 1000000;
    // Get static field: static public System.Single kMicroSecondsInSecond
    static float _get_kMicroSecondsInSecond();
    // Set static field: static public System.Single kMicroSecondsInSecond
    static void _set_kMicroSecondsInSecond(float value);
    // static field const value: static public System.Int32 kUpdateInterval
    static constexpr const int kUpdateInterval = 4;
    // Get static field: static public System.Int32 kUpdateInterval
    static int _get_kUpdateInterval();
    // Set static field: static public System.Int32 kUpdateInterval
    static void _set_kUpdateInterval(int value);
    // static field const value: static public System.Int32 kMaxDurationMs
    static constexpr const int kMaxDurationMs = 4000;
    // Get static field: static public System.Int32 kMaxDurationMs
    static int _get_kMaxDurationMs();
    // Set static field: static public System.Int32 kMaxDurationMs
    static void _set_kMaxDurationMs(int value);
    // static field const value: static public System.Single kUpdateIntervalSeconds
    static constexpr const float kUpdateIntervalSeconds = 0.004;
    // Get static field: static public System.Single kUpdateIntervalSeconds
    static float _get_kUpdateIntervalSeconds();
    // Set static field: static public System.Single kUpdateIntervalSeconds
    static void _set_kUpdateIntervalSeconds(float value);
    // private OpenVRHelper/VRControllerManufacturerName get_vrControllerManufacturerName()
    // Offset: 0x1039828
    GlobalNamespace::OpenVRHelper::VRControllerManufacturerName get_vrControllerManufacturerName();
    // private System.Void Awake()
    // Offset: 0x10399BC
    void Awake();
    // public System.Void Update()
    // Offset: 0x103A010
    void Update();
    // public System.Void LateUpdate()
    // Offset: 0x103A5E8
    void LateUpdate();
    // public System.Void OnDestroy()
    // Offset: 0x103A5F0
    void OnDestroy();
    // private System.Void DisableEventSystem()
    // Offset: 0x103A404
    void DisableEventSystem();
    // private System.Void EnableEventSystem()
    // Offset: 0x103A540
    void EnableEventSystem();
    // private System.Void OnBeforeRender()
    // Offset: 0x103A6A4
    void OnBeforeRender();
    // public System.Void add_inputFocusWasCapturedEvent(System.Action value)
    // Offset: 0x1039060
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::add_inputFocusWasCapturedEvent(System.Action value)
    void add_inputFocusWasCapturedEvent(System::Action* value);
    // public System.Void remove_inputFocusWasCapturedEvent(System.Action value)
    // Offset: 0x1039104
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::remove_inputFocusWasCapturedEvent(System.Action value)
    void remove_inputFocusWasCapturedEvent(System::Action* value);
    // public System.Void add_inputFocusWasReleasedEvent(System.Action value)
    // Offset: 0x10391A8
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::add_inputFocusWasReleasedEvent(System.Action value)
    void add_inputFocusWasReleasedEvent(System::Action* value);
    // public System.Void remove_inputFocusWasReleasedEvent(System.Action value)
    // Offset: 0x103924C
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::remove_inputFocusWasReleasedEvent(System.Action value)
    void remove_inputFocusWasReleasedEvent(System::Action* value);
    // public System.Void add_hmdUnmountedEvent(System.Action value)
    // Offset: 0x10392F0
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::add_hmdUnmountedEvent(System.Action value)
    void add_hmdUnmountedEvent(System::Action* value);
    // public System.Void remove_hmdUnmountedEvent(System.Action value)
    // Offset: 0x1039394
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::remove_hmdUnmountedEvent(System.Action value)
    void remove_hmdUnmountedEvent(System::Action* value);
    // public System.Void add_hmdMountedEvent(System.Action value)
    // Offset: 0x1039438
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::add_hmdMountedEvent(System.Action value)
    void add_hmdMountedEvent(System::Action* value);
    // public System.Void remove_hmdMountedEvent(System.Action value)
    // Offset: 0x10394DC
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::remove_hmdMountedEvent(System.Action value)
    void remove_hmdMountedEvent(System::Action* value);
    // public System.Void add_joystickWasCenteredThisFrameEvent(System.Action value)
    // Offset: 0x1039580
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::add_joystickWasCenteredThisFrameEvent(System.Action value)
    void add_joystickWasCenteredThisFrameEvent(System::Action* value);
    // public System.Void remove_joystickWasCenteredThisFrameEvent(System.Action value)
    // Offset: 0x1039624
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::remove_joystickWasCenteredThisFrameEvent(System.Action value)
    void remove_joystickWasCenteredThisFrameEvent(System::Action* value);
    // public System.Void add_joystickWasNotCenteredThisFrameEvent(System.Action`1<UnityEngine.Vector2> value)
    // Offset: 0x10396C8
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::add_joystickWasNotCenteredThisFrameEvent(System.Action`1<UnityEngine.Vector2> value)
    void add_joystickWasNotCenteredThisFrameEvent(System::Action_1<UnityEngine::Vector2>* value);
    // public System.Void remove_joystickWasNotCenteredThisFrameEvent(System.Action`1<UnityEngine.Vector2> value)
    // Offset: 0x103976C
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::remove_joystickWasNotCenteredThisFrameEvent(System.Action`1<UnityEngine.Vector2> value)
    void remove_joystickWasNotCenteredThisFrameEvent(System::Action_1<UnityEngine::Vector2>* value);
    // public System.Boolean get_isAlwaysWireless()
    // Offset: 0x1039810
    // Implemented from: IVRPlatformHelper
    // Base method: System.Boolean IVRPlatformHelper::get_isAlwaysWireless()
    bool get_isAlwaysWireless();
    // public VRPlatformSDK get_vrPlatformSDK()
    // Offset: 0x1039818
    // Implemented from: IVRPlatformHelper
    // Base method: VRPlatformSDK IVRPlatformHelper::get_vrPlatformSDK()
    GlobalNamespace::VRPlatformSDK get_vrPlatformSDK();
    // public XRDeviceModel get_currentXRDeviceModel()
    // Offset: 0x1039820
    // Implemented from: IVRPlatformHelper
    // Base method: XRDeviceModel IVRPlatformHelper::get_currentXRDeviceModel()
    GlobalNamespace::XRDeviceModel get_currentXRDeviceModel();
    // public System.Void TriggerHapticPulse(UnityEngine.XR.XRNode node, System.Single duration, System.Single strength, System.Single frequency)
    // Offset: 0x1039A30
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::TriggerHapticPulse(UnityEngine.XR.XRNode node, System.Single duration, System.Single strength, System.Single frequency)
    void TriggerHapticPulse(UnityEngine::XR::XRNode node, float duration, float strength, float frequency);
    // public System.Void StopHaptics(UnityEngine.XR.XRNode node)
    // Offset: 0x1039B18
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::StopHaptics(UnityEngine.XR.XRNode node)
    void StopHaptics(UnityEngine::XR::XRNode node);
    // public System.Void AdjustControllerTransform(UnityEngine.XR.XRNode node, UnityEngine.Transform transform, UnityEngine.Vector3 position, UnityEngine.Vector3 rotation)
    // Offset: 0x1039B1C
    // Implemented from: IVRPlatformHelper
    // Base method: System.Void IVRPlatformHelper::AdjustControllerTransform(UnityEngine.XR.XRNode node, UnityEngine.Transform transform, UnityEngine.Vector3 position, UnityEngine.Vector3 rotation)
    void AdjustControllerTransform(UnityEngine::XR::XRNode node, UnityEngine::Transform* transform, UnityEngine::Vector3 position, UnityEngine::Vector3 rotation);
    // public System.Boolean GetNodePose(UnityEngine.XR.XRNode nodeType, System.Int32 idx, out UnityEngine.Vector3 pos, out UnityEngine.Quaternion rot)
    // Offset: 0x1039D40
    // Implemented from: IVRPlatformHelper
    // Base method: System.Boolean IVRPlatformHelper::GetNodePose(UnityEngine.XR.XRNode nodeType, System.Int32 idx, out UnityEngine.Vector3 pos, out UnityEngine.Quaternion rot)
    bool GetNodePose(UnityEngine::XR::XRNode nodeType, int idx, UnityEngine::Vector3& pos, UnityEngine::Quaternion& rot);
    // public System.Void .ctor()
    // Offset: 0x103A728
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OpenVRHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OpenVRHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OpenVRHelper*, creationType>()));
    }
  }; // OpenVRHelper
  static check_size<sizeof(OpenVRHelper), 124 + sizeof(bool)> __GlobalNamespace_OpenVRHelperSizeCheck;
  static_assert(sizeof(OpenVRHelper) == 0x7D);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OpenVRHelper*, "", "OpenVRHelper");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OpenVRHelper::VRControllerManufacturerName, "", "OpenVRHelper/VRControllerManufacturerName");
#pragma pack(pop)
