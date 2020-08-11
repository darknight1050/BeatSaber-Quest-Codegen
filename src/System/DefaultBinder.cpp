// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.DefaultBinder
#include "System/DefaultBinder.hpp"
// Including type: System.DefaultBinder/BinderState
#include "System/DefaultBinder_BinderState.hpp"
// Including type: System.DefaultBinder/<>c
#include "System/DefaultBinder_--c.hpp"
// Including type: System.Reflection.MethodBase
#include "System/Reflection/MethodBase.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Reflection.ParameterModifier
#include "System/Reflection/ParameterModifier.hpp"
// Including type: System.Reflection.PropertyInfo
#include "System/Reflection/PropertyInfo.hpp"
// Including type: System.Reflection.ParameterInfo
#include "System/Reflection/ParameterInfo.hpp"
// Including type: System.Reflection.FieldInfo
#include "System/Reflection/FieldInfo.hpp"
// Including type: System.RuntimeType
#include "System/RuntimeType.hpp"
// Including type: System.Reflection.BindingFlags
#include "System/Reflection/BindingFlags.hpp"
// Including type: System.Globalization.CultureInfo
#include "System/Globalization/CultureInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.DefaultBinder.ExactBinding
System::Reflection::MethodBase* System::DefaultBinder::ExactBinding(::Array<System::Reflection::MethodBase*>* match, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodBase*>("System", "DefaultBinder", "ExactBinding", match, types, modifiers));
}
// Autogenerated method: System.DefaultBinder.ExactPropertyBinding
System::Reflection::PropertyInfo* System::DefaultBinder::ExactPropertyBinding(::Array<System::Reflection::PropertyInfo*>* match, System::Type* returnType, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::PropertyInfo*>("System", "DefaultBinder", "ExactPropertyBinding", match, returnType, types, modifiers));
}
// Autogenerated method: System.DefaultBinder.FindMostSpecific
int System::DefaultBinder::FindMostSpecific(::Array<System::Reflection::ParameterInfo*>* p1, ::Array<int>* paramOrder1, System::Type* paramArrayType1, ::Array<System::Reflection::ParameterInfo*>* p2, ::Array<int>* paramOrder2, System::Type* paramArrayType2, ::Array<System::Type*>* types, ::Array<::CsObject*>* args) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System", "DefaultBinder", "FindMostSpecific", p1, paramOrder1, paramArrayType1, p2, paramOrder2, paramArrayType2, types, args));
}
// Autogenerated method: System.DefaultBinder.FindMostSpecificType
int System::DefaultBinder::FindMostSpecificType(System::Type* c1, System::Type* c2, System::Type* t) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System", "DefaultBinder", "FindMostSpecificType", c1, c2, t));
}
// Autogenerated method: System.DefaultBinder.FindMostSpecificMethod
int System::DefaultBinder::FindMostSpecificMethod(System::Reflection::MethodBase* m1, ::Array<int>* paramOrder1, System::Type* paramArrayType1, System::Reflection::MethodBase* m2, ::Array<int>* paramOrder2, System::Type* paramArrayType2, ::Array<System::Type*>* types, ::Array<::CsObject*>* args) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System", "DefaultBinder", "FindMostSpecificMethod", m1, paramOrder1, paramArrayType1, m2, paramOrder2, paramArrayType2, types, args));
}
// Autogenerated method: System.DefaultBinder.FindMostSpecificField
int System::DefaultBinder::FindMostSpecificField(System::Reflection::FieldInfo* cur1, System::Reflection::FieldInfo* cur2) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System", "DefaultBinder", "FindMostSpecificField", cur1, cur2));
}
// Autogenerated method: System.DefaultBinder.FindMostSpecificProperty
int System::DefaultBinder::FindMostSpecificProperty(System::Reflection::PropertyInfo* cur1, System::Reflection::PropertyInfo* cur2) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System", "DefaultBinder", "FindMostSpecificProperty", cur1, cur2));
}
// Autogenerated method: System.DefaultBinder.CompareMethodSigAndName
bool System::DefaultBinder::CompareMethodSigAndName(System::Reflection::MethodBase* m1, System::Reflection::MethodBase* m2) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DefaultBinder", "CompareMethodSigAndName", m1, m2));
}
// Autogenerated method: System.DefaultBinder.GetHierarchyDepth
int System::DefaultBinder::GetHierarchyDepth(System::Type* t) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System", "DefaultBinder", "GetHierarchyDepth", t));
}
// Autogenerated method: System.DefaultBinder.FindMostDerivedNewSlotMeth
System::Reflection::MethodBase* System::DefaultBinder::FindMostDerivedNewSlotMeth(::Array<System::Reflection::MethodBase*>* match, int cMatches) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodBase*>("System", "DefaultBinder", "FindMostDerivedNewSlotMeth", match, cMatches));
}
// Autogenerated method: System.DefaultBinder.ReorderParams
void System::DefaultBinder::ReorderParams(::Array<int>* paramOrder, ::Array<::CsObject*>* vars) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System", "DefaultBinder", "ReorderParams", paramOrder, vars));
}
// Autogenerated method: System.DefaultBinder.CreateParamOrder
bool System::DefaultBinder::CreateParamOrder(::Array<int>* paramOrder, ::Array<System::Reflection::ParameterInfo*>* pars, ::Array<::CsString*>* names) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DefaultBinder", "CreateParamOrder", paramOrder, pars, names));
}
// Autogenerated method: System.DefaultBinder.CanConvertPrimitive
bool System::DefaultBinder::CanConvertPrimitive(System::RuntimeType* source, System::RuntimeType* target) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DefaultBinder", "CanConvertPrimitive", source, target));
}
// Autogenerated method: System.DefaultBinder.CanConvertPrimitiveObjectToType
bool System::DefaultBinder::CanConvertPrimitiveObjectToType(::CsObject* source, System::RuntimeType* type) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DefaultBinder", "CanConvertPrimitiveObjectToType", source, type));
}
// Autogenerated method: System.DefaultBinder.BindToMethod
System::Reflection::MethodBase* System::DefaultBinder::BindToMethod(System::Reflection::BindingFlags bindingAttr, ::Array<System::Reflection::MethodBase*>* match, ::Array<::CsObject*>*& args, ::Array<System::Reflection::ParameterModifier>* modifiers, System::Globalization::CultureInfo* cultureInfo, ::Array<::CsString*>* names, ::CsObject*& state) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodBase*>(this, "BindToMethod", bindingAttr, match, args, modifiers, cultureInfo, names, state));
}
// Autogenerated method: System.DefaultBinder.BindToField
System::Reflection::FieldInfo* System::DefaultBinder::BindToField(System::Reflection::BindingFlags bindingAttr, ::Array<System::Reflection::FieldInfo*>* match, ::CsObject* value, System::Globalization::CultureInfo* cultureInfo) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::FieldInfo*>(this, "BindToField", bindingAttr, match, value, cultureInfo));
}
// Autogenerated method: System.DefaultBinder.SelectMethod
System::Reflection::MethodBase* System::DefaultBinder::SelectMethod(System::Reflection::BindingFlags bindingAttr, ::Array<System::Reflection::MethodBase*>* match, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodBase*>(this, "SelectMethod", bindingAttr, match, types, modifiers));
}
// Autogenerated method: System.DefaultBinder.SelectProperty
System::Reflection::PropertyInfo* System::DefaultBinder::SelectProperty(System::Reflection::BindingFlags bindingAttr, ::Array<System::Reflection::PropertyInfo*>* match, System::Type* returnType, ::Array<System::Type*>* indexes, ::Array<System::Reflection::ParameterModifier>* modifiers) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::PropertyInfo*>(this, "SelectProperty", bindingAttr, match, returnType, indexes, modifiers));
}
// Autogenerated method: System.DefaultBinder.ChangeType
::CsObject* System::DefaultBinder::ChangeType(::CsObject* value, System::Type* type, System::Globalization::CultureInfo* cultureInfo) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "ChangeType", value, type, cultureInfo));
}
// Autogenerated method: System.DefaultBinder.ReorderArgumentArray
void System::DefaultBinder::ReorderArgumentArray(::Array<::CsObject*>*& args, ::CsObject* state) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ReorderArgumentArray", args, state));
}
// Autogenerated method: System.DefaultBinder..ctor
System::DefaultBinder* System::DefaultBinder::New_ctor() {
  return (DefaultBinder*)THROW_UNLESS(il2cpp_utils::New("System", "DefaultBinder"));
}
