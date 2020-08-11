// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRTrackedCamera/_AcquireVideoStreamingService
#include "Valve/VR/IVRTrackedCamera__AcquireVideoStreamingService.hpp"
// Including type: Valve.VR.EVRTrackedCameraError
#include "Valve/VR/EVRTrackedCameraError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRTrackedCamera/_AcquireVideoStreamingService..ctor
Valve::VR::IVRTrackedCamera::_AcquireVideoStreamingService* Valve::VR::IVRTrackedCamera::_AcquireVideoStreamingService::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRTrackedCamera::_AcquireVideoStreamingService*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRTrackedCamera/_AcquireVideoStreamingService", object, method));
}
// Autogenerated method: Valve.VR.IVRTrackedCamera/_AcquireVideoStreamingService.Invoke
Valve::VR::EVRTrackedCameraError Valve::VR::IVRTrackedCamera::_AcquireVideoStreamingService::Invoke(uint nDeviceIndex, uint64_t& pHandle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRTrackedCameraError>(this, "Invoke", nDeviceIndex, pHandle));
}
// Autogenerated method: Valve.VR.IVRTrackedCamera/_AcquireVideoStreamingService.BeginInvoke
System::IAsyncResult* Valve::VR::IVRTrackedCamera::_AcquireVideoStreamingService::BeginInvoke(uint nDeviceIndex, uint64_t& pHandle, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", nDeviceIndex, pHandle, callback, object));
}
// Autogenerated method: Valve.VR.IVRTrackedCamera/_AcquireVideoStreamingService.EndInvoke
Valve::VR::EVRTrackedCameraError Valve::VR::IVRTrackedCamera::_AcquireVideoStreamingService::EndInvoke(uint64_t& pHandle, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRTrackedCameraError>(this, "EndInvoke", pHandle, result));
}
