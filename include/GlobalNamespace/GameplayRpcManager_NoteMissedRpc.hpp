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
  // Forward declaring type: NoteMissInfoNetSerializable
  class NoteMissInfoNetSerializable;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: GameplayRpcManager/NoteMissedRpc
  // [] Offset: FFFFFFFF
  class GameplayRpcManager::NoteMissedRpc : public GlobalNamespace::RemoteProcedureCall_2<float, GlobalNamespace::NoteMissInfoNetSerializable*> {
    public:
    // Creating value type constructor for type: NoteMissedRpc
    NoteMissedRpc() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1B4D7A4
    // Implemented from: RemoteProcedureCall`2
    // Base method: System.Void RemoteProcedureCall_2::.ctor()
    // Base method: System.Void RemoteProcedureCall::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplayRpcManager::NoteMissedRpc* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameplayRpcManager::NoteMissedRpc::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplayRpcManager::NoteMissedRpc*, creationType>()));
    }
  }; // GameplayRpcManager/NoteMissedRpc
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayRpcManager::NoteMissedRpc*, "", "GameplayRpcManager/NoteMissedRpc");
