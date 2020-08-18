// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Autogenerated type: System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
  class EnvoyTerminatorSink : public System::Runtime::Remoting::Messaging::IMessageSink, public ::Il2CppObject {
    public:
    // Get static field: static public System.Runtime.Remoting.Messaging.EnvoyTerminatorSink Instance
    static System::Runtime::Remoting::Messaging::EnvoyTerminatorSink* _get_Instance();
    // Set static field: static public System.Runtime.Remoting.Messaging.EnvoyTerminatorSink Instance
    static void _set_Instance(System::Runtime::Remoting::Messaging::EnvoyTerminatorSink* value);
    // static private System.Void .cctor()
    // Offset: 0xFC5BC8
    static void _cctor();
    // public System.Runtime.Remoting.Messaging.IMessage SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0xFC5A24
    // Implemented from: System.Runtime.Remoting.Messaging.IMessageSink
    // Base method: System.Runtime.Remoting.Messaging.IMessage IMessageSink::SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg);
    // public System.Runtime.Remoting.Messaging.IMessageCtrl AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    // Offset: 0xFC5AE8
    // Implemented from: System.Runtime.Remoting.Messaging.IMessageSink
    // Base method: System.Runtime.Remoting.Messaging.IMessageCtrl IMessageSink::AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg, System::Runtime::Remoting::Messaging::IMessageSink* replySink);
    // public System.Void .ctor()
    // Offset: 0xFC5BC0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static EnvoyTerminatorSink* New_ctor();
  }; // System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::EnvoyTerminatorSink*, "System.Runtime.Remoting.Messaging", "EnvoyTerminatorSink");
#pragma pack(pop)
