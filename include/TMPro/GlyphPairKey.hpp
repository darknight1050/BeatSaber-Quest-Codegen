// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_GlyphPairAdjustmentRecord
  class TMP_GlyphPairAdjustmentRecord;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.GlyphPairKey
  struct GlyphPairKey : public System::ValueType {
    public:
    // public System.UInt32 firstGlyphIndex
    // Offset: 0x0
    uint firstGlyphIndex;
    // public System.UInt32 secondGlyphIndex
    // Offset: 0x4
    uint secondGlyphIndex;
    // public System.Int64 key
    // Offset: 0x8
    int64_t key;
    // Creating value type constructor for type: GlyphPairKey
    GlyphPairKey(uint firstGlyphIndex_ = {}, uint secondGlyphIndex_ = {}, int64_t key_ = {}) : firstGlyphIndex{firstGlyphIndex_}, secondGlyphIndex{secondGlyphIndex_}, key{key_} {}
    // public System.Void .ctor(System.UInt32 firstGlyphIndex, System.UInt32 secondGlyphIndex)
    // Offset: 0xA26F40
    static GlyphPairKey* New_ctor(uint firstGlyphIndex, uint secondGlyphIndex);
    // System.Void .ctor(TMPro.TMP_GlyphPairAdjustmentRecord record)
    // Offset: 0xA26F54
    static GlyphPairKey* New_ctor(TMPro::TMP_GlyphPairAdjustmentRecord* record);
  }; // TMPro.GlyphPairKey
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::GlyphPairKey, "TMPro", "GlyphPairKey");
#pragma pack(pop)
