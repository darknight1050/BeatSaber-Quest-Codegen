// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem/_SetDisplayVisibility
#include "Valve/VR/IVRSystem__SetDisplayVisibility.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRSystem/_SetDisplayVisibility..ctor
Valve::VR::IVRSystem::_SetDisplayVisibility* Valve::VR::IVRSystem::_SetDisplayVisibility::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRSystem::_SetDisplayVisibility*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRSystem/_SetDisplayVisibility", object, method));
}
// Autogenerated method: Valve.VR.IVRSystem/_SetDisplayVisibility.Invoke
bool Valve::VR::IVRSystem::_SetDisplayVisibility::Invoke(bool bIsVisibleOnDesktop) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Invoke", bIsVisibleOnDesktop));
}
// Autogenerated method: Valve.VR.IVRSystem/_SetDisplayVisibility.BeginInvoke
System::IAsyncResult* Valve::VR::IVRSystem::_SetDisplayVisibility::BeginInvoke(bool bIsVisibleOnDesktop, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", bIsVisibleOnDesktop, callback, object));
}
// Autogenerated method: Valve.VR.IVRSystem/_SetDisplayVisibility.EndInvoke
bool Valve::VR::IVRSystem::_SetDisplayVisibility::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EndInvoke", result));
}
