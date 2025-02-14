// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
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
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: INetworkPlayer
  class INetworkPlayer {
    public:
    // Creating value type constructor for type: INetworkPlayer
    INetworkPlayer() noexcept {}
    // public System.String get_userId()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_userId();
    // public System.String get_userName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_userName();
    // public System.Boolean get_isMe()
    // Offset: 0xFFFFFFFF
    bool get_isMe();
    // public System.Int32 get_currentPartySize()
    // Offset: 0xFFFFFFFF
    int get_currentPartySize();
    // public System.Int32 get_maxPartySize()
    // Offset: 0xFFFFFFFF
    int get_maxPartySize();
    // public System.Boolean get_isMyPartyOwner()
    // Offset: 0xFFFFFFFF
    bool get_isMyPartyOwner();
    // public System.Boolean get_isOpenParty()
    // Offset: 0xFFFFFFFF
    bool get_isOpenParty();
    // public System.Boolean get_isConnected()
    // Offset: 0xFFFFFFFF
    bool get_isConnected();
    // public System.Boolean get_isPlayer()
    // Offset: 0xFFFFFFFF
    bool get_isPlayer();
    // public System.Boolean get_isDedicatedServer()
    // Offset: 0xFFFFFFFF
    bool get_isDedicatedServer();
    // public System.Boolean get_isSpectating()
    // Offset: 0xFFFFFFFF
    bool get_isSpectating();
    // public BeatmapDifficultyMask get_difficulties()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::BeatmapDifficultyMask get_difficulties();
    // public GameplayModifierMask get_modifiers()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::GameplayModifierMask get_modifiers();
    // public SongPackMask get_songPacks()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::SongPackMask get_songPacks();
    // public System.Boolean get_canJoin()
    // Offset: 0xFFFFFFFF
    bool get_canJoin();
    // public System.Void Join()
    // Offset: 0xFFFFFFFF
    void Join();
    // public System.Boolean get_requiresPassword()
    // Offset: 0xFFFFFFFF
    bool get_requiresPassword();
    // public System.Void Join(System.String password)
    // Offset: 0xFFFFFFFF
    void Join(::Il2CppString* password);
    // public System.Boolean get_isWaitingOnJoin()
    // Offset: 0xFFFFFFFF
    bool get_isWaitingOnJoin();
    // public System.Boolean get_canInvite()
    // Offset: 0xFFFFFFFF
    bool get_canInvite();
    // public System.Void Invite()
    // Offset: 0xFFFFFFFF
    void Invite();
    // public System.Boolean get_isWaitingOnInvite()
    // Offset: 0xFFFFFFFF
    bool get_isWaitingOnInvite();
    // public System.Boolean get_canKick()
    // Offset: 0xFFFFFFFF
    bool get_canKick();
    // public System.Void Kick()
    // Offset: 0xFFFFFFFF
    void Kick();
    // public System.Boolean get_canLeave()
    // Offset: 0xFFFFFFFF
    bool get_canLeave();
    // public System.Void Leave()
    // Offset: 0xFFFFFFFF
    void Leave();
    // public System.Boolean get_canBlock()
    // Offset: 0xFFFFFFFF
    bool get_canBlock();
    // public System.Void Block()
    // Offset: 0xFFFFFFFF
    void Block();
    // public System.Boolean get_canUnblock()
    // Offset: 0xFFFFFFFF
    bool get_canUnblock();
    // public System.Void Unblock()
    // Offset: 0xFFFFFFFF
    void Unblock();
    // public System.Void SendJoinResponse(System.Boolean accept)
    // Offset: 0xFFFFFFFF
    void SendJoinResponse(bool accept);
    // public System.Void SendInviteResponse(System.Boolean accept)
    // Offset: 0xFFFFFFFF
    void SendInviteResponse(bool accept);
  }; // INetworkPlayer
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::INetworkPlayer*, "", "INetworkPlayer");
