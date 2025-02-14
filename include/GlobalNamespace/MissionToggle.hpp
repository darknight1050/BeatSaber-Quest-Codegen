// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
// Including type: UnityEngine.EventSystems.IPointerClickHandler
#include "UnityEngine/EventSystems/IPointerClickHandler.hpp"
// Including type: UnityEngine.EventSystems.ISubmitHandler
#include "UnityEngine/EventSystems/ISubmitHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerEnterHandler
#include "UnityEngine/EventSystems/IPointerEnterHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerExitHandler
#include "UnityEngine/EventSystems/IPointerExitHandler.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Signal
  class Signal;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: Interactable
  class Interactable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x9C
  #pragma pack(push, 1)
  // Autogenerated type: MissionToggle
  class MissionToggle : public UnityEngine::EventSystems::UIBehaviour/*, public UnityEngine::EventSystems::IPointerClickHandler, public UnityEngine::EventSystems::ISubmitHandler, public UnityEngine::EventSystems::IPointerEnterHandler, public UnityEngine::EventSystems::IPointerExitHandler*/ {
    public:
    // [SignalSenderAttribute] Offset: 0xE23944
    // private Signal _missionToggleWasPressedSignal
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::Signal* missionToggleWasPressedSignal;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Signal*) == 0x8);
    // [SpaceAttribute] Offset: 0xE2397C
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x20
    TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Image _lockedImage
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::UI::Image* lockedImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _clearedImage
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::UI::Image* clearedImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _bgImage
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::UI::Image* bgImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _strokeImage
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::UI::Image* strokeImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // [SpaceAttribute] Offset: 0xE239F4
    // private HMUI.Interactable _vrInteractable
    // Size: 0x8
    // Offset: 0x48
    HMUI::Interactable* vrInteractable;
    // Field size check
    static_assert(sizeof(HMUI::Interactable*) == 0x8);
    // [SpaceAttribute] Offset: 0xE23A2C
    // private UnityEngine.Color _disabledColor
    // Size: 0x10
    // Offset: 0x50
    UnityEngine::Color disabledColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _normalColor
    // Size: 0x10
    // Offset: 0x60
    UnityEngine::Color normalColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _invertColor
    // Size: 0x10
    // Offset: 0x70
    UnityEngine::Color invertColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _highlightColor
    // Size: 0x10
    // Offset: 0x80
    UnityEngine::Color highlightColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // [CompilerGeneratedAttribute] Offset: 0xE23A94
    // private System.Action`1<MissionToggle> selectionDidChangeEvent
    // Size: 0x8
    // Offset: 0x90
    System::Action_1<GlobalNamespace::MissionToggle*>* selectionDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MissionToggle*>*) == 0x8);
    // private System.Boolean _selected
    // Size: 0x1
    // Offset: 0x98
    bool selected;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _highlighted
    // Size: 0x1
    // Offset: 0x99
    bool highlighted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _interactable
    // Size: 0x1
    // Offset: 0x9A
    bool interactable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _missionCleared
    // Size: 0x1
    // Offset: 0x9B
    bool missionCleared;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MissionToggle
    MissionToggle(GlobalNamespace::Signal* missionToggleWasPressedSignal_ = {}, TMPro::TextMeshProUGUI* text_ = {}, UnityEngine::UI::Image* lockedImage_ = {}, UnityEngine::UI::Image* clearedImage_ = {}, UnityEngine::UI::Image* bgImage_ = {}, UnityEngine::UI::Image* strokeImage_ = {}, HMUI::Interactable* vrInteractable_ = {}, UnityEngine::Color disabledColor_ = {}, UnityEngine::Color normalColor_ = {}, UnityEngine::Color invertColor_ = {}, UnityEngine::Color highlightColor_ = {}, System::Action_1<GlobalNamespace::MissionToggle*>* selectionDidChangeEvent_ = {}, bool selected_ = {}, bool highlighted_ = {}, bool interactable_ = {}, bool missionCleared_ = {}) noexcept : missionToggleWasPressedSignal{missionToggleWasPressedSignal_}, text{text_}, lockedImage{lockedImage_}, clearedImage{clearedImage_}, bgImage{bgImage_}, strokeImage{strokeImage_}, vrInteractable{vrInteractable_}, disabledColor{disabledColor_}, normalColor{normalColor_}, invertColor{invertColor_}, highlightColor{highlightColor_}, selectionDidChangeEvent{selectionDidChangeEvent_}, selected{selected_}, highlighted{highlighted_}, interactable{interactable_}, missionCleared{missionCleared_} {}
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerClickHandler
    operator UnityEngine::EventSystems::IPointerClickHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerClickHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::ISubmitHandler
    operator UnityEngine::EventSystems::ISubmitHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::ISubmitHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerEnterHandler
    operator UnityEngine::EventSystems::IPointerEnterHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerEnterHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerExitHandler
    operator UnityEngine::EventSystems::IPointerExitHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerExitHandler*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_selectionDidChangeEvent(System.Action`1<MissionToggle> value)
    // Offset: 0x10545E4
    void add_selectionDidChangeEvent(System::Action_1<GlobalNamespace::MissionToggle*>* value);
    // public System.Void remove_selectionDidChangeEvent(System.Action`1<MissionToggle> value)
    // Offset: 0x10547CC
    void remove_selectionDidChangeEvent(System::Action_1<GlobalNamespace::MissionToggle*>* value);
    // public System.Void set_missionCleared(System.Boolean value)
    // Offset: 0x1058D08
    void set_missionCleared(bool value);
    // public System.Boolean get_selected()
    // Offset: 0x1058D14
    bool get_selected();
    // public System.Void set_selected(System.Boolean value)
    // Offset: 0x10544CC
    void set_selected(bool value);
    // public System.Boolean get_interactable()
    // Offset: 0x1058D1C
    bool get_interactable();
    // public System.Void set_interactable(System.Boolean value)
    // Offset: 0x1054688
    void set_interactable(bool value);
    // public System.Boolean get_highlighted()
    // Offset: 0x1059014
    bool get_highlighted();
    // public System.Void ChangeSelection(System.Boolean value, System.Boolean callSelectionDidChange, System.Boolean ignoreCurrentValue)
    // Offset: 0x1054904
    void ChangeSelection(bool value, bool callSelectionDidChange, bool ignoreCurrentValue);
    // public System.Void ChangeHighlight(System.Boolean value, System.Boolean ignoreCurrentValue)
    // Offset: 0x1059044
    void ChangeHighlight(bool value, bool ignoreCurrentValue);
    // public System.Void SetText(System.String text)
    // Offset: 0x1054870
    void SetText(::Il2CppString* text);
    // private System.Void InternalToggle()
    // Offset: 0x105906C
    void InternalToggle();
    // private System.Void RefreshUI()
    // Offset: 0x1058D24
    void RefreshUI();
    // public System.Void OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x10590A8
    void OnPointerClick(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnSubmit(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x105916C
    void OnSubmit(UnityEngine::EventSystems::BaseEventData* eventData);
    // public System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1059214
    void OnPointerEnter(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1059234
    void OnPointerExit(UnityEngine::EventSystems::PointerEventData* eventData);
    // protected override System.Void Start()
    // Offset: 0x105901C
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::Start()
    void Start();
    // public System.Void .ctor()
    // Offset: 0x1059250
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionToggle* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionToggle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionToggle*, creationType>()));
    }
  }; // MissionToggle
  #pragma pack(pop)
  static check_size<sizeof(MissionToggle), 155 + sizeof(bool)> __GlobalNamespace_MissionToggleSizeCheck;
  static_assert(sizeof(MissionToggle) == 0x9C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionToggle*, "", "MissionToggle");
