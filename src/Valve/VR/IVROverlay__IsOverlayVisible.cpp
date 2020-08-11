// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay/_IsOverlayVisible
#include "Valve/VR/IVROverlay__IsOverlayVisible.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVROverlay/_IsOverlayVisible..ctor
Valve::VR::IVROverlay::_IsOverlayVisible* Valve::VR::IVROverlay::_IsOverlayVisible::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVROverlay::_IsOverlayVisible*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVROverlay/_IsOverlayVisible", object, method));
}
// Autogenerated method: Valve.VR.IVROverlay/_IsOverlayVisible.Invoke
bool Valve::VR::IVROverlay::_IsOverlayVisible::Invoke(uint64_t ulOverlayHandle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Invoke", ulOverlayHandle));
}
// Autogenerated method: Valve.VR.IVROverlay/_IsOverlayVisible.BeginInvoke
System::IAsyncResult* Valve::VR::IVROverlay::_IsOverlayVisible::BeginInvoke(uint64_t ulOverlayHandle, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, callback, object));
}
// Autogenerated method: Valve.VR.IVROverlay/_IsOverlayVisible.EndInvoke
bool Valve::VR::IVROverlay::_IsOverlayVisible::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EndInvoke", result));
}
