// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
  // Forward declaring type: InputFieldView
  class InputFieldView;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: KeyCode
  struct KeyCode;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.UIKeyboard
  // [] Offset: FFFFFFFF
  class UIKeyboard : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: HMUI::UIKeyboard::$$c__DisplayClass12_0
    class $$c__DisplayClass12_0;
    // private UnityEngine.UI.Button _okButton
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::UI::Button* okButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD02110
    // private System.Action okButtonWasPressedEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action* okButtonWasPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD02120
    // private System.Action`1<System.Char> keyWasPressedEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action_1<::Il2CppChar>* keyWasPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<::Il2CppChar>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD02130
    // private System.Action deleteButtonWasPressedEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action* deleteButtonWasPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private readonly HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x38
    HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(HMUI::ButtonBinder*) == 0x8);
    // private HMUI.InputFieldView _currentInput
    // Size: 0x8
    // Offset: 0x40
    HMUI::InputFieldView* currentInput;
    // Field size check
    static_assert(sizeof(HMUI::InputFieldView*) == 0x8);
    // Creating value type constructor for type: UIKeyboard
    UIKeyboard(UnityEngine::UI::Button* okButton_ = {}, System::Action* okButtonWasPressedEvent_ = {}, System::Action_1<::Il2CppChar>* keyWasPressedEvent_ = {}, System::Action* deleteButtonWasPressedEvent_ = {}, HMUI::ButtonBinder* buttonBinder_ = {}, HMUI::InputFieldView* currentInput_ = {}) noexcept : okButton{okButton_}, okButtonWasPressedEvent{okButtonWasPressedEvent_}, keyWasPressedEvent{keyWasPressedEvent_}, deleteButtonWasPressedEvent{deleteButtonWasPressedEvent_}, buttonBinder{buttonBinder_}, currentInput{currentInput_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_okButtonWasPressedEvent(System.Action value)
    // Offset: 0x12065B0
    void add_okButtonWasPressedEvent(System::Action* value);
    // public System.Void remove_okButtonWasPressedEvent(System.Action value)
    // Offset: 0x1206654
    void remove_okButtonWasPressedEvent(System::Action* value);
    // public System.Void add_keyWasPressedEvent(System.Action`1<System.Char> value)
    // Offset: 0x11F4490
    void add_keyWasPressedEvent(System::Action_1<::Il2CppChar>* value);
    // public System.Void remove_keyWasPressedEvent(System.Action`1<System.Char> value)
    // Offset: 0x11F47C0
    void remove_keyWasPressedEvent(System::Action_1<::Il2CppChar>* value);
    // public System.Void add_deleteButtonWasPressedEvent(System.Action value)
    // Offset: 0x11F4534
    void add_deleteButtonWasPressedEvent(System::Action* value);
    // public System.Void remove_deleteButtonWasPressedEvent(System.Action value)
    // Offset: 0x11F4864
    void remove_deleteButtonWasPressedEvent(System::Action* value);
    // protected System.Void Awake()
    // Offset: 0x12066F8
    void Awake();
    // private System.Void HandleKeyPress(UnityEngine.KeyCode keyCode)
    // Offset: 0x12068B8
    void HandleKeyPress(UnityEngine::KeyCode keyCode);
    // private System.Void <Awake>b__12_0()
    // Offset: 0x12069E4
    void $Awake$b__12_0();
    // private System.Void <Awake>b__12_1()
    // Offset: 0x12069F8
    void $Awake$b__12_1();
    // public System.Void .ctor()
    // Offset: 0x120697C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIKeyboard* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::UIKeyboard::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIKeyboard*, creationType>()));
    }
  }; // HMUI.UIKeyboard
  #pragma pack(pop)
  static check_size<sizeof(UIKeyboard), 64 + sizeof(HMUI::InputFieldView*)> __HMUI_UIKeyboardSizeCheck;
  static_assert(sizeof(UIKeyboard) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::UIKeyboard*, "HMUI", "UIKeyboard");
