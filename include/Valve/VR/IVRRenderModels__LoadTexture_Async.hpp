// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVRRenderModels
#include "Valve/VR/IVRRenderModels.hpp"
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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRRenderModelError
  struct EVRRenderModelError;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRRenderModels/_LoadTexture_Async
  class IVRRenderModels::_LoadTexture_Async : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16B2858
    static IVRRenderModels::_LoadTexture_Async* New_ctor(::CsObject* object, System::IntPtr method);
    // public Valve.VR.EVRRenderModelError Invoke(System.Int32 textureId, System.IntPtr ppTexture)
    // Offset: 0x16B286C
    Valve::VR::EVRRenderModelError Invoke(int textureId, System::IntPtr& ppTexture);
    // public System.IAsyncResult BeginInvoke(System.Int32 textureId, System.IntPtr ppTexture, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16B2AFC
    System::IAsyncResult* BeginInvoke(int textureId, System::IntPtr& ppTexture, System::AsyncCallback* callback, ::CsObject* object);
    // public Valve.VR.EVRRenderModelError EndInvoke(System.IntPtr ppTexture, System.IAsyncResult result)
    // Offset: 0x16B2BB0
    Valve::VR::EVRRenderModelError EndInvoke(System::IntPtr& ppTexture, System::IAsyncResult* result);
  }; // Valve.VR.IVRRenderModels/_LoadTexture_Async
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRRenderModels::_LoadTexture_Async*, "Valve.VR", "IVRRenderModels/_LoadTexture_Async");
#pragma pack(pop)
