// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.CustomAttributeData
#include "System/Reflection/CustomAttributeData.hpp"
// Including type: System.Reflection.CustomAttributeData/LazyCAttrData
#include "System/Reflection/CustomAttributeData_LazyCAttrData.hpp"
// Including type: System.Reflection.ConstructorInfo
#include "System/Reflection/ConstructorInfo.hpp"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
// Including type: System.Reflection.Assembly
#include "System/Reflection/Assembly.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Reflection.MemberInfo
#include "System/Reflection/MemberInfo.hpp"
// Including type: System.RuntimeType
#include "System/RuntimeType.hpp"
// Including type: System.Reflection.Module
#include "System/Reflection/Module.hpp"
// Including type: System.Reflection.ParameterInfo
#include "System/Reflection/ParameterInfo.hpp"
// Including type: System.Type
#include "System/Type.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Reflection.CustomAttributeData..ctor
System::Reflection::CustomAttributeData* System::Reflection::CustomAttributeData::New_ctor(System::Reflection::ConstructorInfo* ctorInfo, System::Reflection::Assembly* assembly, System::IntPtr data, uint data_length) {
  return (CustomAttributeData*)THROW_UNLESS(il2cpp_utils::New("System.Reflection", "CustomAttributeData", ctorInfo, assembly, data, data_length));
}
// Autogenerated method: System.Reflection.CustomAttributeData.ResolveArgumentsInternal
void System::Reflection::CustomAttributeData::ResolveArgumentsInternal(System::Reflection::ConstructorInfo* ctor, System::Reflection::Assembly* assembly, System::IntPtr data, uint data_length, ::Array<::CsObject*>*& ctorArgs, ::Array<::CsObject*>*& namedArgs) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Reflection", "CustomAttributeData", "ResolveArgumentsInternal", ctor, assembly, data, data_length, ctorArgs, namedArgs));
}
// Autogenerated method: System.Reflection.CustomAttributeData.ResolveArguments
void System::Reflection::CustomAttributeData::ResolveArguments() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ResolveArguments"));
}
// Autogenerated method: System.Reflection.CustomAttributeData.get_Constructor
System::Reflection::ConstructorInfo* System::Reflection::CustomAttributeData::get_Constructor() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::ConstructorInfo*>(this, "get_Constructor"));
}
// Autogenerated method: System.Reflection.CustomAttributeData.get_ConstructorArguments
System::Collections::Generic::IList_1<System::Reflection::CustomAttributeTypedArgument>* System::Reflection::CustomAttributeData::get_ConstructorArguments() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IList_1<System::Reflection::CustomAttributeTypedArgument>*>(this, "get_ConstructorArguments"));
}
// Autogenerated method: System.Reflection.CustomAttributeData.get_NamedArguments
System::Collections::Generic::IList_1<System::Reflection::CustomAttributeNamedArgument>* System::Reflection::CustomAttributeData::get_NamedArguments() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IList_1<System::Reflection::CustomAttributeNamedArgument>*>(this, "get_NamedArguments"));
}
// Autogenerated method: System.Reflection.CustomAttributeData.GetCustomAttributes
System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>* System::Reflection::CustomAttributeData::GetCustomAttributes(System::Reflection::Assembly* target) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>*>("System.Reflection", "CustomAttributeData", "GetCustomAttributes", target));
}
// Autogenerated method: System.Reflection.CustomAttributeData.GetCustomAttributes
System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>* System::Reflection::CustomAttributeData::GetCustomAttributes(System::Reflection::MemberInfo* target) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>*>("System.Reflection", "CustomAttributeData", "GetCustomAttributes", target));
}
// Autogenerated method: System.Reflection.CustomAttributeData.GetCustomAttributesInternal
System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>* System::Reflection::CustomAttributeData::GetCustomAttributesInternal(System::RuntimeType* target) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>*>("System.Reflection", "CustomAttributeData", "GetCustomAttributesInternal", target));
}
// Autogenerated method: System.Reflection.CustomAttributeData.GetCustomAttributes
System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>* System::Reflection::CustomAttributeData::GetCustomAttributes(System::Reflection::Module* target) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>*>("System.Reflection", "CustomAttributeData", "GetCustomAttributes", target));
}
// Autogenerated method: System.Reflection.CustomAttributeData.GetCustomAttributes
System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>* System::Reflection::CustomAttributeData::GetCustomAttributes(System::Reflection::ParameterInfo* target) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>*>("System.Reflection", "CustomAttributeData", "GetCustomAttributes", target));
}
// Autogenerated method: System.Reflection.CustomAttributeData.get_AttributeType
System::Type* System::Reflection::CustomAttributeData::get_AttributeType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Type*>(this, "get_AttributeType"));
}
// Autogenerated method: System.Reflection.CustomAttributeData..ctor
System::Reflection::CustomAttributeData* System::Reflection::CustomAttributeData::New_ctor() {
  return (CustomAttributeData*)THROW_UNLESS(il2cpp_utils::New("System.Reflection", "CustomAttributeData"));
}
// Autogenerated method: System.Reflection.CustomAttributeData.ToString
::CsString* System::Reflection::CustomAttributeData::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "ToString"));
}
// Autogenerated method: System.Reflection.CustomAttributeData.Equals
bool System::Reflection::CustomAttributeData::Equals(::CsObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", obj));
}
// Autogenerated method: System.Reflection.CustomAttributeData.GetHashCode
int System::Reflection::CustomAttributeData::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
}
