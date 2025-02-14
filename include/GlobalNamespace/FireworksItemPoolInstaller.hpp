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
  // Forward declaring type: FireworksController
  class FireworksController;
  // Forward declaring type: FireworkItemController
  class FireworkItemController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: FireworksItemPoolInstaller
  class FireworksItemPoolInstaller : public Zenject::MonoInstaller {
    public:
    // private FireworksController _fireworksController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::FireworksController* fireworksController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FireworksController*) == 0x8);
    // private FireworkItemController _fireworkItemControllerPrefab
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::FireworkItemController* fireworkItemControllerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FireworkItemController*) == 0x8);
    // Creating value type constructor for type: FireworksItemPoolInstaller
    FireworksItemPoolInstaller(GlobalNamespace::FireworksController* fireworksController_ = {}, GlobalNamespace::FireworkItemController* fireworkItemControllerPrefab_ = {}) noexcept : fireworksController{fireworksController_}, fireworkItemControllerPrefab{fireworkItemControllerPrefab_} {}
    // public override System.Void InstallBindings()
    // Offset: 0x10C6A8C
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0x10C6B1C
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FireworksItemPoolInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FireworksItemPoolInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FireworksItemPoolInstaller*, creationType>()));
    }
  }; // FireworksItemPoolInstaller
  #pragma pack(pop)
  static check_size<sizeof(FireworksItemPoolInstaller), 40 + sizeof(GlobalNamespace::FireworkItemController*)> __GlobalNamespace_FireworksItemPoolInstallerSizeCheck;
  static_assert(sizeof(FireworksItemPoolInstaller) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FireworksItemPoolInstaller*, "", "FireworksItemPoolInstaller");
