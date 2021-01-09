// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.AbstractEventData
#include "UnityEngine/EventSystems/AbstractEventData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: EventSystem
  class EventSystem;
  // Forward declaring type: BaseInputModule
  class BaseInputModule;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x20
  // Autogenerated type: UnityEngine.EventSystems.BaseEventData
  // [] Offset: FFFFFFFF
  class BaseEventData : public UnityEngine::EventSystems::AbstractEventData {
    public:
    // Writing base type padding for base size: 0x11 to desired offset: 0x18
    char ___base_padding[0x7] = {};
    // private readonly UnityEngine.EventSystems.EventSystem m_EventSystem
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::EventSystems::EventSystem* m_EventSystem;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::EventSystem*) == 0x8);
    // Creating value type constructor for type: BaseEventData
    BaseEventData(UnityEngine::EventSystems::EventSystem* m_EventSystem_ = {}) noexcept : m_EventSystem{m_EventSystem_} {}
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // public System.Void .ctor(UnityEngine.EventSystems.EventSystem eventSystem)
    // Offset: 0x114A444
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseEventData* New_ctor(UnityEngine::EventSystems::EventSystem* eventSystem) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::EventSystems::BaseEventData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseEventData*, creationType>(eventSystem)));
    }
    // public UnityEngine.EventSystems.BaseInputModule get_currentInputModule()
    // Offset: 0x114A478
    UnityEngine::EventSystems::BaseInputModule* get_currentInputModule();
    // public UnityEngine.GameObject get_selectedObject()
    // Offset: 0x114A494
    UnityEngine::GameObject* get_selectedObject();
    // public System.Void set_selectedObject(UnityEngine.GameObject value)
    // Offset: 0x114A4B0
    void set_selectedObject(UnityEngine::GameObject* value);
  }; // UnityEngine.EventSystems.BaseEventData
  static check_size<sizeof(BaseEventData), 24 + sizeof(UnityEngine::EventSystems::EventSystem*)> __UnityEngine_EventSystems_BaseEventDataSizeCheck;
  static_assert(sizeof(BaseEventData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::BaseEventData*, "UnityEngine.EventSystems", "BaseEventData");
#pragma pack(pop)
