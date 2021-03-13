// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableRequest
#include "GlobalNamespace/BaseMasterServerReliableRequest.hpp"
// Including type: MasterServer.IDedicatedServerServerToClientMessage
#include "MasterServer/IDedicatedServerServerToClientMessage.hpp"
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
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.GetAvailableRelayServerRequest
  // [] Offset: FFFFFFFF
  class GetAvailableRelayServerRequest : public GlobalNamespace::BaseMasterServerReliableRequest/*, public MasterServer::IDedicatedServerServerToClientMessage*/ {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    // public System.String secret
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* secret;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: GetAvailableRelayServerRequest
    GetAvailableRelayServerRequest(::Il2CppString* secret_ = {}) noexcept : secret{secret_} {}
    // Creating interface conversion operator: operator MasterServer::IDedicatedServerServerToClientMessage
    operator MasterServer::IDedicatedServerServerToClientMessage() noexcept {
      return *reinterpret_cast<MasterServer::IDedicatedServerServerToClientMessage*>(this);
    }
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // static public PacketPool`1<MasterServer.GetAvailableRelayServerRequest> get_pool()
    // Offset: 0x1286580
    static GlobalNamespace::PacketPool_1<MasterServer::GetAvailableRelayServerRequest*>* get_pool();
    // public MasterServer.GetAvailableRelayServerRequest Init(System.String secret)
    // Offset: 0x12866A0
    MasterServer::GetAvailableRelayServerRequest* Init(::Il2CppString* secret);
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x12865C8
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Serialize_NEW(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1286604
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Deserialize_NEW(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x1286644
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Release_NEW()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x12866A8
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetAvailableRelayServerRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::GetAvailableRelayServerRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetAvailableRelayServerRequest*, creationType>()));
    }
  }; // MasterServer.GetAvailableRelayServerRequest
  #pragma pack(pop)
  static check_size<sizeof(GetAvailableRelayServerRequest), 24 + sizeof(::Il2CppString*)> __MasterServer_GetAvailableRelayServerRequestSizeCheck;
  static_assert(sizeof(GetAvailableRelayServerRequest) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::GetAvailableRelayServerRequest*, "MasterServer", "GetAvailableRelayServerRequest");
