// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.IPointerClickHandler
#include "UnityEngine/EventSystems/IPointerClickHandler.hpp"
// Including type: UnityEngine.EventSystems.ISubmitHandler
#include "UnityEngine/EventSystems/ISubmitHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerEnterHandler
#include "UnityEngine/EventSystems/IPointerEnterHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerExitHandler
#include "UnityEngine/EventSystems/IPointerExitHandler.hpp"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: SegmentedControl
  class SegmentedControl;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Signal
  class Signal;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.SegmentedControlCell
  class SegmentedControlCell : public UnityEngine::EventSystems::IPointerClickHandler, public UnityEngine::EventSystems::ISubmitHandler, public UnityEngine::EventSystems::IPointerEnterHandler, public UnityEngine::EventSystems::IPointerExitHandler, public UnityEngine::EventSystems::UIBehaviour {
    public:
    // Nested type: HMUI::SegmentedControlCell::TransitionType
    struct TransitionType;
    // private Signal _segmentedControlCellWasPressedSignal
    // Offset: 0x18
    GlobalNamespace::Signal* segmentedControlCellWasPressedSignal;
    // private System.Int32 _cellNumber
    // Offset: 0x20
    int cellNumber;
    // private HMUI.SegmentedControl _segmentedControl
    // Offset: 0x28
    HMUI::SegmentedControl* segmentedControl;
    // private System.Boolean _selected
    // Offset: 0x30
    bool selected;
    // private System.Boolean _highlighted
    // Offset: 0x31
    bool highlighted;
    // public System.Int32 get_cellNumber()
    // Offset: 0x10421F0
    int get_cellNumber();
    // public System.Void SegmentedControlSetup(HMUI.SegmentedControl segmentedControl, System.Int32 cellNumber)
    // Offset: 0x1041E98
    void SegmentedControlSetup(HMUI::SegmentedControl* segmentedControl, int cellNumber);
    // public System.Boolean get_selected()
    // Offset: 0x1042248
    bool get_selected();
    // public System.Void set_selected(System.Boolean value)
    // Offset: 0x1042250
    void set_selected(bool value);
    // public System.Boolean get_highlighted()
    // Offset: 0x1042264
    bool get_highlighted();
    // public System.Void ChangeSelection(System.Boolean value, HMUI.SegmentedControlCell/TransitionType transitionType, System.Boolean useCallback, System.Boolean ignoreCurrentValue)
    // Offset: 0x1041EC8
    void ChangeSelection(bool value, HMUI::SegmentedControlCell::TransitionType transitionType, bool useCallback, bool ignoreCurrentValue);
    // public System.Void ChangeHighlight(System.Boolean value, HMUI.SegmentedControlCell/TransitionType transitionType, System.Boolean ignoreCurrentValue)
    // Offset: 0x1041F44
    void ChangeHighlight(bool value, HMUI::SegmentedControlCell::TransitionType transitionType, bool ignoreCurrentValue);
    // private System.Void InternalToggle()
    // Offset: 0x104226C
    void InternalToggle();
    // protected System.Void SelectionDidChange(HMUI.SegmentedControlCell/TransitionType transitionType)
    // Offset: 0x10422C0
    void SelectionDidChange(HMUI::SegmentedControlCell::TransitionType transitionType);
    // protected System.Void HighlightDidChange(HMUI.SegmentedControlCell/TransitionType transitionType)
    // Offset: 0x10422C4
    void HighlightDidChange(HMUI::SegmentedControlCell::TransitionType transitionType);
    // protected override System.Void Start()
    // Offset: 0x10421F8
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::Start()
    void Start();
    // public System.Void OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x10422C8
    // Implemented from: UnityEngine.EventSystems.IPointerClickHandler
    // Base method: System.Void IPointerClickHandler::OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerClick(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnSubmit(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x1042384
    // Implemented from: UnityEngine.EventSystems.ISubmitHandler
    // Base method: System.Void ISubmitHandler::OnSubmit(UnityEngine.EventSystems.BaseEventData eventData)
    void OnSubmit(UnityEngine::EventSystems::BaseEventData* eventData);
    // public System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1042424
    // Implemented from: UnityEngine.EventSystems.IPointerEnterHandler
    // Base method: System.Void IPointerEnterHandler::OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerEnter(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x104244C
    // Implemented from: UnityEngine.EventSystems.IPointerExitHandler
    // Base method: System.Void IPointerExitHandler::OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerExit(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void .ctor()
    // Offset: 0x1042470
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SegmentedControlCell* New_ctor();
  }; // HMUI.SegmentedControlCell
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::SegmentedControlCell*, "HMUI", "SegmentedControlCell");
#pragma pack(pop)
