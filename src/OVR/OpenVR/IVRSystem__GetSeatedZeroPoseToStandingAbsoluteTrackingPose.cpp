// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose
#include "OVR/OpenVR/IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose.hpp"
// Including type: OVR.OpenVR.HmdMatrix34_t
#include "OVR/OpenVR/HmdMatrix34_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose..ctor
OVR::OpenVR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose* OVR::OpenVR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose.Invoke
OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose::Invoke() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::HmdMatrix34_t>(this, "Invoke"));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose::BeginInvoke(System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose.EndInvoke
OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::HmdMatrix34_t>(this, "EndInvoke", result));
}
