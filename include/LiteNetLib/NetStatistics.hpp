// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.NetStatistics
  // [] Offset: FFFFFFFF
  class NetStatistics : public ::Il2CppObject {
    public:
    // private System.Int64 _packetsSent
    // Size: 0x8
    // Offset: 0x10
    int64_t packetsSent;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 _packetsReceived
    // Size: 0x8
    // Offset: 0x18
    int64_t packetsReceived;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 _bytesSent
    // Size: 0x8
    // Offset: 0x20
    int64_t bytesSent;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 _bytesReceived
    // Size: 0x8
    // Offset: 0x28
    int64_t bytesReceived;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 _packetLoss
    // Size: 0x8
    // Offset: 0x30
    int64_t packetLoss;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // Creating value type constructor for type: NetStatistics
    NetStatistics(int64_t packetsSent_ = {}, int64_t packetsReceived_ = {}, int64_t bytesSent_ = {}, int64_t bytesReceived_ = {}, int64_t packetLoss_ = {}) noexcept : packetsSent{packetsSent_}, packetsReceived{packetsReceived_}, bytesSent{bytesSent_}, bytesReceived{bytesReceived_}, packetLoss{packetLoss_} {}
    // public System.Int64 get_PacketsSent()
    // Offset: 0x19F78E8
    int64_t get_PacketsSent();
    // public System.Int64 get_PacketsReceived()
    // Offset: 0x19F78F4
    int64_t get_PacketsReceived();
    // public System.Int64 get_BytesSent()
    // Offset: 0x19F7900
    int64_t get_BytesSent();
    // public System.Int64 get_BytesReceived()
    // Offset: 0x19F790C
    int64_t get_BytesReceived();
    // public System.Int64 get_PacketLoss()
    // Offset: 0x19F7918
    int64_t get_PacketLoss();
    // public System.Int64 get_PacketLossPercent()
    // Offset: 0x19F7924
    int64_t get_PacketLossPercent();
    // public System.Void Reset()
    // Offset: 0x19F7974
    void Reset();
    // public System.Void IncrementPacketsSent()
    // Offset: 0x19EFB30
    void IncrementPacketsSent();
    // public System.Void IncrementPacketsReceived()
    // Offset: 0x19F1BAC
    void IncrementPacketsReceived();
    // public System.Void AddBytesSent(System.Int64 bytesSent)
    // Offset: 0x19EFB3C
    void AddBytesSent(int64_t bytesSent);
    // public System.Void AddBytesReceived(System.Int64 bytesReceived)
    // Offset: 0x19F1BB8
    void AddBytesReceived(int64_t bytesReceived);
    // public System.Void IncrementPacketLoss()
    // Offset: 0x19F79DC
    void IncrementPacketLoss();
    // public System.Void AddPacketLoss(System.Int64 packetLoss)
    // Offset: 0x19F79E8
    void AddPacketLoss(int64_t packetLoss);
    // public override System.String ToString()
    // Offset: 0x19F79F4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString_NEW()
    ::Il2CppString* ToString();
    // public System.Void .ctor()
    // Offset: 0x19EF1B4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetStatistics* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::NetStatistics::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetStatistics*, creationType>()));
    }
  }; // LiteNetLib.NetStatistics
  #pragma pack(pop)
  static check_size<sizeof(NetStatistics), 48 + sizeof(int64_t)> __LiteNetLib_NetStatisticsSizeCheck;
  static_assert(sizeof(NetStatistics) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NetStatistics*, "LiteNetLib", "NetStatistics");
