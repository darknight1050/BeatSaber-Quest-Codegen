// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: MasterServer.IUserMessage
#include "MasterServer/IUserMessage.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.IUserClientToServerMessage
  // [] Offset: FFFFFFFF
  class IUserClientToServerMessage/*, public MasterServer::IUserMessage*/ {
    public:
    // Creating value type constructor for type: IUserClientToServerMessage
    IUserClientToServerMessage() noexcept {}
    // Creating interface conversion operator: operator MasterServer::IUserMessage
    operator MasterServer::IUserMessage() noexcept {
      return *reinterpret_cast<MasterServer::IUserMessage*>(this);
    }
    // public System.String get_userId()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_userId_NEW();
    // public System.String get_userName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_userName_NEW();
  }; // MasterServer.IUserClientToServerMessage
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::IUserClientToServerMessage*, "MasterServer", "IUserClientToServerMessage");
