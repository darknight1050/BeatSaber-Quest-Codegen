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
  // Autogenerated type: UnityEngine.AvatarIKHint
  struct AvatarIKHint/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: AvatarIKHint
    constexpr AvatarIKHint(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.AvatarIKHint LeftKnee
    static constexpr const int LeftKnee = 0;
    // Get static field: static public UnityEngine.AvatarIKHint LeftKnee
    static UnityEngine::AvatarIKHint _get_LeftKnee();
    // Set static field: static public UnityEngine.AvatarIKHint LeftKnee
    static void _set_LeftKnee(UnityEngine::AvatarIKHint value);
    // static field const value: static public UnityEngine.AvatarIKHint RightKnee
    static constexpr const int RightKnee = 1;
    // Get static field: static public UnityEngine.AvatarIKHint RightKnee
    static UnityEngine::AvatarIKHint _get_RightKnee();
    // Set static field: static public UnityEngine.AvatarIKHint RightKnee
    static void _set_RightKnee(UnityEngine::AvatarIKHint value);
    // static field const value: static public UnityEngine.AvatarIKHint LeftElbow
    static constexpr const int LeftElbow = 2;
    // Get static field: static public UnityEngine.AvatarIKHint LeftElbow
    static UnityEngine::AvatarIKHint _get_LeftElbow();
    // Set static field: static public UnityEngine.AvatarIKHint LeftElbow
    static void _set_LeftElbow(UnityEngine::AvatarIKHint value);
    // static field const value: static public UnityEngine.AvatarIKHint RightElbow
    static constexpr const int RightElbow = 3;
    // Get static field: static public UnityEngine.AvatarIKHint RightElbow
    static UnityEngine::AvatarIKHint _get_RightElbow();
    // Set static field: static public UnityEngine.AvatarIKHint RightElbow
    static void _set_RightElbow(UnityEngine::AvatarIKHint value);
  }; // UnityEngine.AvatarIKHint
  #pragma pack(pop)
  static check_size<sizeof(AvatarIKHint), 0 + sizeof(int)> __UnityEngine_AvatarIKHintSizeCheck;
  static_assert(sizeof(AvatarIKHint) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AvatarIKHint, "UnityEngine", "AvatarIKHint");
