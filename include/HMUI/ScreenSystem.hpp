// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: Screen
  class Screen;
  // Forward declaring type: TitleViewController
  class TitleViewController;
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ScreenBackButtonAnimationController
  class ScreenBackButtonAnimationController;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.ScreenSystem
  class ScreenSystem : public UnityEngine::MonoBehaviour {
    public:
    // private HMUI.Screen _mainScreen
    // Offset: 0x18
    HMUI::Screen* mainScreen;
    // private HMUI.Screen _leftScreen
    // Offset: 0x20
    HMUI::Screen* leftScreen;
    // private HMUI.Screen _rightScreen
    // Offset: 0x28
    HMUI::Screen* rightScreen;
    // private HMUI.Screen _bottomScreen
    // Offset: 0x30
    HMUI::Screen* bottomScreen;
    // private HMUI.Screen _topScreen
    // Offset: 0x38
    HMUI::Screen* topScreen;
    // private UnityEngine.UI.Button _backButton
    // Offset: 0x40
    UnityEngine::UI::Button* backButton;
    // private ScreenBackButtonAnimationController _screenBackButtonAnimationController
    // Offset: 0x48
    GlobalNamespace::ScreenBackButtonAnimationController* screenBackButtonAnimationController;
    // private HMUI.TitleViewController _titleViewController
    // Offset: 0x50
    HMUI::TitleViewController* titleViewController;
    // private System.Action backButtonWasPressedEvent
    // Offset: 0x58
    System::Action* backButtonWasPressedEvent;
    // private System.Boolean _backButtonIsVisible
    // Offset: 0x60
    bool backButtonIsVisible;
    // private HMUI.ButtonBinder _buttonBinder
    // Offset: 0x68
    HMUI::ButtonBinder* buttonBinder;
    // public HMUI.TitleViewController get_titleViewController()
    // Offset: 0x103DFF8
    HMUI::TitleViewController* get_titleViewController();
    // public HMUI.Screen get_mainScreen()
    // Offset: 0x103E000
    HMUI::Screen* get_mainScreen();
    // public HMUI.Screen get_leftScreen()
    // Offset: 0x103E008
    HMUI::Screen* get_leftScreen();
    // public HMUI.Screen get_rightScreen()
    // Offset: 0x103E010
    HMUI::Screen* get_rightScreen();
    // public HMUI.Screen get_bottomScreen()
    // Offset: 0x103E018
    HMUI::Screen* get_bottomScreen();
    // public HMUI.Screen get_topScreen()
    // Offset: 0x103E020
    HMUI::Screen* get_topScreen();
    // public System.Void add_backButtonWasPressedEvent(System.Action value)
    // Offset: 0x103E028
    void add_backButtonWasPressedEvent(System::Action* value);
    // public System.Void remove_backButtonWasPressedEvent(System.Action value)
    // Offset: 0x103E0CC
    void remove_backButtonWasPressedEvent(System::Action* value);
    // private System.Void Awake()
    // Offset: 0x103E170
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0x103E234
    void OnDestroy();
    // public System.Void BackButtonPush(System.Boolean show)
    // Offset: 0x103E250
    void BackButtonPush(bool show);
    // public System.Void BackButtonPop(System.Boolean show)
    // Offset: 0x103E34C
    void BackButtonPop(bool show);
    // private System.Void <Awake>b__25_0()
    // Offset: 0x103E3CC
    void $Awake$b__25_0();
    // public System.Void .ctor()
    // Offset: 0x103E3C4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ScreenSystem* New_ctor();
  }; // HMUI.ScreenSystem
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::ScreenSystem*, "HMUI", "ScreenSystem");
#pragma pack(pop)
