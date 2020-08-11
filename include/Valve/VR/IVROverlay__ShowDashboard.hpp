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
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVROverlay/_ShowDashboard
  class IVROverlay::_ShowDashboard : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16AD098
    static IVROverlay::_ShowDashboard* New_ctor(::CsObject* object, System::IntPtr method);
    // public System.Void Invoke(System.String pchOverlayToShow)
    // Offset: 0x16AD0AC
    void Invoke(::CsString* pchOverlayToShow);
    // public System.IAsyncResult BeginInvoke(System.String pchOverlayToShow, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16AD464
    System::IAsyncResult* BeginInvoke(::CsString* pchOverlayToShow, System::AsyncCallback* callback, ::CsObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x16AD488
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_ShowDashboard
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_ShowDashboard*, "Valve.VR", "IVROverlay/_ShowDashboard");
#pragma pack(pop)
