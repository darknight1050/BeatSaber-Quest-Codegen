// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
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
  // Forward declaring type: ETrackedDeviceClass
  struct ETrackedDeviceClass;
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
  // Autogenerated type: Valve.VR.IVRSystem/_GetTrackedDeviceClass
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CE5540
  class IVRSystem::_GetTrackedDeviceClass : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetTrackedDeviceClass
    _GetTrackedDeviceClass() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1A9A978
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetTrackedDeviceClass* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_GetTrackedDeviceClass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetTrackedDeviceClass*, creationType>(object, method)));
    }
    // public Valve.VR.ETrackedDeviceClass Invoke(System.UInt32 unDeviceIndex)
    // Offset: 0x1A9A988
    Valve::VR::ETrackedDeviceClass Invoke_NEW(uint unDeviceIndex);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1A9ABF0
    System::IAsyncResult* BeginInvoke_NEW(uint unDeviceIndex, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.ETrackedDeviceClass EndInvoke(System.IAsyncResult result)
    // Offset: 0x1A9AC7C
    Valve::VR::ETrackedDeviceClass EndInvoke_NEW(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetTrackedDeviceClass
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetTrackedDeviceClass*, "Valve.VR", "IVRSystem/_GetTrackedDeviceClass");
