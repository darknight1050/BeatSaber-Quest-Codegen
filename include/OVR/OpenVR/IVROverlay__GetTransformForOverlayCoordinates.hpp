// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
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
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: HmdVector2_t
  struct HmdVector2_t;
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVROverlay/_GetTransformForOverlayCoordinates
  class IVROverlay::_GetTransformForOverlayCoordinates : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x150FFF8
    static IVROverlay::_GetTransformForOverlayCoordinates* New_ctor(::CsObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, OVR.OpenVR.ETrackingUniverseOrigin eTrackingOrigin, OVR.OpenVR.HmdVector2_t coordinatesInOverlay, OVR.OpenVR.HmdMatrix34_t pmatTransform)
    // Offset: 0x151000C
    OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, OVR::OpenVR::HmdVector2_t coordinatesInOverlay, OVR::OpenVR::HmdMatrix34_t& pmatTransform);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, OVR.OpenVR.ETrackingUniverseOrigin eTrackingOrigin, OVR.OpenVR.HmdVector2_t coordinatesInOverlay, OVR.OpenVR.HmdMatrix34_t pmatTransform, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15102D4
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, OVR::OpenVR::HmdVector2_t coordinatesInOverlay, OVR::OpenVR::HmdMatrix34_t& pmatTransform, System::AsyncCallback* callback, ::CsObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(OVR.OpenVR.HmdMatrix34_t pmatTransform, System.IAsyncResult result)
    // Offset: 0x15103C4
    OVR::OpenVR::EVROverlayError EndInvoke(OVR::OpenVR::HmdMatrix34_t& pmatTransform, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_GetTransformForOverlayCoordinates
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_GetTransformForOverlayCoordinates*, "OVR.OpenVR", "IVROverlay/_GetTransformForOverlayCoordinates");
#pragma pack(pop)
