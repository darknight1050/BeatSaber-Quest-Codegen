// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SceneSetupData
#include "GlobalNamespace/SceneSetupData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ShaderWarmupSceneSetupData
  class ShaderWarmupSceneSetupData : public GlobalNamespace::SceneSetupData {
    public:
    // private ScenesTransitionSetupDataSO <nextScenesTransitionSetupData>k__BackingField
    // Offset: 0x10
    GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData;
    // public ScenesTransitionSetupDataSO get_nextScenesTransitionSetupData()
    // Offset: 0xBA3090
    GlobalNamespace::ScenesTransitionSetupDataSO* get_nextScenesTransitionSetupData();
    // private System.Void set_nextScenesTransitionSetupData(ScenesTransitionSetupDataSO value)
    // Offset: 0xBA3098
    void set_nextScenesTransitionSetupData(GlobalNamespace::ScenesTransitionSetupDataSO* value);
    // public System.Void .ctor(ScenesTransitionSetupDataSO nextScenesTransitionSetupData)
    // Offset: 0xBA30A0
    static ShaderWarmupSceneSetupData* New_ctor(GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData);
  }; // ShaderWarmupSceneSetupData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ShaderWarmupSceneSetupData*, "", "ShaderWarmupSceneSetupData");
#pragma pack(pop)
