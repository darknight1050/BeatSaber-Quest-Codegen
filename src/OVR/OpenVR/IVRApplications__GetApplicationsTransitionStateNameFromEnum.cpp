// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRApplications/_GetApplicationsTransitionStateNameFromEnum
#include "OVR/OpenVR/IVRApplications__GetApplicationsTransitionStateNameFromEnum.hpp"
// Including type: OVR.OpenVR.EVRApplicationTransitionState
#include "OVR/OpenVR/EVRApplicationTransitionState.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRApplications/_GetApplicationsTransitionStateNameFromEnum..ctor
OVR::OpenVR::IVRApplications::_GetApplicationsTransitionStateNameFromEnum* OVR::OpenVR::IVRApplications::_GetApplicationsTransitionStateNameFromEnum::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRApplications::_GetApplicationsTransitionStateNameFromEnum*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRApplications/_GetApplicationsTransitionStateNameFromEnum", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_GetApplicationsTransitionStateNameFromEnum.Invoke
System::IntPtr OVR::OpenVR::IVRApplications::_GetApplicationsTransitionStateNameFromEnum::Invoke(OVR::OpenVR::EVRApplicationTransitionState state) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>(this, "Invoke", state));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_GetApplicationsTransitionStateNameFromEnum.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRApplications::_GetApplicationsTransitionStateNameFromEnum::BeginInvoke(OVR::OpenVR::EVRApplicationTransitionState state, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", state, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_GetApplicationsTransitionStateNameFromEnum.EndInvoke
System::IntPtr OVR::OpenVR::IVRApplications::_GetApplicationsTransitionStateNameFromEnum::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>(this, "EndInvoke", result));
}
