// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem/_GetArrayTrackedDeviceProperty
#include "Valve/VR/IVRSystem__GetArrayTrackedDeviceProperty.hpp"
// Including type: Valve.VR.ETrackedDeviceProperty
#include "Valve/VR/ETrackedDeviceProperty.hpp"
// Including type: Valve.VR.ETrackedPropertyError
#include "Valve/VR/ETrackedPropertyError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRSystem/_GetArrayTrackedDeviceProperty..ctor
Valve::VR::IVRSystem::_GetArrayTrackedDeviceProperty* Valve::VR::IVRSystem::_GetArrayTrackedDeviceProperty::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRSystem::_GetArrayTrackedDeviceProperty*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRSystem/_GetArrayTrackedDeviceProperty", object, method));
}
// Autogenerated method: Valve.VR.IVRSystem/_GetArrayTrackedDeviceProperty.Invoke
uint Valve::VR::IVRSystem::_GetArrayTrackedDeviceProperty::Invoke(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, uint propType, System::IntPtr pBuffer, uint unBufferSize, Valve::VR::ETrackedPropertyError& pError) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "Invoke", unDeviceIndex, prop, propType, pBuffer, unBufferSize, pError));
}
// Autogenerated method: Valve.VR.IVRSystem/_GetArrayTrackedDeviceProperty.BeginInvoke
System::IAsyncResult* Valve::VR::IVRSystem::_GetArrayTrackedDeviceProperty::BeginInvoke(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, uint propType, System::IntPtr pBuffer, uint unBufferSize, Valve::VR::ETrackedPropertyError& pError, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", unDeviceIndex, prop, propType, pBuffer, unBufferSize, pError, callback, object));
}
// Autogenerated method: Valve.VR.IVRSystem/_GetArrayTrackedDeviceProperty.EndInvoke
uint Valve::VR::IVRSystem::_GetArrayTrackedDeviceProperty::EndInvoke(Valve::VR::ETrackedPropertyError& pError, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "EndInvoke", pError, result));
}
