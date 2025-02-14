// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_GlyphAdjustmentRecord
#include "TMPro/TMP_GlyphAdjustmentRecord.hpp"
// Including type: TMPro.FontFeatureLookupFlags
#include "TMPro/FontFeatureLookupFlags.hpp"
// Including type: UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord
#include "UnityEngine/TextCore/LowLevel/GlyphPairAdjustmentRecord.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_GlyphPairAdjustmentRecord
  class TMP_GlyphPairAdjustmentRecord : public ::Il2CppObject {
    public:
    // private TMPro.TMP_GlyphAdjustmentRecord m_FirstAdjustmentRecord
    // Size: 0x14
    // Offset: 0x10
    TMPro::TMP_GlyphAdjustmentRecord m_FirstAdjustmentRecord;
    // Field size check
    static_assert(sizeof(TMPro::TMP_GlyphAdjustmentRecord) == 0x14);
    // private TMPro.TMP_GlyphAdjustmentRecord m_SecondAdjustmentRecord
    // Size: 0x14
    // Offset: 0x24
    TMPro::TMP_GlyphAdjustmentRecord m_SecondAdjustmentRecord;
    // Field size check
    static_assert(sizeof(TMPro::TMP_GlyphAdjustmentRecord) == 0x14);
    // private TMPro.FontFeatureLookupFlags m_FeatureLookupFlags
    // Size: 0x4
    // Offset: 0x38
    TMPro::FontFeatureLookupFlags m_FeatureLookupFlags;
    // Field size check
    static_assert(sizeof(TMPro::FontFeatureLookupFlags) == 0x4);
    // Creating value type constructor for type: TMP_GlyphPairAdjustmentRecord
    TMP_GlyphPairAdjustmentRecord(TMPro::TMP_GlyphAdjustmentRecord m_FirstAdjustmentRecord_ = {}, TMPro::TMP_GlyphAdjustmentRecord m_SecondAdjustmentRecord_ = {}, TMPro::FontFeatureLookupFlags m_FeatureLookupFlags_ = {}) noexcept : m_FirstAdjustmentRecord{m_FirstAdjustmentRecord_}, m_SecondAdjustmentRecord{m_SecondAdjustmentRecord_}, m_FeatureLookupFlags{m_FeatureLookupFlags_} {}
    // public TMPro.TMP_GlyphAdjustmentRecord get_firstAdjustmentRecord()
    // Offset: 0x1118984
    TMPro::TMP_GlyphAdjustmentRecord get_firstAdjustmentRecord();
    // public System.Void set_firstAdjustmentRecord(TMPro.TMP_GlyphAdjustmentRecord value)
    // Offset: 0x1118998
    void set_firstAdjustmentRecord(TMPro::TMP_GlyphAdjustmentRecord value);
    // public TMPro.TMP_GlyphAdjustmentRecord get_secondAdjustmentRecord()
    // Offset: 0x11189AC
    TMPro::TMP_GlyphAdjustmentRecord get_secondAdjustmentRecord();
    // public System.Void set_secondAdjustmentRecord(TMPro.TMP_GlyphAdjustmentRecord value)
    // Offset: 0x11189C0
    void set_secondAdjustmentRecord(TMPro::TMP_GlyphAdjustmentRecord value);
    // public TMPro.FontFeatureLookupFlags get_featureLookupFlags()
    // Offset: 0x11189D4
    TMPro::FontFeatureLookupFlags get_featureLookupFlags();
    // public System.Void set_featureLookupFlags(TMPro.FontFeatureLookupFlags value)
    // Offset: 0x11189DC
    void set_featureLookupFlags(TMPro::FontFeatureLookupFlags value);
    // public System.Void .ctor(TMPro.TMP_GlyphAdjustmentRecord firstAdjustmentRecord, TMPro.TMP_GlyphAdjustmentRecord secondAdjustmentRecord)
    // Offset: 0x1117088
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_GlyphPairAdjustmentRecord* New_ctor(TMPro::TMP_GlyphAdjustmentRecord firstAdjustmentRecord, TMPro::TMP_GlyphAdjustmentRecord secondAdjustmentRecord) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_GlyphPairAdjustmentRecord::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_GlyphPairAdjustmentRecord*, creationType>(firstAdjustmentRecord, secondAdjustmentRecord)));
    }
    // System.Void .ctor(UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord glyphPairAdjustmentRecord)
    // Offset: 0x1116AC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_GlyphPairAdjustmentRecord* New_ctor(UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord glyphPairAdjustmentRecord) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_GlyphPairAdjustmentRecord::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_GlyphPairAdjustmentRecord*, creationType>(glyphPairAdjustmentRecord)));
    }
  }; // TMPro.TMP_GlyphPairAdjustmentRecord
  #pragma pack(pop)
  static check_size<sizeof(TMP_GlyphPairAdjustmentRecord), 56 + sizeof(TMPro::FontFeatureLookupFlags)> __TMPro_TMP_GlyphPairAdjustmentRecordSizeCheck;
  static_assert(sizeof(TMP_GlyphPairAdjustmentRecord) == 0x3C);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_GlyphPairAdjustmentRecord*, "TMPro", "TMP_GlyphPairAdjustmentRecord");
