// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.BaseMasterServerMultipartMessage
#include "MasterServer/BaseMasterServerMultipartMessage.hpp"
// Including type: MasterServer.IHandshakeMessage
#include "MasterServer/IHandshakeMessage.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x30
  // Autogenerated type: MasterServer.HandshakeMultipartMessage
  // [] Offset: FFFFFFFF
  class HandshakeMultipartMessage : public MasterServer::BaseMasterServerMultipartMessage/*, public MasterServer::IHandshakeMessage*/ {
    public:
    // Creating value type constructor for type: HandshakeMultipartMessage
    HandshakeMultipartMessage() noexcept {}
    // Creating interface conversion operator: operator MasterServer::IHandshakeMessage
    operator MasterServer::IHandshakeMessage() noexcept {
      return *reinterpret_cast<MasterServer::IHandshakeMessage*>(this);
    }
    // static public PacketPool`1<MasterServer.HandshakeMultipartMessage> get_pool()
    // Offset: 0x1AD70E8
    static GlobalNamespace::PacketPool_1<MasterServer::HandshakeMultipartMessage*>* get_pool();
    // public override System.Void Release()
    // Offset: 0x1AD7130
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x1AD718C
    // Implemented from: MasterServer.BaseMasterServerMultipartMessage
    // Base method: System.Void BaseMasterServerMultipartMessage::.ctor()
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandshakeMultipartMessage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::HandshakeMultipartMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandshakeMultipartMessage*, creationType>()));
    }
  }; // MasterServer.HandshakeMultipartMessage
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::HandshakeMultipartMessage*, "MasterServer", "HandshakeMultipartMessage");
#pragma pack(pop)
