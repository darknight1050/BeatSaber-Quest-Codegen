// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlayerSaveData
#include "GlobalNamespace/PlayerSaveData.hpp"
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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveData/ColorSchemesSettings
  class PlayerSaveData::ColorSchemesSettings : public ::Il2CppObject {
    public:
    // public System.Boolean overrideDefaultColors
    // Size: 0x1
    // Offset: 0x10
    bool overrideDefaultColors;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: overrideDefaultColors and: selectedColorSchemeId
    char __padding0[0x7] = {};
    // public System.String selectedColorSchemeId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* selectedColorSchemeId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Collections.Generic.List`1<PlayerSaveData/ColorScheme> colorSchemes
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::ColorScheme*>* colorSchemes;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::ColorScheme*>*) == 0x8);
    // Creating value type constructor for type: ColorSchemesSettings
    ColorSchemesSettings(bool overrideDefaultColors_ = {}, ::Il2CppString* selectedColorSchemeId_ = {}, System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::ColorScheme*>* colorSchemes_ = {}) noexcept : overrideDefaultColors{overrideDefaultColors_}, selectedColorSchemeId{selectedColorSchemeId_}, colorSchemes{colorSchemes_} {}
    // public System.Void .ctor(System.Boolean overrideDefaultColors, System.String selectedColorSchemeId, System.Collections.Generic.List`1<PlayerSaveData/ColorScheme> colorSchemes)
    // Offset: 0x101178C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveData::ColorSchemesSettings* New_ctor(bool overrideDefaultColors, ::Il2CppString* selectedColorSchemeId, System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::ColorScheme*>* colorSchemes) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSaveData::ColorSchemesSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveData::ColorSchemesSettings*, creationType>(overrideDefaultColors, selectedColorSchemeId, colorSchemes)));
    }
  }; // PlayerSaveData/ColorSchemesSettings
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveData::ColorSchemesSettings), 32 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::ColorScheme*>*)> __GlobalNamespace_PlayerSaveData_ColorSchemesSettingsSizeCheck;
  static_assert(sizeof(PlayerSaveData::ColorSchemesSettings) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData::ColorSchemesSettings*, "", "PlayerSaveData/ColorSchemesSettings");
