// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
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
  // Forward declaring type: EVRControllerAxisType
  struct EVRControllerAxisType;
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
  // Autogenerated type: OVR.OpenVR.IVRSystem/_GetControllerAxisTypeNameFromEnum
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CE079C
  class IVRSystem::_GetControllerAxisTypeNameFromEnum : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetControllerAxisTypeNameFromEnum
    _GetControllerAxisTypeNameFromEnum() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EE6C78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetControllerAxisTypeNameFromEnum* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSystem::_GetControllerAxisTypeNameFromEnum::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetControllerAxisTypeNameFromEnum*, creationType>(object, method)));
    }
    // public System.IntPtr Invoke(OVR.OpenVR.EVRControllerAxisType eAxisType)
    // Offset: 0x1EE6C88
    System::IntPtr Invoke_NEW(OVR::OpenVR::EVRControllerAxisType eAxisType);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EVRControllerAxisType eAxisType, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EE6F00
    System::IAsyncResult* BeginInvoke_NEW(OVR::OpenVR::EVRControllerAxisType eAxisType, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.IntPtr EndInvoke(System.IAsyncResult result)
    // Offset: 0x1EE6F8C
    System::IntPtr EndInvoke_NEW(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_GetControllerAxisTypeNameFromEnum
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetControllerAxisTypeNameFromEnum*, "OVR.OpenVR", "IVRSystem/_GetControllerAxisTypeNameFromEnum");
