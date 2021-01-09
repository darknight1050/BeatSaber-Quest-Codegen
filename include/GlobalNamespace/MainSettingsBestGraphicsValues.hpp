// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  // Autogenerated type: MainSettingsBestGraphicsValues
  // [] Offset: FFFFFFFF
  class MainSettingsBestGraphicsValues : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: MainSettingsBestGraphicsValues
    MainSettingsBestGraphicsValues() noexcept {}
    // static public System.Void ApplyValues(MainSettingsModelSO mainSettingsModel)
    // Offset: 0x1A6EEB8
    static void ApplyValues(GlobalNamespace::MainSettingsModelSO* mainSettingsModel);
    // public System.Void .ctor()
    // Offset: 0x1A6EFFC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MainSettingsBestGraphicsValues* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MainSettingsBestGraphicsValues::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MainSettingsBestGraphicsValues*, creationType>()));
    }
  }; // MainSettingsBestGraphicsValues
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainSettingsBestGraphicsValues*, "", "MainSettingsBestGraphicsValues");
#pragma pack(pop)
