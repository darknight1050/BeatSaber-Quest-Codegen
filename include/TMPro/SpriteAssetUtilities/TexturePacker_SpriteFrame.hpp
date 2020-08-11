// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: TMPro.SpriteAssetUtilities.TexturePacker
#include "TMPro/SpriteAssetUtilities/TexturePacker.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: TMPro.SpriteAssetUtilities
namespace TMPro::SpriteAssetUtilities {
  // Autogenerated type: TMPro.SpriteAssetUtilities.TexturePacker/SpriteFrame
  struct TexturePacker::SpriteFrame : public System::ValueType {
    public:
    // public System.Single x
    // Offset: 0x0
    float x;
    // public System.Single y
    // Offset: 0x4
    float y;
    // public System.Single w
    // Offset: 0x8
    float w;
    // public System.Single h
    // Offset: 0xC
    float h;
    // Creating value type constructor for type: SpriteFrame
    SpriteFrame(float x_ = {}, float y_ = {}, float w_ = {}, float h_ = {}) : x{x_}, y{y_}, w{w_}, h{h_} {}
    // public override System.String ToString()
    // Offset: 0xA270EC
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::CsString* ToString();
  }; // TMPro.SpriteAssetUtilities.TexturePacker/SpriteFrame
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::SpriteAssetUtilities::TexturePacker::SpriteFrame, "TMPro.SpriteAssetUtilities", "TexturePacker/SpriteFrame");
#pragma pack(pop)
