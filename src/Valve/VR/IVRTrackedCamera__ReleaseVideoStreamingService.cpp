// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRTrackedCamera/_ReleaseVideoStreamingService
#include "Valve/VR/IVRTrackedCamera__ReleaseVideoStreamingService.hpp"
// Including type: Valve.VR.EVRTrackedCameraError
#include "Valve/VR/EVRTrackedCameraError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRTrackedCamera/_ReleaseVideoStreamingService..ctor
Valve::VR::IVRTrackedCamera::_ReleaseVideoStreamingService* Valve::VR::IVRTrackedCamera::_ReleaseVideoStreamingService::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRTrackedCamera::_ReleaseVideoStreamingService*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRTrackedCamera/_ReleaseVideoStreamingService", object, method));
}
// Autogenerated method: Valve.VR.IVRTrackedCamera/_ReleaseVideoStreamingService.Invoke
Valve::VR::EVRTrackedCameraError Valve::VR::IVRTrackedCamera::_ReleaseVideoStreamingService::Invoke(uint64_t hTrackedCamera) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRTrackedCameraError>(this, "Invoke", hTrackedCamera));
}
// Autogenerated method: Valve.VR.IVRTrackedCamera/_ReleaseVideoStreamingService.BeginInvoke
System::IAsyncResult* Valve::VR::IVRTrackedCamera::_ReleaseVideoStreamingService::BeginInvoke(uint64_t hTrackedCamera, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", hTrackedCamera, callback, object));
}
// Autogenerated method: Valve.VR.IVRTrackedCamera/_ReleaseVideoStreamingService.EndInvoke
Valve::VR::EVRTrackedCameraError Valve::VR::IVRTrackedCamera::_ReleaseVideoStreamingService::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRTrackedCameraError>(this, "EndInvoke", result));
}
