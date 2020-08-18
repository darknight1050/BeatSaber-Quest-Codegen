// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRCompositor
#include "Valve/VR/IVRCompositor.hpp"
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
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRCompositor/_UnlockGLSharedTextureForAccess
  class IVRCompositor::_UnlockGLSharedTextureForAccess : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x155DCC8
    static IVRCompositor::_UnlockGLSharedTextureForAccess* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.IntPtr glSharedTextureHandle)
    // Offset: 0x155DCDC
    void Invoke(System::IntPtr glSharedTextureHandle);
    // public System.IAsyncResult BeginInvoke(System.IntPtr glSharedTextureHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x155DF3C
    System::IAsyncResult* BeginInvoke(System::IntPtr glSharedTextureHandle, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x155DFC8
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_UnlockGLSharedTextureForAccess
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_UnlockGLSharedTextureForAccess*, "Valve.VR", "IVRCompositor/_UnlockGLSharedTextureForAccess");
#pragma pack(pop)
