// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMessageSink
#include "System/Runtime/Remoting/Messaging/IMessageSink.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessage
  class IMessage;
  // Forward declaring type: IMessageCtrl
  class IMessageCtrl;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Remoting.Lifetime
namespace System::Runtime::Remoting::Lifetime {
  // Autogenerated type: System.Runtime.Remoting.Lifetime.LeaseSink
  class LeaseSink : public ::CsObject, public System::Runtime::Remoting::Messaging::IMessageSink {
    public:
    // private System.Runtime.Remoting.Messaging.IMessageSink _nextSink
    // Offset: 0x10
    System::Runtime::Remoting::Messaging::IMessageSink* nextSink;
    // public System.Void .ctor(System.Runtime.Remoting.Messaging.IMessageSink nextSink)
    // Offset: 0x1049E8C
    static LeaseSink* New_ctor(System::Runtime::Remoting::Messaging::IMessageSink* nextSink);
    // private System.Void RenewLease(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0x104CFC4
    void RenewLease(System::Runtime::Remoting::Messaging::IMessage* msg);
    // public System.Runtime.Remoting.Messaging.IMessage SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0x104CEFC
    // Implemented from: System.Runtime.Remoting.Messaging.IMessageSink
    // Base method: System.Runtime.Remoting.Messaging.IMessage IMessageSink::SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg);
    // public System.Runtime.Remoting.Messaging.IMessageCtrl AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    // Offset: 0x104D268
    // Implemented from: System.Runtime.Remoting.Messaging.IMessageSink
    // Base method: System.Runtime.Remoting.Messaging.IMessageCtrl IMessageSink::AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg, System::Runtime::Remoting::Messaging::IMessageSink* replySink);
  }; // System.Runtime.Remoting.Lifetime.LeaseSink
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Lifetime::LeaseSink*, "System.Runtime.Remoting.Lifetime", "LeaseSink");
#pragma pack(pop)
