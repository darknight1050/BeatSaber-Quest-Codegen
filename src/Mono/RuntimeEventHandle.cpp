// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.RuntimeEventHandle
#include "Mono/RuntimeEventHandle.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Mono.RuntimeEventHandle..ctor
Mono::RuntimeEventHandle* Mono::RuntimeEventHandle::New_ctor(System::IntPtr v) {
  return (RuntimeEventHandle*)THROW_UNLESS(il2cpp_utils::New("Mono", "RuntimeEventHandle", v));
}
// Autogenerated method: Mono.RuntimeEventHandle.get_Value
System::IntPtr Mono::RuntimeEventHandle::get_Value() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>(*this, "get_Value"));
}
// Autogenerated method: Mono.RuntimeEventHandle.Equals
bool Mono::RuntimeEventHandle::Equals(::CsObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", obj));
}
// Autogenerated method: Mono.RuntimeEventHandle.GetHashCode
int Mono::RuntimeEventHandle::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "GetHashCode"));
}
