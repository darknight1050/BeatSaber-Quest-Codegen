// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: IPoolablePacket
#include "GlobalNamespace/IPoolablePacket.hpp"
// Including type: ISyncStateSerializable`1
#include "GlobalNamespace/ISyncStateSerializable_1.hpp"
// Including type: NodePoseSyncState
#include "GlobalNamespace/NodePoseSyncState.hpp"
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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: NodePoseSyncStateNetSerializable
  // [] Offset: FFFFFFFF
  class NodePoseSyncStateNetSerializable : public ::Il2CppObject/*, public LiteNetLib::Utils::INetSerializable, public GlobalNamespace::IPoolablePacket, public GlobalNamespace::ISyncStateSerializable_1<GlobalNamespace::NodePoseSyncState>*/ {
    public:
    // private NodePoseSyncState _state
    // Size: 0x48
    // Offset: 0x10
    GlobalNamespace::NodePoseSyncState state;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NodePoseSyncState) == 0x48);
    // [CompilerGeneratedAttribute] Offset: 0xD05F00
    // private SyncStateId <id>k__BackingField
    // Size: 0x1
    // Offset: 0x58
    GlobalNamespace::SyncStateId id;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SyncStateId) == 0x1);
    // Padding between fields: id and: time
    char __padding1[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xD05F10
    // private System.Single <time>k__BackingField
    // Size: 0x4
    // Offset: 0x5C
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: NodePoseSyncStateNetSerializable
    NodePoseSyncStateNetSerializable(GlobalNamespace::NodePoseSyncState state_ = {}, GlobalNamespace::SyncStateId id_ = {}, float time_ = {}) noexcept : state{state_}, id{id_}, time{time_} {}
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IPoolablePacket
    operator GlobalNamespace::IPoolablePacket() noexcept {
      return *reinterpret_cast<GlobalNamespace::IPoolablePacket*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::ISyncStateSerializable_1<GlobalNamespace::NodePoseSyncState>
    operator GlobalNamespace::ISyncStateSerializable_1<GlobalNamespace::NodePoseSyncState>() noexcept {
      return *reinterpret_cast<GlobalNamespace::ISyncStateSerializable_1<GlobalNamespace::NodePoseSyncState>*>(this);
    }
    // Get static field: static public readonly PacketPool`1<NodePoseSyncStateNetSerializable> pool
    static GlobalNamespace::PacketPool_1<GlobalNamespace::NodePoseSyncStateNetSerializable*>* _get_pool();
    // Set static field: static public readonly PacketPool`1<NodePoseSyncStateNetSerializable> pool
    static void _set_pool(GlobalNamespace::PacketPool_1<GlobalNamespace::NodePoseSyncStateNetSerializable*>* value);
    // public SyncStateId get_id()
    // Offset: 0x15BE5B4
    GlobalNamespace::SyncStateId get_id_NEW();
    // public System.Void set_id(SyncStateId value)
    // Offset: 0x15BE5BC
    void set_id_NEW(GlobalNamespace::SyncStateId value);
    // public System.Single get_time()
    // Offset: 0x15BE5C4
    float get_time_NEW();
    // public System.Void set_time(System.Single value)
    // Offset: 0x15BE5CC
    void set_time_NEW(float value);
    // public NodePoseSyncState get_state()
    // Offset: 0x15BE5D4
    GlobalNamespace::NodePoseSyncState get_state_NEW();
    // public System.Void set_state(NodePoseSyncState value)
    // Offset: 0x15BE5E4
    void set_state_NEW(GlobalNamespace::NodePoseSyncState value);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x15BE600
    void Serialize_NEW(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x15BE660
    void Deserialize_NEW(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0x15BE6B0
    void Release_NEW();
    // static private System.Void .cctor()
    // Offset: 0x15BE73C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x15BE734
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NodePoseSyncStateNetSerializable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NodePoseSyncStateNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NodePoseSyncStateNetSerializable*, creationType>()));
    }
  }; // NodePoseSyncStateNetSerializable
  #pragma pack(pop)
  static check_size<sizeof(NodePoseSyncStateNetSerializable), 92 + sizeof(float)> __GlobalNamespace_NodePoseSyncStateNetSerializableSizeCheck;
  static_assert(sizeof(NodePoseSyncStateNetSerializable) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NodePoseSyncStateNetSerializable*, "", "NodePoseSyncStateNetSerializable");
