// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.IPointerUpHandler
#include "UnityEngine/EventSystems/IPointerUpHandler.hpp"
// Including type: HMUI.TextSlider
#include "HMUI/TextSlider.hpp"
// Including type: ColorChangeUIEventType
#include "GlobalNamespace/ColorChangeUIEventType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: GradientImage
  class GradientImage;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.ColorGradientSlider
  class ColorGradientSlider : public UnityEngine::EventSystems::IPointerUpHandler, public HMUI::TextSlider {
    public:
    // private System.String _textPrefix
    // Offset: 0x138
    ::Il2CppString* textPrefix;
    // private UnityEngine.Color _color0
    // Offset: 0x140
    UnityEngine::Color color0;
    // private UnityEngine.Color _color1
    // Offset: 0x150
    UnityEngine::Color color1;
    // private HMUI.GradientImage[] _gradientImages
    // Offset: 0x160
    ::Array<HMUI::GradientImage*>* gradientImages;
    // private UnityEngine.Color _darkColor
    // Offset: 0x168
    UnityEngine::Color darkColor;
    // private UnityEngine.Color _lightColor
    // Offset: 0x178
    UnityEngine::Color lightColor;
    // private System.Action`3<HMUI.ColorGradientSlider,UnityEngine.Color,ColorChangeUIEventType> colorDidChangeEvent
    // Offset: 0x188
    System::Action_3<HMUI::ColorGradientSlider*, UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>* colorDidChangeEvent;
    // private System.Text.StringBuilder _stringBuilder
    // Offset: 0x190
    System::Text::StringBuilder* stringBuilder;
    // public System.Void add_colorDidChangeEvent(System.Action`3<HMUI.ColorGradientSlider,UnityEngine.Color,ColorChangeUIEventType> value)
    // Offset: 0xE3422C
    void add_colorDidChangeEvent(System::Action_3<HMUI::ColorGradientSlider*, UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>* value);
    // public System.Void remove_colorDidChangeEvent(System.Action`3<HMUI.ColorGradientSlider,UnityEngine.Color,ColorChangeUIEventType> value)
    // Offset: 0xE342D4
    void remove_colorDidChangeEvent(System::Action_3<HMUI::ColorGradientSlider*, UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>* value);
    // public System.Void SetColors(UnityEngine.Color color0, UnityEngine.Color color1)
    // Offset: 0xE344A4
    void SetColors(UnityEngine::Color color0, UnityEngine::Color color1);
    // private System.Void HandleNormalizedValueDidChange(HMUI.TextSlider slider, System.Single normalizedValue)
    // Offset: 0xE34820
    void HandleNormalizedValueDidChange(HMUI::TextSlider* slider, float normalizedValue);
    // protected override System.Void Awake()
    // Offset: 0xE3437C
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::Awake()
    void Awake();
    // protected override System.Void OnDestroy()
    // Offset: 0xE34418
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDestroy()
    void OnDestroy();
    // protected override System.Void UpdateVisuals()
    // Offset: 0xE344D4
    // Implemented from: HMUI.TextSlider
    // Base method: System.Void TextSlider::UpdateVisuals()
    void UpdateVisuals();
    // protected override System.String TextForNormalizedValue(System.Single normalizedValue)
    // Offset: 0xE34750
    // Implemented from: HMUI.TextSlider
    // Base method: System.String TextSlider::TextForNormalizedValue(System.Single normalizedValue)
    ::Il2CppString* TextForNormalizedValue(float normalizedValue);
    // public override System.Void OnPointerUp(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0xE348D4
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnPointerUp(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerUp(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void .ctor()
    // Offset: 0xE349F4
    // Implemented from: HMUI.TextSlider
    // Base method: System.Void TextSlider::.ctor()
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ColorGradientSlider* New_ctor();
  }; // HMUI.ColorGradientSlider
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::ColorGradientSlider*, "HMUI", "ColorGradientSlider");
#pragma pack(pop)
