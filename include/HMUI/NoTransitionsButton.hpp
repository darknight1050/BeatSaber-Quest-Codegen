// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.Button
#include "UnityEngine/UI/Button.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: SelectionState because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.NoTransitionsButton
  class NoTransitionsButton : public UnityEngine::UI::Button {
    public:
    // Nested type: HMUI::NoTransitionsButton::SelectionState
    struct SelectionState;
    // Autogenerated type: HMUI.NoTransitionsButton/SelectionState
    struct SelectionState : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public HMUI.NoTransitionsButton/SelectionState Normal
      static constexpr const int Normal = 0;
      // Get static field: static public HMUI.NoTransitionsButton/SelectionState Normal
      static HMUI::NoTransitionsButton::SelectionState _get_Normal();
      // Set static field: static public HMUI.NoTransitionsButton/SelectionState Normal
      static void _set_Normal(HMUI::NoTransitionsButton::SelectionState value);
      // static field const value: static public HMUI.NoTransitionsButton/SelectionState Highlighted
      static constexpr const int Highlighted = 1;
      // Get static field: static public HMUI.NoTransitionsButton/SelectionState Highlighted
      static HMUI::NoTransitionsButton::SelectionState _get_Highlighted();
      // Set static field: static public HMUI.NoTransitionsButton/SelectionState Highlighted
      static void _set_Highlighted(HMUI::NoTransitionsButton::SelectionState value);
      // static field const value: static public HMUI.NoTransitionsButton/SelectionState Pressed
      static constexpr const int Pressed = 2;
      // Get static field: static public HMUI.NoTransitionsButton/SelectionState Pressed
      static HMUI::NoTransitionsButton::SelectionState _get_Pressed();
      // Set static field: static public HMUI.NoTransitionsButton/SelectionState Pressed
      static void _set_Pressed(HMUI::NoTransitionsButton::SelectionState value);
      // static field const value: static public HMUI.NoTransitionsButton/SelectionState Disabled
      static constexpr const int Disabled = 3;
      // Get static field: static public HMUI.NoTransitionsButton/SelectionState Disabled
      static HMUI::NoTransitionsButton::SelectionState _get_Disabled();
      // Set static field: static public HMUI.NoTransitionsButton/SelectionState Disabled
      static void _set_Disabled(HMUI::NoTransitionsButton::SelectionState value);
      // Creating value type constructor for type: SelectionState
      SelectionState(int value_ = {}) : value{value_} {}
    }; // HMUI.NoTransitionsButton/SelectionState
    // private System.Action`1<HMUI.NoTransitionsButton/SelectionState> selectionStateDidChangeEvent
    // Offset: 0xF8
    System::Action_1<HMUI::NoTransitionsButton::SelectionState>* selectionStateDidChangeEvent;
    // private HMUI.NoTransitionsButton/SelectionState _selectionState
    // Offset: 0x100
    HMUI::NoTransitionsButton::SelectionState selectionState;
    // public HMUI.NoTransitionsButton/SelectionState get_selectionState()
    // Offset: 0x103BED8
    HMUI::NoTransitionsButton::SelectionState get_selectionState();
    // public System.Void add_selectionStateDidChangeEvent(System.Action`1<HMUI.NoTransitionsButton/SelectionState> value)
    // Offset: 0x103BEE0
    void add_selectionStateDidChangeEvent(System::Action_1<HMUI::NoTransitionsButton::SelectionState>* value);
    // public System.Void remove_selectionStateDidChangeEvent(System.Action`1<HMUI.NoTransitionsButton/SelectionState> value)
    // Offset: 0x103BF84
    void remove_selectionStateDidChangeEvent(System::Action_1<HMUI::NoTransitionsButton::SelectionState>* value);
    // protected override System.Void DoStateTransition(UnityEngine.UI.Selectable/SelectionState state, System.Boolean instant)
    // Offset: 0x103C028
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::DoStateTransition(UnityEngine.UI.Selectable/SelectionState state, System.Boolean instant)
    void DoStateTransition(UnityEngine::UI::Selectable::SelectionState state, bool instant);
    // public System.Void .ctor()
    // Offset: 0x103C0BC
    // Implemented from: UnityEngine.UI.Button
    // Base method: System.Void Button::.ctor()
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static NoTransitionsButton* New_ctor();
  }; // HMUI.NoTransitionsButton
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::NoTransitionsButton*, "HMUI", "NoTransitionsButton");
DEFINE_IL2CPP_ARG_TYPE(HMUI::NoTransitionsButton::SelectionState, "HMUI", "NoTransitionsButton/SelectionState");
#pragma pack(pop)
