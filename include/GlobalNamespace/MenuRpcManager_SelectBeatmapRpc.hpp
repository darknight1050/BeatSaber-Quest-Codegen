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
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapIdentifierNetSerializable
  class BeatmapIdentifierNetSerializable;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MenuRpcManager/SelectBeatmapRpc
  // [] Offset: FFFFFFFF
  class MenuRpcManager::SelectBeatmapRpc : public GlobalNamespace::RemoteProcedureCall_1<GlobalNamespace::BeatmapIdentifierNetSerializable*> {
    public:
    // Creating value type constructor for type: SelectBeatmapRpc
    SelectBeatmapRpc() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x15BA81C
    // Implemented from: RemoteProcedureCall`1
    // Base method: System.Void RemoteProcedureCall_1::.ctor()
    // Base method: System.Void RemoteProcedureCall::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuRpcManager::SelectBeatmapRpc* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MenuRpcManager::SelectBeatmapRpc::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuRpcManager::SelectBeatmapRpc*, creationType>()));
    }
  }; // MenuRpcManager/SelectBeatmapRpc
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuRpcManager::SelectBeatmapRpc*, "", "MenuRpcManager/SelectBeatmapRpc");
