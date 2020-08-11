// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay/_GetOverlayMouseScale
#include "OVR/OpenVR/IVROverlay__GetOverlayMouseScale.hpp"
// Including type: OVR.OpenVR.EVROverlayError
#include "OVR/OpenVR/EVROverlayError.hpp"
// Including type: OVR.OpenVR.HmdVector2_t
#include "OVR/OpenVR/HmdVector2_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayMouseScale..ctor
OVR::OpenVR::IVROverlay::_GetOverlayMouseScale* OVR::OpenVR::IVROverlay::_GetOverlayMouseScale::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVROverlay::_GetOverlayMouseScale*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVROverlay/_GetOverlayMouseScale", object, method));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayMouseScale.Invoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_GetOverlayMouseScale::Invoke(uint64_t ulOverlayHandle, OVR::OpenVR::HmdVector2_t& pvecMouseScale) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "Invoke", ulOverlayHandle, pvecMouseScale));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayMouseScale.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVROverlay::_GetOverlayMouseScale::BeginInvoke(uint64_t ulOverlayHandle, OVR::OpenVR::HmdVector2_t& pvecMouseScale, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, pvecMouseScale, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayMouseScale.EndInvoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_GetOverlayMouseScale::EndInvoke(OVR::OpenVR::HmdVector2_t& pvecMouseScale, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "EndInvoke", pvecMouseScale, result));
}
