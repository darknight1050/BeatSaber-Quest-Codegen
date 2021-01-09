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
  // Forward declaring type: InputAnalogActionData_t
  struct InputAnalogActionData_t;
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
  // Autogenerated type: OVR.OpenVR.IVRInput/_GetAnalogActionData
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D85668
  class IVRInput::_GetAnalogActionData : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetAnalogActionData
    _GetAnalogActionData() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1863E0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRInput::_GetAnalogActionData* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRInput::_GetAnalogActionData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRInput::_GetAnalogActionData*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRInputError Invoke(System.UInt64 action, ref OVR.OpenVR.InputAnalogActionData_t pActionData, System.UInt32 unActionDataSize, System.UInt64 ulRestrictToDevice)
    // Offset: 0x1863E20
    OVR::OpenVR::EVRInputError Invoke(uint64_t action, OVR::OpenVR::InputAnalogActionData_t& pActionData, uint unActionDataSize, uint64_t ulRestrictToDevice);
    // public System.IAsyncResult BeginInvoke(System.UInt64 action, ref OVR.OpenVR.InputAnalogActionData_t pActionData, System.UInt32 unActionDataSize, System.UInt64 ulRestrictToDevice, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18640D0
    System::IAsyncResult* BeginInvoke(uint64_t action, OVR::OpenVR::InputAnalogActionData_t& pActionData, uint unActionDataSize, uint64_t ulRestrictToDevice, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRInputError EndInvoke(ref OVR.OpenVR.InputAnalogActionData_t pActionData, System.IAsyncResult result)
    // Offset: 0x18641BC
    OVR::OpenVR::EVRInputError EndInvoke(OVR::OpenVR::InputAnalogActionData_t& pActionData, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRInput/_GetAnalogActionData
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRInput::_GetAnalogActionData*, "OVR.OpenVR", "IVRInput/_GetAnalogActionData");
#pragma pack(pop)
