// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.ConnectionState
#include "LiteNetLib/ConnectionState.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPacketPool
  class NetPacketPool;
  // Forward declaring type: NetPacket
  class NetPacket;
  // Forward declaring type: BaseChannel
  class BaseChannel;
  // Forward declaring type: NetManager
  class NetManager;
  // Forward declaring type: NetStatistics
  class NetStatistics;
  // Forward declaring type: NetConnectAcceptPacket
  class NetConnectAcceptPacket;
  // Forward declaring type: DeliveryMethod
  struct DeliveryMethod;
  // Forward declaring type: DisconnectResult
  struct DisconnectResult;
  // Forward declaring type: ShutdownResult
  struct ShutdownResult;
  // Forward declaring type: ConnectRequestResult
  struct ConnectRequestResult;
  // Forward declaring type: NetConnectRequestPacket
  class NetConnectRequestPacket;
}
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: Stopwatch
  class Stopwatch;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x148
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.NetPeer
  // [] Offset: FFFFFFFF
  class NetPeer : public ::Il2CppObject {
    public:
    // Nested type: LiteNetLib::NetPeer::IncomingFragments
    class IncomingFragments;
    // private System.Int32 _rtt
    // Size: 0x4
    // Offset: 0x10
    int rtt;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _avgRtt
    // Size: 0x4
    // Offset: 0x14
    int avgRtt;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _rttCount
    // Size: 0x4
    // Offset: 0x18
    int rttCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: rttCount and: resendDelay
    char __padding2[0x4] = {};
    // private System.Double _resendDelay
    // Size: 0x8
    // Offset: 0x20
    double resendDelay;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Int32 _pingSendTimer
    // Size: 0x4
    // Offset: 0x28
    int pingSendTimer;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _rttResetTimer
    // Size: 0x4
    // Offset: 0x2C
    int rttResetTimer;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Diagnostics.Stopwatch _pingTimer
    // Size: 0x8
    // Offset: 0x30
    System::Diagnostics::Stopwatch* pingTimer;
    // Field size check
    static_assert(sizeof(System::Diagnostics::Stopwatch*) == 0x8);
    // private System.Int32 _timeSinceLastPacket
    // Size: 0x4
    // Offset: 0x38
    int timeSinceLastPacket;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: timeSinceLastPacket and: remoteDelta
    char __padding7[0x4] = {};
    // private System.Int64 _remoteDelta
    // Size: 0x8
    // Offset: 0x40
    int64_t remoteDelta;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private readonly LiteNetLib.NetPacketPool _packetPool
    // Size: 0x8
    // Offset: 0x48
    LiteNetLib::NetPacketPool* packetPool;
    // Field size check
    static_assert(sizeof(LiteNetLib::NetPacketPool*) == 0x8);
    // private readonly System.Object _flushLock
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppObject* flushLock;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Object _sendLock
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppObject* sendLock;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Object _shutdownLock
    // Size: 0x8
    // Offset: 0x60
    ::Il2CppObject* shutdownLock;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // LiteNetLib.NetPeer NextPeer
    // Size: 0x8
    // Offset: 0x68
    LiteNetLib::NetPeer* NextPeer;
    // Field size check
    static_assert(sizeof(LiteNetLib::NetPeer*) == 0x8);
    // LiteNetLib.NetPeer PrevPeer
    // Size: 0x8
    // Offset: 0x70
    LiteNetLib::NetPeer* PrevPeer;
    // Field size check
    static_assert(sizeof(LiteNetLib::NetPeer*) == 0x8);
    // private readonly System.Collections.Generic.Queue`1<LiteNetLib.NetPacket> _unreliableChannel
    // Size: 0x8
    // Offset: 0x78
    System::Collections::Generic::Queue_1<LiteNetLib::NetPacket*>* unreliableChannel;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Queue_1<LiteNetLib::NetPacket*>*) == 0x8);
    // private readonly LiteNetLib.BaseChannel[] _channels
    // Size: 0x8
    // Offset: 0x80
    ::Array<LiteNetLib::BaseChannel*>* channels;
    // Field size check
    static_assert(sizeof(::Array<LiteNetLib::BaseChannel*>*) == 0x8);
    // private LiteNetLib.BaseChannel _headChannel
    // Size: 0x8
    // Offset: 0x88
    LiteNetLib::BaseChannel* headChannel;
    // Field size check
    static_assert(sizeof(LiteNetLib::BaseChannel*) == 0x8);
    // private System.Int32 _mtu
    // Size: 0x4
    // Offset: 0x90
    int mtu;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _mtuIdx
    // Size: 0x4
    // Offset: 0x94
    int mtuIdx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _finishMtu
    // Size: 0x1
    // Offset: 0x98
    bool finishMtu;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: finishMtu and: mtuCheckTimer
    char __padding20[0x3] = {};
    // private System.Int32 _mtuCheckTimer
    // Size: 0x4
    // Offset: 0x9C
    int mtuCheckTimer;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _mtuCheckAttempts
    // Size: 0x4
    // Offset: 0xA0
    int mtuCheckAttempts;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: mtuCheckAttempts and: mtuMutex
    char __padding22[0x4] = {};
    // private readonly System.Object _mtuMutex
    // Size: 0x8
    // Offset: 0xA8
    ::Il2CppObject* mtuMutex;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.UInt16 _fragmentId
    // Size: 0x2
    // Offset: 0xB0
    uint16_t fragmentId;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // Padding between fields: fragmentId and: holdedFragments
    char __padding24[0x6] = {};
    // private readonly System.Collections.Generic.Dictionary`2<System.UInt16,LiteNetLib.NetPeer/IncomingFragments> _holdedFragments
    // Size: 0x8
    // Offset: 0xB8
    System::Collections::Generic::Dictionary_2<uint16_t, LiteNetLib::NetPeer::IncomingFragments*>* holdedFragments;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<uint16_t, LiteNetLib::NetPeer::IncomingFragments*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.UInt16,System.UInt16> _deliveredFramgnets
    // Size: 0x8
    // Offset: 0xC0
    System::Collections::Generic::Dictionary_2<uint16_t, uint16_t>* deliveredFramgnets;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<uint16_t, uint16_t>*) == 0x8);
    // private readonly LiteNetLib.NetPacket _mergeData
    // Size: 0x8
    // Offset: 0xC8
    LiteNetLib::NetPacket* mergeData;
    // Field size check
    static_assert(sizeof(LiteNetLib::NetPacket*) == 0x8);
    // private System.Int32 _mergePos
    // Size: 0x4
    // Offset: 0xD0
    int mergePos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _mergeCount
    // Size: 0x4
    // Offset: 0xD4
    int mergeCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _connectAttempts
    // Size: 0x4
    // Offset: 0xD8
    int connectAttempts;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _connectTimer
    // Size: 0x4
    // Offset: 0xDC
    int connectTimer;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int64 _connectTime
    // Size: 0x8
    // Offset: 0xE0
    int64_t connectTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Byte _connectNum
    // Size: 0x1
    // Offset: 0xE8
    uint8_t connectNum;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private LiteNetLib.ConnectionState _connectionState
    // Size: 0x1
    // Offset: 0xE9
    LiteNetLib::ConnectionState connectionState;
    // Field size check
    static_assert(sizeof(LiteNetLib::ConnectionState) == 0x1);
    // Padding between fields: connectionState and: shutdownPacket
    char __padding34[0x6] = {};
    // private LiteNetLib.NetPacket _shutdownPacket
    // Size: 0x8
    // Offset: 0xF0
    LiteNetLib::NetPacket* shutdownPacket;
    // Field size check
    static_assert(sizeof(LiteNetLib::NetPacket*) == 0x8);
    // private System.Int32 _shutdownTimer
    // Size: 0x4
    // Offset: 0xF8
    int shutdownTimer;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: shutdownTimer and: pingPacket
    char __padding36[0x4] = {};
    // private readonly LiteNetLib.NetPacket _pingPacket
    // Size: 0x8
    // Offset: 0x100
    LiteNetLib::NetPacket* pingPacket;
    // Field size check
    static_assert(sizeof(LiteNetLib::NetPacket*) == 0x8);
    // private readonly LiteNetLib.NetPacket _pongPacket
    // Size: 0x8
    // Offset: 0x108
    LiteNetLib::NetPacket* pongPacket;
    // Field size check
    static_assert(sizeof(LiteNetLib::NetPacket*) == 0x8);
    // private readonly LiteNetLib.NetPacket _connectRequestPacket
    // Size: 0x8
    // Offset: 0x110
    LiteNetLib::NetPacket* connectRequestPacket;
    // Field size check
    static_assert(sizeof(LiteNetLib::NetPacket*) == 0x8);
    // private readonly LiteNetLib.NetPacket _connectAcceptPacket
    // Size: 0x8
    // Offset: 0x118
    LiteNetLib::NetPacket* connectAcceptPacket;
    // Field size check
    static_assert(sizeof(LiteNetLib::NetPacket*) == 0x8);
    // public readonly System.Net.IPEndPoint EndPoint
    // Size: 0x8
    // Offset: 0x120
    System::Net::IPEndPoint* EndPoint;
    // Field size check
    static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
    // public readonly LiteNetLib.NetManager NetManager
    // Size: 0x8
    // Offset: 0x128
    LiteNetLib::NetManager* NetManager;
    // Field size check
    static_assert(sizeof(LiteNetLib::NetManager*) == 0x8);
    // public readonly System.Int32 Id
    // Size: 0x4
    // Offset: 0x130
    int Id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Id and: Tag
    char __padding43[0x4] = {};
    // public System.Object Tag
    // Size: 0x8
    // Offset: 0x138
    ::Il2CppObject* Tag;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public readonly LiteNetLib.NetStatistics Statistics
    // Size: 0x8
    // Offset: 0x140
    LiteNetLib::NetStatistics* Statistics;
    // Field size check
    static_assert(sizeof(LiteNetLib::NetStatistics*) == 0x8);
    // Creating value type constructor for type: NetPeer
    NetPeer(int rtt_ = {}, int avgRtt_ = {}, int rttCount_ = {}, double resendDelay_ = {}, int pingSendTimer_ = {}, int rttResetTimer_ = {}, System::Diagnostics::Stopwatch* pingTimer_ = {}, int timeSinceLastPacket_ = {}, int64_t remoteDelta_ = {}, LiteNetLib::NetPacketPool* packetPool_ = {}, ::Il2CppObject* flushLock_ = {}, ::Il2CppObject* sendLock_ = {}, ::Il2CppObject* shutdownLock_ = {}, LiteNetLib::NetPeer* NextPeer_ = {}, LiteNetLib::NetPeer* PrevPeer_ = {}, System::Collections::Generic::Queue_1<LiteNetLib::NetPacket*>* unreliableChannel_ = {}, ::Array<LiteNetLib::BaseChannel*>* channels_ = {}, LiteNetLib::BaseChannel* headChannel_ = {}, int mtu_ = {}, int mtuIdx_ = {}, bool finishMtu_ = {}, int mtuCheckTimer_ = {}, int mtuCheckAttempts_ = {}, ::Il2CppObject* mtuMutex_ = {}, uint16_t fragmentId_ = {}, System::Collections::Generic::Dictionary_2<uint16_t, LiteNetLib::NetPeer::IncomingFragments*>* holdedFragments_ = {}, System::Collections::Generic::Dictionary_2<uint16_t, uint16_t>* deliveredFramgnets_ = {}, LiteNetLib::NetPacket* mergeData_ = {}, int mergePos_ = {}, int mergeCount_ = {}, int connectAttempts_ = {}, int connectTimer_ = {}, int64_t connectTime_ = {}, uint8_t connectNum_ = {}, LiteNetLib::ConnectionState connectionState_ = {}, LiteNetLib::NetPacket* shutdownPacket_ = {}, int shutdownTimer_ = {}, LiteNetLib::NetPacket* pingPacket_ = {}, LiteNetLib::NetPacket* pongPacket_ = {}, LiteNetLib::NetPacket* connectRequestPacket_ = {}, LiteNetLib::NetPacket* connectAcceptPacket_ = {}, System::Net::IPEndPoint* EndPoint_ = {}, LiteNetLib::NetManager* NetManager_ = {}, int Id_ = {}, ::Il2CppObject* Tag_ = {}, LiteNetLib::NetStatistics* Statistics_ = {}) noexcept : rtt{rtt_}, avgRtt{avgRtt_}, rttCount{rttCount_}, resendDelay{resendDelay_}, pingSendTimer{pingSendTimer_}, rttResetTimer{rttResetTimer_}, pingTimer{pingTimer_}, timeSinceLastPacket{timeSinceLastPacket_}, remoteDelta{remoteDelta_}, packetPool{packetPool_}, flushLock{flushLock_}, sendLock{sendLock_}, shutdownLock{shutdownLock_}, NextPeer{NextPeer_}, PrevPeer{PrevPeer_}, unreliableChannel{unreliableChannel_}, channels{channels_}, headChannel{headChannel_}, mtu{mtu_}, mtuIdx{mtuIdx_}, finishMtu{finishMtu_}, mtuCheckTimer{mtuCheckTimer_}, mtuCheckAttempts{mtuCheckAttempts_}, mtuMutex{mtuMutex_}, fragmentId{fragmentId_}, holdedFragments{holdedFragments_}, deliveredFramgnets{deliveredFramgnets_}, mergeData{mergeData_}, mergePos{mergePos_}, mergeCount{mergeCount_}, connectAttempts{connectAttempts_}, connectTimer{connectTimer_}, connectTime{connectTime_}, connectNum{connectNum_}, connectionState{connectionState_}, shutdownPacket{shutdownPacket_}, shutdownTimer{shutdownTimer_}, pingPacket{pingPacket_}, pongPacket{pongPacket_}, connectRequestPacket{connectRequestPacket_}, connectAcceptPacket{connectAcceptPacket_}, EndPoint{EndPoint_}, NetManager{NetManager_}, Id{Id_}, Tag{Tag_}, Statistics{Statistics_} {}
    // static field const value: static private System.Int32 MtuCheckDelay
    static constexpr const int MtuCheckDelay = 1000;
    // Get static field: static private System.Int32 MtuCheckDelay
    static int _get_MtuCheckDelay();
    // Set static field: static private System.Int32 MtuCheckDelay
    static void _set_MtuCheckDelay(int value);
    // static field const value: static private System.Int32 MaxMtuCheckAttempts
    static constexpr const int MaxMtuCheckAttempts = 4;
    // Get static field: static private System.Int32 MaxMtuCheckAttempts
    static int _get_MaxMtuCheckAttempts();
    // Set static field: static private System.Int32 MaxMtuCheckAttempts
    static void _set_MaxMtuCheckAttempts(int value);
    // static field const value: static private System.Int32 ShutdownDelay
    static constexpr const int ShutdownDelay = 300;
    // Get static field: static private System.Int32 ShutdownDelay
    static int _get_ShutdownDelay();
    // Set static field: static private System.Int32 ShutdownDelay
    static void _set_ShutdownDelay(int value);
    // System.Byte get_ConnectionNum()
    // Offset: 0x19F4ED0
    uint8_t get_ConnectionNum();
    // private System.Void set_ConnectionNum(System.Byte value)
    // Offset: 0x19F4ED8
    void set_ConnectionNum(uint8_t value);
    // public LiteNetLib.ConnectionState get_ConnectionState()
    // Offset: 0x19F4F28
    LiteNetLib::ConnectionState get_ConnectionState();
    // System.Int64 get_ConnectTime()
    // Offset: 0x19F4F30
    int64_t get_ConnectTime();
    // public System.Int32 get_Ping()
    // Offset: 0x19F4F38
    int get_Ping();
    // public System.Int32 get_Mtu()
    // Offset: 0x19F4F4C
    int get_Mtu();
    // public System.Int64 get_RemoteTimeDelta()
    // Offset: 0x19F4F54
    int64_t get_RemoteTimeDelta();
    // public System.DateTime get_RemoteUtcTime()
    // Offset: 0x19F4F5C
    System::DateTime get_RemoteUtcTime();
    // public System.Int32 get_TimeSinceLastPacket()
    // Offset: 0x19F4FFC
    int get_TimeSinceLastPacket();
    // System.Double get_ResendDelay()
    // Offset: 0x19F5004
    double get_ResendDelay();
    // System.Void .ctor(LiteNetLib.NetManager netManager, System.Net.IPEndPoint remoteEndPoint, System.Int32 id)
    // Offset: 0x19F14A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetPeer* New_ctor(LiteNetLib::NetManager* netManager, System::Net::IPEndPoint* remoteEndPoint, int id) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::NetPeer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetPeer*, creationType>(netManager, remoteEndPoint, id)));
    }
    // private System.Void SetMtu(System.Int32 mtuIdx)
    // Offset: 0x19F500C
    void SetMtu(int mtuIdx);
    // public System.Int32 GetPacketsCountInReliableQueue(System.Byte channelNumber, System.Boolean ordered)
    // Offset: 0x19F50D0
    int GetPacketsCountInReliableQueue(uint8_t channelNumber, bool ordered);
    // private LiteNetLib.BaseChannel CreateChannel(System.Byte idx)
    // Offset: 0x19F5190
    LiteNetLib::BaseChannel* CreateChannel(uint8_t idx);
    // System.Void .ctor(LiteNetLib.NetManager netManager, System.Net.IPEndPoint remoteEndPoint, System.Int32 id, System.Byte connectNum, LiteNetLib.Utils.NetDataWriter connectData)
    // Offset: 0x19F40B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetPeer* New_ctor(LiteNetLib::NetManager* netManager, System::Net::IPEndPoint* remoteEndPoint, int id, uint8_t connectNum, LiteNetLib::Utils::NetDataWriter* connectData) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::NetPeer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetPeer*, creationType>(netManager, remoteEndPoint, id, connectNum, connectData)));
    }
    // System.Void .ctor(LiteNetLib.NetManager netManager, System.Net.IPEndPoint remoteEndPoint, System.Int32 id, System.Int64 connectId, System.Byte connectNum)
    // Offset: 0x19F1740
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetPeer* New_ctor(LiteNetLib::NetManager* netManager, System::Net::IPEndPoint* remoteEndPoint, int id, int64_t connectId, uint8_t connectNum) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::NetPeer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetPeer*, creationType>(netManager, remoteEndPoint, id, connectId, connectNum)));
    }
    // System.Void Reject(System.Int64 connectionId, System.Byte connectionNumber, System.Byte[] data, System.Int32 start, System.Int32 length)
    // Offset: 0x19F1724
    void Reject(int64_t connectionId, uint8_t connectionNumber, ::Array<uint8_t>* data, int start, int length);
    // System.Boolean ProcessConnectAccept(LiteNetLib.NetConnectAcceptPacket packet)
    // Offset: 0x19F1EE0
    bool ProcessConnectAccept(LiteNetLib::NetConnectAcceptPacket* packet);
    // public System.Int32 GetMaxSinglePacketSize(LiteNetLib.DeliveryMethod options)
    // Offset: 0x19F5540
    int GetMaxSinglePacketSize(LiteNetLib::DeliveryMethod options);
    // public System.Void SendWithDeliveryEvent(System.Byte[] data, System.Byte channelNumber, LiteNetLib.DeliveryMethod deliveryMethod, System.Object userData)
    // Offset: 0x19F55C4
    void SendWithDeliveryEvent(::Array<uint8_t>* data, uint8_t channelNumber, LiteNetLib::DeliveryMethod deliveryMethod, ::Il2CppObject* userData);
    // public System.Void SendWithDeliveryEvent(System.Byte[] data, System.Int32 start, System.Int32 length, System.Byte channelNumber, LiteNetLib.DeliveryMethod deliveryMethod, System.Object userData)
    // Offset: 0x19F5B84
    void SendWithDeliveryEvent(::Array<uint8_t>* data, int start, int length, uint8_t channelNumber, LiteNetLib::DeliveryMethod deliveryMethod, ::Il2CppObject* userData);
    // public System.Void SendWithDeliveryEvent(LiteNetLib.Utils.NetDataWriter dataWriter, System.Byte channelNumber, LiteNetLib.DeliveryMethod deliveryMethod, System.Object userData)
    // Offset: 0x19F5C5C
    void SendWithDeliveryEvent(LiteNetLib::Utils::NetDataWriter* dataWriter, uint8_t channelNumber, LiteNetLib::DeliveryMethod deliveryMethod, ::Il2CppObject* userData);
    // public System.Void Send(System.Byte[] data, LiteNetLib.DeliveryMethod deliveryMethod)
    // Offset: 0x19F5D2C
    void Send(::Array<uint8_t>* data, LiteNetLib::DeliveryMethod deliveryMethod);
    // public System.Void Send(LiteNetLib.Utils.NetDataWriter dataWriter, LiteNetLib.DeliveryMethod deliveryMethod)
    // Offset: 0x19F5D54
    void Send(LiteNetLib::Utils::NetDataWriter* dataWriter, LiteNetLib::DeliveryMethod deliveryMethod);
    // public System.Void Send(System.Byte[] data, System.Int32 start, System.Int32 length, LiteNetLib.DeliveryMethod options)
    // Offset: 0x19F5D84
    void Send(::Array<uint8_t>* data, int start, int length, LiteNetLib::DeliveryMethod options);
    // public System.Void Send(System.Byte[] data, System.Byte channelNumber, LiteNetLib.DeliveryMethod deliveryMethod)
    // Offset: 0x19F5D94
    void Send(::Array<uint8_t>* data, uint8_t channelNumber, LiteNetLib::DeliveryMethod deliveryMethod);
    // public System.Void Send(LiteNetLib.Utils.NetDataWriter dataWriter, System.Byte channelNumber, LiteNetLib.DeliveryMethod deliveryMethod)
    // Offset: 0x19F5DBC
    void Send(LiteNetLib::Utils::NetDataWriter* dataWriter, uint8_t channelNumber, LiteNetLib::DeliveryMethod deliveryMethod);
    // public System.Void Send(System.Byte[] data, System.Int32 start, System.Int32 length, System.Byte channelNumber, LiteNetLib.DeliveryMethod deliveryMethod)
    // Offset: 0x19F28D0
    void Send(::Array<uint8_t>* data, int start, int length, uint8_t channelNumber, LiteNetLib::DeliveryMethod deliveryMethod);
    // private System.Void SendInternal(System.Byte[] data, System.Int32 start, System.Int32 length, System.Byte channelNumber, LiteNetLib.DeliveryMethod deliveryMethod, System.Object userData)
    // Offset: 0x19F5694
    void SendInternal(::Array<uint8_t>* data, int start, int length, uint8_t channelNumber, LiteNetLib::DeliveryMethod deliveryMethod, ::Il2CppObject* userData);
    // public System.Void Disconnect(System.Byte[] data)
    // Offset: 0x19F5DF4
    void Disconnect(::Array<uint8_t>* data);
    // public System.Void Disconnect(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x19F5E18
    void Disconnect(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Disconnect(System.Byte[] data, System.Int32 start, System.Int32 count)
    // Offset: 0x19F5E3C
    void Disconnect(::Array<uint8_t>* data, int start, int count);
    // public System.Void Disconnect()
    // Offset: 0x19F5E88
    void Disconnect();
    // LiteNetLib.DisconnectResult ProcessDisconnect(LiteNetLib.NetPacket packet)
    // Offset: 0x19F1DFC
    LiteNetLib::DisconnectResult ProcessDisconnect(LiteNetLib::NetPacket* packet);
    // LiteNetLib.ShutdownResult Shutdown(System.Byte[] data, System.Int32 start, System.Int32 length, System.Boolean force)
    // Offset: 0x19EFBFC
    LiteNetLib::ShutdownResult Shutdown(::Array<uint8_t>* data, int start, int length, bool force);
    // private System.Void UpdateRoundTripTime(System.Int32 roundTripTime)
    // Offset: 0x19F5ED0
    void UpdateRoundTripTime(int roundTripTime);
    // System.Void AddReliablePacket(LiteNetLib.DeliveryMethod method, LiteNetLib.NetPacket p)
    // Offset: 0x19F5F0C
    void AddReliablePacket(LiteNetLib::DeliveryMethod method, LiteNetLib::NetPacket* p);
    // private System.Void ProcessMtuPacket(LiteNetLib.NetPacket packet)
    // Offset: 0x19F630C
    void ProcessMtuPacket(LiteNetLib::NetPacket* packet);
    // private System.Void UpdateMtuLogic(System.Int32 deltaTime)
    // Offset: 0x19F66C8
    void UpdateMtuLogic(int deltaTime);
    // LiteNetLib.ConnectRequestResult ProcessConnectRequest(LiteNetLib.NetConnectRequestPacket connRequest)
    // Offset: 0x19F1A68
    LiteNetLib::ConnectRequestResult ProcessConnectRequest(LiteNetLib::NetConnectRequestPacket* connRequest);
    // System.Void ProcessPacket(LiteNetLib.NetPacket packet)
    // Offset: 0x19F1F50
    void ProcessPacket(LiteNetLib::NetPacket* packet);
    // private System.Void SendMerged()
    // Offset: 0x19F6924
    void SendMerged();
    // System.Void SendUserData(LiteNetLib.NetPacket packet)
    // Offset: 0x19F69C8
    void SendUserData(LiteNetLib::NetPacket* packet);
    // public System.Void Flush()
    // Offset: 0x19F3934
    void Flush();
    // System.Void Update(System.Int32 deltaTime)
    // Offset: 0x19F079C
    void Update(int deltaTime);
    // System.Void RecycleAndDeliver(LiteNetLib.NetPacket packet)
    // Offset: 0x19F6AE8
    void RecycleAndDeliver(LiteNetLib::NetPacket* packet);
  }; // LiteNetLib.NetPeer
  #pragma pack(pop)
  static check_size<sizeof(NetPeer), 320 + sizeof(LiteNetLib::NetStatistics*)> __LiteNetLib_NetPeerSizeCheck;
  static_assert(sizeof(NetPeer) == 0x148);
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NetPeer*, "LiteNetLib", "NetPeer");
