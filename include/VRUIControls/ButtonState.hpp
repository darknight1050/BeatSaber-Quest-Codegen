// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.EventSystems.PointerEventData/InputButton
#include "UnityEngine/EventSystems/PointerEventData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VRUIControls
namespace VRUIControls {
  // Forward declaring type: MouseButtonEventData
  class MouseButtonEventData;
}
// Completed forward declares
// Type namespace: VRUIControls
namespace VRUIControls {
  // Autogenerated type: VRUIControls.ButtonState
  class ButtonState : public ::CsObject {
    public:
    // private UnityEngine.EventSystems.PointerEventData/InputButton _button
    // Offset: 0x10
    UnityEngine::EventSystems::PointerEventData::InputButton button;
    // private VRUIControls.MouseButtonEventData _eventData
    // Offset: 0x18
    VRUIControls::MouseButtonEventData* eventData;
    // private System.Single _pressedValue
    // Offset: 0x20
    float pressedValue;
    // public VRUIControls.MouseButtonEventData get_eventData()
    // Offset: 0x191DDDC
    VRUIControls::MouseButtonEventData* get_eventData();
    // public System.Void set_eventData(VRUIControls.MouseButtonEventData value)
    // Offset: 0x191DDE4
    void set_eventData(VRUIControls::MouseButtonEventData* value);
    // public UnityEngine.EventSystems.PointerEventData/InputButton get_button()
    // Offset: 0x191DDEC
    UnityEngine::EventSystems::PointerEventData::InputButton get_button();
    // public System.Void set_button(UnityEngine.EventSystems.PointerEventData/InputButton value)
    // Offset: 0x191DDF4
    void set_button(UnityEngine::EventSystems::PointerEventData::InputButton value);
    // public System.Single get_pressedValue()
    // Offset: 0x191DDFC
    float get_pressedValue();
    // public System.Void set_pressedValue(System.Single value)
    // Offset: 0x191DE04
    void set_pressedValue(float value);
    // public System.Void .ctor()
    // Offset: 0x191DE0C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ButtonState* New_ctor();
  }; // VRUIControls.ButtonState
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(VRUIControls::ButtonState*, "VRUIControls", "ButtonState");
#pragma pack(pop)
