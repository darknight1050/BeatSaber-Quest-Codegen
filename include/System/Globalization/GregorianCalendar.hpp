// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Globalization.Calendar
#include "System/Globalization/Calendar.hpp"
// Including type: System.Globalization.GregorianCalendarTypes
#include "System/Globalization/GregorianCalendarTypes.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
  // Forward declaring type: DayOfWeek
  struct DayOfWeek;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.GregorianCalendar
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: C95464
  class GregorianCalendar : public System::Globalization::Calendar {
    public:
    // System.Globalization.GregorianCalendarTypes m_type
    // Size: 0x4
    // Offset: 0x1C
    System::Globalization::GregorianCalendarTypes m_type;
    // Field size check
    static_assert(sizeof(System::Globalization::GregorianCalendarTypes) == 0x4);
    // Creating value type constructor for type: GregorianCalendar
    GregorianCalendar(System::Globalization::GregorianCalendarTypes m_type_ = {}) noexcept : m_type{m_type_} {}
    // Creating conversion operator: operator System::Globalization::GregorianCalendarTypes
    constexpr operator System::Globalization::GregorianCalendarTypes() const noexcept {
      return m_type;
    }
    // Get static field: static readonly System.Int32[] DaysToMonth365
    static ::Array<int>* _get_DaysToMonth365();
    // Set static field: static readonly System.Int32[] DaysToMonth365
    static void _set_DaysToMonth365(::Array<int>* value);
    // Get static field: static readonly System.Int32[] DaysToMonth366
    static ::Array<int>* _get_DaysToMonth366();
    // Set static field: static readonly System.Int32[] DaysToMonth366
    static void _set_DaysToMonth366(::Array<int>* value);
    // Get static field: static private System.Globalization.Calendar s_defaultInstance
    static System::Globalization::Calendar* _get_s_defaultInstance();
    // Set static field: static private System.Globalization.Calendar s_defaultInstance
    static void _set_s_defaultInstance(System::Globalization::Calendar* value);
    // private System.Void OnDeserialized(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x1891538
    void OnDeserialized(System::Runtime::Serialization::StreamingContext ctx);
    // static System.Globalization.Calendar GetDefaultInstance()
    // Offset: 0x189170C
    static System::Globalization::Calendar* GetDefaultInstance();
    // public System.Void .ctor(System.Globalization.GregorianCalendarTypes type)
    // Offset: 0x18917E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GregorianCalendar* New_ctor(System::Globalization::GregorianCalendarTypes type) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::GregorianCalendar::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GregorianCalendar*, creationType>(type)));
    }
    // System.Int32 GetDatePart(System.Int64 ticks, System.Int32 part)
    // Offset: 0x1891950
    int GetDatePart_NEW(int64_t ticks, int part);
    // static private System.Void .cctor()
    // Offset: 0x1892720
    static void _cctor();
    // public override System.DateTime get_MinSupportedDateTime()
    // Offset: 0x189163C
    // Implemented from: System.Globalization.Calendar
    // Base method: System.DateTime Calendar::get_MinSupportedDateTime_NEW()
    System::DateTime get_MinSupportedDateTime();
    // public override System.DateTime get_MaxSupportedDateTime()
    // Offset: 0x18916A4
    // Implemented from: System.Globalization.Calendar
    // Base method: System.DateTime Calendar::get_MaxSupportedDateTime_NEW()
    System::DateTime get_MaxSupportedDateTime();
    // public System.Void .ctor()
    // Offset: 0x18917E0
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Void Calendar::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GregorianCalendar* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::GregorianCalendar::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GregorianCalendar*, creationType>()));
    }
    // override System.Int32 get_ID()
    // Offset: 0x1891948
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::get_ID_NEW()
    int get_ID();
    // public override System.Int32 GetDayOfMonth(System.DateTime time)
    // Offset: 0x1891B8C
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetDayOfMonth_NEW(System.DateTime time)
    int GetDayOfMonth(System::DateTime time);
    // public override System.DayOfWeek GetDayOfWeek(System.DateTime time)
    // Offset: 0x1891BD4
    // Implemented from: System.Globalization.Calendar
    // Base method: System.DayOfWeek Calendar::GetDayOfWeek_NEW(System.DateTime time)
    System::DayOfWeek GetDayOfWeek(System::DateTime time);
    // public override System.Int32 GetDaysInMonth(System.Int32 year, System.Int32 month, System.Int32 era)
    // Offset: 0x1891C48
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetDaysInMonth_NEW(System.Int32 year, System.Int32 month, System.Int32 era)
    int GetDaysInMonth(int year, int month, int era);
    // public override System.Int32 GetEra(System.DateTime time)
    // Offset: 0x1891EF8
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetEra_NEW(System.DateTime time)
    int GetEra(System::DateTime time);
    // public override System.Int32[] get_Eras()
    // Offset: 0x1891F00
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32[] Calendar::get_Eras_NEW()
    ::Array<int>* get_Eras();
    // public override System.Int32 GetMonth(System.DateTime time)
    // Offset: 0x1891F74
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetMonth_NEW(System.DateTime time)
    int GetMonth(System::DateTime time);
    // public override System.Int32 GetMonthsInYear(System.Int32 year, System.Int32 era)
    // Offset: 0x1891FBC
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetMonthsInYear_NEW(System.Int32 year, System.Int32 era)
    int GetMonthsInYear(int year, int era);
    // public override System.Int32 GetYear(System.DateTime time)
    // Offset: 0x1892140
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetYear_NEW(System.DateTime time)
    int GetYear(System::DateTime time);
    // public override System.Boolean IsLeapYear(System.Int32 year, System.Int32 era)
    // Offset: 0x1892188
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Boolean Calendar::IsLeapYear_NEW(System.Int32 year, System.Int32 era)
    bool IsLeapYear(int year, int era);
    // public override System.DateTime ToDateTime(System.Int32 year, System.Int32 month, System.Int32 day, System.Int32 hour, System.Int32 minute, System.Int32 second, System.Int32 millisecond, System.Int32 era)
    // Offset: 0x1892354
    // Implemented from: System.Globalization.Calendar
    // Base method: System.DateTime Calendar::ToDateTime_NEW(System.Int32 year, System.Int32 month, System.Int32 day, System.Int32 hour, System.Int32 minute, System.Int32 second, System.Int32 millisecond, System.Int32 era)
    System::DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era);
    // override System.Boolean TryToDateTime(System.Int32 year, System.Int32 month, System.Int32 day, System.Int32 hour, System.Int32 minute, System.Int32 second, System.Int32 millisecond, System.Int32 era, out System.DateTime result)
    // Offset: 0x1892468
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Boolean Calendar::TryToDateTime_NEW(System.Int32 year, System.Int32 month, System.Int32 day, System.Int32 hour, System.Int32 minute, System.Int32 second, System.Int32 millisecond, System.Int32 era, out System.DateTime result)
    bool TryToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era, System::DateTime& result);
    // public override System.Int32 get_TwoDigitYearMax()
    // Offset: 0x1892574
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::get_TwoDigitYearMax_NEW()
    int get_TwoDigitYearMax();
    // public override System.Int32 ToFourDigitYear(System.Int32 year)
    // Offset: 0x18925BC
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::ToFourDigitYear_NEW(System.Int32 year)
    int ToFourDigitYear(int year);
  }; // System.Globalization.GregorianCalendar
  #pragma pack(pop)
  static check_size<sizeof(GregorianCalendar), 28 + sizeof(System::Globalization::GregorianCalendarTypes)> __System_Globalization_GregorianCalendarSizeCheck;
  static_assert(sizeof(GregorianCalendar) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::GregorianCalendar*, "System.Globalization", "GregorianCalendar");
