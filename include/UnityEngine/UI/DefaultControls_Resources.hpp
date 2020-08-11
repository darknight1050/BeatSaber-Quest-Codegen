// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.UI.DefaultControls
#include "UnityEngine/UI/DefaultControls.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.DefaultControls/Resources
  struct DefaultControls::Resources : public System::ValueType {
    public:
    // public UnityEngine.Sprite standard
    // Offset: 0x0
    UnityEngine::Sprite* standard;
    // public UnityEngine.Sprite background
    // Offset: 0x8
    UnityEngine::Sprite* background;
    // public UnityEngine.Sprite inputField
    // Offset: 0x10
    UnityEngine::Sprite* inputField;
    // public UnityEngine.Sprite knob
    // Offset: 0x18
    UnityEngine::Sprite* knob;
    // public UnityEngine.Sprite checkmark
    // Offset: 0x20
    UnityEngine::Sprite* checkmark;
    // public UnityEngine.Sprite dropdown
    // Offset: 0x28
    UnityEngine::Sprite* dropdown;
    // public UnityEngine.Sprite mask
    // Offset: 0x30
    UnityEngine::Sprite* mask;
    // Creating value type constructor for type: Resources
    Resources(UnityEngine::Sprite* standard_ = {}, UnityEngine::Sprite* background_ = {}, UnityEngine::Sprite* inputField_ = {}, UnityEngine::Sprite* knob_ = {}, UnityEngine::Sprite* checkmark_ = {}, UnityEngine::Sprite* dropdown_ = {}, UnityEngine::Sprite* mask_ = {}) : standard{standard_}, background{background_}, inputField{inputField_}, knob{knob_}, checkmark{checkmark_}, dropdown{dropdown_}, mask{mask_} {}
  }; // UnityEngine.UI.DefaultControls/Resources
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::DefaultControls::Resources, "UnityEngine.UI", "DefaultControls/Resources");
#pragma pack(pop)
