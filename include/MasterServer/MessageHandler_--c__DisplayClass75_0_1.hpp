// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.MessageHandler
#include "MasterServer/MessageHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: IMasterServerUnreliableMessage
  class IMasterServerUnreliableMessage;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // WARNING Size may be invalid!
  // Autogenerated type: MasterServer.MessageHandler/<>c__DisplayClass75_0`1
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DA9C84
  template<typename T>
  class MessageHandler::$$c__DisplayClass75_0_1 : public ::Il2CppObject {
    public:
    // public MasterServer.MessageHandler <>4__this
    // Size: 0x8
    // Offset: 0x0
    MasterServer::MessageHandler* $$4__this;
    // Field size check
    static_assert(sizeof(MasterServer::MessageHandler*) == 0x8);
    // public System.Action`2<T,MasterServer.MessageHandler/MessageOrigin> customHandler
    // Size: 0x8
    // Offset: 0x0
    System::Action_2<T, MasterServer::MessageHandler::MessageOrigin>* customHandler;
    // Field size check
    static_assert(sizeof(System::Action_2<T, MasterServer::MessageHandler::MessageOrigin>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass75_0_1
    $$c__DisplayClass75_0_1(MasterServer::MessageHandler* $$4__this_ = {}, System::Action_2<T, MasterServer::MessageHandler::MessageOrigin>* customHandler_ = {}) noexcept : $$4__this{$$4__this_}, customHandler{customHandler_} {}
    // System.Void <CustomUnreliableResponseHandler>b__0(T packet, MasterServer.MessageHandler/MessageOrigin origin)
    // Offset: 0xFFFFFFFF
    void $CustomUnreliableResponseHandler$b__0(T packet, MasterServer::MessageHandler::MessageOrigin origin) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$$c__DisplayClass75_0_1::<CustomUnreliableResponseHandler>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<CustomUnreliableResponseHandler>b__0", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(packet, origin))));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, packet, origin);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageHandler::$$c__DisplayClass75_0_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$$c__DisplayClass75_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageHandler::$$c__DisplayClass75_0_1<T>*, creationType>()));
    }
  }; // MasterServer.MessageHandler/<>c__DisplayClass75_0`1
  // Could not write size check! Type: MasterServer.MessageHandler/<>c__DisplayClass75_0`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(MasterServer::MessageHandler::$$c__DisplayClass75_0_1, "MasterServer", "MessageHandler/<>c__DisplayClass75_0`1");
