// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem/_GetEyeToHeadTransform
#include "OVR/OpenVR/IVRSystem__GetEyeToHeadTransform.hpp"
// Including type: OVR.OpenVR.HmdMatrix34_t
#include "OVR/OpenVR/HmdMatrix34_t.hpp"
// Including type: OVR.OpenVR.EVREye
#include "OVR/OpenVR/EVREye.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetEyeToHeadTransform..ctor
OVR::OpenVR::IVRSystem::_GetEyeToHeadTransform* OVR::OpenVR::IVRSystem::_GetEyeToHeadTransform::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRSystem::_GetEyeToHeadTransform*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRSystem/_GetEyeToHeadTransform", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetEyeToHeadTransform.Invoke
OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::IVRSystem::_GetEyeToHeadTransform::Invoke(OVR::OpenVR::EVREye eEye) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::HmdMatrix34_t>(this, "Invoke", eEye));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetEyeToHeadTransform.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRSystem::_GetEyeToHeadTransform::BeginInvoke(OVR::OpenVR::EVREye eEye, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", eEye, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetEyeToHeadTransform.EndInvoke
OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::IVRSystem::_GetEyeToHeadTransform::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::HmdMatrix34_t>(this, "EndInvoke", result));
}
