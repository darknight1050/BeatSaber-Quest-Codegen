// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLibConnectionManager
#include "GlobalNamespace/LiteNetLibConnectionManager.hpp"
// Including type: LiteNetLibConnectionManager/LiteNetLibConnectionParamsBase
#include "GlobalNamespace/LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  // Autogenerated type: LiteNetLibConnectionManager/StartServerParams
  // [] Offset: FFFFFFFF
  class LiteNetLibConnectionManager::StartServerParams : public GlobalNamespace::LiteNetLibConnectionManager::LiteNetLibConnectionParamsBase {
    public:
    // Creating value type constructor for type: StartServerParams
    StartServerParams() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1B52440
    // Implemented from: LiteNetLibConnectionManager/LiteNetLibConnectionParamsBase
    // Base method: System.Void LiteNetLibConnectionParamsBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LiteNetLibConnectionManager::StartServerParams* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LiteNetLibConnectionManager::StartServerParams::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LiteNetLibConnectionManager::StartServerParams*, creationType>()));
    }
  }; // LiteNetLibConnectionManager/StartServerParams
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LiteNetLibConnectionManager::StartServerParams*, "", "LiteNetLibConnectionManager/StartServerParams");
#pragma pack(pop)
