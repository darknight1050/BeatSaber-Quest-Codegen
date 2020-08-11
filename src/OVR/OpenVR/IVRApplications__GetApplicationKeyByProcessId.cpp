// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRApplications/_GetApplicationKeyByProcessId
#include "OVR/OpenVR/IVRApplications__GetApplicationKeyByProcessId.hpp"
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
// Autogenerated method: OVR.OpenVR.IVRApplications/_GetApplicationKeyByProcessId..ctor
OVR::OpenVR::IVRApplications::_GetApplicationKeyByProcessId* OVR::OpenVR::IVRApplications::_GetApplicationKeyByProcessId::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRApplications::_GetApplicationKeyByProcessId*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRApplications/_GetApplicationKeyByProcessId", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_GetApplicationKeyByProcessId.Invoke
OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications::_GetApplicationKeyByProcessId::Invoke(uint unProcessId, System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRApplicationError>(this, "Invoke", unProcessId, pchAppKeyBuffer, unAppKeyBufferLen));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_GetApplicationKeyByProcessId.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRApplications::_GetApplicationKeyByProcessId::BeginInvoke(uint unProcessId, System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", unProcessId, pchAppKeyBuffer, unAppKeyBufferLen, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_GetApplicationKeyByProcessId.EndInvoke
OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications::_GetApplicationKeyByProcessId::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRApplicationError>(this, "EndInvoke", result));
}
