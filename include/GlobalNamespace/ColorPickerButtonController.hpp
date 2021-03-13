// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ColorPickerButtonController
  // [] Offset: FFFFFFFF
  class ColorPickerButtonController : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.UI.Button _button
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::UI::Button* button;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Image _colorImage
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Image* colorImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // Creating value type constructor for type: ColorPickerButtonController
    ColorPickerButtonController(UnityEngine::UI::Button* button_ = {}, UnityEngine::UI::Image* colorImage_ = {}) noexcept : button{button_}, colorImage{colorImage_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.UI.Button get_button()
    // Offset: 0xFD3114
    UnityEngine::UI::Button* get_button();
    // public System.Void SetColor(UnityEngine.Color color)
    // Offset: 0xFD311C
    void SetColor(UnityEngine::Color color);
    // public System.Void .ctor()
    // Offset: 0xFD3144
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorPickerButtonController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ColorPickerButtonController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorPickerButtonController*, creationType>()));
    }
  }; // ColorPickerButtonController
  #pragma pack(pop)
  static check_size<sizeof(ColorPickerButtonController), 32 + sizeof(UnityEngine::UI::Image*)> __GlobalNamespace_ColorPickerButtonControllerSizeCheck;
  static_assert(sizeof(ColorPickerButtonController) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorPickerButtonController*, "", "ColorPickerButtonController");
