// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem/_GetInt32TrackedDeviceProperty
#include "Valve/VR/IVRSystem__GetInt32TrackedDeviceProperty.hpp"
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
// Autogenerated method: Valve.VR.IVRSystem/_GetInt32TrackedDeviceProperty..ctor
Valve::VR::IVRSystem::_GetInt32TrackedDeviceProperty* Valve::VR::IVRSystem::_GetInt32TrackedDeviceProperty::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRSystem::_GetInt32TrackedDeviceProperty*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRSystem/_GetInt32TrackedDeviceProperty", object, method));
}
// Autogenerated method: Valve.VR.IVRSystem/_GetInt32TrackedDeviceProperty.Invoke
int Valve::VR::IVRSystem::_GetInt32TrackedDeviceProperty::Invoke(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, Valve::VR::ETrackedPropertyError& pError) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Invoke", unDeviceIndex, prop, pError));
}
// Autogenerated method: Valve.VR.IVRSystem/_GetInt32TrackedDeviceProperty.BeginInvoke
System::IAsyncResult* Valve::VR::IVRSystem::_GetInt32TrackedDeviceProperty::BeginInvoke(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, Valve::VR::ETrackedPropertyError& pError, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", unDeviceIndex, prop, pError, callback, object));
}
// Autogenerated method: Valve.VR.IVRSystem/_GetInt32TrackedDeviceProperty.EndInvoke
int Valve::VR::IVRSystem::_GetInt32TrackedDeviceProperty::EndInvoke(Valve::VR::ETrackedPropertyError& pError, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "EndInvoke", pError, result));
}
