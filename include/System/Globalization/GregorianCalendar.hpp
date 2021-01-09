// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Globalization.Calendar
#include "System/Globalization/Calendar.hpp"
// Including type: System.Globalization.GregorianCalendarTypes
#include "System/Globalization/GregorianCalendarTypes.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
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
  // Autogenerated type: System.Globalization.GregorianCalendar
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D39718
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
    // Offset: 0x162C5D8
    void OnDeserialized(System::Runtime::Serialization::StreamingContext ctx);
    // static System.Globalization.Calendar GetDefaultInstance()
    // Offset: 0x161C360
    static System::Globalization::Calendar* GetDefaultInstance();
    // public System.Void .ctor(System.Globalization.GregorianCalendarTypes type)
    // Offset: 0x161B29C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GregorianCalendar* New_ctor(System::Globalization::GregorianCalendarTypes type) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::GregorianCalendar::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GregorianCalendar*, creationType>(type)));
    }
    // System.Int32 GetDatePart(System.Int64 ticks, System.Int32 part)
    // Offset: 0x162C7B8
    int GetDatePart(int64_t ticks, int part);
    // static private System.Void .cctor()
    // Offset: 0x162D57C
    static void _cctor();
    // public override System.DateTime get_MinSupportedDateTime()
    // Offset: 0x162C6D8
    // Implemented from: System.Globalization.Calendar
    // Base method: System.DateTime Calendar::get_MinSupportedDateTime()
    System::DateTime get_MinSupportedDateTime();
    // public override System.DateTime get_MaxSupportedDateTime()
    // Offset: 0x162C740
    // Implemented from: System.Globalization.Calendar
    // Base method: System.DateTime Calendar::get_MaxSupportedDateTime()
    System::DateTime get_MaxSupportedDateTime();
    // public System.Void .ctor()
    // Offset: 0x162C7A8
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Void Calendar::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GregorianCalendar* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::GregorianCalendar::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GregorianCalendar*, creationType>()));
    }
    // override System.Int32 get_ID()
    // Offset: 0x162C7B0
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::get_ID()
    int get_ID();
    // public override System.Int32 GetDayOfMonth(System.DateTime time)
    // Offset: 0x162C9F4
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetDayOfMonth(System.DateTime time)
    int GetDayOfMonth(System::DateTime time);
    // public override System.DayOfWeek GetDayOfWeek(System.DateTime time)
    // Offset: 0x162CA3C
    // Implemented from: System.Globalization.Calendar
    // Base method: System.DayOfWeek Calendar::GetDayOfWeek(System.DateTime time)
    System::DayOfWeek GetDayOfWeek(System::DateTime time);
    // public override System.Int32 GetDaysInMonth(System.Int32 year, System.Int32 month, System.Int32 era)
    // Offset: 0x162CAB0
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetDaysInMonth(System.Int32 year, System.Int32 month, System.Int32 era)
    int GetDaysInMonth(int year, int month, int era);
    // public override System.Int32 GetEra(System.DateTime time)
    // Offset: 0x162CD60
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetEra(System.DateTime time)
    int GetEra(System::DateTime time);
    // public override System.Int32[] get_Eras()
    // Offset: 0x162CD68
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32[] Calendar::get_Eras()
    ::Array<int>* get_Eras();
    // public override System.Int32 GetMonth(System.DateTime time)
    // Offset: 0x162CDDC
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetMonth(System.DateTime time)
    int GetMonth(System::DateTime time);
    // public override System.Int32 GetMonthsInYear(System.Int32 year, System.Int32 era)
    // Offset: 0x162CE24
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetMonthsInYear(System.Int32 year, System.Int32 era)
    int GetMonthsInYear(int year, int era);
    // public override System.Int32 GetYear(System.DateTime time)
    // Offset: 0x162CFA4
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetYear(System.DateTime time)
    int GetYear(System::DateTime time);
    // public override System.Boolean IsLeapYear(System.Int32 year, System.Int32 era)
    // Offset: 0x162CFEC
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Boolean Calendar::IsLeapYear(System.Int32 year, System.Int32 era)
    bool IsLeapYear(int year, int era);
    // public override System.DateTime ToDateTime(System.Int32 year, System.Int32 month, System.Int32 day, System.Int32 hour, System.Int32 minute, System.Int32 second, System.Int32 millisecond, System.Int32 era)
    // Offset: 0x162D1B4
    // Implemented from: System.Globalization.Calendar
    // Base method: System.DateTime Calendar::ToDateTime(System.Int32 year, System.Int32 month, System.Int32 day, System.Int32 hour, System.Int32 minute, System.Int32 second, System.Int32 millisecond, System.Int32 era)
    System::DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era);
    // override System.Boolean TryToDateTime(System.Int32 year, System.Int32 month, System.Int32 day, System.Int32 hour, System.Int32 minute, System.Int32 second, System.Int32 millisecond, System.Int32 era, out System.DateTime result)
    // Offset: 0x162D2C8
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Boolean Calendar::TryToDateTime(System.Int32 year, System.Int32 month, System.Int32 day, System.Int32 hour, System.Int32 minute, System.Int32 second, System.Int32 millisecond, System.Int32 era, out System.DateTime result)
    bool TryToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era, System::DateTime& result);
    // public override System.Int32 get_TwoDigitYearMax()
    // Offset: 0x162D3D4
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::get_TwoDigitYearMax()
    int get_TwoDigitYearMax();
    // public override System.Int32 ToFourDigitYear(System.Int32 year)
    // Offset: 0x162D41C
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::ToFourDigitYear(System.Int32 year)
    int ToFourDigitYear(int year);
  }; // System.Globalization.GregorianCalendar
  static check_size<sizeof(GregorianCalendar), 28 + sizeof(System::Globalization::GregorianCalendarTypes)> __System_Globalization_GregorianCalendarSizeCheck;
  static_assert(sizeof(GregorianCalendar) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::GregorianCalendar*, "System.Globalization", "GregorianCalendar");
#pragma pack(pop)
