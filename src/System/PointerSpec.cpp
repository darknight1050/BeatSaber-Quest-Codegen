// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.PointerSpec
#include "System/PointerSpec.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.PointerSpec..ctor
System::PointerSpec* System::PointerSpec::New_ctor(int pointer_level) {
  return (PointerSpec*)THROW_UNLESS(il2cpp_utils::New("System", "PointerSpec", pointer_level));
}
// Autogenerated method: System.PointerSpec.Resolve
System::Type* System::PointerSpec::Resolve(System::Type* type) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Type*>(this, "Resolve", type));
}
// Autogenerated method: System.PointerSpec.Append
System::Text::StringBuilder* System::PointerSpec::Append(System::Text::StringBuilder* sb) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Text::StringBuilder*>(this, "Append", sb));
}
// Autogenerated method: System.PointerSpec.ToString
::CsString* System::PointerSpec::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "ToString"));
}
