// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem/_ShouldApplicationReduceRenderingWork
#include "Valve/VR/IVRSystem__ShouldApplicationReduceRenderingWork.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRSystem/_ShouldApplicationReduceRenderingWork..ctor
Valve::VR::IVRSystem::_ShouldApplicationReduceRenderingWork* Valve::VR::IVRSystem::_ShouldApplicationReduceRenderingWork::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRSystem::_ShouldApplicationReduceRenderingWork*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRSystem/_ShouldApplicationReduceRenderingWork", object, method));
}
// Autogenerated method: Valve.VR.IVRSystem/_ShouldApplicationReduceRenderingWork.Invoke
bool Valve::VR::IVRSystem::_ShouldApplicationReduceRenderingWork::Invoke() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Invoke"));
}
// Autogenerated method: Valve.VR.IVRSystem/_ShouldApplicationReduceRenderingWork.BeginInvoke
System::IAsyncResult* Valve::VR::IVRSystem::_ShouldApplicationReduceRenderingWork::BeginInvoke(System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", callback, object));
}
// Autogenerated method: Valve.VR.IVRSystem/_ShouldApplicationReduceRenderingWork.EndInvoke
bool Valve::VR::IVRSystem::_ShouldApplicationReduceRenderingWork::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EndInvoke", result));
}
