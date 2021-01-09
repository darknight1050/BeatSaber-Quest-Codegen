// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.PointerInputModule
#include "UnityEngine/EventSystems/PointerInputModule.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Skipping declaration: PointerEventData because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0xB1
  // Autogenerated type: UnityEngine.EventSystems.StandaloneInputModule
  // [] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: D7D818
  class StandaloneInputModule : public UnityEngine::EventSystems::PointerInputModule {
    public:
    // Nested type: UnityEngine::EventSystems::StandaloneInputModule::InputMode
    struct InputMode;
    // private System.Single m_PrevActionTime
    // Size: 0x4
    // Offset: 0x58
    float m_PrevActionTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector2 m_LastMoveVector
    // Size: 0x8
    // Offset: 0x5C
    UnityEngine::Vector2 m_LastMoveVector;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private System.Int32 m_ConsecutiveMoveCount
    // Size: 0x4
    // Offset: 0x64
    int m_ConsecutiveMoveCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Vector2 m_LastMousePosition
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::Vector2 m_LastMousePosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 m_MousePosition
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::Vector2 m_MousePosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private UnityEngine.GameObject m_CurrentFocusedGameObject
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::GameObject* m_CurrentFocusedGameObject;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.EventSystems.PointerEventData m_InputPointerEvent
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::EventSystems::PointerEventData* m_InputPointerEvent;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::PointerEventData*) == 0x8);
    // private System.String m_HorizontalAxis
    // Size: 0x8
    // Offset: 0x88
    ::Il2CppString* m_HorizontalAxis;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_VerticalAxis
    // Size: 0x8
    // Offset: 0x90
    ::Il2CppString* m_VerticalAxis;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_SubmitButton
    // Size: 0x8
    // Offset: 0x98
    ::Il2CppString* m_SubmitButton;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_CancelButton
    // Size: 0x8
    // Offset: 0xA0
    ::Il2CppString* m_CancelButton;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Single m_InputActionsPerSecond
    // Size: 0x4
    // Offset: 0xA8
    float m_InputActionsPerSecond;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_RepeatDelay
    // Size: 0x4
    // Offset: 0xAC
    float m_RepeatDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [FormerlySerializedAsAttribute] Offset: 0xD7F85C
    // private System.Boolean m_ForceModuleActive
    // Size: 0x1
    // Offset: 0xB0
    bool m_ForceModuleActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: StandaloneInputModule
    StandaloneInputModule(float m_PrevActionTime_ = {}, UnityEngine::Vector2 m_LastMoveVector_ = {}, int m_ConsecutiveMoveCount_ = {}, UnityEngine::Vector2 m_LastMousePosition_ = {}, UnityEngine::Vector2 m_MousePosition_ = {}, UnityEngine::GameObject* m_CurrentFocusedGameObject_ = {}, UnityEngine::EventSystems::PointerEventData* m_InputPointerEvent_ = {}, ::Il2CppString* m_HorizontalAxis_ = {}, ::Il2CppString* m_VerticalAxis_ = {}, ::Il2CppString* m_SubmitButton_ = {}, ::Il2CppString* m_CancelButton_ = {}, float m_InputActionsPerSecond_ = {}, float m_RepeatDelay_ = {}, bool m_ForceModuleActive_ = {}) noexcept : m_PrevActionTime{m_PrevActionTime_}, m_LastMoveVector{m_LastMoveVector_}, m_ConsecutiveMoveCount{m_ConsecutiveMoveCount_}, m_LastMousePosition{m_LastMousePosition_}, m_MousePosition{m_MousePosition_}, m_CurrentFocusedGameObject{m_CurrentFocusedGameObject_}, m_InputPointerEvent{m_InputPointerEvent_}, m_HorizontalAxis{m_HorizontalAxis_}, m_VerticalAxis{m_VerticalAxis_}, m_SubmitButton{m_SubmitButton_}, m_CancelButton{m_CancelButton_}, m_InputActionsPerSecond{m_InputActionsPerSecond_}, m_RepeatDelay{m_RepeatDelay_}, m_ForceModuleActive{m_ForceModuleActive_} {}
    // public UnityEngine.EventSystems.StandaloneInputModule/InputMode get_inputMode()
    // Offset: 0x1152ACC
    UnityEngine::EventSystems::StandaloneInputModule::InputMode get_inputMode();
    // public System.Boolean get_allowActivationOnMobileDevice()
    // Offset: 0x1152AD4
    bool get_allowActivationOnMobileDevice();
    // public System.Void set_allowActivationOnMobileDevice(System.Boolean value)
    // Offset: 0x1152ADC
    void set_allowActivationOnMobileDevice(bool value);
    // public System.Boolean get_forceModuleActive()
    // Offset: 0x1152AE8
    bool get_forceModuleActive();
    // public System.Void set_forceModuleActive(System.Boolean value)
    // Offset: 0x1152AF0
    void set_forceModuleActive(bool value);
    // public System.Single get_inputActionsPerSecond()
    // Offset: 0x1152AFC
    float get_inputActionsPerSecond();
    // public System.Void set_inputActionsPerSecond(System.Single value)
    // Offset: 0x1152B04
    void set_inputActionsPerSecond(float value);
    // public System.Single get_repeatDelay()
    // Offset: 0x1152B0C
    float get_repeatDelay();
    // public System.Void set_repeatDelay(System.Single value)
    // Offset: 0x1152B14
    void set_repeatDelay(float value);
    // public System.String get_horizontalAxis()
    // Offset: 0x1152B1C
    ::Il2CppString* get_horizontalAxis();
    // public System.Void set_horizontalAxis(System.String value)
    // Offset: 0x1152B24
    void set_horizontalAxis(::Il2CppString* value);
    // public System.String get_verticalAxis()
    // Offset: 0x1152B2C
    ::Il2CppString* get_verticalAxis();
    // public System.Void set_verticalAxis(System.String value)
    // Offset: 0x1152B34
    void set_verticalAxis(::Il2CppString* value);
    // public System.String get_submitButton()
    // Offset: 0x1152B3C
    ::Il2CppString* get_submitButton();
    // public System.Void set_submitButton(System.String value)
    // Offset: 0x1152B44
    void set_submitButton(::Il2CppString* value);
    // public System.String get_cancelButton()
    // Offset: 0x1152B4C
    ::Il2CppString* get_cancelButton();
    // public System.Void set_cancelButton(System.String value)
    // Offset: 0x1152B54
    void set_cancelButton(::Il2CppString* value);
    // private System.Boolean ShouldIgnoreEventsOnNoFocus()
    // Offset: 0x1152B5C
    bool ShouldIgnoreEventsOnNoFocus();
    // private System.Void ReleaseMouse(UnityEngine.EventSystems.PointerEventData pointerEvent, UnityEngine.GameObject currentOverGo)
    // Offset: 0x1152C94
    void ReleaseMouse(UnityEngine::EventSystems::PointerEventData* pointerEvent, UnityEngine::GameObject* currentOverGo);
    // private System.Boolean ProcessTouchEvents()
    // Offset: 0x1153638
    bool ProcessTouchEvents();
    // protected System.Void ProcessTouchPress(UnityEngine.EventSystems.PointerEventData pointerEvent, System.Boolean pressed, System.Boolean released)
    // Offset: 0x1153C78
    void ProcessTouchPress(UnityEngine::EventSystems::PointerEventData* pointerEvent, bool pressed, bool released);
    // protected System.Boolean SendSubmitEventToSelectedObject()
    // Offset: 0x1153A44
    bool SendSubmitEventToSelectedObject();
    // private UnityEngine.Vector2 GetRawMoveVector()
    // Offset: 0x11543F8
    UnityEngine::Vector2 GetRawMoveVector();
    // protected System.Boolean SendMoveEventToSelectedObject()
    // Offset: 0x11537B0
    bool SendMoveEventToSelectedObject();
    // protected System.Void ProcessMouseEvent()
    // Offset: 0x11537A8
    void ProcessMouseEvent();
    // protected System.Boolean ForceAutoSelect()
    // Offset: 0x11547AC
    bool ForceAutoSelect();
    // protected System.Void ProcessMouseEvent(System.Int32 id)
    // Offset: 0x1154534
    void ProcessMouseEvent(int id);
    // protected System.Boolean SendUpdateEventToSelectedObject()
    // Offset: 0x11534E4
    bool SendUpdateEventToSelectedObject();
    // protected System.Void ProcessMousePress(UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData data)
    // Offset: 0x11547B4
    void ProcessMousePress(UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData* data);
    // protected UnityEngine.GameObject GetCurrentFocusedGameObject()
    // Offset: 0x1154B68
    UnityEngine::GameObject* GetCurrentFocusedGameObject();
    // protected System.Void .ctor()
    // Offset: 0x1152A1C
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
    static StandaloneInputModule* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::EventSystems::StandaloneInputModule::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandaloneInputModule*, creationType>()));
    }
    // public override System.Void UpdateModule()
    // Offset: 0x1152B80
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::UpdateModule()
    void UpdateModule();
    // public override System.Boolean IsModuleSupported()
    // Offset: 0x1153054
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Boolean BaseInputModule::IsModuleSupported()
    bool IsModuleSupported();
    // public override System.Boolean ShouldActivateModule()
    // Offset: 0x11530C0
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Boolean BaseInputModule::ShouldActivateModule()
    bool ShouldActivateModule();
    // public override System.Void ActivateModule()
    // Offset: 0x11532F0
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::ActivateModule()
    void ActivateModule();
    // public override System.Void DeactivateModule()
    // Offset: 0x1153420
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::DeactivateModule()
    void DeactivateModule();
    // public override System.Void Process()
    // Offset: 0x1153424
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::Process()
    void Process();
  }; // UnityEngine.EventSystems.StandaloneInputModule
  static check_size<sizeof(StandaloneInputModule), 176 + sizeof(bool)> __UnityEngine_EventSystems_StandaloneInputModuleSizeCheck;
  static_assert(sizeof(StandaloneInputModule) == 0xB1);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::StandaloneInputModule*, "UnityEngine.EventSystems", "StandaloneInputModule");
#pragma pack(pop)
