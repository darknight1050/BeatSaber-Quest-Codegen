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
  // Autogenerated type: Valve.VR.IVRCompositor/_GetCurrentGridAlpha
  class IVRCompositor::_GetCurrentGridAlpha : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1558680
    static IVRCompositor::_GetCurrentGridAlpha* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Single Invoke()
    // Offset: 0x1558694
    float Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x15588A8
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Single EndInvoke(System.IAsyncResult result)
    // Offset: 0x15588D4
    float EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_GetCurrentGridAlpha
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_GetCurrentGridAlpha*, "Valve.VR", "IVRCompositor/_GetCurrentGridAlpha");
#pragma pack(pop)
