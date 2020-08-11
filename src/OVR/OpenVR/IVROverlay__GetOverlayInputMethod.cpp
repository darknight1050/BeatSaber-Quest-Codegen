// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay/_GetOverlayInputMethod
#include "OVR/OpenVR/IVROverlay__GetOverlayInputMethod.hpp"
// Including type: OVR.OpenVR.EVROverlayError
#include "OVR/OpenVR/EVROverlayError.hpp"
// Including type: OVR.OpenVR.VROverlayInputMethod
#include "OVR/OpenVR/VROverlayInputMethod.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayInputMethod..ctor
OVR::OpenVR::IVROverlay::_GetOverlayInputMethod* OVR::OpenVR::IVROverlay::_GetOverlayInputMethod::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVROverlay::_GetOverlayInputMethod*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVROverlay/_GetOverlayInputMethod", object, method));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayInputMethod.Invoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_GetOverlayInputMethod::Invoke(uint64_t ulOverlayHandle, OVR::OpenVR::VROverlayInputMethod& peInputMethod) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "Invoke", ulOverlayHandle, peInputMethod));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayInputMethod.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVROverlay::_GetOverlayInputMethod::BeginInvoke(uint64_t ulOverlayHandle, OVR::OpenVR::VROverlayInputMethod& peInputMethod, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, peInputMethod, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayInputMethod.EndInvoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_GetOverlayInputMethod::EndInvoke(OVR::OpenVR::VROverlayInputMethod& peInputMethod, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "EndInvoke", peInputMethod, result));
}
