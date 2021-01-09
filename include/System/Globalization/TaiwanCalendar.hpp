// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Globalization.Calendar
#include "System/Globalization/Calendar.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: GregorianCalendarHelper
  class GregorianCalendarHelper;
  // Forward declaring type: EraInfo
  class EraInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DayOfWeek
  struct DayOfWeek;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x28
  // Autogenerated type: System.Globalization.TaiwanCalendar
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D397A4
  class TaiwanCalendar : public System::Globalization::Calendar {
    public:
    // Writing base type padding for base size: 0x1C to desired offset: 0x20
    char ___base_padding[0x4] = {};
    // System.Globalization.GregorianCalendarHelper helper
    // Size: 0x8
    // Offset: 0x20
    System::Globalization::GregorianCalendarHelper* helper;
    // Field size check
    static_assert(sizeof(System::Globalization::GregorianCalendarHelper*) == 0x8);
    // Creating value type constructor for type: TaiwanCalendar
    TaiwanCalendar(System::Globalization::GregorianCalendarHelper* helper_ = {}) noexcept : helper{helper_} {}
    // Creating conversion operator: operator System::Globalization::GregorianCalendarHelper*
    constexpr operator System::Globalization::GregorianCalendarHelper*() const noexcept {
      return helper;
    }
    // Get static field: static System.Globalization.EraInfo[] taiwanEraInfo
    static ::Array<System::Globalization::EraInfo*>* _get_taiwanEraInfo();
    // Set static field: static System.Globalization.EraInfo[] taiwanEraInfo
    static void _set_taiwanEraInfo(::Array<System::Globalization::EraInfo*>* value);
    // Get static field: static System.Globalization.Calendar s_defaultInstance
    static System::Globalization::Calendar* _get_s_defaultInstance();
    // Set static field: static System.Globalization.Calendar s_defaultInstance
    static void _set_s_defaultInstance(System::Globalization::Calendar* value);
    // Get static field: static readonly System.DateTime calendarMinValue
    static System::DateTime _get_calendarMinValue();
    // Set static field: static readonly System.DateTime calendarMinValue
    static void _set_calendarMinValue(System::DateTime value);
    // static System.Globalization.Calendar GetDefaultInstance()
    // Offset: 0x1428C90
    static System::Globalization::Calendar* GetDefaultInstance();
    // static private System.Void .cctor()
    // Offset: 0x14292D0
    static void _cctor();
    // public override System.DateTime get_MinSupportedDateTime()
    // Offset: 0x1428F14
    // Implemented from: System.Globalization.Calendar
    // Base method: System.DateTime Calendar::get_MinSupportedDateTime()
    System::DateTime get_MinSupportedDateTime();
    // public override System.DateTime get_MaxSupportedDateTime()
    // Offset: 0x1428F7C
    // Implemented from: System.Globalization.Calendar
    // Base method: System.DateTime Calendar::get_MaxSupportedDateTime()
    System::DateTime get_MaxSupportedDateTime();
    // public System.Void .ctor()
    // Offset: 0x1428D6C
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Void Calendar::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaiwanCalendar* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::TaiwanCalendar::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaiwanCalendar*, creationType>()));
    }
    // override System.Int32 get_ID()
    // Offset: 0x1428FE4
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::get_ID()
    int get_ID();
    // public override System.Int32 GetDaysInMonth(System.Int32 year, System.Int32 month, System.Int32 era)
    // Offset: 0x1428FEC
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetDaysInMonth(System.Int32 year, System.Int32 month, System.Int32 era)
    int GetDaysInMonth(int year, int month, int era);
    // public override System.Int32 GetDayOfMonth(System.DateTime time)
    // Offset: 0x1429008
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetDayOfMonth(System.DateTime time)
    int GetDayOfMonth(System::DateTime time);
    // public override System.DayOfWeek GetDayOfWeek(System.DateTime time)
    // Offset: 0x1429024
    // Implemented from: System.Globalization.Calendar
    // Base method: System.DayOfWeek Calendar::GetDayOfWeek(System.DateTime time)
    System::DayOfWeek GetDayOfWeek(System::DateTime time);
    // public override System.Int32 GetMonthsInYear(System.Int32 year, System.Int32 era)
    // Offset: 0x1429040
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetMonthsInYear(System.Int32 year, System.Int32 era)
    int GetMonthsInYear(int year, int era);
    // public override System.Int32 GetEra(System.DateTime time)
    // Offset: 0x142905C
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetEra(System.DateTime time)
    int GetEra(System::DateTime time);
    // public override System.Int32 GetMonth(System.DateTime time)
    // Offset: 0x1429078
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetMonth(System.DateTime time)
    int GetMonth(System::DateTime time);
    // public override System.Int32 GetYear(System.DateTime time)
    // Offset: 0x1429094
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetYear(System.DateTime time)
    int GetYear(System::DateTime time);
    // public override System.Boolean IsLeapYear(System.Int32 year, System.Int32 era)
    // Offset: 0x14290B0
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Boolean Calendar::IsLeapYear(System.Int32 year, System.Int32 era)
    bool IsLeapYear(int year, int era);
    // public override System.DateTime ToDateTime(System.Int32 year, System.Int32 month, System.Int32 day, System.Int32 hour, System.Int32 minute, System.Int32 second, System.Int32 millisecond, System.Int32 era)
    // Offset: 0x14290CC
    // Implemented from: System.Globalization.Calendar
    // Base method: System.DateTime Calendar::ToDateTime(System.Int32 year, System.Int32 month, System.Int32 day, System.Int32 hour, System.Int32 minute, System.Int32 second, System.Int32 millisecond, System.Int32 era)
    System::DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era);
    // public override System.Int32[] get_Eras()
    // Offset: 0x14290F4
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32[] Calendar::get_Eras()
    ::Array<int>* get_Eras();
    // public override System.Int32 get_TwoDigitYearMax()
    // Offset: 0x1429110
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::get_TwoDigitYearMax()
    int get_TwoDigitYearMax();
    // public override System.Int32 ToFourDigitYear(System.Int32 year)
    // Offset: 0x1429158
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::ToFourDigitYear(System.Int32 year)
    int ToFourDigitYear(int year);
  }; // System.Globalization.TaiwanCalendar
  static check_size<sizeof(TaiwanCalendar), 32 + sizeof(System::Globalization::GregorianCalendarHelper*)> __System_Globalization_TaiwanCalendarSizeCheck;
  static_assert(sizeof(TaiwanCalendar) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::TaiwanCalendar*, "System.Globalization", "TaiwanCalendar");
#pragma pack(pop)
