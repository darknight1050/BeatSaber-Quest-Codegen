// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_GlyphAdjustmentRecord
#include "TMPro/TMP_GlyphAdjustmentRecord.hpp"
// Including type: TMPro.FontFeatureLookupFlags
#include "TMPro/FontFeatureLookupFlags.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TextCore::LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Forward declaring type: GlyphPairAdjustmentRecord
  struct GlyphPairAdjustmentRecord;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_GlyphPairAdjustmentRecord
  class TMP_GlyphPairAdjustmentRecord : public ::Il2CppObject {
    public:
    // private TMPro.TMP_GlyphAdjustmentRecord m_FirstAdjustmentRecord
    // Offset: 0x10
    TMPro::TMP_GlyphAdjustmentRecord m_FirstAdjustmentRecord;
    // private TMPro.TMP_GlyphAdjustmentRecord m_SecondAdjustmentRecord
    // Offset: 0x24
    TMPro::TMP_GlyphAdjustmentRecord m_SecondAdjustmentRecord;
    // private TMPro.FontFeatureLookupFlags m_FeatureLookupFlags
    // Offset: 0x38
    TMPro::FontFeatureLookupFlags m_FeatureLookupFlags;
    // public TMPro.TMP_GlyphAdjustmentRecord get_firstAdjustmentRecord()
    // Offset: 0xB60520
    TMPro::TMP_GlyphAdjustmentRecord get_firstAdjustmentRecord();
    // public System.Void set_firstAdjustmentRecord(TMPro.TMP_GlyphAdjustmentRecord value)
    // Offset: 0xB60534
    void set_firstAdjustmentRecord(TMPro::TMP_GlyphAdjustmentRecord value);
    // public TMPro.TMP_GlyphAdjustmentRecord get_secondAdjustmentRecord()
    // Offset: 0xB60548
    TMPro::TMP_GlyphAdjustmentRecord get_secondAdjustmentRecord();
    // public System.Void set_secondAdjustmentRecord(TMPro.TMP_GlyphAdjustmentRecord value)
    // Offset: 0xB6055C
    void set_secondAdjustmentRecord(TMPro::TMP_GlyphAdjustmentRecord value);
    // public TMPro.FontFeatureLookupFlags get_featureLookupFlags()
    // Offset: 0xB60570
    TMPro::FontFeatureLookupFlags get_featureLookupFlags();
    // public System.Void set_featureLookupFlags(TMPro.FontFeatureLookupFlags value)
    // Offset: 0xB60578
    void set_featureLookupFlags(TMPro::FontFeatureLookupFlags value);
    // public System.Void .ctor(TMPro.TMP_GlyphAdjustmentRecord firstAdjustmentRecord, TMPro.TMP_GlyphAdjustmentRecord secondAdjustmentRecord)
    // Offset: 0xB5EAE0
    static TMP_GlyphPairAdjustmentRecord* New_ctor(TMPro::TMP_GlyphAdjustmentRecord firstAdjustmentRecord, TMPro::TMP_GlyphAdjustmentRecord secondAdjustmentRecord);
    // System.Void .ctor(UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord glyphPairAdjustmentRecord)
    // Offset: 0xB5E4A8
    static TMP_GlyphPairAdjustmentRecord* New_ctor(UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord glyphPairAdjustmentRecord);
  }; // TMPro.TMP_GlyphPairAdjustmentRecord
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_GlyphPairAdjustmentRecord*, "TMPro", "TMP_GlyphPairAdjustmentRecord");
#pragma pack(pop)
