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
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: InputPoseActionData_t
  struct InputPoseActionData_t;
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
  // Autogenerated type: OVR.OpenVR.IVRInput/_GetPoseActionData
  // [UnmanagedFunctionPointerAttribute] Offset: DCF920
  class IVRInput::_GetPoseActionData : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetPoseActionData
    _GetPoseActionData() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1ECEB70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRInput::_GetPoseActionData* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRInput::_GetPoseActionData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRInput::_GetPoseActionData*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRInputError Invoke(System.UInt64 action, OVR.OpenVR.ETrackingUniverseOrigin eOrigin, System.Single fPredictedSecondsFromNow, ref OVR.OpenVR.InputPoseActionData_t pActionData, System.UInt32 unActionDataSize, System.UInt64 ulRestrictToDevice)
    // Offset: 0x1ECEB80
    OVR::OpenVR::EVRInputError Invoke(uint64_t action, OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float fPredictedSecondsFromNow, OVR::OpenVR::InputPoseActionData_t& pActionData, uint unActionDataSize, uint64_t ulRestrictToDevice);
    // public System.IAsyncResult BeginInvoke(System.UInt64 action, OVR.OpenVR.ETrackingUniverseOrigin eOrigin, System.Single fPredictedSecondsFromNow, ref OVR.OpenVR.InputPoseActionData_t pActionData, System.UInt32 unActionDataSize, System.UInt64 ulRestrictToDevice, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1ECEE74
    System::IAsyncResult* BeginInvoke(uint64_t action, OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float fPredictedSecondsFromNow, OVR::OpenVR::InputPoseActionData_t& pActionData, uint unActionDataSize, uint64_t ulRestrictToDevice, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRInputError EndInvoke(ref OVR.OpenVR.InputPoseActionData_t pActionData, System.IAsyncResult result)
    // Offset: 0x1ECEFA0
    OVR::OpenVR::EVRInputError EndInvoke(OVR::OpenVR::InputPoseActionData_t& pActionData, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRInput/_GetPoseActionData
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRInput::_GetPoseActionData*, "OVR.OpenVR", "IVRInput/_GetPoseActionData");
