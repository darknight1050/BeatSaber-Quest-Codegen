// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRCompositor/_SuspendRendering
#include "Valve/VR/IVRCompositor__SuspendRendering.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRCompositor/_SuspendRendering..ctor
Valve::VR::IVRCompositor::_SuspendRendering* Valve::VR::IVRCompositor::_SuspendRendering::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRCompositor::_SuspendRendering*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRCompositor/_SuspendRendering", object, method));
}
// Autogenerated method: Valve.VR.IVRCompositor/_SuspendRendering.Invoke
void Valve::VR::IVRCompositor::_SuspendRendering::Invoke(bool bSuspend) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", bSuspend));
}
// Autogenerated method: Valve.VR.IVRCompositor/_SuspendRendering.BeginInvoke
System::IAsyncResult* Valve::VR::IVRCompositor::_SuspendRendering::BeginInvoke(bool bSuspend, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", bSuspend, callback, object));
}
// Autogenerated method: Valve.VR.IVRCompositor/_SuspendRendering.EndInvoke
void Valve::VR::IVRCompositor::_SuspendRendering::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
