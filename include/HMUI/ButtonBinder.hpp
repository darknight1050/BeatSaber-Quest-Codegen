// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction
  class UnityAction;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.ButtonBinder
  class ButtonBinder : public ::CsObject {
    public:
    // private System.Collections.Generic.List`1<System.Tuple`2<UnityEngine.UI.Button,UnityEngine.Events.UnityAction>> _bindings
    // Offset: 0x10
    System::Collections::Generic::List_1<System::Tuple_2<UnityEngine::UI::Button*, UnityEngine::Events::UnityAction*>*>* bindings;
    // public System.Void .ctor(UnityEngine.UI.Button button, System.Action action)
    // Offset: 0xEBFDA4
    static ButtonBinder* New_ctor(UnityEngine::UI::Button* button, System::Action* action);
    // public System.Void .ctor(System.Collections.Generic.List`1<System.Tuple`2<UnityEngine.UI.Button,System.Action>> bindingData)
    // Offset: 0xEBFE9C
    static ButtonBinder* New_ctor(System::Collections::Generic::List_1<System::Tuple_2<UnityEngine::UI::Button*, System::Action*>*>* bindingData);
    // private System.Void Init()
    // Offset: 0xEBFD34
    void Init();
    // public System.Void AddBindings(System.Collections.Generic.List`1<System.Tuple`2<UnityEngine.UI.Button,System.Action>> bindingData)
    // Offset: 0xEBFED4
    void AddBindings(System::Collections::Generic::List_1<System::Tuple_2<UnityEngine::UI::Button*, System::Action*>*>* bindingData);
    // public System.Void AddBinding(UnityEngine.UI.Button button, System.Action action)
    // Offset: 0xEBFDEC
    void AddBinding(UnityEngine::UI::Button* button, System::Action* action);
    // public System.Void ClearBindings()
    // Offset: 0xEBFFDC
    void ClearBindings();
    // public System.Void .ctor()
    // Offset: 0xEBFD0C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ButtonBinder* New_ctor();
  }; // HMUI.ButtonBinder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::ButtonBinder*, "HMUI", "ButtonBinder");
#pragma pack(pop)
