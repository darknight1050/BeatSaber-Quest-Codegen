// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRInput
#include "OVR/OpenVR/IVRInput.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
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
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRInput/_GetActionOrigins
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CE1C64
  class IVRInput::_GetActionOrigins : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetActionOrigins
    _GetActionOrigins() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1D3AF70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRInput::_GetActionOrigins* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRInput::_GetActionOrigins::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRInput::_GetActionOrigins*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRInputError Invoke(System.UInt64 actionSetHandle, System.UInt64 digitalActionHandle, in System.UInt64[] originsOut, System.UInt32 originOutCount)
    // Offset: 0x1D3AF80
    OVR::OpenVR::EVRInputError Invoke_NEW(uint64_t actionSetHandle, uint64_t digitalActionHandle, ::Array<uint64_t>*& originsOut, uint originOutCount);
    // public System.IAsyncResult BeginInvoke(System.UInt64 actionSetHandle, System.UInt64 digitalActionHandle, in System.UInt64[] originsOut, System.UInt32 originOutCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1D3B238
    System::IAsyncResult* BeginInvoke_NEW(uint64_t actionSetHandle, uint64_t digitalActionHandle, ::Array<uint64_t>*& originsOut, uint originOutCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRInputError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1D3B304
    OVR::OpenVR::EVRInputError EndInvoke_NEW(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRInput/_GetActionOrigins
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRInput::_GetActionOrigins*, "OVR.OpenVR", "IVRInput/_GetActionOrigins");
