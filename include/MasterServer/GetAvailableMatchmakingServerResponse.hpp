// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableResponse
#include "GlobalNamespace/BaseMasterServerReliableResponse.hpp"
// Including type: MasterServer.IDedicatedServerClientToServerMessage
#include "MasterServer/IDedicatedServerClientToServerMessage.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
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
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.GetAvailableMatchmakingServerResponse
  // [] Offset: FFFFFFFF
  class GetAvailableMatchmakingServerResponse : public GlobalNamespace::BaseMasterServerReliableResponse/*, public MasterServer::IDedicatedServerClientToServerMessage*/ {
    public:
    // Nested type: MasterServer::GetAvailableMatchmakingServerResponse::Result
    struct Result;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MasterServer.GetAvailableMatchmakingServerResponse/Result
    // [] Offset: FFFFFFFF
    struct Result/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Result
      constexpr Result(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MasterServer.GetAvailableMatchmakingServerResponse/Result Success
      static constexpr const int Success = 0;
      // Get static field: static public MasterServer.GetAvailableMatchmakingServerResponse/Result Success
      static MasterServer::GetAvailableMatchmakingServerResponse::Result _get_Success();
      // Set static field: static public MasterServer.GetAvailableMatchmakingServerResponse/Result Success
      static void _set_Success(MasterServer::GetAvailableMatchmakingServerResponse::Result value);
      // static field const value: static public MasterServer.GetAvailableMatchmakingServerResponse/Result NoMatchmakingServersAvailable
      static constexpr const int NoMatchmakingServersAvailable = 1;
      // Get static field: static public MasterServer.GetAvailableMatchmakingServerResponse/Result NoMatchmakingServersAvailable
      static MasterServer::GetAvailableMatchmakingServerResponse::Result _get_NoMatchmakingServersAvailable();
      // Set static field: static public MasterServer.GetAvailableMatchmakingServerResponse/Result NoMatchmakingServersAvailable
      static void _set_NoMatchmakingServersAvailable(MasterServer::GetAvailableMatchmakingServerResponse::Result value);
      // static field const value: static public MasterServer.GetAvailableMatchmakingServerResponse/Result UnknownError
      static constexpr const int UnknownError = 2;
      // Get static field: static public MasterServer.GetAvailableMatchmakingServerResponse/Result UnknownError
      static MasterServer::GetAvailableMatchmakingServerResponse::Result _get_UnknownError();
      // Set static field: static public MasterServer.GetAvailableMatchmakingServerResponse/Result UnknownError
      static void _set_UnknownError(MasterServer::GetAvailableMatchmakingServerResponse::Result value);
    }; // MasterServer.GetAvailableMatchmakingServerResponse/Result
    #pragma pack(pop)
    static check_size<sizeof(GetAvailableMatchmakingServerResponse::Result), 0 + sizeof(int)> __MasterServer_GetAvailableMatchmakingServerResponse_ResultSizeCheck;
    static_assert(sizeof(GetAvailableMatchmakingServerResponse::Result) == 0x4);
    // public MasterServer.GetAvailableMatchmakingServerResponse/Result result
    // Size: 0x4
    // Offset: 0x18
    MasterServer::GetAvailableMatchmakingServerResponse::Result result;
    // Field size check
    static_assert(sizeof(MasterServer::GetAvailableMatchmakingServerResponse::Result) == 0x4);
    // Padding between fields: result and: dedicatedServerId
    char __padding0[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xD05FE0
    // private System.String <dedicatedServerId>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* dedicatedServerId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD05FF0
    // private System.Int64 <dedicatedServerCreationTime>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    int64_t dedicatedServerCreationTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public System.String id
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* id;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 port
    // Size: 0x4
    // Offset: 0x38
    int port;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 maxPlayerCount
    // Size: 0x4
    // Offset: 0x3C
    int maxPlayerCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly ByteArrayNetSerializable random
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::ByteArrayNetSerializable* random;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // public readonly ByteArrayNetSerializable publicKey
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::ByteArrayNetSerializable* publicKey;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // Creating value type constructor for type: GetAvailableMatchmakingServerResponse
    GetAvailableMatchmakingServerResponse(MasterServer::GetAvailableMatchmakingServerResponse::Result result_ = {}, ::Il2CppString* dedicatedServerId_ = {}, int64_t dedicatedServerCreationTime_ = {}, ::Il2CppString* id_ = {}, int port_ = {}, int maxPlayerCount_ = {}, GlobalNamespace::ByteArrayNetSerializable* random_ = {}, GlobalNamespace::ByteArrayNetSerializable* publicKey_ = {}) noexcept : result{result_}, dedicatedServerId{dedicatedServerId_}, dedicatedServerCreationTime{dedicatedServerCreationTime_}, id{id_}, port{port_}, maxPlayerCount{maxPlayerCount_}, random{random_}, publicKey{publicKey_} {}
    // Creating interface conversion operator: operator MasterServer::IDedicatedServerClientToServerMessage
    operator MasterServer::IDedicatedServerClientToServerMessage() noexcept {
      return *reinterpret_cast<MasterServer::IDedicatedServerClientToServerMessage*>(this);
    }
    // static public PacketPool`1<MasterServer.GetAvailableMatchmakingServerResponse> get_pool()
    // Offset: 0x128611C
    static GlobalNamespace::PacketPool_1<MasterServer::GetAvailableMatchmakingServerResponse*>* get_pool();
    // public System.String get_dedicatedServerId()
    // Offset: 0x12861FC
    ::Il2CppString* get_dedicatedServerId_NEW();
    // private System.Void set_dedicatedServerId(System.String value)
    // Offset: 0x1286204
    void set_dedicatedServerId(::Il2CppString* value);
    // public System.Int64 get_dedicatedServerCreationTime()
    // Offset: 0x128620C
    int64_t get_dedicatedServerCreationTime_NEW();
    // private System.Void set_dedicatedServerCreationTime(System.Int64 value)
    // Offset: 0x1286214
    void set_dedicatedServerCreationTime(int64_t value);
    // public MasterServer.GetAvailableMatchmakingServerResponse InitForFailure(System.String dedicatedServerId, System.Int64 dedicatedServerCreationTime, MasterServer.GetAvailableMatchmakingServerResponse/Result result)
    // Offset: 0x1286464
    MasterServer::GetAvailableMatchmakingServerResponse* InitForFailure(::Il2CppString* dedicatedServerId, int64_t dedicatedServerCreationTime, MasterServer::GetAvailableMatchmakingServerResponse::Result result);
    // public MasterServer.GetAvailableMatchmakingServerResponse InitForSuccess(System.String dedicatedServerId, System.Int64 dedicatedServerCreationTime, System.String id, System.Int32 port, System.Byte[] random, System.Byte[] publicKey, System.Int32 maxPlayerCount)
    // Offset: 0x1286470
    MasterServer::GetAvailableMatchmakingServerResponse* InitForSuccess(::Il2CppString* dedicatedServerId, int64_t dedicatedServerCreationTime, ::Il2CppString* id, int port, ::Array<uint8_t>* random, ::Array<uint8_t>* publicKey, int maxPlayerCount);
    // public override System.Byte get_resultCode()
    // Offset: 0x1286164
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Byte BaseMasterServerReliableResponse::get_resultCode_NEW()
    uint8_t get_resultCode();
    // public override System.String get_resultCodeString()
    // Offset: 0x128616C
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.String BaseMasterServerReliableResponse::get_resultCodeString_NEW()
    ::Il2CppString* get_resultCodeString();
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x128621C
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Serialize_NEW(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x128631C
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Deserialize_NEW(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x12863E8
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Release_NEW()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x12864D0
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetAvailableMatchmakingServerResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::GetAvailableMatchmakingServerResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetAvailableMatchmakingServerResponse*, creationType>()));
    }
  }; // MasterServer.GetAvailableMatchmakingServerResponse
  #pragma pack(pop)
  static check_size<sizeof(GetAvailableMatchmakingServerResponse), 72 + sizeof(GlobalNamespace::ByteArrayNetSerializable*)> __MasterServer_GetAvailableMatchmakingServerResponseSizeCheck;
  static_assert(sizeof(GetAvailableMatchmakingServerResponse) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::GetAvailableMatchmakingServerResponse*, "MasterServer", "GetAvailableMatchmakingServerResponse");
DEFINE_IL2CPP_ARG_TYPE(MasterServer::GetAvailableMatchmakingServerResponse::Result, "MasterServer", "GetAvailableMatchmakingServerResponse/Result");
