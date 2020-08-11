// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay/_SetOverlayIntersectionMask
#include "OVR/OpenVR/IVROverlay__SetOverlayIntersectionMask.hpp"
// Including type: OVR.OpenVR.EVROverlayError
#include "OVR/OpenVR/EVROverlayError.hpp"
// Including type: OVR.OpenVR.VROverlayIntersectionMaskPrimitive_t
#include "OVR/OpenVR/VROverlayIntersectionMaskPrimitive_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayIntersectionMask..ctor
OVR::OpenVR::IVROverlay::_SetOverlayIntersectionMask* OVR::OpenVR::IVROverlay::_SetOverlayIntersectionMask::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVROverlay::_SetOverlayIntersectionMask*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVROverlay/_SetOverlayIntersectionMask", object, method));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayIntersectionMask.Invoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_SetOverlayIntersectionMask::Invoke(uint64_t ulOverlayHandle, OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t& pMaskPrimitives, uint unNumMaskPrimitives, uint unPrimitiveSize) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "Invoke", ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayIntersectionMask.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVROverlay::_SetOverlayIntersectionMask::BeginInvoke(uint64_t ulOverlayHandle, OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t& pMaskPrimitives, uint unNumMaskPrimitives, uint unPrimitiveSize, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayIntersectionMask.EndInvoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_SetOverlayIntersectionMask::EndInvoke(OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t& pMaskPrimitives, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "EndInvoke", pMaskPrimitives, result));
}
