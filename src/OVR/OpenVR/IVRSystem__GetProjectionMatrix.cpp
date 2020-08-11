// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem/_GetProjectionMatrix
#include "OVR/OpenVR/IVRSystem__GetProjectionMatrix.hpp"
// Including type: OVR.OpenVR.HmdMatrix44_t
#include "OVR/OpenVR/HmdMatrix44_t.hpp"
// Including type: OVR.OpenVR.EVREye
#include "OVR/OpenVR/EVREye.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetProjectionMatrix..ctor
OVR::OpenVR::IVRSystem::_GetProjectionMatrix* OVR::OpenVR::IVRSystem::_GetProjectionMatrix::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRSystem::_GetProjectionMatrix*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRSystem/_GetProjectionMatrix", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetProjectionMatrix.Invoke
OVR::OpenVR::HmdMatrix44_t OVR::OpenVR::IVRSystem::_GetProjectionMatrix::Invoke(OVR::OpenVR::EVREye eEye, float fNearZ, float fFarZ) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::HmdMatrix44_t>(this, "Invoke", eEye, fNearZ, fFarZ));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetProjectionMatrix.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRSystem::_GetProjectionMatrix::BeginInvoke(OVR::OpenVR::EVREye eEye, float fNearZ, float fFarZ, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", eEye, fNearZ, fFarZ, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetProjectionMatrix.EndInvoke
OVR::OpenVR::HmdMatrix44_t OVR::OpenVR::IVRSystem::_GetProjectionMatrix::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::HmdMatrix44_t>(this, "EndInvoke", result));
}
