// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
  // Forward declaring type: Selectable
  class Selectable;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.DefaultControls
  class DefaultControls : public ::CsObject {
    public:
    // Nested type: UnityEngine::UI::DefaultControls::IFactoryControls
    class IFactoryControls;
    // Nested type: UnityEngine::UI::DefaultControls::DefaultRuntimeFactory
    class DefaultRuntimeFactory;
    // Nested type: UnityEngine::UI::DefaultControls::Resources
    struct Resources;
    // Get static field: static private UnityEngine.UI.DefaultControls/IFactoryControls m_CurrentFactory
    static UnityEngine::UI::DefaultControls::IFactoryControls* _get_m_CurrentFactory();
    // Set static field: static private UnityEngine.UI.DefaultControls/IFactoryControls m_CurrentFactory
    static void _set_m_CurrentFactory(UnityEngine::UI::DefaultControls::IFactoryControls* value);
    // static field const value: static private System.Single kWidth
    static constexpr const float kWidth = 160;
    // Get static field: static private System.Single kWidth
    static float _get_kWidth();
    // Set static field: static private System.Single kWidth
    static void _set_kWidth(float value);
    // static field const value: static private System.Single kThickHeight
    static constexpr const float kThickHeight = 30;
    // Get static field: static private System.Single kThickHeight
    static float _get_kThickHeight();
    // Set static field: static private System.Single kThickHeight
    static void _set_kThickHeight(float value);
    // static field const value: static private System.Single kThinHeight
    static constexpr const float kThinHeight = 20;
    // Get static field: static private System.Single kThinHeight
    static float _get_kThinHeight();
    // Set static field: static private System.Single kThinHeight
    static void _set_kThinHeight(float value);
    // Get static field: static private UnityEngine.Vector2 s_ThickElementSize
    static UnityEngine::Vector2 _get_s_ThickElementSize();
    // Set static field: static private UnityEngine.Vector2 s_ThickElementSize
    static void _set_s_ThickElementSize(UnityEngine::Vector2 value);
    // Get static field: static private UnityEngine.Vector2 s_ThinElementSize
    static UnityEngine::Vector2 _get_s_ThinElementSize();
    // Set static field: static private UnityEngine.Vector2 s_ThinElementSize
    static void _set_s_ThinElementSize(UnityEngine::Vector2 value);
    // Get static field: static private UnityEngine.Vector2 s_ImageElementSize
    static UnityEngine::Vector2 _get_s_ImageElementSize();
    // Set static field: static private UnityEngine.Vector2 s_ImageElementSize
    static void _set_s_ImageElementSize(UnityEngine::Vector2 value);
    // Get static field: static private UnityEngine.Color s_DefaultSelectableColor
    static UnityEngine::Color _get_s_DefaultSelectableColor();
    // Set static field: static private UnityEngine.Color s_DefaultSelectableColor
    static void _set_s_DefaultSelectableColor(UnityEngine::Color value);
    // Get static field: static private UnityEngine.Color s_PanelColor
    static UnityEngine::Color _get_s_PanelColor();
    // Set static field: static private UnityEngine.Color s_PanelColor
    static void _set_s_PanelColor(UnityEngine::Color value);
    // Get static field: static private UnityEngine.Color s_TextColor
    static UnityEngine::Color _get_s_TextColor();
    // Set static field: static private UnityEngine.Color s_TextColor
    static void _set_s_TextColor(UnityEngine::Color value);
    // static public UnityEngine.UI.DefaultControls/IFactoryControls get_factory()
    // Offset: 0xDF22C0
    static UnityEngine::UI::DefaultControls::IFactoryControls* get_factory();
    // static private UnityEngine.GameObject CreateUIElementRoot(System.String name, UnityEngine.Vector2 size, System.Type[] components)
    // Offset: 0xDF2328
    static UnityEngine::GameObject* CreateUIElementRoot(::CsString* name, UnityEngine::Vector2 size, ::Array<System::Type*>* components);
    // static private UnityEngine.GameObject CreateUIObject(System.String name, UnityEngine.GameObject parent, System.Type[] components)
    // Offset: 0xDF2494
    static UnityEngine::GameObject* CreateUIObject(::CsString* name, UnityEngine::GameObject* parent, ::Array<System::Type*>* components);
    // static private System.Void SetDefaultTextValues(UnityEngine.UI.Text lbl)
    // Offset: 0xDF26E8
    static void SetDefaultTextValues(UnityEngine::UI::Text* lbl);
    // static private System.Void SetDefaultColorTransitionValues(UnityEngine.UI.Selectable slider)
    // Offset: 0xDF277C
    static void SetDefaultColorTransitionValues(UnityEngine::UI::Selectable* slider);
    // static private System.Void SetParentAndAlign(UnityEngine.GameObject child, UnityEngine.GameObject parent)
    // Offset: 0xDF25DC
    static void SetParentAndAlign(UnityEngine::GameObject* child, UnityEngine::GameObject* parent);
    // static private System.Void SetLayerRecursively(UnityEngine.GameObject go, System.Int32 layer)
    // Offset: 0xDF27FC
    static void SetLayerRecursively(UnityEngine::GameObject* go, int layer);
    // static public UnityEngine.GameObject CreatePanel(UnityEngine.UI.DefaultControls/Resources resources)
    // Offset: 0xDF28F8
    static UnityEngine::GameObject* CreatePanel(UnityEngine::UI::DefaultControls::Resources resources);
    // static public UnityEngine.GameObject CreateButton(UnityEngine.UI.DefaultControls/Resources resources)
    // Offset: 0xDF2B2C
    static UnityEngine::GameObject* CreateButton(UnityEngine::UI::DefaultControls::Resources resources);
    // static public UnityEngine.GameObject CreateText(UnityEngine.UI.DefaultControls/Resources resources)
    // Offset: 0xDF2E88
    static UnityEngine::GameObject* CreateText(UnityEngine::UI::DefaultControls::Resources resources);
    // static public UnityEngine.GameObject CreateImage(UnityEngine.UI.DefaultControls/Resources resources)
    // Offset: 0xDF3004
    static UnityEngine::GameObject* CreateImage(UnityEngine::UI::DefaultControls::Resources resources);
    // static public UnityEngine.GameObject CreateRawImage(UnityEngine.UI.DefaultControls/Resources resources)
    // Offset: 0xDF3134
    static UnityEngine::GameObject* CreateRawImage(UnityEngine::UI::DefaultControls::Resources resources);
    // static public UnityEngine.GameObject CreateSlider(UnityEngine.UI.DefaultControls/Resources resources)
    // Offset: 0xDF3264
    static UnityEngine::GameObject* CreateSlider(UnityEngine::UI::DefaultControls::Resources resources);
    // static public UnityEngine.GameObject CreateScrollbar(UnityEngine.UI.DefaultControls/Resources resources)
    // Offset: 0xDF3A08
    static UnityEngine::GameObject* CreateScrollbar(UnityEngine::UI::DefaultControls::Resources resources);
    // static public UnityEngine.GameObject CreateToggle(UnityEngine.UI.DefaultControls/Resources resources)
    // Offset: 0xDF3E70
    static UnityEngine::GameObject* CreateToggle(UnityEngine::UI::DefaultControls::Resources resources);
    // static public UnityEngine.GameObject CreateInputField(UnityEngine.UI.DefaultControls/Resources resources)
    // Offset: 0xDF4498
    static UnityEngine::GameObject* CreateInputField(UnityEngine::UI::DefaultControls::Resources resources);
    // static public UnityEngine.GameObject CreateDropdown(UnityEngine.UI.DefaultControls/Resources resources)
    // Offset: 0xDF4A10
    static UnityEngine::GameObject* CreateDropdown(UnityEngine::UI::DefaultControls::Resources resources);
    // static public UnityEngine.GameObject CreateScrollView(UnityEngine.UI.DefaultControls/Resources resources)
    // Offset: 0xDF5F0C
    static UnityEngine::GameObject* CreateScrollView(UnityEngine::UI::DefaultControls::Resources resources);
    // static private System.Void .cctor()
    // Offset: 0xDF6644
    static void _cctor();
  }; // UnityEngine.UI.DefaultControls
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::DefaultControls*, "UnityEngine.UI", "DefaultControls");
#pragma pack(pop)
