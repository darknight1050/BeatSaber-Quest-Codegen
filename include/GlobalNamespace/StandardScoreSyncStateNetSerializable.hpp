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
// Including type: StandardScoreSyncState
#include "GlobalNamespace/StandardScoreSyncState.hpp"
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
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: StandardScoreSyncStateNetSerializable
  class StandardScoreSyncStateNetSerializable : public ::Il2CppObject/*, public LiteNetLib::Utils::INetSerializable, public GlobalNamespace::IPoolablePacket, public GlobalNamespace::ISyncStateSerializable_1<GlobalNamespace::StandardScoreSyncState>*/ {
    public:
    // private StandardScoreSyncState _state
    // Size: 0x14
    // Offset: 0x10
    GlobalNamespace::StandardScoreSyncState state;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StandardScoreSyncState) == 0x14);
    // [CompilerGeneratedAttribute] Offset: 0xDF010C
    // private SyncStateId <id>k__BackingField
    // Size: 0x1
    // Offset: 0x24
    GlobalNamespace::SyncStateId id;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SyncStateId) == 0x1);
    // Padding between fields: id and: time
    char __padding1[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDF011C
    // private System.Single <time>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: StandardScoreSyncStateNetSerializable
    StandardScoreSyncStateNetSerializable(GlobalNamespace::StandardScoreSyncState state_ = {}, GlobalNamespace::SyncStateId id_ = {}, float time_ = {}) noexcept : state{state_}, id{id_}, time{time_} {}
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IPoolablePacket
    operator GlobalNamespace::IPoolablePacket() noexcept {
      return *reinterpret_cast<GlobalNamespace::IPoolablePacket*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::ISyncStateSerializable_1<GlobalNamespace::StandardScoreSyncState>
    operator GlobalNamespace::ISyncStateSerializable_1<GlobalNamespace::StandardScoreSyncState>() noexcept {
      return *reinterpret_cast<GlobalNamespace::ISyncStateSerializable_1<GlobalNamespace::StandardScoreSyncState>*>(this);
    }
    // static public PacketPool`1<StandardScoreSyncStateNetSerializable> get_pool()
    // Offset: 0x236831C
    static GlobalNamespace::PacketPool_1<GlobalNamespace::StandardScoreSyncStateNetSerializable*>* get_pool();
    // public SyncStateId get_id()
    // Offset: 0x2368364
    GlobalNamespace::SyncStateId get_id();
    // public System.Void set_id(SyncStateId value)
    // Offset: 0x236836C
    void set_id(GlobalNamespace::SyncStateId value);
    // public System.Single get_time()
    // Offset: 0x2368374
    float get_time();
    // public System.Void set_time(System.Single value)
    // Offset: 0x236837C
    void set_time(float value);
    // public StandardScoreSyncState get_state()
    // Offset: 0x2368384
    GlobalNamespace::StandardScoreSyncState get_state();
    // public System.Void set_state(StandardScoreSyncState value)
    // Offset: 0x2368398
    void set_state(GlobalNamespace::StandardScoreSyncState value);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x23683AC
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2368420
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0x2368494
    void Release();
    // public System.Void .ctor()
    // Offset: 0x23684F0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardScoreSyncStateNetSerializable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StandardScoreSyncStateNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardScoreSyncStateNetSerializable*, creationType>()));
    }
  }; // StandardScoreSyncStateNetSerializable
  #pragma pack(pop)
  static check_size<sizeof(StandardScoreSyncStateNetSerializable), 40 + sizeof(float)> __GlobalNamespace_StandardScoreSyncStateNetSerializableSizeCheck;
  static_assert(sizeof(StandardScoreSyncStateNetSerializable) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardScoreSyncStateNetSerializable*, "", "StandardScoreSyncStateNetSerializable");
