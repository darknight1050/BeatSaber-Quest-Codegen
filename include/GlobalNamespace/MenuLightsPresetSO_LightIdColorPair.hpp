// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MenuLightsPresetSO
#include "GlobalNamespace/MenuLightsPresetSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSO
  class ColorSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  // Autogenerated type: MenuLightsPresetSO/LightIdColorPair
  // [] Offset: FFFFFFFF
  class MenuLightsPresetSO::LightIdColorPair : public ::Il2CppObject {
    public:
    // public System.Int32 lightId
    // Size: 0x4
    // Offset: 0x10
    int lightId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: lightId and: baseColor
    char __padding0[0x4] = {};
    // public ColorSO baseColor
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ColorSO* baseColor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // [RangeAttribute] Offset: 0xDD3B5C
    // public System.Single intensity
    // Size: 0x4
    // Offset: 0x20
    float intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: LightIdColorPair
    LightIdColorPair(int lightId_ = {}, GlobalNamespace::ColorSO* baseColor_ = {}, float intensity_ = {}) noexcept : lightId{lightId_}, baseColor{baseColor_}, intensity{intensity_} {}
    // public UnityEngine.Color get_lightColor()
    // Offset: 0x1A72474
    UnityEngine::Color get_lightColor();
    // public System.Void .ctor()
    // Offset: 0x1A727C4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuLightsPresetSO::LightIdColorPair* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MenuLightsPresetSO::LightIdColorPair::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuLightsPresetSO::LightIdColorPair*, creationType>()));
    }
  }; // MenuLightsPresetSO/LightIdColorPair
  static check_size<sizeof(MenuLightsPresetSO::LightIdColorPair), 32 + sizeof(float)> __GlobalNamespace_MenuLightsPresetSO_LightIdColorPairSizeCheck;
  static_assert(sizeof(MenuLightsPresetSO::LightIdColorPair) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuLightsPresetSO::LightIdColorPair*, "", "MenuLightsPresetSO/LightIdColorPair");
#pragma pack(pop)
