// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: DateTimeFormatInfo
  class DateTimeFormatInfo;
  // Forward declaring type: FORMATFLAGS
  struct FORMATFLAGS;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Autogenerated type: System.Globalization.DateTimeFormatInfoScanner
  class DateTimeFormatInfoScanner : public ::Il2CppObject {
    public:
    // Nested type: System::Globalization::DateTimeFormatInfoScanner::FoundDatePattern
    struct FoundDatePattern;
    // Autogenerated type: System.Globalization.DateTimeFormatInfoScanner/FoundDatePattern
    struct FoundDatePattern : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public System.Globalization.DateTimeFormatInfoScanner/FoundDatePattern None
      static constexpr const int None = 0;
      // Get static field: static public System.Globalization.DateTimeFormatInfoScanner/FoundDatePattern None
      static System::Globalization::DateTimeFormatInfoScanner::FoundDatePattern _get_None();
      // Set static field: static public System.Globalization.DateTimeFormatInfoScanner/FoundDatePattern None
      static void _set_None(System::Globalization::DateTimeFormatInfoScanner::FoundDatePattern value);
      // static field const value: static public System.Globalization.DateTimeFormatInfoScanner/FoundDatePattern FoundYearPatternFlag
      static constexpr const int FoundYearPatternFlag = 1;
      // Get static field: static public System.Globalization.DateTimeFormatInfoScanner/FoundDatePattern FoundYearPatternFlag
      static System::Globalization::DateTimeFormatInfoScanner::FoundDatePattern _get_FoundYearPatternFlag();
      // Set static field: static public System.Globalization.DateTimeFormatInfoScanner/FoundDatePattern FoundYearPatternFlag
      static void _set_FoundYearPatternFlag(System::Globalization::DateTimeFormatInfoScanner::FoundDatePattern value);
      // static field const value: static public System.Globalization.DateTimeFormatInfoScanner/FoundDatePattern FoundMonthPatternFlag
      static constexpr const int FoundMonthPatternFlag = 2;
      // Get static field: static public System.Globalization.DateTimeFormatInfoScanner/FoundDatePattern FoundMonthPatternFlag
      static System::Globalization::DateTimeFormatInfoScanner::FoundDatePattern _get_FoundMonthPatternFlag();
      // Set static field: static public System.Globalization.DateTimeFormatInfoScanner/FoundDatePattern FoundMonthPatternFlag
      static void _set_FoundMonthPatternFlag(System::Globalization::DateTimeFormatInfoScanner::FoundDatePattern value);
      // static field const value: static public System.Globalization.DateTimeFormatInfoScanner/FoundDatePattern FoundDayPatternFlag
      static constexpr const int FoundDayPatternFlag = 4;
      // Get static field: static public System.Globalization.DateTimeFormatInfoScanner/FoundDatePattern FoundDayPatternFlag
      static System::Globalization::DateTimeFormatInfoScanner::FoundDatePattern _get_FoundDayPatternFlag();
      // Set static field: static public System.Globalization.DateTimeFormatInfoScanner/FoundDatePattern FoundDayPatternFlag
      static void _set_FoundDayPatternFlag(System::Globalization::DateTimeFormatInfoScanner::FoundDatePattern value);
      // static field const value: static public System.Globalization.DateTimeFormatInfoScanner/FoundDatePattern FoundYMDPatternFlag
      static constexpr const int FoundYMDPatternFlag = 7;
      // Get static field: static public System.Globalization.DateTimeFormatInfoScanner/FoundDatePattern FoundYMDPatternFlag
      static System::Globalization::DateTimeFormatInfoScanner::FoundDatePattern _get_FoundYMDPatternFlag();
      // Set static field: static public System.Globalization.DateTimeFormatInfoScanner/FoundDatePattern FoundYMDPatternFlag
      static void _set_FoundYMDPatternFlag(System::Globalization::DateTimeFormatInfoScanner::FoundDatePattern value);
      // Creating value type constructor for type: FoundDatePattern
      FoundDatePattern(int value_ = {}) : value{value_} {}
    }; // System.Globalization.DateTimeFormatInfoScanner/FoundDatePattern
    // System.Collections.Generic.List`1<System.String> m_dateWords
    // Offset: 0x10
    System::Collections::Generic::List_1<::Il2CppString*>* m_dateWords;
    // private System.Globalization.DateTimeFormatInfoScanner/FoundDatePattern m_ymdFlags
    // Offset: 0x18
    System::Globalization::DateTimeFormatInfoScanner::FoundDatePattern m_ymdFlags;
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.String,System.String> s_knownWords
    static System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* _get_s_knownWords();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.String,System.String> s_knownWords
    static void _set_s_knownWords(System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* value);
    // static private System.Collections.Generic.Dictionary`2<System.String,System.String> get_KnownWords()
    // Offset: 0x121CEE8
    static System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* get_KnownWords();
    // static System.Int32 SkipWhiteSpacesAndNonLetter(System.String pattern, System.Int32 currentIndex)
    // Offset: 0x121D1F0
    static int SkipWhiteSpacesAndNonLetter(::Il2CppString* pattern, int currentIndex);
    // System.Void AddDateWordOrPostfix(System.String formatPostfix, System.String str)
    // Offset: 0x121D2FC
    void AddDateWordOrPostfix(::Il2CppString* formatPostfix, ::Il2CppString* str);
    // System.Int32 AddDateWords(System.String pattern, System.Int32 index, System.String formatPostfix)
    // Offset: 0x121D5EC
    int AddDateWords(::Il2CppString* pattern, int index, ::Il2CppString* formatPostfix);
    // static System.Int32 ScanRepeatChar(System.String pattern, System.Char ch, System.Int32 index, System.Int32 count)
    // Offset: 0x121D7D8
    static int ScanRepeatChar(::Il2CppString* pattern, ::Il2CppChar ch, int index, int& count);
    // System.Void AddIgnorableSymbols(System.String text)
    // Offset: 0x121D4F8
    void AddIgnorableSymbols(::Il2CppString* text);
    // System.Void ScanDateWord(System.String pattern)
    // Offset: 0x121D860
    void ScanDateWord(::Il2CppString* pattern);
    // System.String[] GetDateWordsOfDTFI(System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x121C08C
    ::Array<::Il2CppString*>* GetDateWordsOfDTFI(System::Globalization::DateTimeFormatInfo* dtfi);
    // static System.Globalization.FORMATFLAGS GetFormatFlagGenitiveMonth(System.String[] monthNames, System.String[] genitveMonthNames, System.String[] abbrevMonthNames, System.String[] genetiveAbbrevMonthNames)
    // Offset: 0x121A984
    static System::Globalization::FORMATFLAGS GetFormatFlagGenitiveMonth(::Array<::Il2CppString*>* monthNames, ::Array<::Il2CppString*>* genitveMonthNames, ::Array<::Il2CppString*>* abbrevMonthNames, ::Array<::Il2CppString*>* genetiveAbbrevMonthNames);
    // static System.Globalization.FORMATFLAGS GetFormatFlagUseSpaceInMonthNames(System.String[] monthNames, System.String[] genitveMonthNames, System.String[] abbrevMonthNames, System.String[] genetiveAbbrevMonthNames)
    // Offset: 0x121A9C8
    static System::Globalization::FORMATFLAGS GetFormatFlagUseSpaceInMonthNames(::Array<::Il2CppString*>* monthNames, ::Array<::Il2CppString*>* genitveMonthNames, ::Array<::Il2CppString*>* abbrevMonthNames, ::Array<::Il2CppString*>* genetiveAbbrevMonthNames);
    // static System.Globalization.FORMATFLAGS GetFormatFlagUseSpaceInDayNames(System.String[] dayNames, System.String[] abbrevDayNames)
    // Offset: 0x121AA78
    static System::Globalization::FORMATFLAGS GetFormatFlagUseSpaceInDayNames(::Array<::Il2CppString*>* dayNames, ::Array<::Il2CppString*>* abbrevDayNames);
    // static System.Globalization.FORMATFLAGS GetFormatFlagUseHebrewCalendar(System.Int32 calID)
    // Offset: 0x121AAB4
    static System::Globalization::FORMATFLAGS GetFormatFlagUseHebrewCalendar(int calID);
    // static private System.Boolean EqualStringArrays(System.String[] array1, System.String[] array2)
    // Offset: 0x121DA94
    static bool EqualStringArrays(::Array<::Il2CppString*>* array1, ::Array<::Il2CppString*>* array2);
    // static private System.Boolean ArrayElementsHaveSpace(System.String[] array)
    // Offset: 0x121DDC4
    static bool ArrayElementsHaveSpace(::Array<::Il2CppString*>* array);
    // static private System.Boolean ArrayElementsBeginWithDigit(System.String[] array)
    // Offset: 0x121DB50
    static bool ArrayElementsBeginWithDigit(::Array<::Il2CppString*>* array);
    // public System.Void .ctor()
    // Offset: 0x121C010
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DateTimeFormatInfoScanner* New_ctor();
  }; // System.Globalization.DateTimeFormatInfoScanner
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::DateTimeFormatInfoScanner*, "System.Globalization", "DateTimeFormatInfoScanner");
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::DateTimeFormatInfoScanner::FoundDatePattern, "System.Globalization", "DateTimeFormatInfoScanner/FoundDatePattern");
#pragma pack(pop)
