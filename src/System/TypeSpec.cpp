// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.TypeSpec
#include "System/TypeSpec.hpp"
// Including type: System.TypeSpec/DisplayNameFormat
#include "System/TypeSpec_DisplayNameFormat.hpp"
// Including type: System.TypeIdentifier
#include "System/TypeIdentifier.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.ModifierSpec
#include "System/ModifierSpec.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Func`2
#include "System/Func_2.hpp"
// Including type: System.Reflection.AssemblyName
#include "System/Reflection/AssemblyName.hpp"
// Including type: System.Reflection.Assembly
#include "System/Reflection/Assembly.hpp"
// Including type: System.Func`4
#include "System/Func_4.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.TypeSpec.get_HasModifiers
bool System::TypeSpec::get_HasModifiers() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_HasModifiers"));
}
// Autogenerated method: System.TypeSpec.GetDisplayFullName
::CsString* System::TypeSpec::GetDisplayFullName(System::TypeSpec::DisplayNameFormat flags) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "GetDisplayFullName", flags));
}
// Autogenerated method: System.TypeSpec.GetModifierString
System::Text::StringBuilder* System::TypeSpec::GetModifierString(System::Text::StringBuilder* sb) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Text::StringBuilder*>(this, "GetModifierString", sb));
}
// Autogenerated method: System.TypeSpec.get_DisplayFullName
::CsString* System::TypeSpec::get_DisplayFullName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_DisplayFullName"));
}
// Autogenerated method: System.TypeSpec.Parse
System::TypeSpec* System::TypeSpec::Parse(::CsString* typeName) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TypeSpec*>("System", "TypeSpec", "Parse", typeName));
}
// Autogenerated method: System.TypeSpec.UnescapeInternalName
::CsString* System::TypeSpec::UnescapeInternalName(::CsString* displayName) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("System", "TypeSpec", "UnescapeInternalName", displayName));
}
// Autogenerated method: System.TypeSpec.Resolve
System::Type* System::TypeSpec::Resolve(System::Func_2<System::Reflection::AssemblyName*, System::Reflection::Assembly*>* assemblyResolver, System::Func_4<System::Reflection::Assembly*, ::CsString*, bool, System::Type*>* typeResolver, bool throwOnError, bool ignoreCase) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Type*>(this, "Resolve", assemblyResolver, typeResolver, throwOnError, ignoreCase));
}
// Autogenerated method: System.TypeSpec.AddName
void System::TypeSpec::AddName(::CsString* type_name) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddName", type_name));
}
// Autogenerated method: System.TypeSpec.AddModifier
void System::TypeSpec::AddModifier(System::ModifierSpec* md) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddModifier", md));
}
// Autogenerated method: System.TypeSpec.SkipSpace
void System::TypeSpec::SkipSpace(::CsString* name, int& pos) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System", "TypeSpec", "SkipSpace", name, pos));
}
// Autogenerated method: System.TypeSpec.BoundCheck
void System::TypeSpec::BoundCheck(int idx, ::CsString* s) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System", "TypeSpec", "BoundCheck", idx, s));
}
// Autogenerated method: System.TypeSpec.ParsedTypeIdentifier
System::TypeIdentifier* System::TypeSpec::ParsedTypeIdentifier(::CsString* displayName) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TypeIdentifier*>("System", "TypeSpec", "ParsedTypeIdentifier", displayName));
}
// Autogenerated method: System.TypeSpec.Parse
System::TypeSpec* System::TypeSpec::Parse(::CsString* name, int& p, bool is_recurse, bool allow_aqn) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TypeSpec*>("System", "TypeSpec", "Parse", name, p, is_recurse, allow_aqn));
}
// Autogenerated method: System.TypeSpec..ctor
System::TypeSpec* System::TypeSpec::New_ctor() {
  return (TypeSpec*)THROW_UNLESS(il2cpp_utils::New("System", "TypeSpec"));
}
