// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRRenderModels
#include "OVR/OpenVR/IVRRenderModels.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  // Autogenerated type: OVR.OpenVR.IVRRenderModels/_GetRenderModelErrorNameFromEnum
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D853D4
  class IVRRenderModels::_GetRenderModelErrorNameFromEnum : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetRenderModelErrorNameFromEnum
    _GetRenderModelErrorNameFromEnum() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1905DBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRRenderModels::_GetRenderModelErrorNameFromEnum* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRRenderModels::_GetRenderModelErrorNameFromEnum::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRRenderModels::_GetRenderModelErrorNameFromEnum*, creationType>(object, method)));
    }
    // public System.IntPtr Invoke(OVR.OpenVR.EVRRenderModelError error)
    // Offset: 0x1905DD0
    System::IntPtr Invoke(OVR::OpenVR::EVRRenderModelError error);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EVRRenderModelError error, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1906044
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::EVRRenderModelError error, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.IntPtr EndInvoke(System.IAsyncResult result)
    // Offset: 0x19060D0
    System::IntPtr EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRRenderModels/_GetRenderModelErrorNameFromEnum
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRRenderModels::_GetRenderModelErrorNameFromEnum*, "OVR.OpenVR", "IVRRenderModels/_GetRenderModelErrorNameFromEnum");
#pragma pack(pop)
