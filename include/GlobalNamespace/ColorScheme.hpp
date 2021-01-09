// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x98
  // Autogenerated type: ColorScheme
  // [] Offset: FFFFFFFF
  class ColorScheme : public ::Il2CppObject {
    public:
    // private System.String _colorSchemeId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* colorSchemeId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _colorSchemeName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* colorSchemeName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean _isEditable
    // Size: 0x1
    // Offset: 0x20
    bool isEditable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isEditable and: saberAColor
    char __padding2[0x3] = {};
    // [SpaceAttribute] Offset: 0xD9B0F4
    // private UnityEngine.Color _saberAColor
    // Size: 0x10
    // Offset: 0x24
    UnityEngine::Color saberAColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _saberBColor
    // Size: 0x10
    // Offset: 0x34
    UnityEngine::Color saberBColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // [SpaceAttribute] Offset: 0xD9B13C
    // private UnityEngine.Color _obstaclesColor
    // Size: 0x10
    // Offset: 0x44
    UnityEngine::Color obstaclesColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // [SpaceAttribute] Offset: 0xD9B174
    // private UnityEngine.Color _environmentColor0
    // Size: 0x10
    // Offset: 0x54
    UnityEngine::Color environmentColor0;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _environmentColor1
    // Size: 0x10
    // Offset: 0x64
    UnityEngine::Color environmentColor1;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Boolean _supportsEnvironmentColorBoost
    // Size: 0x1
    // Offset: 0x74
    bool supportsEnvironmentColorBoost;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: supportsEnvironmentColorBoost and: environmentColor0Boost
    char __padding8[0x3] = {};
    // private UnityEngine.Color _environmentColor0Boost
    // Size: 0x10
    // Offset: 0x78
    UnityEngine::Color environmentColor0Boost;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _environmentColor1Boost
    // Size: 0x10
    // Offset: 0x88
    UnityEngine::Color environmentColor1Boost;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Creating value type constructor for type: ColorScheme
    ColorScheme(::Il2CppString* colorSchemeId_ = {}, ::Il2CppString* colorSchemeName_ = {}, bool isEditable_ = {}, UnityEngine::Color saberAColor_ = {}, UnityEngine::Color saberBColor_ = {}, UnityEngine::Color obstaclesColor_ = {}, UnityEngine::Color environmentColor0_ = {}, UnityEngine::Color environmentColor1_ = {}, bool supportsEnvironmentColorBoost_ = {}, UnityEngine::Color environmentColor0Boost_ = {}, UnityEngine::Color environmentColor1Boost_ = {}) noexcept : colorSchemeId{colorSchemeId_}, colorSchemeName{colorSchemeName_}, isEditable{isEditable_}, saberAColor{saberAColor_}, saberBColor{saberBColor_}, obstaclesColor{obstaclesColor_}, environmentColor0{environmentColor0_}, environmentColor1{environmentColor1_}, supportsEnvironmentColorBoost{supportsEnvironmentColorBoost_}, environmentColor0Boost{environmentColor0Boost_}, environmentColor1Boost{environmentColor1Boost_} {}
    // public System.String get_colorSchemeId()
    // Offset: 0x1A0ACA4
    ::Il2CppString* get_colorSchemeId();
    // public System.String get_colorSchemeName()
    // Offset: 0x1A0ACAC
    ::Il2CppString* get_colorSchemeName();
    // public System.Boolean get_isEditable()
    // Offset: 0x1A0ACB4
    bool get_isEditable();
    // public UnityEngine.Color get_saberAColor()
    // Offset: 0x1A0ACBC
    UnityEngine::Color get_saberAColor();
    // public UnityEngine.Color get_saberBColor()
    // Offset: 0x1A0ACC8
    UnityEngine::Color get_saberBColor();
    // public UnityEngine.Color get_environmentColor0()
    // Offset: 0x1A0ACD4
    UnityEngine::Color get_environmentColor0();
    // public UnityEngine.Color get_environmentColor1()
    // Offset: 0x1A0ACE0
    UnityEngine::Color get_environmentColor1();
    // public System.Boolean get_supportsEnvironmentColorBoost()
    // Offset: 0x1A0ACEC
    bool get_supportsEnvironmentColorBoost();
    // public UnityEngine.Color get_environmentColor0Boost()
    // Offset: 0x1A0ACF4
    UnityEngine::Color get_environmentColor0Boost();
    // public UnityEngine.Color get_environmentColor1Boost()
    // Offset: 0x1A0AD00
    UnityEngine::Color get_environmentColor1Boost();
    // public UnityEngine.Color get_obstaclesColor()
    // Offset: 0x1A0AD0C
    UnityEngine::Color get_obstaclesColor();
    // public System.Void .ctor(System.String colorSchemeId, System.String colorSchemeName, System.Boolean isEditable, UnityEngine.Color saberAColor, UnityEngine.Color saberBColor, UnityEngine.Color environmentColor0, UnityEngine.Color environmentColor1, System.Boolean supportsEnvironmentColorBoost, UnityEngine.Color environmentColor0Boost, UnityEngine.Color environmentColor1Boost, UnityEngine.Color obstaclesColor)
    // Offset: 0x1A0AD18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorScheme* New_ctor(::Il2CppString* colorSchemeId, ::Il2CppString* colorSchemeName, bool isEditable, UnityEngine::Color saberAColor, UnityEngine::Color saberBColor, UnityEngine::Color environmentColor0, UnityEngine::Color environmentColor1, bool supportsEnvironmentColorBoost, UnityEngine::Color environmentColor0Boost, UnityEngine::Color environmentColor1Boost, UnityEngine::Color obstaclesColor) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ColorScheme::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorScheme*, creationType>(colorSchemeId, colorSchemeName, isEditable, saberAColor, saberBColor, environmentColor0, environmentColor1, supportsEnvironmentColorBoost, environmentColor0Boost, environmentColor1Boost, obstaclesColor)));
    }
    // public System.Void .ctor(ColorScheme colorScheme, UnityEngine.Color saberAColor, UnityEngine.Color saberBColor, UnityEngine.Color environmentColor0, UnityEngine.Color environmentColor1, System.Boolean supportsEnvironmentColorBoost, UnityEngine.Color environmentColor0Boost, UnityEngine.Color environmentColor1Boost, UnityEngine.Color obstaclesColor)
    // Offset: 0x1A0AE44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorScheme* New_ctor(GlobalNamespace::ColorScheme* colorScheme, UnityEngine::Color saberAColor, UnityEngine::Color saberBColor, UnityEngine::Color environmentColor0, UnityEngine::Color environmentColor1, bool supportsEnvironmentColorBoost, UnityEngine::Color environmentColor0Boost, UnityEngine::Color environmentColor1Boost, UnityEngine::Color obstaclesColor) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ColorScheme::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorScheme*, creationType>(colorScheme, saberAColor, saberBColor, environmentColor0, environmentColor1, supportsEnvironmentColorBoost, environmentColor0Boost, environmentColor1Boost, obstaclesColor)));
    }
    // public System.Void .ctor(ColorScheme colorScheme)
    // Offset: 0x1A0AED0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorScheme* New_ctor(GlobalNamespace::ColorScheme* colorScheme) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ColorScheme::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorScheme*, creationType>(colorScheme)));
    }
    // public System.Void .ctor(ColorSchemeSO colorScheme)
    // Offset: 0x1A0AF7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorScheme* New_ctor(GlobalNamespace::ColorSchemeSO* colorScheme) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ColorScheme::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorScheme*, creationType>(colorScheme)));
    }
  }; // ColorScheme
  static check_size<sizeof(ColorScheme), 136 + sizeof(UnityEngine::Color)> __GlobalNamespace_ColorSchemeSizeCheck;
  static_assert(sizeof(ColorScheme) == 0x98);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorScheme*, "", "ColorScheme");
#pragma pack(pop)
