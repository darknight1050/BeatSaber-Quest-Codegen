// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRApplications/_GetTransitionState
#include "OVR/OpenVR/IVRApplications__GetTransitionState.hpp"
// Including type: OVR.OpenVR.EVRApplicationTransitionState
#include "OVR/OpenVR/EVRApplicationTransitionState.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRApplications/_GetTransitionState..ctor
OVR::OpenVR::IVRApplications::_GetTransitionState* OVR::OpenVR::IVRApplications::_GetTransitionState::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRApplications::_GetTransitionState*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRApplications/_GetTransitionState", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_GetTransitionState.Invoke
OVR::OpenVR::EVRApplicationTransitionState OVR::OpenVR::IVRApplications::_GetTransitionState::Invoke() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRApplicationTransitionState>(this, "Invoke"));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_GetTransitionState.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRApplications::_GetTransitionState::BeginInvoke(System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_GetTransitionState.EndInvoke
OVR::OpenVR::EVRApplicationTransitionState OVR::OpenVR::IVRApplications::_GetTransitionState::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRApplicationTransitionState>(this, "EndInvoke", result));
}
