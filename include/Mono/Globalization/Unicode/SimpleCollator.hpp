// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Globalization::Unicode
namespace Mono::Globalization::Unicode {
  // Forward declaring type: CodePointIndexer
  class CodePointIndexer;
  // Forward declaring type: Contraction
  class Contraction;
  // Forward declaring type: Level2Map
  class Level2Map;
  // Forward declaring type: SortKeyBuffer
  class SortKeyBuffer;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: TextInfo
  class TextInfo;
  // Forward declaring type: CultureInfo
  class CultureInfo;
  // Forward declaring type: CompareOptions
  struct CompareOptions;
  // Forward declaring type: SortKey
  class SortKey;
}
// Completed forward declares
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Autogenerated type: Mono.Globalization.Unicode.SimpleCollator
  class SimpleCollator : public ::Il2CppObject {
    public:
    // Nested type: Mono::Globalization::Unicode::SimpleCollator::Context
    struct Context;
    // Nested type: Mono::Globalization::Unicode::SimpleCollator::PreviousInfo
    struct PreviousInfo;
    // Nested type: Mono::Globalization::Unicode::SimpleCollator::Escape
    struct Escape;
    // Nested type: Mono::Globalization::Unicode::SimpleCollator::ExtenderType
    struct ExtenderType;
    // private readonly System.Globalization.TextInfo textInfo
    // Offset: 0x10
    System::Globalization::TextInfo* textInfo;
    // private readonly Mono.Globalization.Unicode.CodePointIndexer cjkIndexer
    // Offset: 0x18
    Mono::Globalization::Unicode::CodePointIndexer* cjkIndexer;
    // private readonly Mono.Globalization.Unicode.Contraction[] contractions
    // Offset: 0x20
    ::Array<Mono::Globalization::Unicode::Contraction*>* contractions;
    // private readonly Mono.Globalization.Unicode.Level2Map[] level2Maps
    // Offset: 0x28
    ::Array<Mono::Globalization::Unicode::Level2Map*>* level2Maps;
    // private readonly System.Byte[] unsafeFlags
    // Offset: 0x30
    ::Array<uint8_t>* unsafeFlags;
    // private readonly System.Byte* cjkCatTable
    // Offset: 0x38
    uint8_t* cjkCatTable;
    // private readonly System.Byte* cjkLv1Table
    // Offset: 0x40
    uint8_t* cjkLv1Table;
    // private readonly System.Byte* cjkLv2Table
    // Offset: 0x48
    uint8_t* cjkLv2Table;
    // private readonly Mono.Globalization.Unicode.CodePointIndexer cjkLv2Indexer
    // Offset: 0x50
    Mono::Globalization::Unicode::CodePointIndexer* cjkLv2Indexer;
    // private readonly System.Int32 lcid
    // Offset: 0x58
    int lcid;
    // private readonly System.Boolean frenchSort
    // Offset: 0x5C
    bool frenchSort;
    // Get static field: static private System.Boolean QuickCheckDisabled
    static bool _get_QuickCheckDisabled();
    // Set static field: static private System.Boolean QuickCheckDisabled
    static void _set_QuickCheckDisabled(bool value);
    // Get static field: static private Mono.Globalization.Unicode.SimpleCollator invariant
    static Mono::Globalization::Unicode::SimpleCollator* _get_invariant();
    // Set static field: static private Mono.Globalization.Unicode.SimpleCollator invariant
    static void _set_invariant(Mono::Globalization::Unicode::SimpleCollator* value);
    // static field const value: static private System.Int32 UnsafeFlagLength
    static constexpr const int UnsafeFlagLength = 96;
    // Get static field: static private System.Int32 UnsafeFlagLength
    static int _get_UnsafeFlagLength();
    // Set static field: static private System.Int32 UnsafeFlagLength
    static void _set_UnsafeFlagLength(int value);
    // public System.Void .ctor(System.Globalization.CultureInfo culture)
    // Offset: 0x100F0B8
    static SimpleCollator* New_ctor(System::Globalization::CultureInfo* culture);
    // private System.Void SetCJKTable(System.Globalization.CultureInfo culture, Mono.Globalization.Unicode.CodePointIndexer cjkIndexer, System.Byte* catTable, System.Byte* lv1Table, Mono.Globalization.Unicode.CodePointIndexer lv2Indexer, System.Byte* lv2Table)
    // Offset: 0x100F418
    void SetCJKTable(System::Globalization::CultureInfo* culture, Mono::Globalization::Unicode::CodePointIndexer*& cjkIndexer, uint8_t*& catTable, uint8_t*& lv1Table, Mono::Globalization::Unicode::CodePointIndexer*& lv2Indexer, uint8_t*& lv2Table);
    // static private System.Globalization.CultureInfo GetNeutralCulture(System.Globalization.CultureInfo info)
    // Offset: 0x100F500
    static System::Globalization::CultureInfo* GetNeutralCulture(System::Globalization::CultureInfo* info);
    // private System.Byte Category(System.Int32 cp)
    // Offset: 0x100F57C
    uint8_t Category(int cp);
    // private System.Byte Level1(System.Int32 cp)
    // Offset: 0x100F62C
    uint8_t Level1(int cp);
    // private System.Byte Level2(System.Int32 cp, Mono.Globalization.Unicode.SimpleCollator/ExtenderType ext)
    // Offset: 0x100F6DC
    uint8_t Level2(int cp, Mono::Globalization::Unicode::SimpleCollator::ExtenderType ext);
    // static private System.Boolean IsHalfKana(System.Int32 cp, System.Globalization.CompareOptions opt)
    // Offset: 0x100F82C
    static bool IsHalfKana(int cp, System::Globalization::CompareOptions opt);
    // private Mono.Globalization.Unicode.Contraction GetContraction(System.String s, System.Int32 start, System.Int32 end)
    // Offset: 0x100F8B4
    Mono::Globalization::Unicode::Contraction* GetContraction(::Il2CppString* s, int start, int end);
    // private Mono.Globalization.Unicode.Contraction GetContraction(System.String s, System.Int32 start, System.Int32 end, Mono.Globalization.Unicode.Contraction[] clist)
    // Offset: 0x100F990
    Mono::Globalization::Unicode::Contraction* GetContraction(::Il2CppString* s, int start, int end, ::Array<Mono::Globalization::Unicode::Contraction*>* clist);
    // private Mono.Globalization.Unicode.Contraction GetTailContraction(System.String s, System.Int32 start, System.Int32 end)
    // Offset: 0x100FAC4
    Mono::Globalization::Unicode::Contraction* GetTailContraction(::Il2CppString* s, int start, int end);
    // private Mono.Globalization.Unicode.Contraction GetTailContraction(System.String s, System.Int32 start, System.Int32 end, Mono.Globalization.Unicode.Contraction[] clist)
    // Offset: 0x100FBA0
    Mono::Globalization::Unicode::Contraction* GetTailContraction(::Il2CppString* s, int start, int end, ::Array<Mono::Globalization::Unicode::Contraction*>* clist);
    // private System.Int32 FilterOptions(System.Int32 i, System.Globalization.CompareOptions opt)
    // Offset: 0x100FDB4
    int FilterOptions(int i, System::Globalization::CompareOptions opt);
    // private Mono.Globalization.Unicode.SimpleCollator/ExtenderType GetExtenderType(System.Int32 i)
    // Offset: 0x100FED4
    Mono::Globalization::Unicode::SimpleCollator::ExtenderType GetExtenderType(int i);
    // static private System.Byte ToDashTypeValue(Mono.Globalization.Unicode.SimpleCollator/ExtenderType ext, System.Globalization.CompareOptions opt)
    // Offset: 0x100FFE0
    static uint8_t ToDashTypeValue(Mono::Globalization::Unicode::SimpleCollator::ExtenderType ext, System::Globalization::CompareOptions opt);
    // private System.Int32 FilterExtender(System.Int32 i, Mono.Globalization.Unicode.SimpleCollator/ExtenderType ext, System.Globalization.CompareOptions opt)
    // Offset: 0x1010000
    int FilterExtender(int i, Mono::Globalization::Unicode::SimpleCollator::ExtenderType ext, System::Globalization::CompareOptions opt);
    // static private System.Boolean IsIgnorable(System.Int32 i, System.Globalization.CompareOptions opt)
    // Offset: 0x1010234
    static bool IsIgnorable(int i, System::Globalization::CompareOptions opt);
    // private System.Boolean IsSafe(System.Int32 i)
    // Offset: 0x10102C8
    bool IsSafe(int i);
    // public System.Globalization.SortKey GetSortKey(System.String s, System.Globalization.CompareOptions options)
    // Offset: 0x1010334
    System::Globalization::SortKey* GetSortKey(::Il2CppString* s, System::Globalization::CompareOptions options);
    // public System.Globalization.SortKey GetSortKey(System.String s, System.Int32 start, System.Int32 length, System.Globalization.CompareOptions options)
    // Offset: 0x1010354
    System::Globalization::SortKey* GetSortKey(::Il2CppString* s, int start, int length, System::Globalization::CompareOptions options);
    // private System.Void GetSortKey(System.String s, System.Int32 start, System.Int32 end, Mono.Globalization.Unicode.SortKeyBuffer buf, System.Globalization.CompareOptions opt)
    // Offset: 0x101067C
    void GetSortKey(::Il2CppString* s, int start, int end, Mono::Globalization::Unicode::SortKeyBuffer* buf, System::Globalization::CompareOptions opt);
    // private System.Void FillSortKeyRaw(System.Int32 i, Mono.Globalization.Unicode.SimpleCollator/ExtenderType ext, Mono.Globalization.Unicode.SortKeyBuffer buf, System.Globalization.CompareOptions opt)
    // Offset: 0x1010A7C
    void FillSortKeyRaw(int i, Mono::Globalization::Unicode::SimpleCollator::ExtenderType ext, Mono::Globalization::Unicode::SortKeyBuffer* buf, System::Globalization::CompareOptions opt);
    // private System.Void FillSurrogateSortKeyRaw(System.Int32 i, Mono.Globalization.Unicode.SortKeyBuffer buf)
    // Offset: 0x1011030
    void FillSurrogateSortKeyRaw(int i, Mono::Globalization::Unicode::SortKeyBuffer* buf);
    // System.Int32 Compare(System.String s1, System.Int32 idx1, System.Int32 len1, System.String s2, System.Int32 idx2, System.Int32 len2, System.Globalization.CompareOptions options)
    // Offset: 0x1011180
    int Compare(::Il2CppString* s1, int idx1, int len1, ::Il2CppString* s2, int idx2, int len2, System::Globalization::CompareOptions options);
    // private System.Void ClearBuffer(System.Byte* buffer, System.Int32 size)
    // Offset: 0x1010A44
    void ClearBuffer(uint8_t* buffer, int size);
    // private System.Int32 CompareInternal(System.String s1, System.Int32 idx1, System.Int32 len1, System.String s2, System.Int32 idx2, System.Int32 len2, System.Boolean targetConsumed, System.Boolean sourceConsumed, System.Boolean skipHeadingExtenders, System.Boolean immediateBreakup, Mono.Globalization.Unicode.SimpleCollator/Context ctx)
    // Offset: 0x1011240
    int CompareInternal(::Il2CppString* s1, int idx1, int len1, ::Il2CppString* s2, int idx2, int len2, bool& targetConsumed, bool& sourceConsumed, bool skipHeadingExtenders, bool immediateBreakup, Mono::Globalization::Unicode::SimpleCollator::Context& ctx);
    // private System.Int32 CompareFlagPair(System.Boolean b1, System.Boolean b2)
    // Offset: 0x10125CC
    int CompareFlagPair(bool b1, bool b2);
    // public System.Boolean IsPrefix(System.String src, System.String target, System.Globalization.CompareOptions opt)
    // Offset: 0x10125EC
    bool IsPrefix(::Il2CppString* src, ::Il2CppString* target, System::Globalization::CompareOptions opt);
    // public System.Boolean IsPrefix(System.String s, System.String target, System.Int32 start, System.Int32 length, System.Globalization.CompareOptions opt)
    // Offset: 0x101260C
    bool IsPrefix(::Il2CppString* s, ::Il2CppString* target, int start, int length, System::Globalization::CompareOptions opt);
    // private System.Boolean IsPrefix(System.String s, System.String target, System.Int32 start, System.Int32 length, System.Boolean skipHeadingExtenders, Mono.Globalization.Unicode.SimpleCollator/Context ctx)
    // Offset: 0x10126C0
    bool IsPrefix(::Il2CppString* s, ::Il2CppString* target, int start, int length, bool skipHeadingExtenders, Mono::Globalization::Unicode::SimpleCollator::Context& ctx);
    // public System.Boolean IsSuffix(System.String src, System.String target, System.Globalization.CompareOptions opt)
    // Offset: 0x101272C
    bool IsSuffix(::Il2CppString* src, ::Il2CppString* target, System::Globalization::CompareOptions opt);
    // public System.Boolean IsSuffix(System.String s, System.String target, System.Int32 start, System.Int32 length, System.Globalization.CompareOptions opt)
    // Offset: 0x101274C
    bool IsSuffix(::Il2CppString* s, ::Il2CppString* target, int start, int length, System::Globalization::CompareOptions opt);
    // private System.Int32 QuickIndexOf(System.String s, System.String target, System.Int32 start, System.Int32 length, System.Boolean testWasUnable)
    // Offset: 0x10129C4
    int QuickIndexOf(::Il2CppString* s, ::Il2CppString* target, int start, int length, bool& testWasUnable);
    // public System.Int32 IndexOf(System.String s, System.String target, System.Int32 start, System.Int32 length, System.Globalization.CompareOptions opt)
    // Offset: 0x1012B38
    int IndexOf(::Il2CppString* s, ::Il2CppString* target, int start, int length, System::Globalization::CompareOptions opt);
    // private System.Int32 IndexOfOrdinal(System.String s, System.String target, System.Int32 start, System.Int32 length)
    // Offset: 0x10131F8
    int IndexOfOrdinal(::Il2CppString* s, ::Il2CppString* target, int start, int length);
    // private System.Int32 IndexOfOrdinal(System.String s, System.Char target, System.Int32 start, System.Int32 length)
    // Offset: 0x10132D4
    int IndexOfOrdinal(::Il2CppString* s, ::Il2CppChar target, int start, int length);
    // private System.Int32 IndexOfSortKey(System.String s, System.Int32 start, System.Int32 length, System.Byte* sortkey, System.Char target, System.Int32 ti, System.Boolean noLv4, Mono.Globalization.Unicode.SimpleCollator/Context ctx)
    // Offset: 0x1013344
    int IndexOfSortKey(::Il2CppString* s, int start, int length, uint8_t* sortkey, ::Il2CppChar target, int ti, bool noLv4, Mono::Globalization::Unicode::SimpleCollator::Context& ctx);
    // private System.Int32 IndexOf(System.String s, System.String target, System.Int32 start, System.Int32 length, System.Byte* targetSortKey, Mono.Globalization.Unicode.SimpleCollator/Context ctx)
    // Offset: 0x1012D24
    int IndexOf(::Il2CppString* s, ::Il2CppString* target, int start, int length, uint8_t* targetSortKey, Mono::Globalization::Unicode::SimpleCollator::Context& ctx);
    // public System.Int32 LastIndexOf(System.String s, System.String target, System.Int32 start, System.Int32 length, System.Globalization.CompareOptions opt)
    // Offset: 0x10127E8
    int LastIndexOf(::Il2CppString* s, ::Il2CppString* target, int start, int length, System::Globalization::CompareOptions opt);
    // private System.Int32 LastIndexOfOrdinal(System.String s, System.String target, System.Int32 start, System.Int32 length)
    // Offset: 0x10135A4
    int LastIndexOfOrdinal(::Il2CppString* s, ::Il2CppString* target, int start, int length);
    // private System.Int32 LastIndexOfSortKey(System.String s, System.Int32 start, System.Int32 orgStart, System.Int32 length, System.Byte* sortkey, System.Int32 ti, System.Boolean noLv4, Mono.Globalization.Unicode.SimpleCollator/Context ctx)
    // Offset: 0x1013C20
    int LastIndexOfSortKey(::Il2CppString* s, int start, int orgStart, int length, uint8_t* sortkey, int ti, bool noLv4, Mono::Globalization::Unicode::SimpleCollator::Context& ctx);
    // private System.Int32 LastIndexOf(System.String s, System.String target, System.Int32 start, System.Int32 length, System.Byte* targetSortKey, Mono.Globalization.Unicode.SimpleCollator/Context ctx)
    // Offset: 0x10136D4
    int LastIndexOf(::Il2CppString* s, ::Il2CppString* target, int start, int length, uint8_t* targetSortKey, Mono::Globalization::Unicode::SimpleCollator::Context& ctx);
    // private System.Boolean MatchesForward(System.String s, System.Int32 idx, System.Int32 end, System.Int32 ti, System.Byte* sortkey, System.Boolean noLv4, Mono.Globalization.Unicode.SimpleCollator/Context ctx)
    // Offset: 0x10133E4
    bool MatchesForward(::Il2CppString* s, int& idx, int end, int ti, uint8_t* sortkey, bool noLv4, Mono::Globalization::Unicode::SimpleCollator::Context& ctx);
    // private System.Boolean MatchesForwardCore(System.String s, System.Int32 idx, System.Int32 end, System.Int32 ti, System.Byte* sortkey, System.Boolean noLv4, Mono.Globalization.Unicode.SimpleCollator/ExtenderType ext, Mono.Globalization.Unicode.Contraction ct, Mono.Globalization.Unicode.SimpleCollator/Context ctx)
    // Offset: 0x1013E98
    bool MatchesForwardCore(::Il2CppString* s, int& idx, int end, int ti, uint8_t* sortkey, bool noLv4, Mono::Globalization::Unicode::SimpleCollator::ExtenderType ext, Mono::Globalization::Unicode::Contraction*& ct, Mono::Globalization::Unicode::SimpleCollator::Context& ctx);
    // private System.Boolean MatchesPrimitive(System.Globalization.CompareOptions opt, System.Byte* source, System.Int32 si, Mono.Globalization.Unicode.SimpleCollator/ExtenderType ext, System.Byte* target, System.Int32 ti, System.Boolean noLv4)
    // Offset: 0x1014210
    bool MatchesPrimitive(System::Globalization::CompareOptions opt, uint8_t* source, int si, Mono::Globalization::Unicode::SimpleCollator::ExtenderType ext, uint8_t* target, int ti, bool noLv4);
    // private System.Boolean MatchesBackward(System.String s, System.Int32 idx, System.Int32 end, System.Int32 orgStart, System.Int32 ti, System.Byte* sortkey, System.Boolean noLv4, Mono.Globalization.Unicode.SimpleCollator/Context ctx)
    // Offset: 0x1013CD0
    bool MatchesBackward(::Il2CppString* s, int& idx, int end, int orgStart, int ti, uint8_t* sortkey, bool noLv4, Mono::Globalization::Unicode::SimpleCollator::Context& ctx);
    // private System.Boolean MatchesBackwardCore(System.String s, System.Int32 idx, System.Int32 end, System.Int32 orgStart, System.Int32 ti, System.Byte* sortkey, System.Boolean noLv4, Mono.Globalization.Unicode.SimpleCollator/ExtenderType ext, Mono.Globalization.Unicode.Contraction ct, Mono.Globalization.Unicode.SimpleCollator/Context ctx)
    // Offset: 0x101446C
    bool MatchesBackwardCore(::Il2CppString* s, int& idx, int end, int orgStart, int ti, uint8_t* sortkey, bool noLv4, Mono::Globalization::Unicode::SimpleCollator::ExtenderType ext, Mono::Globalization::Unicode::Contraction*& ct, Mono::Globalization::Unicode::SimpleCollator::Context& ctx);
    // static private System.Void .cctor()
    // Offset: 0x1014994
    static void _cctor();
  }; // Mono.Globalization.Unicode.SimpleCollator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Globalization::Unicode::SimpleCollator*, "Mono.Globalization.Unicode", "SimpleCollator");
#pragma pack(pop)
