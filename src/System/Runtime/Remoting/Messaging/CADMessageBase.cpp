// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.CADMessageBase
#include "System/Runtime/Remoting/Messaging/CADMessageBase.hpp"
// Including type: System.Runtime.Remoting.Messaging.CADArgHolder
#include "System/Runtime/Remoting/Messaging/CADArgHolder.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMethodMessage
#include "System/Runtime/Remoting/Messaging/IMethodMessage.hpp"
// Including type: System.Reflection.MethodBase
#include "System/Reflection/MethodBase.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Collections.IDictionary
#include "System/Collections/IDictionary.hpp"
// Including type: System.Collections.ArrayList
#include "System/Collections/ArrayList.hpp"
// Including type: System.Runtime.Remoting.Messaging.LogicalCallContext
#include "System/Runtime/Remoting/Messaging/LogicalCallContext.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Remoting.Messaging.CADMessageBase..ctor
System::Runtime::Remoting::Messaging::CADMessageBase* System::Runtime::Remoting::Messaging::CADMessageBase::New_ctor(System::Runtime::Remoting::Messaging::IMethodMessage* msg) {
  return (CADMessageBase*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Remoting.Messaging", "CADMessageBase", msg));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.CADMessageBase.GetMethod
System::Reflection::MethodBase* System::Runtime::Remoting::Messaging::CADMessageBase::GetMethod() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodBase*>(this, "GetMethod"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.CADMessageBase.GetSignature
::Array<System::Type*>* System::Runtime::Remoting::Messaging::CADMessageBase::GetSignature(System::Reflection::MethodBase* methodBase, bool load) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<System::Type*>*>("System.Runtime.Remoting.Messaging", "CADMessageBase", "GetSignature", methodBase, load));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.CADMessageBase.MarshalProperties
int System::Runtime::Remoting::Messaging::CADMessageBase::MarshalProperties(System::Collections::IDictionary* dict, System::Collections::ArrayList*& args) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Runtime.Remoting.Messaging", "CADMessageBase", "MarshalProperties", dict, args));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.CADMessageBase.UnmarshalProperties
void System::Runtime::Remoting::Messaging::CADMessageBase::UnmarshalProperties(System::Collections::IDictionary* dict, int count, System::Collections::ArrayList* args) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.Remoting.Messaging", "CADMessageBase", "UnmarshalProperties", dict, count, args));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.CADMessageBase.IsPossibleToIgnoreMarshal
bool System::Runtime::Remoting::Messaging::CADMessageBase::IsPossibleToIgnoreMarshal(::CsObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Runtime.Remoting.Messaging", "CADMessageBase", "IsPossibleToIgnoreMarshal", obj));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.CADMessageBase.MarshalArgument
::CsObject* System::Runtime::Remoting::Messaging::CADMessageBase::MarshalArgument(::CsObject* arg, System::Collections::ArrayList*& args) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "MarshalArgument", arg, args));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.CADMessageBase.UnmarshalArgument
::CsObject* System::Runtime::Remoting::Messaging::CADMessageBase::UnmarshalArgument(::CsObject* arg, System::Collections::ArrayList* args) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "UnmarshalArgument", arg, args));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.CADMessageBase.MarshalArguments
::Array<::CsObject*>* System::Runtime::Remoting::Messaging::CADMessageBase::MarshalArguments(::Array<::CsObject*>* arguments, System::Collections::ArrayList*& args) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsObject*>*>(this, "MarshalArguments", arguments, args));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.CADMessageBase.UnmarshalArguments
::Array<::CsObject*>* System::Runtime::Remoting::Messaging::CADMessageBase::UnmarshalArguments(::Array<::CsObject*>* arguments, System::Collections::ArrayList* args) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsObject*>*>(this, "UnmarshalArguments", arguments, args));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.CADMessageBase.SaveLogicalCallContext
void System::Runtime::Remoting::Messaging::CADMessageBase::SaveLogicalCallContext(System::Runtime::Remoting::Messaging::IMethodMessage* msg, System::Collections::ArrayList*& serializeList) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SaveLogicalCallContext", msg, serializeList));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.CADMessageBase.GetLogicalCallContext
System::Runtime::Remoting::Messaging::LogicalCallContext* System::Runtime::Remoting::Messaging::CADMessageBase::GetLogicalCallContext(System::Collections::ArrayList* args) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::LogicalCallContext*>(this, "GetLogicalCallContext", args));
}
