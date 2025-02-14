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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSchemeColorsToggleGroup
  class ColorSchemeColorsToggleGroup;
  // Forward declaring type: RGBPanelController
  class RGBPanelController;
  // Forward declaring type: HSVPanelController
  class HSVPanelController;
  // Forward declaring type: PreviousColorPanelController
  class PreviousColorPanelController;
  // Forward declaring type: ColorScheme
  class ColorScheme;
  // Forward declaring type: ColorChangeUIEventType
  struct ColorChangeUIEventType;
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
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: EditColorSchemeController
  class EditColorSchemeController : public UnityEngine::MonoBehaviour {
    public:
    // private ColorSchemeColorsToggleGroup _colorSchemeColorsToggleGroup
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ColorSchemeColorsToggleGroup* colorSchemeColorsToggleGroup;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSchemeColorsToggleGroup*) == 0x8);
    // private RGBPanelController _rgbPanelController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::RGBPanelController* rgbPanelController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::RGBPanelController*) == 0x8);
    // private HSVPanelController _hsvPanelController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::HSVPanelController* hsvPanelController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HSVPanelController*) == 0x8);
    // private PreviousColorPanelController _previousColorPanelController
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::PreviousColorPanelController* previousColorPanelController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PreviousColorPanelController*) == 0x8);
    // private UnityEngine.UI.Button _closeButton
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::UI::Button* closeButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE211B8
    // private System.Action didFinishEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE211C8
    // private System.Action`1<ColorScheme> didChangeColorSchemeEvent
    // Size: 0x8
    // Offset: 0x48
    System::Action_1<GlobalNamespace::ColorScheme*>* didChangeColorSchemeEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::ColorScheme*>*) == 0x8);
    // private HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x50
    HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(HMUI::ButtonBinder*) == 0x8);
    // Creating value type constructor for type: EditColorSchemeController
    EditColorSchemeController(GlobalNamespace::ColorSchemeColorsToggleGroup* colorSchemeColorsToggleGroup_ = {}, GlobalNamespace::RGBPanelController* rgbPanelController_ = {}, GlobalNamespace::HSVPanelController* hsvPanelController_ = {}, GlobalNamespace::PreviousColorPanelController* previousColorPanelController_ = {}, UnityEngine::UI::Button* closeButton_ = {}, System::Action* didFinishEvent_ = {}, System::Action_1<GlobalNamespace::ColorScheme*>* didChangeColorSchemeEvent_ = {}, HMUI::ButtonBinder* buttonBinder_ = {}) noexcept : colorSchemeColorsToggleGroup{colorSchemeColorsToggleGroup_}, rgbPanelController{rgbPanelController_}, hsvPanelController{hsvPanelController_}, previousColorPanelController{previousColorPanelController_}, closeButton{closeButton_}, didFinishEvent{didFinishEvent_}, didChangeColorSchemeEvent{didChangeColorSchemeEvent_}, buttonBinder{buttonBinder_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didFinishEvent(System.Action value)
    // Offset: 0x10BCB54
    void add_didFinishEvent(System::Action* value);
    // public System.Void remove_didFinishEvent(System.Action value)
    // Offset: 0x10BCBF8
    void remove_didFinishEvent(System::Action* value);
    // public System.Void add_didChangeColorSchemeEvent(System.Action`1<ColorScheme> value)
    // Offset: 0x10BCC9C
    void add_didChangeColorSchemeEvent(System::Action_1<GlobalNamespace::ColorScheme*>* value);
    // public System.Void remove_didChangeColorSchemeEvent(System.Action`1<ColorScheme> value)
    // Offset: 0x10BCD40
    void remove_didChangeColorSchemeEvent(System::Action_1<GlobalNamespace::ColorScheme*>* value);
    // public System.Void SetColorScheme(ColorScheme colorScheme)
    // Offset: 0x10BCDE4
    void SetColorScheme(GlobalNamespace::ColorScheme* colorScheme);
    // protected System.Void Start()
    // Offset: 0x10BCE00
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x10BD03C
    void OnDestroy();
    // private System.Void HandleColorSchemeColorsToggleGroupSelectedColorDidChange(UnityEngine.Color color)
    // Offset: 0x10BD210
    void HandleColorSchemeColorsToggleGroupSelectedColorDidChange(UnityEngine::Color color);
    // private System.Void HandleRGBPanelControllerColorDidChange(UnityEngine.Color color, ColorChangeUIEventType colorChangeUIEventType)
    // Offset: 0x10BD29C
    void HandleRGBPanelControllerColorDidChange(UnityEngine::Color color, GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType);
    // private System.Void HandleHSVPanelControllerColorDidChange(UnityEngine.Color color, ColorChangeUIEventType colorChangeUIEventType)
    // Offset: 0x10BD3B8
    void HandleHSVPanelControllerColorDidChange(UnityEngine::Color color, GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType);
    // private System.Void HandlePreviousColorPanelControllerColorWasSelected(UnityEngine.Color color)
    // Offset: 0x10BD4D4
    void HandlePreviousColorPanelControllerColorWasSelected(UnityEngine::Color color);
    // private System.Void <Start>b__13_0()
    // Offset: 0x10BD5E0
    void $Start$b__13_0();
    // public System.Void .ctor()
    // Offset: 0x10BD5D8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EditColorSchemeController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EditColorSchemeController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EditColorSchemeController*, creationType>()));
    }
  }; // EditColorSchemeController
  #pragma pack(pop)
  static check_size<sizeof(EditColorSchemeController), 80 + sizeof(HMUI::ButtonBinder*)> __GlobalNamespace_EditColorSchemeControllerSizeCheck;
  static_assert(sizeof(EditColorSchemeController) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EditColorSchemeController*, "", "EditColorSchemeController");
