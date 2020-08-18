// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRChaperoneSetup
#include "Valve/VR/IVRChaperoneSetup.hpp"
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
  // Forward declaring type: HmdQuad_t
  struct HmdQuad_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRChaperoneSetup/_GetWorkingPlayAreaRect
  class IVRChaperoneSetup::_GetWorkingPlayAreaRect : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1553758
    static IVRChaperoneSetup::_GetWorkingPlayAreaRect* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(Valve.VR.HmdQuad_t rect)
    // Offset: 0x155376C
    bool Invoke(Valve::VR::HmdQuad_t& rect);
    // public System.IAsyncResult BeginInvoke(Valve.VR.HmdQuad_t rect, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15539C8
    System::IAsyncResult* BeginInvoke(Valve::VR::HmdQuad_t& rect, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(Valve.VR.HmdQuad_t rect, System.IAsyncResult result)
    // Offset: 0x1553A5C
    bool EndInvoke(Valve::VR::HmdQuad_t& rect, System::IAsyncResult* result);
  }; // Valve.VR.IVRChaperoneSetup/_GetWorkingPlayAreaRect
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRChaperoneSetup::_GetWorkingPlayAreaRect*, "Valve.VR", "IVRChaperoneSetup/_GetWorkingPlayAreaRect");
#pragma pack(pop)
