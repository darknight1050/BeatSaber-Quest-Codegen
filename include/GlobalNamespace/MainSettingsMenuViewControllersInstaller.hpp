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
  // Forward declaring type: MainSettingsMenuViewController
  class MainSettingsMenuViewController;
  // Forward declaring type: TabBarViewController
  class TabBarViewController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  // Autogenerated type: MainSettingsMenuViewControllersInstaller
  // [] Offset: FFFFFFFF
  class MainSettingsMenuViewControllersInstaller : public Zenject::MonoInstaller {
    public:
    // private MainSettingsMenuViewController _defaultSettingsMenuViewController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MainSettingsMenuViewController* defaultSettingsMenuViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSettingsMenuViewController*) == 0x8);
    // private MainSettingsMenuViewController _oculusPCSettingsMenuViewController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MainSettingsMenuViewController* oculusPCSettingsMenuViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSettingsMenuViewController*) == 0x8);
    // private MainSettingsMenuViewController _questSettingsMenuViewController
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MainSettingsMenuViewController* questSettingsMenuViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSettingsMenuViewController*) == 0x8);
    // private MainSettingsMenuViewController _psvrSettingsMenuViewController
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MainSettingsMenuViewController* psvrSettingsMenuViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSettingsMenuViewController*) == 0x8);
    // private TabBarViewController _tabBarViewControllerPrefab
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::TabBarViewController* tabBarViewControllerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TabBarViewController*) == 0x8);
    // Creating value type constructor for type: MainSettingsMenuViewControllersInstaller
    MainSettingsMenuViewControllersInstaller(GlobalNamespace::MainSettingsMenuViewController* defaultSettingsMenuViewController_ = {}, GlobalNamespace::MainSettingsMenuViewController* oculusPCSettingsMenuViewController_ = {}, GlobalNamespace::MainSettingsMenuViewController* questSettingsMenuViewController_ = {}, GlobalNamespace::MainSettingsMenuViewController* psvrSettingsMenuViewController_ = {}, GlobalNamespace::TabBarViewController* tabBarViewControllerPrefab_ = {}) noexcept : defaultSettingsMenuViewController{defaultSettingsMenuViewController_}, oculusPCSettingsMenuViewController{oculusPCSettingsMenuViewController_}, questSettingsMenuViewController{questSettingsMenuViewController_}, psvrSettingsMenuViewController{psvrSettingsMenuViewController_}, tabBarViewControllerPrefab{tabBarViewControllerPrefab_} {}
    // public override System.Void InstallBindings()
    // Offset: 0x1A6F568
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0x1A6F60C
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MainSettingsMenuViewControllersInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MainSettingsMenuViewControllersInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MainSettingsMenuViewControllersInstaller*, creationType>()));
    }
  }; // MainSettingsMenuViewControllersInstaller
  static check_size<sizeof(MainSettingsMenuViewControllersInstaller), 64 + sizeof(GlobalNamespace::TabBarViewController*)> __GlobalNamespace_MainSettingsMenuViewControllersInstallerSizeCheck;
  static_assert(sizeof(MainSettingsMenuViewControllersInstaller) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainSettingsMenuViewControllersInstaller*, "", "MainSettingsMenuViewControllersInstaller");
#pragma pack(pop)
