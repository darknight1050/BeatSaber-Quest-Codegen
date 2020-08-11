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
  // Forward declaring type: EDualAnalogWhich
  struct EDualAnalogWhich;
  // Forward declaring type: HmdVector2_t
  struct HmdVector2_t;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVROverlay/_GetOverlayDualAnalogTransform
  class IVROverlay::_GetOverlayDualAnalogTransform : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x150A8A4
    static IVROverlay::_GetOverlayDualAnalogTransform* New_ctor(::CsObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlay, OVR.OpenVR.EDualAnalogWhich eWhich, OVR.OpenVR.HmdVector2_t pvCenter, System.Single pfRadius)
    // Offset: 0x150A8B8
    OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlay, OVR::OpenVR::EDualAnalogWhich eWhich, OVR::OpenVR::HmdVector2_t& pvCenter, float& pfRadius);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlay, OVR.OpenVR.EDualAnalogWhich eWhich, OVR.OpenVR.HmdVector2_t pvCenter, System.Single pfRadius, System.AsyncCallback callback, System.Object object)
    // Offset: 0x150AB68
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlay, OVR::OpenVR::EDualAnalogWhich eWhich, OVR::OpenVR::HmdVector2_t& pvCenter, float& pfRadius, System::AsyncCallback* callback, ::CsObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(OVR.OpenVR.HmdVector2_t pvCenter, System.Single pfRadius, System.IAsyncResult result)
    // Offset: 0x150AC5C
    OVR::OpenVR::EVROverlayError EndInvoke(OVR::OpenVR::HmdVector2_t& pvCenter, float& pfRadius, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_GetOverlayDualAnalogTransform
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_GetOverlayDualAnalogTransform*, "OVR.OpenVR", "IVROverlay/_GetOverlayDualAnalogTransform");
#pragma pack(pop)
