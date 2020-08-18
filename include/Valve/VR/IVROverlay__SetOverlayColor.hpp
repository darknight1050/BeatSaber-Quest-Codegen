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
  // Autogenerated type: Valve.VR.IVROverlay/_SetOverlayColor
  class IVROverlay::_SetOverlayColor : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x156C098
    static IVROverlay::_SetOverlayColor* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, System.Single fRed, System.Single fGreen, System.Single fBlue)
    // Offset: 0x156C0AC
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, float fRed, float fGreen, float fBlue);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.Single fRed, System.Single fGreen, System.Single fBlue, System.AsyncCallback callback, System.Object object)
    // Offset: 0x156C364
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, float fRed, float fGreen, float fBlue, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(System.IAsyncResult result)
    // Offset: 0x156C43C
    Valve::VR::EVROverlayError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_SetOverlayColor
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_SetOverlayColor*, "Valve.VR", "IVROverlay/_SetOverlayColor");
#pragma pack(pop)
