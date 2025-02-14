// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableRequest
#include "GlobalNamespace/BaseMasterServerReliableRequest.hpp"
// Including type: MasterServer.IDedicatedServerClientToServerMessage
#include "MasterServer/IDedicatedServerClientToServerMessage.hpp"
// Including type: GameplayServerFiniteStateMachine/GameStateType
#include "GlobalNamespace/GameplayServerFiniteStateMachine.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
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
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.MatchmakingServerStatusUpdateRequest
  class MatchmakingServerStatusUpdateRequest : public GlobalNamespace::BaseMasterServerReliableRequest/*, public MasterServer::IDedicatedServerClientToServerMessage*/ {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDF021C
    // private System.String <dedicatedServerId>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* dedicatedServerId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDF022C
    // private System.Int64 <dedicatedServerCreationTime>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    int64_t dedicatedServerCreationTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public System.String id
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* id;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 currentPlayerCount
    // Size: 0x4
    // Offset: 0x30
    int currentPlayerCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public GameplayServerFiniteStateMachine/GameStateType gameState
    // Size: 0x4
    // Offset: 0x34
    GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType gameState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType) == 0x4);
    // Creating value type constructor for type: MatchmakingServerStatusUpdateRequest
    MatchmakingServerStatusUpdateRequest(::Il2CppString* dedicatedServerId_ = {}, int64_t dedicatedServerCreationTime_ = {}, ::Il2CppString* id_ = {}, int currentPlayerCount_ = {}, GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType gameState_ = {}) noexcept : dedicatedServerId{dedicatedServerId_}, dedicatedServerCreationTime{dedicatedServerCreationTime_}, id{id_}, currentPlayerCount{currentPlayerCount_}, gameState{gameState_} {}
    // Creating interface conversion operator: operator MasterServer::IDedicatedServerClientToServerMessage
    operator MasterServer::IDedicatedServerClientToServerMessage() noexcept {
      return *reinterpret_cast<MasterServer::IDedicatedServerClientToServerMessage*>(this);
    }
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // static public PacketPool`1<MasterServer.MatchmakingServerStatusUpdateRequest> get_pool()
    // Offset: 0x12C14C8
    static GlobalNamespace::PacketPool_1<MasterServer::MatchmakingServerStatusUpdateRequest*>* get_pool();
    // public System.String get_dedicatedServerId()
    // Offset: 0x12C1510
    ::Il2CppString* get_dedicatedServerId();
    // private System.Void set_dedicatedServerId(System.String value)
    // Offset: 0x12C1518
    void set_dedicatedServerId(::Il2CppString* value);
    // public System.Int64 get_dedicatedServerCreationTime()
    // Offset: 0x12C1520
    int64_t get_dedicatedServerCreationTime();
    // private System.Void set_dedicatedServerCreationTime(System.Int64 value)
    // Offset: 0x12C1528
    void set_dedicatedServerCreationTime(int64_t value);
    // public MasterServer.MatchmakingServerStatusUpdateRequest Init(System.String dedicatedServerId, System.Int64 dedicatedServerCreationTime, System.String id, GameplayServerFiniteStateMachine/GameStateType gameState, System.Int32 currentPlayerCount)
    // Offset: 0x12C1688
    MasterServer::MatchmakingServerStatusUpdateRequest* Init(::Il2CppString* dedicatedServerId, int64_t dedicatedServerCreationTime, ::Il2CppString* id, GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType gameState, int currentPlayerCount);
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x12C1530
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x12C15AC
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x12C162C
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x12C1698
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MatchmakingServerStatusUpdateRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MatchmakingServerStatusUpdateRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MatchmakingServerStatusUpdateRequest*, creationType>()));
    }
  }; // MasterServer.MatchmakingServerStatusUpdateRequest
  #pragma pack(pop)
  static check_size<sizeof(MatchmakingServerStatusUpdateRequest), 52 + sizeof(GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType)> __MasterServer_MatchmakingServerStatusUpdateRequestSizeCheck;
  static_assert(sizeof(MatchmakingServerStatusUpdateRequest) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::MatchmakingServerStatusUpdateRequest*, "MasterServer", "MatchmakingServerStatusUpdateRequest");
