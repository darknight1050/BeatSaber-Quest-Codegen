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
  // Autogenerated type: UnityEngine.Rendering.ShaderPropertyType
  struct ShaderPropertyType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ShaderPropertyType
    constexpr ShaderPropertyType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.ShaderPropertyType Color
    static constexpr const int Color = 0;
    // Get static field: static public UnityEngine.Rendering.ShaderPropertyType Color
    static UnityEngine::Rendering::ShaderPropertyType _get_Color();
    // Set static field: static public UnityEngine.Rendering.ShaderPropertyType Color
    static void _set_Color(UnityEngine::Rendering::ShaderPropertyType value);
    // static field const value: static public UnityEngine.Rendering.ShaderPropertyType Vector
    static constexpr const int Vector = 1;
    // Get static field: static public UnityEngine.Rendering.ShaderPropertyType Vector
    static UnityEngine::Rendering::ShaderPropertyType _get_Vector();
    // Set static field: static public UnityEngine.Rendering.ShaderPropertyType Vector
    static void _set_Vector(UnityEngine::Rendering::ShaderPropertyType value);
    // static field const value: static public UnityEngine.Rendering.ShaderPropertyType Float
    static constexpr const int Float = 2;
    // Get static field: static public UnityEngine.Rendering.ShaderPropertyType Float
    static UnityEngine::Rendering::ShaderPropertyType _get_Float();
    // Set static field: static public UnityEngine.Rendering.ShaderPropertyType Float
    static void _set_Float(UnityEngine::Rendering::ShaderPropertyType value);
    // static field const value: static public UnityEngine.Rendering.ShaderPropertyType Range
    static constexpr const int Range = 3;
    // Get static field: static public UnityEngine.Rendering.ShaderPropertyType Range
    static UnityEngine::Rendering::ShaderPropertyType _get_Range();
    // Set static field: static public UnityEngine.Rendering.ShaderPropertyType Range
    static void _set_Range(UnityEngine::Rendering::ShaderPropertyType value);
    // static field const value: static public UnityEngine.Rendering.ShaderPropertyType Texture
    static constexpr const int Texture = 4;
    // Get static field: static public UnityEngine.Rendering.ShaderPropertyType Texture
    static UnityEngine::Rendering::ShaderPropertyType _get_Texture();
    // Set static field: static public UnityEngine.Rendering.ShaderPropertyType Texture
    static void _set_Texture(UnityEngine::Rendering::ShaderPropertyType value);
  }; // UnityEngine.Rendering.ShaderPropertyType
  #pragma pack(pop)
  static check_size<sizeof(ShaderPropertyType), 0 + sizeof(int)> __UnityEngine_Rendering_ShaderPropertyTypeSizeCheck;
  static_assert(sizeof(ShaderPropertyType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::ShaderPropertyType, "UnityEngine.Rendering", "ShaderPropertyType");
