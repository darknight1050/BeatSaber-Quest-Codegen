// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.ServerIdentity
#include "System/Runtime/Remoting/ServerIdentity.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: Context
  class Context;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessage
  class IMessage;
  // Forward declaring type: IMessageCtrl
  class IMessageCtrl;
  // Forward declaring type: IMessageSink
  class IMessageSink;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x70
  // Autogenerated type: System.Runtime.Remoting.SingleCallIdentity
  // [] Offset: FFFFFFFF
  class SingleCallIdentity : public System::Runtime::Remoting::ServerIdentity {
    public:
    // Creating value type constructor for type: SingleCallIdentity
    SingleCallIdentity() noexcept {}
    // public System.Void .ctor(System.String objectUri, System.Runtime.Remoting.Contexts.Context context, System.Type objectType)
    // Offset: 0x133A600
    // Implemented from: System.Runtime.Remoting.ServerIdentity
    // Base method: System.Void ServerIdentity::.ctor(System.String objectUri, System.Runtime.Remoting.Contexts.Context context, System.Type objectType)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SingleCallIdentity* New_ctor(::Il2CppString* objectUri, System::Runtime::Remoting::Contexts::Context* context, System::Type* objectType) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::SingleCallIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SingleCallIdentity*, creationType>(objectUri, context, objectType)));
    }
    // public override System.Runtime.Remoting.Messaging.IMessage SyncObjectProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0x133B10C
    // Implemented from: System.Runtime.Remoting.ServerIdentity
    // Base method: System.Runtime.Remoting.Messaging.IMessage ServerIdentity::SyncObjectProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    System::Runtime::Remoting::Messaging::IMessage* SyncObjectProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg);
    // public override System.Runtime.Remoting.Messaging.IMessageCtrl AsyncObjectProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    // Offset: 0x133B320
    // Implemented from: System.Runtime.Remoting.ServerIdentity
    // Base method: System.Runtime.Remoting.Messaging.IMessageCtrl ServerIdentity::AsyncObjectProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncObjectProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg, System::Runtime::Remoting::Messaging::IMessageSink* replySink);
  }; // System.Runtime.Remoting.SingleCallIdentity
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::SingleCallIdentity*, "System.Runtime.Remoting", "SingleCallIdentity");
#pragma pack(pop)
