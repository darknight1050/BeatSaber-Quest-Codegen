// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.TestParameters
#include "NUnit/Framework/TestParameters.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: System.IFormatProvider
#include "System/IFormatProvider.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.IFormatProvider MODIFIED_INVARIANT_CULTURE
System::IFormatProvider* NUnit::Framework::TestParameters::_get_MODIFIED_INVARIANT_CULTURE() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::IFormatProvider*>("NUnit.Framework", "TestParameters", "MODIFIED_INVARIANT_CULTURE"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.IFormatProvider MODIFIED_INVARIANT_CULTURE
void NUnit::Framework::TestParameters::_set_MODIFIED_INVARIANT_CULTURE(System::IFormatProvider* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("NUnit.Framework", "TestParameters", "MODIFIED_INVARIANT_CULTURE", value));
}
// Autogenerated method: NUnit.Framework.TestParameters.Add
void NUnit::Framework::TestParameters::Add(::CsString* name, ::CsString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Add", name, value));
}
// Autogenerated method: NUnit.Framework.TestParameters.CreateModifiedInvariantCulture
System::IFormatProvider* NUnit::Framework::TestParameters::CreateModifiedInvariantCulture() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IFormatProvider*>("NUnit.Framework", "TestParameters", "CreateModifiedInvariantCulture"));
}
// Autogenerated method: NUnit.Framework.TestParameters..cctor
void NUnit::Framework::TestParameters::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("NUnit.Framework", "TestParameters", ".cctor"));
}
// Autogenerated method: NUnit.Framework.TestParameters..ctor
NUnit::Framework::TestParameters* NUnit::Framework::TestParameters::New_ctor() {
  return (TestParameters*)THROW_UNLESS(il2cpp_utils::New("NUnit.Framework", "TestParameters"));
}
