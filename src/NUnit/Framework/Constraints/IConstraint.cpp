// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Constraints.IConstraint
#include "NUnit/Framework/Constraints/IConstraint.hpp"
// Including type: NUnit.Framework.Constraints.ConstraintBuilder
#include "NUnit/Framework/Constraints/ConstraintBuilder.hpp"
// Including type: NUnit.Framework.Constraints.ConstraintResult
#include "NUnit/Framework/Constraints/ConstraintResult.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NUnit.Framework.Constraints.IConstraint.get_Description
::CsString* NUnit::Framework::Constraints::IConstraint::get_Description() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_Description"));
}
// Autogenerated method: NUnit.Framework.Constraints.IConstraint.set_Builder
void NUnit::Framework::Constraints::IConstraint::set_Builder(NUnit::Framework::Constraints::ConstraintBuilder* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Builder", value));
}
// Autogenerated method: NUnit.Framework.Constraints.IConstraint.ApplyTo
NUnit::Framework::Constraints::ConstraintResult* NUnit::Framework::Constraints::IConstraint::ApplyTo(::CsObject* actual) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Constraints::ConstraintResult*>(this, "ApplyTo", actual));
}
