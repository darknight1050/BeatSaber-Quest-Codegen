// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.UserMessageHandler
#include "MasterServer/UserMessageHandler.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: DiscoveryPolicy
  struct DiscoveryPolicy;
  // Forward declaring type: InvitePolicy
  struct InvitePolicy;
  // Forward declaring type: GameplayServerConfiguration
  struct GameplayServerConfiguration;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.UserMessageHandler/ConnectToServerDelegate
  // [] Offset: FFFFFFFF
  class UserMessageHandler::ConnectToServerDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: ConnectToServerDelegate
    ConnectToServerDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1294118
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserMessageHandler::ConnectToServerDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::UserMessageHandler::ConnectToServerDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserMessageHandler::ConnectToServerDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.String userId, System.String userName, System.Net.IPEndPoint remoteEndPoint, System.String secret, DiscoveryPolicy discoveryPolicy, InvitePolicy invitePolicy, System.Int32 maxPlayerCount, GameplayServerConfiguration configuration, System.Byte[] preMasterSecret, System.Byte[] myRandom, System.Byte[] remoteRandom, System.Boolean isConnectionOwner, System.Boolean isDedicatedServer)
    // Offset: 0x12924C0
    void Invoke_NEW(::Il2CppString* userId, ::Il2CppString* userName, System::Net::IPEndPoint* remoteEndPoint, ::Il2CppString* secret, GlobalNamespace::DiscoveryPolicy discoveryPolicy, GlobalNamespace::InvitePolicy invitePolicy, int maxPlayerCount, GlobalNamespace::GameplayServerConfiguration configuration, ::Array<uint8_t>* preMasterSecret, ::Array<uint8_t>* myRandom, ::Array<uint8_t>* remoteRandom, bool isConnectionOwner, bool isDedicatedServer);
    // public System.IAsyncResult BeginInvoke(System.String userId, System.String userName, System.Net.IPEndPoint remoteEndPoint, System.String secret, DiscoveryPolicy discoveryPolicy, InvitePolicy invitePolicy, System.Int32 maxPlayerCount, GameplayServerConfiguration configuration, System.Byte[] preMasterSecret, System.Byte[] myRandom, System.Byte[] remoteRandom, System.Boolean isConnectionOwner, System.Boolean isDedicatedServer, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1294128
    System::IAsyncResult* BeginInvoke_NEW(::Il2CppString* userId, ::Il2CppString* userName, System::Net::IPEndPoint* remoteEndPoint, ::Il2CppString* secret, GlobalNamespace::DiscoveryPolicy discoveryPolicy, GlobalNamespace::InvitePolicy invitePolicy, int maxPlayerCount, GlobalNamespace::GameplayServerConfiguration configuration, ::Array<uint8_t>* preMasterSecret, ::Array<uint8_t>* myRandom, ::Array<uint8_t>* remoteRandom, bool isConnectionOwner, bool isDedicatedServer, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1294294
    void EndInvoke_NEW(System::IAsyncResult* result);
  }; // MasterServer.UserMessageHandler/ConnectToServerDelegate
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::UserMessageHandler::ConnectToServerDelegate*, "MasterServer", "UserMessageHandler/ConnectToServerDelegate");
