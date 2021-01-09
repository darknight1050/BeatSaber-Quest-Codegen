// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnifiedNetworkPlayerModel
#include "GlobalNamespace/UnifiedNetworkPlayerModel.hpp"
// Including type: INetworkPlayer
#include "GlobalNamespace/INetworkPlayer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
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
  // Size: 0x33
  // Autogenerated type: UnifiedNetworkPlayerModel/UnifiedNetworkPlayer
  // [] Offset: FFFFFFFF
  class UnifiedNetworkPlayerModel::UnifiedNetworkPlayer : public ::Il2CppObject/*, public GlobalNamespace::INetworkPlayer*/ {
    public:
    // private readonly UnifiedNetworkPlayerModel _playerModel
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::UnifiedNetworkPlayerModel* playerModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::UnifiedNetworkPlayerModel*) == 0x8);
    // private readonly System.String _userId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.String _userName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.Boolean _isMe
    // Size: 0x1
    // Offset: 0x28
    bool isMe;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isConnectionOwner
    // Size: 0x1
    // Offset: 0x29
    bool isConnectionOwner;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isConnectionOwner and: sortIndex
    char __padding4[0x2] = {};
    // private System.Int32 _sortIndex
    // Size: 0x4
    // Offset: 0x2C
    int sortIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDD3BD4
    // private System.Boolean <isPlayer>k__BackingField
    // Size: 0x1
    // Offset: 0x30
    bool isPlayer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDD3BE4
    // private System.Boolean <isDedicatedServer>k__BackingField
    // Size: 0x1
    // Offset: 0x31
    bool isDedicatedServer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDD3BF4
    // private System.Boolean <isSpectating>k__BackingField
    // Size: 0x1
    // Offset: 0x32
    bool isSpectating;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: UnifiedNetworkPlayer
    UnifiedNetworkPlayer(GlobalNamespace::UnifiedNetworkPlayerModel* playerModel_ = {}, ::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, bool isMe_ = {}, bool isConnectionOwner_ = {}, int sortIndex_ = {}, bool isPlayer_ = {}, bool isDedicatedServer_ = {}, bool isSpectating_ = {}) noexcept : playerModel{playerModel_}, userId{userId_}, userName{userName_}, isMe{isMe_}, isConnectionOwner{isConnectionOwner_}, sortIndex{sortIndex_}, isPlayer{isPlayer_}, isDedicatedServer{isDedicatedServer_}, isSpectating{isSpectating_} {}
    // Creating interface conversion operator: operator GlobalNamespace::INetworkPlayer
    operator GlobalNamespace::INetworkPlayer() noexcept {
      return *reinterpret_cast<GlobalNamespace::INetworkPlayer*>(this);
    }
    // public System.Void .ctor(UnifiedNetworkPlayerModel playerModel, System.String userId, System.String userName, System.Boolean isConnectionOwner, System.Boolean isMe)
    // Offset: 0xFFA350
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnifiedNetworkPlayerModel::UnifiedNetworkPlayer* New_ctor(GlobalNamespace::UnifiedNetworkPlayerModel* playerModel, ::Il2CppString* userId, ::Il2CppString* userName, bool isConnectionOwner, bool isMe) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*, creationType>(playerModel, userId, userName, isConnectionOwner, isMe)));
    }
    // public System.Int32 get_sortIndex()
    // Offset: 0xFFCEE4
    int get_sortIndex();
    // public System.Void set_sortIndex(System.Int32 value)
    // Offset: 0xFFCEEC
    void set_sortIndex(int value);
    // public System.Void set_isPlayer(System.Boolean value)
    // Offset: 0xFFD038
    void set_isPlayer(bool value);
    // public System.Void set_isDedicatedServer(System.Boolean value)
    // Offset: 0xFFD04C
    void set_isDedicatedServer(bool value);
    // public System.Void set_isSpectating(System.Boolean value)
    // Offset: 0xFFD060
    void set_isSpectating(bool value);
    // public System.Void SetIsConnectionOwner(System.Boolean isConnectionOwner)
    // Offset: 0xFFD174
    void SetIsConnectionOwner(bool isConnectionOwner);
    // public System.String get_userId()
    // Offset: 0xFFCECC
    // Implemented from: INetworkPlayer
    // Base method: System.String INetworkPlayer::get_userId()
    ::Il2CppString* get_userId();
    // Creating proxy method: GlobalNamespace_INetworkPlayer_get_userId
    // Maps to method: get_userId
    ::Il2CppString* GlobalNamespace_INetworkPlayer_get_userId();
    // public System.String get_userName()
    // Offset: 0xFFCED4
    // Implemented from: INetworkPlayer
    // Base method: System.String INetworkPlayer::get_userName()
    ::Il2CppString* get_userName();
    // Creating proxy method: GlobalNamespace_INetworkPlayer_get_userName
    // Maps to method: get_userName
    ::Il2CppString* GlobalNamespace_INetworkPlayer_get_userName();
    // public System.Boolean get_isMe()
    // Offset: 0xFFCEDC
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isMe()
    bool get_isMe();
    // public System.Int32 get_currentPartySize()
    // Offset: 0xFFCEF4
    // Implemented from: INetworkPlayer
    // Base method: System.Int32 INetworkPlayer::get_currentPartySize()
    int get_currentPartySize();
    // public System.Int32 get_maxPartySize()
    // Offset: 0xFFCF18
    // Implemented from: INetworkPlayer
    // Base method: System.Int32 INetworkPlayer::get_maxPartySize()
    int get_maxPartySize();
    // public System.Boolean get_isMyPartyOwner()
    // Offset: 0xFFCF3C
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isMyPartyOwner()
    bool get_isMyPartyOwner();
    // public BeatmapDifficultyMask get_difficulties()
    // Offset: 0xFFCF44
    // Implemented from: INetworkPlayer
    // Base method: BeatmapDifficultyMask INetworkPlayer::get_difficulties()
    GlobalNamespace::BeatmapDifficultyMask get_difficulties();
    // public GameplayModifierMask get_modifiers()
    // Offset: 0xFFCF80
    // Implemented from: INetworkPlayer
    // Base method: GameplayModifierMask INetworkPlayer::get_modifiers()
    GlobalNamespace::GameplayModifierMask get_modifiers();
    // public SongPackMask get_songPacks()
    // Offset: 0xFFCFBC
    // Implemented from: INetworkPlayer
    // Base method: SongPackMask INetworkPlayer::get_songPacks()
    GlobalNamespace::SongPackMask get_songPacks();
    // public System.Boolean get_isOpenParty()
    // Offset: 0xFFCFF8
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isOpenParty()
    bool get_isOpenParty();
    // public System.Boolean get_isConnected()
    // Offset: 0xFFD028
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isConnected()
    bool get_isConnected();
    // public System.Boolean get_isPlayer()
    // Offset: 0xFFD030
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isPlayer()
    bool get_isPlayer();
    // public System.Boolean get_isDedicatedServer()
    // Offset: 0xFFD044
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isDedicatedServer()
    bool get_isDedicatedServer();
    // public System.Boolean get_isSpectating()
    // Offset: 0xFFD058
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isSpectating()
    bool get_isSpectating();
    // public System.Boolean get_canJoin()
    // Offset: 0xFFD06C
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canJoin()
    bool get_canJoin();
    // public System.Void Join()
    // Offset: 0xFFD074
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Join()
    void Join();
    // public System.Boolean get_requiresPassword()
    // Offset: 0xFFD078
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_requiresPassword()
    bool get_requiresPassword();
    // public System.Void Join(System.String password)
    // Offset: 0xFFD080
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Join(System.String password)
    void Join(::Il2CppString* password);
    // public System.Boolean get_isWaitingOnJoin()
    // Offset: 0xFFD084
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isWaitingOnJoin()
    bool get_isWaitingOnJoin();
    // public System.Boolean get_canInvite()
    // Offset: 0xFFD08C
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canInvite()
    bool get_canInvite();
    // public System.Void Invite()
    // Offset: 0xFFD094
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Invite()
    void Invite();
    // public System.Boolean get_isWaitingOnInvite()
    // Offset: 0xFFD098
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_isWaitingOnInvite()
    bool get_isWaitingOnInvite();
    // public System.Boolean get_canKick()
    // Offset: 0xFFD0A0
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canKick()
    bool get_canKick();
    // public System.Void Kick()
    // Offset: 0xFFD0E0
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Kick()
    void Kick();
    // public System.Boolean get_canLeave()
    // Offset: 0xFFD114
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canLeave()
    bool get_canLeave();
    // public System.Void Leave()
    // Offset: 0xFFD130
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Leave()
    void Leave();
    // public System.Boolean get_canBlock()
    // Offset: 0xFFD154
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canBlock()
    bool get_canBlock();
    // public System.Void Block()
    // Offset: 0xFFD15C
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Block()
    void Block();
    // public System.Boolean get_canUnblock()
    // Offset: 0xFFD160
    // Implemented from: INetworkPlayer
    // Base method: System.Boolean INetworkPlayer::get_canUnblock()
    bool get_canUnblock();
    // public System.Void Unblock()
    // Offset: 0xFFD168
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::Unblock()
    void Unblock();
    // public System.Void SendJoinResponse(System.Boolean accept)
    // Offset: 0xFFD16C
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::SendJoinResponse(System.Boolean accept)
    void SendJoinResponse(bool accept);
    // public System.Void SendInviteResponse(System.Boolean accept)
    // Offset: 0xFFD170
    // Implemented from: INetworkPlayer
    // Base method: System.Void INetworkPlayer::SendInviteResponse(System.Boolean accept)
    void SendInviteResponse(bool accept);
  }; // UnifiedNetworkPlayerModel/UnifiedNetworkPlayer
  static check_size<sizeof(UnifiedNetworkPlayerModel::UnifiedNetworkPlayer), 50 + sizeof(bool)> __GlobalNamespace_UnifiedNetworkPlayerModel_UnifiedNetworkPlayerSizeCheck;
  static_assert(sizeof(UnifiedNetworkPlayerModel::UnifiedNetworkPlayer) == 0x33);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*, "", "UnifiedNetworkPlayerModel/UnifiedNetworkPlayer");
#pragma pack(pop)
