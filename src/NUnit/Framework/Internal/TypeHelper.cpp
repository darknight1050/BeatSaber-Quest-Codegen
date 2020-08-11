// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.TypeHelper
#include "NUnit/Framework/Internal/TypeHelper.hpp"
// Including type: NUnit.Framework.Internal.TypeHelper/NonmatchingTypeClass
#include "NUnit/Framework/Internal/TypeHelper_NonmatchingTypeClass.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: NUnit.Framework.Interfaces.IParameterInfo
#include "NUnit/Framework/Interfaces/IParameterInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly System.Type NonmatchingType
System::Type* NUnit::Framework::Internal::TypeHelper::_get_NonmatchingType() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Type*>("NUnit.Framework.Internal", "TypeHelper", "NonmatchingType"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Type NonmatchingType
void NUnit::Framework::Internal::TypeHelper::_set_NonmatchingType(System::Type* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("NUnit.Framework.Internal", "TypeHelper", "NonmatchingType", value));
}
// Autogenerated method: NUnit.Framework.Internal.TypeHelper.GetDisplayName
::CsString* NUnit::Framework::Internal::TypeHelper::GetDisplayName(System::Type* type) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("NUnit.Framework.Internal", "TypeHelper", "GetDisplayName", type));
}
// Autogenerated method: NUnit.Framework.Internal.TypeHelper.GetDisplayName
::CsString* NUnit::Framework::Internal::TypeHelper::GetDisplayName(System::Type* type, ::Array<::CsObject*>* arglist) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("NUnit.Framework.Internal", "TypeHelper", "GetDisplayName", type, arglist));
}
// Autogenerated method: NUnit.Framework.Internal.TypeHelper.BestCommonType
System::Type* NUnit::Framework::Internal::TypeHelper::BestCommonType(System::Type* type1, System::Type* type2) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Type*>("NUnit.Framework.Internal", "TypeHelper", "BestCommonType", type1, type2));
}
// Autogenerated method: NUnit.Framework.Internal.TypeHelper.IsNumeric
bool NUnit::Framework::Internal::TypeHelper::IsNumeric(System::Type* type) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("NUnit.Framework.Internal", "TypeHelper", "IsNumeric", type));
}
// Autogenerated method: NUnit.Framework.Internal.TypeHelper.ConvertArgumentList
void NUnit::Framework::Internal::TypeHelper::ConvertArgumentList(::Array<::CsObject*>* arglist, ::Array<NUnit::Framework::Interfaces::IParameterInfo*>* parameters) {
  THROW_UNLESS(il2cpp_utils::RunMethod("NUnit.Framework.Internal", "TypeHelper", "ConvertArgumentList", arglist, parameters));
}
// Autogenerated method: NUnit.Framework.Internal.TypeHelper.CanDeduceTypeArgsFromArgs
bool NUnit::Framework::Internal::TypeHelper::CanDeduceTypeArgsFromArgs(System::Type* type, ::Array<::CsObject*>* arglist, ::Array<System::Type*>*& typeArgsOut) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("NUnit.Framework.Internal", "TypeHelper", "CanDeduceTypeArgsFromArgs", type, arglist, typeArgsOut));
}
// Autogenerated method: NUnit.Framework.Internal.TypeHelper..cctor
void NUnit::Framework::Internal::TypeHelper::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("NUnit.Framework.Internal", "TypeHelper", ".cctor"));
}
