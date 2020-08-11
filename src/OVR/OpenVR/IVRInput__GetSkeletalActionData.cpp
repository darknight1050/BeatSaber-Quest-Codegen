// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRInput/_GetSkeletalActionData
#include "OVR/OpenVR/IVRInput__GetSkeletalActionData.hpp"
// Including type: OVR.OpenVR.EVRInputError
#include "OVR/OpenVR/EVRInputError.hpp"
// Including type: OVR.OpenVR.InputSkeletalActionData_t
#include "OVR/OpenVR/InputSkeletalActionData_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRInput/_GetSkeletalActionData..ctor
OVR::OpenVR::IVRInput::_GetSkeletalActionData* OVR::OpenVR::IVRInput::_GetSkeletalActionData::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRInput::_GetSkeletalActionData*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRInput/_GetSkeletalActionData", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRInput/_GetSkeletalActionData.Invoke
OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput::_GetSkeletalActionData::Invoke(uint64_t action, OVR::OpenVR::InputSkeletalActionData_t& pActionData, uint unActionDataSize, uint64_t ulRestrictToDevice) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRInputError>(this, "Invoke", action, pActionData, unActionDataSize, ulRestrictToDevice));
}
// Autogenerated method: OVR.OpenVR.IVRInput/_GetSkeletalActionData.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRInput::_GetSkeletalActionData::BeginInvoke(uint64_t action, OVR::OpenVR::InputSkeletalActionData_t& pActionData, uint unActionDataSize, uint64_t ulRestrictToDevice, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", action, pActionData, unActionDataSize, ulRestrictToDevice, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRInput/_GetSkeletalActionData.EndInvoke
OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput::_GetSkeletalActionData::EndInvoke(OVR::OpenVR::InputSkeletalActionData_t& pActionData, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRInputError>(this, "EndInvoke", pActionData, result));
}
