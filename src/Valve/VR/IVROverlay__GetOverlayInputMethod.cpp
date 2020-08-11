// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay/_GetOverlayInputMethod
#include "Valve/VR/IVROverlay__GetOverlayInputMethod.hpp"
// Including type: Valve.VR.EVROverlayError
#include "Valve/VR/EVROverlayError.hpp"
// Including type: Valve.VR.VROverlayInputMethod
#include "Valve/VR/VROverlayInputMethod.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVROverlay/_GetOverlayInputMethod..ctor
Valve::VR::IVROverlay::_GetOverlayInputMethod* Valve::VR::IVROverlay::_GetOverlayInputMethod::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVROverlay::_GetOverlayInputMethod*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVROverlay/_GetOverlayInputMethod", object, method));
}
// Autogenerated method: Valve.VR.IVROverlay/_GetOverlayInputMethod.Invoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_GetOverlayInputMethod::Invoke(uint64_t ulOverlayHandle, Valve::VR::VROverlayInputMethod& peInputMethod) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "Invoke", ulOverlayHandle, peInputMethod));
}
// Autogenerated method: Valve.VR.IVROverlay/_GetOverlayInputMethod.BeginInvoke
System::IAsyncResult* Valve::VR::IVROverlay::_GetOverlayInputMethod::BeginInvoke(uint64_t ulOverlayHandle, Valve::VR::VROverlayInputMethod& peInputMethod, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, peInputMethod, callback, object));
}
// Autogenerated method: Valve.VR.IVROverlay/_GetOverlayInputMethod.EndInvoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_GetOverlayInputMethod::EndInvoke(Valve::VR::VROverlayInputMethod& peInputMethod, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "EndInvoke", peInputMethod, result));
}
