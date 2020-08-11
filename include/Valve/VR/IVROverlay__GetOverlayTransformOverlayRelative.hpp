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
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVROverlay/_GetOverlayTransformOverlayRelative
  class IVROverlay::_GetOverlayTransformOverlayRelative : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15F861C
    static IVROverlay::_GetOverlayTransformOverlayRelative* New_ctor(::CsObject* object, System::IntPtr method);
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, System.UInt64 ulOverlayHandleParent, Valve.VR.HmdMatrix34_t pmatParentOverlayToOverlayTransform)
    // Offset: 0x15F8630
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint64_t& ulOverlayHandleParent, Valve::VR::HmdMatrix34_t& pmatParentOverlayToOverlayTransform);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.UInt64 ulOverlayHandleParent, Valve.VR.HmdMatrix34_t pmatParentOverlayToOverlayTransform, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15F88C8
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint64_t& ulOverlayHandleParent, Valve::VR::HmdMatrix34_t& pmatParentOverlayToOverlayTransform, System::AsyncCallback* callback, ::CsObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(System.UInt64 ulOverlayHandleParent, Valve.VR.HmdMatrix34_t pmatParentOverlayToOverlayTransform, System.IAsyncResult result)
    // Offset: 0x15F8994
    Valve::VR::EVROverlayError EndInvoke(uint64_t& ulOverlayHandleParent, Valve::VR::HmdMatrix34_t& pmatParentOverlayToOverlayTransform, System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_GetOverlayTransformOverlayRelative
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_GetOverlayTransformOverlayRelative*, "Valve.VR", "IVROverlay/_GetOverlayTransformOverlayRelative");
#pragma pack(pop)
