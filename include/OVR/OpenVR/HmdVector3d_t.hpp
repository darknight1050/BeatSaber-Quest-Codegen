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
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.HmdVector3d_t
  // [] Offset: FFFFFFFF
  struct HmdVector3d_t/*, public System::ValueType*/ {
    public:
    // public System.Double v0
    // Size: 0x8
    // Offset: 0x0
    double v0;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double v1
    // Size: 0x8
    // Offset: 0x8
    double v1;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double v2
    // Size: 0x8
    // Offset: 0x10
    double v2;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // Creating value type constructor for type: HmdVector3d_t
    constexpr HmdVector3d_t(double v0_ = {}, double v1_ = {}, double v2_ = {}) noexcept : v0{v0_}, v1{v1_}, v2{v2_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // OVR.OpenVR.HmdVector3d_t
  #pragma pack(pop)
  static check_size<sizeof(HmdVector3d_t), 16 + sizeof(double)> __OVR_OpenVR_HmdVector3d_tSizeCheck;
  static_assert(sizeof(HmdVector3d_t) == 0x18);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::HmdVector3d_t, "OVR.OpenVR", "HmdVector3d_t");
