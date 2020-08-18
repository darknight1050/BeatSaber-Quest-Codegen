// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AppInit
#include "GlobalNamespace/AppInit.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MainSystemInit
  class MainSystemInit;
  // Forward declaring type: OculusInit
  class OculusInit;
  // Forward declaring type: DefaultScenesTransitionsFromInit
  class DefaultScenesTransitionsFromInit;
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: QuestAppInit
  class QuestAppInit : public GlobalNamespace::AppInit {
    public:
    // private MainSystemInit _mainSystemInit
    // Offset: 0x38
    GlobalNamespace::MainSystemInit* mainSystemInit;
    // private OculusInit _oculusInit
    // Offset: 0x40
    GlobalNamespace::OculusInit* oculusInit;
    // private DefaultScenesTransitionsFromInit _defaultScenesTransitionsFromInit
    // Offset: 0x48
    GlobalNamespace::DefaultScenesTransitionsFromInit* defaultScenesTransitionsFromInit;
    // private MainSettingsModelSO _mainSettingsModel
    // Offset: 0x50
    GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // protected override System.Void AppStartAndMultiSceneEditorSetup()
    // Offset: 0xB93488
    // Implemented from: AppInit
    // Base method: System.Void AppInit::AppStartAndMultiSceneEditorSetup()
    void AppStartAndMultiSceneEditorSetup();
    // protected override System.Void RepeatableSetup()
    // Offset: 0xB934A4
    // Implemented from: AppInit
    // Base method: System.Void AppInit::RepeatableSetup()
    void RepeatableSetup();
    // protected override System.Void TransitionToNextScene()
    // Offset: 0xB934F0
    // Implemented from: AppInit
    // Base method: System.Void AppInit::TransitionToNextScene()
    void TransitionToNextScene();
    // public override System.Void InstallBindings()
    // Offset: 0xB9352C
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0xB935FC
    // Implemented from: AppInit
    // Base method: System.Void AppInit::.ctor()
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static QuestAppInit* New_ctor();
  }; // QuestAppInit
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::QuestAppInit*, "", "QuestAppInit");
#pragma pack(pop)
