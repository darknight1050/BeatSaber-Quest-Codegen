// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRCompositor/_GetTrackingSpace
#include "OVR/OpenVR/IVRCompositor__GetTrackingSpace.hpp"
// Including type: OVR.OpenVR.ETrackingUniverseOrigin
#include "OVR/OpenVR/ETrackingUniverseOrigin.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRCompositor/_GetTrackingSpace..ctor
OVR::OpenVR::IVRCompositor::_GetTrackingSpace* OVR::OpenVR::IVRCompositor::_GetTrackingSpace::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRCompositor::_GetTrackingSpace*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRCompositor/_GetTrackingSpace", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRCompositor/_GetTrackingSpace.Invoke
OVR::OpenVR::ETrackingUniverseOrigin OVR::OpenVR::IVRCompositor::_GetTrackingSpace::Invoke() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::ETrackingUniverseOrigin>(this, "Invoke"));
}
// Autogenerated method: OVR.OpenVR.IVRCompositor/_GetTrackingSpace.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRCompositor::_GetTrackingSpace::BeginInvoke(System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRCompositor/_GetTrackingSpace.EndInvoke
OVR::OpenVR::ETrackingUniverseOrigin OVR::OpenVR::IVRCompositor::_GetTrackingSpace::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::ETrackingUniverseOrigin>(this, "EndInvoke", result));
}
