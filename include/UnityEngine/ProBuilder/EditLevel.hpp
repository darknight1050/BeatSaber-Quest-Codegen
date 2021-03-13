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
  // Autogenerated type: UnityEngine.ProBuilder.EditLevel
  // [] Offset: FFFFFFFF
  struct EditLevel/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EditLevel
    constexpr EditLevel(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ProBuilder.EditLevel Top
    static constexpr const int Top = 0;
    // Get static field: static public UnityEngine.ProBuilder.EditLevel Top
    static UnityEngine::ProBuilder::EditLevel _get_Top();
    // Set static field: static public UnityEngine.ProBuilder.EditLevel Top
    static void _set_Top(UnityEngine::ProBuilder::EditLevel value);
    // static field const value: static public UnityEngine.ProBuilder.EditLevel Geometry
    static constexpr const int Geometry = 1;
    // Get static field: static public UnityEngine.ProBuilder.EditLevel Geometry
    static UnityEngine::ProBuilder::EditLevel _get_Geometry();
    // Set static field: static public UnityEngine.ProBuilder.EditLevel Geometry
    static void _set_Geometry(UnityEngine::ProBuilder::EditLevel value);
    // static field const value: static public UnityEngine.ProBuilder.EditLevel Texture
    static constexpr const int Texture = 2;
    // Get static field: static public UnityEngine.ProBuilder.EditLevel Texture
    static UnityEngine::ProBuilder::EditLevel _get_Texture();
    // Set static field: static public UnityEngine.ProBuilder.EditLevel Texture
    static void _set_Texture(UnityEngine::ProBuilder::EditLevel value);
    // static field const value: static public UnityEngine.ProBuilder.EditLevel Plugin
    static constexpr const int Plugin = 3;
    // Get static field: static public UnityEngine.ProBuilder.EditLevel Plugin
    static UnityEngine::ProBuilder::EditLevel _get_Plugin();
    // Set static field: static public UnityEngine.ProBuilder.EditLevel Plugin
    static void _set_Plugin(UnityEngine::ProBuilder::EditLevel value);
  }; // UnityEngine.ProBuilder.EditLevel
  #pragma pack(pop)
  static check_size<sizeof(EditLevel), 0 + sizeof(int)> __UnityEngine_ProBuilder_EditLevelSizeCheck;
  static_assert(sizeof(EditLevel) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::EditLevel, "UnityEngine.ProBuilder", "EditLevel");
