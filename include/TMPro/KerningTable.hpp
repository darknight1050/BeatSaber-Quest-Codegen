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
  // Forward declaring type: KerningPair
  class KerningPair;
  // Forward declaring type: GlyphValueRecord_Legacy
  struct GlyphValueRecord_Legacy;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x18
  // Autogenerated type: TMPro.KerningTable
  // [] Offset: FFFFFFFF
  class KerningTable : public ::Il2CppObject {
    public:
    // Nested type: TMPro::KerningTable::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    // Nested type: TMPro::KerningTable::$$c__DisplayClass4_0
    class $$c__DisplayClass4_0;
    // Nested type: TMPro::KerningTable::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // Nested type: TMPro::KerningTable::$$c
    class $$c;
    // public System.Collections.Generic.List`1<TMPro.KerningPair> kerningPairs
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<TMPro::KerningPair*>* kerningPairs;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<TMPro::KerningPair*>*) == 0x8);
    // Creating value type constructor for type: KerningTable
    KerningTable(System::Collections::Generic::List_1<TMPro::KerningPair*>* kerningPairs_ = {}) noexcept : kerningPairs{kerningPairs_} {}
    // Creating conversion operator: operator System::Collections::Generic::List_1<TMPro::KerningPair*>*
    constexpr operator System::Collections::Generic::List_1<TMPro::KerningPair*>*() const noexcept {
      return kerningPairs;
    }
    // public System.Void AddKerningPair()
    // Offset: 0xF4E2F4
    void AddKerningPair();
    // public System.Int32 AddKerningPair(System.UInt32 first, System.UInt32 second, System.Single offset)
    // Offset: 0xF4E41C
    int AddKerningPair(uint first, uint second, float offset);
    // public System.Int32 AddGlyphPairAdjustmentRecord(System.UInt32 first, TMPro.GlyphValueRecord_Legacy firstAdjustments, System.UInt32 second, TMPro.GlyphValueRecord_Legacy secondAdjustments)
    // Offset: 0xF4E55C
    int AddGlyphPairAdjustmentRecord(uint first, TMPro::GlyphValueRecord_Legacy firstAdjustments, uint second, TMPro::GlyphValueRecord_Legacy secondAdjustments);
    // public System.Void RemoveKerningPair(System.Int32 left, System.Int32 right)
    // Offset: 0xF4E6DC
    void RemoveKerningPair(int left, int right);
    // public System.Void RemoveKerningPair(System.Int32 index)
    // Offset: 0xF4E7E0
    void RemoveKerningPair(int index);
    // public System.Void SortKerningPairs()
    // Offset: 0xF4E848
    void SortKerningPairs();
    // public System.Void .ctor()
    // Offset: 0xF4E278
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KerningTable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::KerningTable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KerningTable*, creationType>()));
    }
  }; // TMPro.KerningTable
  static check_size<sizeof(KerningTable), 16 + sizeof(System::Collections::Generic::List_1<TMPro::KerningPair*>*)> __TMPro_KerningTableSizeCheck;
  static_assert(sizeof(KerningTable) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::KerningTable*, "TMPro", "KerningTable");
#pragma pack(pop)
