// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRCompositor/_SetExplicitTimingMode
#include "OVR/OpenVR/IVRCompositor__SetExplicitTimingMode.hpp"
// Including type: OVR.OpenVR.EVRCompositorTimingMode
#include "OVR/OpenVR/EVRCompositorTimingMode.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRCompositor/_SetExplicitTimingMode..ctor
OVR::OpenVR::IVRCompositor::_SetExplicitTimingMode* OVR::OpenVR::IVRCompositor::_SetExplicitTimingMode::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRCompositor::_SetExplicitTimingMode*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRCompositor/_SetExplicitTimingMode", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRCompositor/_SetExplicitTimingMode.Invoke
void OVR::OpenVR::IVRCompositor::_SetExplicitTimingMode::Invoke(OVR::OpenVR::EVRCompositorTimingMode eTimingMode) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", eTimingMode));
}
// Autogenerated method: OVR.OpenVR.IVRCompositor/_SetExplicitTimingMode.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRCompositor::_SetExplicitTimingMode::BeginInvoke(OVR::OpenVR::EVRCompositorTimingMode eTimingMode, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", eTimingMode, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRCompositor/_SetExplicitTimingMode.EndInvoke
void OVR::OpenVR::IVRCompositor::_SetExplicitTimingMode::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
