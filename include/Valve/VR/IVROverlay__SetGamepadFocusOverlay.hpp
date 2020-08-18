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
  // Autogenerated type: Valve.VR.IVROverlay/_SetGamepadFocusOverlay
  class IVROverlay::_SetGamepadFocusOverlay : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x156AC1C
    static IVROverlay::_SetGamepadFocusOverlay* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulNewFocusOverlay)
    // Offset: 0x156AC30
    Valve::VR::EVROverlayError Invoke(uint64_t ulNewFocusOverlay);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulNewFocusOverlay, System.AsyncCallback callback, System.Object object)
    // Offset: 0x156AE98
    System::IAsyncResult* BeginInvoke(uint64_t ulNewFocusOverlay, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(System.IAsyncResult result)
    // Offset: 0x156AF24
    Valve::VR::EVROverlayError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_SetGamepadFocusOverlay
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_SetGamepadFocusOverlay*, "Valve.VR", "IVROverlay/_SetGamepadFocusOverlay");
#pragma pack(pop)
