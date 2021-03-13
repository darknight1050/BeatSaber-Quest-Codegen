// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.VREvent_Controller_t
  // [] Offset: FFFFFFFF
  struct VREvent_Controller_t/*, public System::ValueType*/ {
    public:
    // public System.UInt32 button
    // Size: 0x4
    // Offset: 0x0
    uint button;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: VREvent_Controller_t
    constexpr VREvent_Controller_t(uint button_ = {}) noexcept : button{button_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return button;
    }
  }; // Valve.VR.VREvent_Controller_t
  #pragma pack(pop)
  static check_size<sizeof(VREvent_Controller_t), 0 + sizeof(uint)> __Valve_VR_VREvent_Controller_tSizeCheck;
  static_assert(sizeof(VREvent_Controller_t) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::VREvent_Controller_t, "Valve.VR", "VREvent_Controller_t");
