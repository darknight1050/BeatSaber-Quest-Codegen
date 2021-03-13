// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ConnectionFailedReason
#include "GlobalNamespace/ConnectionFailedReason.hpp"
// Including type: DisconnectedReason
#include "GlobalNamespace/DisconnectedReason.hpp"
// Including type: MultiplayerSessionManager/MessageType
#include "GlobalNamespace/MultiplayerSessionManager_MessageType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: ConnectedPlayerManager
  class ConnectedPlayerManager;
  // Forward declaring type: INetworkPacketSubSerializer`1<TData>
  template<typename TData>
  class INetworkPacketSubSerializer_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: INetSerializable
  class INetSerializable;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IMultiplayerSessionManager
  // [] Offset: FFFFFFFF
  class IMultiplayerSessionManager {
    public:
    // Creating value type constructor for type: IMultiplayerSessionManager
    IMultiplayerSessionManager() noexcept {}
    // public IConnectedPlayer get_localPlayer()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::IConnectedPlayer* get_localPlayer_NEW();
    // public System.Boolean get_isConnectionOwner()
    // Offset: 0xFFFFFFFF
    bool get_isConnectionOwner_NEW();
    // public System.Single get_syncTime()
    // Offset: 0xFFFFFFFF
    float get_syncTime_NEW();
    // public System.Boolean get_isSyncTimeInitialized()
    // Offset: 0xFFFFFFFF
    bool get_isSyncTimeInitialized_NEW();
    // public System.Single get_syncTimeDelay()
    // Offset: 0xFFFFFFFF
    float get_syncTimeDelay_NEW();
    // public System.Int32 get_maxPlayerCount()
    // Offset: 0xFFFFFFFF
    int get_maxPlayerCount_NEW();
    // public System.Int32 get_connectedPlayerCount()
    // Offset: 0xFFFFFFFF
    int get_connectedPlayerCount_NEW();
    // public System.Boolean get_isConnectingOrConnected()
    // Offset: 0xFFFFFFFF
    bool get_isConnectingOrConnected_NEW();
    // public System.Boolean get_isConnected()
    // Offset: 0xFFFFFFFF
    bool get_isConnected_NEW();
    // public System.Boolean get_isConnecting()
    // Offset: 0xFFFFFFFF
    bool get_isConnecting_NEW();
    // public System.Boolean get_isDisconnecting()
    // Offset: 0xFFFFFFFF
    bool get_isDisconnecting_NEW();
    // public System.Boolean get_isSpectating()
    // Offset: 0xFFFFFFFF
    bool get_isSpectating_NEW();
    // public System.Collections.Generic.IReadOnlyList`1<IConnectedPlayer> get_connectedPlayers()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer*>* get_connectedPlayers_NEW();
    // public IConnectedPlayer get_connectionOwner()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::IConnectedPlayer* get_connectionOwner_NEW();
    // public System.Void add_connectedEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void add_connectedEvent_NEW(System::Action* value);
    // public System.Void remove_connectedEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void remove_connectedEvent_NEW(System::Action* value);
    // public System.Void add_connectionFailedEvent(System.Action`1<ConnectionFailedReason> value)
    // Offset: 0xFFFFFFFF
    void add_connectionFailedEvent_NEW(System::Action_1<GlobalNamespace::ConnectionFailedReason>* value);
    // public System.Void remove_connectionFailedEvent(System.Action`1<ConnectionFailedReason> value)
    // Offset: 0xFFFFFFFF
    void remove_connectionFailedEvent_NEW(System::Action_1<GlobalNamespace::ConnectionFailedReason>* value);
    // public System.Void add_playerConnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0xFFFFFFFF
    void add_playerConnectedEvent_NEW(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void remove_playerConnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0xFFFFFFFF
    void remove_playerConnectedEvent_NEW(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void add_playerDisconnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0xFFFFFFFF
    void add_playerDisconnectedEvent_NEW(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void remove_playerDisconnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0xFFFFFFFF
    void remove_playerDisconnectedEvent_NEW(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void add_playerStateChangedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0xFFFFFFFF
    void add_playerStateChangedEvent_NEW(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void remove_playerStateChangedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0xFFFFFFFF
    void remove_playerStateChangedEvent_NEW(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void add_disconnectedEvent(System.Action`1<DisconnectedReason> value)
    // Offset: 0xFFFFFFFF
    void add_disconnectedEvent_NEW(System::Action_1<GlobalNamespace::DisconnectedReason>* value);
    // public System.Void remove_disconnectedEvent(System.Action`1<DisconnectedReason> value)
    // Offset: 0xFFFFFFFF
    void remove_disconnectedEvent_NEW(System::Action_1<GlobalNamespace::DisconnectedReason>* value);
    // public System.Void SetMaxPlayerCount(System.Int32 maxPlayerCount)
    // Offset: 0xFFFFFFFF
    void SetMaxPlayerCount_NEW(int maxPlayerCount);
    // public System.Void StartSession(ConnectedPlayerManager connectedPlayerManager)
    // Offset: 0xFFFFFFFF
    void StartSession_NEW(GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager);
    // public System.Void EndSession()
    // Offset: 0xFFFFFFFF
    void EndSession_NEW();
    // public IConnectedPlayer GetPlayerByUserId(System.String userId)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::IConnectedPlayer* GetPlayerByUserId_NEW(::Il2CppString* userId);
    // public IConnectedPlayer GetConnectedPlayer(System.Int32 index)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::IConnectedPlayer* GetConnectedPlayer_NEW(int index);
    // public IConnectedPlayer GetConnectedPlayerByUserId(System.String userId)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::IConnectedPlayer* GetConnectedPlayerByUserId_NEW(::Il2CppString* userId);
    // public System.Void Disconnect()
    // Offset: 0xFFFFFFFF
    void Disconnect_NEW();
    // public System.Void Send(T message)
    // Offset: 0xFFFFFFFF
    template<class T>
    void Send_NEW(T message) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IMultiplayerSessionManager::Send_NEW");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Send", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(message)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, message);
    }
    // public System.Void SendUnreliable(T message)
    // Offset: 0xFFFFFFFF
    template<class T>
    void SendUnreliable_NEW(T message) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IMultiplayerSessionManager::SendUnreliable_NEW");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SendUnreliable", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(message)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, message);
    }
    // public System.Void RegisterCallback(MultiplayerSessionManager/MessageType serializerType, System.Action`2<T,IConnectedPlayer> callback, System.Func`1<T> constructor)
    // Offset: 0xFFFFFFFF
    template<class T>
    void RegisterCallback_NEW(GlobalNamespace::MultiplayerSessionManager_MessageType serializerType, System::Action_2<T, GlobalNamespace::IConnectedPlayer*>* callback, System::Func_1<T>* constructor) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IMultiplayerSessionManager::RegisterCallback_NEW");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "RegisterCallback", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(serializerType, callback, constructor)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, serializerType, callback, constructor);
    }
    // public System.Void UnregisterCallback(MultiplayerSessionManager/MessageType serializerType)
    // Offset: 0xFFFFFFFF
    template<class T>
    void UnregisterCallback_NEW(GlobalNamespace::MultiplayerSessionManager_MessageType serializerType) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IMultiplayerSessionManager::UnregisterCallback_NEW");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "UnregisterCallback", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(serializerType)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, serializerType);
    }
    // public System.Void SetLocalPlayerState(System.String state, System.Boolean hasState)
    // Offset: 0xFFFFFFFF
    void SetLocalPlayerState_NEW(::Il2CppString* state, bool hasState);
    // public System.Boolean LocalPlayerHasState(System.String state)
    // Offset: 0xFFFFFFFF
    bool LocalPlayerHasState_NEW(::Il2CppString* state);
    // public System.Void RegisterSerializer(MultiplayerSessionManager/MessageType serializerType, INetworkPacketSubSerializer`1<IConnectedPlayer> subSerializer)
    // Offset: 0xFFFFFFFF
    void RegisterSerializer_NEW(GlobalNamespace::MultiplayerSessionManager_MessageType serializerType, GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer*>* subSerializer);
    // public System.Void UnregisterSerializer(MultiplayerSessionManager/MessageType serializerType, INetworkPacketSubSerializer`1<IConnectedPlayer> subSerializer)
    // Offset: 0xFFFFFFFF
    void UnregisterSerializer_NEW(GlobalNamespace::MultiplayerSessionManager_MessageType serializerType, GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer*>* subSerializer);
    // public System.Void PerformAtSyncTime(System.Single syncTime, System.Action action)
    // Offset: 0xFFFFFFFF
    void PerformAtSyncTime_NEW(float syncTime, System::Action* action);
  }; // IMultiplayerSessionManager
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IMultiplayerSessionManager*, "", "IMultiplayerSessionManager");
