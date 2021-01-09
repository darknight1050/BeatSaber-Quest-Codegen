// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRInput
#include "OVR/OpenVR/IVRInput.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRInputError
  struct EVRInputError;
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
  // Autogenerated type: OVR.OpenVR.IVRInput/_GetActionHandle
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D85618
  class IVRInput::_GetActionHandle : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetActionHandle
    _GetActionHandle() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1863068
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRInput::_GetActionHandle* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRInput::_GetActionHandle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRInput::_GetActionHandle*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRInputError Invoke(System.String pchActionName, ref System.UInt64 pHandle)
    // Offset: 0x186307C
    OVR::OpenVR::EVRInputError Invoke(::Il2CppString* pchActionName, uint64_t& pHandle);
    // public System.IAsyncResult BeginInvoke(System.String pchActionName, ref System.UInt64 pHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1863488
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchActionName, uint64_t& pHandle, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRInputError EndInvoke(ref System.UInt64 pHandle, System.IAsyncResult result)
    // Offset: 0x1863524
    OVR::OpenVR::EVRInputError EndInvoke(uint64_t& pHandle, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRInput/_GetActionHandle
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRInput::_GetActionHandle*, "OVR.OpenVR", "IVRInput/_GetActionHandle");
#pragma pack(pop)
