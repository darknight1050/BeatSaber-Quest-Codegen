// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ScenesTransitionSetupDataSO
#include "GlobalNamespace/ScenesTransitionSetupDataSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SceneInfo
  class SceneInfo;
  // Forward declaring type: SceneSetupData
  class SceneSetupData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: SingleFixedSceneScenesTransitionSetupDataSO
  class SingleFixedSceneScenesTransitionSetupDataSO : public GlobalNamespace::ScenesTransitionSetupDataSO {
    public:
    // private SceneInfo _sceneInfo
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::SceneInfo* sceneInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SceneInfo*) == 0x8);
    // Creating value type constructor for type: SingleFixedSceneScenesTransitionSetupDataSO
    SingleFixedSceneScenesTransitionSetupDataSO(GlobalNamespace::SceneInfo* sceneInfo_ = {}) noexcept : sceneInfo{sceneInfo_} {}
    // public SceneInfo get_sceneInfo()
    // Offset: 0x2351480
    GlobalNamespace::SceneInfo* get_sceneInfo();
    // protected System.Void Init(SceneSetupData sceneSetupData)
    // Offset: 0x2351488
    void Init(GlobalNamespace::SceneSetupData* sceneSetupData);
    // public System.Void .ctor()
    // Offset: 0x2351578
    // Implemented from: ScenesTransitionSetupDataSO
    // Base method: System.Void ScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SingleFixedSceneScenesTransitionSetupDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SingleFixedSceneScenesTransitionSetupDataSO*, creationType>()));
    }
  }; // SingleFixedSceneScenesTransitionSetupDataSO
  #pragma pack(pop)
  static check_size<sizeof(SingleFixedSceneScenesTransitionSetupDataSO), 40 + sizeof(GlobalNamespace::SceneInfo*)> __GlobalNamespace_SingleFixedSceneScenesTransitionSetupDataSOSizeCheck;
  static_assert(sizeof(SingleFixedSceneScenesTransitionSetupDataSO) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO*, "", "SingleFixedSceneScenesTransitionSetupDataSO");
