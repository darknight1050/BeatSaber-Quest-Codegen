// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay/_SetOverlayDualAnalogTransform
#include "OVR/OpenVR/IVROverlay__SetOverlayDualAnalogTransform.hpp"
// Including type: OVR.OpenVR.EVROverlayError
#include "OVR/OpenVR/EVROverlayError.hpp"
// Including type: OVR.OpenVR.EDualAnalogWhich
#include "OVR/OpenVR/EDualAnalogWhich.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayDualAnalogTransform..ctor
OVR::OpenVR::IVROverlay::_SetOverlayDualAnalogTransform* OVR::OpenVR::IVROverlay::_SetOverlayDualAnalogTransform::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVROverlay::_SetOverlayDualAnalogTransform*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVROverlay/_SetOverlayDualAnalogTransform", object, method));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayDualAnalogTransform.Invoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_SetOverlayDualAnalogTransform::Invoke(uint64_t ulOverlay, OVR::OpenVR::EDualAnalogWhich eWhich, System::IntPtr vCenter, float fRadius) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "Invoke", ulOverlay, eWhich, vCenter, fRadius));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayDualAnalogTransform.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVROverlay::_SetOverlayDualAnalogTransform::BeginInvoke(uint64_t ulOverlay, OVR::OpenVR::EDualAnalogWhich eWhich, System::IntPtr vCenter, float fRadius, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlay, eWhich, vCenter, fRadius, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayDualAnalogTransform.EndInvoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_SetOverlayDualAnalogTransform::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "EndInvoke", result));
}
