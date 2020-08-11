// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Microsoft.Win32.UnixRegistryApi
#include "Microsoft/Win32/UnixRegistryApi.hpp"
// Including type: Microsoft.Win32.RegistryKey
#include "Microsoft/Win32/RegistryKey.hpp"
// Including type: Microsoft.Win32.RegistryValueOptions
#include "Microsoft/Win32/RegistryValueOptions.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Microsoft.Win32.UnixRegistryApi.ToUnix
::CsString* Microsoft::Win32::UnixRegistryApi::ToUnix(::CsString* keyname) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("Microsoft.Win32", "UnixRegistryApi", "ToUnix", keyname));
}
// Autogenerated method: Microsoft.Win32.UnixRegistryApi.IsWellKnownKey
bool Microsoft::Win32::UnixRegistryApi::IsWellKnownKey(::CsString* parentKeyName, ::CsString* keyname) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("Microsoft.Win32", "UnixRegistryApi", "IsWellKnownKey", parentKeyName, keyname));
}
// Autogenerated method: Microsoft.Win32.UnixRegistryApi.CreateSubKey
Microsoft::Win32::RegistryKey* Microsoft::Win32::UnixRegistryApi::CreateSubKey(Microsoft::Win32::RegistryKey* rkey, ::CsString* keyname, bool writable) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Microsoft::Win32::RegistryKey*>(this, "CreateSubKey", rkey, keyname, writable));
}
// Autogenerated method: Microsoft.Win32.UnixRegistryApi.CreateSubKey
Microsoft::Win32::RegistryKey* Microsoft::Win32::UnixRegistryApi::CreateSubKey(Microsoft::Win32::RegistryKey* rkey, ::CsString* keyname, bool writable, bool is_volatile) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Microsoft::Win32::RegistryKey*>(this, "CreateSubKey", rkey, keyname, writable, is_volatile));
}
// Autogenerated method: Microsoft.Win32.UnixRegistryApi.OpenSubKey
Microsoft::Win32::RegistryKey* Microsoft::Win32::UnixRegistryApi::OpenSubKey(Microsoft::Win32::RegistryKey* rkey, ::CsString* keyname, bool writable) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Microsoft::Win32::RegistryKey*>(this, "OpenSubKey", rkey, keyname, writable));
}
// Autogenerated method: Microsoft.Win32.UnixRegistryApi.Flush
void Microsoft::Win32::UnixRegistryApi::Flush(Microsoft::Win32::RegistryKey* rkey) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Flush", rkey));
}
// Autogenerated method: Microsoft.Win32.UnixRegistryApi.Close
void Microsoft::Win32::UnixRegistryApi::Close(Microsoft::Win32::RegistryKey* rkey) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Close", rkey));
}
// Autogenerated method: Microsoft.Win32.UnixRegistryApi.GetValue
::CsObject* Microsoft::Win32::UnixRegistryApi::GetValue(Microsoft::Win32::RegistryKey* rkey, ::CsString* name, ::CsObject* default_value, Microsoft::Win32::RegistryValueOptions options) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "GetValue", rkey, name, default_value, options));
}
// Autogenerated method: Microsoft.Win32.UnixRegistryApi.GetSubKeyNames
::Array<::CsString*>* Microsoft::Win32::UnixRegistryApi::GetSubKeyNames(Microsoft::Win32::RegistryKey* rkey) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsString*>*>(this, "GetSubKeyNames", rkey));
}
// Autogenerated method: Microsoft.Win32.UnixRegistryApi.ToString
::CsString* Microsoft::Win32::UnixRegistryApi::ToString(Microsoft::Win32::RegistryKey* rkey) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "ToString", rkey));
}
// Autogenerated method: Microsoft.Win32.UnixRegistryApi.GetHandle
System::IntPtr Microsoft::Win32::UnixRegistryApi::GetHandle(Microsoft::Win32::RegistryKey* key) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>(this, "GetHandle", key));
}
// Autogenerated method: Microsoft.Win32.UnixRegistryApi..ctor
Microsoft::Win32::UnixRegistryApi* Microsoft::Win32::UnixRegistryApi::New_ctor() {
  return (UnixRegistryApi*)THROW_UNLESS(il2cpp_utils::New("Microsoft.Win32", "UnixRegistryApi"));
}
