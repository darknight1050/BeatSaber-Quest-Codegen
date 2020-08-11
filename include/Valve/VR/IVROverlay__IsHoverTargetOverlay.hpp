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
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVROverlay/_IsHoverTargetOverlay
  class IVROverlay::_IsHoverTargetOverlay : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15FAA1C
    static IVROverlay::_IsHoverTargetOverlay* New_ctor(::CsObject* object, System::IntPtr method);
    // public System.Boolean Invoke(System.UInt64 ulOverlayHandle)
    // Offset: 0x15FAA30
    bool Invoke(uint64_t ulOverlayHandle);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15FAC9C
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, System::AsyncCallback* callback, ::CsObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x15FAD28
    bool EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_IsHoverTargetOverlay
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_IsHoverTargetOverlay*, "Valve.VR", "IVROverlay/_IsHoverTargetOverlay");
#pragma pack(pop)
