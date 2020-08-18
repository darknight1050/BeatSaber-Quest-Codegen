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
  // Autogenerated type: Valve.VR.IVRCompositor/_FadeGrid
  class IVRCompositor::_FadeGrid : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15572BC
    static IVRCompositor::_FadeGrid* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Single fSeconds, System.Boolean bFadeIn)
    // Offset: 0x15572D0
    void Invoke(float fSeconds, bool bFadeIn);
    // public System.IAsyncResult BeginInvoke(System.Single fSeconds, System.Boolean bFadeIn, System.AsyncCallback callback, System.Object object)
    // Offset: 0x155755C
    System::IAsyncResult* BeginInvoke(float fSeconds, bool bFadeIn, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x155760C
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_FadeGrid
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_FadeGrid*, "Valve.VR", "IVRCompositor/_FadeGrid");
#pragma pack(pop)
