// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.SerializationException
#include "System/Runtime/Serialization/SerializationException.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.String _nullMessage
::CsString* System::Runtime::Serialization::SerializationException::_get__nullMessage() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::CsString*>("System.Runtime.Serialization", "SerializationException", "_nullMessage"));
}
// Autogenerated static field setter
// Set static field: static private System.String _nullMessage
void System::Runtime::Serialization::SerializationException::_set__nullMessage(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.Serialization", "SerializationException", "_nullMessage", value));
}
// Autogenerated method: System.Runtime.Serialization.SerializationException..ctor
System::Runtime::Serialization::SerializationException* System::Runtime::Serialization::SerializationException::New_ctor() {
  return (SerializationException*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Serialization", "SerializationException"));
}
// Autogenerated method: System.Runtime.Serialization.SerializationException..ctor
System::Runtime::Serialization::SerializationException* System::Runtime::Serialization::SerializationException::New_ctor(::CsString* message) {
  return (SerializationException*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Serialization", "SerializationException", message));
}
// Autogenerated method: System.Runtime.Serialization.SerializationException..ctor
System::Runtime::Serialization::SerializationException* System::Runtime::Serialization::SerializationException::New_ctor(::CsString* message, System::Exception* innerException) {
  return (SerializationException*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Serialization", "SerializationException", message, innerException));
}
// Autogenerated method: System.Runtime.Serialization.SerializationException..ctor
System::Runtime::Serialization::SerializationException* System::Runtime::Serialization::SerializationException::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (SerializationException*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Serialization", "SerializationException", info, context));
}
// Autogenerated method: System.Runtime.Serialization.SerializationException..cctor
void System::Runtime::Serialization::SerializationException::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.Serialization", "SerializationException", ".cctor"));
}
