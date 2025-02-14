// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRNetwork
#include "GlobalNamespace/OVRNetwork.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: TcpListener
  class TcpListener;
  // Forward declaring type: TcpClient
  class TcpClient;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OVRNetwork/OVRNetworkTcpServer
  class OVRNetwork::OVRNetworkTcpServer : public ::Il2CppObject {
    public:
    // public System.Net.Sockets.TcpListener tcpListener
    // Size: 0x8
    // Offset: 0x10
    System::Net::Sockets::TcpListener* tcpListener;
    // Field size check
    static_assert(sizeof(System::Net::Sockets::TcpListener*) == 0x8);
    // private readonly System.Object clientsLock
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* clientsLock;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public readonly System.Collections.Generic.List`1<System.Net.Sockets.TcpClient> clients
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<System::Net::Sockets::TcpClient*>* clients;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Net::Sockets::TcpClient*>*) == 0x8);
    // Creating value type constructor for type: OVRNetworkTcpServer
    OVRNetworkTcpServer(System::Net::Sockets::TcpListener* tcpListener_ = {}, ::Il2CppObject* clientsLock_ = {}, System::Collections::Generic::List_1<System::Net::Sockets::TcpClient*>* clients_ = {}) noexcept : tcpListener{tcpListener_}, clientsLock{clientsLock_}, clients{clients_} {}
    // public System.Void StartListening(System.Int32 listeningPort)
    // Offset: 0x12D64B0
    void StartListening(int listeningPort);
    // public System.Void StopListening()
    // Offset: 0x12D6998
    void StopListening();
    // private System.Void DoAcceptTcpClientCallback(System.IAsyncResult ar)
    // Offset: 0x12D6AEC
    void DoAcceptTcpClientCallback(System::IAsyncResult* ar);
    // public System.Boolean HasConnectedClient()
    // Offset: 0x12D6FA0
    bool HasConnectedClient();
    // public System.Void Broadcast(System.Int32 payloadType, System.Byte[] payload)
    // Offset: 0x12D718C
    void Broadcast(int payloadType, ::Array<uint8_t>* payload);
    // private System.Void DoWriteDataCallback(System.IAsyncResult ar)
    // Offset: 0x12D7690
    void DoWriteDataCallback(System::IAsyncResult* ar);
    // public System.Void .ctor()
    // Offset: 0x12D7788
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRNetwork::OVRNetworkTcpServer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRNetwork::OVRNetworkTcpServer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRNetwork::OVRNetworkTcpServer*, creationType>()));
    }
  }; // OVRNetwork/OVRNetworkTcpServer
  #pragma pack(pop)
  static check_size<sizeof(OVRNetwork::OVRNetworkTcpServer), 32 + sizeof(System::Collections::Generic::List_1<System::Net::Sockets::TcpClient*>*)> __GlobalNamespace_OVRNetwork_OVRNetworkTcpServerSizeCheck;
  static_assert(sizeof(OVRNetwork::OVRNetworkTcpServer) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRNetwork::OVRNetworkTcpServer*, "", "OVRNetwork/OVRNetworkTcpServer");
