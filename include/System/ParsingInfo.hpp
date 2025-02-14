// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.DateTimeParse/TM
#include "System/DateTimeParse_TM.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: Calendar
  class Calendar;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.ParsingInfo
  struct ParsingInfo/*, public System::ValueType*/ {
    public:
    // System.Globalization.Calendar calendar
    // Size: 0x8
    // Offset: 0x0
    System::Globalization::Calendar* calendar;
    // Field size check
    static_assert(sizeof(System::Globalization::Calendar*) == 0x8);
    // System.Int32 dayOfWeek
    // Size: 0x4
    // Offset: 0x8
    int dayOfWeek;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.DateTimeParse/TM timeMark
    // Size: 0x4
    // Offset: 0xC
    System::DateTimeParse::TM timeMark;
    // Field size check
    static_assert(sizeof(System::DateTimeParse::TM) == 0x4);
    // System.Boolean fUseHour12
    // Size: 0x1
    // Offset: 0x10
    bool fUseHour12;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean fUseTwoDigitYear
    // Size: 0x1
    // Offset: 0x11
    bool fUseTwoDigitYear;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean fAllowInnerWhite
    // Size: 0x1
    // Offset: 0x12
    bool fAllowInnerWhite;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean fAllowTrailingWhite
    // Size: 0x1
    // Offset: 0x13
    bool fAllowTrailingWhite;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean fCustomNumberParser
    // Size: 0x1
    // Offset: 0x14
    bool fCustomNumberParser;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fCustomNumberParser and: parseNumberDelegate
    char __padding7[0x3] = {};
    // System.DateTimeParse/MatchNumberDelegate parseNumberDelegate
    // Size: 0x8
    // Offset: 0x18
    System::DateTimeParse::MatchNumberDelegate* parseNumberDelegate;
    // Field size check
    static_assert(sizeof(System::DateTimeParse::MatchNumberDelegate*) == 0x8);
    // Creating value type constructor for type: ParsingInfo
    constexpr ParsingInfo(System::Globalization::Calendar* calendar_ = {}, int dayOfWeek_ = {}, System::DateTimeParse::TM timeMark_ = {}, bool fUseHour12_ = {}, bool fUseTwoDigitYear_ = {}, bool fAllowInnerWhite_ = {}, bool fAllowTrailingWhite_ = {}, bool fCustomNumberParser_ = {}, System::DateTimeParse::MatchNumberDelegate* parseNumberDelegate_ = {}) noexcept : calendar{calendar_}, dayOfWeek{dayOfWeek_}, timeMark{timeMark_}, fUseHour12{fUseHour12_}, fUseTwoDigitYear{fUseTwoDigitYear_}, fAllowInnerWhite{fAllowInnerWhite_}, fAllowTrailingWhite{fAllowTrailingWhite_}, fCustomNumberParser{fCustomNumberParser_}, parseNumberDelegate{parseNumberDelegate_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // System.Void Init()
    // Offset: 0xF086A8
    void Init();
  }; // System.ParsingInfo
  #pragma pack(pop)
  static check_size<sizeof(ParsingInfo), 24 + sizeof(System::DateTimeParse::MatchNumberDelegate*)> __System_ParsingInfoSizeCheck;
  static_assert(sizeof(ParsingInfo) == 0x20);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ParsingInfo, "System", "ParsingInfo");
