// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SpriteMeshType
  // [] Offset: FFFFFFFF
  struct SpriteMeshType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SpriteMeshType
    constexpr SpriteMeshType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.SpriteMeshType FullRect
    static constexpr const int FullRect = 0;
    // Get static field: static public UnityEngine.SpriteMeshType FullRect
    static UnityEngine::SpriteMeshType _get_FullRect();
    // Set static field: static public UnityEngine.SpriteMeshType FullRect
    static void _set_FullRect(UnityEngine::SpriteMeshType value);
    // static field const value: static public UnityEngine.SpriteMeshType Tight
    static constexpr const int Tight = 1;
    // Get static field: static public UnityEngine.SpriteMeshType Tight
    static UnityEngine::SpriteMeshType _get_Tight();
    // Set static field: static public UnityEngine.SpriteMeshType Tight
    static void _set_Tight(UnityEngine::SpriteMeshType value);
  }; // UnityEngine.SpriteMeshType
  #pragma pack(pop)
  static check_size<sizeof(SpriteMeshType), 0 + sizeof(int)> __UnityEngine_SpriteMeshTypeSizeCheck;
  static_assert(sizeof(SpriteMeshType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SpriteMeshType, "UnityEngine", "SpriteMeshType");
