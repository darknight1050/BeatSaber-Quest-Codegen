// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// WARNING Layout: Sequential may not be correctly taken into account!
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x99
  // Autogenerated type: System.Globalization.CalendarData
  // [] Offset: FFFFFFFF
  class CalendarData : public ::Il2CppObject {
    public:
    // System.String sNativeName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* sNativeName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String[] saShortDates
    // Size: 0x8
    // Offset: 0x18
    ::Array<::Il2CppString*>* saShortDates;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // System.String[] saYearMonths
    // Size: 0x8
    // Offset: 0x20
    ::Array<::Il2CppString*>* saYearMonths;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // System.String[] saLongDates
    // Size: 0x8
    // Offset: 0x28
    ::Array<::Il2CppString*>* saLongDates;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // System.String sMonthDay
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* sMonthDay;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String[] saEraNames
    // Size: 0x8
    // Offset: 0x38
    ::Array<::Il2CppString*>* saEraNames;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // System.String[] saAbbrevEraNames
    // Size: 0x8
    // Offset: 0x40
    ::Array<::Il2CppString*>* saAbbrevEraNames;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // System.String[] saAbbrevEnglishEraNames
    // Size: 0x8
    // Offset: 0x48
    ::Array<::Il2CppString*>* saAbbrevEnglishEraNames;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // System.String[] saDayNames
    // Size: 0x8
    // Offset: 0x50
    ::Array<::Il2CppString*>* saDayNames;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // System.String[] saAbbrevDayNames
    // Size: 0x8
    // Offset: 0x58
    ::Array<::Il2CppString*>* saAbbrevDayNames;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // System.String[] saSuperShortDayNames
    // Size: 0x8
    // Offset: 0x60
    ::Array<::Il2CppString*>* saSuperShortDayNames;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // System.String[] saMonthNames
    // Size: 0x8
    // Offset: 0x68
    ::Array<::Il2CppString*>* saMonthNames;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // System.String[] saAbbrevMonthNames
    // Size: 0x8
    // Offset: 0x70
    ::Array<::Il2CppString*>* saAbbrevMonthNames;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // System.String[] saMonthGenitiveNames
    // Size: 0x8
    // Offset: 0x78
    ::Array<::Il2CppString*>* saMonthGenitiveNames;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // System.String[] saAbbrevMonthGenitiveNames
    // Size: 0x8
    // Offset: 0x80
    ::Array<::Il2CppString*>* saAbbrevMonthGenitiveNames;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // System.String[] saLeapYearMonthNames
    // Size: 0x8
    // Offset: 0x88
    ::Array<::Il2CppString*>* saLeapYearMonthNames;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // System.Int32 iTwoDigitYearMax
    // Size: 0x4
    // Offset: 0x90
    int iTwoDigitYearMax;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 iCurrentEra
    // Size: 0x4
    // Offset: 0x94
    int iCurrentEra;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Boolean bUseUserOverrides
    // Size: 0x1
    // Offset: 0x98
    bool bUseUserOverrides;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: CalendarData
    CalendarData(::Il2CppString* sNativeName_ = {}, ::Array<::Il2CppString*>* saShortDates_ = {}, ::Array<::Il2CppString*>* saYearMonths_ = {}, ::Array<::Il2CppString*>* saLongDates_ = {}, ::Il2CppString* sMonthDay_ = {}, ::Array<::Il2CppString*>* saEraNames_ = {}, ::Array<::Il2CppString*>* saAbbrevEraNames_ = {}, ::Array<::Il2CppString*>* saAbbrevEnglishEraNames_ = {}, ::Array<::Il2CppString*>* saDayNames_ = {}, ::Array<::Il2CppString*>* saAbbrevDayNames_ = {}, ::Array<::Il2CppString*>* saSuperShortDayNames_ = {}, ::Array<::Il2CppString*>* saMonthNames_ = {}, ::Array<::Il2CppString*>* saAbbrevMonthNames_ = {}, ::Array<::Il2CppString*>* saMonthGenitiveNames_ = {}, ::Array<::Il2CppString*>* saAbbrevMonthGenitiveNames_ = {}, ::Array<::Il2CppString*>* saLeapYearMonthNames_ = {}, int iTwoDigitYearMax_ = {}, int iCurrentEra_ = {}, bool bUseUserOverrides_ = {}) noexcept : sNativeName{sNativeName_}, saShortDates{saShortDates_}, saYearMonths{saYearMonths_}, saLongDates{saLongDates_}, sMonthDay{sMonthDay_}, saEraNames{saEraNames_}, saAbbrevEraNames{saAbbrevEraNames_}, saAbbrevEnglishEraNames{saAbbrevEnglishEraNames_}, saDayNames{saDayNames_}, saAbbrevDayNames{saAbbrevDayNames_}, saSuperShortDayNames{saSuperShortDayNames_}, saMonthNames{saMonthNames_}, saAbbrevMonthNames{saAbbrevMonthNames_}, saMonthGenitiveNames{saMonthGenitiveNames_}, saAbbrevMonthGenitiveNames{saAbbrevMonthGenitiveNames_}, saLeapYearMonthNames{saLeapYearMonthNames_}, iTwoDigitYearMax{iTwoDigitYearMax_}, iCurrentEra{iCurrentEra_}, bUseUserOverrides{bUseUserOverrides_} {}
    // static field const value: static System.Int32 MAX_CALENDARS
    static constexpr const int MAX_CALENDARS = 23;
    // Get static field: static System.Int32 MAX_CALENDARS
    static int _get_MAX_CALENDARS();
    // Set static field: static System.Int32 MAX_CALENDARS
    static void _set_MAX_CALENDARS(int value);
    // Get static field: static System.Globalization.CalendarData Invariant
    static System::Globalization::CalendarData* _get_Invariant();
    // Set static field: static System.Globalization.CalendarData Invariant
    static void _set_Invariant(System::Globalization::CalendarData* value);
    // static private System.Void .cctor()
    // Offset: 0x112CCA0
    static void _cctor();
    // System.Void .ctor(System.String localeName, System.Int32 calendarId, System.Boolean bUseUserOverrides)
    // Offset: 0x112DD74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CalendarData* New_ctor(::Il2CppString* localeName, int calendarId, bool bUseUserOverrides) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::CalendarData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CalendarData*, creationType>(localeName, calendarId, bUseUserOverrides)));
    }
    // private System.Void InitializeEraNames(System.String localeName, System.Int32 calendarId)
    // Offset: 0x112E414
    void InitializeEraNames(::Il2CppString* localeName, int calendarId);
    // private System.Void InitializeAbbreviatedEraNames(System.String localeName, System.Int32 calendarId)
    // Offset: 0x112E80C
    void InitializeAbbreviatedEraNames(::Il2CppString* localeName, int calendarId);
    // static System.Globalization.CalendarData GetCalendarData(System.Int32 calendarId)
    // Offset: 0x112C73C
    static System::Globalization::CalendarData* GetCalendarData(int calendarId);
    // static private System.String CalendarIdToCultureName(System.Int32 calendarId)
    // Offset: 0x112EB30
    static ::Il2CppString* CalendarIdToCultureName(int calendarId);
    // static public System.Int32 nativeGetTwoDigitYearMax(System.Int32 calID)
    // Offset: 0x112CC88
    static int nativeGetTwoDigitYearMax(int calID);
    // static private System.Boolean nativeGetCalendarData(System.Globalization.CalendarData data, System.String localeName, System.Int32 calendarId)
    // Offset: 0x112E3C8
    static bool nativeGetCalendarData(System::Globalization::CalendarData* data, ::Il2CppString* localeName, int calendarId);
    // private System.Boolean fill_calendar_data(System.String localeName, System.Int32 datetimeIndex)
    // Offset: 0x112ECD4
    bool fill_calendar_data(::Il2CppString* localeName, int datetimeIndex);
    // private System.Void .ctor()
    // Offset: 0x112CC90
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CalendarData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::CalendarData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CalendarData*, creationType>()));
    }
  }; // System.Globalization.CalendarData
  static check_size<sizeof(CalendarData), 152 + sizeof(bool)> __System_Globalization_CalendarDataSizeCheck;
  static_assert(sizeof(CalendarData) == 0x99);
}
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::CalendarData*, "System.Globalization", "CalendarData");
#pragma pack(pop)
