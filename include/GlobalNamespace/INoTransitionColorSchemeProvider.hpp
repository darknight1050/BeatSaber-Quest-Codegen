// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSchemeSO
  class ColorSchemeSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: INoTransitionColorSchemeProvider
  class INoTransitionColorSchemeProvider {
    public:
    // Creating value type constructor for type: INoTransitionColorSchemeProvider
    INoTransitionColorSchemeProvider() noexcept {}
    // public ColorSchemeSO get_colorScheme()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::ColorSchemeSO* get_colorScheme();
    // public System.Void set_colorScheme(ColorSchemeSO value)
    // Offset: 0xFFFFFFFF
    void set_colorScheme(GlobalNamespace::ColorSchemeSO* value);
  }; // INoTransitionColorSchemeProvider
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::INoTransitionColorSchemeProvider*, "", "INoTransitionColorSchemeProvider");
