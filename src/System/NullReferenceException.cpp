// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.NullReferenceException
#include "System/NullReferenceException.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.NullReferenceException..ctor
System::NullReferenceException* System::NullReferenceException::New_ctor() {
  return (NullReferenceException*)THROW_UNLESS(il2cpp_utils::New("System", "NullReferenceException"));
}
// Autogenerated method: System.NullReferenceException..ctor
System::NullReferenceException* System::NullReferenceException::New_ctor(::CsString* message) {
  return (NullReferenceException*)THROW_UNLESS(il2cpp_utils::New("System", "NullReferenceException", message));
}
// Autogenerated method: System.NullReferenceException..ctor
System::NullReferenceException* System::NullReferenceException::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (NullReferenceException*)THROW_UNLESS(il2cpp_utils::New("System", "NullReferenceException", info, context));
}
