// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRCompositor/_GetLastFrameRenderer
#include "Valve/VR/IVRCompositor__GetLastFrameRenderer.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRCompositor/_GetLastFrameRenderer..ctor
Valve::VR::IVRCompositor::_GetLastFrameRenderer* Valve::VR::IVRCompositor::_GetLastFrameRenderer::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRCompositor::_GetLastFrameRenderer*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRCompositor/_GetLastFrameRenderer", object, method));
}
// Autogenerated method: Valve.VR.IVRCompositor/_GetLastFrameRenderer.Invoke
uint Valve::VR::IVRCompositor::_GetLastFrameRenderer::Invoke() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "Invoke"));
}
// Autogenerated method: Valve.VR.IVRCompositor/_GetLastFrameRenderer.BeginInvoke
System::IAsyncResult* Valve::VR::IVRCompositor::_GetLastFrameRenderer::BeginInvoke(System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", callback, object));
}
// Autogenerated method: Valve.VR.IVRCompositor/_GetLastFrameRenderer.EndInvoke
uint Valve::VR::IVRCompositor::_GetLastFrameRenderer::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "EndInvoke", result));
}
