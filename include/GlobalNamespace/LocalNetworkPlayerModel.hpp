// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseNetworkPlayerModel
#include "GlobalNamespace/BaseNetworkPlayerModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LocalNetworkDiscoveryManager
  class LocalNetworkDiscoveryManager;
  // Forward declaring type: IPlatformUserModel
  class IPlatformUserModel;
  // Forward declaring type: INetworkConfig
  class INetworkConfig;
  // Skipping declaration: INetworkPlayerModel because it is already included!
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
  // Forward declaring type: LiteNetLibConnectionManager
  class LiteNetLibConnectionManager;
  // Skipping declaration: GameplayServerConfiguration because it is already included!
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: ConnectionFailedReason
  struct ConnectionFailedReason;
  // Forward declaring type: INetworkPlayerModelPartyConfig`1<T>
  template<typename T>
  class INetworkPlayerModelPartyConfig_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xD8
  #pragma pack(push, 1)
  // Autogenerated type: LocalNetworkPlayerModel
  // [] Offset: FFFFFFFF
  class LocalNetworkPlayerModel : public GlobalNamespace::BaseNetworkPlayerModel {
    public:
    // Nested type: GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkFlags
    struct LocalNetworkFlags;
    // Nested type: GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer
    class LocalNetworkPlayer;
    // Nested type: GlobalNamespace::LocalNetworkPlayerModel::CreatePartyConfig
    class CreatePartyConfig;
    // Nested type: GlobalNamespace::LocalNetworkPlayerModel::$Start$d__44
    struct $Start$d__44;
    // private LocalNetworkDiscoveryManager _discoveryManager
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::LocalNetworkDiscoveryManager* discoveryManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LocalNetworkDiscoveryManager*) == 0x8);
    // [InjectAttribute] Offset: 0xD21704
    // private readonly IPlatformUserModel _platformUserModel
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::IPlatformUserModel* platformUserModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IPlatformUserModel*) == 0x8);
    // [InjectAttribute] Offset: 0xD21714
    // private readonly INetworkConfig _networkConfig
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::INetworkConfig* networkConfig;
    // Field size check
    static_assert(sizeof(GlobalNamespace::INetworkConfig*) == 0x8);
    // private readonly System.Collections.Generic.List`1<LocalNetworkPlayerModel/LocalNetworkPlayer> _partyPlayers
    // Size: 0x8
    // Offset: 0x90
    System::Collections::Generic::List_1<GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer*>* partyPlayers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<LocalNetworkPlayerModel/LocalNetworkPlayer> _otherPlayers
    // Size: 0x8
    // Offset: 0x98
    System::Collections::Generic::List_1<GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer*>* otherPlayers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer*>*) == 0x8);
    // private LocalNetworkPlayerModel/LocalNetworkPlayer _localPlayer
    // Size: 0x8
    // Offset: 0xA0
    GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer* localPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer*) == 0x8);
    // private System.Boolean _networkingFailed
    // Size: 0x1
    // Offset: 0xA8
    bool networkingFailed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _partyEnabled
    // Size: 0x1
    // Offset: 0xA9
    bool partyEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: partyEnabled and: maxPlayerCount
    char __padding7[0x2] = {};
    // private System.Int32 _maxPlayerCount
    // Size: 0x4
    // Offset: 0xAC
    int maxPlayerCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private INetworkPlayerModel _partyManager
    // Size: 0x8
    // Offset: 0xB0
    GlobalNamespace::INetworkPlayerModel* partyManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::INetworkPlayerModel*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD21724
    // private System.Action`1<System.Int32> partySizeChangedEvent
    // Size: 0x8
    // Offset: 0xB8
    System::Action_1<int>* partySizeChangedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<int>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD21734
    // private System.Action`1<INetworkPlayerModel> partyChangedEvent
    // Size: 0x8
    // Offset: 0xC0
    System::Action_1<GlobalNamespace::INetworkPlayerModel*>* partyChangedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::INetworkPlayerModel*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD21744
    // private System.Action`1<INetworkPlayer> joinRequestedEvent
    // Size: 0x8
    // Offset: 0xC8
    System::Action_1<GlobalNamespace::INetworkPlayer*>* joinRequestedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::INetworkPlayer*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD21754
    // private System.Action`1<INetworkPlayer> inviteRequestedEvent
    // Size: 0x8
    // Offset: 0xD0
    System::Action_1<GlobalNamespace::INetworkPlayer*>* inviteRequestedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::INetworkPlayer*>*) == 0x8);
    // Creating value type constructor for type: LocalNetworkPlayerModel
    LocalNetworkPlayerModel(GlobalNamespace::LocalNetworkDiscoveryManager* discoveryManager_ = {}, GlobalNamespace::IPlatformUserModel* platformUserModel_ = {}, GlobalNamespace::INetworkConfig* networkConfig_ = {}, System::Collections::Generic::List_1<GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer*>* partyPlayers_ = {}, System::Collections::Generic::List_1<GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer*>* otherPlayers_ = {}, GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer* localPlayer_ = {}, bool networkingFailed_ = {}, bool partyEnabled_ = {}, int maxPlayerCount_ = {}, GlobalNamespace::INetworkPlayerModel* partyManager_ = {}, System::Action_1<int>* partySizeChangedEvent_ = {}, System::Action_1<GlobalNamespace::INetworkPlayerModel*>* partyChangedEvent_ = {}, System::Action_1<GlobalNamespace::INetworkPlayer*>* joinRequestedEvent_ = {}, System::Action_1<GlobalNamespace::INetworkPlayer*>* inviteRequestedEvent_ = {}) noexcept : discoveryManager{discoveryManager_}, platformUserModel{platformUserModel_}, networkConfig{networkConfig_}, partyPlayers{partyPlayers_}, otherPlayers{otherPlayers_}, localPlayer{localPlayer_}, networkingFailed{networkingFailed_}, partyEnabled{partyEnabled_}, maxPlayerCount{maxPlayerCount_}, partyManager{partyManager_}, partySizeChangedEvent{partySizeChangedEvent_}, partyChangedEvent{partyChangedEvent_}, joinRequestedEvent{joinRequestedEvent_}, inviteRequestedEvent{inviteRequestedEvent_} {}
    // private System.Boolean get_canInvitePlayers()
    // Offset: 0x10AF158
    bool get_canInvitePlayers();
    // private System.Boolean get_hasConnectedPeers()
    // Offset: 0x10AF1F8
    bool get_hasConnectedPeers();
    // public System.Collections.Generic.IEnumerable`1<INetworkPlayer> get_otherPlayers()
    // Offset: 0x10AF830
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* get_otherPlayers_NEW();
    // public System.Boolean get_hasNetworkingFailed()
    // Offset: 0x10AF840
    bool get_hasNetworkingFailed();
    // public LiteNetLibConnectionManager get_liteNetLibConnectionManager()
    // Offset: 0x10AF848
    GlobalNamespace::LiteNetLibConnectionManager* get_liteNetLibConnectionManager();
    // private System.Boolean TryGetPlayer(System.String userId, out LocalNetworkPlayerModel/LocalNetworkPlayer player)
    // Offset: 0x10AFE6C
    bool TryGetPlayer(::Il2CppString* userId, GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer*& player);
    // private LocalNetworkPlayerModel/LocalNetworkPlayer GetPlayer(System.String userId)
    // Offset: 0x10AFFC4
    GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer* GetPlayer(::Il2CppString* userId);
    // private System.Void RefreshLocalPlayer(System.Boolean forcePlayersChanged)
    // Offset: 0x10AFB8C
    void RefreshLocalPlayer(bool forcePlayersChanged);
    // private System.Void HandlePeerUpdate(System.String userId, System.Net.IPAddress ipAddress, System.String encryptedUserName, System.Int32 currentPartySize, System.Int32 maxPartySize, System.Byte flags, GameplayServerConfiguration configuration)
    // Offset: 0x10B0154
    void HandlePeerUpdate(::Il2CppString* userId, System::Net::IPAddress* ipAddress, ::Il2CppString* encryptedUserName, int currentPartySize, int maxPartySize, uint8_t flags, GlobalNamespace::GameplayServerConfiguration configuration);
    // private System.Void SendJoinRequest(LocalNetworkPlayerModel/LocalNetworkPlayer player)
    // Offset: 0x10B0360
    void SendJoinRequest(GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer* player);
    // private System.Void HandleJoinRequest(System.String userId, System.Net.IPAddress ipAddress, System.String encryptedUserName, System.Byte flags)
    // Offset: 0x10B03D8
    void HandleJoinRequest(::Il2CppString* userId, System::Net::IPAddress* ipAddress, ::Il2CppString* encryptedUserName, uint8_t flags);
    // private System.Void SendJoinResponse(LocalNetworkPlayerModel/LocalNetworkPlayer player, System.Boolean allowJoin)
    // Offset: 0x10B05E4
    void SendJoinResponse(GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer* player, bool allowJoin);
    // private System.Void HandleJoinResponse(System.String id, System.String secret, System.Int32 multiplayerPort, System.Boolean blocked)
    // Offset: 0x10B08A8
    void HandleJoinResponse(::Il2CppString* id, ::Il2CppString* secret, int multiplayerPort, bool blocked);
    // private System.Void SendInviteRequest(LocalNetworkPlayerModel/LocalNetworkPlayer player)
    // Offset: 0x10B09BC
    void SendInviteRequest(GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer* player);
    // private System.Void HandleInviteRequest(System.String userId, System.Net.IPAddress ipAddress, System.String encryptedUserName, System.String secret, System.Int32 multiplayerPort, System.Byte flags)
    // Offset: 0x10B0A84
    void HandleInviteRequest(::Il2CppString* userId, System::Net::IPAddress* ipAddress, ::Il2CppString* encryptedUserName, ::Il2CppString* secret, int multiplayerPort, uint8_t flags);
    // private System.Void SendInviteResponse(LocalNetworkPlayerModel/LocalNetworkPlayer player, System.Boolean acceptInvite)
    // Offset: 0x10B0C90
    void SendInviteResponse(GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer* player, bool acceptInvite);
    // private System.Void HandleInviteResponse(System.String userId, System.Boolean accepted, System.Boolean blocked)
    // Offset: 0x10B0D44
    void HandleInviteResponse(::Il2CppString* userId, bool accepted, bool blocked);
    // private System.Void ConnectToPeer(LocalNetworkPlayerModel/LocalNetworkPlayer player)
    // Offset: 0x10B0E38
    void ConnectToPeer(GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer* player);
    // private System.Void DisconnectPeer(LocalNetworkPlayerModel/LocalNetworkPlayer player)
    // Offset: 0x10B1DE4
    void DisconnectPeer(GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer* player);
    // private System.Void HandlePlayersChanged()
    // Offset: 0x10B00BC
    void HandlePlayersChanged();
    // private System.Void TryStartServer()
    // Offset: 0x10B0734
    void TryStartServer();
    // public override System.Int32 get_currentPartySize()
    // Offset: 0x10AF250
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Int32 BaseNetworkPlayerModel::get_currentPartySize_NEW()
    int get_currentPartySize();
    // public override System.Boolean get_discoveryEnabled()
    // Offset: 0x10AF2A0
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Boolean BaseNetworkPlayerModel::get_discoveryEnabled_NEW()
    bool get_discoveryEnabled();
    // public override System.Void set_discoveryEnabled(System.Boolean value)
    // Offset: 0x10AF2BC
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::set_discoveryEnabled_NEW(System.Boolean value)
    void set_discoveryEnabled(bool value);
    // public override System.Void add_partySizeChangedEvent(System.Action`1<System.Int32> value)
    // Offset: 0x10AF2DC
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::add_partySizeChangedEvent_NEW(System.Action`1<System.Int32> value)
    void add_partySizeChangedEvent(System::Action_1<int>* value);
    // public override System.Void remove_partySizeChangedEvent(System.Action`1<System.Int32> value)
    // Offset: 0x10AF380
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::remove_partySizeChangedEvent_NEW(System.Action`1<System.Int32> value)
    void remove_partySizeChangedEvent(System::Action_1<int>* value);
    // public override System.Void add_partyChangedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x10AF424
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::add_partyChangedEvent_NEW(System.Action`1<INetworkPlayerModel> value)
    void add_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public override System.Void remove_partyChangedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x10AF4C8
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::remove_partyChangedEvent_NEW(System.Action`1<INetworkPlayerModel> value)
    void remove_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public override System.Void add_joinRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x10AF56C
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::add_joinRequestedEvent_NEW(System.Action`1<INetworkPlayer> value)
    void add_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public override System.Void remove_joinRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x10AF610
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::remove_joinRequestedEvent_NEW(System.Action`1<INetworkPlayer> value)
    void remove_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public override System.Void add_inviteRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x10AF6B4
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::add_inviteRequestedEvent_NEW(System.Action`1<INetworkPlayer> value)
    void add_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public override System.Void remove_inviteRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x10AF758
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::remove_inviteRequestedEvent_NEW(System.Action`1<INetworkPlayer> value)
    void remove_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public override System.Boolean get_localPlayerIsPartyOwner()
    // Offset: 0x10AF7FC
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Boolean BaseNetworkPlayerModel::get_localPlayerIsPartyOwner_NEW()
    bool get_localPlayerIsPartyOwner();
    // public override INetworkPlayer get_localPlayer()
    // Offset: 0x10AF828
    // Implemented from: BaseNetworkPlayerModel
    // Base method: INetworkPlayer BaseNetworkPlayerModel::get_localPlayer_NEW()
    GlobalNamespace::INetworkPlayer* get_localPlayer();
    // protected override System.Void Start()
    // Offset: 0x10AF8A0
    // Implemented from: StandaloneMonobehavior
    // Base method: System.Void StandaloneMonobehavior::Start_NEW()
    void Start();
    // protected override System.Void Update()
    // Offset: 0x10AF960
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::Update()
    void Update();
    // protected override System.Void OnDestroy()
    // Offset: 0x10AFC98
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::OnDestroy()
    void OnDestroy();
    // protected override System.Collections.Generic.IEnumerable`1<INetworkPlayer> GetPartyPlayers()
    // Offset: 0x10AFE5C
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Collections.Generic.IEnumerable`1<INetworkPlayer> BaseNetworkPlayerModel::GetPartyPlayers_NEW()
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* GetPartyPlayers();
    // protected override System.Collections.Generic.IEnumerable`1<INetworkPlayer> GetOtherPlayers()
    // Offset: 0x10AFE64
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Collections.Generic.IEnumerable`1<INetworkPlayer> BaseNetworkPlayerModel::GetOtherPlayers_NEW()
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* GetOtherPlayers();
    // protected override System.Void PlayerConnected(IConnectedPlayer connectedPlayer)
    // Offset: 0x10B0FD8
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::PlayerConnected_NEW(IConnectedPlayer connectedPlayer)
    void PlayerConnected(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // protected override System.Void ConnectionFailed(ConnectionFailedReason reason)
    // Offset: 0x10B145C
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::ConnectionFailed_NEW(ConnectionFailedReason reason)
    void ConnectionFailed(GlobalNamespace::ConnectionFailedReason reason);
    // protected override System.Void PlayerDisconnected(IConnectedPlayer connectedPlayer)
    // Offset: 0x10B1598
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::PlayerDisconnected_NEW(IConnectedPlayer connectedPlayer)
    void PlayerDisconnected(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // protected override System.Void PlayerStateChanged(IConnectedPlayer connectedPlayer)
    // Offset: 0x10B18EC
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::PlayerStateChanged_NEW(IConnectedPlayer connectedPlayer)
    void PlayerStateChanged(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // protected override System.Void PartySizeChanged(System.Int32 currentPartySize)
    // Offset: 0x10B1ED4
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::PartySizeChanged_NEW(System.Int32 currentPartySize)
    void PartySizeChanged(int currentPartySize);
    // public override System.Boolean CreateParty(INetworkPlayerModelPartyConfig`1<T> createConfig)
    // Offset: 0xFFFFFFFF
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Boolean BaseNetworkPlayerModel::CreateParty_NEW(INetworkPlayerModelPartyConfig`1<T> createConfig)
    template<class T>
    bool CreateParty(GlobalNamespace::INetworkPlayerModelPartyConfig_1<T>* createConfig) {
      static_assert(std::is_base_of_v<GlobalNamespace::INetworkPlayerModel, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalNetworkPlayerModel::CreateParty");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CreateParty", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(createConfig)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___generic__method, createConfig);
    }
    // public override System.Void DestroyParty()
    // Offset: 0x10B1F14
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::DestroyParty_NEW()
    void DestroyParty();
    // public override System.Void Disconnect()
    // Offset: 0x10B1FA0
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::Disconnect_NEW()
    void Disconnect();
    // protected override System.Void ConnectedPlayerManagerChanged()
    // Offset: 0x10B1FD8
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::ConnectedPlayerManagerChanged_NEW()
    void ConnectedPlayerManagerChanged();
    // public System.Void .ctor()
    // Offset: 0x10B1FE0
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::.ctor()
    // Base method: System.Void StandaloneMonobehavior::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalNetworkPlayerModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalNetworkPlayerModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalNetworkPlayerModel*, creationType>()));
    }
  }; // LocalNetworkPlayerModel
  #pragma pack(pop)
  static check_size<sizeof(LocalNetworkPlayerModel), 208 + sizeof(System::Action_1<GlobalNamespace::INetworkPlayer*>*)> __GlobalNamespace_LocalNetworkPlayerModelSizeCheck;
  static_assert(sizeof(LocalNetworkPlayerModel) == 0xD8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalNetworkPlayerModel*, "", "LocalNetworkPlayerModel");
