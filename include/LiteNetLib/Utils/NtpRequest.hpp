// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.INetSocketListener
#include "LiteNetLib/INetSocketListener.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetSocket
  class NetSocket;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NtpPacket
  class NtpPacket;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: SocketError
  struct SocketError;
}
// Completed forward declares
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Size: 0x28
  // Autogenerated type: LiteNetLib.Utils.NtpRequest
  // [] Offset: FFFFFFFF
  class NtpRequest : public ::Il2CppObject/*, public LiteNetLib::INetSocketListener*/ {
    public:
    // private readonly LiteNetLib.NetSocket _socket
    // Size: 0x8
    // Offset: 0x10
    LiteNetLib::NetSocket* socket;
    // Field size check
    static_assert(sizeof(LiteNetLib::NetSocket*) == 0x8);
    // private readonly System.Action`1<LiteNetLib.Utils.NtpPacket> _onRequestComplete
    // Size: 0x8
    // Offset: 0x18
    System::Action_1<LiteNetLib::Utils::NtpPacket*>* onRequestComplete;
    // Field size check
    static_assert(sizeof(System::Action_1<LiteNetLib::Utils::NtpPacket*>*) == 0x8);
    // private readonly System.Net.IPEndPoint _ntpEndPoint
    // Size: 0x8
    // Offset: 0x20
    System::Net::IPEndPoint* ntpEndPoint;
    // Field size check
    static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
    // Creating value type constructor for type: NtpRequest
    NtpRequest(LiteNetLib::NetSocket* socket_ = {}, System::Action_1<LiteNetLib::Utils::NtpPacket*>* onRequestComplete_ = {}, System::Net::IPEndPoint* ntpEndPoint_ = {}) noexcept : socket{socket_}, onRequestComplete{onRequestComplete_}, ntpEndPoint{ntpEndPoint_} {}
    // Creating interface conversion operator: operator LiteNetLib::INetSocketListener
    operator LiteNetLib::INetSocketListener() noexcept {
      return *reinterpret_cast<LiteNetLib::INetSocketListener*>(this);
    }
    // static field const value: static public System.Int32 DefaultPort
    static constexpr const int DefaultPort = 123;
    // Get static field: static public System.Int32 DefaultPort
    static int _get_DefaultPort();
    // Set static field: static public System.Int32 DefaultPort
    static void _set_DefaultPort(int value);
    // private System.Void .ctor(System.Net.IPEndPoint endPoint, System.Action`1<LiteNetLib.Utils.NtpPacket> onRequestComplete)
    // Offset: 0x22B6798
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NtpRequest* New_ctor(System::Net::IPEndPoint* endPoint, System::Action_1<LiteNetLib::Utils::NtpPacket*>* onRequestComplete) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NtpRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NtpRequest*, creationType>(endPoint, onRequestComplete)));
    }
    // static public LiteNetLib.Utils.NtpRequest Create(System.Net.IPEndPoint endPoint, System.Action`1<LiteNetLib.Utils.NtpPacket> onRequestComplete)
    // Offset: 0x22B68B8
    static LiteNetLib::Utils::NtpRequest* Create(System::Net::IPEndPoint* endPoint, System::Action_1<LiteNetLib::Utils::NtpPacket*>* onRequestComplete);
    // static public LiteNetLib.Utils.NtpRequest Create(System.Net.IPAddress ipAddress, System.Action`1<LiteNetLib.Utils.NtpPacket> onRequestComplete)
    // Offset: 0x22B6928
    static LiteNetLib::Utils::NtpRequest* Create(System::Net::IPAddress* ipAddress, System::Action_1<LiteNetLib::Utils::NtpPacket*>* onRequestComplete);
    // static public LiteNetLib.Utils.NtpRequest Create(System.String ntpServerAddress, System.Int32 port, System.Action`1<LiteNetLib.Utils.NtpPacket> onRequestComplete)
    // Offset: 0x22B69A0
    static LiteNetLib::Utils::NtpRequest* Create(::Il2CppString* ntpServerAddress, int port, System::Action_1<LiteNetLib::Utils::NtpPacket*>* onRequestComplete);
    // static public LiteNetLib.Utils.NtpRequest Create(System.String ntpServerAddress, System.Action`1<LiteNetLib.Utils.NtpPacket> onRequestComplete)
    // Offset: 0x22B6A24
    static LiteNetLib::Utils::NtpRequest* Create(::Il2CppString* ntpServerAddress, System::Action_1<LiteNetLib::Utils::NtpPacket*>* onRequestComplete);
    // public System.Void Send()
    // Offset: 0x22B6AA4
    void Send();
    // public System.Void Close()
    // Offset: 0x22B6B74
    void Close();
    // private System.Void LiteNetLib.INetSocketListener.OnMessageReceived(System.Byte[] data, System.Int32 length, System.Net.Sockets.SocketError errorCode, System.Net.IPEndPoint remoteEndPoint)
    // Offset: 0x22B6B94
    // Implemented from: LiteNetLib.INetSocketListener
    // Base method: System.Void INetSocketListener::OnMessageReceived(System.Byte[] data, System.Int32 length, System.Net.Sockets.SocketError errorCode, System.Net.IPEndPoint remoteEndPoint)
    void LiteNetLib_INetSocketListener_OnMessageReceived(::Array<uint8_t>* data, int length, System::Net::Sockets::SocketError errorCode, System::Net::IPEndPoint* remoteEndPoint);
  }; // LiteNetLib.Utils.NtpRequest
  static check_size<sizeof(NtpRequest), 32 + sizeof(System::Net::IPEndPoint*)> __LiteNetLib_Utils_NtpRequestSizeCheck;
  static_assert(sizeof(NtpRequest) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::NtpRequest*, "LiteNetLib.Utils", "NtpRequest");
#pragma pack(pop)
