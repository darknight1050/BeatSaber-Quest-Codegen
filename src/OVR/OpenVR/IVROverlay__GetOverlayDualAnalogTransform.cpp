// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay/_GetOverlayDualAnalogTransform
#include "OVR/OpenVR/IVROverlay__GetOverlayDualAnalogTransform.hpp"
// Including type: OVR.OpenVR.EVROverlayError
#include "OVR/OpenVR/EVROverlayError.hpp"
// Including type: OVR.OpenVR.EDualAnalogWhich
#include "OVR/OpenVR/EDualAnalogWhich.hpp"
// Including type: OVR.OpenVR.HmdVector2_t
#include "OVR/OpenVR/HmdVector2_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayDualAnalogTransform..ctor
OVR::OpenVR::IVROverlay::_GetOverlayDualAnalogTransform* OVR::OpenVR::IVROverlay::_GetOverlayDualAnalogTransform::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVROverlay::_GetOverlayDualAnalogTransform*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVROverlay/_GetOverlayDualAnalogTransform", object, method));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayDualAnalogTransform.Invoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_GetOverlayDualAnalogTransform::Invoke(uint64_t ulOverlay, OVR::OpenVR::EDualAnalogWhich eWhich, OVR::OpenVR::HmdVector2_t& pvCenter, float& pfRadius) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "Invoke", ulOverlay, eWhich, pvCenter, pfRadius));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayDualAnalogTransform.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVROverlay::_GetOverlayDualAnalogTransform::BeginInvoke(uint64_t ulOverlay, OVR::OpenVR::EDualAnalogWhich eWhich, OVR::OpenVR::HmdVector2_t& pvCenter, float& pfRadius, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlay, eWhich, pvCenter, pfRadius, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayDualAnalogTransform.EndInvoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_GetOverlayDualAnalogTransform::EndInvoke(OVR::OpenVR::HmdVector2_t& pvCenter, float& pfRadius, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "EndInvoke", pvCenter, pfRadius, result));
}
