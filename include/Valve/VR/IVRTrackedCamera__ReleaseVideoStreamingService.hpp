// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVRTrackedCamera
#include "Valve/VR/IVRTrackedCamera.hpp"
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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRTrackedCameraError
  struct EVRTrackedCameraError;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRTrackedCamera/_ReleaseVideoStreamingService
  class IVRTrackedCamera::_ReleaseVideoStreamingService : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x190F658
    static IVRTrackedCamera::_ReleaseVideoStreamingService* New_ctor(::CsObject* object, System::IntPtr method);
    // public Valve.VR.EVRTrackedCameraError Invoke(System.UInt64 hTrackedCamera)
    // Offset: 0x190F66C
    Valve::VR::EVRTrackedCameraError Invoke(uint64_t hTrackedCamera);
    // public System.IAsyncResult BeginInvoke(System.UInt64 hTrackedCamera, System.AsyncCallback callback, System.Object object)
    // Offset: 0x190F8D4
    System::IAsyncResult* BeginInvoke(uint64_t hTrackedCamera, System::AsyncCallback* callback, ::CsObject* object);
    // public Valve.VR.EVRTrackedCameraError EndInvoke(System.IAsyncResult result)
    // Offset: 0x190F960
    Valve::VR::EVRTrackedCameraError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRTrackedCamera/_ReleaseVideoStreamingService
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRTrackedCamera::_ReleaseVideoStreamingService*, "Valve.VR", "IVRTrackedCamera/_ReleaseVideoStreamingService");
#pragma pack(pop)
