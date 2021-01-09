// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Serialization.IDeserializationCallback
#include "System/Runtime/Serialization/IDeserializationCallback.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeType
  class TimeType;
  // Skipping declaration: DateTimeKind because it is already included!
  // Forward declaring type: TimeZoneInfoOptions
  struct TimeZoneInfoOptions;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: Microsoft::Win32
namespace Microsoft::Win32 {
  // Forward declaring type: RegistryKey
  class RegistryKey;
}
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyCollection`1<T>
  template<typename T>
  class ReadOnlyCollection_1;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x50
  // Autogenerated type: System.TimeZoneInfo
  // [] Offset: FFFFFFFF
  // [TypeForwardedFromAttribute] Offset: D378BC
  class TimeZoneInfo : public ::Il2CppObject/*, public System::IEquatable_1<System::TimeZoneInfo*>, public System::Runtime::Serialization::ISerializable, public System::Runtime::Serialization::IDeserializationCallback*/ {
    public:
    // Nested type: System::TimeZoneInfo::AdjustmentRule
    class AdjustmentRule;
    // Nested type: System::TimeZoneInfo::TransitionTime
    struct TransitionTime;
    // Nested type: System::TimeZoneInfo::SYSTEMTIME
    struct SYSTEMTIME;
    // Nested type: System::TimeZoneInfo::TIME_ZONE_INFORMATION
    struct TIME_ZONE_INFORMATION;
    // Nested type: System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION
    struct DYNAMIC_TIME_ZONE_INFORMATION;
    // Nested type: System::TimeZoneInfo::$$c
    class $$c;
    // private System.TimeSpan baseUtcOffset
    // Size: 0x8
    // Offset: 0x10
    System::TimeSpan baseUtcOffset;
    // Field size check
    static_assert(sizeof(System::TimeSpan) == 0x8);
    // private System.String daylightDisplayName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* daylightDisplayName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String displayName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* displayName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String id
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* id;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeType>> transitions
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::List_1<System::Collections::Generic::KeyValuePair_2<System::DateTime, System::TimeType*>>* transitions;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Collections::Generic::KeyValuePair_2<System::DateTime, System::TimeType*>>*) == 0x8);
    // private System.String standardDisplayName
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* standardDisplayName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean supportsDaylightSavingTime
    // Size: 0x1
    // Offset: 0x40
    bool supportsDaylightSavingTime;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: supportsDaylightSavingTime and: adjustmentRules
    char __padding6[0x7] = {};
    // private System.TimeZoneInfo/AdjustmentRule[] adjustmentRules
    // Size: 0x8
    // Offset: 0x48
    ::Array<System::TimeZoneInfo::AdjustmentRule*>* adjustmentRules;
    // Field size check
    static_assert(sizeof(::Array<System::TimeZoneInfo::AdjustmentRule*>*) == 0x8);
    // Creating value type constructor for type: TimeZoneInfo
    TimeZoneInfo(System::TimeSpan baseUtcOffset_ = {}, ::Il2CppString* daylightDisplayName_ = {}, ::Il2CppString* displayName_ = {}, ::Il2CppString* id_ = {}, System::Collections::Generic::List_1<System::Collections::Generic::KeyValuePair_2<System::DateTime, System::TimeType*>>* transitions_ = {}, ::Il2CppString* standardDisplayName_ = {}, bool supportsDaylightSavingTime_ = {}, ::Array<System::TimeZoneInfo::AdjustmentRule*>* adjustmentRules_ = {}) noexcept : baseUtcOffset{baseUtcOffset_}, daylightDisplayName{daylightDisplayName_}, displayName{displayName_}, id{id_}, transitions{transitions_}, standardDisplayName{standardDisplayName_}, supportsDaylightSavingTime{supportsDaylightSavingTime_}, adjustmentRules{adjustmentRules_} {}
    // Creating interface conversion operator: operator System::IEquatable_1<System::TimeZoneInfo*>
    operator System::IEquatable_1<System::TimeZoneInfo*>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<System::TimeZoneInfo*>*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Serialization::IDeserializationCallback
    operator System::Runtime::Serialization::IDeserializationCallback() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::IDeserializationCallback*>(this);
    }
    // Get static field: static private System.TimeZoneInfo local
    static System::TimeZoneInfo* _get_local();
    // Set static field: static private System.TimeZoneInfo local
    static void _set_local(System::TimeZoneInfo* value);
    // Get static field: static private System.Boolean readlinkNotFound
    static bool _get_readlinkNotFound();
    // Set static field: static private System.Boolean readlinkNotFound
    static void _set_readlinkNotFound(bool value);
    // Get static field: static private System.TimeZoneInfo utc
    static System::TimeZoneInfo* _get_utc();
    // Set static field: static private System.TimeZoneInfo utc
    static void _set_utc(System::TimeZoneInfo* value);
    // Get static field: static private System.String timeZoneDirectory
    static ::Il2CppString* _get_timeZoneDirectory();
    // Set static field: static private System.String timeZoneDirectory
    static void _set_timeZoneDirectory(::Il2CppString* value);
    // Get static field: static private Microsoft.Win32.RegistryKey timeZoneKey
    static Microsoft::Win32::RegistryKey* _get_timeZoneKey();
    // Set static field: static private Microsoft.Win32.RegistryKey timeZoneKey
    static void _set_timeZoneKey(Microsoft::Win32::RegistryKey* value);
    // Get static field: static private Microsoft.Win32.RegistryKey localZoneKey
    static Microsoft::Win32::RegistryKey* _get_localZoneKey();
    // Set static field: static private Microsoft.Win32.RegistryKey localZoneKey
    static void _set_localZoneKey(Microsoft::Win32::RegistryKey* value);
    // Get static field: static private System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo> systemTimeZones
    static System::Collections::ObjectModel::ReadOnlyCollection_1<System::TimeZoneInfo*>* _get_systemTimeZones();
    // Set static field: static private System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo> systemTimeZones
    static void _set_systemTimeZones(System::Collections::ObjectModel::ReadOnlyCollection_1<System::TimeZoneInfo*>* value);
    // static System.Boolean UtcOffsetOutOfRange(System.TimeSpan offset)
    // Offset: 0x164BDE0
    static bool UtcOffsetOutOfRange(System::TimeSpan offset);
    // static private System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule> CreateAdjustmentRule(System.Int32 year, out System.Int64[] data, out System.String[] names, System.String standardNameCurrentYear, System.String daylightNameCurrentYear)
    // Offset: 0x164BE10
    static System::Collections::Generic::List_1<System::TimeZoneInfo::AdjustmentRule*>* CreateAdjustmentRule(int year, ::Array<int64_t>*& data, ::Array<::Il2CppString*>*& names, ::Il2CppString* standardNameCurrentYear, ::Il2CppString* daylightNameCurrentYear);
    // static private System.TimeZoneInfo CreateLocalUnity()
    // Offset: 0x164C6C4
    static System::TimeZoneInfo* CreateLocalUnity();
    // static System.UInt32 EnumDynamicTimeZoneInformation(System.UInt32 dwIndex, out System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION lpTimeZoneInformation)
    // Offset: 0x164CB60
    static uint EnumDynamicTimeZoneInformation(uint dwIndex, System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION& lpTimeZoneInformation);
    // static System.UInt32 GetDynamicTimeZoneInformation(out System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION pTimeZoneInformation)
    // Offset: 0x164CC48
    static uint GetDynamicTimeZoneInformation(System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION& pTimeZoneInformation);
    // static System.UInt32 GetDynamicTimeZoneInformationWin32(out System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION pTimeZoneInformation)
    // Offset: 0x164CD20
    static uint GetDynamicTimeZoneInformationWin32(System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION& pTimeZoneInformation);
    // static System.UInt32 GetDynamicTimeZoneInformationEffectiveYears(ref System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION lpTimeZoneInformation, out System.UInt32 FirstYear, out System.UInt32 LastYear)
    // Offset: 0x164CDF8
    static uint GetDynamicTimeZoneInformationEffectiveYears(System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION& lpTimeZoneInformation, uint& FirstYear, uint& LastYear);
    // static System.Boolean GetTimeZoneInformationForYear(System.UInt16 wYear, ref System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION pdtzi, out System.TimeZoneInfo/TIME_ZONE_INFORMATION ptzi)
    // Offset: 0x164CF20
    static bool GetTimeZoneInformationForYear(uint16_t wYear, System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION& pdtzi, System::TimeZoneInfo::TIME_ZONE_INFORMATION& ptzi);
    // static System.TimeZoneInfo/AdjustmentRule CreateAdjustmentRuleFromTimeZoneInformation(ref System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION timeZoneInformation, System.DateTime startDate, System.DateTime endDate, System.Int32 defaultBaseUtcOffset)
    // Offset: 0x164D094
    static System::TimeZoneInfo::AdjustmentRule* CreateAdjustmentRuleFromTimeZoneInformation(System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION& timeZoneInformation, System::DateTime startDate, System::DateTime endDate, int defaultBaseUtcOffset);
    // static private System.Boolean TransitionTimeFromTimeZoneInformation(System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION timeZoneInformation, out System.TimeZoneInfo/TransitionTime transitionTime, System.Boolean readStartDate)
    // Offset: 0x164D388
    static bool TransitionTimeFromTimeZoneInformation(System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION timeZoneInformation, System::TimeZoneInfo::TransitionTime& transitionTime, bool readStartDate);
    // static System.TimeZoneInfo TryCreateTimeZone(System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION timeZoneInformation)
    // Offset: 0x164D6C0
    static System::TimeZoneInfo* TryCreateTimeZone(System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION timeZoneInformation);
    // static System.TimeZoneInfo GetLocalTimeZoneInfoWinRTFallback()
    // Offset: 0x164E048
    static System::TimeZoneInfo* GetLocalTimeZoneInfoWinRTFallback();
    // static System.String GetLocalTimeZoneKeyNameWin32Fallback()
    // Offset: 0x164E1F4
    static ::Il2CppString* GetLocalTimeZoneKeyNameWin32Fallback();
    // static System.TimeZoneInfo FindSystemTimeZoneByIdWinRTFallback(System.String id)
    // Offset: 0x164E304
    static System::TimeZoneInfo* FindSystemTimeZoneByIdWinRTFallback(::Il2CppString* id);
    // static System.Collections.Generic.List`1<System.TimeZoneInfo> GetSystemTimeZonesWinRTFallback()
    // Offset: 0x164E6E8
    static System::Collections::Generic::List_1<System::TimeZoneInfo*>* GetSystemTimeZonesWinRTFallback();
    // public System.TimeSpan get_BaseUtcOffset()
    // Offset: 0x164E918
    System::TimeSpan get_BaseUtcOffset();
    // public System.String get_DisplayName()
    // Offset: 0x164E920
    ::Il2CppString* get_DisplayName();
    // public System.String get_Id()
    // Offset: 0x164E928
    ::Il2CppString* get_Id();
    // static public System.TimeZoneInfo get_Local()
    // Offset: 0x164E864
    static System::TimeZoneInfo* get_Local();
    // static private System.Int32 readlink(System.String path, System.Byte[] buffer, System.Int32 buflen)
    // Offset: 0x164EE0C
    static int readlink(::Il2CppString* path, ::Array<uint8_t>* buffer, int buflen);
    // static private System.String readlink(System.String path)
    // Offset: 0x164EEC4
    static ::Il2CppString* readlink(::Il2CppString* path);
    // static private System.Boolean TryGetNameFromPath(System.String path, out System.String name)
    // Offset: 0x164F074
    static bool TryGetNameFromPath(::Il2CppString* path, ::Il2CppString*& name);
    // static private System.TimeZoneInfo CreateLocal()
    // Offset: 0x164E930
    static System::TimeZoneInfo* CreateLocal();
    // static private System.TimeZoneInfo FindSystemTimeZoneByIdCore(System.String id)
    // Offset: 0x164F950
    static System::TimeZoneInfo* FindSystemTimeZoneByIdCore(::Il2CppString* id);
    // static private System.Void GetSystemTimeZonesCore(System.Collections.Generic.List`1<System.TimeZoneInfo> systemTimeZones)
    // Offset: 0x164F9D4
    static void GetSystemTimeZonesCore(System::Collections::Generic::List_1<System::TimeZoneInfo*>* systemTimeZones);
    // public System.Boolean get_SupportsDaylightSavingTime()
    // Offset: 0x16504E0
    bool get_SupportsDaylightSavingTime();
    // static public System.TimeZoneInfo get_Utc()
    // Offset: 0x164E154
    static System::TimeZoneInfo* get_Utc();
    // static private System.String get_TimeZoneDirectory()
    // Offset: 0x164F2D4
    static ::Il2CppString* get_TimeZoneDirectory();
    // static private System.Boolean get_IsWindows()
    // Offset: 0x164F34C
    static bool get_IsWindows();
    // static private System.String TrimSpecial(System.String str)
    // Offset: 0x164F4DC
    static ::Il2CppString* TrimSpecial(::Il2CppString* str);
    // static private Microsoft.Win32.RegistryKey get_TimeZoneKey()
    // Offset: 0x165039C
    static Microsoft::Win32::RegistryKey* get_TimeZoneKey();
    // static private Microsoft.Win32.RegistryKey get_LocalZoneKey()
    // Offset: 0x164F398
    static Microsoft::Win32::RegistryKey* get_LocalZoneKey();
    // static private System.Boolean TryAddTicks(System.DateTime date, System.Int64 ticks, out System.DateTime result, System.DateTimeKind kind)
    // Offset: 0x16504F8
    static bool TryAddTicks(System::DateTime date, int64_t ticks, System::DateTime& result, System::DateTimeKind kind);
    // static public System.DateTime ConvertTime(System.DateTime dateTime, System.TimeZoneInfo sourceTimeZone, System.TimeZoneInfo destinationTimeZone)
    // Offset: 0x1650674
    static System::DateTime ConvertTime(System::DateTime dateTime, System::TimeZoneInfo* sourceTimeZone, System::TimeZoneInfo* destinationTimeZone);
    // private System.DateTime ConvertTimeFromUtc(System.DateTime dateTime)
    // Offset: 0x1650A74
    System::DateTime ConvertTimeFromUtc(System::DateTime dateTime);
    // static public System.DateTime ConvertTimeFromUtc(System.DateTime dateTime, System.TimeZoneInfo destinationTimeZone)
    // Offset: 0x16509E0
    static System::DateTime ConvertTimeFromUtc(System::DateTime dateTime, System::TimeZoneInfo* destinationTimeZone);
    // static System.DateTime ConvertTimeToUtc(System.DateTime dateTime, System.TimeZoneInfoOptions flags)
    // Offset: 0x1650BF8
    static System::DateTime ConvertTimeToUtc(System::DateTime dateTime, System::TimeZoneInfoOptions flags);
    // static public System.DateTime ConvertTimeToUtc(System.DateTime dateTime, System.TimeZoneInfo sourceTimeZone)
    // Offset: 0x16509D8
    static System::DateTime ConvertTimeToUtc(System::DateTime dateTime, System::TimeZoneInfo* sourceTimeZone);
    // static private System.DateTime ConvertTimeToUtc(System.DateTime dateTime, System.TimeZoneInfo sourceTimeZone, System.TimeZoneInfoOptions flags)
    // Offset: 0x1650C28
    static System::DateTime ConvertTimeToUtc(System::DateTime dateTime, System::TimeZoneInfo* sourceTimeZone, System::TimeZoneInfoOptions flags);
    // static System.TimeSpan GetDateTimeNowUtcOffsetFromUtc(System.DateTime time, out System.Boolean isAmbiguousLocalDst)
    // Offset: 0x1650E98
    static System::TimeSpan GetDateTimeNowUtcOffsetFromUtc(System::DateTime time, bool& isAmbiguousLocalDst);
    // static public System.TimeZoneInfo CreateCustomTimeZone(System.String id, System.TimeSpan baseUtcOffset, System.String displayName, System.String standardDisplayName)
    // Offset: 0x16504E8
    static System::TimeZoneInfo* CreateCustomTimeZone(::Il2CppString* id, System::TimeSpan baseUtcOffset, ::Il2CppString* displayName, ::Il2CppString* standardDisplayName);
    // static public System.TimeZoneInfo CreateCustomTimeZone(System.String id, System.TimeSpan baseUtcOffset, System.String displayName, System.String standardDisplayName, System.String daylightDisplayName, System.TimeZoneInfo/AdjustmentRule[] adjustmentRules)
    // Offset: 0x1650F40
    static System::TimeZoneInfo* CreateCustomTimeZone(::Il2CppString* id, System::TimeSpan baseUtcOffset, ::Il2CppString* displayName, ::Il2CppString* standardDisplayName, ::Il2CppString* daylightDisplayName, ::Array<System::TimeZoneInfo::AdjustmentRule*>* adjustmentRules);
    // static public System.TimeZoneInfo CreateCustomTimeZone(System.String id, System.TimeSpan baseUtcOffset, System.String displayName, System.String standardDisplayName, System.String daylightDisplayName, System.TimeZoneInfo/AdjustmentRule[] adjustmentRules, System.Boolean disableDaylightSavingTime)
    // Offset: 0x164CAB0
    static System::TimeZoneInfo* CreateCustomTimeZone(::Il2CppString* id, System::TimeSpan baseUtcOffset, ::Il2CppString* displayName, ::Il2CppString* standardDisplayName, ::Il2CppString* daylightDisplayName, ::Array<System::TimeZoneInfo::AdjustmentRule*>* adjustmentRules, bool disableDaylightSavingTime);
    // static public System.TimeZoneInfo FindSystemTimeZoneById(System.String id)
    // Offset: 0x164F650
    static System::TimeZoneInfo* FindSystemTimeZoneById(::Il2CppString* id);
    // static private System.TimeZoneInfo FindSystemTimeZoneByFileName(System.String id, System.String filepath)
    // Offset: 0x164F798
    static System::TimeZoneInfo* FindSystemTimeZoneByFileName(::Il2CppString* id, ::Il2CppString* filepath);
    // static private System.TimeZoneInfo FromRegistryKey(System.String id, Microsoft.Win32.RegistryKey key)
    // Offset: 0x1651190
    static System::TimeZoneInfo* FromRegistryKey(::Il2CppString* id, Microsoft::Win32::RegistryKey* key);
    // static private System.Void ParseRegTzi(System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule> adjustmentRules, System.Int32 start_year, System.Int32 end_year, System.Byte[] buffer)
    // Offset: 0x1651738
    static void ParseRegTzi(System::Collections::Generic::List_1<System::TimeZoneInfo::AdjustmentRule*>* adjustmentRules, int start_year, int end_year, ::Array<uint8_t>* buffer);
    // public System.TimeZoneInfo/AdjustmentRule[] GetAdjustmentRules()
    // Offset: 0x1651D04
    ::Array<System::TimeZoneInfo::AdjustmentRule*>* GetAdjustmentRules();
    // static public System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo> GetSystemTimeZones()
    // Offset: 0x164E5AC
    static System::Collections::ObjectModel::ReadOnlyCollection_1<System::TimeZoneInfo*>* GetSystemTimeZones();
    // public System.TimeSpan GetUtcOffset(System.DateTime dateTime)
    // Offset: 0x1650BD4
    System::TimeSpan GetUtcOffset(System::DateTime dateTime);
    // private System.TimeSpan GetUtcOffset(System.DateTime dateTime, out System.Boolean isDST)
    // Offset: 0x1650DC8
    System::TimeSpan GetUtcOffset(System::DateTime dateTime, bool& isDST);
    // static private System.TimeSpan GetUtcOffsetHelper(System.DateTime dateTime, System.TimeZoneInfo tz, out System.Boolean isDST)
    // Offset: 0x1651FAC
    static System::TimeSpan GetUtcOffsetHelper(System::DateTime dateTime, System::TimeZoneInfo* tz, bool& isDST);
    // public System.Boolean HasSameRules(System.TimeZoneInfo other)
    // Offset: 0x165100C
    bool HasSameRules(System::TimeZoneInfo* other);
    // public System.Boolean IsAmbiguousTime(System.DateTime dateTime)
    // Offset: 0x1652830
    bool IsAmbiguousTime(System::DateTime dateTime);
    // private System.Boolean IsInDST(System.TimeZoneInfo/AdjustmentRule rule, System.DateTime dateTime)
    // Offset: 0x1652620
    bool IsInDST(System::TimeZoneInfo::AdjustmentRule* rule, System::DateTime dateTime);
    // private System.Boolean IsInDSTForYear(System.TimeZoneInfo/AdjustmentRule rule, System.DateTime dateTime, System.Int32 year)
    // Offset: 0x1652BE0
    bool IsInDSTForYear(System::TimeZoneInfo::AdjustmentRule* rule, System::DateTime dateTime, int year);
    // public System.Boolean IsInvalidTime(System.DateTime dateTime)
    // Offset: 0x1650884
    bool IsInvalidTime(System::DateTime dateTime);
    // static private System.Void Validate(System.String id, System.TimeSpan baseUtcOffset, System.TimeZoneInfo/AdjustmentRule[] adjustmentRules)
    // Offset: 0x1652F14
    static void Validate(::Il2CppString* id, System::TimeSpan baseUtcOffset, ::Array<System::TimeZoneInfo::AdjustmentRule*>* adjustmentRules);
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x165334C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimeZoneInfo* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TimeZoneInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimeZoneInfo*, creationType>(info, context)));
    }
    // private System.Void .ctor(System.String id, System.TimeSpan baseUtcOffset, System.String displayName, System.String standardDisplayName, System.String daylightDisplayName, System.TimeZoneInfo/AdjustmentRule[] adjustmentRules, System.Boolean disableDaylightSavingTime)
    // Offset: 0x164DB64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimeZoneInfo* New_ctor(::Il2CppString* id, System::TimeSpan baseUtcOffset, ::Il2CppString* displayName, ::Il2CppString* standardDisplayName, ::Il2CppString* daylightDisplayName, ::Array<System::TimeZoneInfo::AdjustmentRule*>* adjustmentRules, bool disableDaylightSavingTime) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TimeZoneInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimeZoneInfo*, creationType>(id, baseUtcOffset, displayName, standardDisplayName, daylightDisplayName, adjustmentRules, disableDaylightSavingTime)));
    }
    // private System.TimeZoneInfo/AdjustmentRule GetApplicableRule(System.DateTime dateTime)
    // Offset: 0x1652464
    System::TimeZoneInfo::AdjustmentRule* GetApplicableRule(System::DateTime dateTime);
    // private System.Boolean TryGetTransitionOffset(System.DateTime dateTime, out System.TimeSpan offset, out System.Boolean isDst)
    // Offset: 0x1652244
    bool TryGetTransitionOffset(System::DateTime dateTime, System::TimeSpan& offset, bool& isDst);
    // static private System.DateTime TransitionPoint(System.TimeZoneInfo/TransitionTime transition, System.Int32 year)
    // Offset: 0x1652A1C
    static System::DateTime TransitionPoint(System::TimeZoneInfo::TransitionTime transition, int year);
    // static private System.TimeZoneInfo/AdjustmentRule[] ValidateRules(System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule> adjustmentRules)
    // Offset: 0x1651BC0
    static ::Array<System::TimeZoneInfo::AdjustmentRule*>* ValidateRules(System::Collections::Generic::List_1<System::TimeZoneInfo::AdjustmentRule*>* adjustmentRules);
    // static private System.TimeZoneInfo BuildFromStream(System.String id, System.IO.Stream stream)
    // Offset: 0x1651584
    static System::TimeZoneInfo* BuildFromStream(::Il2CppString* id, System::IO::Stream* stream);
    // static private System.Boolean ValidTZFile(System.Byte[] buffer, System.Int32 length)
    // Offset: 0x1653700
    static bool ValidTZFile(::Array<uint8_t>* buffer, int length);
    // static private System.Int32 SwapInt32(System.Int32 i)
    // Offset: 0x16541A8
    static int SwapInt32(int i);
    // static private System.Int32 ReadBigEndianInt32(System.Byte[] buffer, System.Int32 start)
    // Offset: 0x16541B0
    static int ReadBigEndianInt32(::Array<uint8_t>* buffer, int start);
    // static private System.TimeZoneInfo ParseTZBuffer(System.String id, System.Byte[] buffer, System.Int32 length)
    // Offset: 0x16537F0
    static System::TimeZoneInfo* ParseTZBuffer(::Il2CppString* id, ::Array<uint8_t>* buffer, int length);
    // static private System.Collections.Generic.Dictionary`2<System.Int32,System.String> ParseAbbreviations(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1654244
    static System::Collections::Generic::Dictionary_2<int, ::Il2CppString*>* ParseAbbreviations(::Array<uint8_t>* buffer, int index, int count);
    // static private System.Collections.Generic.Dictionary`2<System.Int32,System.TimeType> ParseTimesTypes(System.Byte[] buffer, System.Int32 index, System.Int32 count, System.Collections.Generic.Dictionary`2<System.Int32,System.String> abbreviations)
    // Offset: 0x1654414
    static System::Collections::Generic::Dictionary_2<int, System::TimeType*>* ParseTimesTypes(::Array<uint8_t>* buffer, int index, int count, System::Collections::Generic::Dictionary_2<int, ::Il2CppString*>* abbreviations);
    // static private System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeType>> ParseTransitions(System.Byte[] buffer, System.Int32 index, System.Int32 count, System.Collections.Generic.Dictionary`2<System.Int32,System.TimeType> time_types)
    // Offset: 0x16545B8
    static System::Collections::Generic::List_1<System::Collections::Generic::KeyValuePair_2<System::DateTime, System::TimeType*>>* ParseTransitions(::Array<uint8_t>* buffer, int index, int count, System::Collections::Generic::Dictionary_2<int, System::TimeType*>* time_types);
    // static private System.DateTime DateTimeFromUnixTime(System.Int64 unix_time)
    // Offset: 0x165474C
    static System::DateTime DateTimeFromUnixTime(int64_t unix_time);
    // static System.TimeSpan GetLocalUtcOffset(System.DateTime dateTime, System.TimeZoneInfoOptions flags)
    // Offset: 0x1654794
    static System::TimeSpan GetLocalUtcOffset(System::DateTime dateTime, System::TimeZoneInfoOptions flags);
    // System.TimeSpan GetUtcOffset(System.DateTime dateTime, System.TimeZoneInfoOptions flags)
    // Offset: 0x16547CC
    System::TimeSpan GetUtcOffset(System::DateTime dateTime, System::TimeZoneInfoOptions flags);
    // static System.TimeSpan GetUtcOffsetFromUtc(System.DateTime time, System.TimeZoneInfo zone, out System.Boolean isDaylightSavings, out System.Boolean isAmbiguousLocalDst)
    // Offset: 0x1650EDC
    static System::TimeSpan GetUtcOffsetFromUtc(System::DateTime time, System::TimeZoneInfo* zone, bool& isDaylightSavings, bool& isAmbiguousLocalDst);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1650F48
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public System.Boolean Equals(System.TimeZoneInfo other)
    // Offset: 0x1650FBC
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(System.TimeZoneInfo other)
    bool Equals(System::TimeZoneInfo* other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1651D9C
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1651E40
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // private System.Void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object sender)
    // Offset: 0x1652E18
    // Implemented from: System.Runtime.Serialization.IDeserializationCallback
    // Base method: System.Void IDeserializationCallback::OnDeserialization(System.Object sender)
    void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::Il2CppObject* sender);
    // public override System.String ToString()
    // Offset: 0x1653344
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // System.Void .ctor()
    // Offset: 0x16547F0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimeZoneInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TimeZoneInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimeZoneInfo*, creationType>()));
    }
  }; // System.TimeZoneInfo
  static check_size<sizeof(TimeZoneInfo), 72 + sizeof(::Array<System::TimeZoneInfo::AdjustmentRule*>*)> __System_TimeZoneInfoSizeCheck;
  static_assert(sizeof(TimeZoneInfo) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(System::TimeZoneInfo*, "System", "TimeZoneInfo");
#pragma pack(pop)
