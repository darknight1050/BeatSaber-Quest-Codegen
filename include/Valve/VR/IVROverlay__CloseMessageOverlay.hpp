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
// Completed il2cpp-utils forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVROverlay/_CloseMessageOverlay
  class IVROverlay::_CloseMessageOverlay : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15F1214
    static IVROverlay::_CloseMessageOverlay* New_ctor(::CsObject* object, System::IntPtr method);
    // public System.Void Invoke()
    // Offset: 0x15F1228
    void Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x15F1434
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::CsObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x15F1460
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_CloseMessageOverlay
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_CloseMessageOverlay*, "Valve.VR", "IVROverlay/_CloseMessageOverlay");
#pragma pack(pop)
