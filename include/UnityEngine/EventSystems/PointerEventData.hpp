// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.BaseEventData
#include "UnityEngine/EventSystems/BaseEventData.hpp"
// Including type: UnityEngine.EventSystems.RaycastResult
#include "UnityEngine/EventSystems/RaycastResult.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Skipping declaration: InputButton because it is already included!
  // Forward declaring type: EventSystem
  class EventSystem;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x130
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.PointerEventData
  class PointerEventData : public UnityEngine::EventSystems::BaseEventData {
    public:
    // Nested type: UnityEngine::EventSystems::PointerEventData::InputButton
    struct InputButton;
    // Nested type: UnityEngine::EventSystems::PointerEventData::FramePressState
    struct FramePressState;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.EventSystems.PointerEventData/InputButton
    struct InputButton/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: InputButton
      constexpr InputButton(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.EventSystems.PointerEventData/InputButton Left
      static constexpr const int Left = 0;
      // Get static field: static public UnityEngine.EventSystems.PointerEventData/InputButton Left
      static UnityEngine::EventSystems::PointerEventData::InputButton _get_Left();
      // Set static field: static public UnityEngine.EventSystems.PointerEventData/InputButton Left
      static void _set_Left(UnityEngine::EventSystems::PointerEventData::InputButton value);
      // static field const value: static public UnityEngine.EventSystems.PointerEventData/InputButton Right
      static constexpr const int Right = 1;
      // Get static field: static public UnityEngine.EventSystems.PointerEventData/InputButton Right
      static UnityEngine::EventSystems::PointerEventData::InputButton _get_Right();
      // Set static field: static public UnityEngine.EventSystems.PointerEventData/InputButton Right
      static void _set_Right(UnityEngine::EventSystems::PointerEventData::InputButton value);
      // static field const value: static public UnityEngine.EventSystems.PointerEventData/InputButton Middle
      static constexpr const int Middle = 2;
      // Get static field: static public UnityEngine.EventSystems.PointerEventData/InputButton Middle
      static UnityEngine::EventSystems::PointerEventData::InputButton _get_Middle();
      // Set static field: static public UnityEngine.EventSystems.PointerEventData/InputButton Middle
      static void _set_Middle(UnityEngine::EventSystems::PointerEventData::InputButton value);
    }; // UnityEngine.EventSystems.PointerEventData/InputButton
    #pragma pack(pop)
    static check_size<sizeof(PointerEventData::InputButton), 0 + sizeof(int)> __UnityEngine_EventSystems_PointerEventData_InputButtonSizeCheck;
    static_assert(sizeof(PointerEventData::InputButton) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDC8B3C
    // private UnityEngine.GameObject <pointerEnter>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::GameObject* pointerEnter;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject m_PointerPress
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::GameObject* m_PointerPress;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC8B4C
    // private UnityEngine.GameObject <lastPress>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::GameObject* lastPress;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC8B5C
    // private UnityEngine.GameObject <rawPointerPress>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::GameObject* rawPointerPress;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC8B6C
    // private UnityEngine.GameObject <pointerDrag>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::GameObject* pointerDrag;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC8B7C
    // private UnityEngine.EventSystems.RaycastResult <pointerCurrentRaycast>k__BackingField
    // Size: 0x48
    // Offset: 0x48
    UnityEngine::EventSystems::RaycastResult pointerCurrentRaycast;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::RaycastResult) == 0x48);
    // [CompilerGeneratedAttribute] Offset: 0xDC8B8C
    // private UnityEngine.EventSystems.RaycastResult <pointerPressRaycast>k__BackingField
    // Size: 0x48
    // Offset: 0x90
    UnityEngine::EventSystems::RaycastResult pointerPressRaycast;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::RaycastResult) == 0x48);
    // public System.Collections.Generic.List`1<UnityEngine.GameObject> hovered
    // Size: 0x8
    // Offset: 0xD8
    System::Collections::Generic::List_1<UnityEngine::GameObject*>* hovered;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::GameObject*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC8B9C
    // private System.Boolean <eligibleForClick>k__BackingField
    // Size: 0x1
    // Offset: 0xE0
    bool eligibleForClick;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: eligibleForClick and: pointerId
    char __padding8[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDC8BAC
    // private System.Int32 <pointerId>k__BackingField
    // Size: 0x4
    // Offset: 0xE4
    int pointerId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDC8BBC
    // private UnityEngine.Vector2 <position>k__BackingField
    // Size: 0x8
    // Offset: 0xE8
    UnityEngine::Vector2 position;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC8BCC
    // private UnityEngine.Vector2 <delta>k__BackingField
    // Size: 0x8
    // Offset: 0xF0
    UnityEngine::Vector2 delta;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC8BDC
    // private UnityEngine.Vector2 <pressPosition>k__BackingField
    // Size: 0x8
    // Offset: 0xF8
    UnityEngine::Vector2 pressPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC8BEC
    // private UnityEngine.Vector3 <worldPosition>k__BackingField
    // Size: 0xC
    // Offset: 0x100
    UnityEngine::Vector3 worldPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [CompilerGeneratedAttribute] Offset: 0xDC8BFC
    // private UnityEngine.Vector3 <worldNormal>k__BackingField
    // Size: 0xC
    // Offset: 0x10C
    UnityEngine::Vector3 worldNormal;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [CompilerGeneratedAttribute] Offset: 0xDC8C0C
    // private System.Single <clickTime>k__BackingField
    // Size: 0x4
    // Offset: 0x118
    float clickTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDC8C1C
    // private System.Int32 <clickCount>k__BackingField
    // Size: 0x4
    // Offset: 0x11C
    int clickCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDC8C2C
    // private UnityEngine.Vector2 <scrollDelta>k__BackingField
    // Size: 0x8
    // Offset: 0x120
    UnityEngine::Vector2 scrollDelta;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC8C3C
    // private System.Boolean <useDragThreshold>k__BackingField
    // Size: 0x1
    // Offset: 0x128
    bool useDragThreshold;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDC8C4C
    // private System.Boolean <dragging>k__BackingField
    // Size: 0x1
    // Offset: 0x129
    bool dragging;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: dragging and: button
    char __padding19[0x2] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDC8C5C
    // private UnityEngine.EventSystems.PointerEventData/InputButton <button>k__BackingField
    // Size: 0x4
    // Offset: 0x12C
    UnityEngine::EventSystems::PointerEventData::InputButton button;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::PointerEventData::InputButton) == 0x4);
    // Creating value type constructor for type: PointerEventData
    PointerEventData(UnityEngine::GameObject* pointerEnter_ = {}, UnityEngine::GameObject* m_PointerPress_ = {}, UnityEngine::GameObject* lastPress_ = {}, UnityEngine::GameObject* rawPointerPress_ = {}, UnityEngine::GameObject* pointerDrag_ = {}, UnityEngine::EventSystems::RaycastResult pointerCurrentRaycast_ = {}, UnityEngine::EventSystems::RaycastResult pointerPressRaycast_ = {}, System::Collections::Generic::List_1<UnityEngine::GameObject*>* hovered_ = {}, bool eligibleForClick_ = {}, int pointerId_ = {}, UnityEngine::Vector2 position_ = {}, UnityEngine::Vector2 delta_ = {}, UnityEngine::Vector2 pressPosition_ = {}, UnityEngine::Vector3 worldPosition_ = {}, UnityEngine::Vector3 worldNormal_ = {}, float clickTime_ = {}, int clickCount_ = {}, UnityEngine::Vector2 scrollDelta_ = {}, bool useDragThreshold_ = {}, bool dragging_ = {}, UnityEngine::EventSystems::PointerEventData::InputButton button_ = {}) noexcept : pointerEnter{pointerEnter_}, m_PointerPress{m_PointerPress_}, lastPress{lastPress_}, rawPointerPress{rawPointerPress_}, pointerDrag{pointerDrag_}, pointerCurrentRaycast{pointerCurrentRaycast_}, pointerPressRaycast{pointerPressRaycast_}, hovered{hovered_}, eligibleForClick{eligibleForClick_}, pointerId{pointerId_}, position{position_}, delta{delta_}, pressPosition{pressPosition_}, worldPosition{worldPosition_}, worldNormal{worldNormal_}, clickTime{clickTime_}, clickCount{clickCount_}, scrollDelta{scrollDelta_}, useDragThreshold{useDragThreshold_}, dragging{dragging_}, button{button_} {}
    // public UnityEngine.GameObject get_pointerEnter()
    // Offset: 0x1417CC8
    UnityEngine::GameObject* get_pointerEnter();
    // public System.Void set_pointerEnter(UnityEngine.GameObject value)
    // Offset: 0x1417CD0
    void set_pointerEnter(UnityEngine::GameObject* value);
    // public UnityEngine.GameObject get_lastPress()
    // Offset: 0x1417CD8
    UnityEngine::GameObject* get_lastPress();
    // private System.Void set_lastPress(UnityEngine.GameObject value)
    // Offset: 0x1417CE0
    void set_lastPress(UnityEngine::GameObject* value);
    // public UnityEngine.GameObject get_rawPointerPress()
    // Offset: 0x1417CE8
    UnityEngine::GameObject* get_rawPointerPress();
    // public System.Void set_rawPointerPress(UnityEngine.GameObject value)
    // Offset: 0x1417CF0
    void set_rawPointerPress(UnityEngine::GameObject* value);
    // public UnityEngine.GameObject get_pointerDrag()
    // Offset: 0x1417CF8
    UnityEngine::GameObject* get_pointerDrag();
    // public System.Void set_pointerDrag(UnityEngine.GameObject value)
    // Offset: 0x1417D00
    void set_pointerDrag(UnityEngine::GameObject* value);
    // public UnityEngine.EventSystems.RaycastResult get_pointerCurrentRaycast()
    // Offset: 0x1417D08
    UnityEngine::EventSystems::RaycastResult get_pointerCurrentRaycast();
    // public System.Void set_pointerCurrentRaycast(UnityEngine.EventSystems.RaycastResult value)
    // Offset: 0x1417D18
    void set_pointerCurrentRaycast(UnityEngine::EventSystems::RaycastResult value);
    // public UnityEngine.EventSystems.RaycastResult get_pointerPressRaycast()
    // Offset: 0x1417D34
    UnityEngine::EventSystems::RaycastResult get_pointerPressRaycast();
    // public System.Void set_pointerPressRaycast(UnityEngine.EventSystems.RaycastResult value)
    // Offset: 0x1417D44
    void set_pointerPressRaycast(UnityEngine::EventSystems::RaycastResult value);
    // public System.Boolean get_eligibleForClick()
    // Offset: 0x1417D60
    bool get_eligibleForClick();
    // public System.Void set_eligibleForClick(System.Boolean value)
    // Offset: 0x1417D68
    void set_eligibleForClick(bool value);
    // public System.Int32 get_pointerId()
    // Offset: 0x1417D74
    int get_pointerId();
    // public System.Void set_pointerId(System.Int32 value)
    // Offset: 0x1417D7C
    void set_pointerId(int value);
    // public UnityEngine.Vector2 get_position()
    // Offset: 0x1417D84
    UnityEngine::Vector2 get_position();
    // public System.Void set_position(UnityEngine.Vector2 value)
    // Offset: 0x1417D8C
    void set_position(UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_delta()
    // Offset: 0x1417D94
    UnityEngine::Vector2 get_delta();
    // public System.Void set_delta(UnityEngine.Vector2 value)
    // Offset: 0x1417D9C
    void set_delta(UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_pressPosition()
    // Offset: 0x1417DA4
    UnityEngine::Vector2 get_pressPosition();
    // public System.Void set_pressPosition(UnityEngine.Vector2 value)
    // Offset: 0x1417DAC
    void set_pressPosition(UnityEngine::Vector2 value);
    // public UnityEngine.Vector3 get_worldPosition()
    // Offset: 0x1417DB4
    UnityEngine::Vector3 get_worldPosition();
    // public System.Void set_worldPosition(UnityEngine.Vector3 value)
    // Offset: 0x1417DC4
    void set_worldPosition(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_worldNormal()
    // Offset: 0x1417DD4
    UnityEngine::Vector3 get_worldNormal();
    // public System.Void set_worldNormal(UnityEngine.Vector3 value)
    // Offset: 0x1417DE4
    void set_worldNormal(UnityEngine::Vector3 value);
    // public System.Single get_clickTime()
    // Offset: 0x1417DF4
    float get_clickTime();
    // public System.Void set_clickTime(System.Single value)
    // Offset: 0x1417DFC
    void set_clickTime(float value);
    // public System.Int32 get_clickCount()
    // Offset: 0x1417E04
    int get_clickCount();
    // public System.Void set_clickCount(System.Int32 value)
    // Offset: 0x1417E0C
    void set_clickCount(int value);
    // public UnityEngine.Vector2 get_scrollDelta()
    // Offset: 0x1417E14
    UnityEngine::Vector2 get_scrollDelta();
    // public System.Void set_scrollDelta(UnityEngine.Vector2 value)
    // Offset: 0x1417E20
    void set_scrollDelta(UnityEngine::Vector2 value);
    // public System.Boolean get_useDragThreshold()
    // Offset: 0x1417E2C
    bool get_useDragThreshold();
    // public System.Void set_useDragThreshold(System.Boolean value)
    // Offset: 0x1417E34
    void set_useDragThreshold(bool value);
    // public System.Boolean get_dragging()
    // Offset: 0x1417E40
    bool get_dragging();
    // public System.Void set_dragging(System.Boolean value)
    // Offset: 0x1417E48
    void set_dragging(bool value);
    // public UnityEngine.EventSystems.PointerEventData/InputButton get_button()
    // Offset: 0x1417E54
    UnityEngine::EventSystems::PointerEventData::InputButton get_button();
    // public System.Void set_button(UnityEngine.EventSystems.PointerEventData/InputButton value)
    // Offset: 0x1417E5C
    void set_button(UnityEngine::EventSystems::PointerEventData::InputButton value);
    // public System.Boolean IsPointerMoving()
    // Offset: 0x1417F58
    bool IsPointerMoving();
    // public System.Boolean IsScrolling()
    // Offset: 0x1417F8C
    bool IsScrolling();
    // public UnityEngine.Camera get_enterEventCamera()
    // Offset: 0x1417FC0
    UnityEngine::Camera* get_enterEventCamera();
    // public UnityEngine.Camera get_pressEventCamera()
    // Offset: 0x1418060
    UnityEngine::Camera* get_pressEventCamera();
    // public UnityEngine.GameObject get_pointerPress()
    // Offset: 0x1418100
    UnityEngine::GameObject* get_pointerPress();
    // public System.Void set_pointerPress(UnityEngine.GameObject value)
    // Offset: 0x1418108
    void set_pointerPress(UnityEngine::GameObject* value);
    // public System.Void .ctor(UnityEngine.EventSystems.EventSystem eventSystem)
    // Offset: 0x1417E64
    // Implemented from: UnityEngine.EventSystems.BaseEventData
    // Base method: System.Void BaseEventData::.ctor(UnityEngine.EventSystems.EventSystem eventSystem)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PointerEventData* New_ctor(UnityEngine::EventSystems::EventSystem* eventSystem) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::EventSystems::PointerEventData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PointerEventData*, creationType>(eventSystem)));
    }
    // public override System.String ToString()
    // Offset: 0x1418194
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.EventSystems.PointerEventData
  #pragma pack(pop)
  static check_size<sizeof(PointerEventData), 300 + sizeof(UnityEngine::EventSystems::PointerEventData::InputButton)> __UnityEngine_EventSystems_PointerEventDataSizeCheck;
  static_assert(sizeof(PointerEventData) == 0x130);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::PointerEventData*, "UnityEngine.EventSystems", "PointerEventData");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::PointerEventData::InputButton, "UnityEngine.EventSystems", "PointerEventData/InputButton");
