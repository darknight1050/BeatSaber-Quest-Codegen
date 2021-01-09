// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_GlyphPairAdjustmentRecord
  class TMP_GlyphPairAdjustmentRecord;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x20
  // Autogenerated type: TMPro.TMP_FontFeatureTable
  // [] Offset: FFFFFFFF
  class TMP_FontFeatureTable : public ::Il2CppObject {
    public:
    // Nested type: TMPro::TMP_FontFeatureTable::$$c
    class $$c;
    // System.Collections.Generic.List`1<TMPro.TMP_GlyphPairAdjustmentRecord> m_GlyphPairAdjustmentRecords
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<TMPro::TMP_GlyphPairAdjustmentRecord*>* m_GlyphPairAdjustmentRecords;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<TMPro::TMP_GlyphPairAdjustmentRecord*>*) == 0x8);
    // System.Collections.Generic.Dictionary`2<System.Int64,TMPro.TMP_GlyphPairAdjustmentRecord> m_GlyphPairAdjustmentRecordLookupDictionary
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<int64_t, TMPro::TMP_GlyphPairAdjustmentRecord*>* m_GlyphPairAdjustmentRecordLookupDictionary;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int64_t, TMPro::TMP_GlyphPairAdjustmentRecord*>*) == 0x8);
    // Creating value type constructor for type: TMP_FontFeatureTable
    TMP_FontFeatureTable(System::Collections::Generic::List_1<TMPro::TMP_GlyphPairAdjustmentRecord*>* m_GlyphPairAdjustmentRecords_ = {}, System::Collections::Generic::Dictionary_2<int64_t, TMPro::TMP_GlyphPairAdjustmentRecord*>* m_GlyphPairAdjustmentRecordLookupDictionary_ = {}) noexcept : m_GlyphPairAdjustmentRecords{m_GlyphPairAdjustmentRecords_}, m_GlyphPairAdjustmentRecordLookupDictionary{m_GlyphPairAdjustmentRecordLookupDictionary_} {}
    // System.Collections.Generic.List`1<TMPro.TMP_GlyphPairAdjustmentRecord> get_glyphPairAdjustmentRecords()
    // Offset: 0xF5E03C
    System::Collections::Generic::List_1<TMPro::TMP_GlyphPairAdjustmentRecord*>* get_glyphPairAdjustmentRecords();
    // System.Void set_glyphPairAdjustmentRecords(System.Collections.Generic.List`1<TMPro.TMP_GlyphPairAdjustmentRecord> value)
    // Offset: 0xF5E044
    void set_glyphPairAdjustmentRecords(System::Collections::Generic::List_1<TMPro::TMP_GlyphPairAdjustmentRecord*>* value);
    // public System.Void SortGlyphPairAdjustmentRecords()
    // Offset: 0xF5E04C
    void SortGlyphPairAdjustmentRecords();
    // public System.Void .ctor()
    // Offset: 0xF5C920
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_FontFeatureTable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_FontFeatureTable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_FontFeatureTable*, creationType>()));
    }
  }; // TMPro.TMP_FontFeatureTable
  static check_size<sizeof(TMP_FontFeatureTable), 24 + sizeof(System::Collections::Generic::Dictionary_2<int64_t, TMPro::TMP_GlyphPairAdjustmentRecord*>*)> __TMPro_TMP_FontFeatureTableSizeCheck;
  static_assert(sizeof(TMP_FontFeatureTable) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_FontFeatureTable*, "TMPro", "TMP_FontFeatureTable");
#pragma pack(pop)
