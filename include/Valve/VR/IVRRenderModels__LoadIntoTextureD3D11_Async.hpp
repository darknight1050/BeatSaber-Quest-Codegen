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
  // Autogenerated type: Valve.VR.IVRRenderModels/_LoadIntoTextureD3D11_Async
  // [UnmanagedFunctionPointerAttribute] Offset: DD4670
  class IVRRenderModels::_LoadIntoTextureD3D11_Async : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _LoadIntoTextureD3D11_Async
    _LoadIntoTextureD3D11_Async() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C7207C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRRenderModels::_LoadIntoTextureD3D11_Async* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRRenderModels::_LoadIntoTextureD3D11_Async::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRRenderModels::_LoadIntoTextureD3D11_Async*, creationType>(object, method)));
    }
    // public Valve.VR.EVRRenderModelError Invoke(System.Int32 textureId, System.IntPtr pDstTexture)
    // Offset: 0x1C7208C
    Valve::VR::EVRRenderModelError Invoke(int textureId, System::IntPtr pDstTexture);
    // public System.IAsyncResult BeginInvoke(System.Int32 textureId, System.IntPtr pDstTexture, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C72310
    System::IAsyncResult* BeginInvoke(int textureId, System::IntPtr pDstTexture, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRRenderModelError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1C723BC
    Valve::VR::EVRRenderModelError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRRenderModels/_LoadIntoTextureD3D11_Async
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRRenderModels::_LoadIntoTextureD3D11_Async*, "Valve.VR", "IVRRenderModels/_LoadIntoTextureD3D11_Async");
