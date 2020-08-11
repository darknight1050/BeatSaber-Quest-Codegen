// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
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
  // Autogenerated type: Valve.VR.IVROverlay/_GetOverlayErrorNameFromEnum
  class IVROverlay::_GetOverlayErrorNameFromEnum : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15F476C
    static IVROverlay::_GetOverlayErrorNameFromEnum* New_ctor(::CsObject* object, System::IntPtr method);
    // public System.IntPtr Invoke(Valve.VR.EVROverlayError error)
    // Offset: 0x15F4780
    System::IntPtr Invoke(Valve::VR::EVROverlayError error);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EVROverlayError error, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15F49F4
    System::IAsyncResult* BeginInvoke(Valve::VR::EVROverlayError error, System::AsyncCallback* callback, ::CsObject* object);
    // public System.IntPtr EndInvoke(System.IAsyncResult result)
    // Offset: 0x15F4A80
    System::IntPtr EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_GetOverlayErrorNameFromEnum
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_GetOverlayErrorNameFromEnum*, "Valve.VR", "IVROverlay/_GetOverlayErrorNameFromEnum");
#pragma pack(pop)
