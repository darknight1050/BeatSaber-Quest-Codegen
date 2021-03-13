// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.EColorSpace
  // [] Offset: FFFFFFFF
  struct EColorSpace/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EColorSpace
    constexpr EColorSpace(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EColorSpace Auto
    static constexpr const int Auto = 0;
    // Get static field: static public Valve.VR.EColorSpace Auto
    static Valve::VR::EColorSpace _get_Auto();
    // Set static field: static public Valve.VR.EColorSpace Auto
    static void _set_Auto(Valve::VR::EColorSpace value);
    // static field const value: static public Valve.VR.EColorSpace Gamma
    static constexpr const int Gamma = 1;
    // Get static field: static public Valve.VR.EColorSpace Gamma
    static Valve::VR::EColorSpace _get_Gamma();
    // Set static field: static public Valve.VR.EColorSpace Gamma
    static void _set_Gamma(Valve::VR::EColorSpace value);
    // static field const value: static public Valve.VR.EColorSpace Linear
    static constexpr const int Linear = 2;
    // Get static field: static public Valve.VR.EColorSpace Linear
    static Valve::VR::EColorSpace _get_Linear();
    // Set static field: static public Valve.VR.EColorSpace Linear
    static void _set_Linear(Valve::VR::EColorSpace value);
  }; // Valve.VR.EColorSpace
  #pragma pack(pop)
  static check_size<sizeof(EColorSpace), 0 + sizeof(int)> __Valve_VR_EColorSpaceSizeCheck;
  static_assert(sizeof(EColorSpace) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EColorSpace, "Valve.VR", "EColorSpace");
