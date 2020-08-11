// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
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
  // Forward declaring type: EVRFirmwareError
  struct EVRFirmwareError;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRSystem/_PerformFirmwareUpdate
  class IVRSystem::_PerformFirmwareUpdate : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16A8CFC
    static IVRSystem::_PerformFirmwareUpdate* New_ctor(::CsObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVRFirmwareError Invoke(System.UInt32 unDeviceIndex)
    // Offset: 0x16A8D10
    OVR::OpenVR::EVRFirmwareError Invoke(uint unDeviceIndex);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16A8F84
    System::IAsyncResult* BeginInvoke(uint unDeviceIndex, System::AsyncCallback* callback, ::CsObject* object);
    // public OVR.OpenVR.EVRFirmwareError EndInvoke(System.IAsyncResult result)
    // Offset: 0x16A9010
    OVR::OpenVR::EVRFirmwareError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_PerformFirmwareUpdate
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_PerformFirmwareUpdate*, "OVR.OpenVR", "IVRSystem/_PerformFirmwareUpdate");
#pragma pack(pop)
