// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.TrackedDevicePose_t
#include "OVR/OpenVR/TrackedDevicePose_t.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x5E
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.InputPoseActionData_t
  // [] Offset: FFFFFFFF
  struct InputPoseActionData_t/*, public System::ValueType*/ {
    public:
    // public System.Boolean bActive
    // Size: 0x1
    // Offset: 0x0
    bool bActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: bActive and: activeOrigin
    char __padding0[0x7] = {};
    // public System.UInt64 activeOrigin
    // Size: 0x8
    // Offset: 0x8
    uint64_t activeOrigin;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public OVR.OpenVR.TrackedDevicePose_t pose
    // Size: 0x4E
    // Offset: 0x10
    OVR::OpenVR::TrackedDevicePose_t pose;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::TrackedDevicePose_t) == 0x4E);
    // Creating value type constructor for type: InputPoseActionData_t
    constexpr InputPoseActionData_t(bool bActive_ = {}, uint64_t activeOrigin_ = {}, OVR::OpenVR::TrackedDevicePose_t pose_ = {}) noexcept : bActive{bActive_}, activeOrigin{activeOrigin_}, pose{pose_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // OVR.OpenVR.InputPoseActionData_t
  #pragma pack(pop)
  static check_size<sizeof(InputPoseActionData_t), 16 + sizeof(OVR::OpenVR::TrackedDevicePose_t)> __OVR_OpenVR_InputPoseActionData_tSizeCheck;
  static_assert(sizeof(InputPoseActionData_t) == 0x5E);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::InputPoseActionData_t, "OVR.OpenVR", "InputPoseActionData_t");
