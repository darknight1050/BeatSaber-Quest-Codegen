// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay/_GetOverlayKey
#include "OVR/OpenVR/IVROverlay__GetOverlayKey.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
// Including type: OVR.OpenVR.EVROverlayError
#include "OVR/OpenVR/EVROverlayError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayKey..ctor
OVR::OpenVR::IVROverlay::_GetOverlayKey* OVR::OpenVR::IVROverlay::_GetOverlayKey::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVROverlay::_GetOverlayKey*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVROverlay/_GetOverlayKey", object, method));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayKey.Invoke
uint OVR::OpenVR::IVROverlay::_GetOverlayKey::Invoke(uint64_t ulOverlayHandle, System::Text::StringBuilder* pchValue, uint unBufferSize, OVR::OpenVR::EVROverlayError& pError) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "Invoke", ulOverlayHandle, pchValue, unBufferSize, pError));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayKey.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVROverlay::_GetOverlayKey::BeginInvoke(uint64_t ulOverlayHandle, System::Text::StringBuilder* pchValue, uint unBufferSize, OVR::OpenVR::EVROverlayError& pError, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, pchValue, unBufferSize, pError, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayKey.EndInvoke
uint OVR::OpenVR::IVROverlay::_GetOverlayKey::EndInvoke(OVR::OpenVR::EVROverlayError& pError, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "EndInvoke", pError, result));
}
