// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ManualUpdateManager
  // [] Offset: FFFFFFFF
  class ManualUpdateManager : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ManualUpdateManager
    ManualUpdateManager() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1126B24
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ManualUpdateManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ManualUpdateManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ManualUpdateManager*, creationType>()));
    }
  }; // ManualUpdateManager
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ManualUpdateManager*, "", "ManualUpdateManager");
