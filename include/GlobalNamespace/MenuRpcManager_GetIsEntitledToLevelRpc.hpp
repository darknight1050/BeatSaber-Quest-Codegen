// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MenuRpcManager
#include "GlobalNamespace/MenuRpcManager.hpp"
// Including type: RemoteProcedureCall`1
#include "GlobalNamespace/RemoteProcedureCall_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MenuRpcManager/GetIsEntitledToLevelRpc
  // [] Offset: FFFFFFFF
  class MenuRpcManager::GetIsEntitledToLevelRpc : public GlobalNamespace::RemoteProcedureCall_1<::Il2CppString*> {
    public:
    // Creating value type constructor for type: GetIsEntitledToLevelRpc
    GetIsEntitledToLevelRpc() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1E48E3C
    // Implemented from: RemoteProcedureCall`1
    // Base method: System.Void RemoteProcedureCall_1::.ctor()
    // Base method: System.Void RemoteProcedureCall::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuRpcManager::GetIsEntitledToLevelRpc* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MenuRpcManager::GetIsEntitledToLevelRpc::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuRpcManager::GetIsEntitledToLevelRpc*, creationType>()));
    }
  }; // MenuRpcManager/GetIsEntitledToLevelRpc
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuRpcManager::GetIsEntitledToLevelRpc*, "", "MenuRpcManager/GetIsEntitledToLevelRpc");
