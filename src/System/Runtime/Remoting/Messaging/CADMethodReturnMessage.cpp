// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.CADMethodReturnMessage
#include "System/Runtime/Remoting/Messaging/CADMethodReturnMessage.hpp"
// Including type: System.Runtime.Remoting.Messaging.CADArgHolder
#include "System/Runtime/Remoting/Messaging/CADArgHolder.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMessage
#include "System/Runtime/Remoting/Messaging/IMessage.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMethodReturnMessage
#include "System/Runtime/Remoting/Messaging/IMethodReturnMessage.hpp"
// Including type: System.Collections.ArrayList
#include "System/Collections/ArrayList.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Remoting.Messaging.CADMethodReturnMessage.Create
System::Runtime::Remoting::Messaging::CADMethodReturnMessage* System::Runtime::Remoting::Messaging::CADMethodReturnMessage::Create(System::Runtime::Remoting::Messaging::IMessage* callMsg) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>("System.Runtime.Remoting.Messaging", "CADMethodReturnMessage", "Create", callMsg));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.CADMethodReturnMessage..ctor
System::Runtime::Remoting::Messaging::CADMethodReturnMessage* System::Runtime::Remoting::Messaging::CADMethodReturnMessage::New_ctor(System::Runtime::Remoting::Messaging::IMethodReturnMessage* retMsg) {
  return (CADMethodReturnMessage*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Remoting.Messaging", "CADMethodReturnMessage", retMsg));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.CADMethodReturnMessage.GetArguments
System::Collections::ArrayList* System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetArguments() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::ArrayList*>(this, "GetArguments"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.CADMethodReturnMessage.GetArgs
::Array<::CsObject*>* System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetArgs(System::Collections::ArrayList* args) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsObject*>*>(this, "GetArgs", args));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.CADMethodReturnMessage.GetReturnValue
::CsObject* System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetReturnValue(System::Collections::ArrayList* args) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "GetReturnValue", args));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.CADMethodReturnMessage.GetException
System::Exception* System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetException(System::Collections::ArrayList* args) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Exception*>(this, "GetException", args));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.CADMethodReturnMessage.get_PropertiesCount
int System::Runtime::Remoting::Messaging::CADMethodReturnMessage::get_PropertiesCount() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_PropertiesCount"));
}
