// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableRequest
#include "GlobalNamespace/BaseMasterServerReliableRequest.hpp"
// Including type: MasterServer.IHandshakeClientToServerMessage
#include "MasterServer/IHandshakeClientToServerMessage.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ByteArrayNetSerializable
  class ByteArrayNetSerializable;
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.ClientHelloWithCookieRequest
  // [] Offset: FFFFFFFF
  class ClientHelloWithCookieRequest : public GlobalNamespace::BaseMasterServerReliableRequest/*, public MasterServer::IHandshakeClientToServerMessage*/ {
    public:
    // public System.UInt32 certificateResponseId
    // Size: 0x4
    // Offset: 0x14
    uint certificateResponseId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public readonly ByteArrayNetSerializable random
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ByteArrayNetSerializable* random;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // public readonly ByteArrayNetSerializable cookie
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ByteArrayNetSerializable* cookie;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // Creating value type constructor for type: ClientHelloWithCookieRequest
    ClientHelloWithCookieRequest(uint certificateResponseId_ = {}, GlobalNamespace::ByteArrayNetSerializable* random_ = {}, GlobalNamespace::ByteArrayNetSerializable* cookie_ = {}) noexcept : certificateResponseId{certificateResponseId_}, random{random_}, cookie{cookie_} {}
    // Creating interface conversion operator: operator MasterServer::IHandshakeClientToServerMessage
    operator MasterServer::IHandshakeClientToServerMessage() noexcept {
      return *reinterpret_cast<MasterServer::IHandshakeClientToServerMessage*>(this);
    }
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // static public PacketPool`1<MasterServer.ClientHelloWithCookieRequest> get_pool()
    // Offset: 0x12848B8
    static GlobalNamespace::PacketPool_1<MasterServer::ClientHelloWithCookieRequest*>* get_pool();
    // public MasterServer.ClientHelloWithCookieRequest Init(System.UInt32 certificateResponseId, System.Byte[] random, System.Byte[] cookie)
    // Offset: 0x1284900
    MasterServer::ClientHelloWithCookieRequest* Init(uint certificateResponseId, ::Array<uint8_t>* random, ::Array<uint8_t>* cookie);
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1284954
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Serialize_NEW(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x12849B8
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Deserialize_NEW(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x1284A20
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Release_NEW()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x1284A9C
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClientHelloWithCookieRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::ClientHelloWithCookieRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClientHelloWithCookieRequest*, creationType>()));
    }
  }; // MasterServer.ClientHelloWithCookieRequest
  #pragma pack(pop)
  static check_size<sizeof(ClientHelloWithCookieRequest), 32 + sizeof(GlobalNamespace::ByteArrayNetSerializable*)> __MasterServer_ClientHelloWithCookieRequestSizeCheck;
  static_assert(sizeof(ClientHelloWithCookieRequest) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::ClientHelloWithCookieRequest*, "MasterServer", "ClientHelloWithCookieRequest");
