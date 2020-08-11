// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Globalization.NumberFormatInfo
#include "System/Globalization/NumberFormatInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
// Including type: System.Globalization.CultureData
#include "System/Globalization/CultureData.hpp"
// Including type: System.Type
#include "System/Type.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Globalization.NumberFormatInfo invariantInfo
System::Globalization::NumberFormatInfo* System::Globalization::NumberFormatInfo::_get_invariantInfo() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Globalization::NumberFormatInfo*>("System.Globalization", "NumberFormatInfo", "invariantInfo"));
}
// Autogenerated static field setter
// Set static field: static private System.Globalization.NumberFormatInfo invariantInfo
void System::Globalization::NumberFormatInfo::_set_invariantInfo(System::Globalization::NumberFormatInfo* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Globalization", "NumberFormatInfo", "invariantInfo", value));
}
// Autogenerated static field getter
// Get static field: static private System.Globalization.NumberStyles InvalidNumberStyles
System::Globalization::NumberStyles System::Globalization::NumberFormatInfo::_get_InvalidNumberStyles() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Globalization::NumberStyles>("System.Globalization", "NumberFormatInfo", "InvalidNumberStyles"));
}
// Autogenerated static field setter
// Set static field: static private System.Globalization.NumberStyles InvalidNumberStyles
void System::Globalization::NumberFormatInfo::_set_InvalidNumberStyles(System::Globalization::NumberStyles value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Globalization", "NumberFormatInfo", "InvalidNumberStyles", value));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.OnSerializing
void System::Globalization::NumberFormatInfo::OnSerializing(System::Runtime::Serialization::StreamingContext ctx) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnSerializing", ctx));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.OnDeserializing
void System::Globalization::NumberFormatInfo::OnDeserializing(System::Runtime::Serialization::StreamingContext ctx) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDeserializing", ctx));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.OnDeserialized
void System::Globalization::NumberFormatInfo::OnDeserialized(System::Runtime::Serialization::StreamingContext ctx) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDeserialized", ctx));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.VerifyGroupSeparator
void System::Globalization::NumberFormatInfo::VerifyGroupSeparator(::CsString* groupSep, ::CsString* propertyName) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Globalization", "NumberFormatInfo", "VerifyGroupSeparator", groupSep, propertyName));
}
// Autogenerated method: System.Globalization.NumberFormatInfo..ctor
System::Globalization::NumberFormatInfo* System::Globalization::NumberFormatInfo::New_ctor(System::Globalization::CultureData* cultureData) {
  return (NumberFormatInfo*)THROW_UNLESS(il2cpp_utils::New("System.Globalization", "NumberFormatInfo", cultureData));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.VerifyWritable
void System::Globalization::NumberFormatInfo::VerifyWritable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "VerifyWritable"));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.get_InvariantInfo
System::Globalization::NumberFormatInfo* System::Globalization::NumberFormatInfo::get_InvariantInfo() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Globalization::NumberFormatInfo*>("System.Globalization", "NumberFormatInfo", "get_InvariantInfo"));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.GetInstance
System::Globalization::NumberFormatInfo* System::Globalization::NumberFormatInfo::GetInstance(System::IFormatProvider* formatProvider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Globalization::NumberFormatInfo*>("System.Globalization", "NumberFormatInfo", "GetInstance", formatProvider));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.get_CurrencyDecimalDigits
int System::Globalization::NumberFormatInfo::get_CurrencyDecimalDigits() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_CurrencyDecimalDigits"));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.get_CurrencyDecimalSeparator
::CsString* System::Globalization::NumberFormatInfo::get_CurrencyDecimalSeparator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_CurrencyDecimalSeparator"));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.get_IsReadOnly
bool System::Globalization::NumberFormatInfo::get_IsReadOnly() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsReadOnly"));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.get_CurrencyGroupSizes
::Array<int>* System::Globalization::NumberFormatInfo::get_CurrencyGroupSizes() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<int>*>(this, "get_CurrencyGroupSizes"));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.get_NumberGroupSizes
::Array<int>* System::Globalization::NumberFormatInfo::get_NumberGroupSizes() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<int>*>(this, "get_NumberGroupSizes"));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.get_PercentGroupSizes
::Array<int>* System::Globalization::NumberFormatInfo::get_PercentGroupSizes() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<int>*>(this, "get_PercentGroupSizes"));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.get_CurrencyGroupSeparator
::CsString* System::Globalization::NumberFormatInfo::get_CurrencyGroupSeparator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_CurrencyGroupSeparator"));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.set_CurrencyGroupSeparator
void System::Globalization::NumberFormatInfo::set_CurrencyGroupSeparator(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_CurrencyGroupSeparator", value));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.get_CurrencySymbol
::CsString* System::Globalization::NumberFormatInfo::get_CurrencySymbol() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_CurrencySymbol"));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.get_CurrentInfo
System::Globalization::NumberFormatInfo* System::Globalization::NumberFormatInfo::get_CurrentInfo() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Globalization::NumberFormatInfo*>("System.Globalization", "NumberFormatInfo", "get_CurrentInfo"));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.get_NaNSymbol
::CsString* System::Globalization::NumberFormatInfo::get_NaNSymbol() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_NaNSymbol"));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.get_CurrencyNegativePattern
int System::Globalization::NumberFormatInfo::get_CurrencyNegativePattern() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_CurrencyNegativePattern"));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.get_NumberNegativePattern
int System::Globalization::NumberFormatInfo::get_NumberNegativePattern() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_NumberNegativePattern"));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.get_PercentPositivePattern
int System::Globalization::NumberFormatInfo::get_PercentPositivePattern() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_PercentPositivePattern"));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.get_PercentNegativePattern
int System::Globalization::NumberFormatInfo::get_PercentNegativePattern() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_PercentNegativePattern"));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.get_NegativeInfinitySymbol
::CsString* System::Globalization::NumberFormatInfo::get_NegativeInfinitySymbol() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_NegativeInfinitySymbol"));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.get_NegativeSign
::CsString* System::Globalization::NumberFormatInfo::get_NegativeSign() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_NegativeSign"));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.get_NumberDecimalDigits
int System::Globalization::NumberFormatInfo::get_NumberDecimalDigits() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_NumberDecimalDigits"));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.get_NumberDecimalSeparator
::CsString* System::Globalization::NumberFormatInfo::get_NumberDecimalSeparator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_NumberDecimalSeparator"));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.get_NumberGroupSeparator
::CsString* System::Globalization::NumberFormatInfo::get_NumberGroupSeparator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_NumberGroupSeparator"));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.set_NumberGroupSeparator
void System::Globalization::NumberFormatInfo::set_NumberGroupSeparator(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_NumberGroupSeparator", value));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.get_CurrencyPositivePattern
int System::Globalization::NumberFormatInfo::get_CurrencyPositivePattern() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_CurrencyPositivePattern"));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.get_PositiveInfinitySymbol
::CsString* System::Globalization::NumberFormatInfo::get_PositiveInfinitySymbol() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_PositiveInfinitySymbol"));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.get_PositiveSign
::CsString* System::Globalization::NumberFormatInfo::get_PositiveSign() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_PositiveSign"));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.get_PercentDecimalDigits
int System::Globalization::NumberFormatInfo::get_PercentDecimalDigits() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_PercentDecimalDigits"));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.get_PercentDecimalSeparator
::CsString* System::Globalization::NumberFormatInfo::get_PercentDecimalSeparator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_PercentDecimalSeparator"));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.get_PercentGroupSeparator
::CsString* System::Globalization::NumberFormatInfo::get_PercentGroupSeparator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_PercentGroupSeparator"));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.set_PercentGroupSeparator
void System::Globalization::NumberFormatInfo::set_PercentGroupSeparator(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_PercentGroupSeparator", value));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.get_PercentSymbol
::CsString* System::Globalization::NumberFormatInfo::get_PercentSymbol() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_PercentSymbol"));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.get_PerMilleSymbol
::CsString* System::Globalization::NumberFormatInfo::get_PerMilleSymbol() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_PerMilleSymbol"));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.ReadOnly
System::Globalization::NumberFormatInfo* System::Globalization::NumberFormatInfo::ReadOnly(System::Globalization::NumberFormatInfo* nfi) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Globalization::NumberFormatInfo*>("System.Globalization", "NumberFormatInfo", "ReadOnly", nfi));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.ValidateParseStyleInteger
void System::Globalization::NumberFormatInfo::ValidateParseStyleInteger(System::Globalization::NumberStyles style) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Globalization", "NumberFormatInfo", "ValidateParseStyleInteger", style));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.ValidateParseStyleFloatingPoint
void System::Globalization::NumberFormatInfo::ValidateParseStyleFloatingPoint(System::Globalization::NumberStyles style) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Globalization", "NumberFormatInfo", "ValidateParseStyleFloatingPoint", style));
}
// Autogenerated method: System.Globalization.NumberFormatInfo..ctor
System::Globalization::NumberFormatInfo* System::Globalization::NumberFormatInfo::New_ctor() {
  return (NumberFormatInfo*)THROW_UNLESS(il2cpp_utils::New("System.Globalization", "NumberFormatInfo"));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.Clone
::CsObject* System::Globalization::NumberFormatInfo::Clone() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "Clone"));
}
// Autogenerated method: System.Globalization.NumberFormatInfo.GetFormat
::CsObject* System::Globalization::NumberFormatInfo::GetFormat(System::Type* formatType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "GetFormat", formatType));
}
