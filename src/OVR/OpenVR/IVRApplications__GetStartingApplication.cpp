// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRApplications/_GetStartingApplication
#include "OVR/OpenVR/IVRApplications__GetStartingApplication.hpp"
// Including type: OVR.OpenVR.EVRApplicationError
#include "OVR/OpenVR/EVRApplicationError.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRApplications/_GetStartingApplication..ctor
OVR::OpenVR::IVRApplications::_GetStartingApplication* OVR::OpenVR::IVRApplications::_GetStartingApplication::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRApplications::_GetStartingApplication*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRApplications/_GetStartingApplication", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_GetStartingApplication.Invoke
OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications::_GetStartingApplication::Invoke(System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRApplicationError>(this, "Invoke", pchAppKeyBuffer, unAppKeyBufferLen));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_GetStartingApplication.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRApplications::_GetStartingApplication::BeginInvoke(System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pchAppKeyBuffer, unAppKeyBufferLen, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_GetStartingApplication.EndInvoke
OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications::_GetStartingApplication::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRApplicationError>(this, "EndInvoke", result));
}
