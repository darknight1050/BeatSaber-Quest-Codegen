// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.ShaderHardwareTier
  // [ObsoleteAttribute] Offset: D91CDC
  struct ShaderHardwareTier/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ShaderHardwareTier
    constexpr ShaderHardwareTier(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.ShaderHardwareTier Tier1
    static constexpr const int Tier1 = 0;
    // Get static field: static public UnityEngine.Rendering.ShaderHardwareTier Tier1
    static UnityEngine::Rendering::ShaderHardwareTier _get_Tier1();
    // Set static field: static public UnityEngine.Rendering.ShaderHardwareTier Tier1
    static void _set_Tier1(UnityEngine::Rendering::ShaderHardwareTier value);
    // static field const value: static public UnityEngine.Rendering.ShaderHardwareTier Tier2
    static constexpr const int Tier2 = 1;
    // Get static field: static public UnityEngine.Rendering.ShaderHardwareTier Tier2
    static UnityEngine::Rendering::ShaderHardwareTier _get_Tier2();
    // Set static field: static public UnityEngine.Rendering.ShaderHardwareTier Tier2
    static void _set_Tier2(UnityEngine::Rendering::ShaderHardwareTier value);
    // static field const value: static public UnityEngine.Rendering.ShaderHardwareTier Tier3
    static constexpr const int Tier3 = 2;
    // Get static field: static public UnityEngine.Rendering.ShaderHardwareTier Tier3
    static UnityEngine::Rendering::ShaderHardwareTier _get_Tier3();
    // Set static field: static public UnityEngine.Rendering.ShaderHardwareTier Tier3
    static void _set_Tier3(UnityEngine::Rendering::ShaderHardwareTier value);
  }; // UnityEngine.Rendering.ShaderHardwareTier
  #pragma pack(pop)
  static check_size<sizeof(ShaderHardwareTier), 0 + sizeof(int)> __UnityEngine_Rendering_ShaderHardwareTierSizeCheck;
  static_assert(sizeof(ShaderHardwareTier) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::ShaderHardwareTier, "UnityEngine.Rendering", "ShaderHardwareTier");
