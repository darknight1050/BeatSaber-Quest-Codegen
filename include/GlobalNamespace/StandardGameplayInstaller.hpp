// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StandardGameplaySceneSetupData
  class StandardGameplaySceneSetupData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: StandardGameplayInstaller
  // [] Offset: FFFFFFFF
  class StandardGameplayInstaller : public Zenject::MonoInstaller {
    public:
    // [InjectAttribute] Offset: 0xD2A6B8
    // private readonly StandardGameplaySceneSetupData _standardSceneSetupData
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::StandardGameplaySceneSetupData* standardSceneSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StandardGameplaySceneSetupData*) == 0x8);
    // Creating value type constructor for type: StandardGameplayInstaller
    StandardGameplayInstaller(GlobalNamespace::StandardGameplaySceneSetupData* standardSceneSetupData_ = {}) noexcept : standardSceneSetupData{standardSceneSetupData_} {}
    // public override System.Void InstallBindings()
    // Offset: 0x100F070
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings_NEW()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0x100F2D8
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardGameplayInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StandardGameplayInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardGameplayInstaller*, creationType>()));
    }
  }; // StandardGameplayInstaller
  #pragma pack(pop)
  static check_size<sizeof(StandardGameplayInstaller), 32 + sizeof(GlobalNamespace::StandardGameplaySceneSetupData*)> __GlobalNamespace_StandardGameplayInstallerSizeCheck;
  static_assert(sizeof(StandardGameplayInstaller) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardGameplayInstaller*, "", "StandardGameplayInstaller");
