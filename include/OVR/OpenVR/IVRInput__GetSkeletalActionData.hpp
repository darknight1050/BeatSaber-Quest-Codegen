// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRInput
#include "OVR/OpenVR/IVRInput.hpp"
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
  // Forward declaring type: EVRInputError
  struct EVRInputError;
  // Forward declaring type: InputSkeletalActionData_t
  struct InputSkeletalActionData_t;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRInput/_GetSkeletalActionData
  class IVRInput::_GetSkeletalActionData : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1504D0C
    static IVRInput::_GetSkeletalActionData* New_ctor(::CsObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVRInputError Invoke(System.UInt64 action, OVR.OpenVR.InputSkeletalActionData_t pActionData, System.UInt32 unActionDataSize, System.UInt64 ulRestrictToDevice)
    // Offset: 0x1504D20
    OVR::OpenVR::EVRInputError Invoke(uint64_t action, OVR::OpenVR::InputSkeletalActionData_t& pActionData, uint unActionDataSize, uint64_t ulRestrictToDevice);
    // public System.IAsyncResult BeginInvoke(System.UInt64 action, OVR.OpenVR.InputSkeletalActionData_t pActionData, System.UInt32 unActionDataSize, System.UInt64 ulRestrictToDevice, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1504FD0
    System::IAsyncResult* BeginInvoke(uint64_t action, OVR::OpenVR::InputSkeletalActionData_t& pActionData, uint unActionDataSize, uint64_t ulRestrictToDevice, System::AsyncCallback* callback, ::CsObject* object);
    // public OVR.OpenVR.EVRInputError EndInvoke(OVR.OpenVR.InputSkeletalActionData_t pActionData, System.IAsyncResult result)
    // Offset: 0x15050BC
    OVR::OpenVR::EVRInputError EndInvoke(OVR::OpenVR::InputSkeletalActionData_t& pActionData, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRInput/_GetSkeletalActionData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRInput::_GetSkeletalActionData*, "OVR.OpenVR", "IVRInput/_GetSkeletalActionData");
#pragma pack(pop)
