// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.MemberInfo
#include "System/Reflection/MemberInfo.hpp"
// Including type: System.Reflection.MemberTypes
#include "System/Reflection/MemberTypes.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
// Including type: System.Reflection.CustomAttributeData
#include "System/Reflection/CustomAttributeData.hpp"
// Including type: System.Reflection.Module
#include "System/Reflection/Module.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Reflection.MemberInfo.get_MemberType
System::Reflection::MemberTypes System::Reflection::MemberInfo::get_MemberType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MemberTypes>(this, "get_MemberType"));
}
// Autogenerated method: System.Reflection.MemberInfo.get_Name
::CsString* System::Reflection::MemberInfo::get_Name() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_Name"));
}
// Autogenerated method: System.Reflection.MemberInfo.get_DeclaringType
System::Type* System::Reflection::MemberInfo::get_DeclaringType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Type*>(this, "get_DeclaringType"));
}
// Autogenerated method: System.Reflection.MemberInfo.get_ReflectedType
System::Type* System::Reflection::MemberInfo::get_ReflectedType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Type*>(this, "get_ReflectedType"));
}
// Autogenerated method: System.Reflection.MemberInfo.GetCustomAttributes
::Array<::CsObject*>* System::Reflection::MemberInfo::GetCustomAttributes(bool inherit) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsObject*>*>(this, "GetCustomAttributes", inherit));
}
// Autogenerated method: System.Reflection.MemberInfo.GetCustomAttributesData
System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>* System::Reflection::MemberInfo::GetCustomAttributesData() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>*>(this, "GetCustomAttributesData"));
}
// Autogenerated method: System.Reflection.MemberInfo.get_MetadataToken
int System::Reflection::MemberInfo::get_MetadataToken() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_MetadataToken"));
}
// Autogenerated method: System.Reflection.MemberInfo.get_Module
System::Reflection::Module* System::Reflection::MemberInfo::get_Module() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::Module*>(this, "get_Module"));
}
// Autogenerated method: System.Reflection.MemberInfo..ctor
System::Reflection::MemberInfo* System::Reflection::MemberInfo::New_ctor() {
  return (MemberInfo*)THROW_UNLESS(il2cpp_utils::New("System.Reflection", "MemberInfo"));
}
// Autogenerated method: System.Reflection.MemberInfo.GetCustomAttributes
::Array<::CsObject*>* System::Reflection::MemberInfo::GetCustomAttributes(System::Type* attributeType, bool inherit) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsObject*>*>(this, "GetCustomAttributes", attributeType, inherit));
}
// Autogenerated method: System.Reflection.MemberInfo.IsDefined
bool System::Reflection::MemberInfo::IsDefined(System::Type* attributeType, bool inherit) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsDefined", attributeType, inherit));
}
// Autogenerated method: System.Reflection.MemberInfo.Equals
bool System::Reflection::MemberInfo::Equals(::CsObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", obj));
}
// Autogenerated method: System.Reflection.MemberInfo.GetHashCode
int System::Reflection::MemberInfo::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
}
// Autogenerated method: System.Reflection.MemberInfo.op_Equality
bool System::Reflection::operator ==(System::Reflection::MemberInfo* left, System::Reflection::MemberInfo& right) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Reflection", "MemberInfo", "op_Equality", left, &right));
}
// Autogenerated method: System.Reflection.MemberInfo.op_Inequality
bool System::Reflection::operator !=(System::Reflection::MemberInfo* left, System::Reflection::MemberInfo& right) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Reflection", "MemberInfo", "op_Inequality", left, &right));
}
