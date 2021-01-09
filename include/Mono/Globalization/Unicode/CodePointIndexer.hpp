// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Size: 0x24
  // Autogenerated type: Mono.Globalization.Unicode.CodePointIndexer
  // [] Offset: FFFFFFFF
  class CodePointIndexer : public ::Il2CppObject {
    public:
    // Nested type: Mono::Globalization::Unicode::CodePointIndexer::TableRange
    struct TableRange;
    // Size: 0x14
    // Autogenerated type: Mono.Globalization.Unicode.CodePointIndexer/TableRange
    // [] Offset: FFFFFFFF
    struct TableRange/*, public System::ValueType*/ {
      public:
      // public readonly System.Int32 Start
      // Size: 0x4
      // Offset: 0x0
      int Start;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public readonly System.Int32 End
      // Size: 0x4
      // Offset: 0x4
      int End;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public readonly System.Int32 Count
      // Size: 0x4
      // Offset: 0x8
      int Count;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public readonly System.Int32 IndexStart
      // Size: 0x4
      // Offset: 0xC
      int IndexStart;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public readonly System.Int32 IndexEnd
      // Size: 0x4
      // Offset: 0x10
      int IndexEnd;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: TableRange
      constexpr TableRange(int Start_ = {}, int End_ = {}, int Count_ = {}, int IndexStart_ = {}, int IndexEnd_ = {}) noexcept : Start{Start_}, End{End_}, Count{Count_}, IndexStart{IndexStart_}, IndexEnd{IndexEnd_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // public System.Void .ctor(System.Int32 start, System.Int32 end, System.Int32 indexStart)
      // Offset: 0xCA0AEC
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      TableRange(int start, int end, int indexStart) {
        static auto ___internal__logger = ::Logger::get().WithContext("Mono::Globalization::Unicode::CodePointIndexer::TableRange::.ctor");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(start, end, indexStart)));
        ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, start, end, indexStart);
      }
    }; // Mono.Globalization.Unicode.CodePointIndexer/TableRange
    static check_size<sizeof(CodePointIndexer::TableRange), 16 + sizeof(int)> __Mono_Globalization_Unicode_CodePointIndexer_TableRangeSizeCheck;
    static_assert(sizeof(CodePointIndexer::TableRange) == 0x14);
    // private readonly Mono.Globalization.Unicode.CodePointIndexer/TableRange[] ranges
    // Size: 0x8
    // Offset: 0x10
    ::Array<Mono::Globalization::Unicode::CodePointIndexer::TableRange>* ranges;
    // Field size check
    static_assert(sizeof(::Array<Mono::Globalization::Unicode::CodePointIndexer::TableRange>*) == 0x8);
    // public readonly System.Int32 TotalCount
    // Size: 0x4
    // Offset: 0x18
    int TotalCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 defaultIndex
    // Size: 0x4
    // Offset: 0x1C
    int defaultIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 defaultCP
    // Size: 0x4
    // Offset: 0x20
    int defaultCP;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: CodePointIndexer
    CodePointIndexer(::Array<Mono::Globalization::Unicode::CodePointIndexer::TableRange>* ranges_ = {}, int TotalCount_ = {}, int defaultIndex_ = {}, int defaultCP_ = {}) noexcept : ranges{ranges_}, TotalCount{TotalCount_}, defaultIndex{defaultIndex_}, defaultCP{defaultCP_} {}
    // public System.Void .ctor(System.Int32[] starts, System.Int32[] ends, System.Int32 defaultIndex, System.Int32 defaultCP)
    // Offset: 0x1518D88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CodePointIndexer* New_ctor(::Array<int>* starts, ::Array<int>* ends, int defaultIndex, int defaultCP) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Globalization::Unicode::CodePointIndexer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CodePointIndexer*, creationType>(starts, ends, defaultIndex, defaultCP)));
    }
    // public System.Int32 ToIndex(System.Int32 cp)
    // Offset: 0x1518F28
    int ToIndex(int cp);
  }; // Mono.Globalization.Unicode.CodePointIndexer
  static check_size<sizeof(CodePointIndexer), 32 + sizeof(int)> __Mono_Globalization_Unicode_CodePointIndexerSizeCheck;
  static_assert(sizeof(CodePointIndexer) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Globalization::Unicode::CodePointIndexer*, "Mono.Globalization.Unicode", "CodePointIndexer");
DEFINE_IL2CPP_ARG_TYPE(Mono::Globalization::Unicode::CodePointIndexer::TableRange, "Mono.Globalization.Unicode", "CodePointIndexer/TableRange");
#pragma pack(pop)
