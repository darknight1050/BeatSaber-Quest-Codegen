// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRCompositor
#include "OVR/OpenVR/IVRCompositor.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRCompositorError
  struct EVRCompositorError;
  // Forward declaring type: EVREye
  struct EVREye;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRCompositor/_GetMirrorTextureGL
  class IVRCompositor::_GetMirrorTextureGL : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x146C650
    static IVRCompositor::_GetMirrorTextureGL* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVRCompositorError Invoke(OVR.OpenVR.EVREye eEye, System.UInt32 pglTextureId, System.IntPtr pglSharedTextureHandle)
    // Offset: 0x146C664
    OVR::OpenVR::EVRCompositorError Invoke(OVR::OpenVR::EVREye eEye, uint& pglTextureId, System::IntPtr pglSharedTextureHandle);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EVREye eEye, System.UInt32 pglTextureId, System.IntPtr pglSharedTextureHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x146C910
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::EVREye eEye, uint& pglTextureId, System::IntPtr pglSharedTextureHandle, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRCompositorError EndInvoke(System.UInt32 pglTextureId, System.IAsyncResult result)
    // Offset: 0x146C9E0
    OVR::OpenVR::EVRCompositorError EndInvoke(uint& pglTextureId, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/_GetMirrorTextureGL
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRCompositor::_GetMirrorTextureGL*, "OVR.OpenVR", "IVRCompositor/_GetMirrorTextureGL");
#pragma pack(pop)
