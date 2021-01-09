// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HSVPanelController
  class HSVPanelController;
  // Forward declaring type: PreviousColorPanelController
  class PreviousColorPanelController;
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
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB9
  // Autogenerated type: EditColorController
  // [] Offset: FFFFFFFF
  class EditColorController : public HMUI::ViewController {
    public:
    // private HSVPanelController _hsvPanelController
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::HSVPanelController* hsvPanelController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HSVPanelController*) == 0x8);
    // private PreviousColorPanelController _previousColorPanelController
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::PreviousColorPanelController* previousColorPanelController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PreviousColorPanelController*) == 0x8);
    // [SpaceAttribute] Offset: 0xDCC728
    // private UnityEngine.UI.Button _cancelButton
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::UI::Button* cancelButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _applyButton
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::UI::Button* applyButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCC770
    // private System.Action`1<UnityEngine.Color> didChangeColorEvent
    // Size: 0x8
    // Offset: 0x90
    System::Action_1<UnityEngine::Color>* didChangeColorEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<UnityEngine::Color>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCC780
    // private System.Action`1<System.Boolean> didFinishEvent
    // Size: 0x8
    // Offset: 0x98
    System::Action_1<bool>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<bool>*) == 0x8);
    // private System.Action`1<UnityEngine.Color> _colorCallback
    // Size: 0x8
    // Offset: 0xA0
    System::Action_1<UnityEngine::Color>* colorCallback;
    // Field size check
    static_assert(sizeof(System::Action_1<UnityEngine::Color>*) == 0x8);
    // private UnityEngine.Color _initialColor
    // Size: 0x10
    // Offset: 0xA8
    UnityEngine::Color initialColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Boolean _colorChanged
    // Size: 0x1
    // Offset: 0xB8
    bool colorChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: EditColorController
    EditColorController(GlobalNamespace::HSVPanelController* hsvPanelController_ = {}, GlobalNamespace::PreviousColorPanelController* previousColorPanelController_ = {}, UnityEngine::UI::Button* cancelButton_ = {}, UnityEngine::UI::Button* applyButton_ = {}, System::Action_1<UnityEngine::Color>* didChangeColorEvent_ = {}, System::Action_1<bool>* didFinishEvent_ = {}, System::Action_1<UnityEngine::Color>* colorCallback_ = {}, UnityEngine::Color initialColor_ = {}, bool colorChanged_ = {}) noexcept : hsvPanelController{hsvPanelController_}, previousColorPanelController{previousColorPanelController_}, cancelButton{cancelButton_}, applyButton{applyButton_}, didChangeColorEvent{didChangeColorEvent_}, didFinishEvent{didFinishEvent_}, colorCallback{colorCallback_}, initialColor{initialColor_}, colorChanged{colorChanged_} {}
    // public System.Void add_didChangeColorEvent(System.Action`1<UnityEngine.Color> value)
    // Offset: 0x1A5C3DC
    void add_didChangeColorEvent(System::Action_1<UnityEngine::Color>* value);
    // public System.Void remove_didChangeColorEvent(System.Action`1<UnityEngine.Color> value)
    // Offset: 0x1A5C928
    void remove_didChangeColorEvent(System::Action_1<UnityEngine::Color>* value);
    // public System.Void add_didFinishEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x1A5C480
    void add_didFinishEvent(System::Action_1<bool>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x1A5C9CC
    void remove_didFinishEvent(System::Action_1<bool>* value);
    // public System.Void SetColorCallback(System.Action`1<UnityEngine.Color> colorCallback)
    // Offset: 0x1A5E584
    void SetColorCallback(System::Action_1<UnityEngine::Color>* colorCallback);
    // public System.Void SetColor(UnityEngine.Color color)
    // Offset: 0x1A5CAF4
    void SetColor(UnityEngine::Color color);
    // private System.Void HandleHSVPanelControllerColorDidChange(UnityEngine.Color color, ColorChangeUIEventType colorChangeUIEventType)
    // Offset: 0x1A5E7F4
    void HandleHSVPanelControllerColorDidChange(UnityEngine::Color color, GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType);
    // private System.Void HandlePreviousColorPanelControllerColorWasSelected(UnityEngine.Color color)
    // Offset: 0x1A5E938
    void HandlePreviousColorPanelControllerColorWasSelected(UnityEngine::Color color);
    // private System.Void HandleCancelButtonWasPressed()
    // Offset: 0x1A5E9BC
    void HandleCancelButtonWasPressed();
    // private System.Void HandleApplyButtonWasPressed()
    // Offset: 0x1A5EA4C
    void HandleApplyButtonWasPressed();
    // private System.Void ChangeColor(UnityEngine.Color color)
    // Offset: 0x1A5E870
    void ChangeColor(UnityEngine::Color color);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1A5E58C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x1A5E714
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.Void .ctor()
    // Offset: 0x1A5EAB0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EditColorController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EditColorController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EditColorController*, creationType>()));
    }
  }; // EditColorController
  static check_size<sizeof(EditColorController), 184 + sizeof(bool)> __GlobalNamespace_EditColorControllerSizeCheck;
  static_assert(sizeof(EditColorController) == 0xB9);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EditColorController*, "", "EditColorController");
#pragma pack(pop)
