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
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRRenderModels/_RenderModelHasComponent
  class IVRRenderModels::_RenderModelHasComponent : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1621964
    static IVRRenderModels::_RenderModelHasComponent* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(System.String pchRenderModelName, System.String pchComponentName)
    // Offset: 0x1621978
    bool Invoke(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName);
    // public System.IAsyncResult BeginInvoke(System.String pchRenderModelName, System.String pchComponentName, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1621D88
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x1621DB8
    bool EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRRenderModels/_RenderModelHasComponent
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRRenderModels::_RenderModelHasComponent*, "Valve.VR", "IVRRenderModels/_RenderModelHasComponent");
#pragma pack(pop)
