// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem/_GetProjectionRaw
#include "OVR/OpenVR/IVRSystem__GetProjectionRaw.hpp"
// Including type: OVR.OpenVR.EVREye
#include "OVR/OpenVR/EVREye.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetProjectionRaw..ctor
OVR::OpenVR::IVRSystem::_GetProjectionRaw* OVR::OpenVR::IVRSystem::_GetProjectionRaw::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRSystem::_GetProjectionRaw*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRSystem/_GetProjectionRaw", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetProjectionRaw.Invoke
void OVR::OpenVR::IVRSystem::_GetProjectionRaw::Invoke(OVR::OpenVR::EVREye eEye, float& pfLeft, float& pfRight, float& pfTop, float& pfBottom) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", eEye, pfLeft, pfRight, pfTop, pfBottom));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetProjectionRaw.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRSystem::_GetProjectionRaw::BeginInvoke(OVR::OpenVR::EVREye eEye, float& pfLeft, float& pfRight, float& pfTop, float& pfBottom, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", eEye, pfLeft, pfRight, pfTop, pfBottom, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetProjectionRaw.EndInvoke
void OVR::OpenVR::IVRSystem::_GetProjectionRaw::EndInvoke(float& pfLeft, float& pfRight, float& pfTop, float& pfBottom, System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", pfLeft, pfRight, pfTop, pfBottom, result));
}
