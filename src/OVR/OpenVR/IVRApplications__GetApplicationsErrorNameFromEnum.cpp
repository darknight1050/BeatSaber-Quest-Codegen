// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRApplications/_GetApplicationsErrorNameFromEnum
#include "OVR/OpenVR/IVRApplications__GetApplicationsErrorNameFromEnum.hpp"
// Including type: OVR.OpenVR.EVRApplicationError
#include "OVR/OpenVR/EVRApplicationError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRApplications/_GetApplicationsErrorNameFromEnum..ctor
OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum* OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRApplications::_GetApplicationsErrorNameFromEnum*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRApplications/_GetApplicationsErrorNameFromEnum", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_GetApplicationsErrorNameFromEnum.Invoke
System::IntPtr OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum::Invoke(OVR::OpenVR::EVRApplicationError error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>(this, "Invoke", error));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_GetApplicationsErrorNameFromEnum.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum::BeginInvoke(OVR::OpenVR::EVRApplicationError error, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", error, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_GetApplicationsErrorNameFromEnum.EndInvoke
System::IntPtr OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>(this, "EndInvoke", result));
}
