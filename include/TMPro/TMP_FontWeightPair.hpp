// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_FontAsset
  class TMP_FontAsset;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_FontWeightPair
  struct TMP_FontWeightPair : public System::ValueType {
    public:
    // public TMPro.TMP_FontAsset regularTypeface
    // Offset: 0x0
    TMPro::TMP_FontAsset* regularTypeface;
    // public TMPro.TMP_FontAsset italicTypeface
    // Offset: 0x8
    TMPro::TMP_FontAsset* italicTypeface;
    // Creating value type constructor for type: TMP_FontWeightPair
    TMP_FontWeightPair(TMPro::TMP_FontAsset* regularTypeface_ = {}, TMPro::TMP_FontAsset* italicTypeface_ = {}) : regularTypeface{regularTypeface_}, italicTypeface{italicTypeface_} {}
  }; // TMPro.TMP_FontWeightPair
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_FontWeightPair, "TMPro", "TMP_FontWeightPair");
#pragma pack(pop)
