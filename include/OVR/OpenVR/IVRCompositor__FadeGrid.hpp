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
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRCompositor/_FadeGrid
  class IVRCompositor::_FadeGrid : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1469688
    static IVRCompositor::_FadeGrid* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Single fSeconds, System.Boolean bFadeIn)
    // Offset: 0x146969C
    void Invoke(float fSeconds, bool bFadeIn);
    // public System.IAsyncResult BeginInvoke(System.Single fSeconds, System.Boolean bFadeIn, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1469928
    System::IAsyncResult* BeginInvoke(float fSeconds, bool bFadeIn, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x14699D8
    void EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/_FadeGrid
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRCompositor::_FadeGrid*, "OVR.OpenVR", "IVRCompositor/_FadeGrid");
#pragma pack(pop)
