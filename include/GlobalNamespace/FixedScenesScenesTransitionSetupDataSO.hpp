// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ScenesTransitionSetupDataSO
#include "GlobalNamespace/ScenesTransitionSetupDataSO.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SceneInfo
  class SceneInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FixedScenesScenesTransitionSetupDataSO
  class FixedScenesScenesTransitionSetupDataSO : public GlobalNamespace::ScenesTransitionSetupDataSO {
    public:
    // private SceneInfo[] _sceneInfos
    // Offset: 0x28
    ::Array<GlobalNamespace::SceneInfo*>* sceneInfos;
    // public System.Void Init()
    // Offset: 0xC0ED58
    void Init();
    // public System.Void .ctor()
    // Offset: 0xC0EDC4
    // Implemented from: ScenesTransitionSetupDataSO
    // Base method: System.Void ScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static FixedScenesScenesTransitionSetupDataSO* New_ctor();
  }; // FixedScenesScenesTransitionSetupDataSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FixedScenesScenesTransitionSetupDataSO*, "", "FixedScenesScenesTransitionSetupDataSO");
#pragma pack(pop)
