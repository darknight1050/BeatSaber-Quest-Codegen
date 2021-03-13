// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.Selectable
#include "UnityEngine/UI/Selectable.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.Selectable/SelectionState
  // [] Offset: FFFFFFFF
  struct Selectable::SelectionState/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SelectionState
    constexpr SelectionState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.UI.Selectable/SelectionState Normal
    static constexpr const int Normal = 0;
    // Get static field: static public UnityEngine.UI.Selectable/SelectionState Normal
    static UnityEngine::UI::Selectable::SelectionState _get_Normal();
    // Set static field: static public UnityEngine.UI.Selectable/SelectionState Normal
    static void _set_Normal(UnityEngine::UI::Selectable::SelectionState value);
    // static field const value: static public UnityEngine.UI.Selectable/SelectionState Highlighted
    static constexpr const int Highlighted = 1;
    // Get static field: static public UnityEngine.UI.Selectable/SelectionState Highlighted
    static UnityEngine::UI::Selectable::SelectionState _get_Highlighted();
    // Set static field: static public UnityEngine.UI.Selectable/SelectionState Highlighted
    static void _set_Highlighted(UnityEngine::UI::Selectable::SelectionState value);
    // static field const value: static public UnityEngine.UI.Selectable/SelectionState Pressed
    static constexpr const int Pressed = 2;
    // Get static field: static public UnityEngine.UI.Selectable/SelectionState Pressed
    static UnityEngine::UI::Selectable::SelectionState _get_Pressed();
    // Set static field: static public UnityEngine.UI.Selectable/SelectionState Pressed
    static void _set_Pressed(UnityEngine::UI::Selectable::SelectionState value);
    // static field const value: static public UnityEngine.UI.Selectable/SelectionState Selected
    static constexpr const int Selected = 3;
    // Get static field: static public UnityEngine.UI.Selectable/SelectionState Selected
    static UnityEngine::UI::Selectable::SelectionState _get_Selected();
    // Set static field: static public UnityEngine.UI.Selectable/SelectionState Selected
    static void _set_Selected(UnityEngine::UI::Selectable::SelectionState value);
    // static field const value: static public UnityEngine.UI.Selectable/SelectionState Disabled
    static constexpr const int Disabled = 4;
    // Get static field: static public UnityEngine.UI.Selectable/SelectionState Disabled
    static UnityEngine::UI::Selectable::SelectionState _get_Disabled();
    // Set static field: static public UnityEngine.UI.Selectable/SelectionState Disabled
    static void _set_Disabled(UnityEngine::UI::Selectable::SelectionState value);
  }; // UnityEngine.UI.Selectable/SelectionState
  #pragma pack(pop)
  static check_size<sizeof(Selectable::SelectionState), 0 + sizeof(int)> __UnityEngine_UI_Selectable_SelectionStateSizeCheck;
  static_assert(sizeof(Selectable::SelectionState) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Selectable::SelectionState, "UnityEngine.UI", "Selectable/SelectionState");
