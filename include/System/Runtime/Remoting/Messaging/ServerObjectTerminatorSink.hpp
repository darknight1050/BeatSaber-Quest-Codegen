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
  // Size: 0x18
  // Autogenerated type: System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink
  // [] Offset: FFFFFFFF
  class ServerObjectTerminatorSink : public ::Il2CppObject/*, public System::Runtime::Remoting::Messaging::IMessageSink*/ {
    public:
    // private System.Runtime.Remoting.Messaging.IMessageSink _nextSink
    // Size: 0x8
    // Offset: 0x10
    System::Runtime::Remoting::Messaging::IMessageSink* nextSink;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::IMessageSink*) == 0x8);
    // Creating value type constructor for type: ServerObjectTerminatorSink
    ServerObjectTerminatorSink(System::Runtime::Remoting::Messaging::IMessageSink* nextSink_ = {}) noexcept : nextSink{nextSink_} {}
    // Creating interface conversion operator: operator System::Runtime::Remoting::Messaging::IMessageSink
    operator System::Runtime::Remoting::Messaging::IMessageSink() noexcept {
      return *reinterpret_cast<System::Runtime::Remoting::Messaging::IMessageSink*>(this);
    }
    // Creating conversion operator: operator System::Runtime::Remoting::Messaging::IMessageSink*
    constexpr operator System::Runtime::Remoting::Messaging::IMessageSink*() const noexcept {
      return nextSink;
    }
    // public System.Void .ctor(System.Runtime.Remoting.Messaging.IMessageSink nextSink)
    // Offset: 0x132EE78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ServerObjectTerminatorSink* New_ctor(System::Runtime::Remoting::Messaging::IMessageSink* nextSink) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ServerObjectTerminatorSink*, creationType>(nextSink)));
    }
    // public System.Runtime.Remoting.Messaging.IMessage SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0x132EEAC
    // Implemented from: System.Runtime.Remoting.Messaging.IMessageSink
    // Base method: System.Runtime.Remoting.Messaging.IMessage IMessageSink::SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg);
    // public System.Runtime.Remoting.Messaging.IMessageCtrl AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    // Offset: 0x132F01C
    // Implemented from: System.Runtime.Remoting.Messaging.IMessageSink
    // Base method: System.Runtime.Remoting.Messaging.IMessageCtrl IMessageSink::AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg, System::Runtime::Remoting::Messaging::IMessageSink* replySink);
  }; // System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink
  static check_size<sizeof(ServerObjectTerminatorSink), 16 + sizeof(System::Runtime::Remoting::Messaging::IMessageSink*)> __System_Runtime_Remoting_Messaging_ServerObjectTerminatorSinkSizeCheck;
  static_assert(sizeof(ServerObjectTerminatorSink) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink*, "System.Runtime.Remoting.Messaging", "ServerObjectTerminatorSink");
#pragma pack(pop)
