// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EDeviceActivityLevel
  struct EDeviceActivityLevel;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRSystem/_GetTrackedDeviceActivityLevel
  class IVRSystem::_GetTrackedDeviceActivityLevel : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x161621C
    static IVRSystem::_GetTrackedDeviceActivityLevel* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EDeviceActivityLevel Invoke(System.UInt32 unDeviceId)
    // Offset: 0x1616230
    OVR::OpenVR::EDeviceActivityLevel Invoke(uint unDeviceId);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceId, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16164A4
    System::IAsyncResult* BeginInvoke(uint unDeviceId, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EDeviceActivityLevel EndInvoke(System.IAsyncResult result)
    // Offset: 0x1616530
    OVR::OpenVR::EDeviceActivityLevel EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_GetTrackedDeviceActivityLevel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetTrackedDeviceActivityLevel*, "OVR.OpenVR", "IVRSystem/_GetTrackedDeviceActivityLevel");
#pragma pack(pop)
