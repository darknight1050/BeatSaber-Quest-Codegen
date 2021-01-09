// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.BaseEventData
#include "UnityEngine/EventSystems/BaseEventData.hpp"
// Including type: UnityEngine.EventSystems.RaycastResult
#include "UnityEngine/EventSystems/RaycastResult.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
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
  // Autogenerated type: UnityEngine.EventSystems.PointerEventData
  // [] Offset: FFFFFFFF
  class PointerEventData : public UnityEngine::EventSystems::BaseEventData {
    public:
    // Nested type: UnityEngine::EventSystems::PointerEventData::InputButton
    struct InputButton;
    // Nested type: UnityEngine::EventSystems::PointerEventData::FramePressState
    struct FramePressState;
    // Size: 0x4
    // Autogenerated type: UnityEngine.EventSystems.PointerEventData/InputButton
    // [] Offset: FFFFFFFF
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
    static check_size<sizeof(PointerEventData::InputButton), 0 + sizeof(int)> __UnityEngine_EventSystems_PointerEventData_InputButtonSizeCheck;
    static_assert(sizeof(PointerEventData::InputButton) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD7F614
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
    // [CompilerGeneratedAttribute] Offset: 0xD7F624
    // private UnityEngine.GameObject <lastPress>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::GameObject* lastPress;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD7F634
    // private UnityEngine.GameObject <rawPointerPress>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::GameObject* rawPointerPress;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD7F644
    // private UnityEngine.GameObject <pointerDrag>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::GameObject* pointerDrag;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD7F654
    // private UnityEngine.EventSystems.RaycastResult <pointerCurrentRaycast>k__BackingField
    // Size: 0x48
    // Offset: 0x48
    UnityEngine::EventSystems::RaycastResult pointerCurrentRaycast;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::RaycastResult) == 0x48);
    // [CompilerGeneratedAttribute] Offset: 0xD7F664
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
    // [CompilerGeneratedAttribute] Offset: 0xD7F674
    // private System.Boolean <eligibleForClick>k__BackingField
    // Size: 0x1
    // Offset: 0xE0
    bool eligibleForClick;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: eligibleForClick and: pointerId
    char __padding8[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xD7F684
    // private System.Int32 <pointerId>k__BackingField
    // Size: 0x4
    // Offset: 0xE4
    int pointerId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD7F694
    // private UnityEngine.Vector2 <position>k__BackingField
    // Size: 0x8
    // Offset: 0xE8
    UnityEngine::Vector2 position;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD7F6A4
    // private UnityEngine.Vector2 <delta>k__BackingField
    // Size: 0x8
    // Offset: 0xF0
    UnityEngine::Vector2 delta;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD7F6B4
    // private UnityEngine.Vector2 <pressPosition>k__BackingField
    // Size: 0x8
    // Offset: 0xF8
    UnityEngine::Vector2 pressPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD7F6C4
    // private UnityEngine.Vector3 <worldPosition>k__BackingField
    // Size: 0xC
    // Offset: 0x100
    UnityEngine::Vector3 worldPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [CompilerGeneratedAttribute] Offset: 0xD7F6D4
    // private UnityEngine.Vector3 <worldNormal>k__BackingField
    // Size: 0xC
    // Offset: 0x10C
    UnityEngine::Vector3 worldNormal;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [CompilerGeneratedAttribute] Offset: 0xD7F6E4
    // private System.Single <clickTime>k__BackingField
    // Size: 0x4
    // Offset: 0x118
    float clickTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD7F6F4
    // private System.Int32 <clickCount>k__BackingField
    // Size: 0x4
    // Offset: 0x11C
    int clickCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD7F704
    // private UnityEngine.Vector2 <scrollDelta>k__BackingField
    // Size: 0x8
    // Offset: 0x120
    UnityEngine::Vector2 scrollDelta;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD7F714
    // private System.Boolean <useDragThreshold>k__BackingField
    // Size: 0x1
    // Offset: 0x128
    bool useDragThreshold;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xD7F724
    // private System.Boolean <dragging>k__BackingField
    // Size: 0x1
    // Offset: 0x129
    bool dragging;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: dragging and: button
    char __padding19[0x2] = {};
    // [CompilerGeneratedAttribute] Offset: 0xD7F734
    // private UnityEngine.EventSystems.PointerEventData/InputButton <button>k__BackingField
    // Size: 0x4
    // Offset: 0x12C
    UnityEngine::EventSystems::PointerEventData::InputButton button;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::PointerEventData::InputButton) == 0x4);
    // Creating value type constructor for type: PointerEventData
    PointerEventData(UnityEngine::GameObject* pointerEnter_ = {}, UnityEngine::GameObject* m_PointerPress_ = {}, UnityEngine::GameObject* lastPress_ = {}, UnityEngine::GameObject* rawPointerPress_ = {}, UnityEngine::GameObject* pointerDrag_ = {}, UnityEngine::EventSystems::RaycastResult pointerCurrentRaycast_ = {}, UnityEngine::EventSystems::RaycastResult pointerPressRaycast_ = {}, System::Collections::Generic::List_1<UnityEngine::GameObject*>* hovered_ = {}, bool eligibleForClick_ = {}, int pointerId_ = {}, UnityEngine::Vector2 position_ = {}, UnityEngine::Vector2 delta_ = {}, UnityEngine::Vector2 pressPosition_ = {}, UnityEngine::Vector3 worldPosition_ = {}, UnityEngine::Vector3 worldNormal_ = {}, float clickTime_ = {}, int clickCount_ = {}, UnityEngine::Vector2 scrollDelta_ = {}, bool useDragThreshold_ = {}, bool dragging_ = {}, UnityEngine::EventSystems::PointerEventData::InputButton button_ = {}) noexcept : pointerEnter{pointerEnter_}, m_PointerPress{m_PointerPress_}, lastPress{lastPress_}, rawPointerPress{rawPointerPress_}, pointerDrag{pointerDrag_}, pointerCurrentRaycast{pointerCurrentRaycast_}, pointerPressRaycast{pointerPressRaycast_}, hovered{hovered_}, eligibleForClick{eligibleForClick_}, pointerId{pointerId_}, position{position_}, delta{delta_}, pressPosition{pressPosition_}, worldPosition{worldPosition_}, worldNormal{worldNormal_}, clickTime{clickTime_}, clickCount{clickCount_}, scrollDelta{scrollDelta_}, useDragThreshold{useDragThreshold_}, dragging{dragging_}, button{button_} {}
    // public UnityEngine.GameObject get_pointerEnter()
    // Offset: 0x1150210
    UnityEngine::GameObject* get_pointerEnter();
    // public System.Void set_pointerEnter(UnityEngine.GameObject value)
    // Offset: 0x1150218
    void set_pointerEnter(UnityEngine::GameObject* value);
    // public UnityEngine.GameObject get_lastPress()
    // Offset: 0x1150220
    UnityEngine::GameObject* get_lastPress();
    // private System.Void set_lastPress(UnityEngine.GameObject value)
    // Offset: 0x1150228
    void set_lastPress(UnityEngine::GameObject* value);
    // public UnityEngine.GameObject get_rawPointerPress()
    // Offset: 0x1150230
    UnityEngine::GameObject* get_rawPointerPress();
    // public System.Void set_rawPointerPress(UnityEngine.GameObject value)
    // Offset: 0x1150238
    void set_rawPointerPress(UnityEngine::GameObject* value);
    // public UnityEngine.GameObject get_pointerDrag()
    // Offset: 0x1150240
    UnityEngine::GameObject* get_pointerDrag();
    // public System.Void set_pointerDrag(UnityEngine.GameObject value)
    // Offset: 0x1150248
    void set_pointerDrag(UnityEngine::GameObject* value);
    // public UnityEngine.EventSystems.RaycastResult get_pointerCurrentRaycast()
    // Offset: 0x1150250
    UnityEngine::EventSystems::RaycastResult get_pointerCurrentRaycast();
    // public System.Void set_pointerCurrentRaycast(UnityEngine.EventSystems.RaycastResult value)
    // Offset: 0x1150260
    void set_pointerCurrentRaycast(UnityEngine::EventSystems::RaycastResult value);
    // public UnityEngine.EventSystems.RaycastResult get_pointerPressRaycast()
    // Offset: 0x1150290
    UnityEngine::EventSystems::RaycastResult get_pointerPressRaycast();
    // public System.Void set_pointerPressRaycast(UnityEngine.EventSystems.RaycastResult value)
    // Offset: 0x11502A0
    void set_pointerPressRaycast(UnityEngine::EventSystems::RaycastResult value);
    // public System.Boolean get_eligibleForClick()
    // Offset: 0x11502D0
    bool get_eligibleForClick();
    // public System.Void set_eligibleForClick(System.Boolean value)
    // Offset: 0x11502D8
    void set_eligibleForClick(bool value);
    // public System.Int32 get_pointerId()
    // Offset: 0x11502E4
    int get_pointerId();
    // public System.Void set_pointerId(System.Int32 value)
    // Offset: 0x11502EC
    void set_pointerId(int value);
    // public UnityEngine.Vector2 get_position()
    // Offset: 0x11502F4
    UnityEngine::Vector2 get_position();
    // public System.Void set_position(UnityEngine.Vector2 value)
    // Offset: 0x11502FC
    void set_position(UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_delta()
    // Offset: 0x1150304
    UnityEngine::Vector2 get_delta();
    // public System.Void set_delta(UnityEngine.Vector2 value)
    // Offset: 0x115030C
    void set_delta(UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_pressPosition()
    // Offset: 0x1150314
    UnityEngine::Vector2 get_pressPosition();
    // public System.Void set_pressPosition(UnityEngine.Vector2 value)
    // Offset: 0x115031C
    void set_pressPosition(UnityEngine::Vector2 value);
    // public UnityEngine.Vector3 get_worldPosition()
    // Offset: 0x1150324
    UnityEngine::Vector3 get_worldPosition();
    // public System.Void set_worldPosition(UnityEngine.Vector3 value)
    // Offset: 0x1150334
    void set_worldPosition(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_worldNormal()
    // Offset: 0x1150344
    UnityEngine::Vector3 get_worldNormal();
    // public System.Void set_worldNormal(UnityEngine.Vector3 value)
    // Offset: 0x1150354
    void set_worldNormal(UnityEngine::Vector3 value);
    // public System.Single get_clickTime()
    // Offset: 0x1150364
    float get_clickTime();
    // public System.Void set_clickTime(System.Single value)
    // Offset: 0x115036C
    void set_clickTime(float value);
    // public System.Int32 get_clickCount()
    // Offset: 0x1150374
    int get_clickCount();
    // public System.Void set_clickCount(System.Int32 value)
    // Offset: 0x115037C
    void set_clickCount(int value);
    // public UnityEngine.Vector2 get_scrollDelta()
    // Offset: 0x1150384
    UnityEngine::Vector2 get_scrollDelta();
    // public System.Void set_scrollDelta(UnityEngine.Vector2 value)
    // Offset: 0x1150390
    void set_scrollDelta(UnityEngine::Vector2 value);
    // public System.Boolean get_useDragThreshold()
    // Offset: 0x115039C
    bool get_useDragThreshold();
    // public System.Void set_useDragThreshold(System.Boolean value)
    // Offset: 0x11503A4
    void set_useDragThreshold(bool value);
    // public System.Boolean get_dragging()
    // Offset: 0x11503B0
    bool get_dragging();
    // public System.Void set_dragging(System.Boolean value)
    // Offset: 0x11503B8
    void set_dragging(bool value);
    // public UnityEngine.EventSystems.PointerEventData/InputButton get_button()
    // Offset: 0x11503C4
    UnityEngine::EventSystems::PointerEventData::InputButton get_button();
    // public System.Void set_button(UnityEngine.EventSystems.PointerEventData/InputButton value)
    // Offset: 0x11503CC
    void set_button(UnityEngine::EventSystems::PointerEventData::InputButton value);
    // public System.Boolean IsPointerMoving()
    // Offset: 0x11504E4
    bool IsPointerMoving();
    // public System.Boolean IsScrolling()
    // Offset: 0x1150518
    bool IsScrolling();
    // public UnityEngine.Camera get_enterEventCamera()
    // Offset: 0x115054C
    UnityEngine::Camera* get_enterEventCamera();
    // public UnityEngine.Camera get_pressEventCamera()
    // Offset: 0x11505EC
    UnityEngine::Camera* get_pressEventCamera();
    // public UnityEngine.GameObject get_pointerPress()
    // Offset: 0x115068C
    UnityEngine::GameObject* get_pointerPress();
    // public System.Void set_pointerPress(UnityEngine.GameObject value)
    // Offset: 0x1150694
    void set_pointerPress(UnityEngine::GameObject* value);
    // public System.Void .ctor(UnityEngine.EventSystems.EventSystem eventSystem)
    // Offset: 0x11503D4
    // Implemented from: UnityEngine.EventSystems.BaseEventData
    // Base method: System.Void BaseEventData::.ctor(UnityEngine.EventSystems.EventSystem eventSystem)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PointerEventData* New_ctor(UnityEngine::EventSystems::EventSystem* eventSystem) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::EventSystems::PointerEventData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PointerEventData*, creationType>(eventSystem)));
    }
    // public override System.String ToString()
    // Offset: 0x1150748
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.EventSystems.PointerEventData
  static check_size<sizeof(PointerEventData), 300 + sizeof(UnityEngine::EventSystems::PointerEventData::InputButton)> __UnityEngine_EventSystems_PointerEventDataSizeCheck;
  static_assert(sizeof(PointerEventData) == 0x130);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::PointerEventData*, "UnityEngine.EventSystems", "PointerEventData");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::PointerEventData::InputButton, "UnityEngine.EventSystems", "PointerEventData/InputButton");
#pragma pack(pop)
