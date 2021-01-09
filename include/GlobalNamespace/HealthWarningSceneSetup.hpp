// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HealthWarningSceneSetupData
  class HealthWarningSceneSetupData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  // Autogenerated type: HealthWarningSceneSetup
  // [] Offset: FFFFFFFF
  class HealthWarningSceneSetup : public Zenject::MonoInstaller {
    public:
    // [InjectAttribute] Offset: 0xDD2C20
    // private HealthWarningSceneSetupData _sceneSetupData
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::HealthWarningSceneSetupData* sceneSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HealthWarningSceneSetupData*) == 0x8);
    // Creating value type constructor for type: HealthWarningSceneSetup
    HealthWarningSceneSetup(GlobalNamespace::HealthWarningSceneSetupData* sceneSetupData_ = {}) noexcept : sceneSetupData{sceneSetupData_} {}
    // public override System.Void InstallBindings()
    // Offset: 0xF13AD8
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0xF13C6C
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HealthWarningSceneSetup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HealthWarningSceneSetup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HealthWarningSceneSetup*, creationType>()));
    }
  }; // HealthWarningSceneSetup
  static check_size<sizeof(HealthWarningSceneSetup), 32 + sizeof(GlobalNamespace::HealthWarningSceneSetupData*)> __GlobalNamespace_HealthWarningSceneSetupSizeCheck;
  static_assert(sizeof(HealthWarningSceneSetup) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HealthWarningSceneSetup*, "", "HealthWarningSceneSetup");
#pragma pack(pop)
