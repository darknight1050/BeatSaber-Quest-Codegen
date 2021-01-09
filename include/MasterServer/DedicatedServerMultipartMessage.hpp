// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.BaseMasterServerMultipartMessage
#include "MasterServer/BaseMasterServerMultipartMessage.hpp"
// Including type: MasterServer.IDedicatedServerMessage
#include "MasterServer/IDedicatedServerMessage.hpp"
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
  // Autogenerated type: MasterServer.DedicatedServerMultipartMessage
  // [] Offset: FFFFFFFF
  class DedicatedServerMultipartMessage : public MasterServer::BaseMasterServerMultipartMessage/*, public MasterServer::IDedicatedServerMessage*/ {
    public:
    // Creating value type constructor for type: DedicatedServerMultipartMessage
    DedicatedServerMultipartMessage() noexcept {}
    // Creating interface conversion operator: operator MasterServer::IDedicatedServerMessage
    operator MasterServer::IDedicatedServerMessage() noexcept {
      return *reinterpret_cast<MasterServer::IDedicatedServerMessage*>(this);
    }
    // static public PacketPool`1<MasterServer.DedicatedServerMultipartMessage> get_pool()
    // Offset: 0x1AD5354
    static GlobalNamespace::PacketPool_1<MasterServer::DedicatedServerMultipartMessage*>* get_pool();
    // public override System.Void Release()
    // Offset: 0x1AD539C
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x1AD53F8
    // Implemented from: MasterServer.BaseMasterServerMultipartMessage
    // Base method: System.Void BaseMasterServerMultipartMessage::.ctor()
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DedicatedServerMultipartMessage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::DedicatedServerMultipartMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DedicatedServerMultipartMessage*, creationType>()));
    }
  }; // MasterServer.DedicatedServerMultipartMessage
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::DedicatedServerMultipartMessage*, "MasterServer", "DedicatedServerMultipartMessage");
#pragma pack(pop)
