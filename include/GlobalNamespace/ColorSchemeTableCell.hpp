// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSchemeView
  class ColorSchemeView;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
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
  // Size: 0x68
  // Autogenerated type: ColorSchemeTableCell
  // [] Offset: FFFFFFFF
  class ColorSchemeTableCell : public HMUI::TableCell {
    public:
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x50
    TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private ColorSchemeView _colorSchemeView
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::ColorSchemeView* colorSchemeView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSchemeView*) == 0x8);
    // private UnityEngine.UI.Image _editIcon
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::UI::Image* editIcon;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // Creating value type constructor for type: ColorSchemeTableCell
    ColorSchemeTableCell(TMPro::TextMeshProUGUI* text_ = {}, GlobalNamespace::ColorSchemeView* colorSchemeView_ = {}, UnityEngine::UI::Image* editIcon_ = {}) noexcept : text{text_}, colorSchemeView{colorSchemeView_}, editIcon{editIcon_} {}
    // public System.Void set_text(System.String value)
    // Offset: 0x1A51700
    void set_text(::Il2CppString* value);
    // public System.String get_text()
    // Offset: 0x1A51B40
    ::Il2CppString* get_text();
    // public System.Void set_showEditIcon(System.Boolean value)
    // Offset: 0x1A516E0
    void set_showEditIcon(bool value);
    // public System.Void SetColors(UnityEngine.Color saberAColor, UnityEngine.Color saberBColor, UnityEngine.Color environment0Color, UnityEngine.Color environment1Color, UnityEngine.Color obstacleColor)
    // Offset: 0x1A5171C
    void SetColors(UnityEngine::Color saberAColor, UnityEngine::Color saberBColor, UnityEngine::Color environment0Color, UnityEngine::Color environment1Color, UnityEngine::Color obstacleColor);
    // public System.Void .ctor()
    // Offset: 0x1A51B5C
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::.ctor()
    // Base method: System.Void SelectableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorSchemeTableCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ColorSchemeTableCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorSchemeTableCell*, creationType>()));
    }
  }; // ColorSchemeTableCell
  static check_size<sizeof(ColorSchemeTableCell), 96 + sizeof(UnityEngine::UI::Image*)> __GlobalNamespace_ColorSchemeTableCellSizeCheck;
  static_assert(sizeof(ColorSchemeTableCell) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorSchemeTableCell*, "", "ColorSchemeTableCell");
#pragma pack(pop)
