// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRTrackedCamera/_ReleaseVideoStreamingService
#include "OVR/OpenVR/IVRTrackedCamera__ReleaseVideoStreamingService.hpp"
// Including type: OVR.OpenVR.EVRTrackedCameraError
#include "OVR/OpenVR/EVRTrackedCameraError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRTrackedCamera/_ReleaseVideoStreamingService..ctor
OVR::OpenVR::IVRTrackedCamera::_ReleaseVideoStreamingService* OVR::OpenVR::IVRTrackedCamera::_ReleaseVideoStreamingService::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRTrackedCamera::_ReleaseVideoStreamingService*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRTrackedCamera/_ReleaseVideoStreamingService", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRTrackedCamera/_ReleaseVideoStreamingService.Invoke
OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera::_ReleaseVideoStreamingService::Invoke(uint64_t hTrackedCamera) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRTrackedCameraError>(this, "Invoke", hTrackedCamera));
}
// Autogenerated method: OVR.OpenVR.IVRTrackedCamera/_ReleaseVideoStreamingService.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRTrackedCamera::_ReleaseVideoStreamingService::BeginInvoke(uint64_t hTrackedCamera, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", hTrackedCamera, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRTrackedCamera/_ReleaseVideoStreamingService.EndInvoke
OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera::_ReleaseVideoStreamingService::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRTrackedCameraError>(this, "EndInvoke", result));
}
