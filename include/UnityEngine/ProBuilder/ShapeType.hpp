// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.ShapeType
  // [] Offset: FFFFFFFF
  struct ShapeType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ShapeType
    constexpr ShapeType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ProBuilder.ShapeType Cube
    static constexpr const int Cube = 0;
    // Get static field: static public UnityEngine.ProBuilder.ShapeType Cube
    static UnityEngine::ProBuilder::ShapeType _get_Cube();
    // Set static field: static public UnityEngine.ProBuilder.ShapeType Cube
    static void _set_Cube(UnityEngine::ProBuilder::ShapeType value);
    // static field const value: static public UnityEngine.ProBuilder.ShapeType Stair
    static constexpr const int Stair = 1;
    // Get static field: static public UnityEngine.ProBuilder.ShapeType Stair
    static UnityEngine::ProBuilder::ShapeType _get_Stair();
    // Set static field: static public UnityEngine.ProBuilder.ShapeType Stair
    static void _set_Stair(UnityEngine::ProBuilder::ShapeType value);
    // static field const value: static public UnityEngine.ProBuilder.ShapeType CurvedStair
    static constexpr const int CurvedStair = 2;
    // Get static field: static public UnityEngine.ProBuilder.ShapeType CurvedStair
    static UnityEngine::ProBuilder::ShapeType _get_CurvedStair();
    // Set static field: static public UnityEngine.ProBuilder.ShapeType CurvedStair
    static void _set_CurvedStair(UnityEngine::ProBuilder::ShapeType value);
    // static field const value: static public UnityEngine.ProBuilder.ShapeType Prism
    static constexpr const int Prism = 3;
    // Get static field: static public UnityEngine.ProBuilder.ShapeType Prism
    static UnityEngine::ProBuilder::ShapeType _get_Prism();
    // Set static field: static public UnityEngine.ProBuilder.ShapeType Prism
    static void _set_Prism(UnityEngine::ProBuilder::ShapeType value);
    // static field const value: static public UnityEngine.ProBuilder.ShapeType Cylinder
    static constexpr const int Cylinder = 4;
    // Get static field: static public UnityEngine.ProBuilder.ShapeType Cylinder
    static UnityEngine::ProBuilder::ShapeType _get_Cylinder();
    // Set static field: static public UnityEngine.ProBuilder.ShapeType Cylinder
    static void _set_Cylinder(UnityEngine::ProBuilder::ShapeType value);
    // static field const value: static public UnityEngine.ProBuilder.ShapeType Plane
    static constexpr const int Plane = 5;
    // Get static field: static public UnityEngine.ProBuilder.ShapeType Plane
    static UnityEngine::ProBuilder::ShapeType _get_Plane();
    // Set static field: static public UnityEngine.ProBuilder.ShapeType Plane
    static void _set_Plane(UnityEngine::ProBuilder::ShapeType value);
    // static field const value: static public UnityEngine.ProBuilder.ShapeType Door
    static constexpr const int Door = 6;
    // Get static field: static public UnityEngine.ProBuilder.ShapeType Door
    static UnityEngine::ProBuilder::ShapeType _get_Door();
    // Set static field: static public UnityEngine.ProBuilder.ShapeType Door
    static void _set_Door(UnityEngine::ProBuilder::ShapeType value);
    // static field const value: static public UnityEngine.ProBuilder.ShapeType Pipe
    static constexpr const int Pipe = 7;
    // Get static field: static public UnityEngine.ProBuilder.ShapeType Pipe
    static UnityEngine::ProBuilder::ShapeType _get_Pipe();
    // Set static field: static public UnityEngine.ProBuilder.ShapeType Pipe
    static void _set_Pipe(UnityEngine::ProBuilder::ShapeType value);
    // static field const value: static public UnityEngine.ProBuilder.ShapeType Cone
    static constexpr const int Cone = 8;
    // Get static field: static public UnityEngine.ProBuilder.ShapeType Cone
    static UnityEngine::ProBuilder::ShapeType _get_Cone();
    // Set static field: static public UnityEngine.ProBuilder.ShapeType Cone
    static void _set_Cone(UnityEngine::ProBuilder::ShapeType value);
    // static field const value: static public UnityEngine.ProBuilder.ShapeType Sprite
    static constexpr const int Sprite = 9;
    // Get static field: static public UnityEngine.ProBuilder.ShapeType Sprite
    static UnityEngine::ProBuilder::ShapeType _get_Sprite();
    // Set static field: static public UnityEngine.ProBuilder.ShapeType Sprite
    static void _set_Sprite(UnityEngine::ProBuilder::ShapeType value);
    // static field const value: static public UnityEngine.ProBuilder.ShapeType Arch
    static constexpr const int Arch = 10;
    // Get static field: static public UnityEngine.ProBuilder.ShapeType Arch
    static UnityEngine::ProBuilder::ShapeType _get_Arch();
    // Set static field: static public UnityEngine.ProBuilder.ShapeType Arch
    static void _set_Arch(UnityEngine::ProBuilder::ShapeType value);
    // static field const value: static public UnityEngine.ProBuilder.ShapeType Sphere
    static constexpr const int Sphere = 11;
    // Get static field: static public UnityEngine.ProBuilder.ShapeType Sphere
    static UnityEngine::ProBuilder::ShapeType _get_Sphere();
    // Set static field: static public UnityEngine.ProBuilder.ShapeType Sphere
    static void _set_Sphere(UnityEngine::ProBuilder::ShapeType value);
    // static field const value: static public UnityEngine.ProBuilder.ShapeType Torus
    static constexpr const int Torus = 12;
    // Get static field: static public UnityEngine.ProBuilder.ShapeType Torus
    static UnityEngine::ProBuilder::ShapeType _get_Torus();
    // Set static field: static public UnityEngine.ProBuilder.ShapeType Torus
    static void _set_Torus(UnityEngine::ProBuilder::ShapeType value);
  }; // UnityEngine.ProBuilder.ShapeType
  #pragma pack(pop)
  static check_size<sizeof(ShapeType), 0 + sizeof(int)> __UnityEngine_ProBuilder_ShapeTypeSizeCheck;
  static_assert(sizeof(ShapeType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ShapeType, "UnityEngine.ProBuilder", "ShapeType");
