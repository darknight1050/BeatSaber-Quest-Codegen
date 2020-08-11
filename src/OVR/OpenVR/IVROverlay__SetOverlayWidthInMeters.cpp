// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay/_SetOverlayWidthInMeters
#include "OVR/OpenVR/IVROverlay__SetOverlayWidthInMeters.hpp"
// Including type: OVR.OpenVR.EVROverlayError
#include "OVR/OpenVR/EVROverlayError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayWidthInMeters..ctor
OVR::OpenVR::IVROverlay::_SetOverlayWidthInMeters* OVR::OpenVR::IVROverlay::_SetOverlayWidthInMeters::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVROverlay::_SetOverlayWidthInMeters*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVROverlay/_SetOverlayWidthInMeters", object, method));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayWidthInMeters.Invoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_SetOverlayWidthInMeters::Invoke(uint64_t ulOverlayHandle, float fWidthInMeters) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "Invoke", ulOverlayHandle, fWidthInMeters));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayWidthInMeters.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVROverlay::_SetOverlayWidthInMeters::BeginInvoke(uint64_t ulOverlayHandle, float fWidthInMeters, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, fWidthInMeters, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayWidthInMeters.EndInvoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_SetOverlayWidthInMeters::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "EndInvoke", result));
}
