// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Packet
  class Packet;
  // Forward declaring type: SendPolicy
  struct SendPolicy;
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: PingResult
  class PingResult;
  // Forward declaring type: NetworkingPeer
  class NetworkingPeer;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.Net
  class Net : public ::CsObject {
    public:
    // static public Oculus.Platform.Packet ReadPacket()
    // Offset: 0xE9467C
    static Oculus::Platform::Packet* ReadPacket();
    // static public System.Boolean SendPacket(System.UInt64 userID, System.Byte[] bytes, Oculus.Platform.SendPolicy policy)
    // Offset: 0xE9484C
    static bool SendPacket(uint64_t userID, ::Array<uint8_t>* bytes, Oculus::Platform::SendPolicy policy);
    // static public System.Void Connect(System.UInt64 userID)
    // Offset: 0xE94998
    static void Connect(uint64_t userID);
    // static public System.Void Accept(System.UInt64 userID)
    // Offset: 0xE94A84
    static void Accept(uint64_t userID);
    // static public System.Void Close(System.UInt64 userID)
    // Offset: 0xE94B70
    static void Close(uint64_t userID);
    // static public System.Boolean IsConnected(System.UInt64 userID)
    // Offset: 0xE94C5C
    static bool IsConnected(uint64_t userID);
    // static public System.Boolean SendPacketToCurrentRoom(System.Byte[] bytes, Oculus.Platform.SendPolicy policy)
    // Offset: 0xE94D4C
    static bool SendPacketToCurrentRoom(::Array<uint8_t>* bytes, Oculus::Platform::SendPolicy policy);
    // static public System.Boolean AcceptForCurrentRoom()
    // Offset: 0xE94E84
    static bool AcceptForCurrentRoom();
    // static public System.Void CloseForCurrentRoom()
    // Offset: 0xE94F60
    static void CloseForCurrentRoom();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.PingResult> Ping(System.UInt64 userID)
    // Offset: 0xE95038
    static Oculus::Platform::Request_1<Oculus::Platform::Models::PingResult*>* Ping(uint64_t userID);
    // static public System.Void SetConnectionStateChangedCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetworkingPeer> callback)
    // Offset: 0xE95154
    static void SetConnectionStateChangedCallback(typename Oculus::Platform::Message_1<Oculus::Platform::Models::NetworkingPeer*>::Callback* callback);
    // static public System.Void SetPeerConnectRequestCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetworkingPeer> callback)
    // Offset: 0xE951CC
    static void SetPeerConnectRequestCallback(typename Oculus::Platform::Message_1<Oculus::Platform::Models::NetworkingPeer*>::Callback* callback);
    // static public System.Void SetPingResultNotificationCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.PingResult> callback)
    // Offset: 0xE95244
    static void SetPingResultNotificationCallback(typename Oculus::Platform::Message_1<Oculus::Platform::Models::PingResult*>::Callback* callback);
  }; // Oculus.Platform.Net
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Net*, "Oculus.Platform", "Net");
#pragma pack(pop)
