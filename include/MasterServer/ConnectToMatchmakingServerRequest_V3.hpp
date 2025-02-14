// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: MasterServer.ConnectToMatchmakingServerRequest
#include "MasterServer/ConnectToMatchmakingServerRequest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
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
  // Size: 0x61
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.ConnectToMatchmakingServerRequest/V3
  class ConnectToMatchmakingServerRequest::V3 : public MasterServer::ConnectToMatchmakingServerRequest {
    public:
    // Creating value type constructor for type: V3
    V3() noexcept {}
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x12BE300
    // Implemented from: MasterServer.ConnectToMatchmakingServerRequest
    // Base method: System.Void ConnectToMatchmakingServerRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x12BE348
    // Implemented from: MasterServer.ConnectToMatchmakingServerRequest
    // Base method: System.Void ConnectToMatchmakingServerRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void .ctor()
    // Offset: 0x12BE394
    // Implemented from: MasterServer.ConnectToMatchmakingServerRequest
    // Base method: System.Void ConnectToMatchmakingServerRequest::.ctor()
    // Base method: System.Void BaseConnectToServerRequest::.ctor()
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectToMatchmakingServerRequest::V3* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::ConnectToMatchmakingServerRequest::V3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectToMatchmakingServerRequest::V3*, creationType>()));
    }
  }; // MasterServer.ConnectToMatchmakingServerRequest/V3
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::ConnectToMatchmakingServerRequest::V3*, "MasterServer", "ConnectToMatchmakingServerRequest/V3");
