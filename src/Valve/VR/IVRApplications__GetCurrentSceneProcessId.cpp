// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRApplications/_GetCurrentSceneProcessId
#include "Valve/VR/IVRApplications__GetCurrentSceneProcessId.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRApplications/_GetCurrentSceneProcessId..ctor
Valve::VR::IVRApplications::_GetCurrentSceneProcessId* Valve::VR::IVRApplications::_GetCurrentSceneProcessId::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRApplications::_GetCurrentSceneProcessId*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRApplications/_GetCurrentSceneProcessId", object, method));
}
// Autogenerated method: Valve.VR.IVRApplications/_GetCurrentSceneProcessId.Invoke
uint Valve::VR::IVRApplications::_GetCurrentSceneProcessId::Invoke() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "Invoke"));
}
// Autogenerated method: Valve.VR.IVRApplications/_GetCurrentSceneProcessId.BeginInvoke
System::IAsyncResult* Valve::VR::IVRApplications::_GetCurrentSceneProcessId::BeginInvoke(System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", callback, object));
}
// Autogenerated method: Valve.VR.IVRApplications/_GetCurrentSceneProcessId.EndInvoke
uint Valve::VR::IVRApplications::_GetCurrentSceneProcessId::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "EndInvoke", result));
}
