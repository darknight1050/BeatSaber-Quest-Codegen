// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusNetworkPlayerModel
#include "GlobalNamespace/OculusNetworkPlayerModel.hpp"
// Including type: INetworkPlayer
#include "GlobalNamespace/INetworkPlayer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Room
  class Room;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDifficultyMask
  struct BeatmapDifficultyMask;
  // Forward declaring type: GameplayModifierMask
  struct GameplayModifierMask;
  // Forward declaring type: SongPackMask
  struct SongPackMask;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4E
  // Autogenerated type: OculusNetworkPlayerModel/OculusNetworkPlayer
  // [] Offset: FFFFFFFF
  class OculusNetworkPlayerModel::OculusNetworkPlayer : public ::Il2CppObject/*, public GlobalNamespace::INetworkPlayer*/ {
    public:
    // private readonly OculusNetworkPlayerModel _playerModel
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::OculusNetworkPlayerModel* playerModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusNetworkPlayerModel*) == 0x8);
    // private readonly System.UInt64 _id
    // Size: 0x8
    // Offset: 0x18
    uint64_t id;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private readonly System.String _userId
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.String _userName
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.Boolean _isMe
    // Size: 0x1
    // Offset: 0x30
    bool isMe;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean removed
    // Size: 0x1
    // Offset: 0x31
    bool removed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: removed and: inviteToken
    char __padding5[0x6] = {};
    // public System.String inviteToken
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* inviteToken;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public Oculus.Platform.Models.Room room
    // Size: 0x8
    // Offset: 0x40
    Oculus::Platform::Models::Room* room;
    // Field size check
    static_assert(sizeof(Oculus::Platform::Models::Room*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD3B74
    // private System.Boolean <isPlayer>k__BackingField
    // Size: 0x1
    // Offset: 0x48
    bool isPlayer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDD3B84
    // private System.Boolean <isSpectating>k__BackingField
    // Size: 0x1
    // Offset: 0x49
    bool isSpectating;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDD3B94
    // private System.Boolean <isDedicatedServer>k__BackingField
    // Size: 0x1
    // Offset: 0x4A
    bool isDedicatedServer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDD3BA4
    // private System.Boolean <isConnected>k__BackingField
    // Size: 0x1
    // Offset: 0x4B
    bool isConnected;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDD3BB4
    // private System.Boolean <isWaitingOnJoin>k__BackingField
    // Size: 0x1
    // Offset: 0x4C
    bool isWaitingOnJoin;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDD3BC4
    // private System.Boolean <isWaitingOnInvite>k__BackingField
    // Size: 0x1
    // Offset: 0x4D
    bool isWaitingOnInvite;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: OculusNetworkPlayer
    OculusNetworkPlayer(GlobalNamespace::OculusNetworkPlayerModel* playerModel_ = {}, uint64_t id_ = {}, ::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, bool isMe_ = {}, bool removed_ = {}, ::Il2CppString* inviteToken_ = {}, Oculus::Platform::Models::Room* room_ = {}, bool isPlayer_ = {}, bool isSpectating_ = {}, bool isDedicatedServer_ = {}, bool isConnected_ = {}, bool isWaitingOnJoin_ = {}, bool isWaitingOnInvite_ = {}) noexcept : playerModel{playerModel_}, id{id_}, userId{userId_}, userName{userName_}, isMe{isMe_}, removed{removed_}, inviteToken{inviteToken_}, room{room_}, isPlayer{isPlayer_}, isSpectating{isSpectating_}, isDedicatedServer{isDedicatedServer_}, isConnected{isConnected_}, isWaitingOnJoin{isWaitingOnJoin_}, isWaitingOnInvite{isWaitingOnInvite_} {}
    // Creating interface conversion operator: operator GlobalNamespace::INetworkPlayer
    operator GlobalNamespace::INetworkPlayer() noexcept {
      return *reinterpret_cast<GlobalNamespace::INetworkPlayer*>(this);
    }
    // public System.UInt64 get_id()
    // Offset: 0x100DE38
    uint64_t get_id();
    // public System.Boolean get_isPartyOwner()
    // Offset: 0x100AE04
    bool get_isPartyOwner();
    // public System.Boolean get_isRoomOwner()
    // Offset: 0x100DE58
    bool get_isRoomOwner();
    // public System.Void .ctor(OculusNetworkPlayerModel playerModel, System.UInt64 id, System.String userName, System.Boolean isMe)
    // Offset: 0x100C1AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusNetworkPlayerModel::OculusNetworkPlayer* New_ctor(GlobalNamespace::OculusNetworkPlayerModel* playerModel, uint64_t id, ::Il2CppString* userName, bool isMe) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusNetworkPlayerModel::OculusNetworkPlayer*, creationType>(playerModel, id, userName, isMe)));
    }
    // public System.Void set_isPlayer(System.Boolean value)
    // Offset: 0x100E30C
    void set_isPlayer(bool value);
    // public System.Void set_isSpectating(System.Boolean value)
    // Offset: 0x100E320
    void set_isSpectating(bool value);
    // public System.Void set_isDedicatedServer(System.Boolean value)
    // Offset: 0x100E334
    void set_isDedicatedServer(bool value);
    // public System.Void set_isConnected(System.Boolean value)
    // Offset: 0x100E348
    void set_isConnected(bool value);
    // private System.Void set_isWaitingOnJoin(System.Boolean value)
    // Offset: 0x100E46C
    void set_isWaitingOnJoin(bool value);
    // public System.Void set_isWaitingOnInvite(System.Boolean value)
    // Offset: 0x100E57C
    void set_isWaitingOnInvite(bool value);
    // public System.Boolean SameRoomAs(OculusNetworkPlayerModel/OculusNetworkPlayer other)
    // Offset: 0x100C9AC
    bool SameRoomAs(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer* other);
    // private System.Void <Join>b__53_0(Oculus.Platform.Message`1<Oculus.Platform.Models.Room> result)
    // Offset: 0x100E874
    void $Join$b__53_0(Oculus::Platform::Message_1<Oculus::Platform::Models::Room*>* result);
    // public System.String get_userId()
    // Offset: 0x100DE40
    // Implemented from: INetworkPlayer
    // Base method: System.String INetworkPlayer::get_userId()
    ::Il2CppString* get_userId();
    // Creating proxy method: GlobalNamespace_INetworkPlayer_get_userId
    // Maps to method: get_userId
    ::Il2CppString* GlobalNamespace_INetworkPlayer_get_userId();
    // public System.String get_userName()
    // Offset: 0x100DE48
    // Implemented from: INetworkPlayer
    // Base method: System.String INetworkPlayer::get_userName()
    ::Il2CppString* get_userName();
    // Creating proxy method: GlobalNamespace_INetworkPlayer_get_userName
    // Maps to method: get_userName
    ::Il2CppString* GlobalNamespace_INetworkPlayer_get_userName();
    // public System.Boolean get_isMe()
    // Offset: 0x100DE50
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isMe()
    bool get_isMe();
    // public System.Int32 get_currentPartySize()
    // Offset: 0x100DEF4
    // Implemented from: INetworkPlayer
    // Base method: System.Int32 INetworkPlayer::get_currentPartySize()
    int get_currentPartySize();
    // public System.Int32 get_maxPartySize()
    // Offset: 0x100DFC0
    // Implemented from: INetworkPlayer
    // Base method: System.Int32 INetworkPlayer::get_maxPartySize()
    int get_maxPartySize();
    // public BeatmapDifficultyMask get_difficulties()
    // Offset: 0x100E078
    // Implemented from: INetworkPlayer
    // Base method: BeatmapDifficultyMask INetworkPlayer::get_difficulties()
    GlobalNamespace::BeatmapDifficultyMask get_difficulties();
    // public GameplayModifierMask get_modifiers()
    // Offset: 0x100E11C
    // Implemented from: INetworkPlayer
    // Base method: GameplayModifierMask INetworkPlayer::get_modifiers()
    GlobalNamespace::GameplayModifierMask get_modifiers();
    // public SongPackMask get_songPacks()
    // Offset: 0x100E1C0
    // Implemented from: INetworkPlayer
    // Base method: SongPackMask INetworkPlayer::get_songPacks()
    GlobalNamespace::SongPackMask get_songPacks();
    // public System.Boolean get_isMyPartyOwner()
    // Offset: 0x100E268
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isMyPartyOwner()
    bool get_isMyPartyOwner();
    // public System.Boolean get_isOpenParty()
    // Offset: 0x100E2E4
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isOpenParty()
    bool get_isOpenParty();
    // public System.Boolean get_isPlayer()
    // Offset: 0x100E304
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isPlayer()
    bool get_isPlayer();
    // public System.Boolean get_isSpectating()
    // Offset: 0x100E318
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isSpectating()
    bool get_isSpectating();
    // public System.Boolean get_isDedicatedServer()
    // Offset: 0x100E32C
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isDedicatedServer()
    bool get_isDedicatedServer();
    // public System.Boolean get_isConnected()
    // Offset: 0x100E340
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isConnected()
    bool get_isConnected();
    // public System.Boolean get_canJoin()
    // Offset: 0x100E354
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canJoin()
    bool get_canJoin();
    // public System.Void Join()
    // Offset: 0x100E374
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Join()
    void Join();
    // public System.Boolean get_requiresPassword()
    // Offset: 0x100E458
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_requiresPassword()
    bool get_requiresPassword();
    // public System.Void Join(System.String password)
    // Offset: 0x100E460
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Join(System.String password)
    void Join(::Il2CppString* password);
    // public System.Boolean get_isWaitingOnJoin()
    // Offset: 0x100E464
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isWaitingOnJoin()
    bool get_isWaitingOnJoin();
    // public System.Boolean get_canInvite()
    // Offset: 0x100E478
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canInvite()
    bool get_canInvite();
    // public System.Void Invite()
    // Offset: 0x100E4F8
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Invite()
    void Invite();
    // public System.Boolean get_isWaitingOnInvite()
    // Offset: 0x100E574
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isWaitingOnInvite()
    bool get_isWaitingOnInvite();
    // public System.Boolean get_canKick()
    // Offset: 0x100E588
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canKick()
    bool get_canKick();
    // public System.Void Kick()
    // Offset: 0x100E604
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Kick()
    void Kick();
    // public System.Boolean get_canLeave()
    // Offset: 0x100E730
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canLeave()
    bool get_canLeave();
    // public System.Void Leave()
    // Offset: 0x100E7CC
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Leave()
    void Leave();
    // public System.Boolean get_canBlock()
    // Offset: 0x100E7F0
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canBlock()
    bool get_canBlock();
    // public System.Void Block()
    // Offset: 0x100E7F8
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Block()
    void Block();
    // public System.Boolean get_canUnblock()
    // Offset: 0x100E7FC
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canUnblock()
    bool get_canUnblock();
    // public System.Void Unblock()
    // Offset: 0x100E804
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Unblock()
    void Unblock();
    // public System.Void SendJoinResponse(System.Boolean accept)
    // Offset: 0x100E808
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::SendJoinResponse(System.Boolean accept)
    void SendJoinResponse(bool accept);
    // public System.Void SendInviteResponse(System.Boolean accept)
    // Offset: 0x100E868
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::SendInviteResponse(System.Boolean accept)
    void SendInviteResponse(bool accept);
  }; // OculusNetworkPlayerModel/OculusNetworkPlayer
  static check_size<sizeof(OculusNetworkPlayerModel::OculusNetworkPlayer), 77 + sizeof(bool)> __GlobalNamespace_OculusNetworkPlayerModel_OculusNetworkPlayerSizeCheck;
  static_assert(sizeof(OculusNetworkPlayerModel::OculusNetworkPlayer) == 0x4E);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*, "", "OculusNetworkPlayerModel/OculusNetworkPlayer");
#pragma pack(pop)
