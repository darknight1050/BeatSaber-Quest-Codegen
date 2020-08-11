// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: VREvent_t
  struct VREvent_t;
  // Forward declaring type: TrackedDevicePose_t
  struct TrackedDevicePose_t;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRSystem/_PollNextEventWithPose
  class IVRSystem::_PollNextEventWithPose : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xCAAE28
    static IVRSystem::_PollNextEventWithPose* New_ctor(::CsObject* object, System::IntPtr method);
    // public System.Boolean Invoke(OVR.OpenVR.ETrackingUniverseOrigin eOrigin, OVR.OpenVR.VREvent_t pEvent, System.UInt32 uncbVREvent, OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose)
    // Offset: 0xCAAE3C
    bool Invoke(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, OVR::OpenVR::VREvent_t& pEvent, uint uncbVREvent, OVR::OpenVR::TrackedDevicePose_t& pTrackedDevicePose);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.ETrackingUniverseOrigin eOrigin, OVR.OpenVR.VREvent_t pEvent, System.UInt32 uncbVREvent, OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose, System.AsyncCallback callback, System.Object object)
    // Offset: 0xCAB108
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, OVR::OpenVR::VREvent_t& pEvent, uint uncbVREvent, OVR::OpenVR::TrackedDevicePose_t& pTrackedDevicePose, System::AsyncCallback* callback, ::CsObject* object);
    // public System.Boolean EndInvoke(OVR.OpenVR.VREvent_t pEvent, OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose, System.IAsyncResult result)
    // Offset: 0xCAB1F8
    bool EndInvoke(OVR::OpenVR::VREvent_t& pEvent, OVR::OpenVR::TrackedDevicePose_t& pTrackedDevicePose, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_PollNextEventWithPose
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_PollNextEventWithPose*, "OVR.OpenVR", "IVRSystem/_PollNextEventWithPose");
#pragma pack(pop)
