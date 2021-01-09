// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  // Autogenerated type: TextMeshProButton
  // [] Offset: FFFFFFFF
  class TextMeshProButton : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x18
    TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Button _button
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Button* button;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // Creating value type constructor for type: TextMeshProButton
    TextMeshProButton(TMPro::TextMeshProUGUI* text_ = {}, UnityEngine::UI::Button* button_ = {}) noexcept : text{text_}, button{button_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public TMPro.TextMeshProUGUI get_text()
    // Offset: 0xFED05C
    TMPro::TextMeshProUGUI* get_text();
    // public UnityEngine.UI.Button get_button()
    // Offset: 0xFED064
    UnityEngine::UI::Button* get_button();
    // public System.Void .ctor()
    // Offset: 0xFED06C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextMeshProButton* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TextMeshProButton::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextMeshProButton*, creationType>()));
    }
  }; // TextMeshProButton
  static check_size<sizeof(TextMeshProButton), 32 + sizeof(UnityEngine::UI::Button*)> __GlobalNamespace_TextMeshProButtonSizeCheck;
  static_assert(sizeof(TextMeshProButton) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TextMeshProButton*, "", "TextMeshProButton");
#pragma pack(pop)
