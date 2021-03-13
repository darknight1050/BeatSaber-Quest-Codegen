// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.Selectable
#include "UnityEngine/UI/Selectable.hpp"
// Including type: UnityEngine.EventSystems.IDragHandler
#include "UnityEngine/EventSystems/IDragHandler.hpp"
// Including type: UnityEngine.EventSystems.IInitializePotentialDragHandler
#include "UnityEngine/EventSystems/IInitializePotentialDragHandler.hpp"
// Including type: UnityEngine.UI.ICanvasElement
#include "UnityEngine/UI/ICanvasElement.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.DrivenRectTransformTracker
#include "UnityEngine/DrivenRectTransformTracker.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
  // Skipping declaration: Direction because it is already included!
  // Forward declaring type: CanvasUpdate
  struct CanvasUpdate;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
  // Forward declaring type: AxisEventData
  class AxisEventData;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x15A
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.Slider
  // [] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: CD8800
  // [ExecuteAlways] Offset: CD8800
  // [RequireComponent] Offset: CD8800
  class Slider : public UnityEngine::UI::Selectable/*, public UnityEngine::EventSystems::IDragHandler, public UnityEngine::EventSystems::IInitializePotentialDragHandler, public UnityEngine::UI::ICanvasElement*/ {
    public:
    // Nested type: UnityEngine::UI::Slider::Direction
    struct Direction;
    // Nested type: UnityEngine::UI::Slider::SliderEvent
    class SliderEvent;
    // Nested type: UnityEngine::UI::Slider::Axis
    struct Axis;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.UI.Slider/Direction
    // [] Offset: FFFFFFFF
    struct Direction/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Direction
      constexpr Direction(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.UI.Slider/Direction LeftToRight
      static constexpr const int LeftToRight = 0;
      // Get static field: static public UnityEngine.UI.Slider/Direction LeftToRight
      static UnityEngine::UI::Slider::Direction _get_LeftToRight();
      // Set static field: static public UnityEngine.UI.Slider/Direction LeftToRight
      static void _set_LeftToRight(UnityEngine::UI::Slider::Direction value);
      // static field const value: static public UnityEngine.UI.Slider/Direction RightToLeft
      static constexpr const int RightToLeft = 1;
      // Get static field: static public UnityEngine.UI.Slider/Direction RightToLeft
      static UnityEngine::UI::Slider::Direction _get_RightToLeft();
      // Set static field: static public UnityEngine.UI.Slider/Direction RightToLeft
      static void _set_RightToLeft(UnityEngine::UI::Slider::Direction value);
      // static field const value: static public UnityEngine.UI.Slider/Direction BottomToTop
      static constexpr const int BottomToTop = 2;
      // Get static field: static public UnityEngine.UI.Slider/Direction BottomToTop
      static UnityEngine::UI::Slider::Direction _get_BottomToTop();
      // Set static field: static public UnityEngine.UI.Slider/Direction BottomToTop
      static void _set_BottomToTop(UnityEngine::UI::Slider::Direction value);
      // static field const value: static public UnityEngine.UI.Slider/Direction TopToBottom
      static constexpr const int TopToBottom = 3;
      // Get static field: static public UnityEngine.UI.Slider/Direction TopToBottom
      static UnityEngine::UI::Slider::Direction _get_TopToBottom();
      // Set static field: static public UnityEngine.UI.Slider/Direction TopToBottom
      static void _set_TopToBottom(UnityEngine::UI::Slider::Direction value);
    }; // UnityEngine.UI.Slider/Direction
    #pragma pack(pop)
    static check_size<sizeof(Slider::Direction), 0 + sizeof(int)> __UnityEngine_UI_Slider_DirectionSizeCheck;
    static_assert(sizeof(Slider::Direction) == 0x4);
    // private UnityEngine.RectTransform m_FillRect
    // Size: 0x8
    // Offset: 0xF8
    UnityEngine::RectTransform* m_FillRect;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.RectTransform m_HandleRect
    // Size: 0x8
    // Offset: 0x100
    UnityEngine::RectTransform* m_HandleRect;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // [SpaceAttribute] Offset: 0xCDA7F8
    // private UnityEngine.UI.Slider/Direction m_Direction
    // Size: 0x4
    // Offset: 0x108
    UnityEngine::UI::Slider::Direction m_Direction;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Slider::Direction) == 0x4);
    // private System.Single m_MinValue
    // Size: 0x4
    // Offset: 0x10C
    float m_MinValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_MaxValue
    // Size: 0x4
    // Offset: 0x110
    float m_MaxValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean m_WholeNumbers
    // Size: 0x1
    // Offset: 0x114
    bool m_WholeNumbers;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_WholeNumbers and: m_Value
    char __padding5[0x3] = {};
    // protected System.Single m_Value
    // Size: 0x4
    // Offset: 0x118
    float m_Value;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: m_Value and: m_OnValueChanged
    char __padding6[0x4] = {};
    // [SpaceAttribute] Offset: 0xCDA870
    // private UnityEngine.UI.Slider/SliderEvent m_OnValueChanged
    // Size: 0x8
    // Offset: 0x120
    UnityEngine::UI::Slider::SliderEvent* m_OnValueChanged;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Slider::SliderEvent*) == 0x8);
    // private UnityEngine.UI.Image m_FillImage
    // Size: 0x8
    // Offset: 0x128
    UnityEngine::UI::Image* m_FillImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.Transform m_FillTransform
    // Size: 0x8
    // Offset: 0x130
    UnityEngine::Transform* m_FillTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.RectTransform m_FillContainerRect
    // Size: 0x8
    // Offset: 0x138
    UnityEngine::RectTransform* m_FillContainerRect;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.Transform m_HandleTransform
    // Size: 0x8
    // Offset: 0x140
    UnityEngine::Transform* m_HandleTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.RectTransform m_HandleContainerRect
    // Size: 0x8
    // Offset: 0x148
    UnityEngine::RectTransform* m_HandleContainerRect;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.Vector2 m_Offset
    // Size: 0x8
    // Offset: 0x150
    UnityEngine::Vector2 m_Offset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private UnityEngine.DrivenRectTransformTracker m_Tracker
    // Size: 0x1
    // Offset: 0x158
    UnityEngine::DrivenRectTransformTracker m_Tracker;
    // Field size check
    static_assert(sizeof(UnityEngine::DrivenRectTransformTracker) == 0x1);
    // private System.Boolean m_DelayedUpdateVisuals
    // Size: 0x1
    // Offset: 0x159
    bool m_DelayedUpdateVisuals;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Slider
    Slider(UnityEngine::RectTransform* m_FillRect_ = {}, UnityEngine::RectTransform* m_HandleRect_ = {}, UnityEngine::UI::Slider::Direction m_Direction_ = {}, float m_MinValue_ = {}, float m_MaxValue_ = {}, bool m_WholeNumbers_ = {}, float m_Value_ = {}, UnityEngine::UI::Slider::SliderEvent* m_OnValueChanged_ = {}, UnityEngine::UI::Image* m_FillImage_ = {}, UnityEngine::Transform* m_FillTransform_ = {}, UnityEngine::RectTransform* m_FillContainerRect_ = {}, UnityEngine::Transform* m_HandleTransform_ = {}, UnityEngine::RectTransform* m_HandleContainerRect_ = {}, UnityEngine::Vector2 m_Offset_ = {}, UnityEngine::DrivenRectTransformTracker m_Tracker_ = {}, bool m_DelayedUpdateVisuals_ = {}) noexcept : m_FillRect{m_FillRect_}, m_HandleRect{m_HandleRect_}, m_Direction{m_Direction_}, m_MinValue{m_MinValue_}, m_MaxValue{m_MaxValue_}, m_WholeNumbers{m_WholeNumbers_}, m_Value{m_Value_}, m_OnValueChanged{m_OnValueChanged_}, m_FillImage{m_FillImage_}, m_FillTransform{m_FillTransform_}, m_FillContainerRect{m_FillContainerRect_}, m_HandleTransform{m_HandleTransform_}, m_HandleContainerRect{m_HandleContainerRect_}, m_Offset{m_Offset_}, m_Tracker{m_Tracker_}, m_DelayedUpdateVisuals{m_DelayedUpdateVisuals_} {}
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IDragHandler
    operator UnityEngine::EventSystems::IDragHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IDragHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IInitializePotentialDragHandler
    operator UnityEngine::EventSystems::IInitializePotentialDragHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IInitializePotentialDragHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::UI::ICanvasElement
    operator UnityEngine::UI::ICanvasElement() noexcept {
      return *reinterpret_cast<UnityEngine::UI::ICanvasElement*>(this);
    }
    // public UnityEngine.RectTransform get_fillRect()
    // Offset: 0x1842038
    UnityEngine::RectTransform* get_fillRect();
    // public System.Void set_fillRect(UnityEngine.RectTransform value)
    // Offset: 0x1842040
    void set_fillRect(UnityEngine::RectTransform* value);
    // public UnityEngine.RectTransform get_handleRect()
    // Offset: 0x1842644
    UnityEngine::RectTransform* get_handleRect();
    // public System.Void set_handleRect(UnityEngine.RectTransform value)
    // Offset: 0x184264C
    void set_handleRect(UnityEngine::RectTransform* value);
    // public UnityEngine.UI.Slider/Direction get_direction()
    // Offset: 0x18426D0
    UnityEngine::UI::Slider::Direction get_direction();
    // public System.Void set_direction(UnityEngine.UI.Slider/Direction value)
    // Offset: 0x18426D8
    void set_direction(UnityEngine::UI::Slider::Direction value);
    // public System.Single get_minValue()
    // Offset: 0x1842754
    float get_minValue();
    // public System.Void set_minValue(System.Single value)
    // Offset: 0x184275C
    void set_minValue(float value);
    // public System.Single get_maxValue()
    // Offset: 0x18427F4
    float get_maxValue();
    // public System.Void set_maxValue(System.Single value)
    // Offset: 0x18427FC
    void set_maxValue(float value);
    // public System.Boolean get_wholeNumbers()
    // Offset: 0x1842894
    bool get_wholeNumbers();
    // public System.Void set_wholeNumbers(System.Boolean value)
    // Offset: 0x184289C
    void set_wholeNumbers(bool value);
    // public System.Single get_value()
    // Offset: 0x1842934
    float get_value_NEW();
    // public System.Void set_value(System.Single value)
    // Offset: 0x1842A20
    void set_value_NEW(float value);
    // public System.Void SetValueWithoutNotify(System.Single input)
    // Offset: 0x1842A34
    void SetValueWithoutNotify_NEW(float input);
    // public System.Single get_normalizedValue()
    // Offset: 0x1842A48
    float get_normalizedValue();
    // public System.Void set_normalizedValue(System.Single value)
    // Offset: 0x1842B34
    void set_normalizedValue(float value);
    // public UnityEngine.UI.Slider/SliderEvent get_onValueChanged()
    // Offset: 0x1842BD4
    UnityEngine::UI::Slider::SliderEvent* get_onValueChanged();
    // public System.Void set_onValueChanged(UnityEngine.UI.Slider/SliderEvent value)
    // Offset: 0x1842BDC
    void set_onValueChanged(UnityEngine::UI::Slider::SliderEvent* value);
    // private System.Single get_stepSize()
    // Offset: 0x1842BE4
    float get_stepSize();
    // public System.Void Rebuild(UnityEngine.UI.CanvasUpdate executing)
    // Offset: 0x1842CCC
    void Rebuild_NEW(UnityEngine::UI::CanvasUpdate executing);
    // public System.Void LayoutComplete()
    // Offset: 0x1842CD0
    void LayoutComplete_NEW();
    // public System.Void GraphicUpdateComplete()
    // Offset: 0x1842CD4
    void GraphicUpdateComplete_NEW();
    // protected System.Void Update()
    // Offset: 0x1842D4C
    void Update_NEW();
    // private System.Void UpdateCachedReferences()
    // Offset: 0x18420C4
    void UpdateCachedReferences();
    // private System.Single ClampValue(System.Single input)
    // Offset: 0x1842FC8
    float ClampValue(float input);
    // protected System.Void Set(System.Single input, System.Boolean sendCallback)
    // Offset: 0x1843118
    void Set_NEW(float input, bool sendCallback);
    // private UnityEngine.UI.Slider/Axis get_axis()
    // Offset: 0x1843108
    UnityEngine::UI::Slider::Axis get_axis();
    // private System.Boolean get_reverseValue()
    // Offset: 0x18430F4
    bool get_reverseValue();
    // private System.Void UpdateVisuals()
    // Offset: 0x1842384
    void UpdateVisuals();
    // private System.Void UpdateDrag(UnityEngine.EventSystems.PointerEventData eventData, UnityEngine.Camera cam)
    // Offset: 0x184322C
    void UpdateDrag(UnityEngine::EventSystems::PointerEventData* eventData, UnityEngine::Camera* cam);
    // private System.Boolean MayDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x18434D0
    bool MayDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x18436FC
    void OnDrag_NEW(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1843A58
    void OnInitializePotentialDrag_NEW(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void SetDirection(UnityEngine.UI.Slider/Direction direction, System.Boolean includeRectLayouts)
    // Offset: 0x1843A70
    void SetDirection(UnityEngine::UI::Slider::Direction direction, bool includeRectLayouts);
    // private UnityEngine.Transform UnityEngine.UI.ICanvasElement.get_transform()
    // Offset: 0x1843C04
    UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform_NEW();
    // protected System.Void .ctor()
    // Offset: 0x1842C10
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Slider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Slider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Slider*, creationType>()));
    }
    // protected override System.Void OnEnable()
    // Offset: 0x1842CD8
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x1842D20
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnDisable()
    void OnDisable();
    // protected override System.Void OnDidApplyAnimationProperties()
    // Offset: 0x1842D94
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnDidApplyAnimationProperties()
    void OnDidApplyAnimationProperties();
    // protected override System.Void OnRectTransformDimensionsChange()
    // Offset: 0x18431E4
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnRectTransformDimensionsChange_NEW()
    void OnRectTransformDimensionsChange();
    // public override System.Void OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1843538
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnPointerDown_NEW(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerDown(UnityEngine::EventSystems::PointerEventData* eventData);
    // public override System.Void OnMove(UnityEngine.EventSystems.AxisEventData eventData)
    // Offset: 0x1843750
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnMove_NEW(UnityEngine.EventSystems.AxisEventData eventData)
    void OnMove(UnityEngine::EventSystems::AxisEventData* eventData);
    // public override UnityEngine.UI.Selectable FindSelectableOnLeft()
    // Offset: 0x18439C8
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: UnityEngine.UI.Selectable Selectable::FindSelectableOnLeft_NEW()
    UnityEngine::UI::Selectable* FindSelectableOnLeft();
    // public override UnityEngine.UI.Selectable FindSelectableOnRight()
    // Offset: 0x18439EC
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: UnityEngine.UI.Selectable Selectable::FindSelectableOnRight_NEW()
    UnityEngine::UI::Selectable* FindSelectableOnRight();
    // public override UnityEngine.UI.Selectable FindSelectableOnUp()
    // Offset: 0x1843A10
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: UnityEngine.UI.Selectable Selectable::FindSelectableOnUp_NEW()
    UnityEngine::UI::Selectable* FindSelectableOnUp();
    // public override UnityEngine.UI.Selectable FindSelectableOnDown()
    // Offset: 0x1843A34
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: UnityEngine.UI.Selectable Selectable::FindSelectableOnDown_NEW()
    UnityEngine::UI::Selectable* FindSelectableOnDown();
  }; // UnityEngine.UI.Slider
  #pragma pack(pop)
  static check_size<sizeof(Slider), 345 + sizeof(bool)> __UnityEngine_UI_SliderSizeCheck;
  static_assert(sizeof(Slider) == 0x15A);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Slider*, "UnityEngine.UI", "Slider");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Slider::Direction, "UnityEngine.UI", "Slider/Direction");
