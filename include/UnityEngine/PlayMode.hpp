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
  // Autogenerated type: UnityEngine.PlayMode
  // [] Offset: FFFFFFFF
  struct PlayMode/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PlayMode
    constexpr PlayMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.PlayMode StopSameLayer
    static constexpr const int StopSameLayer = 0;
    // Get static field: static public UnityEngine.PlayMode StopSameLayer
    static UnityEngine::PlayMode _get_StopSameLayer();
    // Set static field: static public UnityEngine.PlayMode StopSameLayer
    static void _set_StopSameLayer(UnityEngine::PlayMode value);
    // static field const value: static public UnityEngine.PlayMode StopAll
    static constexpr const int StopAll = 4;
    // Get static field: static public UnityEngine.PlayMode StopAll
    static UnityEngine::PlayMode _get_StopAll();
    // Set static field: static public UnityEngine.PlayMode StopAll
    static void _set_StopAll(UnityEngine::PlayMode value);
  }; // UnityEngine.PlayMode
  #pragma pack(pop)
  static check_size<sizeof(PlayMode), 0 + sizeof(int)> __UnityEngine_PlayModeSizeCheck;
  static_assert(sizeof(PlayMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayMode, "UnityEngine", "PlayMode");
