// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRCompositor/_HideMirrorWindow
#include "Valve/VR/IVRCompositor__HideMirrorWindow.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRCompositor/_HideMirrorWindow..ctor
Valve::VR::IVRCompositor::_HideMirrorWindow* Valve::VR::IVRCompositor::_HideMirrorWindow::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRCompositor::_HideMirrorWindow*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRCompositor/_HideMirrorWindow", object, method));
}
// Autogenerated method: Valve.VR.IVRCompositor/_HideMirrorWindow.Invoke
void Valve::VR::IVRCompositor::_HideMirrorWindow::Invoke() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke"));
}
// Autogenerated method: Valve.VR.IVRCompositor/_HideMirrorWindow.BeginInvoke
System::IAsyncResult* Valve::VR::IVRCompositor::_HideMirrorWindow::BeginInvoke(System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", callback, object));
}
// Autogenerated method: Valve.VR.IVRCompositor/_HideMirrorWindow.EndInvoke
void Valve::VR::IVRCompositor::_HideMirrorWindow::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
