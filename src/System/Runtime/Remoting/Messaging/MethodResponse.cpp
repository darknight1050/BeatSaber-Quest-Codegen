// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.MethodResponse
#include "System/Runtime/Remoting/Messaging/MethodResponse.hpp"
// Including type: System.Reflection.MethodBase
#include "System/Reflection/MethodBase.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Runtime.Remoting.Messaging.ArgInfo
#include "System/Runtime/Remoting/Messaging/ArgInfo.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMethodCallMessage
#include "System/Runtime/Remoting/Messaging/IMethodCallMessage.hpp"
// Including type: System.Runtime.Remoting.Messaging.LogicalCallContext
#include "System/Runtime/Remoting/Messaging/LogicalCallContext.hpp"
// Including type: System.Runtime.Remoting.Identity
#include "System/Runtime/Remoting/Identity.hpp"
// Including type: System.Collections.IDictionary
#include "System/Collections/IDictionary.hpp"
// Including type: System.Runtime.Remoting.Messaging.CADMethodReturnMessage
#include "System/Runtime/Remoting/Messaging/CADMethodReturnMessage.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Remoting.Messaging.MethodResponse..ctor
System::Runtime::Remoting::Messaging::MethodResponse* System::Runtime::Remoting::Messaging::MethodResponse::New_ctor(System::Exception* e, System::Runtime::Remoting::Messaging::IMethodCallMessage* msg) {
  return (MethodResponse*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Remoting.Messaging", "MethodResponse", e, msg));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MethodResponse..ctor
System::Runtime::Remoting::Messaging::MethodResponse* System::Runtime::Remoting::Messaging::MethodResponse::New_ctor(::CsObject* returnValue, ::Array<::CsObject*>* outArgs, System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx, System::Runtime::Remoting::Messaging::IMethodCallMessage* msg) {
  return (MethodResponse*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Remoting.Messaging", "MethodResponse", returnValue, outArgs, callCtx, msg));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MethodResponse..ctor
System::Runtime::Remoting::Messaging::MethodResponse* System::Runtime::Remoting::Messaging::MethodResponse::New_ctor(System::Runtime::Remoting::Messaging::IMethodCallMessage* msg, System::Runtime::Remoting::Messaging::CADMethodReturnMessage* retmsg) {
  return (MethodResponse*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Remoting.Messaging", "MethodResponse", msg, retmsg));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MethodResponse..ctor
System::Runtime::Remoting::Messaging::MethodResponse* System::Runtime::Remoting::Messaging::MethodResponse::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (MethodResponse*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Remoting.Messaging", "MethodResponse", info, context));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MethodResponse.InitMethodProperty
void System::Runtime::Remoting::Messaging::MethodResponse::InitMethodProperty(::CsString* key, ::CsObject* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InitMethodProperty", key, value));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MethodResponse.set_Uri
void System::Runtime::Remoting::Messaging::MethodResponse::set_Uri(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Uri", value));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MethodResponse.get_ArgCount
int System::Runtime::Remoting::Messaging::MethodResponse::get_ArgCount() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_ArgCount"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MethodResponse.get_Args
::Array<::CsObject*>* System::Runtime::Remoting::Messaging::MethodResponse::get_Args() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsObject*>*>(this, "get_Args"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MethodResponse.get_Exception
System::Exception* System::Runtime::Remoting::Messaging::MethodResponse::get_Exception() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Exception*>(this, "get_Exception"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MethodResponse.get_LogicalCallContext
System::Runtime::Remoting::Messaging::LogicalCallContext* System::Runtime::Remoting::Messaging::MethodResponse::get_LogicalCallContext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::LogicalCallContext*>(this, "get_LogicalCallContext"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MethodResponse.get_MethodBase
System::Reflection::MethodBase* System::Runtime::Remoting::Messaging::MethodResponse::get_MethodBase() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodBase*>(this, "get_MethodBase"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MethodResponse.get_MethodName
::CsString* System::Runtime::Remoting::Messaging::MethodResponse::get_MethodName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_MethodName"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MethodResponse.get_MethodSignature
::CsObject* System::Runtime::Remoting::Messaging::MethodResponse::get_MethodSignature() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "get_MethodSignature"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MethodResponse.get_OutArgs
::Array<::CsObject*>* System::Runtime::Remoting::Messaging::MethodResponse::get_OutArgs() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsObject*>*>(this, "get_OutArgs"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MethodResponse.get_Properties
System::Collections::IDictionary* System::Runtime::Remoting::Messaging::MethodResponse::get_Properties() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IDictionary*>(this, "get_Properties"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MethodResponse.get_ReturnValue
::CsObject* System::Runtime::Remoting::Messaging::MethodResponse::get_ReturnValue() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "get_ReturnValue"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MethodResponse.get_TypeName
::CsString* System::Runtime::Remoting::Messaging::MethodResponse::get_TypeName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_TypeName"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MethodResponse.get_Uri
::CsString* System::Runtime::Remoting::Messaging::MethodResponse::get_Uri() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_Uri"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MethodResponse.System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri
::CsString* System::Runtime::Remoting::Messaging::MethodResponse::System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MethodResponse.System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri
void System::Runtime::Remoting::Messaging::MethodResponse::System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri", value));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MethodResponse.GetArg
::CsObject* System::Runtime::Remoting::Messaging::MethodResponse::GetArg(int argNum) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "GetArg", argNum));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MethodResponse.GetObjectData
void System::Runtime::Remoting::Messaging::MethodResponse::GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetObjectData", info, context));
}
void System::Runtime::Remoting::Messaging::MethodResponse::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  GetObjectData(info, context);
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MethodResponse.System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity
System::Runtime::Remoting::Identity* System::Runtime::Remoting::Messaging::MethodResponse::System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Identity*>(this, "System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MethodResponse.System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity
void System::Runtime::Remoting::Messaging::MethodResponse::System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(System::Runtime::Remoting::Identity* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity", value));
}
