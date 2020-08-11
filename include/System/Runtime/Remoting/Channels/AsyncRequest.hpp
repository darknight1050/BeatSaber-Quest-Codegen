// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessageSink
  class IMessageSink;
  // Forward declaring type: IMessage
  class IMessage;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Remoting.Channels
namespace System::Runtime::Remoting::Channels {
  // Autogenerated type: System.Runtime.Remoting.Channels.AsyncRequest
  class AsyncRequest : public ::CsObject {
    public:
    // System.Runtime.Remoting.Messaging.IMessageSink ReplySink
    // Offset: 0x10
    System::Runtime::Remoting::Messaging::IMessageSink* ReplySink;
    // System.Runtime.Remoting.Messaging.IMessage MsgRequest
    // Offset: 0x18
    System::Runtime::Remoting::Messaging::IMessage* MsgRequest;
    // public System.Void .ctor(System.Runtime.Remoting.Messaging.IMessage msgRequest, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    // Offset: 0x10400DC
    static AsyncRequest* New_ctor(System::Runtime::Remoting::Messaging::IMessage* msgRequest, System::Runtime::Remoting::Messaging::IMessageSink* replySink);
  }; // System.Runtime.Remoting.Channels.AsyncRequest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Channels::AsyncRequest*, "System.Runtime.Remoting.Channels", "AsyncRequest");
#pragma pack(pop)
