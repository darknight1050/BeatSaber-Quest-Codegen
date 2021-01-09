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
  // Forward declaring type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO;
  // Forward declaring type: PrepareLevelCompletionResults
  class PrepareLevelCompletionResults;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  // Autogenerated type: StandardLevelReturnToMenuController
  // [] Offset: FFFFFFFF
  class StandardLevelReturnToMenuController : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IReturnToMenuController*/ {
    public:
    // private StandardLevelScenesTransitionSetupDataSO _standardLevelSceneSetupData
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelSceneSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*) == 0x8);
    // [InjectAttribute] Offset: 0xDC86B0
    // private PrepareLevelCompletionResults _prepareLevelCompletionResults
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::PrepareLevelCompletionResults* prepareLevelCompletionResults;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PrepareLevelCompletionResults*) == 0x8);
    // Creating value type constructor for type: StandardLevelReturnToMenuController
    StandardLevelReturnToMenuController(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelSceneSetupData_ = {}, GlobalNamespace::PrepareLevelCompletionResults* prepareLevelCompletionResults_ = {}) noexcept : standardLevelSceneSetupData{standardLevelSceneSetupData_}, prepareLevelCompletionResults{prepareLevelCompletionResults_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IReturnToMenuController
    operator GlobalNamespace::IReturnToMenuController() noexcept {
      return *reinterpret_cast<GlobalNamespace::IReturnToMenuController*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void ReturnToMenu()
    // Offset: 0xF450DC
    // Implemented from: IReturnToMenuController
    // Base method: System.Void IReturnToMenuController::ReturnToMenu()
    void ReturnToMenu();
    // public System.Void .ctor()
    // Offset: 0xF45124
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardLevelReturnToMenuController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StandardLevelReturnToMenuController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardLevelReturnToMenuController*, creationType>()));
    }
  }; // StandardLevelReturnToMenuController
  static check_size<sizeof(StandardLevelReturnToMenuController), 32 + sizeof(GlobalNamespace::PrepareLevelCompletionResults*)> __GlobalNamespace_StandardLevelReturnToMenuControllerSizeCheck;
  static_assert(sizeof(StandardLevelReturnToMenuController) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelReturnToMenuController*, "", "StandardLevelReturnToMenuController");
#pragma pack(pop)
