// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRRenderModels
#include "OVR/OpenVR/IVRRenderModels.hpp"
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
  // Forward declaring type: EVRRenderModelError
  struct EVRRenderModelError;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRRenderModels/_LoadTexture_Async
  class IVRRenderModels::_LoadTexture_Async : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16990F0
    static IVRRenderModels::_LoadTexture_Async* New_ctor(::CsObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVRRenderModelError Invoke(System.Int32 textureId, System.IntPtr ppTexture)
    // Offset: 0x1699104
    OVR::OpenVR::EVRRenderModelError Invoke(int textureId, System::IntPtr& ppTexture);
    // public System.IAsyncResult BeginInvoke(System.Int32 textureId, System.IntPtr ppTexture, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1699394
    System::IAsyncResult* BeginInvoke(int textureId, System::IntPtr& ppTexture, System::AsyncCallback* callback, ::CsObject* object);
    // public OVR.OpenVR.EVRRenderModelError EndInvoke(System.IntPtr ppTexture, System.IAsyncResult result)
    // Offset: 0x1699448
    OVR::OpenVR::EVRRenderModelError EndInvoke(System::IntPtr& ppTexture, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRRenderModels/_LoadTexture_Async
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRRenderModels::_LoadTexture_Async*, "OVR.OpenVR", "IVRRenderModels/_LoadTexture_Async");
#pragma pack(pop)
