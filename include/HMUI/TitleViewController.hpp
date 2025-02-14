// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.TitleViewController
  class TitleViewController : public HMUI::ViewController {
    public:
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x70
    TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // Creating value type constructor for type: TitleViewController
    TitleViewController(TMPro::TextMeshProUGUI* text_ = {}) noexcept : text{text_} {}
    // public System.Void SetText(System.String text)
    // Offset: 0x12A6B68
    void SetText(::Il2CppString* text);
    // public System.Void .ctor()
    // Offset: 0x12A6B84
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TitleViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::TitleViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TitleViewController*, creationType>()));
    }
  }; // HMUI.TitleViewController
  #pragma pack(pop)
  static check_size<sizeof(TitleViewController), 112 + sizeof(TMPro::TextMeshProUGUI*)> __HMUI_TitleViewControllerSizeCheck;
  static_assert(sizeof(TitleViewController) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::TitleViewController*, "HMUI", "TitleViewController");
