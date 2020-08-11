// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay/_SetOverlayTransformAbsolute
#include "Valve/VR/IVROverlay__SetOverlayTransformAbsolute.hpp"
// Including type: Valve.VR.EVROverlayError
#include "Valve/VR/EVROverlayError.hpp"
// Including type: Valve.VR.ETrackingUniverseOrigin
#include "Valve/VR/ETrackingUniverseOrigin.hpp"
// Including type: Valve.VR.HmdMatrix34_t
#include "Valve/VR/HmdMatrix34_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVROverlay/_SetOverlayTransformAbsolute..ctor
Valve::VR::IVROverlay::_SetOverlayTransformAbsolute* Valve::VR::IVROverlay::_SetOverlayTransformAbsolute::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVROverlay::_SetOverlayTransformAbsolute*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVROverlay/_SetOverlayTransformAbsolute", object, method));
}
// Autogenerated method: Valve.VR.IVROverlay/_SetOverlayTransformAbsolute.Invoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_SetOverlayTransformAbsolute::Invoke(uint64_t ulOverlayHandle, Valve::VR::ETrackingUniverseOrigin eTrackingOrigin, Valve::VR::HmdMatrix34_t& pmatTrackingOriginToOverlayTransform) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "Invoke", ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform));
}
// Autogenerated method: Valve.VR.IVROverlay/_SetOverlayTransformAbsolute.BeginInvoke
System::IAsyncResult* Valve::VR::IVROverlay::_SetOverlayTransformAbsolute::BeginInvoke(uint64_t ulOverlayHandle, Valve::VR::ETrackingUniverseOrigin eTrackingOrigin, Valve::VR::HmdMatrix34_t& pmatTrackingOriginToOverlayTransform, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform, callback, object));
}
// Autogenerated method: Valve.VR.IVROverlay/_SetOverlayTransformAbsolute.EndInvoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_SetOverlayTransformAbsolute::EndInvoke(Valve::VR::HmdMatrix34_t& pmatTrackingOriginToOverlayTransform, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "EndInvoke", pmatTrackingOriginToOverlayTransform, result));
}
