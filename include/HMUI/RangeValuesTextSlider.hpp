// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.TextSlider
#include "HMUI/TextSlider.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.RangeValuesTextSlider
  class RangeValuesTextSlider : public HMUI::TextSlider {
    public:
    // private System.Single _minValue
    // Offset: 0x134
    float minValue;
    // private System.Single _maxValue
    // Offset: 0x138
    float maxValue;
    // private UnityEngine.UI.Button _decButton
    // Offset: 0x140
    UnityEngine::UI::Button* decButton;
    // private UnityEngine.UI.Button _incButton
    // Offset: 0x148
    UnityEngine::UI::Button* incButton;
    // private System.Action`2<HMUI.RangeValuesTextSlider,System.Single> valueDidChangeEvent
    // Offset: 0x150
    System::Action_2<HMUI::RangeValuesTextSlider*, float>* valueDidChangeEvent;
    // private HMUI.ButtonBinder _buttonBinder
    // Offset: 0x158
    HMUI::ButtonBinder* buttonBinder;
    // public System.Single get_minValue()
    // Offset: 0x103C988
    float get_minValue();
    // public System.Void set_minValue(System.Single value)
    // Offset: 0x103C990
    void set_minValue(float value);
    // public System.Single get_maxValue()
    // Offset: 0x103CA18
    float get_maxValue();
    // public System.Void set_maxValue(System.Single value)
    // Offset: 0x103CA20
    void set_maxValue(float value);
    // public System.Void set_value(System.Single value)
    // Offset: 0x103CAA8
    void set_value(float value);
    // public System.Single get_value()
    // Offset: 0x103CAE4
    float get_value();
    // public System.Void add_valueDidChangeEvent(System.Action`2<HMUI.RangeValuesTextSlider,System.Single> value)
    // Offset: 0x103CC3C
    void add_valueDidChangeEvent(System::Action_2<HMUI::RangeValuesTextSlider*, float>* value);
    // public System.Void remove_valueDidChangeEvent(System.Action`2<HMUI.RangeValuesTextSlider,System.Single> value)
    // Offset: 0x103CCE4
    void remove_valueDidChangeEvent(System::Action_2<HMUI::RangeValuesTextSlider*, float>* value);
    // private System.Void HandleNormalizedValueDidChange(HMUI.TextSlider slider, System.Single normalizedValue)
    // Offset: 0x103D148
    void HandleNormalizedValueDidChange(HMUI::TextSlider* slider, float normalizedValue);
    // public System.Single ConvertFromNormalizedValue(System.Single normalizedValue)
    // Offset: 0x103CC24
    float ConvertFromNormalizedValue(float normalizedValue);
    // public System.Single NormalizeValue(System.Single rangeValue)
    // Offset: 0x103CAC4
    float NormalizeValue(float rangeValue);
    // protected System.String TextForValue(System.Single value)
    // Offset: 0x103D1F4
    ::Il2CppString* TextForValue(float value);
    // private System.Void <Awake>b__17_0()
    // Offset: 0x103D2A4
    void $Awake$b__17_0();
    // private System.Void <Awake>b__17_1()
    // Offset: 0x103D2FC
    void $Awake$b__17_1();
    // protected override System.Void Awake()
    // Offset: 0x103CD8C
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::Awake()
    void Awake();
    // protected override System.Void OnDestroy()
    // Offset: 0x103D008
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDestroy()
    void OnDestroy();
    // protected override System.String TextForNormalizedValue(System.Single normalizedValue)
    // Offset: 0x103D1D0
    // Implemented from: HMUI.TextSlider
    // Base method: System.String TextSlider::TextForNormalizedValue(System.Single normalizedValue)
    ::Il2CppString* TextForNormalizedValue(float normalizedValue);
    // public System.Void .ctor()
    // Offset: 0x103C97C
    // Implemented from: HMUI.TextSlider
    // Base method: System.Void TextSlider::.ctor()
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static RangeValuesTextSlider* New_ctor();
  }; // HMUI.RangeValuesTextSlider
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::RangeValuesTextSlider*, "HMUI", "RangeValuesTextSlider");
#pragma pack(pop)
