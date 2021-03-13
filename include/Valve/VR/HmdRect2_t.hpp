// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.HmdVector2_t
#include "Valve/VR/HmdVector2_t.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.HmdRect2_t
  // [] Offset: FFFFFFFF
  struct HmdRect2_t/*, public System::ValueType*/ {
    public:
    // public Valve.VR.HmdVector2_t vTopLeft
    // Size: 0x8
    // Offset: 0x0
    Valve::VR::HmdVector2_t vTopLeft;
    // Field size check
    static_assert(sizeof(Valve::VR::HmdVector2_t) == 0x8);
    // public Valve.VR.HmdVector2_t vBottomRight
    // Size: 0x8
    // Offset: 0x8
    Valve::VR::HmdVector2_t vBottomRight;
    // Field size check
    static_assert(sizeof(Valve::VR::HmdVector2_t) == 0x8);
    // Creating value type constructor for type: HmdRect2_t
    constexpr HmdRect2_t(Valve::VR::HmdVector2_t vTopLeft_ = {}, Valve::VR::HmdVector2_t vBottomRight_ = {}) noexcept : vTopLeft{vTopLeft_}, vBottomRight{vBottomRight_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // Valve.VR.HmdRect2_t
  #pragma pack(pop)
  static check_size<sizeof(HmdRect2_t), 8 + sizeof(Valve::VR::HmdVector2_t)> __Valve_VR_HmdRect2_tSizeCheck;
  static_assert(sizeof(HmdRect2_t) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::HmdRect2_t, "Valve.VR", "HmdRect2_t");
