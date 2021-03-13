// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: TMPro.SpriteAssetUtilities
namespace TMPro::SpriteAssetUtilities {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.SpriteAssetUtilities.SpriteAssetImportFormats
  // [] Offset: FFFFFFFF
  struct SpriteAssetImportFormats/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SpriteAssetImportFormats
    constexpr SpriteAssetImportFormats(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public TMPro.SpriteAssetUtilities.SpriteAssetImportFormats None
    static constexpr const int None = 0;
    // Get static field: static public TMPro.SpriteAssetUtilities.SpriteAssetImportFormats None
    static TMPro::SpriteAssetUtilities::SpriteAssetImportFormats _get_None();
    // Set static field: static public TMPro.SpriteAssetUtilities.SpriteAssetImportFormats None
    static void _set_None(TMPro::SpriteAssetUtilities::SpriteAssetImportFormats value);
    // static field const value: static public TMPro.SpriteAssetUtilities.SpriteAssetImportFormats TexturePacker
    static constexpr const int TexturePacker = 1;
    // Get static field: static public TMPro.SpriteAssetUtilities.SpriteAssetImportFormats TexturePacker
    static TMPro::SpriteAssetUtilities::SpriteAssetImportFormats _get_TexturePacker();
    // Set static field: static public TMPro.SpriteAssetUtilities.SpriteAssetImportFormats TexturePacker
    static void _set_TexturePacker(TMPro::SpriteAssetUtilities::SpriteAssetImportFormats value);
  }; // TMPro.SpriteAssetUtilities.SpriteAssetImportFormats
  #pragma pack(pop)
  static check_size<sizeof(SpriteAssetImportFormats), 0 + sizeof(int)> __TMPro_SpriteAssetUtilities_SpriteAssetImportFormatsSizeCheck;
  static_assert(sizeof(SpriteAssetImportFormats) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::SpriteAssetUtilities::SpriteAssetImportFormats, "TMPro.SpriteAssetUtilities", "SpriteAssetImportFormats");
