// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HostGameServerLobbyFlowCoordinator
#include "GlobalNamespace/HostGameServerLobbyFlowCoordinator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  // Autogenerated type: HostGameServerLobbyFlowCoordinator/<>c__DisplayClass30_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DBF844
  class HostGameServerLobbyFlowCoordinator::$$c__DisplayClass30_0 : public ::Il2CppObject {
    public:
    // public System.String userId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public INetworkPlayer playerToKick
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::INetworkPlayer* playerToKick;
    // Field size check
    static_assert(sizeof(GlobalNamespace::INetworkPlayer*) == 0x8);
    // public HostGameServerLobbyFlowCoordinator <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::HostGameServerLobbyFlowCoordinator* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HostGameServerLobbyFlowCoordinator*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass30_0
    $$c__DisplayClass30_0(::Il2CppString* userId_ = {}, GlobalNamespace::INetworkPlayer* playerToKick_ = {}, GlobalNamespace::HostGameServerLobbyFlowCoordinator* $$4__this_ = {}) noexcept : userId{userId_}, playerToKick{playerToKick_}, $$4__this{$$4__this_} {}
    // System.Boolean <HandleServerPlayerListControllerKickPlayer>b__0(INetworkPlayer player)
    // Offset: 0xF19AD0
    bool $HandleServerPlayerListControllerKickPlayer$b__0(GlobalNamespace::INetworkPlayer* player);
    // System.Void <HandleServerPlayerListControllerKickPlayer>b__1(System.Int32 btnId)
    // Offset: 0xF19B94
    void $HandleServerPlayerListControllerKickPlayer$b__1(int btnId);
    // public System.Void .ctor()
    // Offset: 0xF18848
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HostGameServerLobbyFlowCoordinator::$$c__DisplayClass30_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HostGameServerLobbyFlowCoordinator::$$c__DisplayClass30_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HostGameServerLobbyFlowCoordinator::$$c__DisplayClass30_0*, creationType>()));
    }
  }; // HostGameServerLobbyFlowCoordinator/<>c__DisplayClass30_0
  static check_size<sizeof(HostGameServerLobbyFlowCoordinator::$$c__DisplayClass30_0), 32 + sizeof(GlobalNamespace::HostGameServerLobbyFlowCoordinator*)> __GlobalNamespace_HostGameServerLobbyFlowCoordinator_$$c__DisplayClass30_0SizeCheck;
  static_assert(sizeof(HostGameServerLobbyFlowCoordinator::$$c__DisplayClass30_0) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HostGameServerLobbyFlowCoordinator::$$c__DisplayClass30_0*, "", "HostGameServerLobbyFlowCoordinator/<>c__DisplayClass30_0");
#pragma pack(pop)
