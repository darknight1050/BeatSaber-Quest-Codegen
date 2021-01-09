// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
// Including type: UnityEngine.EventSystems.RaycastResult
#include "UnityEngine/EventSystems/RaycastResult.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: AxisEventData
  class AxisEventData;
  // Forward declaring type: EventSystem
  class EventSystem;
  // Forward declaring type: BaseEventData
  class BaseEventData;
  // Forward declaring type: BaseInput
  class BaseInput;
  // Forward declaring type: MoveDirection
  struct MoveDirection;
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x48
  // Autogenerated type: UnityEngine.EventSystems.BaseInputModule
  // [] Offset: FFFFFFFF
  // [RequireComponent] Offset: D7D7B4
  class BaseInputModule : public UnityEngine::EventSystems::UIBehaviour {
    public:
    // protected System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> m_RaycastResultCache
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* m_RaycastResultCache;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>*) == 0x8);
    // private UnityEngine.EventSystems.AxisEventData m_AxisEventData
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::EventSystems::AxisEventData* m_AxisEventData;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::AxisEventData*) == 0x8);
    // private UnityEngine.EventSystems.EventSystem m_EventSystem
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::EventSystems::EventSystem* m_EventSystem;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::EventSystem*) == 0x8);
    // private UnityEngine.EventSystems.BaseEventData m_BaseEventData
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::EventSystems::BaseEventData* m_BaseEventData;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::BaseEventData*) == 0x8);
    // protected UnityEngine.EventSystems.BaseInput m_InputOverride
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::EventSystems::BaseInput* m_InputOverride;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::BaseInput*) == 0x8);
    // private UnityEngine.EventSystems.BaseInput m_DefaultInput
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::EventSystems::BaseInput* m_DefaultInput;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::BaseInput*) == 0x8);
    // Creating value type constructor for type: BaseInputModule
    BaseInputModule(System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* m_RaycastResultCache_ = {}, UnityEngine::EventSystems::AxisEventData* m_AxisEventData_ = {}, UnityEngine::EventSystems::EventSystem* m_EventSystem_ = {}, UnityEngine::EventSystems::BaseEventData* m_BaseEventData_ = {}, UnityEngine::EventSystems::BaseInput* m_InputOverride_ = {}, UnityEngine::EventSystems::BaseInput* m_DefaultInput_ = {}) noexcept : m_RaycastResultCache{m_RaycastResultCache_}, m_AxisEventData{m_AxisEventData_}, m_EventSystem{m_EventSystem_}, m_BaseEventData{m_BaseEventData_}, m_InputOverride{m_InputOverride_}, m_DefaultInput{m_DefaultInput_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.EventSystems.BaseInput get_input()
    // Offset: 0x114A78C
    UnityEngine::EventSystems::BaseInput* get_input();
    // public UnityEngine.EventSystems.BaseInput get_inputOverride()
    // Offset: 0x114A9C4
    UnityEngine::EventSystems::BaseInput* get_inputOverride();
    // public System.Void set_inputOverride(UnityEngine.EventSystems.BaseInput value)
    // Offset: 0x114A9CC
    void set_inputOverride(UnityEngine::EventSystems::BaseInput* value);
    // protected UnityEngine.EventSystems.EventSystem get_eventSystem()
    // Offset: 0x114A9D4
    UnityEngine::EventSystems::EventSystem* get_eventSystem();
    // public System.Void Process()
    // Offset: 0xFFFFFFFF
    void Process();
    // static protected UnityEngine.EventSystems.RaycastResult FindFirstRaycast(System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> candidates)
    // Offset: 0x114ABB8
    static UnityEngine::EventSystems::RaycastResult FindFirstRaycast(System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* candidates);
    // static protected UnityEngine.EventSystems.MoveDirection DetermineMoveDirection(System.Single x, System.Single y)
    // Offset: 0x114ACD0
    static UnityEngine::EventSystems::MoveDirection DetermineMoveDirection(float x, float y);
    // static protected UnityEngine.EventSystems.MoveDirection DetermineMoveDirection(System.Single x, System.Single y, System.Single deadZone)
    // Offset: 0x114ACDC
    static UnityEngine::EventSystems::MoveDirection DetermineMoveDirection(float x, float y, float deadZone);
    // static protected UnityEngine.GameObject FindCommonRoot(UnityEngine.GameObject g1, UnityEngine.GameObject g2)
    // Offset: 0x114ADC8
    static UnityEngine::GameObject* FindCommonRoot(UnityEngine::GameObject* g1, UnityEngine::GameObject* g2);
    // protected System.Void HandlePointerExitAndEnter(UnityEngine.EventSystems.PointerEventData currentPointerData, UnityEngine.GameObject newEnterTarget)
    // Offset: 0x114AF70
    void HandlePointerExitAndEnter(UnityEngine::EventSystems::PointerEventData* currentPointerData, UnityEngine::GameObject* newEnterTarget);
    // protected UnityEngine.EventSystems.AxisEventData GetAxisEventData(System.Single x, System.Single y, System.Single moveDeadZone)
    // Offset: 0x114B558
    UnityEngine::EventSystems::AxisEventData* GetAxisEventData(float x, float y, float moveDeadZone);
    // protected UnityEngine.EventSystems.BaseEventData GetBaseEventData()
    // Offset: 0x114B658
    UnityEngine::EventSystems::BaseEventData* GetBaseEventData();
    // public System.Boolean IsPointerOverGameObject(System.Int32 pointerId)
    // Offset: 0x114B708
    bool IsPointerOverGameObject(int pointerId);
    // public System.Boolean ShouldActivateModule()
    // Offset: 0x114B710
    bool ShouldActivateModule();
    // public System.Void DeactivateModule()
    // Offset: 0x114B760
    void DeactivateModule();
    // public System.Void ActivateModule()
    // Offset: 0x114B764
    void ActivateModule();
    // public System.Void UpdateModule()
    // Offset: 0x114B768
    void UpdateModule();
    // public System.Boolean IsModuleSupported()
    // Offset: 0x114B76C
    bool IsModuleSupported();
    // protected override System.Void OnEnable()
    // Offset: 0x114A9DC
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x114AB9C
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDisable()
    void OnDisable();
    // protected System.Void .ctor()
    // Offset: 0x114B774
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseInputModule* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::EventSystems::BaseInputModule::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseInputModule*, creationType>()));
    }
  }; // UnityEngine.EventSystems.BaseInputModule
  static check_size<sizeof(BaseInputModule), 64 + sizeof(UnityEngine::EventSystems::BaseInput*)> __UnityEngine_EventSystems_BaseInputModuleSizeCheck;
  static_assert(sizeof(BaseInputModule) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::BaseInputModule*, "UnityEngine.EventSystems", "BaseInputModule");
#pragma pack(pop)
