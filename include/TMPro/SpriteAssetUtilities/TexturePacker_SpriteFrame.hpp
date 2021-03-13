// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.SpriteAssetUtilities.TexturePacker
#include "TMPro/SpriteAssetUtilities/TexturePacker.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: TMPro.SpriteAssetUtilities
namespace TMPro::SpriteAssetUtilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.SpriteAssetUtilities.TexturePacker/SpriteFrame
  // [] Offset: FFFFFFFF
  struct TexturePacker::SpriteFrame/*, public System::ValueType*/ {
    public:
    // public System.Single x
    // Size: 0x4
    // Offset: 0x0
    float x;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single y
    // Size: 0x4
    // Offset: 0x4
    float y;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single w
    // Size: 0x4
    // Offset: 0x8
    float w;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single h
    // Size: 0x4
    // Offset: 0xC
    float h;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: SpriteFrame
    constexpr SpriteFrame(float x_ = {}, float y_ = {}, float w_ = {}, float h_ = {}) noexcept : x{x_}, y{y_}, w{w_}, h{h_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public override System.String ToString()
    // Offset: 0xDDD7F8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // TMPro.SpriteAssetUtilities.TexturePacker/SpriteFrame
  #pragma pack(pop)
  static check_size<sizeof(TexturePacker::SpriteFrame), 12 + sizeof(float)> __TMPro_SpriteAssetUtilities_TexturePacker_SpriteFrameSizeCheck;
  static_assert(sizeof(TexturePacker::SpriteFrame) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::SpriteAssetUtilities::TexturePacker::SpriteFrame, "TMPro.SpriteAssetUtilities", "TexturePacker/SpriteFrame");
