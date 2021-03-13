// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.HmdVector3_t
  // [] Offset: FFFFFFFF
  struct HmdVector3_t/*, public System::ValueType*/ {
    public:
    // public System.Single v0
    // Size: 0x4
    // Offset: 0x0
    float v0;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single v1
    // Size: 0x4
    // Offset: 0x4
    float v1;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single v2
    // Size: 0x4
    // Offset: 0x8
    float v2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: HmdVector3_t
    constexpr HmdVector3_t(float v0_ = {}, float v1_ = {}, float v2_ = {}) noexcept : v0{v0_}, v1{v1_}, v2{v2_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // OVR.OpenVR.HmdVector3_t
  #pragma pack(pop)
  static check_size<sizeof(HmdVector3_t), 8 + sizeof(float)> __OVR_OpenVR_HmdVector3_tSizeCheck;
  static_assert(sizeof(HmdVector3_t) == 0xC);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::HmdVector3_t, "OVR.OpenVR", "HmdVector3_t");
