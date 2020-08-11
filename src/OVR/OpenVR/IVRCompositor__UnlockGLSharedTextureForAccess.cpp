// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRCompositor/_UnlockGLSharedTextureForAccess
#include "OVR/OpenVR/IVRCompositor__UnlockGLSharedTextureForAccess.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRCompositor/_UnlockGLSharedTextureForAccess..ctor
OVR::OpenVR::IVRCompositor::_UnlockGLSharedTextureForAccess* OVR::OpenVR::IVRCompositor::_UnlockGLSharedTextureForAccess::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRCompositor::_UnlockGLSharedTextureForAccess*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRCompositor/_UnlockGLSharedTextureForAccess", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRCompositor/_UnlockGLSharedTextureForAccess.Invoke
void OVR::OpenVR::IVRCompositor::_UnlockGLSharedTextureForAccess::Invoke(System::IntPtr glSharedTextureHandle) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", glSharedTextureHandle));
}
// Autogenerated method: OVR.OpenVR.IVRCompositor/_UnlockGLSharedTextureForAccess.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRCompositor::_UnlockGLSharedTextureForAccess::BeginInvoke(System::IntPtr glSharedTextureHandle, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", glSharedTextureHandle, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRCompositor/_UnlockGLSharedTextureForAccess.EndInvoke
void OVR::OpenVR::IVRCompositor::_UnlockGLSharedTextureForAccess::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
