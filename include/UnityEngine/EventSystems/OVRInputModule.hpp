// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.PointerInputModule
#include "UnityEngine/EventSystems/PointerInputModule.hpp"
// Including type: OVRInput/Button
#include "GlobalNamespace/OVRInput_Button.hpp"
// Including type: UnityEngine.KeyCode
#include "UnityEngine/KeyCode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0xE8
  // Autogenerated type: UnityEngine.EventSystems.OVRInputModule
  // [] Offset: FFFFFFFF
  class OVRInputModule : public UnityEngine::EventSystems::PointerInputModule {
    public:
    // Nested type: UnityEngine::EventSystems::OVRInputModule::InputMode
    struct InputMode;
    // [TooltipAttribute] Offset: 0xD87034
    // public UnityEngine.Transform rayTransform
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::Transform* rayTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public OVRCursor m_Cursor
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::OVRCursor* m_Cursor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRCursor*) == 0x8);
    // [TooltipAttribute] Offset: 0xD8706C
    // public OVRInput/Button joyPadClickButton
    // Size: 0x4
    // Offset: 0x68
    GlobalNamespace::OVRInput::Button joyPadClickButton;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::Button) == 0x4);
    // [TooltipAttribute] Offset: 0xD870A4
    // public UnityEngine.KeyCode gazeClickKey
    // Size: 0x4
    // Offset: 0x6C
    UnityEngine::KeyCode gazeClickKey;
    // Field size check
    static_assert(sizeof(UnityEngine::KeyCode) == 0x4);
    // [HeaderAttribute] Offset: 0xD870DC
    // [TooltipAttribute] Offset: 0xD870DC
    // public System.Boolean performSphereCastForGazepointer
    // Size: 0x1
    // Offset: 0x70
    bool performSphereCastForGazepointer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [HeaderAttribute] Offset: 0xD8713C
    // [TooltipAttribute] Offset: 0xD8713C
    // public System.Boolean useRightStickScroll
    // Size: 0x1
    // Offset: 0x71
    bool useRightStickScroll;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useRightStickScroll and: rightStickDeadZone
    char __padding5[0x2] = {};
    // [TooltipAttribute] Offset: 0xD8719C
    // public System.Single rightStickDeadZone
    // Size: 0x4
    // Offset: 0x74
    float rightStickDeadZone;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0xD871D4
    // [TooltipAttribute] Offset: 0xD871D4
    // public System.Boolean useSwipeScroll
    // Size: 0x1
    // Offset: 0x78
    bool useSwipeScroll;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useSwipeScroll and: swipeDragThreshold
    char __padding7[0x3] = {};
    // [TooltipAttribute] Offset: 0xD87234
    // public System.Single swipeDragThreshold
    // Size: 0x4
    // Offset: 0x7C
    float swipeDragThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xD8726C
    // public System.Single swipeDragScale
    // Size: 0x4
    // Offset: 0x80
    float swipeDragScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xD872A4
    // public System.Boolean InvertSwipeXAxis
    // Size: 0x1
    // Offset: 0x84
    bool InvertSwipeXAxis;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: InvertSwipeXAxis and: activeGraphicRaycaster
    char __padding10[0x3] = {};
    // public OVRRaycaster activeGraphicRaycaster
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::OVRRaycaster* activeGraphicRaycaster;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRRaycaster*) == 0x8);
    // [HeaderAttribute] Offset: 0xD872DC
    // [TooltipAttribute] Offset: 0xD872DC
    // public System.Single angleDragThreshold
    // Size: 0x4
    // Offset: 0x90
    float angleDragThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_SpherecastRadius
    // Size: 0x4
    // Offset: 0x94
    float m_SpherecastRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_NextAction
    // Size: 0x4
    // Offset: 0x98
    float m_NextAction;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector2 m_LastMousePosition
    // Size: 0x8
    // Offset: 0x9C
    UnityEngine::Vector2 m_LastMousePosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 m_MousePosition
    // Size: 0x8
    // Offset: 0xA4
    UnityEngine::Vector2 m_MousePosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // Padding between fields: m_MousePosition and: m_HorizontalAxis
    char __padding16[0x4] = {};
    // [HeaderAttribute] Offset: 0xD8734C
    // private System.String m_HorizontalAxis
    // Size: 0x8
    // Offset: 0xB0
    ::Il2CppString* m_HorizontalAxis;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_VerticalAxis
    // Size: 0x8
    // Offset: 0xB8
    ::Il2CppString* m_VerticalAxis;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_SubmitButton
    // Size: 0x8
    // Offset: 0xC0
    ::Il2CppString* m_SubmitButton;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_CancelButton
    // Size: 0x8
    // Offset: 0xC8
    ::Il2CppString* m_CancelButton;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Single m_InputActionsPerSecond
    // Size: 0x4
    // Offset: 0xD0
    float m_InputActionsPerSecond;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean m_AllowActivationOnMobileDevice
    // Size: 0x1
    // Offset: 0xD4
    bool m_AllowActivationOnMobileDevice;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_AllowActivationOnMobileDevice and: m_VRRayPointerData
    char __padding22[0x3] = {};
    // protected System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.OVRPointerEventData> m_VRRayPointerData
    // Size: 0x8
    // Offset: 0xD8
    System::Collections::Generic::Dictionary_2<int, UnityEngine::EventSystems::OVRPointerEventData*>* m_VRRayPointerData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, UnityEngine::EventSystems::OVRPointerEventData*>*) == 0x8);
    // private readonly UnityEngine.EventSystems.PointerInputModule/MouseState m_MouseState
    // Size: 0x8
    // Offset: 0xE0
    UnityEngine::EventSystems::PointerInputModule::MouseState* m_MouseState;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::PointerInputModule::MouseState*) == 0x8);
    // Creating value type constructor for type: OVRInputModule
    OVRInputModule(UnityEngine::Transform* rayTransform_ = {}, GlobalNamespace::OVRCursor* m_Cursor_ = {}, GlobalNamespace::OVRInput::Button joyPadClickButton_ = {}, UnityEngine::KeyCode gazeClickKey_ = {}, bool performSphereCastForGazepointer_ = {}, bool useRightStickScroll_ = {}, float rightStickDeadZone_ = {}, bool useSwipeScroll_ = {}, float swipeDragThreshold_ = {}, float swipeDragScale_ = {}, bool InvertSwipeXAxis_ = {}, GlobalNamespace::OVRRaycaster* activeGraphicRaycaster_ = {}, float angleDragThreshold_ = {}, float m_SpherecastRadius_ = {}, float m_NextAction_ = {}, UnityEngine::Vector2 m_LastMousePosition_ = {}, UnityEngine::Vector2 m_MousePosition_ = {}, ::Il2CppString* m_HorizontalAxis_ = {}, ::Il2CppString* m_VerticalAxis_ = {}, ::Il2CppString* m_SubmitButton_ = {}, ::Il2CppString* m_CancelButton_ = {}, float m_InputActionsPerSecond_ = {}, bool m_AllowActivationOnMobileDevice_ = {}, System::Collections::Generic::Dictionary_2<int, UnityEngine::EventSystems::OVRPointerEventData*>* m_VRRayPointerData_ = {}, UnityEngine::EventSystems::PointerInputModule::MouseState* m_MouseState_ = {}) noexcept : rayTransform{rayTransform_}, m_Cursor{m_Cursor_}, joyPadClickButton{joyPadClickButton_}, gazeClickKey{gazeClickKey_}, performSphereCastForGazepointer{performSphereCastForGazepointer_}, useRightStickScroll{useRightStickScroll_}, rightStickDeadZone{rightStickDeadZone_}, useSwipeScroll{useSwipeScroll_}, swipeDragThreshold{swipeDragThreshold_}, swipeDragScale{swipeDragScale_}, InvertSwipeXAxis{InvertSwipeXAxis_}, activeGraphicRaycaster{activeGraphicRaycaster_}, angleDragThreshold{angleDragThreshold_}, m_SpherecastRadius{m_SpherecastRadius_}, m_NextAction{m_NextAction_}, m_LastMousePosition{m_LastMousePosition_}, m_MousePosition{m_MousePosition_}, m_HorizontalAxis{m_HorizontalAxis_}, m_VerticalAxis{m_VerticalAxis_}, m_SubmitButton{m_SubmitButton_}, m_CancelButton{m_CancelButton_}, m_InputActionsPerSecond{m_InputActionsPerSecond_}, m_AllowActivationOnMobileDevice{m_AllowActivationOnMobileDevice_}, m_VRRayPointerData{m_VRRayPointerData_}, m_MouseState{m_MouseState_} {}
    // public UnityEngine.EventSystems.OVRInputModule/InputMode get_inputMode()
    // Offset: 0x197B554
    UnityEngine::EventSystems::OVRInputModule::InputMode get_inputMode();
    // public System.Boolean get_allowActivationOnMobileDevice()
    // Offset: 0x197B55C
    bool get_allowActivationOnMobileDevice();
    // public System.Void set_allowActivationOnMobileDevice(System.Boolean value)
    // Offset: 0x197B564
    void set_allowActivationOnMobileDevice(bool value);
    // public System.Single get_inputActionsPerSecond()
    // Offset: 0x197B570
    float get_inputActionsPerSecond();
    // public System.Void set_inputActionsPerSecond(System.Single value)
    // Offset: 0x197B578
    void set_inputActionsPerSecond(float value);
    // public System.String get_horizontalAxis()
    // Offset: 0x197B580
    ::Il2CppString* get_horizontalAxis();
    // public System.Void set_horizontalAxis(System.String value)
    // Offset: 0x197B588
    void set_horizontalAxis(::Il2CppString* value);
    // public System.String get_verticalAxis()
    // Offset: 0x197B590
    ::Il2CppString* get_verticalAxis();
    // public System.Void set_verticalAxis(System.String value)
    // Offset: 0x197B598
    void set_verticalAxis(::Il2CppString* value);
    // public System.String get_submitButton()
    // Offset: 0x197B5A0
    ::Il2CppString* get_submitButton();
    // public System.Void set_submitButton(System.String value)
    // Offset: 0x197B5A8
    void set_submitButton(::Il2CppString* value);
    // public System.String get_cancelButton()
    // Offset: 0x197B5B0
    ::Il2CppString* get_cancelButton();
    // public System.Void set_cancelButton(System.String value)
    // Offset: 0x197B5B8
    void set_cancelButton(::Il2CppString* value);
    // private System.Boolean SendSubmitEventToSelectedObject()
    // Offset: 0x197BB90
    bool SendSubmitEventToSelectedObject();
    // private System.Boolean AllowMoveEventProcessing(System.Single time)
    // Offset: 0x197BDA0
    bool AllowMoveEventProcessing(float time);
    // private UnityEngine.Vector2 GetRawMoveVector()
    // Offset: 0x197BE00
    UnityEngine::Vector2 GetRawMoveVector();
    // private System.Boolean SendMoveEventToSelectedObject()
    // Offset: 0x197BEE8
    bool SendMoveEventToSelectedObject();
    // private System.Boolean SendUpdateEventToSelectedObject()
    // Offset: 0x197C0E0
    bool SendUpdateEventToSelectedObject();
    // private System.Void ProcessMousePress(UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData data)
    // Offset: 0x197C234
    void ProcessMousePress(UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData* data);
    // private System.Void ProcessMouseEvent(UnityEngine.EventSystems.PointerInputModule/MouseState mouseData)
    // Offset: 0x197CA9C
    void ProcessMouseEvent(UnityEngine::EventSystems::PointerInputModule::MouseState* mouseData);
    // static private System.Boolean UseMouse(System.Boolean pressed, System.Boolean released, UnityEngine.EventSystems.PointerEventData pointerData)
    // Offset: 0x197CD3C
    static bool UseMouse(bool pressed, bool released, UnityEngine::EventSystems::PointerEventData* pointerData);
    // protected System.Void CopyFromTo(UnityEngine.EventSystems.OVRPointerEventData from, UnityEngine.EventSystems.OVRPointerEventData to)
    // Offset: 0x197CE40
    void CopyFromTo(UnityEngine::EventSystems::OVRPointerEventData* from, UnityEngine::EventSystems::OVRPointerEventData* to);
    // protected System.Boolean GetPointerData(System.Int32 id, out UnityEngine.EventSystems.OVRPointerEventData data, System.Boolean create)
    // Offset: 0x197CF44
    bool GetPointerData(int id, UnityEngine::EventSystems::OVRPointerEventData*& data, bool create);
    // static private UnityEngine.Vector3 GetRectTransformNormal(UnityEngine.RectTransform rectTransform)
    // Offset: 0x197D03C
    static UnityEngine::Vector3 GetRectTransformNormal(UnityEngine::RectTransform* rectTransform);
    // protected UnityEngine.EventSystems.PointerInputModule/MouseState GetGazePointerData()
    // Offset: 0x197D1BC
    UnityEngine::EventSystems::PointerInputModule::MouseState* GetGazePointerData();
    // protected UnityEngine.EventSystems.PointerInputModule/MouseState GetCanvasPointerData()
    // Offset: 0x197DD08
    UnityEngine::EventSystems::PointerInputModule::MouseState* GetCanvasPointerData();
    // private System.Boolean ShouldStartDrag(UnityEngine.EventSystems.PointerEventData pointerEvent)
    // Offset: 0x197E0F0
    bool ShouldStartDrag(UnityEngine::EventSystems::PointerEventData* pointerEvent);
    // static private System.Boolean IsPointerMoving(UnityEngine.EventSystems.PointerEventData pointerEvent)
    // Offset: 0x197CDFC
    static bool IsPointerMoving(UnityEngine::EventSystems::PointerEventData* pointerEvent);
    // protected UnityEngine.Vector2 SwipeAdjustedPosition(UnityEngine.Vector2 originalPosition, UnityEngine.EventSystems.PointerEventData pointerEvent)
    // Offset: 0x197E474
    UnityEngine::Vector2 SwipeAdjustedPosition(UnityEngine::Vector2 originalPosition, UnityEngine::EventSystems::PointerEventData* pointerEvent);
    // protected UnityEngine.EventSystems.PointerEventData/FramePressState GetGazeButtonState()
    // Offset: 0x197E90C
    UnityEngine::EventSystems::PointerEventData::FramePressState GetGazeButtonState();
    // protected UnityEngine.Vector2 GetExtraScrollDelta()
    // Offset: 0x197D7CC
    UnityEngine::Vector2 GetExtraScrollDelta();
    // protected System.Void .ctor()
    // Offset: 0x197B40C
    // Implemented from: UnityEngine.EventSystems.PointerInputModule
    // Base method: System.Void PointerInputModule::.ctor()
    // Base method: System.Void BaseInputModule::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRInputModule* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::EventSystems::OVRInputModule::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRInputModule*, creationType>()));
    }
    // public override System.Void UpdateModule()
    // Offset: 0x197B5C0
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::UpdateModule()
    void UpdateModule();
    // public override System.Boolean IsModuleSupported()
    // Offset: 0x197B664
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Boolean BaseInputModule::IsModuleSupported()
    bool IsModuleSupported();
    // public override System.Boolean ShouldActivateModule()
    // Offset: 0x197B67C
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Boolean BaseInputModule::ShouldActivateModule()
    bool ShouldActivateModule();
    // public override System.Void ActivateModule()
    // Offset: 0x197B810
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::ActivateModule()
    void ActivateModule();
    // public override System.Void DeactivateModule()
    // Offset: 0x197B94C
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::DeactivateModule()
    void DeactivateModule();
    // public override System.Void Process()
    // Offset: 0x197CD8C
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::Process()
    void Process();
    // protected System.Void CopyFromTo(UnityEngine.EventSystems.PointerEventData from, UnityEngine.EventSystems.PointerEventData to)
    // Offset: 0x197CECC
    // Implemented from: UnityEngine.EventSystems.PointerInputModule
    // Base method: System.Void PointerInputModule::CopyFromTo(UnityEngine.EventSystems.PointerEventData from, UnityEngine.EventSystems.PointerEventData to)
    void CopyFromTo(UnityEngine::EventSystems::PointerEventData* from, UnityEngine::EventSystems::PointerEventData* to);
    // protected System.Void ClearSelection()
    // Offset: 0x197B974
    // Implemented from: UnityEngine.EventSystems.PointerInputModule
    // Base method: System.Void PointerInputModule::ClearSelection()
    void ClearSelection();
    // protected override System.Void ProcessDrag(UnityEngine.EventSystems.PointerEventData pointerEvent)
    // Offset: 0x197E5C4
    // Implemented from: UnityEngine.EventSystems.PointerInputModule
    // Base method: System.Void PointerInputModule::ProcessDrag(UnityEngine.EventSystems.PointerEventData pointerEvent)
    void ProcessDrag(UnityEngine::EventSystems::PointerEventData* pointerEvent);
  }; // UnityEngine.EventSystems.OVRInputModule
  static check_size<sizeof(OVRInputModule), 224 + sizeof(UnityEngine::EventSystems::PointerInputModule::MouseState*)> __UnityEngine_EventSystems_OVRInputModuleSizeCheck;
  static_assert(sizeof(OVRInputModule) == 0xE8);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::OVRInputModule*, "UnityEngine.EventSystems", "OVRInputModule");
#pragma pack(pop)
