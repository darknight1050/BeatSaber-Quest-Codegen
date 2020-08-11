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
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRRenderModelError
  struct EVRRenderModelError;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRRenderModels/_GetRenderModelThumbnailURL
  class IVRRenderModels::_GetRenderModelThumbnailURL : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16B16C0
    static IVRRenderModels::_GetRenderModelThumbnailURL* New_ctor(::CsObject* object, System::IntPtr method);
    // public System.UInt32 Invoke(System.String pchRenderModelName, System.Text.StringBuilder pchThumbnailURL, System.UInt32 unThumbnailURLLen, Valve.VR.EVRRenderModelError peError)
    // Offset: 0x16B16D4
    uint Invoke(::CsString* pchRenderModelName, System::Text::StringBuilder* pchThumbnailURL, uint unThumbnailURLLen, Valve::VR::EVRRenderModelError& peError);
    // public System.IAsyncResult BeginInvoke(System.String pchRenderModelName, System.Text.StringBuilder pchThumbnailURL, System.UInt32 unThumbnailURLLen, Valve.VR.EVRRenderModelError peError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16B1B28
    System::IAsyncResult* BeginInvoke(::CsString* pchRenderModelName, System::Text::StringBuilder* pchThumbnailURL, uint unThumbnailURLLen, Valve::VR::EVRRenderModelError& peError, System::AsyncCallback* callback, ::CsObject* object);
    // public System.UInt32 EndInvoke(Valve.VR.EVRRenderModelError peError, System.IAsyncResult result)
    // Offset: 0x16B1BF0
    uint EndInvoke(Valve::VR::EVRRenderModelError& peError, System::IAsyncResult* result);
  }; // Valve.VR.IVRRenderModels/_GetRenderModelThumbnailURL
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRRenderModels::_GetRenderModelThumbnailURL*, "Valve.VR", "IVRRenderModels/_GetRenderModelThumbnailURL");
#pragma pack(pop)
