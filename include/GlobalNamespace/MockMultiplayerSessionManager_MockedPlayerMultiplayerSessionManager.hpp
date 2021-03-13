// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MockMultiplayerSessionManager
#include "GlobalNamespace/MockMultiplayerSessionManager.hpp"
// Including type: IMultiplayerSessionManager
#include "GlobalNamespace/IMultiplayerSessionManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MockPlayer
  class MockPlayer;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: NetworkPacketSerializer`2<TType, TData>
  template<typename TType, typename TData>
  class NetworkPacketSerializer_2;
  // Forward declaring type: ConnectedPlayerManager
  class ConnectedPlayerManager;
  // Forward declaring type: MultiplayerAvatarData
  struct MultiplayerAvatarData;
  // Forward declaring type: INetworkPacketSubSerializer`1<TData>
  template<typename TData>
  class INetworkPacketSubSerializer_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: INetSerializable
  class INetSerializable;
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager
  // [] Offset: FFFFFFFF
  class MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager : public ::Il2CppObject/*, public GlobalNamespace::IMultiplayerSessionManager*/ {
    public:
    // private MockMultiplayerSessionManager _mockMultiplayerSessionManager
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::MockMultiplayerSessionManager* mockMultiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockMultiplayerSessionManager*) == 0x8);
    // private MockPlayer _player
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MockPlayer* player;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockPlayer*) == 0x8);
    // private readonly LiteNetLib.Utils.NetDataWriter _writer
    // Size: 0x8
    // Offset: 0x20
    LiteNetLib::Utils::NetDataWriter* writer;
    // Field size check
    static_assert(sizeof(LiteNetLib::Utils::NetDataWriter*) == 0x8);
    // private readonly LiteNetLib.Utils.NetDataReader _reader
    // Size: 0x8
    // Offset: 0x28
    LiteNetLib::Utils::NetDataReader* reader;
    // Field size check
    static_assert(sizeof(LiteNetLib::Utils::NetDataReader*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD3275C
    // private System.Action connectedEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action* connectedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD3276C
    // private System.Action`1<ConnectionFailedReason> connectionFailedEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action_1<GlobalNamespace::ConnectionFailedReason>* connectionFailedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::ConnectionFailedReason>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD3277C
    // private System.Action`1<IConnectedPlayer> playerConnectedEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action_1<GlobalNamespace::IConnectedPlayer*>* playerConnectedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::IConnectedPlayer*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD3278C
    // private System.Action`1<IConnectedPlayer> playerDisconnectedEvent
    // Size: 0x8
    // Offset: 0x48
    System::Action_1<GlobalNamespace::IConnectedPlayer*>* playerDisconnectedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::IConnectedPlayer*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD3279C
    // private System.Action`1<IConnectedPlayer> playerStateChangedEvent
    // Size: 0x8
    // Offset: 0x50
    System::Action_1<GlobalNamespace::IConnectedPlayer*>* playerStateChangedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::IConnectedPlayer*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD327AC
    // private System.Action`1<DisconnectedReason> disconnectedEvent
    // Size: 0x8
    // Offset: 0x58
    System::Action_1<GlobalNamespace::DisconnectedReason>* disconnectedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::DisconnectedReason>*) == 0x8);
    // private NetworkPacketSerializer`2<MultiplayerSessionManager/MessageType,IConnectedPlayer> _serializer
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::MultiplayerSessionManager_MessageType, GlobalNamespace::IConnectedPlayer*>* serializer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::MultiplayerSessionManager_MessageType, GlobalNamespace::IConnectedPlayer*>*) == 0x8);
    // Creating value type constructor for type: MockedPlayerMultiplayerSessionManager
    MockedPlayerMultiplayerSessionManager(GlobalNamespace::MockMultiplayerSessionManager* mockMultiplayerSessionManager_ = {}, GlobalNamespace::MockPlayer* player_ = {}, LiteNetLib::Utils::NetDataWriter* writer_ = {}, LiteNetLib::Utils::NetDataReader* reader_ = {}, System::Action* connectedEvent_ = {}, System::Action_1<GlobalNamespace::ConnectionFailedReason>* connectionFailedEvent_ = {}, System::Action_1<GlobalNamespace::IConnectedPlayer*>* playerConnectedEvent_ = {}, System::Action_1<GlobalNamespace::IConnectedPlayer*>* playerDisconnectedEvent_ = {}, System::Action_1<GlobalNamespace::IConnectedPlayer*>* playerStateChangedEvent_ = {}, System::Action_1<GlobalNamespace::DisconnectedReason>* disconnectedEvent_ = {}, GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::MultiplayerSessionManager_MessageType, GlobalNamespace::IConnectedPlayer*>* serializer_ = {}) noexcept : mockMultiplayerSessionManager{mockMultiplayerSessionManager_}, player{player_}, writer{writer_}, reader{reader_}, connectedEvent{connectedEvent_}, connectionFailedEvent{connectionFailedEvent_}, playerConnectedEvent{playerConnectedEvent_}, playerDisconnectedEvent{playerDisconnectedEvent_}, playerStateChangedEvent{playerStateChangedEvent_}, disconnectedEvent{disconnectedEvent_}, serializer{serializer_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IMultiplayerSessionManager
    operator GlobalNamespace::IMultiplayerSessionManager() noexcept {
      return *reinterpret_cast<GlobalNamespace::IMultiplayerSessionManager*>(this);
    }
    // public System.Void .ctor(MockMultiplayerSessionManager mockMultiplayerSessionManager, MockPlayer player)
    // Offset: 0x103071C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager* New_ctor(GlobalNamespace::MockMultiplayerSessionManager* mockMultiplayerSessionManager, GlobalNamespace::MockPlayer* player) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager*, creationType>(mockMultiplayerSessionManager, player)));
    }
    // public IConnectedPlayer get_localPlayer()
    // Offset: 0x1030C98
    GlobalNamespace::IConnectedPlayer* get_localPlayer_NEW();
    // public IConnectedPlayer get_connectionOwner()
    // Offset: 0x1030CA0
    GlobalNamespace::IConnectedPlayer* get_connectionOwner_NEW();
    // public System.Boolean get_isConnectionOwner()
    // Offset: 0x1030CB8
    bool get_isConnectionOwner_NEW();
    // public System.Single get_syncTime()
    // Offset: 0x1030CD4
    float get_syncTime_NEW();
    // public System.Boolean get_isSyncTimeInitialized()
    // Offset: 0x1030D08
    bool get_isSyncTimeInitialized_NEW();
    // public System.Single get_syncTimeDelay()
    // Offset: 0x1030D24
    float get_syncTimeDelay_NEW();
    // public System.Int32 get_maxPlayerCount()
    // Offset: 0x1030D2C
    int get_maxPlayerCount_NEW();
    // public System.Int32 get_connectedPlayerCount()
    // Offset: 0x1030D44
    int get_connectedPlayerCount_NEW();
    // public System.Boolean get_isConnectingOrConnected()
    // Offset: 0x1030D5C
    bool get_isConnectingOrConnected_NEW();
    // public System.Boolean get_isConnecting()
    // Offset: 0x1030D64
    bool get_isConnecting_NEW();
    // public System.Boolean get_isConnected()
    // Offset: 0x1030D6C
    bool get_isConnected_NEW();
    // public System.Boolean get_isDisconnecting()
    // Offset: 0x1030D74
    bool get_isDisconnecting_NEW();
    // public System.Boolean get_isSpectating()
    // Offset: 0x1030D7C
    bool get_isSpectating_NEW();
    // public System.Collections.Generic.IReadOnlyList`1<IConnectedPlayer> get_connectedPlayers()
    // Offset: 0x1030D84
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer*>* get_connectedPlayers_NEW();
    // public System.Void add_connectedEvent(System.Action value)
    // Offset: 0x1030DA0
    void add_connectedEvent_NEW(System::Action* value);
    // public System.Void remove_connectedEvent(System.Action value)
    // Offset: 0x1030E44
    void remove_connectedEvent_NEW(System::Action* value);
    // public System.Void add_connectionFailedEvent(System.Action`1<ConnectionFailedReason> value)
    // Offset: 0x1030EE8
    void add_connectionFailedEvent_NEW(System::Action_1<GlobalNamespace::ConnectionFailedReason>* value);
    // public System.Void remove_connectionFailedEvent(System.Action`1<ConnectionFailedReason> value)
    // Offset: 0x1030F8C
    void remove_connectionFailedEvent_NEW(System::Action_1<GlobalNamespace::ConnectionFailedReason>* value);
    // public System.Void add_playerConnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x1031030
    void add_playerConnectedEvent_NEW(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void remove_playerConnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x10310D4
    void remove_playerConnectedEvent_NEW(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void add_playerDisconnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x1031178
    void add_playerDisconnectedEvent_NEW(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void remove_playerDisconnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x103121C
    void remove_playerDisconnectedEvent_NEW(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void add_playerStateChangedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x10312C0
    void add_playerStateChangedEvent_NEW(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void remove_playerStateChangedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x1031364
    void remove_playerStateChangedEvent_NEW(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void add_disconnectedEvent(System.Action`1<DisconnectedReason> value)
    // Offset: 0x1031408
    void add_disconnectedEvent_NEW(System::Action_1<GlobalNamespace::DisconnectedReason>* value);
    // public System.Void remove_disconnectedEvent(System.Action`1<DisconnectedReason> value)
    // Offset: 0x10314AC
    void remove_disconnectedEvent_NEW(System::Action_1<GlobalNamespace::DisconnectedReason>* value);
    // public System.Void SetMaxPlayerCount(System.Int32 maxPlayerCount)
    // Offset: 0x1031550
    void SetMaxPlayerCount_NEW(int maxPlayerCount);
    // public System.Void StartSession(ConnectedPlayerManager connectedPlayerManager)
    // Offset: 0x1031554
    void StartSession_NEW(GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager);
    // public System.Void EndSession()
    // Offset: 0x1031558
    void EndSession_NEW();
    // public IConnectedPlayer GetPlayerByUserId(System.String userId)
    // Offset: 0x103155C
    GlobalNamespace::IConnectedPlayer* GetPlayerByUserId_NEW(::Il2CppString* userId);
    // public IConnectedPlayer GetConnectedPlayer(System.Int32 index)
    // Offset: 0x1031574
    GlobalNamespace::IConnectedPlayer* GetConnectedPlayer_NEW(int index);
    // public IConnectedPlayer GetConnectedPlayerByUserId(System.String userId)
    // Offset: 0x103158C
    GlobalNamespace::IConnectedPlayer* GetConnectedPlayerByUserId_NEW(::Il2CppString* userId);
    // public System.Void HandlePlayerStateChanged(MockPlayer player)
    // Offset: 0x102FF14
    void HandlePlayerStateChanged(GlobalNamespace::MockPlayer* player);
    // public System.Void HandlePlayerConnected(MockPlayer connectedPlayer)
    // Offset: 0x102FFA8
    void HandlePlayerConnected(GlobalNamespace::MockPlayer* connectedPlayer);
    // public System.Void HandlePlayerDisconnected(MockPlayer connectedPlayer)
    // Offset: 0x1030028
    void HandlePlayerDisconnected(GlobalNamespace::MockPlayer* connectedPlayer);
    // public System.Void Disconnect()
    // Offset: 0x10315A4
    void Disconnect_NEW();
    // public System.Void Send(T message)
    // Offset: 0xFFFFFFFF
    template<class T>
    void Send_NEW(T message) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::Send_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Send", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(message)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, message);
    }
    // public System.Void SendUnreliable(T message)
    // Offset: 0xFFFFFFFF
    template<class T>
    void SendUnreliable_NEW(T message) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::SendUnreliable_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SendUnreliable", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(message)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, message);
    }
    // public System.Void RegisterCallback(MultiplayerSessionManager/MessageType serializerType, System.Action`2<T,IConnectedPlayer> callback, System.Func`1<T> constructor)
    // Offset: 0xFFFFFFFF
    template<class T>
    void RegisterCallback_NEW(GlobalNamespace::MultiplayerSessionManager_MessageType serializerType, System::Action_2<T, GlobalNamespace::IConnectedPlayer*>* callback, System::Func_1<T>* constructor) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::RegisterCallback_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "RegisterCallback", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(serializerType, callback, constructor)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, serializerType, callback, constructor);
    }
    // public System.Void UnregisterCallback(MultiplayerSessionManager/MessageType serializerType)
    // Offset: 0xFFFFFFFF
    template<class T>
    void UnregisterCallback_NEW(GlobalNamespace::MultiplayerSessionManager_MessageType serializerType) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::UnregisterCallback_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "UnregisterCallback", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(serializerType)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, serializerType);
    }
    // public System.Void ReceiveMessage(MockPlayer player, LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1030904
    void ReceiveMessage(GlobalNamespace::MockPlayer* player, LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void SetLocalPlayerState(System.String state, System.Boolean hasState)
    // Offset: 0x1030584
    void SetLocalPlayerState_NEW(::Il2CppString* state, bool hasState);
    // public System.Void SetLocalPlayerAvatar(MultiplayerAvatarData multiplayerAvatarData)
    // Offset: 0x10315A8
    void SetLocalPlayerAvatar(GlobalNamespace::MultiplayerAvatarData multiplayerAvatarData);
    // public System.Boolean LocalPlayerHasState(System.String state)
    // Offset: 0x1030640
    bool LocalPlayerHasState_NEW(::Il2CppString* state);
    // public System.Void RegisterSerializer(MultiplayerSessionManager/MessageType serializerType, INetworkPacketSubSerializer`1<IConnectedPlayer> subSerializer)
    // Offset: 0x102FCE8
    void RegisterSerializer_NEW(GlobalNamespace::MultiplayerSessionManager_MessageType serializerType, GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer*>* subSerializer);
    // public System.Void UnregisterSerializer(MultiplayerSessionManager/MessageType serializerType, INetworkPacketSubSerializer`1<IConnectedPlayer> subSerializer)
    // Offset: 0x102FD70
    void UnregisterSerializer_NEW(GlobalNamespace::MultiplayerSessionManager_MessageType serializerType, GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer*>* subSerializer);
    // public System.Void PerformAtSyncTime(System.Single syncTime, System.Action action)
    // Offset: 0x10315AC
    void PerformAtSyncTime_NEW(float syncTime, System::Action* action);
  }; // MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager
  #pragma pack(pop)
  static check_size<sizeof(MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager), 96 + sizeof(GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::MultiplayerSessionManager_MessageType, GlobalNamespace::IConnectedPlayer*>*)> __GlobalNamespace_MockMultiplayerSessionManager_MockedPlayerMultiplayerSessionManagerSizeCheck;
  static_assert(sizeof(MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager*, "", "MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager");
