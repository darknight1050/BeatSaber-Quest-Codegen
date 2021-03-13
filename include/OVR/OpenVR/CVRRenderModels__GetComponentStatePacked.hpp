// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.CVRRenderModels
#include "OVR/OpenVR/CVRRenderModels.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: VRControllerState_t_Packed
  struct VRControllerState_t_Packed;
  // Forward declaring type: RenderModel_ControllerMode_State_t
  struct RenderModel_ControllerMode_State_t;
  // Forward declaring type: RenderModel_ComponentState_t
  struct RenderModel_ComponentState_t;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.CVRRenderModels/_GetComponentStatePacked
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CE1DCC
  class CVRRenderModels::_GetComponentStatePacked : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetComponentStatePacked
    _GetComponentStatePacked() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x13F9040
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRRenderModels::_GetComponentStatePacked* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRRenderModels::_GetComponentStatePacked*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.String pchRenderModelName, System.String pchComponentName, ref OVR.OpenVR.VRControllerState_t_Packed pControllerState, ref OVR.OpenVR.RenderModel_ControllerMode_State_t pState, ref OVR.OpenVR.RenderModel_ComponentState_t pComponentState)
    // Offset: 0x13F8AE0
    bool Invoke_NEW(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName, OVR::OpenVR::VRControllerState_t_Packed& pControllerState, OVR::OpenVR::RenderModel_ControllerMode_State_t& pState, OVR::OpenVR::RenderModel_ComponentState_t& pComponentState);
    // public System.IAsyncResult BeginInvoke(System.String pchRenderModelName, System.String pchComponentName, ref OVR.OpenVR.VRControllerState_t_Packed pControllerState, ref OVR.OpenVR.RenderModel_ControllerMode_State_t pState, ref OVR.OpenVR.RenderModel_ComponentState_t pComponentState, System.AsyncCallback callback, System.Object object)
    // Offset: 0x13F9050
    System::IAsyncResult* BeginInvoke_NEW(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName, OVR::OpenVR::VRControllerState_t_Packed& pControllerState, OVR::OpenVR::RenderModel_ControllerMode_State_t& pState, OVR::OpenVR::RenderModel_ComponentState_t& pComponentState, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref OVR.OpenVR.VRControllerState_t_Packed pControllerState, ref OVR.OpenVR.RenderModel_ControllerMode_State_t pState, ref OVR.OpenVR.RenderModel_ComponentState_t pComponentState, System.IAsyncResult result)
    // Offset: 0x13F9140
    bool EndInvoke_NEW(OVR::OpenVR::VRControllerState_t_Packed& pControllerState, OVR::OpenVR::RenderModel_ControllerMode_State_t& pState, OVR::OpenVR::RenderModel_ComponentState_t& pComponentState, System::IAsyncResult* result);
  }; // OVR.OpenVR.CVRRenderModels/_GetComponentStatePacked
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked*, "OVR.OpenVR", "CVRRenderModels/_GetComponentStatePacked");
