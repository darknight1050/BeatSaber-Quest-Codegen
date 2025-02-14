// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IConnectedPlayer
#include "GlobalNamespace/IConnectedPlayer.hpp"
// Including type: MultiplayerAvatarData
#include "GlobalNamespace/MultiplayerAvatarData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: DisconnectedReason
  struct DisconnectedReason;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: DisconnectedPlayer
  class DisconnectedPlayer : public ::Il2CppObject/*, public GlobalNamespace::IConnectedPlayer*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDEFAFC
    // private System.String <userId>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDEFB0C
    // private System.String <userName>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDEFB1C
    // private readonly System.Int32 <sortIndex>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    int sortIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: sortIndex and: multiplayerAvatarData
    char __padding2[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDEFB2C
    // private readonly MultiplayerAvatarData <multiplayerAvatarData>k__BackingField
    // Size: 0x70
    // Offset: 0x28
    GlobalNamespace::MultiplayerAvatarData multiplayerAvatarData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerAvatarData) == 0x70);
    // Creating value type constructor for type: DisconnectedPlayer
    DisconnectedPlayer(::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, int sortIndex_ = {}, GlobalNamespace::MultiplayerAvatarData multiplayerAvatarData_ = {}) noexcept : userId{userId_}, userName{userName_}, sortIndex{sortIndex_}, multiplayerAvatarData{multiplayerAvatarData_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IConnectedPlayer
    operator GlobalNamespace::IConnectedPlayer() noexcept {
      return *reinterpret_cast<GlobalNamespace::IConnectedPlayer*>(this);
    }
    // public System.Single get_offsetSyncTime()
    // Offset: 0x130EBE0
    float get_offsetSyncTime();
    // public System.Boolean get_isFailed()
    // Offset: 0x130EBE8
    bool get_isFailed();
    // public System.Boolean get_isMe()
    // Offset: 0x130EBF0
    bool get_isMe();
    // public System.String get_userId()
    // Offset: 0x130EBF8
    ::Il2CppString* get_userId();
    // private System.Void set_userId(System.String value)
    // Offset: 0x130EC00
    void set_userId(::Il2CppString* value);
    // public System.String get_userName()
    // Offset: 0x130EC08
    ::Il2CppString* get_userName();
    // private System.Void set_userName(System.String value)
    // Offset: 0x130EC10
    void set_userName(::Il2CppString* value);
    // public System.Single get_currentLatency()
    // Offset: 0x130EC18
    float get_currentLatency();
    // public System.Boolean get_isConnected()
    // Offset: 0x130EC20
    bool get_isConnected();
    // public DisconnectedReason get_disconnectedReason()
    // Offset: 0x130EC28
    GlobalNamespace::DisconnectedReason get_disconnectedReason();
    // public System.Boolean get_isConnectionOwner()
    // Offset: 0x130EC30
    bool get_isConnectionOwner();
    // public System.Int32 get_sortIndex()
    // Offset: 0x130EC38
    int get_sortIndex();
    // public MultiplayerAvatarData get_multiplayerAvatarData()
    // Offset: 0x130EC40
    GlobalNamespace::MultiplayerAvatarData get_multiplayerAvatarData();
    // public System.Boolean get_isKicked()
    // Offset: 0x130EC50
    bool get_isKicked();
    // public System.Boolean HasState(System.String state)
    // Offset: 0x130EC58
    bool HasState(::Il2CppString* state);
    // public System.Void .ctor(System.String userId, System.String userName, System.Int32 sortIndex)
    // Offset: 0x130EC60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisconnectedPlayer* New_ctor(::Il2CppString* userId, ::Il2CppString* userName, int sortIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisconnectedPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisconnectedPlayer*, creationType>(userId, userName, sortIndex)));
    }
  }; // DisconnectedPlayer
  #pragma pack(pop)
  static check_size<sizeof(DisconnectedPlayer), 40 + sizeof(GlobalNamespace::MultiplayerAvatarData)> __GlobalNamespace_DisconnectedPlayerSizeCheck;
  static_assert(sizeof(DisconnectedPlayer) == 0x98);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DisconnectedPlayer*, "", "DisconnectedPlayer");
