// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRRenderModels
#include "OVR/OpenVR/IVRRenderModels.hpp"
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
  // Autogenerated type: OVR.OpenVR.IVRRenderModels/_FreeTextureD3D11
  class IVRRenderModels::_FreeTextureD3D11 : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1603C4C
    static IVRRenderModels::_FreeTextureD3D11* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.IntPtr pD3D11Texture2D)
    // Offset: 0x1603C60
    void Invoke(System::IntPtr pD3D11Texture2D);
    // public System.IAsyncResult BeginInvoke(System.IntPtr pD3D11Texture2D, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1603EC0
    System::IAsyncResult* BeginInvoke(System::IntPtr pD3D11Texture2D, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1603F4C
    void EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRRenderModels/_FreeTextureD3D11
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRRenderModels::_FreeTextureD3D11*, "OVR.OpenVR", "IVRRenderModels/_FreeTextureD3D11");
#pragma pack(pop)
