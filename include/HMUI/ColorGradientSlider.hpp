// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.TextSlider
#include "HMUI/TextSlider.hpp"
// Including type: ColorChangeUIEventType
#include "GlobalNamespace/ColorChangeUIEventType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ImageView
  class ImageView;
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
  // WARNING Size may be invalid!
  // Autogenerated type: HMUI.ColorGradientSlider
  // [] Offset: FFFFFFFF
  class ColorGradientSlider : public HMUI::TextSlider {
    public:
    // private System.String _textPrefix
    // Size: 0x8
    // Offset: 0x140
    ::Il2CppString* textPrefix;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [SpaceAttribute] Offset: 0xD025B8
    // private UnityEngine.Color _color0
    // Size: 0x10
    // Offset: 0x148
    UnityEngine::Color color0;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _color1
    // Size: 0x10
    // Offset: 0x158
    UnityEngine::Color color1;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private HMUI.ImageView[] _gradientImages
    // Size: 0x8
    // Offset: 0x168
    ::Array<HMUI::ImageView*>* gradientImages;
    // Field size check
    static_assert(sizeof(::Array<HMUI::ImageView*>*) == 0x8);
    // private UnityEngine.Color _darkColor
    // Size: 0x10
    // Offset: 0x170
    UnityEngine::Color darkColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _lightColor
    // Size: 0x10
    // Offset: 0x180
    UnityEngine::Color lightColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // [CompilerGeneratedAttribute] Offset: 0xD02630
    // private System.Action`3<HMUI.ColorGradientSlider,UnityEngine.Color,ColorChangeUIEventType> colorDidChangeEvent
    // Size: 0x8
    // Offset: 0x190
    System::Action_3<HMUI::ColorGradientSlider*, UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>* colorDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_3<HMUI::ColorGradientSlider*, UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>*) == 0x8);
    // Creating value type constructor for type: ColorGradientSlider
    ColorGradientSlider(::Il2CppString* textPrefix_ = {}, UnityEngine::Color color0_ = {}, UnityEngine::Color color1_ = {}, ::Array<HMUI::ImageView*>* gradientImages_ = {}, UnityEngine::Color darkColor_ = {}, UnityEngine::Color lightColor_ = {}, System::Action_3<HMUI::ColorGradientSlider*, UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>* colorDidChangeEvent_ = {}) noexcept : textPrefix{textPrefix_}, color0{color0_}, color1{color1_}, gradientImages{gradientImages_}, darkColor{darkColor_}, lightColor{lightColor_}, colorDidChangeEvent{colorDidChangeEvent_} {}
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD02640
    // Get static field: static private readonly System.Text.StringBuilder _stringBuilder
    static System::Text::StringBuilder* _get__stringBuilder();
    // Set static field: static private readonly System.Text.StringBuilder _stringBuilder
    static void _set__stringBuilder(System::Text::StringBuilder* value);
    // public System.Void add_colorDidChangeEvent(System.Action`3<HMUI.ColorGradientSlider,UnityEngine.Color,ColorChangeUIEventType> value)
    // Offset: 0x1220978
    void add_colorDidChangeEvent(System::Action_3<HMUI::ColorGradientSlider*, UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>* value);
    // public System.Void remove_colorDidChangeEvent(System.Action`3<HMUI.ColorGradientSlider,UnityEngine.Color,ColorChangeUIEventType> value)
    // Offset: 0x1220A20
    void remove_colorDidChangeEvent(System::Action_3<HMUI::ColorGradientSlider*, UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>* value);
    // public System.Void SetColors(UnityEngine.Color color0, UnityEngine.Color color1)
    // Offset: 0x1220BF0
    void SetColors(UnityEngine::Color color0, UnityEngine::Color color1);
    // private System.Void HandleNormalizedValueDidChange(HMUI.TextSlider slider, System.Single normalizedValue)
    // Offset: 0x1220EFC
    void HandleNormalizedValueDidChange(HMUI::TextSlider* slider, float normalizedValue);
    // protected override System.Void Awake()
    // Offset: 0x1220AC8
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::Awake()
    void Awake();
    // protected override System.Void OnDestroy()
    // Offset: 0x1220B64
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDestroy_NEW()
    void OnDestroy();
    // protected override System.Void UpdateVisuals()
    // Offset: 0x1220C20
    // Implemented from: HMUI.TextSlider
    // Base method: System.Void TextSlider::UpdateVisuals_NEW()
    void UpdateVisuals();
    // protected override System.String TextForNormalizedValue(System.Single normalizedValue)
    // Offset: 0x1220DEC
    // Implemented from: HMUI.TextSlider
    // Base method: System.String TextSlider::TextForNormalizedValue_NEW(System.Single normalizedValue)
    ::Il2CppString* TextForNormalizedValue(float normalizedValue);
    // public override System.Void OnPointerUp(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1220FB0
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnPointerUp_NEW(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerUp(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void .ctor()
    // Offset: 0x12210D0
    // Implemented from: HMUI.TextSlider
    // Base method: System.Void TextSlider::.ctor()
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorGradientSlider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ColorGradientSlider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorGradientSlider*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x12210D8
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::.cctor()
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // HMUI.ColorGradientSlider
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ColorGradientSlider*, "HMUI", "ColorGradientSlider");
