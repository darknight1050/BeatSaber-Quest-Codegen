// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRRenderModels
#include "OVR/OpenVR/IVRRenderModels.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
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
  // Autogenerated type: OVR.OpenVR.IVRRenderModels/_RenderModelHasComponent
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CE1908
  class IVRRenderModels::_RenderModelHasComponent : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _RenderModelHasComponent
    _RenderModelHasComponent() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EDDF64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRRenderModels::_RenderModelHasComponent* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRRenderModels::_RenderModelHasComponent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRRenderModels::_RenderModelHasComponent*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.String pchRenderModelName, System.String pchComponentName)
    // Offset: 0x1EDDF74
    bool Invoke_NEW(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName);
    // public System.IAsyncResult BeginInvoke(System.String pchRenderModelName, System.String pchComponentName, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EDE368
    System::IAsyncResult* BeginInvoke_NEW(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x1EDE398
    bool EndInvoke_NEW(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRRenderModels/_RenderModelHasComponent
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRRenderModels::_RenderModelHasComponent*, "OVR.OpenVR", "IVRRenderModels/_RenderModelHasComponent");
