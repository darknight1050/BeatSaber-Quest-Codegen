// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRCompositor
#include "OVR/OpenVR/IVRCompositor.hpp"
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
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRCompositor/_ForceInterleavedReprojectionOn
  class IVRCompositor::_ForceInterleavedReprojectionOn : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x14F908C
    static IVRCompositor::_ForceInterleavedReprojectionOn* New_ctor(::CsObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Boolean bOverride)
    // Offset: 0x14F90A0
    void Invoke(bool bOverride);
    // public System.IAsyncResult BeginInvoke(System.Boolean bOverride, System.AsyncCallback callback, System.Object object)
    // Offset: 0x14F931C
    System::IAsyncResult* BeginInvoke(bool bOverride, System::AsyncCallback* callback, ::CsObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x14F93AC
    void EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/_ForceInterleavedReprojectionOn
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRCompositor::_ForceInterleavedReprojectionOn*, "OVR.OpenVR", "IVRCompositor/_ForceInterleavedReprojectionOn");
#pragma pack(pop)
