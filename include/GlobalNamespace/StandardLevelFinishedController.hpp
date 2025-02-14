// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO;
  // Forward declaring type: PrepareLevelCompletionResults
  class PrepareLevelCompletionResults;
  // Forward declaring type: ILevelEndActions
  class ILevelEndActions;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: StandardLevelFinishedController
  class StandardLevelFinishedController : public UnityEngine::MonoBehaviour {
    public:
    // private StandardLevelScenesTransitionSetupDataSO _standardLevelSceneSetupData
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelSceneSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE1C860
    // private readonly PrepareLevelCompletionResults _prepareLevelCompletionResults
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::PrepareLevelCompletionResults* prepareLevelCompletionResults;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PrepareLevelCompletionResults*) == 0x8);
    // [InjectAttribute] Offset: 0xE1C870
    // private ILevelEndActions _gameplayManager
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ILevelEndActions* gameplayManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ILevelEndActions*) == 0x8);
    // Creating value type constructor for type: StandardLevelFinishedController
    StandardLevelFinishedController(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelSceneSetupData_ = {}, GlobalNamespace::PrepareLevelCompletionResults* prepareLevelCompletionResults_ = {}, GlobalNamespace::ILevelEndActions* gameplayManager_ = {}) noexcept : standardLevelSceneSetupData{standardLevelSceneSetupData_}, prepareLevelCompletionResults{prepareLevelCompletionResults_}, gameplayManager{gameplayManager_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x117C52C
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x117C618
    void OnDestroy();
    // private System.Void HandleLevelFinished()
    // Offset: 0x117C710
    void HandleLevelFinished();
    // private System.Void StartLevelFinished()
    // Offset: 0x117C714
    void StartLevelFinished();
    // public System.Void .ctor()
    // Offset: 0x117C75C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardLevelFinishedController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StandardLevelFinishedController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardLevelFinishedController*, creationType>()));
    }
  }; // StandardLevelFinishedController
  #pragma pack(pop)
  static check_size<sizeof(StandardLevelFinishedController), 40 + sizeof(GlobalNamespace::ILevelEndActions*)> __GlobalNamespace_StandardLevelFinishedControllerSizeCheck;
  static_assert(sizeof(StandardLevelFinishedController) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelFinishedController*, "", "StandardLevelFinishedController");
