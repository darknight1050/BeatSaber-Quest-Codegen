// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRExtendedDisplay/_GetEyeOutputViewport
#include "OVR/OpenVR/IVRExtendedDisplay__GetEyeOutputViewport.hpp"
// Including type: OVR.OpenVR.EVREye
#include "OVR/OpenVR/EVREye.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRExtendedDisplay/_GetEyeOutputViewport..ctor
OVR::OpenVR::IVRExtendedDisplay::_GetEyeOutputViewport* OVR::OpenVR::IVRExtendedDisplay::_GetEyeOutputViewport::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRExtendedDisplay::_GetEyeOutputViewport*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRExtendedDisplay/_GetEyeOutputViewport", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRExtendedDisplay/_GetEyeOutputViewport.Invoke
void OVR::OpenVR::IVRExtendedDisplay::_GetEyeOutputViewport::Invoke(OVR::OpenVR::EVREye eEye, uint& pnX, uint& pnY, uint& pnWidth, uint& pnHeight) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", eEye, pnX, pnY, pnWidth, pnHeight));
}
// Autogenerated method: OVR.OpenVR.IVRExtendedDisplay/_GetEyeOutputViewport.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRExtendedDisplay::_GetEyeOutputViewport::BeginInvoke(OVR::OpenVR::EVREye eEye, uint& pnX, uint& pnY, uint& pnWidth, uint& pnHeight, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", eEye, pnX, pnY, pnWidth, pnHeight, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRExtendedDisplay/_GetEyeOutputViewport.EndInvoke
void OVR::OpenVR::IVRExtendedDisplay::_GetEyeOutputViewport::EndInvoke(uint& pnX, uint& pnY, uint& pnWidth, uint& pnHeight, System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", pnX, pnY, pnWidth, pnHeight, result));
}
