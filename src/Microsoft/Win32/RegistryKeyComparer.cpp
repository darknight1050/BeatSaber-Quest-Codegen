// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Microsoft.Win32.RegistryKeyComparer
#include "Microsoft/Win32/RegistryKeyComparer.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Microsoft.Win32.RegistryKeyComparer.Equals
bool Microsoft::Win32::RegistryKeyComparer::Equals(::CsObject* x, ::CsObject* y) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", x, y));
}
bool Microsoft::Win32::RegistryKeyComparer::System_Collections_IEqualityComparer_Equals(::CsObject* x, ::CsObject* y) {
  return Equals(x, y);
}
// Autogenerated method: Microsoft.Win32.RegistryKeyComparer.GetHashCode
int Microsoft::Win32::RegistryKeyComparer::GetHashCode(::CsObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode", obj));
}
int Microsoft::Win32::RegistryKeyComparer::System_Collections_IEqualityComparer_GetHashCode(::CsObject* obj) {
  return GetHashCode(obj);
}
// Autogenerated method: Microsoft.Win32.RegistryKeyComparer..ctor
Microsoft::Win32::RegistryKeyComparer* Microsoft::Win32::RegistryKeyComparer::New_ctor() {
  return (RegistryKeyComparer*)THROW_UNLESS(il2cpp_utils::New("Microsoft.Win32", "RegistryKeyComparer"));
}
