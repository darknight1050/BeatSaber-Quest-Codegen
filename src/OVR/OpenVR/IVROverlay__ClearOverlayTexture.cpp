// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay/_ClearOverlayTexture
#include "OVR/OpenVR/IVROverlay__ClearOverlayTexture.hpp"
// Including type: OVR.OpenVR.EVROverlayError
#include "OVR/OpenVR/EVROverlayError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVROverlay/_ClearOverlayTexture..ctor
OVR::OpenVR::IVROverlay::_ClearOverlayTexture* OVR::OpenVR::IVROverlay::_ClearOverlayTexture::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVROverlay::_ClearOverlayTexture*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVROverlay/_ClearOverlayTexture", object, method));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_ClearOverlayTexture.Invoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_ClearOverlayTexture::Invoke(uint64_t ulOverlayHandle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "Invoke", ulOverlayHandle));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_ClearOverlayTexture.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVROverlay::_ClearOverlayTexture::BeginInvoke(uint64_t ulOverlayHandle, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_ClearOverlayTexture.EndInvoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_ClearOverlayTexture::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "EndInvoke", result));
}
