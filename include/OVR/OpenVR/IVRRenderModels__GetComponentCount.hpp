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
  // Autogenerated type: OVR.OpenVR.IVRRenderModels/_GetComponentCount
  // [UnmanagedFunctionPointerAttribute] Offset: DCF5C4
  class IVRRenderModels::_GetComponentCount : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetComponentCount
    _GetComponentCount() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2086578
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRRenderModels::_GetComponentCount* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRRenderModels::_GetComponentCount::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRRenderModels::_GetComponentCount*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(System.String pchRenderModelName)
    // Offset: 0x2086588
    uint Invoke(::Il2CppString* pchRenderModelName);
    // public System.IAsyncResult BeginInvoke(System.String pchRenderModelName, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2086924
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchRenderModelName, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x2086948
    uint EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRRenderModels/_GetComponentCount
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRRenderModels::_GetComponentCount*, "OVR.OpenVR", "IVRRenderModels/_GetComponentCount");
