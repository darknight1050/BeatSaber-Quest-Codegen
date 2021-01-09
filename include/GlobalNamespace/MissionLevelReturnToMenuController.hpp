// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IReturnToMenuController
#include "GlobalNamespace/IReturnToMenuController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionLevelScenesTransitionSetupDataSO
  class MissionLevelScenesTransitionSetupDataSO;
  // Forward declaring type: PrepareLevelCompletionResults
  class PrepareLevelCompletionResults;
  // Forward declaring type: MissionObjectiveCheckersManager
  class MissionObjectiveCheckersManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  // Autogenerated type: MissionLevelReturnToMenuController
  // [] Offset: FFFFFFFF
  class MissionLevelReturnToMenuController : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IReturnToMenuController*/ {
    public:
    // private MissionLevelScenesTransitionSetupDataSO _missionLevelSceneSetupData
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelSceneSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*) == 0x8);
    // private PrepareLevelCompletionResults _prepareLevelCompletionResults
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::PrepareLevelCompletionResults* prepareLevelCompletionResults;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PrepareLevelCompletionResults*) == 0x8);
    // private MissionObjectiveCheckersManager _missionObjectiveCheckersManager
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MissionObjectiveCheckersManager* missionObjectiveCheckersManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionObjectiveCheckersManager*) == 0x8);
    // Creating value type constructor for type: MissionLevelReturnToMenuController
    MissionLevelReturnToMenuController(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelSceneSetupData_ = {}, GlobalNamespace::PrepareLevelCompletionResults* prepareLevelCompletionResults_ = {}, GlobalNamespace::MissionObjectiveCheckersManager* missionObjectiveCheckersManager_ = {}) noexcept : missionLevelSceneSetupData{missionLevelSceneSetupData_}, prepareLevelCompletionResults{prepareLevelCompletionResults_}, missionObjectiveCheckersManager{missionObjectiveCheckersManager_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IReturnToMenuController
    operator GlobalNamespace::IReturnToMenuController() noexcept {
      return *reinterpret_cast<GlobalNamespace::IReturnToMenuController*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void ReturnToMenu()
    // Offset: 0x101AA84
    // Implemented from: IReturnToMenuController
    // Base method: System.Void IReturnToMenuController::ReturnToMenu()
    void ReturnToMenu();
    // public System.Void .ctor()
    // Offset: 0x101AB30
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionLevelReturnToMenuController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionLevelReturnToMenuController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionLevelReturnToMenuController*, creationType>()));
    }
  }; // MissionLevelReturnToMenuController
  static check_size<sizeof(MissionLevelReturnToMenuController), 40 + sizeof(GlobalNamespace::MissionObjectiveCheckersManager*)> __GlobalNamespace_MissionLevelReturnToMenuControllerSizeCheck;
  static_assert(sizeof(MissionLevelReturnToMenuController) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionLevelReturnToMenuController*, "", "MissionLevelReturnToMenuController");
#pragma pack(pop)
