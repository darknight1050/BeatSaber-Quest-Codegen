// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay/_HideKeyboard
#include "Valve/VR/IVROverlay__HideKeyboard.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVROverlay/_HideKeyboard..ctor
Valve::VR::IVROverlay::_HideKeyboard* Valve::VR::IVROverlay::_HideKeyboard::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVROverlay::_HideKeyboard*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVROverlay/_HideKeyboard", object, method));
}
// Autogenerated method: Valve.VR.IVROverlay/_HideKeyboard.Invoke
void Valve::VR::IVROverlay::_HideKeyboard::Invoke() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke"));
}
// Autogenerated method: Valve.VR.IVROverlay/_HideKeyboard.BeginInvoke
System::IAsyncResult* Valve::VR::IVROverlay::_HideKeyboard::BeginInvoke(System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", callback, object));
}
// Autogenerated method: Valve.VR.IVROverlay/_HideKeyboard.EndInvoke
void Valve::VR::IVROverlay::_HideKeyboard::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
