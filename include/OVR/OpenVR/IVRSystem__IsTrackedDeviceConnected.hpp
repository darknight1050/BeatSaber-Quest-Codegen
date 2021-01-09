// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
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
  // Autogenerated type: OVR.OpenVR.IVRSystem/_IsTrackedDeviceConnected
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D840D8
  class IVRSystem::_IsTrackedDeviceConnected : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _IsTrackedDeviceConnected
    _IsTrackedDeviceConnected() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1917460
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_IsTrackedDeviceConnected* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSystem::_IsTrackedDeviceConnected::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_IsTrackedDeviceConnected*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.UInt32 unDeviceIndex)
    // Offset: 0x1917474
    bool Invoke(uint unDeviceIndex);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, System.AsyncCallback callback, System.Object object)
    // Offset: 0x19176EC
    System::IAsyncResult* BeginInvoke(uint unDeviceIndex, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x1917778
    bool EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_IsTrackedDeviceConnected
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_IsTrackedDeviceConnected*, "OVR.OpenVR", "IVRSystem/_IsTrackedDeviceConnected");
#pragma pack(pop)
