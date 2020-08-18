// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.PointerInputModule
#include "UnityEngine/EventSystems/PointerInputModule.hpp"
// Including type: UnityEngine.EventSystems.PointerEventData/InputButton
#include "UnityEngine/EventSystems/PointerEventData.hpp"
// Completed includes
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Autogenerated type: UnityEngine.EventSystems.PointerInputModule/ButtonState
  class PointerInputModule::ButtonState : public ::Il2CppObject {
    public:
    // private UnityEngine.EventSystems.PointerEventData/InputButton m_Button
    // Offset: 0x10
    UnityEngine::EventSystems::PointerEventData::InputButton m_Button;
    // private UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData m_EventData
    // Offset: 0x18
    UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData* m_EventData;
    // public UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData get_eventData()
    // Offset: 0xD5D5E0
    UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData* get_eventData();
    // public System.Void set_eventData(UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData value)
    // Offset: 0xD5D5E8
    void set_eventData(UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData* value);
    // public UnityEngine.EventSystems.PointerEventData/InputButton get_button()
    // Offset: 0xD5D5F0
    UnityEngine::EventSystems::PointerEventData::InputButton get_button();
    // public System.Void set_button(UnityEngine.EventSystems.PointerEventData/InputButton value)
    // Offset: 0xD5D5F8
    void set_button(UnityEngine::EventSystems::PointerEventData::InputButton value);
    // public System.Void .ctor()
    // Offset: 0xD5D600
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PointerInputModule::ButtonState* New_ctor();
  }; // UnityEngine.EventSystems.PointerInputModule/ButtonState
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::PointerInputModule::ButtonState*, "UnityEngine.EventSystems", "PointerInputModule/ButtonState");
#pragma pack(pop)
