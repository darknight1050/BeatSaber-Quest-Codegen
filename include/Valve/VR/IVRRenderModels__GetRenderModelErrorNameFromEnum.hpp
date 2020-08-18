// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRRenderModels
#include "Valve/VR/IVRRenderModels.hpp"
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
  // Forward declaring type: EVRRenderModelError
  struct EVRRenderModelError;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRRenderModels/_GetRenderModelErrorNameFromEnum
  class IVRRenderModels::_GetRenderModelErrorNameFromEnum : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x161F7F8
    static IVRRenderModels::_GetRenderModelErrorNameFromEnum* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.IntPtr Invoke(Valve.VR.EVRRenderModelError error)
    // Offset: 0x161F80C
    System::IntPtr Invoke(Valve::VR::EVRRenderModelError error);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EVRRenderModelError error, System.AsyncCallback callback, System.Object object)
    // Offset: 0x161FA80
    System::IAsyncResult* BeginInvoke(Valve::VR::EVRRenderModelError error, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.IntPtr EndInvoke(System.IAsyncResult result)
    // Offset: 0x161FB0C
    System::IntPtr EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRRenderModels/_GetRenderModelErrorNameFromEnum
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRRenderModels::_GetRenderModelErrorNameFromEnum*, "Valve.VR", "IVRRenderModels/_GetRenderModelErrorNameFromEnum");
#pragma pack(pop)
