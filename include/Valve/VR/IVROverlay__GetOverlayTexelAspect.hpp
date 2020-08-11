// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
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
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVROverlay/_GetOverlayTexelAspect
  class IVROverlay::_GetOverlayTexelAspect : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15F6F6C
    static IVROverlay::_GetOverlayTexelAspect* New_ctor(::CsObject* object, System::IntPtr method);
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, System.Single pfTexelAspect)
    // Offset: 0x15F6F80
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, float& pfTexelAspect);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.Single pfTexelAspect, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15F7204
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, float& pfTexelAspect, System::AsyncCallback* callback, ::CsObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(System.Single pfTexelAspect, System.IAsyncResult result)
    // Offset: 0x15F72B4
    Valve::VR::EVROverlayError EndInvoke(float& pfTexelAspect, System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_GetOverlayTexelAspect
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_GetOverlayTexelAspect*, "Valve.VR", "IVROverlay/_GetOverlayTexelAspect");
#pragma pack(pop)
