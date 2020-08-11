// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Claims.ClaimsPrincipal
#include "System/Security/Claims/ClaimsPrincipal.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.Security.Claims.ClaimsIdentity
#include "System/Security/Claims/ClaimsIdentity.hpp"
// Including type: System.Func`2
#include "System/Func_2.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Func`1
#include "System/Func_1.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Func`2<System.Collections.Generic.IEnumerable`1<System.Security.Claims.ClaimsIdentity>,System.Security.Claims.ClaimsIdentity> s_identitySelector
System::Func_2<System::Collections::Generic::IEnumerable_1<System::Security::Claims::ClaimsIdentity*>*, System::Security::Claims::ClaimsIdentity*>* System::Security::Claims::ClaimsPrincipal::_get_s_identitySelector() {
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Func_2<System::Collections::Generic::IEnumerable_1<System::Security::Claims::ClaimsIdentity*>*, System::Security::Claims::ClaimsIdentity*>*>("System.Security.Claims", "ClaimsPrincipal", "s_identitySelector")));
}
// Autogenerated static field setter
// Set static field: static private System.Func`2<System.Collections.Generic.IEnumerable`1<System.Security.Claims.ClaimsIdentity>,System.Security.Claims.ClaimsIdentity> s_identitySelector
void System::Security::Claims::ClaimsPrincipal::_set_s_identitySelector(System::Func_2<System::Collections::Generic::IEnumerable_1<System::Security::Claims::ClaimsIdentity*>*, System::Security::Claims::ClaimsIdentity*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Security.Claims", "ClaimsPrincipal", "s_identitySelector", value));
}
// Autogenerated static field getter
// Get static field: static private System.Func`1<System.Security.Claims.ClaimsPrincipal> s_principalSelector
System::Func_1<System::Security::Claims::ClaimsPrincipal*>* System::Security::Claims::ClaimsPrincipal::_get_s_principalSelector() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Func_1<System::Security::Claims::ClaimsPrincipal*>*>("System.Security.Claims", "ClaimsPrincipal", "s_principalSelector"));
}
// Autogenerated static field setter
// Set static field: static private System.Func`1<System.Security.Claims.ClaimsPrincipal> s_principalSelector
void System::Security::Claims::ClaimsPrincipal::_set_s_principalSelector(System::Func_1<System::Security::Claims::ClaimsPrincipal*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Security.Claims", "ClaimsPrincipal", "s_principalSelector", value));
}
// Autogenerated method: System.Security.Claims.ClaimsPrincipal.SelectPrimaryIdentity
System::Security::Claims::ClaimsIdentity* System::Security::Claims::ClaimsPrincipal::SelectPrimaryIdentity(System::Collections::Generic::IEnumerable_1<System::Security::Claims::ClaimsIdentity*>* identities) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Claims::ClaimsIdentity*>("System.Security.Claims", "ClaimsPrincipal", "SelectPrimaryIdentity", identities));
}
// Autogenerated method: System.Security.Claims.ClaimsPrincipal.get_ClaimsPrincipalSelector
System::Func_1<System::Security::Claims::ClaimsPrincipal*>* System::Security::Claims::ClaimsPrincipal::get_ClaimsPrincipalSelector() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Func_1<System::Security::Claims::ClaimsPrincipal*>*>("System.Security.Claims", "ClaimsPrincipal", "get_ClaimsPrincipalSelector"));
}
// Autogenerated method: System.Security.Claims.ClaimsPrincipal..ctor
System::Security::Claims::ClaimsPrincipal* System::Security::Claims::ClaimsPrincipal::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (ClaimsPrincipal*)THROW_UNLESS(il2cpp_utils::New("System.Security.Claims", "ClaimsPrincipal", info, context));
}
// Autogenerated method: System.Security.Claims.ClaimsPrincipal.OnSerializingMethod
void System::Security::Claims::ClaimsPrincipal::OnSerializingMethod(System::Runtime::Serialization::StreamingContext context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnSerializingMethod", context));
}
// Autogenerated method: System.Security.Claims.ClaimsPrincipal.OnDeserializedMethod
void System::Security::Claims::ClaimsPrincipal::OnDeserializedMethod(System::Runtime::Serialization::StreamingContext context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDeserializedMethod", context));
}
// Autogenerated method: System.Security.Claims.ClaimsPrincipal.Deserialize
void System::Security::Claims::ClaimsPrincipal::Deserialize(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Deserialize", info, context));
}
// Autogenerated method: System.Security.Claims.ClaimsPrincipal.DeserializeIdentities
void System::Security::Claims::ClaimsPrincipal::DeserializeIdentities(::CsString* identities) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DeserializeIdentities", identities));
}
// Autogenerated method: System.Security.Claims.ClaimsPrincipal.SerializeIdentities
::CsString* System::Security::Claims::ClaimsPrincipal::SerializeIdentities() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "SerializeIdentities"));
}
// Autogenerated method: System.Security.Claims.ClaimsPrincipal..cctor
void System::Security::Claims::ClaimsPrincipal::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Security.Claims", "ClaimsPrincipal", ".cctor"));
}
// Autogenerated method: System.Security.Claims.ClaimsPrincipal..ctor
System::Security::Claims::ClaimsPrincipal* System::Security::Claims::ClaimsPrincipal::New_ctor() {
  return (ClaimsPrincipal*)THROW_UNLESS(il2cpp_utils::New("System.Security.Claims", "ClaimsPrincipal"));
}
