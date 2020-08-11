// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRRenderModels/_GetComponentButtonMask
#include "OVR/OpenVR/IVRRenderModels__GetComponentButtonMask.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRRenderModels/_GetComponentButtonMask..ctor
OVR::OpenVR::IVRRenderModels::_GetComponentButtonMask* OVR::OpenVR::IVRRenderModels::_GetComponentButtonMask::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRRenderModels::_GetComponentButtonMask*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRRenderModels/_GetComponentButtonMask", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRRenderModels/_GetComponentButtonMask.Invoke
uint64_t OVR::OpenVR::IVRRenderModels::_GetComponentButtonMask::Invoke(::CsString* pchRenderModelName, ::CsString* pchComponentName) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint64_t>(this, "Invoke", pchRenderModelName, pchComponentName));
}
// Autogenerated method: OVR.OpenVR.IVRRenderModels/_GetComponentButtonMask.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRRenderModels::_GetComponentButtonMask::BeginInvoke(::CsString* pchRenderModelName, ::CsString* pchComponentName, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pchRenderModelName, pchComponentName, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRRenderModels/_GetComponentButtonMask.EndInvoke
uint64_t OVR::OpenVR::IVRRenderModels::_GetComponentButtonMask::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint64_t>(this, "EndInvoke", result));
}
