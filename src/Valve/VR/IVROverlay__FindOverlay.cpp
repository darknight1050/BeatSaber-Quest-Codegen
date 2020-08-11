// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay/_FindOverlay
#include "Valve/VR/IVROverlay__FindOverlay.hpp"
// Including type: Valve.VR.EVROverlayError
#include "Valve/VR/EVROverlayError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVROverlay/_FindOverlay..ctor
Valve::VR::IVROverlay::_FindOverlay* Valve::VR::IVROverlay::_FindOverlay::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVROverlay::_FindOverlay*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVROverlay/_FindOverlay", object, method));
}
// Autogenerated method: Valve.VR.IVROverlay/_FindOverlay.Invoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_FindOverlay::Invoke(::CsString* pchOverlayKey, uint64_t& pOverlayHandle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "Invoke", pchOverlayKey, pOverlayHandle));
}
// Autogenerated method: Valve.VR.IVROverlay/_FindOverlay.BeginInvoke
System::IAsyncResult* Valve::VR::IVROverlay::_FindOverlay::BeginInvoke(::CsString* pchOverlayKey, uint64_t& pOverlayHandle, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pchOverlayKey, pOverlayHandle, callback, object));
}
// Autogenerated method: Valve.VR.IVROverlay/_FindOverlay.EndInvoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_FindOverlay::EndInvoke(uint64_t& pOverlayHandle, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "EndInvoke", pOverlayHandle, result));
}
