// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.InvalidTimeZoneException
#include "System/InvalidTimeZoneException.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.InvalidTimeZoneException..ctor
System::InvalidTimeZoneException* System::InvalidTimeZoneException::New_ctor(::CsString* message) {
  return (InvalidTimeZoneException*)THROW_UNLESS(il2cpp_utils::New("System", "InvalidTimeZoneException", message));
}
// Autogenerated method: System.InvalidTimeZoneException..ctor
System::InvalidTimeZoneException* System::InvalidTimeZoneException::New_ctor(::CsString* message, System::Exception* innerException) {
  return (InvalidTimeZoneException*)THROW_UNLESS(il2cpp_utils::New("System", "InvalidTimeZoneException", message, innerException));
}
// Autogenerated method: System.InvalidTimeZoneException..ctor
System::InvalidTimeZoneException* System::InvalidTimeZoneException::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (InvalidTimeZoneException*)THROW_UNLESS(il2cpp_utils::New("System", "InvalidTimeZoneException", info, context));
}
// Autogenerated method: System.InvalidTimeZoneException..ctor
System::InvalidTimeZoneException* System::InvalidTimeZoneException::New_ctor() {
  return (InvalidTimeZoneException*)THROW_UNLESS(il2cpp_utils::New("System", "InvalidTimeZoneException"));
}
