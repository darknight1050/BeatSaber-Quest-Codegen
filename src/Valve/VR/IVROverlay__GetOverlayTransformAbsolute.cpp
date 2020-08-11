// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay/_GetOverlayTransformAbsolute
#include "Valve/VR/IVROverlay__GetOverlayTransformAbsolute.hpp"
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
// Autogenerated method: Valve.VR.IVROverlay/_GetOverlayTransformAbsolute..ctor
Valve::VR::IVROverlay::_GetOverlayTransformAbsolute* Valve::VR::IVROverlay::_GetOverlayTransformAbsolute::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVROverlay::_GetOverlayTransformAbsolute*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVROverlay/_GetOverlayTransformAbsolute", object, method));
}
// Autogenerated method: Valve.VR.IVROverlay/_GetOverlayTransformAbsolute.Invoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_GetOverlayTransformAbsolute::Invoke(uint64_t ulOverlayHandle, Valve::VR::ETrackingUniverseOrigin& peTrackingOrigin, Valve::VR::HmdMatrix34_t& pmatTrackingOriginToOverlayTransform) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "Invoke", ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform));
}
// Autogenerated method: Valve.VR.IVROverlay/_GetOverlayTransformAbsolute.BeginInvoke
System::IAsyncResult* Valve::VR::IVROverlay::_GetOverlayTransformAbsolute::BeginInvoke(uint64_t ulOverlayHandle, Valve::VR::ETrackingUniverseOrigin& peTrackingOrigin, Valve::VR::HmdMatrix34_t& pmatTrackingOriginToOverlayTransform, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform, callback, object));
}
// Autogenerated method: Valve.VR.IVROverlay/_GetOverlayTransformAbsolute.EndInvoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_GetOverlayTransformAbsolute::EndInvoke(Valve::VR::ETrackingUniverseOrigin& peTrackingOrigin, Valve::VR::HmdMatrix34_t& pmatTrackingOriginToOverlayTransform, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "EndInvoke", peTrackingOrigin, pmatTrackingOriginToOverlayTransform, result));
}
