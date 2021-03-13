// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRRenderModels
#include "Valve/VR/IVRRenderModels.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRRenderModelError
  struct EVRRenderModelError;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRRenderModels/_LoadRenderModel_Async
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CE66E8
  class IVRRenderModels::_LoadRenderModel_Async : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _LoadRenderModel_Async
    _LoadRenderModel_Async() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1A8CC34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRRenderModels::_LoadRenderModel_Async* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRRenderModels::_LoadRenderModel_Async::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRRenderModels::_LoadRenderModel_Async*, creationType>(object, method)));
    }
    // public Valve.VR.EVRRenderModelError Invoke(System.String pchRenderModelName, ref System.IntPtr ppRenderModel)
    // Offset: 0x1A8CC44
    Valve::VR::EVRRenderModelError Invoke_NEW(::Il2CppString* pchRenderModelName, System::IntPtr& ppRenderModel);
    // public System.IAsyncResult BeginInvoke(System.String pchRenderModelName, ref System.IntPtr ppRenderModel, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1A8D034
    System::IAsyncResult* BeginInvoke_NEW(::Il2CppString* pchRenderModelName, System::IntPtr& ppRenderModel, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRRenderModelError EndInvoke(ref System.IntPtr ppRenderModel, System.IAsyncResult result)
    // Offset: 0x1A8D0D0
    Valve::VR::EVRRenderModelError EndInvoke_NEW(System::IntPtr& ppRenderModel, System::IAsyncResult* result);
  }; // Valve.VR.IVRRenderModels/_LoadRenderModel_Async
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRRenderModels::_LoadRenderModel_Async*, "Valve.VR", "IVRRenderModels/_LoadRenderModel_Async");
