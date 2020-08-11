// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Version/VersionResult
#include "System/Version_VersionResult.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Version/VersionResult.Init
void System::Version::VersionResult::Init(::CsString* argumentName, bool canThrow) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "Init", argumentName, canThrow));
}
// Autogenerated method: System.Version/VersionResult.SetFailure
void System::Version::VersionResult::SetFailure(System::Version::ParseFailureKind failure) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "SetFailure", failure));
}
// Autogenerated method: System.Version/VersionResult.SetFailure
void System::Version::VersionResult::SetFailure(System::Version::ParseFailureKind failure, ::CsString* argument) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "SetFailure", failure, argument));
}
// Autogenerated method: System.Version/VersionResult.GetVersionParseException
System::Exception* System::Version::VersionResult::GetVersionParseException() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Exception*>(*this, "GetVersionParseException"));
}
