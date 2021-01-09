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
  // Forward declaring type: NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO
  class NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO;
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  // Autogenerated type: NetEaseAppInit
  // [] Offset: FFFFFFFF
  class NetEaseAppInit : public GlobalNamespace::AppInit {
    public:
    // private MainSystemInit _mainSystemInit
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MainSystemInit* mainSystemInit;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSystemInit*) == 0x8);
    // private NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO _netEaseLoginSceneTransitionSetupData
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO* netEaseLoginSceneTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO*) == 0x8);
    // private MainSettingsModelSO _mainSettingsModel
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSettingsModelSO*) == 0x8);
    // Creating value type constructor for type: NetEaseAppInit
    NetEaseAppInit(GlobalNamespace::MainSystemInit* mainSystemInit_ = {}, GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO* netEaseLoginSceneTransitionSetupData_ = {}, GlobalNamespace::MainSettingsModelSO* mainSettingsModel_ = {}) noexcept : mainSystemInit{mainSystemInit_}, netEaseLoginSceneTransitionSetupData{netEaseLoginSceneTransitionSetupData_}, mainSettingsModel{mainSettingsModel_} {}
    // protected override System.Void AppStartAndMultiSceneEditorSetup()
    // Offset: 0xFD67A8
    // Implemented from: AppInit
    // Base method: System.Void AppInit::AppStartAndMultiSceneEditorSetup()
    void AppStartAndMultiSceneEditorSetup();
    // protected override System.Void RepeatableSetup()
    // Offset: 0xFD6814
    // Implemented from: AppInit
    // Base method: System.Void AppInit::RepeatableSetup()
    void RepeatableSetup();
    // protected override System.Void TransitionToNextScene()
    // Offset: 0xFD6860
    // Implemented from: AppInit
    // Base method: System.Void AppInit::TransitionToNextScene()
    void TransitionToNextScene();
    // public override System.Void InstallBindings()
    // Offset: 0xFD68AC
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0xFD6938
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
    static NetEaseAppInit* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetEaseAppInit::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetEaseAppInit*, creationType>()));
    }
  }; // NetEaseAppInit
  static check_size<sizeof(NetEaseAppInit), 72 + sizeof(GlobalNamespace::MainSettingsModelSO*)> __GlobalNamespace_NetEaseAppInitSizeCheck;
  static_assert(sizeof(NetEaseAppInit) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetEaseAppInit*, "", "NetEaseAppInit");
#pragma pack(pop)
