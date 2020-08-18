// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRApplications
#include "OVR/OpenVR/IVRApplications.hpp"
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
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRApplications/_LaunchApplicationFromMimeType
  class IVRApplications::_LaunchApplicationFromMimeType : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xE303B8
    static IVRApplications::_LaunchApplicationFromMimeType* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVRApplicationError Invoke(System.String pchMimeType, System.String pchArgs)
    // Offset: 0xE20368
    OVR::OpenVR::EVRApplicationError Invoke(::Il2CppString* pchMimeType, ::Il2CppString* pchArgs);
    // public System.IAsyncResult BeginInvoke(System.String pchMimeType, System.String pchArgs, System.AsyncCallback callback, System.Object object)
    // Offset: 0xE303CC
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchMimeType, ::Il2CppString* pchArgs, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRApplicationError EndInvoke(System.IAsyncResult result)
    // Offset: 0xE303FC
    OVR::OpenVR::EVRApplicationError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRApplications/_LaunchApplicationFromMimeType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRApplications::_LaunchApplicationFromMimeType*, "OVR.OpenVR", "IVRApplications/_LaunchApplicationFromMimeType");
#pragma pack(pop)
