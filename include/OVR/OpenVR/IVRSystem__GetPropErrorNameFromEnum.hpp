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
  // Forward declaring type: ETrackedPropertyError
  struct ETrackedPropertyError;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRSystem/_GetPropErrorNameFromEnum
  class IVRSystem::_GetPropErrorNameFromEnum : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16A5D1C
    static IVRSystem::_GetPropErrorNameFromEnum* New_ctor(::CsObject* object, System::IntPtr method);
    // public System.IntPtr Invoke(OVR.OpenVR.ETrackedPropertyError error)
    // Offset: 0x16A5D30
    System::IntPtr Invoke(OVR::OpenVR::ETrackedPropertyError error);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.ETrackedPropertyError error, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16A5FA4
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::ETrackedPropertyError error, System::AsyncCallback* callback, ::CsObject* object);
    // public System.IntPtr EndInvoke(System.IAsyncResult result)
    // Offset: 0x16A6030
    System::IntPtr EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_GetPropErrorNameFromEnum
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetPropErrorNameFromEnum*, "OVR.OpenVR", "IVRSystem/_GetPropErrorNameFromEnum");
#pragma pack(pop)
