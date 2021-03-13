// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableResponse
#include "GlobalNamespace/BaseMasterServerReliableResponse.hpp"
// Including type: MasterServer.IUserServerToClientMessage
#include "MasterServer/IUserServerToClientMessage.hpp"
// Including type: DiscoveryPolicy
#include "GlobalNamespace/DiscoveryPolicy.hpp"
// Including type: InvitePolicy
#include "GlobalNamespace/InvitePolicy.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ByteArrayNetSerializable
  class ByteArrayNetSerializable;
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
}
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Skipping declaration: Result because it is already included!
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
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.ConnectToServerResponse
  // [] Offset: FFFFFFFF
  class ConnectToServerResponse : public GlobalNamespace::BaseMasterServerReliableResponse/*, public MasterServer::IUserServerToClientMessage*/ {
    public:
    // Nested type: MasterServer::ConnectToServerResponse::Result
    struct Result;
    // Size: 0x1
    #pragma pack(push, 1)
    // Autogenerated type: MasterServer.ConnectToServerResponse/Result
    // [] Offset: FFFFFFFF
    struct Result/*, public System::Enum*/ {
      public:
      // public System.Byte value__
      // Size: 0x1
      // Offset: 0x0
      uint8_t value;
      // Field size check
      static_assert(sizeof(uint8_t) == 0x1);
      // Creating value type constructor for type: Result
      constexpr Result(uint8_t value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator uint8_t
      constexpr operator uint8_t() const noexcept {
        return value;
      }
      // static field const value: static public MasterServer.ConnectToServerResponse/Result Success
      static constexpr const uint8_t Success = 0u;
      // Get static field: static public MasterServer.ConnectToServerResponse/Result Success
      static MasterServer::ConnectToServerResponse::Result _get_Success();
      // Set static field: static public MasterServer.ConnectToServerResponse/Result Success
      static void _set_Success(MasterServer::ConnectToServerResponse::Result value);
      // static field const value: static public MasterServer.ConnectToServerResponse/Result InvalidSecret
      static constexpr const uint8_t InvalidSecret = 1u;
      // Get static field: static public MasterServer.ConnectToServerResponse/Result InvalidSecret
      static MasterServer::ConnectToServerResponse::Result _get_InvalidSecret();
      // Set static field: static public MasterServer.ConnectToServerResponse/Result InvalidSecret
      static void _set_InvalidSecret(MasterServer::ConnectToServerResponse::Result value);
      // static field const value: static public MasterServer.ConnectToServerResponse/Result InvalidCode
      static constexpr const uint8_t InvalidCode = 2u;
      // Get static field: static public MasterServer.ConnectToServerResponse/Result InvalidCode
      static MasterServer::ConnectToServerResponse::Result _get_InvalidCode();
      // Set static field: static public MasterServer.ConnectToServerResponse/Result InvalidCode
      static void _set_InvalidCode(MasterServer::ConnectToServerResponse::Result value);
      // static field const value: static public MasterServer.ConnectToServerResponse/Result InvalidPassword
      static constexpr const uint8_t InvalidPassword = 3u;
      // Get static field: static public MasterServer.ConnectToServerResponse/Result InvalidPassword
      static MasterServer::ConnectToServerResponse::Result _get_InvalidPassword();
      // Set static field: static public MasterServer.ConnectToServerResponse/Result InvalidPassword
      static void _set_InvalidPassword(MasterServer::ConnectToServerResponse::Result value);
      // static field const value: static public MasterServer.ConnectToServerResponse/Result ServerAtCapacity
      static constexpr const uint8_t ServerAtCapacity = 4u;
      // Get static field: static public MasterServer.ConnectToServerResponse/Result ServerAtCapacity
      static MasterServer::ConnectToServerResponse::Result _get_ServerAtCapacity();
      // Set static field: static public MasterServer.ConnectToServerResponse/Result ServerAtCapacity
      static void _set_ServerAtCapacity(MasterServer::ConnectToServerResponse::Result value);
      // static field const value: static public MasterServer.ConnectToServerResponse/Result NoAvailableDedicatedServers
      static constexpr const uint8_t NoAvailableDedicatedServers = 5u;
      // Get static field: static public MasterServer.ConnectToServerResponse/Result NoAvailableDedicatedServers
      static MasterServer::ConnectToServerResponse::Result _get_NoAvailableDedicatedServers();
      // Set static field: static public MasterServer.ConnectToServerResponse/Result NoAvailableDedicatedServers
      static void _set_NoAvailableDedicatedServers(MasterServer::ConnectToServerResponse::Result value);
      // static field const value: static public MasterServer.ConnectToServerResponse/Result VersionMismatch
      static constexpr const uint8_t VersionMismatch = 6u;
      // Get static field: static public MasterServer.ConnectToServerResponse/Result VersionMismatch
      static MasterServer::ConnectToServerResponse::Result _get_VersionMismatch();
      // Set static field: static public MasterServer.ConnectToServerResponse/Result VersionMismatch
      static void _set_VersionMismatch(MasterServer::ConnectToServerResponse::Result value);
      // static field const value: static public MasterServer.ConnectToServerResponse/Result ConfigMismatch
      static constexpr const uint8_t ConfigMismatch = 7u;
      // Get static field: static public MasterServer.ConnectToServerResponse/Result ConfigMismatch
      static MasterServer::ConnectToServerResponse::Result _get_ConfigMismatch();
      // Set static field: static public MasterServer.ConnectToServerResponse/Result ConfigMismatch
      static void _set_ConfigMismatch(MasterServer::ConnectToServerResponse::Result value);
      // static field const value: static public MasterServer.ConnectToServerResponse/Result UnknownError
      static constexpr const uint8_t UnknownError = 8u;
      // Get static field: static public MasterServer.ConnectToServerResponse/Result UnknownError
      static MasterServer::ConnectToServerResponse::Result _get_UnknownError();
      // Set static field: static public MasterServer.ConnectToServerResponse/Result UnknownError
      static void _set_UnknownError(MasterServer::ConnectToServerResponse::Result value);
    }; // MasterServer.ConnectToServerResponse/Result
    #pragma pack(pop)
    static check_size<sizeof(ConnectToServerResponse::Result), 0 + sizeof(uint8_t)> __MasterServer_ConnectToServerResponse_ResultSizeCheck;
    static_assert(sizeof(ConnectToServerResponse::Result) == 0x1);
    // public MasterServer.ConnectToServerResponse/Result result
    // Size: 0x1
    // Offset: 0x18
    MasterServer::ConnectToServerResponse::Result result;
    // Field size check
    static_assert(sizeof(MasterServer::ConnectToServerResponse::Result) == 0x1);
    // Padding between fields: result and: userId
    char __padding0[0x7] = {};
    // public System.String userId
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String userName
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String secret
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* secret;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public DiscoveryPolicy discoveryPolicy
    // Size: 0x1
    // Offset: 0x38
    GlobalNamespace::DiscoveryPolicy discoveryPolicy;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DiscoveryPolicy) == 0x1);
    // Padding between fields: discoveryPolicy and: invitePolicy
    char __padding4[0x3] = {};
    // public InvitePolicy invitePolicy
    // Size: 0x4
    // Offset: 0x3C
    GlobalNamespace::InvitePolicy invitePolicy;
    // Field size check
    static_assert(sizeof(GlobalNamespace::InvitePolicy) == 0x4);
    // public System.Int32 maxPlayerCount
    // Size: 0x4
    // Offset: 0x40
    int maxPlayerCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: maxPlayerCount and: configuration
    char __padding6[0x4] = {};
    // public GameplayServerConfiguration configuration
    // Size: 0x18
    // Offset: 0x48
    GlobalNamespace::GameplayServerConfiguration configuration;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayServerConfiguration) == 0x18);
    // public System.Boolean isConnectionOwner
    // Size: 0x1
    // Offset: 0x60
    bool isConnectionOwner;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isDedicatedServer
    // Size: 0x1
    // Offset: 0x61
    bool isDedicatedServer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isDedicatedServer and: remoteEndPoint
    char __padding9[0x6] = {};
    // public System.Net.IPEndPoint remoteEndPoint
    // Size: 0x8
    // Offset: 0x68
    System::Net::IPEndPoint* remoteEndPoint;
    // Field size check
    static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
    // public readonly ByteArrayNetSerializable random
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::ByteArrayNetSerializable* random;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // public readonly ByteArrayNetSerializable publicKey
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::ByteArrayNetSerializable* publicKey;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // Creating value type constructor for type: ConnectToServerResponse
    ConnectToServerResponse(MasterServer::ConnectToServerResponse::Result result_ = {}, ::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, ::Il2CppString* secret_ = {}, GlobalNamespace::DiscoveryPolicy discoveryPolicy_ = {}, GlobalNamespace::InvitePolicy invitePolicy_ = {}, int maxPlayerCount_ = {}, GlobalNamespace::GameplayServerConfiguration configuration_ = {}, bool isConnectionOwner_ = {}, bool isDedicatedServer_ = {}, System::Net::IPEndPoint* remoteEndPoint_ = {}, GlobalNamespace::ByteArrayNetSerializable* random_ = {}, GlobalNamespace::ByteArrayNetSerializable* publicKey_ = {}) noexcept : result{result_}, userId{userId_}, userName{userName_}, secret{secret_}, discoveryPolicy{discoveryPolicy_}, invitePolicy{invitePolicy_}, maxPlayerCount{maxPlayerCount_}, configuration{configuration_}, isConnectionOwner{isConnectionOwner_}, isDedicatedServer{isDedicatedServer_}, remoteEndPoint{remoteEndPoint_}, random{random_}, publicKey{publicKey_} {}
    // Creating interface conversion operator: operator MasterServer::IUserServerToClientMessage
    operator MasterServer::IUserServerToClientMessage() noexcept {
      return *reinterpret_cast<MasterServer::IUserServerToClientMessage*>(this);
    }
    // static public PacketPool`1<MasterServer.ConnectToServerResponse> get_pool()
    // Offset: 0x1285058
    static GlobalNamespace::PacketPool_1<MasterServer::ConnectToServerResponse*>* get_pool();
    // public MasterServer.ConnectToServerResponse InitForFailure(MasterServer.ConnectToServerResponse/Result result)
    // Offset: 0x1285138
    MasterServer::ConnectToServerResponse* InitForFailure(MasterServer::ConnectToServerResponse::Result result);
    // public MasterServer.ConnectToServerResponse InitForSuccess(System.String userId, System.String userName, System.String secret, DiscoveryPolicy discoveryPolicy, InvitePolicy invitePolicy, System.Int32 maxPlayerCount, GameplayServerConfiguration configuration, System.Boolean isConnectionOwner, System.Boolean isDedicatedServer, System.Net.IPEndPoint remoteEndPoint, System.Byte[] random, System.Byte[] publicKey)
    // Offset: 0x12851D0
    MasterServer::ConnectToServerResponse* InitForSuccess(::Il2CppString* userId, ::Il2CppString* userName, ::Il2CppString* secret, GlobalNamespace::DiscoveryPolicy discoveryPolicy, GlobalNamespace::InvitePolicy invitePolicy, int maxPlayerCount, GlobalNamespace::GameplayServerConfiguration configuration, bool isConnectionOwner, bool isDedicatedServer, System::Net::IPEndPoint* remoteEndPoint, ::Array<uint8_t>* random, ::Array<uint8_t>* publicKey);
    // public override System.Byte get_resultCode()
    // Offset: 0x12850A0
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Byte BaseMasterServerReliableResponse::get_resultCode_NEW()
    uint8_t get_resultCode();
    // public override System.String get_resultCodeString()
    // Offset: 0x12850A8
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.String BaseMasterServerReliableResponse::get_resultCodeString_NEW()
    ::Il2CppString* get_resultCodeString();
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1285260
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Serialize_NEW(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x128537C
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Deserialize_NEW(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x12854A8
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Release_NEW()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x1285524
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectToServerResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::ConnectToServerResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectToServerResponse*, creationType>()));
    }
  }; // MasterServer.ConnectToServerResponse
  #pragma pack(pop)
  static check_size<sizeof(ConnectToServerResponse), 120 + sizeof(GlobalNamespace::ByteArrayNetSerializable*)> __MasterServer_ConnectToServerResponseSizeCheck;
  static_assert(sizeof(ConnectToServerResponse) == 0x80);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::ConnectToServerResponse*, "MasterServer", "ConnectToServerResponse");
DEFINE_IL2CPP_ARG_TYPE(MasterServer::ConnectToServerResponse::Result, "MasterServer", "ConnectToServerResponse/Result");
