// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRApplications/_GetApplicationAutoLaunch
#include "OVR/OpenVR/IVRApplications__GetApplicationAutoLaunch.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRApplications/_GetApplicationAutoLaunch..ctor
OVR::OpenVR::IVRApplications::_GetApplicationAutoLaunch* OVR::OpenVR::IVRApplications::_GetApplicationAutoLaunch::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRApplications::_GetApplicationAutoLaunch*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRApplications/_GetApplicationAutoLaunch", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_GetApplicationAutoLaunch.Invoke
bool OVR::OpenVR::IVRApplications::_GetApplicationAutoLaunch::Invoke(::CsString* pchAppKey) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Invoke", pchAppKey));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_GetApplicationAutoLaunch.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRApplications::_GetApplicationAutoLaunch::BeginInvoke(::CsString* pchAppKey, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pchAppKey, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_GetApplicationAutoLaunch.EndInvoke
bool OVR::OpenVR::IVRApplications::_GetApplicationAutoLaunch::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EndInvoke", result));
}
