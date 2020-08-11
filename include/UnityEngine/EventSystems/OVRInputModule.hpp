// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.PointerInputModule
#include "UnityEngine/EventSystems/PointerInputModule.hpp"
// Including type: OVRInput/Button
#include "GlobalNamespace/OVRInput_Button.hpp"
// Including type: UnityEngine.KeyCode
#include "UnityEngine/KeyCode.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: OVRPointerEventData
  class OVRPointerEventData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRCursor
  class OVRCursor;
  // Forward declaring type: OVRRaycaster
  class OVRRaycaster;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Autogenerated type: UnityEngine.EventSystems.OVRInputModule
  class OVRInputModule : public UnityEngine::EventSystems::PointerInputModule {
    public:
    // Nested type: UnityEngine::EventSystems::OVRInputModule::InputMode
    struct InputMode;
    // public UnityEngine.Transform rayTransform
    // Offset: 0x58
    UnityEngine::Transform* rayTransform;
    // public OVRCursor m_Cursor
    // Offset: 0x60
    GlobalNamespace::OVRCursor* m_Cursor;
    // public OVRInput/Button joyPadClickButton
    // Offset: 0x68
    GlobalNamespace::OVRInput::Button joyPadClickButton;
    // public UnityEngine.KeyCode gazeClickKey
    // Offset: 0x6C
    UnityEngine::KeyCode gazeClickKey;
    // public System.Boolean performSphereCastForGazepointer
    // Offset: 0x70
    bool performSphereCastForGazepointer;
    // public System.Boolean useRightStickScroll
    // Offset: 0x71
    bool useRightStickScroll;
    // public System.Single rightStickDeadZone
    // Offset: 0x74
    float rightStickDeadZone;
    // public System.Boolean useSwipeScroll
    // Offset: 0x78
    bool useSwipeScroll;
    // public System.Single swipeDragThreshold
    // Offset: 0x7C
    float swipeDragThreshold;
    // public System.Single swipeDragScale
    // Offset: 0x80
    float swipeDragScale;
    // public System.Boolean InvertSwipeXAxis
    // Offset: 0x84
    bool InvertSwipeXAxis;
    // public OVRRaycaster activeGraphicRaycaster
    // Offset: 0x88
    GlobalNamespace::OVRRaycaster* activeGraphicRaycaster;
    // public System.Single angleDragThreshold
    // Offset: 0x90
    float angleDragThreshold;
    // private System.Single m_SpherecastRadius
    // Offset: 0x94
    float m_SpherecastRadius;
    // private System.Single m_NextAction
    // Offset: 0x98
    float m_NextAction;
    // private UnityEngine.Vector2 m_LastMousePosition
    // Offset: 0x9C
    UnityEngine::Vector2 m_LastMousePosition;
    // private UnityEngine.Vector2 m_MousePosition
    // Offset: 0xA4
    UnityEngine::Vector2 m_MousePosition;
    // private System.String m_HorizontalAxis
    // Offset: 0xB0
    ::CsString* m_HorizontalAxis;
    // private System.String m_VerticalAxis
    // Offset: 0xB8
    ::CsString* m_VerticalAxis;
    // private System.String m_SubmitButton
    // Offset: 0xC0
    ::CsString* m_SubmitButton;
    // private System.String m_CancelButton
    // Offset: 0xC8
    ::CsString* m_CancelButton;
    // private System.Single m_InputActionsPerSecond
    // Offset: 0xD0
    float m_InputActionsPerSecond;
    // private System.Boolean m_AllowActivationOnMobileDevice
    // Offset: 0xD4
    bool m_AllowActivationOnMobileDevice;
    // protected System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.OVRPointerEventData> m_VRRayPointerData
    // Offset: 0xD8
    System::Collections::Generic::Dictionary_2<int, UnityEngine::EventSystems::OVRPointerEventData*>* m_VRRayPointerData;
    // private readonly UnityEngine.EventSystems.PointerInputModule/MouseState m_MouseState
    // Offset: 0xE0
    UnityEngine::EventSystems::PointerInputModule::MouseState* m_MouseState;
    // public UnityEngine.EventSystems.OVRInputModule/InputMode get_inputMode()
    // Offset: 0x18E6E08
    UnityEngine::EventSystems::OVRInputModule::InputMode get_inputMode();
    // public System.Boolean get_allowActivationOnMobileDevice()
    // Offset: 0x18E6E10
    bool get_allowActivationOnMobileDevice();
    // public System.Void set_allowActivationOnMobileDevice(System.Boolean value)
    // Offset: 0x18E6E18
    void set_allowActivationOnMobileDevice(bool value);
    // public System.Single get_inputActionsPerSecond()
    // Offset: 0x18E6E24
    float get_inputActionsPerSecond();
    // public System.Void set_inputActionsPerSecond(System.Single value)
    // Offset: 0x18E6E2C
    void set_inputActionsPerSecond(float value);
    // public System.String get_horizontalAxis()
    // Offset: 0x18E6E34
    ::CsString* get_horizontalAxis();
    // public System.Void set_horizontalAxis(System.String value)
    // Offset: 0x18E6E3C
    void set_horizontalAxis(::CsString* value);
    // public System.String get_verticalAxis()
    // Offset: 0x18E6E44
    ::CsString* get_verticalAxis();
    // public System.Void set_verticalAxis(System.String value)
    // Offset: 0x18E6E4C
    void set_verticalAxis(::CsString* value);
    // public System.String get_submitButton()
    // Offset: 0x18E6E54
    ::CsString* get_submitButton();
    // public System.Void set_submitButton(System.String value)
    // Offset: 0x18E6E5C
    void set_submitButton(::CsString* value);
    // public System.String get_cancelButton()
    // Offset: 0x18E6E64
    ::CsString* get_cancelButton();
    // public System.Void set_cancelButton(System.String value)
    // Offset: 0x18E6E6C
    void set_cancelButton(::CsString* value);
    // private System.Boolean SendSubmitEventToSelectedObject()
    // Offset: 0x18E7444
    bool SendSubmitEventToSelectedObject();
    // private System.Boolean AllowMoveEventProcessing(System.Single time)
    // Offset: 0x18E7654
    bool AllowMoveEventProcessing(float time);
    // private UnityEngine.Vector2 GetRawMoveVector()
    // Offset: 0x18E76B4
    UnityEngine::Vector2 GetRawMoveVector();
    // private System.Boolean SendMoveEventToSelectedObject()
    // Offset: 0x18E779C
    bool SendMoveEventToSelectedObject();
    // private System.Boolean SendUpdateEventToSelectedObject()
    // Offset: 0x18E7994
    bool SendUpdateEventToSelectedObject();
    // private System.Void ProcessMousePress(UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData data)
    // Offset: 0x18E7AE8
    void ProcessMousePress(UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData* data);
    // private System.Void ProcessMouseEvent(UnityEngine.EventSystems.PointerInputModule/MouseState mouseData)
    // Offset: 0x18E8350
    void ProcessMouseEvent(UnityEngine::EventSystems::PointerInputModule::MouseState* mouseData);
    // static private System.Boolean UseMouse(System.Boolean pressed, System.Boolean released, UnityEngine.EventSystems.PointerEventData pointerData)
    // Offset: 0x18E85F0
    static bool UseMouse(bool pressed, bool released, UnityEngine::EventSystems::PointerEventData* pointerData);
    // protected System.Void CopyFromTo(UnityEngine.EventSystems.OVRPointerEventData from, UnityEngine.EventSystems.OVRPointerEventData to)
    // Offset: 0x18E86F4
    void CopyFromTo(UnityEngine::EventSystems::OVRPointerEventData* from, UnityEngine::EventSystems::OVRPointerEventData* to);
    // protected System.Boolean GetPointerData(System.Int32 id, UnityEngine.EventSystems.OVRPointerEventData data, System.Boolean create)
    // Offset: 0x18E87F8
    bool GetPointerData(int id, UnityEngine::EventSystems::OVRPointerEventData*& data, bool create);
    // static private UnityEngine.Vector3 GetRectTransformNormal(UnityEngine.RectTransform rectTransform)
    // Offset: 0x18E88F0
    static UnityEngine::Vector3 GetRectTransformNormal(UnityEngine::RectTransform* rectTransform);
    // protected UnityEngine.EventSystems.PointerInputModule/MouseState GetGazePointerData()
    // Offset: 0x18E8A70
    UnityEngine::EventSystems::PointerInputModule::MouseState* GetGazePointerData();
    // protected UnityEngine.EventSystems.PointerInputModule/MouseState GetCanvasPointerData()
    // Offset: 0x18E95BC
    UnityEngine::EventSystems::PointerInputModule::MouseState* GetCanvasPointerData();
    // private System.Boolean ShouldStartDrag(UnityEngine.EventSystems.PointerEventData pointerEvent)
    // Offset: 0x18E99A4
    bool ShouldStartDrag(UnityEngine::EventSystems::PointerEventData* pointerEvent);
    // static private System.Boolean IsPointerMoving(UnityEngine.EventSystems.PointerEventData pointerEvent)
    // Offset: 0x18E86B0
    static bool IsPointerMoving(UnityEngine::EventSystems::PointerEventData* pointerEvent);
    // protected UnityEngine.Vector2 SwipeAdjustedPosition(UnityEngine.Vector2 originalPosition, UnityEngine.EventSystems.PointerEventData pointerEvent)
    // Offset: 0x18E9D28
    UnityEngine::Vector2 SwipeAdjustedPosition(UnityEngine::Vector2 originalPosition, UnityEngine::EventSystems::PointerEventData* pointerEvent);
    // protected UnityEngine.EventSystems.PointerEventData/FramePressState GetGazeButtonState()
    // Offset: 0x18EA1C0
    UnityEngine::EventSystems::PointerEventData::FramePressState GetGazeButtonState();
    // protected UnityEngine.Vector2 GetExtraScrollDelta()
    // Offset: 0x18E9080
    UnityEngine::Vector2 GetExtraScrollDelta();
    // protected System.Void .ctor()
    // Offset: 0x18E6CC0
    // Implemented from: UnityEngine.EventSystems.PointerInputModule
    // Base method: System.Void PointerInputModule::.ctor()
    // Base method: System.Void BaseInputModule::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRInputModule* New_ctor();
    // public override System.Void UpdateModule()
    // Offset: 0x18E6E74
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::UpdateModule()
    void UpdateModule();
    // public override System.Boolean IsModuleSupported()
    // Offset: 0x18E6F18
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Boolean BaseInputModule::IsModuleSupported()
    bool IsModuleSupported();
    // public override System.Boolean ShouldActivateModule()
    // Offset: 0x18E6F30
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Boolean BaseInputModule::ShouldActivateModule()
    bool ShouldActivateModule();
    // public override System.Void ActivateModule()
    // Offset: 0x18E70C4
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::ActivateModule()
    void ActivateModule();
    // public override System.Void DeactivateModule()
    // Offset: 0x18E7200
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::DeactivateModule()
    void DeactivateModule();
    // public override System.Void Process()
    // Offset: 0x18E8640
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::Process()
    void Process();
    // protected System.Void CopyFromTo(UnityEngine.EventSystems.PointerEventData from, UnityEngine.EventSystems.PointerEventData to)
    // Offset: 0x18E8780
    // Implemented from: UnityEngine.EventSystems.PointerInputModule
    // Base method: System.Void PointerInputModule::CopyFromTo(UnityEngine.EventSystems.PointerEventData from, UnityEngine.EventSystems.PointerEventData to)
    void CopyFromTo(UnityEngine::EventSystems::PointerEventData* from, UnityEngine::EventSystems::PointerEventData* to);
    // protected System.Void ClearSelection()
    // Offset: 0x18E7228
    // Implemented from: UnityEngine.EventSystems.PointerInputModule
    // Base method: System.Void PointerInputModule::ClearSelection()
    void ClearSelection();
    // protected override System.Void ProcessDrag(UnityEngine.EventSystems.PointerEventData pointerEvent)
    // Offset: 0x18E9E78
    // Implemented from: UnityEngine.EventSystems.PointerInputModule
    // Base method: System.Void PointerInputModule::ProcessDrag(UnityEngine.EventSystems.PointerEventData pointerEvent)
    void ProcessDrag(UnityEngine::EventSystems::PointerEventData* pointerEvent);
  }; // UnityEngine.EventSystems.OVRInputModule
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::OVRInputModule*, "UnityEngine.EventSystems", "OVRInputModule");
#pragma pack(pop)
