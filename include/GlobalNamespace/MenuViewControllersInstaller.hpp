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
  // Forward declaring type: ServerPlayerListController
  class ServerPlayerListController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  // Autogenerated type: MenuViewControllersInstaller
  // [] Offset: FFFFFFFF
  class MenuViewControllersInstaller : public Zenject::MonoInstaller {
    public:
    // private ServerPlayerListController _normalServerPlayerListController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ServerPlayerListController* normalServerPlayerListController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ServerPlayerListController*) == 0x8);
    // private ServerPlayerListController _quickPlayServerPlayerListController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ServerPlayerListController* quickPlayServerPlayerListController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ServerPlayerListController*) == 0x8);
    // Creating value type constructor for type: MenuViewControllersInstaller
    MenuViewControllersInstaller(GlobalNamespace::ServerPlayerListController* normalServerPlayerListController_ = {}, GlobalNamespace::ServerPlayerListController* quickPlayServerPlayerListController_ = {}) noexcept : normalServerPlayerListController{normalServerPlayerListController_}, quickPlayServerPlayerListController{quickPlayServerPlayerListController_} {}
    // public override System.Void InstallBindings()
    // Offset: 0x1A73EE4
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0x1A73FA4
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuViewControllersInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MenuViewControllersInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuViewControllersInstaller*, creationType>()));
    }
  }; // MenuViewControllersInstaller
  static check_size<sizeof(MenuViewControllersInstaller), 40 + sizeof(GlobalNamespace::ServerPlayerListController*)> __GlobalNamespace_MenuViewControllersInstallerSizeCheck;
  static_assert(sizeof(MenuViewControllersInstaller) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuViewControllersInstaller*, "", "MenuViewControllersInstaller");
#pragma pack(pop)
