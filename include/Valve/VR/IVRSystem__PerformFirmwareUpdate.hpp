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
  // Forward declaring type: EVRFirmwareError
  struct EVRFirmwareError;
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
  // Autogenerated type: Valve.VR.IVRSystem/_PerformFirmwareUpdate
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CE5720
  class IVRSystem::_PerformFirmwareUpdate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _PerformFirmwareUpdate
    _PerformFirmwareUpdate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1A9BE58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_PerformFirmwareUpdate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_PerformFirmwareUpdate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_PerformFirmwareUpdate*, creationType>(object, method)));
    }
    // public Valve.VR.EVRFirmwareError Invoke(System.UInt32 unDeviceIndex)
    // Offset: 0x1A9BE68
    Valve::VR::EVRFirmwareError Invoke_NEW(uint unDeviceIndex);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1A9C0D0
    System::IAsyncResult* BeginInvoke_NEW(uint unDeviceIndex, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRFirmwareError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1A9C15C
    Valve::VR::EVRFirmwareError EndInvoke_NEW(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_PerformFirmwareUpdate
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_PerformFirmwareUpdate*, "Valve.VR", "IVRSystem/_PerformFirmwareUpdate");
