// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay/_SetHighQualityOverlay
#include "OVR/OpenVR/IVROverlay__SetHighQualityOverlay.hpp"
// Including type: OVR.OpenVR.EVROverlayError
#include "OVR/OpenVR/EVROverlayError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetHighQualityOverlay..ctor
OVR::OpenVR::IVROverlay::_SetHighQualityOverlay* OVR::OpenVR::IVROverlay::_SetHighQualityOverlay::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVROverlay::_SetHighQualityOverlay*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVROverlay/_SetHighQualityOverlay", object, method));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetHighQualityOverlay.Invoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_SetHighQualityOverlay::Invoke(uint64_t ulOverlayHandle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "Invoke", ulOverlayHandle));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetHighQualityOverlay.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVROverlay::_SetHighQualityOverlay::BeginInvoke(uint64_t ulOverlayHandle, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetHighQualityOverlay.EndInvoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_SetHighQualityOverlay::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "EndInvoke", result));
}
