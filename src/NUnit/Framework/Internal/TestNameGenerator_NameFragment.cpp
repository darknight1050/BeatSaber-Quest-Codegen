// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.TestNameGenerator/NameFragment
#include "NUnit/Framework/Internal/TestNameGenerator_NameFragment.hpp"
// Including type: NUnit.Framework.Internal.TestMethod
#include "NUnit/Framework/Internal/TestMethod.hpp"
// Including type: System.Reflection.MethodInfo
#include "System/Reflection/MethodInfo.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NUnit.Framework.Internal.TestNameGenerator/NameFragment.GetText
::CsString* NUnit::Framework::Internal::TestNameGenerator::NameFragment::GetText(NUnit::Framework::Internal::TestMethod* testMethod, ::Array<::CsObject*>* args) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "GetText", testMethod, args));
}
// Autogenerated method: NUnit.Framework.Internal.TestNameGenerator/NameFragment.GetText
::CsString* NUnit::Framework::Internal::TestNameGenerator::NameFragment::GetText(System::Reflection::MethodInfo* method, ::Array<::CsObject*>* args) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "GetText", method, args));
}
// Autogenerated method: NUnit.Framework.Internal.TestNameGenerator/NameFragment.AppendGenericTypeNames
void NUnit::Framework::Internal::TestNameGenerator::NameFragment::AppendGenericTypeNames(System::Text::StringBuilder* sb, System::Reflection::MethodInfo* method) {
  THROW_UNLESS(il2cpp_utils::RunMethod("NUnit.Framework.Internal", "TestNameGenerator/NameFragment", "AppendGenericTypeNames", sb, method));
}
// Autogenerated method: NUnit.Framework.Internal.TestNameGenerator/NameFragment.GetDisplayString
::CsString* NUnit::Framework::Internal::TestNameGenerator::NameFragment::GetDisplayString(::CsObject* arg, int stringMax) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("NUnit.Framework.Internal", "TestNameGenerator/NameFragment", "GetDisplayString", arg, stringMax));
}
// Autogenerated method: NUnit.Framework.Internal.TestNameGenerator/NameFragment.EscapeSingleChar
::CsString* NUnit::Framework::Internal::TestNameGenerator::NameFragment::EscapeSingleChar(::Il2CppChar c) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("NUnit.Framework.Internal", "TestNameGenerator/NameFragment", "EscapeSingleChar", c));
}
// Autogenerated method: NUnit.Framework.Internal.TestNameGenerator/NameFragment.EscapeCharInString
::CsString* NUnit::Framework::Internal::TestNameGenerator::NameFragment::EscapeCharInString(::Il2CppChar c) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("NUnit.Framework.Internal", "TestNameGenerator/NameFragment", "EscapeCharInString", c));
}
// Autogenerated method: NUnit.Framework.Internal.TestNameGenerator/NameFragment.EscapeControlChar
::CsString* NUnit::Framework::Internal::TestNameGenerator::NameFragment::EscapeControlChar(::Il2CppChar c) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("NUnit.Framework.Internal", "TestNameGenerator/NameFragment", "EscapeControlChar", c));
}
// Autogenerated method: NUnit.Framework.Internal.TestNameGenerator/NameFragment..ctor
NUnit::Framework::Internal::TestNameGenerator::NameFragment* NUnit::Framework::Internal::TestNameGenerator::NameFragment::New_ctor() {
  return (TestNameGenerator::NameFragment*)THROW_UNLESS(il2cpp_utils::New("NUnit.Framework.Internal", "TestNameGenerator/NameFragment"));
}
