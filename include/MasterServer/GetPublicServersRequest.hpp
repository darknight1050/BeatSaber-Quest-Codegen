// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableRequest
#include "GlobalNamespace/BaseMasterServerReliableRequest.hpp"
// Including type: MasterServer.IUserClientToServerMessage
#include "MasterServer/IUserClientToServerMessage.hpp"
// Including type: GameplayServerFilter
#include "GlobalNamespace/GameplayServerFilter.hpp"
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
  // Size: 0x58
  // Autogenerated type: MasterServer.GetPublicServersRequest
  // [] Offset: FFFFFFFF
  class GetPublicServersRequest : public GlobalNamespace::BaseMasterServerReliableRequest/*, public MasterServer::IUserClientToServerMessage*/ {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDAA654
    // private System.String <userId>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDAA664
    // private System.String <userName>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 offset
    // Size: 0x4
    // Offset: 0x28
    int offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 count
    // Size: 0x4
    // Offset: 0x2C
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public GameplayServerFilter filter
    // Size: 0x28
    // Offset: 0x30
    GlobalNamespace::GameplayServerFilter filter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayServerFilter) == 0x28);
    // Creating value type constructor for type: GetPublicServersRequest
    GetPublicServersRequest(::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, int offset_ = {}, int count_ = {}, GlobalNamespace::GameplayServerFilter filter_ = {}) noexcept : userId{userId_}, userName{userName_}, offset{offset_}, count{count_}, filter{filter_} {}
    // Creating interface conversion operator: operator MasterServer::IUserClientToServerMessage
    operator MasterServer::IUserClientToServerMessage() noexcept {
      return *reinterpret_cast<MasterServer::IUserClientToServerMessage*>(this);
    }
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // static public PacketPool`1<MasterServer.GetPublicServersRequest> get_pool()
    // Offset: 0x1AD6838
    static GlobalNamespace::PacketPool_1<MasterServer::GetPublicServersRequest*>* get_pool();
    // private System.Void set_userId(System.String value)
    // Offset: 0x1AD6888
    void set_userId(::Il2CppString* value);
    // private System.Void set_userName(System.String value)
    // Offset: 0x1AD6898
    void set_userName(::Il2CppString* value);
    // public MasterServer.GetPublicServersRequest Init(System.String userId, System.String userName, System.Int32 offset, System.Int32 count, GameplayServerFilter filter)
    // Offset: 0x1AD68A0
    MasterServer::GetPublicServersRequest* Init(::Il2CppString* userId, ::Il2CppString* userName, int offset, int count, GlobalNamespace::GameplayServerFilter filter);
    // public System.String get_userId()
    // Offset: 0x1AD6880
    // Implemented from: MasterServer.IUserClientToServerMessage
    // Base method: System.String IUserClientToServerMessage::get_userId()
    ::Il2CppString* get_userId();
    // public System.String get_userName()
    // Offset: 0x1AD6890
    // Implemented from: MasterServer.IUserClientToServerMessage
    // Base method: System.String IUserClientToServerMessage::get_userName()
    ::Il2CppString* get_userName();
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1AD6918
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1AD6994
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x1AD6A58
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x1AD6AC0
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetPublicServersRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::GetPublicServersRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetPublicServersRequest*, creationType>()));
    }
  }; // MasterServer.GetPublicServersRequest
  static check_size<sizeof(GetPublicServersRequest), 48 + sizeof(GlobalNamespace::GameplayServerFilter)> __MasterServer_GetPublicServersRequestSizeCheck;
  static_assert(sizeof(GetPublicServersRequest) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::GetPublicServersRequest*, "MasterServer", "GetPublicServersRequest");
#pragma pack(pop)
