// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.IMessageSink
#include "System/Runtime/Remoting/Messaging/IMessageSink.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x10
  // Autogenerated type: System.Runtime.Remoting.Messaging.ServerContextTerminatorSink
  // [] Offset: FFFFFFFF
  class ServerContextTerminatorSink : public ::Il2CppObject/*, public System::Runtime::Remoting::Messaging::IMessageSink*/ {
    public:
    // Creating value type constructor for type: ServerContextTerminatorSink
    ServerContextTerminatorSink() noexcept {}
    // Creating interface conversion operator: operator System::Runtime::Remoting::Messaging::IMessageSink
    operator System::Runtime::Remoting::Messaging::IMessageSink() noexcept {
      return *reinterpret_cast<System::Runtime::Remoting::Messaging::IMessageSink*>(this);
    }
    // public System.Runtime.Remoting.Messaging.IMessage SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0x132E7B4
    // Implemented from: System.Runtime.Remoting.Messaging.IMessageSink
    // Base method: System.Runtime.Remoting.Messaging.IMessage IMessageSink::SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg);
    // public System.Runtime.Remoting.Messaging.IMessageCtrl AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    // Offset: 0x132EBF8
    // Implemented from: System.Runtime.Remoting.Messaging.IMessageSink
    // Base method: System.Runtime.Remoting.Messaging.IMessageCtrl IMessageSink::AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg, System::Runtime::Remoting::Messaging::IMessageSink* replySink);
    // public System.Void .ctor()
    // Offset: 0x132ECE0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ServerContextTerminatorSink* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::ServerContextTerminatorSink::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ServerContextTerminatorSink*, creationType>()));
    }
  }; // System.Runtime.Remoting.Messaging.ServerContextTerminatorSink
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::ServerContextTerminatorSink*, "System.Runtime.Remoting.Messaging", "ServerContextTerminatorSink");
#pragma pack(pop)
