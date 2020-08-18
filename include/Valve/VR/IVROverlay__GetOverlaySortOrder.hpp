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
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVROverlay/_GetOverlaySortOrder
  class IVROverlay::_GetOverlaySortOrder : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1565968
    static IVROverlay::_GetOverlaySortOrder* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, System.UInt32 punSortOrder)
    // Offset: 0x156597C
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint& punSortOrder);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.UInt32 punSortOrder, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1565C00
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint& punSortOrder, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(System.UInt32 punSortOrder, System.IAsyncResult result)
    // Offset: 0x1565CB0
    Valve::VR::EVROverlayError EndInvoke(uint& punSortOrder, System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_GetOverlaySortOrder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_GetOverlaySortOrder*, "Valve.VR", "IVROverlay/_GetOverlaySortOrder");
#pragma pack(pop)
