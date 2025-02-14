// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: LiteNetLib.NatAddressType
#include "LiteNetLib/NatAddressType.hpp"
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
  // Forward declaring type: NetPacketProcessor
  class NetPacketProcessor;
}
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetSocket
  class NetSocket;
  // Forward declaring type: INatPunchListener
  class INatPunchListener;
  // Forward declaring type: NetPacket
  class NetPacket;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.NatPunchModule
  class NatPunchModule : public ::Il2CppObject {
    public:
    // Nested type: LiteNetLib::NatPunchModule::RequestEventData
    struct RequestEventData;
    // Nested type: LiteNetLib::NatPunchModule::SuccessEventData
    struct SuccessEventData;
    // Nested type: LiteNetLib::NatPunchModule::NatIntroduceRequestPacket
    class NatIntroduceRequestPacket;
    // Nested type: LiteNetLib::NatPunchModule::NatIntroduceResponsePacket
    class NatIntroduceResponsePacket;
    // Nested type: LiteNetLib::NatPunchModule::NatPunchPacket
    class NatPunchPacket;
    // Size: 0x18
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: LiteNetLib.NatPunchModule/RequestEventData
    struct RequestEventData/*, public System::ValueType*/ {
      public:
      // public System.Net.IPEndPoint LocalEndPoint
      // Size: 0x8
      // Offset: 0x0
      System::Net::IPEndPoint* LocalEndPoint;
      // Field size check
      static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
      // public System.Net.IPEndPoint RemoteEndPoint
      // Size: 0x8
      // Offset: 0x8
      System::Net::IPEndPoint* RemoteEndPoint;
      // Field size check
      static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
      // public System.String Token
      // Size: 0x8
      // Offset: 0x10
      ::Il2CppString* Token;
      // Field size check
      static_assert(sizeof(::Il2CppString*) == 0x8);
      // Creating value type constructor for type: RequestEventData
      constexpr RequestEventData(System::Net::IPEndPoint* LocalEndPoint_ = {}, System::Net::IPEndPoint* RemoteEndPoint_ = {}, ::Il2CppString* Token_ = {}) noexcept : LocalEndPoint{LocalEndPoint_}, RemoteEndPoint{RemoteEndPoint_}, Token{Token_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
    }; // LiteNetLib.NatPunchModule/RequestEventData
    #pragma pack(pop)
    static check_size<sizeof(NatPunchModule::RequestEventData), 16 + sizeof(::Il2CppString*)> __LiteNetLib_NatPunchModule_RequestEventDataSizeCheck;
    static_assert(sizeof(NatPunchModule::RequestEventData) == 0x18);
    // Size: 0x18
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: LiteNetLib.NatPunchModule/SuccessEventData
    struct SuccessEventData/*, public System::ValueType*/ {
      public:
      // public System.Net.IPEndPoint TargetEndPoint
      // Size: 0x8
      // Offset: 0x0
      System::Net::IPEndPoint* TargetEndPoint;
      // Field size check
      static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
      // public LiteNetLib.NatAddressType Type
      // Size: 0x4
      // Offset: 0x8
      LiteNetLib::NatAddressType Type;
      // Field size check
      static_assert(sizeof(LiteNetLib::NatAddressType) == 0x4);
      // Padding between fields: Type and: Token
      char __padding1[0x4] = {};
      // public System.String Token
      // Size: 0x8
      // Offset: 0x10
      ::Il2CppString* Token;
      // Field size check
      static_assert(sizeof(::Il2CppString*) == 0x8);
      // Creating value type constructor for type: SuccessEventData
      constexpr SuccessEventData(System::Net::IPEndPoint* TargetEndPoint_ = {}, LiteNetLib::NatAddressType Type_ = {}, ::Il2CppString* Token_ = {}) noexcept : TargetEndPoint{TargetEndPoint_}, Type{Type_}, Token{Token_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
    }; // LiteNetLib.NatPunchModule/SuccessEventData
    #pragma pack(pop)
    static check_size<sizeof(NatPunchModule::SuccessEventData), 16 + sizeof(::Il2CppString*)> __LiteNetLib_NatPunchModule_SuccessEventDataSizeCheck;
    static_assert(sizeof(NatPunchModule::SuccessEventData) == 0x18);
    // private readonly LiteNetLib.NetSocket _socket
    // Size: 0x8
    // Offset: 0x10
    LiteNetLib::NetSocket* socket;
    // Field size check
    static_assert(sizeof(LiteNetLib::NetSocket*) == 0x8);
    // private readonly System.Collections.Generic.Queue`1<LiteNetLib.NatPunchModule/RequestEventData> _requestEvents
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::Queue_1<LiteNetLib::NatPunchModule::RequestEventData>* requestEvents;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Queue_1<LiteNetLib::NatPunchModule::RequestEventData>*) == 0x8);
    // private readonly System.Collections.Generic.Queue`1<LiteNetLib.NatPunchModule/SuccessEventData> _successEvents
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::Queue_1<LiteNetLib::NatPunchModule::SuccessEventData>* successEvents;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Queue_1<LiteNetLib::NatPunchModule::SuccessEventData>*) == 0x8);
    // private readonly LiteNetLib.Utils.NetDataReader _cacheReader
    // Size: 0x8
    // Offset: 0x28
    LiteNetLib::Utils::NetDataReader* cacheReader;
    // Field size check
    static_assert(sizeof(LiteNetLib::Utils::NetDataReader*) == 0x8);
    // private readonly LiteNetLib.Utils.NetDataWriter _cacheWriter
    // Size: 0x8
    // Offset: 0x30
    LiteNetLib::Utils::NetDataWriter* cacheWriter;
    // Field size check
    static_assert(sizeof(LiteNetLib::Utils::NetDataWriter*) == 0x8);
    // private readonly LiteNetLib.Utils.NetPacketProcessor _netPacketProcessor
    // Size: 0x8
    // Offset: 0x38
    LiteNetLib::Utils::NetPacketProcessor* netPacketProcessor;
    // Field size check
    static_assert(sizeof(LiteNetLib::Utils::NetPacketProcessor*) == 0x8);
    // private LiteNetLib.INatPunchListener _natPunchListener
    // Size: 0x8
    // Offset: 0x40
    LiteNetLib::INatPunchListener* natPunchListener;
    // Field size check
    static_assert(sizeof(LiteNetLib::INatPunchListener*) == 0x8);
    // Creating value type constructor for type: NatPunchModule
    NatPunchModule(LiteNetLib::NetSocket* socket_ = {}, System::Collections::Generic::Queue_1<LiteNetLib::NatPunchModule::RequestEventData>* requestEvents_ = {}, System::Collections::Generic::Queue_1<LiteNetLib::NatPunchModule::SuccessEventData>* successEvents_ = {}, LiteNetLib::Utils::NetDataReader* cacheReader_ = {}, LiteNetLib::Utils::NetDataWriter* cacheWriter_ = {}, LiteNetLib::Utils::NetPacketProcessor* netPacketProcessor_ = {}, LiteNetLib::INatPunchListener* natPunchListener_ = {}) noexcept : socket{socket_}, requestEvents{requestEvents_}, successEvents{successEvents_}, cacheReader{cacheReader_}, cacheWriter{cacheWriter_}, netPacketProcessor{netPacketProcessor_}, natPunchListener{natPunchListener_} {}
    // static field const value: static public System.Int32 MaxTokenLength
    static constexpr const int MaxTokenLength = 256;
    // Get static field: static public System.Int32 MaxTokenLength
    static int _get_MaxTokenLength();
    // Set static field: static public System.Int32 MaxTokenLength
    static void _set_MaxTokenLength(int value);
    // System.Void .ctor(LiteNetLib.NetSocket socket)
    // Offset: 0x1B220B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NatPunchModule* New_ctor(LiteNetLib::NetSocket* socket) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::NatPunchModule::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NatPunchModule*, creationType>(socket)));
    }
    // System.Void ProcessMessage(System.Net.IPEndPoint senderEndPoint, LiteNetLib.NetPacket packet)
    // Offset: 0x1B222D8
    void ProcessMessage(System::Net::IPEndPoint* senderEndPoint, LiteNetLib::NetPacket* packet);
    // public System.Void Init(LiteNetLib.INatPunchListener listener)
    // Offset: 0x1B223CC
    void Init(LiteNetLib::INatPunchListener* listener);
    // private System.Void Send(T packet, System.Net.IPEndPoint target)
    // Offset: 0xFFFFFFFF
    template<class T>
    void Send(T packet, System::Net::IPEndPoint* target) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::NatPunchModule::Send");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Send", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(packet), ::il2cpp_utils::ExtractType(target)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, packet, target);
    }
    // public System.Void NatIntroduce(System.Net.IPEndPoint hostInternal, System.Net.IPEndPoint hostExternal, System.Net.IPEndPoint clientInternal, System.Net.IPEndPoint clientExternal, System.String additionalInfo)
    // Offset: 0x1B223D4
    void NatIntroduce(System::Net::IPEndPoint* hostInternal, System::Net::IPEndPoint* hostExternal, System::Net::IPEndPoint* clientInternal, System::Net::IPEndPoint* clientExternal, ::Il2CppString* additionalInfo);
    // public System.Void PollEvents()
    // Offset: 0x1B224A4
    void PollEvents();
    // public System.Void SendNatIntroduceRequest(System.String host, System.Int32 port, System.String additionalInfo)
    // Offset: 0x1B227EC
    void SendNatIntroduceRequest(::Il2CppString* host, int port, ::Il2CppString* additionalInfo);
    // public System.Void SendNatIntroduceRequest(System.Net.IPEndPoint masterServerEndPoint, System.String additionalInfo)
    // Offset: 0x1B22924
    void SendNatIntroduceRequest(System::Net::IPEndPoint* masterServerEndPoint, ::Il2CppString* additionalInfo);
    // private System.Void OnNatIntroductionRequest(LiteNetLib.NatPunchModule/NatIntroduceRequestPacket req, System.Net.IPEndPoint senderEndPoint)
    // Offset: 0x1B22C08
    void OnNatIntroductionRequest(LiteNetLib::NatPunchModule::NatIntroduceRequestPacket* req, System::Net::IPEndPoint* senderEndPoint);
    // private System.Void OnNatIntroductionResponse(LiteNetLib.NatPunchModule/NatIntroduceResponsePacket req)
    // Offset: 0x1B22CF8
    void OnNatIntroductionResponse(LiteNetLib::NatPunchModule::NatIntroduceResponsePacket* req);
    // private System.Void OnNatPunch(LiteNetLib.NatPunchModule/NatPunchPacket req, System.Net.IPEndPoint senderEndPoint)
    // Offset: 0x1B23210
    void OnNatPunch(LiteNetLib::NatPunchModule::NatPunchPacket* req, System::Net::IPEndPoint* senderEndPoint);
  }; // LiteNetLib.NatPunchModule
  #pragma pack(pop)
  static check_size<sizeof(NatPunchModule), 64 + sizeof(LiteNetLib::INatPunchListener*)> __LiteNetLib_NatPunchModuleSizeCheck;
  static_assert(sizeof(NatPunchModule) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NatPunchModule*, "LiteNetLib", "NatPunchModule");
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NatPunchModule::RequestEventData, "LiteNetLib", "NatPunchModule/RequestEventData");
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NatPunchModule::SuccessEventData, "LiteNetLib", "NatPunchModule/SuccessEventData");
