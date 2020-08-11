// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.TimeZoneInfo
#include "System/TimeZoneInfo.hpp"
// Including type: System.TimeZoneInfo/AdjustmentRule
#include "System/TimeZoneInfo_AdjustmentRule.hpp"
// Including type: System.TimeZoneInfo/TransitionTime
#include "System/TimeZoneInfo_TransitionTime.hpp"
// Including type: System.TimeZoneInfo/SYSTEMTIME
#include "System/TimeZoneInfo_SYSTEMTIME.hpp"
// Including type: System.TimeZoneInfo/TIME_ZONE_INFORMATION
#include "System/TimeZoneInfo_TIME_ZONE_INFORMATION.hpp"
// Including type: System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION
#include "System/TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION.hpp"
// Including type: System.TimeZoneInfo/<>c
#include "System/TimeZoneInfo_--c.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.TimeType
#include "System/TimeType.hpp"
// Including type: Microsoft.Win32.RegistryKey
#include "Microsoft/Win32/RegistryKey.hpp"
// Including type: System.Collections.ObjectModel.ReadOnlyCollection`1
#include "System/Collections/ObjectModel/ReadOnlyCollection_1.hpp"
// Including type: System.DateTimeKind
#include "System/DateTimeKind.hpp"
// Including type: System.TimeZoneInfoOptions
#include "System/TimeZoneInfoOptions.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.TimeZoneInfo local
System::TimeZoneInfo* System::TimeZoneInfo::_get_local() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::TimeZoneInfo*>("System", "TimeZoneInfo", "local"));
}
// Autogenerated static field setter
// Set static field: static private System.TimeZoneInfo local
void System::TimeZoneInfo::_set_local(System::TimeZoneInfo* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "TimeZoneInfo", "local", value));
}
// Autogenerated static field getter
// Get static field: static private System.Boolean readlinkNotFound
bool System::TimeZoneInfo::_get_readlinkNotFound() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<bool>("System", "TimeZoneInfo", "readlinkNotFound"));
}
// Autogenerated static field setter
// Set static field: static private System.Boolean readlinkNotFound
void System::TimeZoneInfo::_set_readlinkNotFound(bool value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "TimeZoneInfo", "readlinkNotFound", value));
}
// Autogenerated static field getter
// Get static field: static private System.TimeZoneInfo utc
System::TimeZoneInfo* System::TimeZoneInfo::_get_utc() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::TimeZoneInfo*>("System", "TimeZoneInfo", "utc"));
}
// Autogenerated static field setter
// Set static field: static private System.TimeZoneInfo utc
void System::TimeZoneInfo::_set_utc(System::TimeZoneInfo* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "TimeZoneInfo", "utc", value));
}
// Autogenerated static field getter
// Get static field: static private System.String timeZoneDirectory
::CsString* System::TimeZoneInfo::_get_timeZoneDirectory() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::CsString*>("System", "TimeZoneInfo", "timeZoneDirectory"));
}
// Autogenerated static field setter
// Set static field: static private System.String timeZoneDirectory
void System::TimeZoneInfo::_set_timeZoneDirectory(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "TimeZoneInfo", "timeZoneDirectory", value));
}
// Autogenerated static field getter
// Get static field: static private Microsoft.Win32.RegistryKey timeZoneKey
Microsoft::Win32::RegistryKey* System::TimeZoneInfo::_get_timeZoneKey() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<Microsoft::Win32::RegistryKey*>("System", "TimeZoneInfo", "timeZoneKey"));
}
// Autogenerated static field setter
// Set static field: static private Microsoft.Win32.RegistryKey timeZoneKey
void System::TimeZoneInfo::_set_timeZoneKey(Microsoft::Win32::RegistryKey* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "TimeZoneInfo", "timeZoneKey", value));
}
// Autogenerated static field getter
// Get static field: static private Microsoft.Win32.RegistryKey localZoneKey
Microsoft::Win32::RegistryKey* System::TimeZoneInfo::_get_localZoneKey() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<Microsoft::Win32::RegistryKey*>("System", "TimeZoneInfo", "localZoneKey"));
}
// Autogenerated static field setter
// Set static field: static private Microsoft.Win32.RegistryKey localZoneKey
void System::TimeZoneInfo::_set_localZoneKey(Microsoft::Win32::RegistryKey* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "TimeZoneInfo", "localZoneKey", value));
}
// Autogenerated static field getter
// Get static field: static private System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo> systemTimeZones
System::Collections::ObjectModel::ReadOnlyCollection_1<System::TimeZoneInfo*>* System::TimeZoneInfo::_get_systemTimeZones() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::ObjectModel::ReadOnlyCollection_1<System::TimeZoneInfo*>*>("System", "TimeZoneInfo", "systemTimeZones"));
}
// Autogenerated static field setter
// Set static field: static private System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo> systemTimeZones
void System::TimeZoneInfo::_set_systemTimeZones(System::Collections::ObjectModel::ReadOnlyCollection_1<System::TimeZoneInfo*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "TimeZoneInfo", "systemTimeZones", value));
}
// Autogenerated method: System.TimeZoneInfo.UtcOffsetOutOfRange
bool System::TimeZoneInfo::UtcOffsetOutOfRange(System::TimeSpan offset) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "TimeZoneInfo", "UtcOffsetOutOfRange", offset));
}
// Autogenerated method: System.TimeZoneInfo.CreateAdjustmentRule
System::Collections::Generic::List_1<System::TimeZoneInfo::AdjustmentRule*>* System::TimeZoneInfo::CreateAdjustmentRule(int year, ::Array<int64_t>*& data, ::Array<::CsString*>*& names, ::CsString* standardNameCurrentYear, ::CsString* daylightNameCurrentYear) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<System::TimeZoneInfo::AdjustmentRule*>*>("System", "TimeZoneInfo", "CreateAdjustmentRule", year, data, names, standardNameCurrentYear, daylightNameCurrentYear));
}
// Autogenerated method: System.TimeZoneInfo.CreateLocalUnity
System::TimeZoneInfo* System::TimeZoneInfo::CreateLocalUnity() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeZoneInfo*>("System", "TimeZoneInfo", "CreateLocalUnity"));
}
// Autogenerated method: System.TimeZoneInfo.EnumDynamicTimeZoneInformation
uint System::TimeZoneInfo::EnumDynamicTimeZoneInformation(uint dwIndex, System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION& lpTimeZoneInformation) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>("System", "TimeZoneInfo", "EnumDynamicTimeZoneInformation", dwIndex, lpTimeZoneInformation));
}
// Autogenerated method: System.TimeZoneInfo.GetDynamicTimeZoneInformation
uint System::TimeZoneInfo::GetDynamicTimeZoneInformation(System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION& pTimeZoneInformation) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>("System", "TimeZoneInfo", "GetDynamicTimeZoneInformation", pTimeZoneInformation));
}
// Autogenerated method: System.TimeZoneInfo.GetDynamicTimeZoneInformationWin32
uint System::TimeZoneInfo::GetDynamicTimeZoneInformationWin32(System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION& pTimeZoneInformation) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>("System", "TimeZoneInfo", "GetDynamicTimeZoneInformationWin32", pTimeZoneInformation));
}
// Autogenerated method: System.TimeZoneInfo.GetDynamicTimeZoneInformationEffectiveYears
uint System::TimeZoneInfo::GetDynamicTimeZoneInformationEffectiveYears(System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION& lpTimeZoneInformation, uint& FirstYear, uint& LastYear) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>("System", "TimeZoneInfo", "GetDynamicTimeZoneInformationEffectiveYears", lpTimeZoneInformation, FirstYear, LastYear));
}
// Autogenerated method: System.TimeZoneInfo.GetTimeZoneInformationForYear
bool System::TimeZoneInfo::GetTimeZoneInformationForYear(uint16_t wYear, System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION& pdtzi, System::TimeZoneInfo::TIME_ZONE_INFORMATION& ptzi) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "TimeZoneInfo", "GetTimeZoneInformationForYear", wYear, pdtzi, ptzi));
}
// Autogenerated method: System.TimeZoneInfo.CreateAdjustmentRuleFromTimeZoneInformation
System::TimeZoneInfo::AdjustmentRule* System::TimeZoneInfo::CreateAdjustmentRuleFromTimeZoneInformation(System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION& timeZoneInformation, System::DateTime startDate, System::DateTime endDate, int defaultBaseUtcOffset) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeZoneInfo::AdjustmentRule*>("System", "TimeZoneInfo", "CreateAdjustmentRuleFromTimeZoneInformation", timeZoneInformation, startDate, endDate, defaultBaseUtcOffset));
}
// Autogenerated method: System.TimeZoneInfo.TransitionTimeFromTimeZoneInformation
bool System::TimeZoneInfo::TransitionTimeFromTimeZoneInformation(System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION timeZoneInformation, System::TimeZoneInfo::TransitionTime& transitionTime, bool readStartDate) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "TimeZoneInfo", "TransitionTimeFromTimeZoneInformation", timeZoneInformation, transitionTime, readStartDate));
}
// Autogenerated method: System.TimeZoneInfo.TryCreateTimeZone
System::TimeZoneInfo* System::TimeZoneInfo::TryCreateTimeZone(System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION timeZoneInformation) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeZoneInfo*>("System", "TimeZoneInfo", "TryCreateTimeZone", timeZoneInformation));
}
// Autogenerated method: System.TimeZoneInfo.GetLocalTimeZoneInfoWinRTFallback
System::TimeZoneInfo* System::TimeZoneInfo::GetLocalTimeZoneInfoWinRTFallback() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeZoneInfo*>("System", "TimeZoneInfo", "GetLocalTimeZoneInfoWinRTFallback"));
}
// Autogenerated method: System.TimeZoneInfo.GetLocalTimeZoneKeyNameWin32Fallback
::CsString* System::TimeZoneInfo::GetLocalTimeZoneKeyNameWin32Fallback() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("System", "TimeZoneInfo", "GetLocalTimeZoneKeyNameWin32Fallback"));
}
// Autogenerated method: System.TimeZoneInfo.FindSystemTimeZoneByIdWinRTFallback
System::TimeZoneInfo* System::TimeZoneInfo::FindSystemTimeZoneByIdWinRTFallback(::CsString* id) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeZoneInfo*>("System", "TimeZoneInfo", "FindSystemTimeZoneByIdWinRTFallback", id));
}
// Autogenerated method: System.TimeZoneInfo.GetSystemTimeZonesWinRTFallback
System::Collections::Generic::List_1<System::TimeZoneInfo*>* System::TimeZoneInfo::GetSystemTimeZonesWinRTFallback() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<System::TimeZoneInfo*>*>("System", "TimeZoneInfo", "GetSystemTimeZonesWinRTFallback"));
}
// Autogenerated method: System.TimeZoneInfo.get_BaseUtcOffset
System::TimeSpan System::TimeZoneInfo::get_BaseUtcOffset() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeSpan>(this, "get_BaseUtcOffset"));
}
// Autogenerated method: System.TimeZoneInfo.get_DisplayName
::CsString* System::TimeZoneInfo::get_DisplayName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_DisplayName"));
}
// Autogenerated method: System.TimeZoneInfo.get_Id
::CsString* System::TimeZoneInfo::get_Id() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_Id"));
}
// Autogenerated method: System.TimeZoneInfo.get_Local
System::TimeZoneInfo* System::TimeZoneInfo::get_Local() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeZoneInfo*>("System", "TimeZoneInfo", "get_Local"));
}
// Autogenerated method: System.TimeZoneInfo.readlink
int System::TimeZoneInfo::readlink(::CsString* path, ::Array<uint8_t>* buffer, int buflen) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System", "TimeZoneInfo", "readlink", path, buffer, buflen));
}
// Autogenerated method: System.TimeZoneInfo.readlink
::CsString* System::TimeZoneInfo::readlink(::CsString* path) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("System", "TimeZoneInfo", "readlink", path));
}
// Autogenerated method: System.TimeZoneInfo.TryGetNameFromPath
bool System::TimeZoneInfo::TryGetNameFromPath(::CsString* path, ::CsString*& name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "TimeZoneInfo", "TryGetNameFromPath", path, name));
}
// Autogenerated method: System.TimeZoneInfo.CreateLocal
System::TimeZoneInfo* System::TimeZoneInfo::CreateLocal() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeZoneInfo*>("System", "TimeZoneInfo", "CreateLocal"));
}
// Autogenerated method: System.TimeZoneInfo.FindSystemTimeZoneByIdCore
System::TimeZoneInfo* System::TimeZoneInfo::FindSystemTimeZoneByIdCore(::CsString* id) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeZoneInfo*>("System", "TimeZoneInfo", "FindSystemTimeZoneByIdCore", id));
}
// Autogenerated method: System.TimeZoneInfo.GetSystemTimeZonesCore
void System::TimeZoneInfo::GetSystemTimeZonesCore(System::Collections::Generic::List_1<System::TimeZoneInfo*>* systemTimeZones) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System", "TimeZoneInfo", "GetSystemTimeZonesCore", systemTimeZones));
}
// Autogenerated method: System.TimeZoneInfo.get_SupportsDaylightSavingTime
bool System::TimeZoneInfo::get_SupportsDaylightSavingTime() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_SupportsDaylightSavingTime"));
}
// Autogenerated method: System.TimeZoneInfo.get_Utc
System::TimeZoneInfo* System::TimeZoneInfo::get_Utc() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeZoneInfo*>("System", "TimeZoneInfo", "get_Utc"));
}
// Autogenerated method: System.TimeZoneInfo.get_TimeZoneDirectory
::CsString* System::TimeZoneInfo::get_TimeZoneDirectory() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("System", "TimeZoneInfo", "get_TimeZoneDirectory"));
}
// Autogenerated method: System.TimeZoneInfo.get_IsWindows
bool System::TimeZoneInfo::get_IsWindows() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "TimeZoneInfo", "get_IsWindows"));
}
// Autogenerated method: System.TimeZoneInfo.TrimSpecial
::CsString* System::TimeZoneInfo::TrimSpecial(::CsString* str) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("System", "TimeZoneInfo", "TrimSpecial", str));
}
// Autogenerated method: System.TimeZoneInfo.get_TimeZoneKey
Microsoft::Win32::RegistryKey* System::TimeZoneInfo::get_TimeZoneKey() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Microsoft::Win32::RegistryKey*>("System", "TimeZoneInfo", "get_TimeZoneKey"));
}
// Autogenerated method: System.TimeZoneInfo.get_LocalZoneKey
Microsoft::Win32::RegistryKey* System::TimeZoneInfo::get_LocalZoneKey() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Microsoft::Win32::RegistryKey*>("System", "TimeZoneInfo", "get_LocalZoneKey"));
}
// Autogenerated method: System.TimeZoneInfo.TryAddTicks
bool System::TimeZoneInfo::TryAddTicks(System::DateTime date, int64_t ticks, System::DateTime& result, System::DateTimeKind kind) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "TimeZoneInfo", "TryAddTicks", date, ticks, result, kind));
}
// Autogenerated method: System.TimeZoneInfo.ConvertTime
System::DateTime System::TimeZoneInfo::ConvertTime(System::DateTime dateTime, System::TimeZoneInfo* sourceTimeZone, System::TimeZoneInfo* destinationTimeZone) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::DateTime>("System", "TimeZoneInfo", "ConvertTime", dateTime, sourceTimeZone, destinationTimeZone));
}
// Autogenerated method: System.TimeZoneInfo.ConvertTimeFromUtc
System::DateTime System::TimeZoneInfo::ConvertTimeFromUtc(System::DateTime dateTime) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::DateTime>(this, "ConvertTimeFromUtc", dateTime));
}
// Autogenerated method: System.TimeZoneInfo.ConvertTimeFromUtc
System::DateTime System::TimeZoneInfo::ConvertTimeFromUtc(System::DateTime dateTime, System::TimeZoneInfo* destinationTimeZone) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::DateTime>("System", "TimeZoneInfo", "ConvertTimeFromUtc", dateTime, destinationTimeZone));
}
// Autogenerated method: System.TimeZoneInfo.ConvertTimeToUtc
System::DateTime System::TimeZoneInfo::ConvertTimeToUtc(System::DateTime dateTime, System::TimeZoneInfoOptions flags) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::DateTime>("System", "TimeZoneInfo", "ConvertTimeToUtc", dateTime, flags));
}
// Autogenerated method: System.TimeZoneInfo.ConvertTimeToUtc
System::DateTime System::TimeZoneInfo::ConvertTimeToUtc(System::DateTime dateTime, System::TimeZoneInfo* sourceTimeZone) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::DateTime>("System", "TimeZoneInfo", "ConvertTimeToUtc", dateTime, sourceTimeZone));
}
// Autogenerated method: System.TimeZoneInfo.ConvertTimeToUtc
System::DateTime System::TimeZoneInfo::ConvertTimeToUtc(System::DateTime dateTime, System::TimeZoneInfo* sourceTimeZone, System::TimeZoneInfoOptions flags) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::DateTime>("System", "TimeZoneInfo", "ConvertTimeToUtc", dateTime, sourceTimeZone, flags));
}
// Autogenerated method: System.TimeZoneInfo.GetDateTimeNowUtcOffsetFromUtc
System::TimeSpan System::TimeZoneInfo::GetDateTimeNowUtcOffsetFromUtc(System::DateTime time, bool& isAmbiguousLocalDst) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeSpan>("System", "TimeZoneInfo", "GetDateTimeNowUtcOffsetFromUtc", time, isAmbiguousLocalDst));
}
// Autogenerated method: System.TimeZoneInfo.CreateCustomTimeZone
System::TimeZoneInfo* System::TimeZoneInfo::CreateCustomTimeZone(::CsString* id, System::TimeSpan baseUtcOffset, ::CsString* displayName, ::CsString* standardDisplayName) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeZoneInfo*>("System", "TimeZoneInfo", "CreateCustomTimeZone", id, baseUtcOffset, displayName, standardDisplayName));
}
// Autogenerated method: System.TimeZoneInfo.CreateCustomTimeZone
System::TimeZoneInfo* System::TimeZoneInfo::CreateCustomTimeZone(::CsString* id, System::TimeSpan baseUtcOffset, ::CsString* displayName, ::CsString* standardDisplayName, ::CsString* daylightDisplayName, ::Array<System::TimeZoneInfo::AdjustmentRule*>* adjustmentRules) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeZoneInfo*>("System", "TimeZoneInfo", "CreateCustomTimeZone", id, baseUtcOffset, displayName, standardDisplayName, daylightDisplayName, adjustmentRules));
}
// Autogenerated method: System.TimeZoneInfo.CreateCustomTimeZone
System::TimeZoneInfo* System::TimeZoneInfo::CreateCustomTimeZone(::CsString* id, System::TimeSpan baseUtcOffset, ::CsString* displayName, ::CsString* standardDisplayName, ::CsString* daylightDisplayName, ::Array<System::TimeZoneInfo::AdjustmentRule*>* adjustmentRules, bool disableDaylightSavingTime) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeZoneInfo*>("System", "TimeZoneInfo", "CreateCustomTimeZone", id, baseUtcOffset, displayName, standardDisplayName, daylightDisplayName, adjustmentRules, disableDaylightSavingTime));
}
// Autogenerated method: System.TimeZoneInfo.FindSystemTimeZoneById
System::TimeZoneInfo* System::TimeZoneInfo::FindSystemTimeZoneById(::CsString* id) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeZoneInfo*>("System", "TimeZoneInfo", "FindSystemTimeZoneById", id));
}
// Autogenerated method: System.TimeZoneInfo.FindSystemTimeZoneByFileName
System::TimeZoneInfo* System::TimeZoneInfo::FindSystemTimeZoneByFileName(::CsString* id, ::CsString* filepath) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeZoneInfo*>("System", "TimeZoneInfo", "FindSystemTimeZoneByFileName", id, filepath));
}
// Autogenerated method: System.TimeZoneInfo.FromRegistryKey
System::TimeZoneInfo* System::TimeZoneInfo::FromRegistryKey(::CsString* id, Microsoft::Win32::RegistryKey* key) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeZoneInfo*>("System", "TimeZoneInfo", "FromRegistryKey", id, key));
}
// Autogenerated method: System.TimeZoneInfo.ParseRegTzi
void System::TimeZoneInfo::ParseRegTzi(System::Collections::Generic::List_1<System::TimeZoneInfo::AdjustmentRule*>* adjustmentRules, int start_year, int end_year, ::Array<uint8_t>* buffer) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System", "TimeZoneInfo", "ParseRegTzi", adjustmentRules, start_year, end_year, buffer));
}
// Autogenerated method: System.TimeZoneInfo.GetAdjustmentRules
::Array<System::TimeZoneInfo::AdjustmentRule*>* System::TimeZoneInfo::GetAdjustmentRules() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<System::TimeZoneInfo::AdjustmentRule*>*>(this, "GetAdjustmentRules"));
}
// Autogenerated method: System.TimeZoneInfo.GetSystemTimeZones
System::Collections::ObjectModel::ReadOnlyCollection_1<System::TimeZoneInfo*>* System::TimeZoneInfo::GetSystemTimeZones() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::ObjectModel::ReadOnlyCollection_1<System::TimeZoneInfo*>*>("System", "TimeZoneInfo", "GetSystemTimeZones"));
}
// Autogenerated method: System.TimeZoneInfo.GetUtcOffset
System::TimeSpan System::TimeZoneInfo::GetUtcOffset(System::DateTime dateTime) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeSpan>(this, "GetUtcOffset", dateTime));
}
// Autogenerated method: System.TimeZoneInfo.GetUtcOffset
System::TimeSpan System::TimeZoneInfo::GetUtcOffset(System::DateTime dateTime, bool& isDST) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeSpan>(this, "GetUtcOffset", dateTime, isDST));
}
// Autogenerated method: System.TimeZoneInfo.GetUtcOffsetHelper
System::TimeSpan System::TimeZoneInfo::GetUtcOffsetHelper(System::DateTime dateTime, System::TimeZoneInfo* tz, bool& isDST) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeSpan>("System", "TimeZoneInfo", "GetUtcOffsetHelper", dateTime, tz, isDST));
}
// Autogenerated method: System.TimeZoneInfo.HasSameRules
bool System::TimeZoneInfo::HasSameRules(System::TimeZoneInfo* other) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "HasSameRules", other));
}
// Autogenerated method: System.TimeZoneInfo.IsAmbiguousTime
bool System::TimeZoneInfo::IsAmbiguousTime(System::DateTime dateTime) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsAmbiguousTime", dateTime));
}
// Autogenerated method: System.TimeZoneInfo.IsInDST
bool System::TimeZoneInfo::IsInDST(System::TimeZoneInfo::AdjustmentRule* rule, System::DateTime dateTime) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsInDST", rule, dateTime));
}
// Autogenerated method: System.TimeZoneInfo.IsInDSTForYear
bool System::TimeZoneInfo::IsInDSTForYear(System::TimeZoneInfo::AdjustmentRule* rule, System::DateTime dateTime, int year) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsInDSTForYear", rule, dateTime, year));
}
// Autogenerated method: System.TimeZoneInfo.IsInvalidTime
bool System::TimeZoneInfo::IsInvalidTime(System::DateTime dateTime) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsInvalidTime", dateTime));
}
// Autogenerated method: System.TimeZoneInfo.Validate
void System::TimeZoneInfo::Validate(::CsString* id, System::TimeSpan baseUtcOffset, ::Array<System::TimeZoneInfo::AdjustmentRule*>* adjustmentRules) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System", "TimeZoneInfo", "Validate", id, baseUtcOffset, adjustmentRules));
}
// Autogenerated method: System.TimeZoneInfo..ctor
System::TimeZoneInfo* System::TimeZoneInfo::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (TimeZoneInfo*)THROW_UNLESS(il2cpp_utils::New("System", "TimeZoneInfo", info, context));
}
// Autogenerated method: System.TimeZoneInfo..ctor
System::TimeZoneInfo* System::TimeZoneInfo::New_ctor(::CsString* id, System::TimeSpan baseUtcOffset, ::CsString* displayName, ::CsString* standardDisplayName, ::CsString* daylightDisplayName, ::Array<System::TimeZoneInfo::AdjustmentRule*>* adjustmentRules, bool disableDaylightSavingTime) {
  return (TimeZoneInfo*)THROW_UNLESS(il2cpp_utils::New("System", "TimeZoneInfo", id, baseUtcOffset, displayName, standardDisplayName, daylightDisplayName, adjustmentRules, disableDaylightSavingTime));
}
// Autogenerated method: System.TimeZoneInfo.GetApplicableRule
System::TimeZoneInfo::AdjustmentRule* System::TimeZoneInfo::GetApplicableRule(System::DateTime dateTime) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeZoneInfo::AdjustmentRule*>(this, "GetApplicableRule", dateTime));
}
// Autogenerated method: System.TimeZoneInfo.TryGetTransitionOffset
bool System::TimeZoneInfo::TryGetTransitionOffset(System::DateTime dateTime, System::TimeSpan& offset, bool& isDst) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TryGetTransitionOffset", dateTime, offset, isDst));
}
// Autogenerated method: System.TimeZoneInfo.TransitionPoint
System::DateTime System::TimeZoneInfo::TransitionPoint(System::TimeZoneInfo::TransitionTime transition, int year) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::DateTime>("System", "TimeZoneInfo", "TransitionPoint", transition, year));
}
// Autogenerated method: System.TimeZoneInfo.ValidateRules
::Array<System::TimeZoneInfo::AdjustmentRule*>* System::TimeZoneInfo::ValidateRules(System::Collections::Generic::List_1<System::TimeZoneInfo::AdjustmentRule*>* adjustmentRules) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<System::TimeZoneInfo::AdjustmentRule*>*>("System", "TimeZoneInfo", "ValidateRules", adjustmentRules));
}
// Autogenerated method: System.TimeZoneInfo.BuildFromStream
System::TimeZoneInfo* System::TimeZoneInfo::BuildFromStream(::CsString* id, System::IO::Stream* stream) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeZoneInfo*>("System", "TimeZoneInfo", "BuildFromStream", id, stream));
}
// Autogenerated method: System.TimeZoneInfo.ValidTZFile
bool System::TimeZoneInfo::ValidTZFile(::Array<uint8_t>* buffer, int length) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "TimeZoneInfo", "ValidTZFile", buffer, length));
}
// Autogenerated method: System.TimeZoneInfo.SwapInt32
int System::TimeZoneInfo::SwapInt32(int i) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System", "TimeZoneInfo", "SwapInt32", i));
}
// Autogenerated method: System.TimeZoneInfo.ReadBigEndianInt32
int System::TimeZoneInfo::ReadBigEndianInt32(::Array<uint8_t>* buffer, int start) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System", "TimeZoneInfo", "ReadBigEndianInt32", buffer, start));
}
// Autogenerated method: System.TimeZoneInfo.ParseTZBuffer
System::TimeZoneInfo* System::TimeZoneInfo::ParseTZBuffer(::CsString* id, ::Array<uint8_t>* buffer, int length) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeZoneInfo*>("System", "TimeZoneInfo", "ParseTZBuffer", id, buffer, length));
}
// Autogenerated method: System.TimeZoneInfo.ParseAbbreviations
System::Collections::Generic::Dictionary_2<int, ::CsString*>* System::TimeZoneInfo::ParseAbbreviations(::Array<uint8_t>* buffer, int index, int count) {
  return THROW_UNLESS((il2cpp_utils::RunMethod<System::Collections::Generic::Dictionary_2<int, ::CsString*>*>("System", "TimeZoneInfo", "ParseAbbreviations", buffer, index, count)));
}
// Autogenerated method: System.TimeZoneInfo.ParseTimesTypes
System::Collections::Generic::Dictionary_2<int, System::TimeType*>* System::TimeZoneInfo::ParseTimesTypes(::Array<uint8_t>* buffer, int index, int count, System::Collections::Generic::Dictionary_2<int, ::CsString*>* abbreviations) {
  return THROW_UNLESS((il2cpp_utils::RunMethod<System::Collections::Generic::Dictionary_2<int, System::TimeType*>*>("System", "TimeZoneInfo", "ParseTimesTypes", buffer, index, count, abbreviations)));
}
// Autogenerated method: System.TimeZoneInfo.ParseTransitions
System::Collections::Generic::List_1<System::Collections::Generic::KeyValuePair_2<System::DateTime, System::TimeType*>>* System::TimeZoneInfo::ParseTransitions(::Array<uint8_t>* buffer, int index, int count, System::Collections::Generic::Dictionary_2<int, System::TimeType*>* time_types) {
  return THROW_UNLESS((il2cpp_utils::RunMethod<System::Collections::Generic::List_1<System::Collections::Generic::KeyValuePair_2<System::DateTime, System::TimeType*>>*>("System", "TimeZoneInfo", "ParseTransitions", buffer, index, count, time_types)));
}
// Autogenerated method: System.TimeZoneInfo.DateTimeFromUnixTime
System::DateTime System::TimeZoneInfo::DateTimeFromUnixTime(int64_t unix_time) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::DateTime>("System", "TimeZoneInfo", "DateTimeFromUnixTime", unix_time));
}
// Autogenerated method: System.TimeZoneInfo.GetLocalUtcOffset
System::TimeSpan System::TimeZoneInfo::GetLocalUtcOffset(System::DateTime dateTime, System::TimeZoneInfoOptions flags) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeSpan>("System", "TimeZoneInfo", "GetLocalUtcOffset", dateTime, flags));
}
// Autogenerated method: System.TimeZoneInfo.GetUtcOffset
System::TimeSpan System::TimeZoneInfo::GetUtcOffset(System::DateTime dateTime, System::TimeZoneInfoOptions flags) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeSpan>(this, "GetUtcOffset", dateTime, flags));
}
// Autogenerated method: System.TimeZoneInfo.GetUtcOffsetFromUtc
System::TimeSpan System::TimeZoneInfo::GetUtcOffsetFromUtc(System::DateTime time, System::TimeZoneInfo* zone, bool& isDaylightSavings, bool& isAmbiguousLocalDst) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeSpan>("System", "TimeZoneInfo", "GetUtcOffsetFromUtc", time, zone, isDaylightSavings, isAmbiguousLocalDst));
}
// Autogenerated method: System.TimeZoneInfo.Equals
bool System::TimeZoneInfo::Equals(::CsObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", obj));
}
// Autogenerated method: System.TimeZoneInfo.Equals
bool System::TimeZoneInfo::Equals(System::TimeZoneInfo* other) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", other));
}
// Autogenerated method: System.TimeZoneInfo.GetHashCode
int System::TimeZoneInfo::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
}
// Autogenerated method: System.TimeZoneInfo.System.Runtime.Serialization.ISerializable.GetObjectData
void System::TimeZoneInfo::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Runtime.Serialization.ISerializable.GetObjectData", info, context));
}
// Autogenerated method: System.TimeZoneInfo.System.Runtime.Serialization.IDeserializationCallback.OnDeserialization
void System::TimeZoneInfo::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::CsObject* sender) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", sender));
}
// Autogenerated method: System.TimeZoneInfo.ToString
::CsString* System::TimeZoneInfo::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "ToString"));
}
// Autogenerated method: System.TimeZoneInfo..ctor
System::TimeZoneInfo* System::TimeZoneInfo::New_ctor() {
  return (TimeZoneInfo*)THROW_UNLESS(il2cpp_utils::New("System", "TimeZoneInfo"));
}
