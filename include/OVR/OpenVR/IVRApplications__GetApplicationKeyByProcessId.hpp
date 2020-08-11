// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRApplications
#include "OVR/OpenVR/IVRApplications.hpp"
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
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRApplications/_GetApplicationKeyByProcessId
  class IVRApplications::_GetApplicationKeyByProcessId : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xEBC930
    static IVRApplications::_GetApplicationKeyByProcessId* New_ctor(::CsObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVRApplicationError Invoke(System.UInt32 unProcessId, System.Text.StringBuilder pchAppKeyBuffer, System.UInt32 unAppKeyBufferLen)
    // Offset: 0xEACB4C
    OVR::OpenVR::EVRApplicationError Invoke(uint unProcessId, System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unProcessId, System.Text.StringBuilder pchAppKeyBuffer, System.UInt32 unAppKeyBufferLen, System.AsyncCallback callback, System.Object object)
    // Offset: 0xEBC944
    System::IAsyncResult* BeginInvoke(uint unProcessId, System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen, System::AsyncCallback* callback, ::CsObject* object);
    // public OVR.OpenVR.EVRApplicationError EndInvoke(System.IAsyncResult result)
    // Offset: 0xEBC9F4
    OVR::OpenVR::EVRApplicationError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRApplications/_GetApplicationKeyByProcessId
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRApplications::_GetApplicationKeyByProcessId*, "OVR.OpenVR", "IVRApplications/_GetApplicationKeyByProcessId");
#pragma pack(pop)
