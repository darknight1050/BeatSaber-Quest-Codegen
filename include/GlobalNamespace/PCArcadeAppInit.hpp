// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AppInit
#include "GlobalNamespace/AppInit.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MainSystemInit
  class MainSystemInit;
  // Forward declaring type: SteamInit
  class SteamInit;
  // Forward declaring type: DefaultScenesTransitionsFromInit
  class DefaultScenesTransitionsFromInit;
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
  // Forward declaring type: VRsenalLogger
  class VRsenalLogger;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  // Autogenerated type: PCArcadeAppInit
  // [] Offset: FFFFFFFF
  class PCArcadeAppInit : public GlobalNamespace::AppInit {
    public:
    // private MainSystemInit _mainSystemInit
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MainSystemInit* mainSystemInit;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSystemInit*) == 0x8);
    // private SteamInit _steamInit
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::SteamInit* steamInit;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SteamInit*) == 0x8);
    // private DefaultScenesTransitionsFromInit _defaultScenesTransitionsFromInit
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::DefaultScenesTransitionsFromInit* defaultScenesTransitionsFromInit;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DefaultScenesTransitionsFromInit*) == 0x8);
    // private MainSettingsModelSO _mainSettingsModel
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSettingsModelSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xDC1594
    // private VRsenalLogger _vrsenalLoggerPrefab
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::VRsenalLogger* vrsenalLoggerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VRsenalLogger*) == 0x8);
    // Creating value type constructor for type: PCArcadeAppInit
    PCArcadeAppInit(GlobalNamespace::MainSystemInit* mainSystemInit_ = {}, GlobalNamespace::SteamInit* steamInit_ = {}, GlobalNamespace::DefaultScenesTransitionsFromInit* defaultScenesTransitionsFromInit_ = {}, GlobalNamespace::MainSettingsModelSO* mainSettingsModel_ = {}, GlobalNamespace::VRsenalLogger* vrsenalLoggerPrefab_ = {}) noexcept : mainSystemInit{mainSystemInit_}, steamInit{steamInit_}, defaultScenesTransitionsFromInit{defaultScenesTransitionsFromInit_}, mainSettingsModel{mainSettingsModel_}, vrsenalLoggerPrefab{vrsenalLoggerPrefab_} {}
    // protected override System.Void AppStartAndMultiSceneEditorSetup()
    // Offset: 0xF0173C
    // Implemented from: AppInit
    // Base method: System.Void AppInit::AppStartAndMultiSceneEditorSetup()
    void AppStartAndMultiSceneEditorSetup();
    // protected override System.Void RepeatableSetup()
    // Offset: 0xF017A8
    // Implemented from: AppInit
    // Base method: System.Void AppInit::RepeatableSetup()
    void RepeatableSetup();
    // protected override System.Void TransitionToNextScene()
    // Offset: 0xF017F4
    // Implemented from: AppInit
    // Base method: System.Void AppInit::TransitionToNextScene()
    void TransitionToNextScene();
    // public override System.Void InstallBindings()
    // Offset: 0xF01830
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0xF01914
    // Implemented from: AppInit
    // Base method: System.Void AppInit::.ctor()
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PCArcadeAppInit* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PCArcadeAppInit::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PCArcadeAppInit*, creationType>()));
    }
  }; // PCArcadeAppInit
  static check_size<sizeof(PCArcadeAppInit), 88 + sizeof(GlobalNamespace::VRsenalLogger*)> __GlobalNamespace_PCArcadeAppInitSizeCheck;
  static_assert(sizeof(PCArcadeAppInit) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PCArcadeAppInit*, "", "PCArcadeAppInit");
#pragma pack(pop)
