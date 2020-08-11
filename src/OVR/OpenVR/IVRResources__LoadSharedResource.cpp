// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRResources/_LoadSharedResource
#include "OVR/OpenVR/IVRResources__LoadSharedResource.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRResources/_LoadSharedResource..ctor
OVR::OpenVR::IVRResources::_LoadSharedResource* OVR::OpenVR::IVRResources::_LoadSharedResource::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRResources::_LoadSharedResource*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRResources/_LoadSharedResource", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRResources/_LoadSharedResource.Invoke
uint OVR::OpenVR::IVRResources::_LoadSharedResource::Invoke(::CsString* pchResourceName, ::CsString* pchBuffer, uint unBufferLen) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "Invoke", pchResourceName, pchBuffer, unBufferLen));
}
// Autogenerated method: OVR.OpenVR.IVRResources/_LoadSharedResource.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRResources::_LoadSharedResource::BeginInvoke(::CsString* pchResourceName, ::CsString* pchBuffer, uint unBufferLen, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pchResourceName, pchBuffer, unBufferLen, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRResources/_LoadSharedResource.EndInvoke
uint OVR::OpenVR::IVRResources::_LoadSharedResource::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "EndInvoke", result));
}
