// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: GameplayRpcManager
#include "GlobalNamespace/GameplayRpcManager.hpp"
// Including type: RemoteProcedureCall`2
#include "GlobalNamespace/RemoteProcedureCall_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayersAtGameStartNetSerializable
  class PlayersAtGameStartNetSerializable;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: GameplayRpcManager/SetPlayerDidConnectLateRpc
  // [] Offset: FFFFFFFF
  class GameplayRpcManager::SetPlayerDidConnectLateRpc : public GlobalNamespace::RemoteProcedureCall_2<::Il2CppString*, GlobalNamespace::PlayersAtGameStartNetSerializable*> {
    public:
    // Creating value type constructor for type: SetPlayerDidConnectLateRpc
    SetPlayerDidConnectLateRpc() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1B4D85C
    // Implemented from: RemoteProcedureCall`2
    // Base method: System.Void RemoteProcedureCall_2::.ctor()
    // Base method: System.Void RemoteProcedureCall::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplayRpcManager::SetPlayerDidConnectLateRpc* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameplayRpcManager::SetPlayerDidConnectLateRpc::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplayRpcManager::SetPlayerDidConnectLateRpc*, creationType>()));
    }
  }; // GameplayRpcManager/SetPlayerDidConnectLateRpc
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayRpcManager::SetPlayerDidConnectLateRpc*, "", "GameplayRpcManager/SetPlayerDidConnectLateRpc");
