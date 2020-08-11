// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.BaseInputModule
#include "UnityEngine/EventSystems/BaseInputModule.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: UnityEngine.EventSystems.PointerEventData
#include "UnityEngine/EventSystems/PointerEventData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Skipping declaration: BaseEventData because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector2 because it is already included!
  // Forward declaring type: Touch
  struct Touch;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Autogenerated type: UnityEngine.EventSystems.PointerInputModule
  class PointerInputModule : public UnityEngine::EventSystems::BaseInputModule {
    public:
    // Nested type: UnityEngine::EventSystems::PointerInputModule::ButtonState
    class ButtonState;
    // Nested type: UnityEngine::EventSystems::PointerInputModule::MouseState
    class MouseState;
    // Nested type: UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData
    class MouseButtonEventData;
    // static field const value: static public System.Int32 kMouseLeftId
    static constexpr const int kMouseLeftId = -1;
    // Get static field: static public System.Int32 kMouseLeftId
    static int _get_kMouseLeftId();
    // Set static field: static public System.Int32 kMouseLeftId
    static void _set_kMouseLeftId(int value);
    // static field const value: static public System.Int32 kMouseRightId
    static constexpr const int kMouseRightId = -2;
    // Get static field: static public System.Int32 kMouseRightId
    static int _get_kMouseRightId();
    // Set static field: static public System.Int32 kMouseRightId
    static void _set_kMouseRightId(int value);
    // static field const value: static public System.Int32 kMouseMiddleId
    static constexpr const int kMouseMiddleId = -3;
    // Get static field: static public System.Int32 kMouseMiddleId
    static int _get_kMouseMiddleId();
    // Set static field: static public System.Int32 kMouseMiddleId
    static void _set_kMouseMiddleId(int value);
    // static field const value: static public System.Int32 kFakeTouchesId
    static constexpr const int kFakeTouchesId = -4;
    // Get static field: static public System.Int32 kFakeTouchesId
    static int _get_kFakeTouchesId();
    // Set static field: static public System.Int32 kFakeTouchesId
    static void _set_kFakeTouchesId(int value);
    // protected System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> m_PointerData
    // Offset: 0x48
    System::Collections::Generic::Dictionary_2<int, UnityEngine::EventSystems::PointerEventData*>* m_PointerData;
    // private readonly UnityEngine.EventSystems.PointerInputModule/MouseState m_MouseState
    // Offset: 0x50
    UnityEngine::EventSystems::PointerInputModule::MouseState* m_MouseState;
    // protected System.Boolean GetPointerData(System.Int32 id, UnityEngine.EventSystems.PointerEventData data, System.Boolean create)
    // Offset: 0xDE962C
    bool GetPointerData(int id, UnityEngine::EventSystems::PointerEventData*& data, bool create);
    // protected System.Void RemovePointerData(UnityEngine.EventSystems.PointerEventData data)
    // Offset: 0xDE9718
    void RemovePointerData(UnityEngine::EventSystems::PointerEventData* data);
    // protected UnityEngine.EventSystems.PointerEventData GetTouchPointerEventData(UnityEngine.Touch input, System.Boolean pressed, System.Boolean released)
    // Offset: 0xDE9784
    UnityEngine::EventSystems::PointerEventData* GetTouchPointerEventData(UnityEngine::Touch input, bool& pressed, bool& released);
    // protected System.Void CopyFromTo(UnityEngine.EventSystems.PointerEventData from, UnityEngine.EventSystems.PointerEventData to)
    // Offset: 0xDE9A44
    void CopyFromTo(UnityEngine::EventSystems::PointerEventData* from, UnityEngine::EventSystems::PointerEventData* to);
    // protected UnityEngine.EventSystems.PointerEventData/FramePressState StateForMouseButton(System.Int32 buttonId)
    // Offset: 0xDE9ABC
    UnityEngine::EventSystems::PointerEventData::FramePressState StateForMouseButton(int buttonId);
    // protected UnityEngine.EventSystems.PointerInputModule/MouseState GetMousePointerEventData()
    // Offset: 0xDE9B44
    UnityEngine::EventSystems::PointerInputModule::MouseState* GetMousePointerEventData();
    // protected UnityEngine.EventSystems.PointerInputModule/MouseState GetMousePointerEventData(System.Int32 id)
    // Offset: 0xDE9B58
    UnityEngine::EventSystems::PointerInputModule::MouseState* GetMousePointerEventData(int id);
    // protected UnityEngine.EventSystems.PointerEventData GetLastPointerEventData(System.Int32 id)
    // Offset: 0xDE9ED4
    UnityEngine::EventSystems::PointerEventData* GetLastPointerEventData(int id);
    // static private System.Boolean ShouldStartDrag(UnityEngine.Vector2 pressPos, UnityEngine.Vector2 currentPos, System.Single threshold, System.Boolean useDragThreshold)
    // Offset: 0xDE9F00
    static bool ShouldStartDrag(UnityEngine::Vector2 pressPos, UnityEngine::Vector2 currentPos, float threshold, bool useDragThreshold);
    // protected System.Void ProcessMove(UnityEngine.EventSystems.PointerEventData pointerEvent)
    // Offset: 0xDE9FD0
    void ProcessMove(UnityEngine::EventSystems::PointerEventData* pointerEvent);
    // protected System.Void ProcessDrag(UnityEngine.EventSystems.PointerEventData pointerEvent)
    // Offset: 0xDEA010
    void ProcessDrag(UnityEngine::EventSystems::PointerEventData* pointerEvent);
    // protected System.Void ClearSelection()
    // Offset: 0xDEA39C
    void ClearSelection();
    // protected System.Void DeselectIfSelectionChanged(UnityEngine.GameObject currentOverGo, UnityEngine.EventSystems.BaseEventData pointerEvent)
    // Offset: 0xDEA6D0
    void DeselectIfSelectionChanged(UnityEngine::GameObject* currentOverGo, UnityEngine::EventSystems::BaseEventData* pointerEvent);
    // public override System.Boolean IsPointerOverGameObject(System.Int32 pointerId)
    // Offset: 0xDEA2F0
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Boolean BaseInputModule::IsPointerOverGameObject(System.Int32 pointerId)
    bool IsPointerOverGameObject(int pointerId);
    // public override System.String ToString()
    // Offset: 0xDEA4EC
    // Implemented from: UnityEngine.Object
    // Base method: System.String Object::ToString()
    ::CsString* ToString();
    // protected System.Void .ctor()
    // Offset: 0xDEA7BC
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PointerInputModule* New_ctor();
  }; // UnityEngine.EventSystems.PointerInputModule
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::PointerInputModule*, "UnityEngine.EventSystems", "PointerInputModule");
#pragma pack(pop)
