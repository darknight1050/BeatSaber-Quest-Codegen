// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Runtime.Remoting.Messaging.MethodResponse
#include "System/Runtime/Remoting/Messaging/MethodResponse.hpp"
// Including type: System.Runtime.Remoting.Activation.IConstructionReturnMessage
#include "System/Runtime/Remoting/Activation/IConstructionReturnMessage.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: LogicalCallContext
  class LogicalCallContext;
  // Forward declaring type: IMethodCallMessage
  class IMethodCallMessage;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Autogenerated type: System.Runtime.Remoting.Messaging.ConstructionResponse
  class ConstructionResponse : public System::Runtime::Remoting::Messaging::MethodResponse, public System::Runtime::Remoting::Activation::IConstructionReturnMessage, public System::Runtime::Remoting::Messaging::IMethodReturnMessage, public System::Runtime::Remoting::Messaging::IMethodMessage, public System::Runtime::Remoting::Messaging::IMessage {
    public:
    // System.Void .ctor(System.Object resultObject, System.Runtime.Remoting.Messaging.LogicalCallContext callCtx, System.Runtime.Remoting.Messaging.IMethodCallMessage msg)
    // Offset: 0x103DCE4
    static ConstructionResponse* New_ctor(::CsObject* resultObject, System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx, System::Runtime::Remoting::Messaging::IMethodCallMessage* msg);
    // System.Void .ctor(System.Exception e, System.Runtime.Remoting.Messaging.IMethodCallMessage msg)
    // Offset: 0x103E34C
    // Implemented from: System.Runtime.Remoting.Messaging.MethodResponse
    // Base method: System.Void MethodResponse::.ctor(System.Exception e, System.Runtime.Remoting.Messaging.IMethodCallMessage msg)
    static ConstructionResponse* New_ctor(System::Exception* e, System::Runtime::Remoting::Messaging::IMethodCallMessage* msg);
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1053BF4
    // Implemented from: System.Runtime.Remoting.Messaging.MethodResponse
    // Base method: System.Void MethodResponse::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    static ConstructionResponse* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.Collections.IDictionary get_Properties()
    // Offset: 0x1053C74
    // Implemented from: System.Runtime.Remoting.Messaging.MethodResponse
    // Base method: System.Collections.IDictionary MethodResponse::get_Properties()
    System::Collections::IDictionary* get_Properties();
  }; // System.Runtime.Remoting.Messaging.ConstructionResponse
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::ConstructionResponse*, "System.Runtime.Remoting.Messaging", "ConstructionResponse");
#pragma pack(pop)
