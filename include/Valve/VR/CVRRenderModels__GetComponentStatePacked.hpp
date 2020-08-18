// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.CVRRenderModels
#include "Valve/VR/CVRRenderModels.hpp"
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
  // Forward declaring type: VRControllerState_t_Packed
  struct VRControllerState_t_Packed;
  // Forward declaring type: RenderModel_ControllerMode_State_t
  struct RenderModel_ControllerMode_State_t;
  // Forward declaring type: RenderModel_ComponentState_t
  struct RenderModel_ComponentState_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.CVRRenderModels/_GetComponentStatePacked
  class CVRRenderModels::_GetComponentStatePacked : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xF42564
    static CVRRenderModels::_GetComponentStatePacked* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(System.String pchRenderModelName, System.String pchComponentName, Valve.VR.VRControllerState_t_Packed pControllerState, Valve.VR.RenderModel_ControllerMode_State_t pState, Valve.VR.RenderModel_ComponentState_t pComponentState)
    // Offset: 0xF42004
    bool Invoke(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName, Valve::VR::VRControllerState_t_Packed& pControllerState, Valve::VR::RenderModel_ControllerMode_State_t& pState, Valve::VR::RenderModel_ComponentState_t& pComponentState);
    // public System.IAsyncResult BeginInvoke(System.String pchRenderModelName, System.String pchComponentName, Valve.VR.VRControllerState_t_Packed pControllerState, Valve.VR.RenderModel_ControllerMode_State_t pState, Valve.VR.RenderModel_ComponentState_t pComponentState, System.AsyncCallback callback, System.Object object)
    // Offset: 0xF42578
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName, Valve::VR::VRControllerState_t_Packed& pControllerState, Valve::VR::RenderModel_ControllerMode_State_t& pState, Valve::VR::RenderModel_ComponentState_t& pComponentState, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(Valve.VR.VRControllerState_t_Packed pControllerState, Valve.VR.RenderModel_ControllerMode_State_t pState, Valve.VR.RenderModel_ComponentState_t pComponentState, System.IAsyncResult result)
    // Offset: 0xF42668
    bool EndInvoke(Valve::VR::VRControllerState_t_Packed& pControllerState, Valve::VR::RenderModel_ControllerMode_State_t& pState, Valve::VR::RenderModel_ComponentState_t& pComponentState, System::IAsyncResult* result);
  }; // Valve.VR.CVRRenderModels/_GetComponentStatePacked
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRRenderModels::_GetComponentStatePacked*, "Valve.VR", "CVRRenderModels/_GetComponentStatePacked");
#pragma pack(pop)
