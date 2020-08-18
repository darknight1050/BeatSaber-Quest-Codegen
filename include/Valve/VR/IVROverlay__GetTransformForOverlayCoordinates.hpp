// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: HmdVector2_t
  struct HmdVector2_t;
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVROverlay/_GetTransformForOverlayCoordinates
  class IVROverlay::_GetTransformForOverlayCoordinates : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x156884C
    static IVROverlay::_GetTransformForOverlayCoordinates* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, Valve.VR.ETrackingUniverseOrigin eTrackingOrigin, Valve.VR.HmdVector2_t coordinatesInOverlay, Valve.VR.HmdMatrix34_t pmatTransform)
    // Offset: 0x1568860
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, Valve::VR::ETrackingUniverseOrigin eTrackingOrigin, Valve::VR::HmdVector2_t coordinatesInOverlay, Valve::VR::HmdMatrix34_t& pmatTransform);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, Valve.VR.ETrackingUniverseOrigin eTrackingOrigin, Valve.VR.HmdVector2_t coordinatesInOverlay, Valve.VR.HmdMatrix34_t pmatTransform, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1568B28
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, Valve::VR::ETrackingUniverseOrigin eTrackingOrigin, Valve::VR::HmdVector2_t coordinatesInOverlay, Valve::VR::HmdMatrix34_t& pmatTransform, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(Valve.VR.HmdMatrix34_t pmatTransform, System.IAsyncResult result)
    // Offset: 0x1568C18
    Valve::VR::EVROverlayError EndInvoke(Valve::VR::HmdMatrix34_t& pmatTransform, System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_GetTransformForOverlayCoordinates
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_GetTransformForOverlayCoordinates*, "Valve.VR", "IVROverlay/_GetTransformForOverlayCoordinates");
#pragma pack(pop)
