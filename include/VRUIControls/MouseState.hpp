// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.PointerEventData
#include "UnityEngine/EventSystems/PointerEventData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: VRUIControls
namespace VRUIControls {
  // Forward declaring type: ButtonState
  class ButtonState;
}
// Completed forward declares
// Type namespace: VRUIControls
namespace VRUIControls {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VRUIControls.MouseState
  // [] Offset: FFFFFFFF
  class MouseState : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.List`1<VRUIControls.ButtonState> _trackedButtons
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<VRUIControls::ButtonState*>* trackedButtons;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<VRUIControls::ButtonState*>*) == 0x8);
    // Creating value type constructor for type: MouseState
    MouseState(System::Collections::Generic::List_1<VRUIControls::ButtonState*>* trackedButtons_ = {}) noexcept : trackedButtons{trackedButtons_} {}
    // Creating conversion operator: operator System::Collections::Generic::List_1<VRUIControls::ButtonState*>*
    constexpr operator System::Collections::Generic::List_1<VRUIControls::ButtonState*>*() const noexcept {
      return trackedButtons;
    }
    // public System.Boolean AnyPressesThisFrame()
    // Offset: 0x20FE26C
    bool AnyPressesThisFrame();
    // public System.Boolean AnyReleasesThisFrame()
    // Offset: 0x20FE320
    bool AnyReleasesThisFrame();
    // public VRUIControls.ButtonState GetButtonState(UnityEngine.EventSystems.PointerEventData/InputButton button)
    // Offset: 0x20FE3D4
    VRUIControls::ButtonState* GetButtonState(UnityEngine::EventSystems::PointerEventData::InputButton button);
    // public System.Void SetButtonState(UnityEngine.EventSystems.PointerEventData/InputButton button, UnityEngine.EventSystems.PointerEventData/FramePressState stateForMouseButton, UnityEngine.EventSystems.PointerEventData data)
    // Offset: 0x20FE510
    void SetButtonState(UnityEngine::EventSystems::PointerEventData::InputButton button, UnityEngine::EventSystems::PointerEventData::FramePressState stateForMouseButton, UnityEngine::EventSystems::PointerEventData* data);
    // public System.Void .ctor()
    // Offset: 0x20FE554
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MouseState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("VRUIControls::MouseState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MouseState*, creationType>()));
    }
  }; // VRUIControls.MouseState
  #pragma pack(pop)
  static check_size<sizeof(MouseState), 16 + sizeof(System::Collections::Generic::List_1<VRUIControls::ButtonState*>*)> __VRUIControls_MouseStateSizeCheck;
  static_assert(sizeof(MouseState) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(VRUIControls::MouseState*, "VRUIControls", "MouseState");
