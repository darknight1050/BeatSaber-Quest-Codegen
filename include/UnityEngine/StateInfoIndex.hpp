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
  // Autogenerated type: UnityEngine.StateInfoIndex
  // [] Offset: FFFFFFFF
  struct StateInfoIndex/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: StateInfoIndex
    constexpr StateInfoIndex(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.StateInfoIndex CurrentState
    static constexpr const int CurrentState = 0;
    // Get static field: static public UnityEngine.StateInfoIndex CurrentState
    static UnityEngine::StateInfoIndex _get_CurrentState();
    // Set static field: static public UnityEngine.StateInfoIndex CurrentState
    static void _set_CurrentState(UnityEngine::StateInfoIndex value);
    // static field const value: static public UnityEngine.StateInfoIndex NextState
    static constexpr const int NextState = 1;
    // Get static field: static public UnityEngine.StateInfoIndex NextState
    static UnityEngine::StateInfoIndex _get_NextState();
    // Set static field: static public UnityEngine.StateInfoIndex NextState
    static void _set_NextState(UnityEngine::StateInfoIndex value);
    // static field const value: static public UnityEngine.StateInfoIndex ExitState
    static constexpr const int ExitState = 2;
    // Get static field: static public UnityEngine.StateInfoIndex ExitState
    static UnityEngine::StateInfoIndex _get_ExitState();
    // Set static field: static public UnityEngine.StateInfoIndex ExitState
    static void _set_ExitState(UnityEngine::StateInfoIndex value);
    // static field const value: static public UnityEngine.StateInfoIndex InterruptedState
    static constexpr const int InterruptedState = 3;
    // Get static field: static public UnityEngine.StateInfoIndex InterruptedState
    static UnityEngine::StateInfoIndex _get_InterruptedState();
    // Set static field: static public UnityEngine.StateInfoIndex InterruptedState
    static void _set_InterruptedState(UnityEngine::StateInfoIndex value);
  }; // UnityEngine.StateInfoIndex
  #pragma pack(pop)
  static check_size<sizeof(StateInfoIndex), 0 + sizeof(int)> __UnityEngine_StateInfoIndexSizeCheck;
  static_assert(sizeof(StateInfoIndex) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::StateInfoIndex, "UnityEngine", "StateInfoIndex");
