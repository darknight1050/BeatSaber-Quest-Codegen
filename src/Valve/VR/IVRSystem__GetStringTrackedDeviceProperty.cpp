// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem/_GetStringTrackedDeviceProperty
#include "Valve/VR/IVRSystem__GetStringTrackedDeviceProperty.hpp"
// Including type: Valve.VR.ETrackedDeviceProperty
#include "Valve/VR/ETrackedDeviceProperty.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
// Including type: Valve.VR.ETrackedPropertyError
#include "Valve/VR/ETrackedPropertyError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRSystem/_GetStringTrackedDeviceProperty..ctor
Valve::VR::IVRSystem::_GetStringTrackedDeviceProperty* Valve::VR::IVRSystem::_GetStringTrackedDeviceProperty::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRSystem::_GetStringTrackedDeviceProperty*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRSystem/_GetStringTrackedDeviceProperty", object, method));
}
// Autogenerated method: Valve.VR.IVRSystem/_GetStringTrackedDeviceProperty.Invoke
uint Valve::VR::IVRSystem::_GetStringTrackedDeviceProperty::Invoke(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, System::Text::StringBuilder* pchValue, uint unBufferSize, Valve::VR::ETrackedPropertyError& pError) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "Invoke", unDeviceIndex, prop, pchValue, unBufferSize, pError));
}
// Autogenerated method: Valve.VR.IVRSystem/_GetStringTrackedDeviceProperty.BeginInvoke
System::IAsyncResult* Valve::VR::IVRSystem::_GetStringTrackedDeviceProperty::BeginInvoke(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, System::Text::StringBuilder* pchValue, uint unBufferSize, Valve::VR::ETrackedPropertyError& pError, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", unDeviceIndex, prop, pchValue, unBufferSize, pError, callback, object));
}
// Autogenerated method: Valve.VR.IVRSystem/_GetStringTrackedDeviceProperty.EndInvoke
uint Valve::VR::IVRSystem::_GetStringTrackedDeviceProperty::EndInvoke(Valve::VR::ETrackedPropertyError& pError, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "EndInvoke", pError, result));
}
