// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.AmbiguousMatchException
#include "System/Reflection/AmbiguousMatchException.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Reflection.AmbiguousMatchException..ctor
System::Reflection::AmbiguousMatchException* System::Reflection::AmbiguousMatchException::New_ctor() {
  return (AmbiguousMatchException*)THROW_UNLESS(il2cpp_utils::New("System.Reflection", "AmbiguousMatchException"));
}
// Autogenerated method: System.Reflection.AmbiguousMatchException..ctor
System::Reflection::AmbiguousMatchException* System::Reflection::AmbiguousMatchException::New_ctor(::CsString* message) {
  return (AmbiguousMatchException*)THROW_UNLESS(il2cpp_utils::New("System.Reflection", "AmbiguousMatchException", message));
}
// Autogenerated method: System.Reflection.AmbiguousMatchException..ctor
System::Reflection::AmbiguousMatchException* System::Reflection::AmbiguousMatchException::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (AmbiguousMatchException*)THROW_UNLESS(il2cpp_utils::New("System.Reflection", "AmbiguousMatchException", info, context));
}
