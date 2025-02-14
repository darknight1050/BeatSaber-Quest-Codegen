// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: DateTimeFormatInfo
  class DateTimeFormatInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.TimeSpanFormat
  class TimeSpanFormat : public ::Il2CppObject {
    public:
    // Nested type: System::Globalization::TimeSpanFormat::Pattern
    struct Pattern;
    // Nested type: System::Globalization::TimeSpanFormat::FormatLiterals
    struct FormatLiterals;
    // Size: 0x28
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: System.Globalization.TimeSpanFormat/FormatLiterals
    struct FormatLiterals/*, public System::ValueType*/ {
      public:
      // System.String AppCompatLiteral
      // Size: 0x8
      // Offset: 0x0
      ::Il2CppString* AppCompatLiteral;
      // Field size check
      static_assert(sizeof(::Il2CppString*) == 0x8);
      // System.Int32 dd
      // Size: 0x4
      // Offset: 0x8
      int dd;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // System.Int32 hh
      // Size: 0x4
      // Offset: 0xC
      int hh;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // System.Int32 mm
      // Size: 0x4
      // Offset: 0x10
      int mm;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // System.Int32 ss
      // Size: 0x4
      // Offset: 0x14
      int ss;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // System.Int32 ff
      // Size: 0x4
      // Offset: 0x18
      int ff;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Padding between fields: ff and: literals
      char __padding5[0x4] = {};
      // private System.String[] literals
      // Size: 0x8
      // Offset: 0x20
      ::Array<::Il2CppString*>* literals;
      // Field size check
      static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
      // Creating value type constructor for type: FormatLiterals
      constexpr FormatLiterals(::Il2CppString* AppCompatLiteral_ = {}, int dd_ = {}, int hh_ = {}, int mm_ = {}, int ss_ = {}, int ff_ = {}, ::Array<::Il2CppString*>* literals_ = {}) noexcept : AppCompatLiteral{AppCompatLiteral_}, dd{dd_}, hh{hh_}, mm{mm_}, ss{ss_}, ff{ff_}, literals{literals_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // System.String get_Start()
      // Offset: 0xF02658
      ::Il2CppString* get_Start();
      // System.String get_DayHourSep()
      // Offset: 0xF02660
      ::Il2CppString* get_DayHourSep();
      // System.String get_HourMinuteSep()
      // Offset: 0xF02668
      ::Il2CppString* get_HourMinuteSep();
      // System.String get_MinuteSecondSep()
      // Offset: 0xF02670
      ::Il2CppString* get_MinuteSecondSep();
      // System.String get_SecondFractionSep()
      // Offset: 0xF02678
      ::Il2CppString* get_SecondFractionSep();
      // System.String get_End()
      // Offset: 0xF02680
      ::Il2CppString* get_End();
      // static System.Globalization.TimeSpanFormat/FormatLiterals InitInvariant(System.Boolean isNegative)
      // Offset: 0x19E50F8
      static System::Globalization::TimeSpanFormat::FormatLiterals InitInvariant(bool isNegative);
      // System.Void Init(System.String format, System.Boolean useInvariantFieldLengths)
      // Offset: 0xF02688
      void Init(::Il2CppString* format, bool useInvariantFieldLengths);
    }; // System.Globalization.TimeSpanFormat/FormatLiterals
    #pragma pack(pop)
    static check_size<sizeof(TimeSpanFormat::FormatLiterals), 32 + sizeof(::Array<::Il2CppString*>*)> __System_Globalization_TimeSpanFormat_FormatLiteralsSizeCheck;
    static_assert(sizeof(TimeSpanFormat::FormatLiterals) == 0x28);
    // Creating value type constructor for type: TimeSpanFormat
    TimeSpanFormat() noexcept {}
    // Get static field: static readonly System.Globalization.TimeSpanFormat/FormatLiterals PositiveInvariantFormatLiterals
    static System::Globalization::TimeSpanFormat::FormatLiterals _get_PositiveInvariantFormatLiterals();
    // Set static field: static readonly System.Globalization.TimeSpanFormat/FormatLiterals PositiveInvariantFormatLiterals
    static void _set_PositiveInvariantFormatLiterals(System::Globalization::TimeSpanFormat::FormatLiterals value);
    // Get static field: static readonly System.Globalization.TimeSpanFormat/FormatLiterals NegativeInvariantFormatLiterals
    static System::Globalization::TimeSpanFormat::FormatLiterals _get_NegativeInvariantFormatLiterals();
    // Set static field: static readonly System.Globalization.TimeSpanFormat/FormatLiterals NegativeInvariantFormatLiterals
    static void _set_NegativeInvariantFormatLiterals(System::Globalization::TimeSpanFormat::FormatLiterals value);
    // static private System.String IntToString(System.Int32 n, System.Int32 digits)
    // Offset: 0x19E3C00
    static ::Il2CppString* IntToString(int n, int digits);
    // static System.String Format(System.TimeSpan value, System.String format, System.IFormatProvider formatProvider)
    // Offset: 0x19E3C18
    static ::Il2CppString* Format(System::TimeSpan value, ::Il2CppString* format, System::IFormatProvider* formatProvider);
    // static private System.String FormatStandard(System.TimeSpan value, System.Boolean isInvariant, System.String format, System.Globalization.TimeSpanFormat/Pattern pattern)
    // Offset: 0x19E3E5C
    static ::Il2CppString* FormatStandard(System::TimeSpan value, bool isInvariant, ::Il2CppString* format, System::Globalization::TimeSpanFormat::Pattern pattern);
    // static System.String FormatCustomized(System.TimeSpan value, System.String format, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x19E4360
    static ::Il2CppString* FormatCustomized(System::TimeSpan value, ::Il2CppString* format, System::Globalization::DateTimeFormatInfo* dtfi);
    // static private System.Void .cctor()
    // Offset: 0x19E505C
    static void _cctor();
  }; // System.Globalization.TimeSpanFormat
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::TimeSpanFormat*, "System.Globalization", "TimeSpanFormat");
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::TimeSpanFormat::FormatLiterals, "System.Globalization", "TimeSpanFormat/FormatLiterals");
