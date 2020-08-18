// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
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
  // Forward declaring type: HmdVector2_t
  struct HmdVector2_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVROverlay/_SetOverlayMouseScale
  class IVROverlay::_SetOverlayMouseScale : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15FE800
    static IVROverlay::_SetOverlayMouseScale* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, OVR.OpenVR.HmdVector2_t pvecMouseScale)
    // Offset: 0x15FE814
    OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, OVR::OpenVR::HmdVector2_t& pvecMouseScale);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, OVR.OpenVR.HmdVector2_t pvecMouseScale, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15FEA98
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, OVR::OpenVR::HmdVector2_t& pvecMouseScale, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(OVR.OpenVR.HmdVector2_t pvecMouseScale, System.IAsyncResult result)
    // Offset: 0x15FEB48
    OVR::OpenVR::EVROverlayError EndInvoke(OVR::OpenVR::HmdVector2_t& pvecMouseScale, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_SetOverlayMouseScale
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_SetOverlayMouseScale*, "OVR.OpenVR", "IVROverlay/_SetOverlayMouseScale");
#pragma pack(pop)
