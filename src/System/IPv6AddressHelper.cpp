// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IPv6AddressHelper
#include "System/IPv6AddressHelper.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.IPv6AddressHelper.ParseCanonicalName
::CsString* System::IPv6AddressHelper::ParseCanonicalName(::CsString* str, int start, bool& isLoopback, ::CsString*& scopeId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("System", "IPv6AddressHelper", "ParseCanonicalName", str, start, isLoopback, scopeId));
}
// Autogenerated method: System.IPv6AddressHelper.CreateCanonicalName
::CsString* System::IPv6AddressHelper::CreateCanonicalName(uint16_t* numbers) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("System", "IPv6AddressHelper", "CreateCanonicalName", numbers));
}
// Autogenerated method: System.IPv6AddressHelper.FindCompressionRange
System::Collections::Generic::KeyValuePair_2<int, int> System::IPv6AddressHelper::FindCompressionRange(uint16_t* numbers) {
  return THROW_UNLESS((il2cpp_utils::RunMethod<System::Collections::Generic::KeyValuePair_2<int, int>>("System", "IPv6AddressHelper", "FindCompressionRange", numbers)));
}
// Autogenerated method: System.IPv6AddressHelper.ShouldHaveIpv4Embedded
bool System::IPv6AddressHelper::ShouldHaveIpv4Embedded(uint16_t* numbers) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "IPv6AddressHelper", "ShouldHaveIpv4Embedded", numbers));
}
// Autogenerated method: System.IPv6AddressHelper.InternalIsValid
bool System::IPv6AddressHelper::InternalIsValid(::Il2CppChar* name, int start, int& end, bool validateStrictAddress) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "IPv6AddressHelper", "InternalIsValid", name, start, end, validateStrictAddress));
}
// Autogenerated method: System.IPv6AddressHelper.IsValid
bool System::IPv6AddressHelper::IsValid(::Il2CppChar* name, int start, int& end) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "IPv6AddressHelper", "IsValid", name, start, end));
}
// Autogenerated method: System.IPv6AddressHelper.IsValidStrict
bool System::IPv6AddressHelper::IsValidStrict(::Il2CppChar* name, int start, int& end) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "IPv6AddressHelper", "IsValidStrict", name, start, end));
}
// Autogenerated method: System.IPv6AddressHelper.Parse
bool System::IPv6AddressHelper::Parse(::CsString* address, uint16_t* numbers, int start, ::CsString*& scopeId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "IPv6AddressHelper", "Parse", address, numbers, start, scopeId));
}
