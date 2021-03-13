// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SinglePlayerLevelSelectionFlowCoordinator
#include "GlobalNamespace/SinglePlayerLevelSelectionFlowCoordinator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MenuLightsPresetSO
  class MenuLightsPresetSO;
  // Forward declaring type: MenuLightsManager
  class MenuLightsManager;
  // Forward declaring type: ResultsViewController
  class ResultsViewController;
  // Forward declaring type: PlatformLeaderboardViewController
  class PlatformLeaderboardViewController;
  // Forward declaring type: PlatformLeaderboardsModel
  class PlatformLeaderboardsModel;
  // Forward declaring type: PlayerLevelStatsData
  class PlayerLevelStatsData;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: LeaderboardViewController
  class LeaderboardViewController;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x148
  #pragma pack(push, 1)
  // Autogenerated type: SoloFreePlayFlowCoordinator
  // [] Offset: FFFFFFFF
  class SoloFreePlayFlowCoordinator : public GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator {
    public:
    // Nested type: GlobalNamespace::SoloFreePlayFlowCoordinator::$$c__DisplayClass23_0
    class $$c__DisplayClass23_0;
    // private MenuLightsPresetSO _defaultLightsPreset
    // Size: 0x8
    // Offset: 0x110
    GlobalNamespace::MenuLightsPresetSO* defaultLightsPreset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsPresetSO*) == 0x8);
    // private MenuLightsPresetSO _resultsClearedLightsPreset
    // Size: 0x8
    // Offset: 0x118
    GlobalNamespace::MenuLightsPresetSO* resultsClearedLightsPreset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsPresetSO*) == 0x8);
    // private MenuLightsPresetSO _resultsFailedLightsPreset
    // Size: 0x8
    // Offset: 0x120
    GlobalNamespace::MenuLightsPresetSO* resultsFailedLightsPreset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsPresetSO*) == 0x8);
    // [InjectAttribute] Offset: 0xD2C7BC
    // private readonly MenuLightsManager _menuLightsManager
    // Size: 0x8
    // Offset: 0x128
    GlobalNamespace::MenuLightsManager* menuLightsManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsManager*) == 0x8);
    // [InjectAttribute] Offset: 0xD2C7CC
    // private readonly ResultsViewController _resultsViewController
    // Size: 0x8
    // Offset: 0x130
    GlobalNamespace::ResultsViewController* resultsViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ResultsViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xD2C7DC
    // private readonly PlatformLeaderboardViewController _platformLeaderboardViewController
    // Size: 0x8
    // Offset: 0x138
    GlobalNamespace::PlatformLeaderboardViewController* platformLeaderboardViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlatformLeaderboardViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xD2C7EC
    // private readonly PlatformLeaderboardsModel _platformLeaderboardsModel
    // Size: 0x8
    // Offset: 0x140
    GlobalNamespace::PlatformLeaderboardsModel* platformLeaderboardsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlatformLeaderboardsModel*) == 0x8);
    // Creating value type constructor for type: SoloFreePlayFlowCoordinator
    SoloFreePlayFlowCoordinator(GlobalNamespace::MenuLightsPresetSO* defaultLightsPreset_ = {}, GlobalNamespace::MenuLightsPresetSO* resultsClearedLightsPreset_ = {}, GlobalNamespace::MenuLightsPresetSO* resultsFailedLightsPreset_ = {}, GlobalNamespace::MenuLightsManager* menuLightsManager_ = {}, GlobalNamespace::ResultsViewController* resultsViewController_ = {}, GlobalNamespace::PlatformLeaderboardViewController* platformLeaderboardViewController_ = {}, GlobalNamespace::PlatformLeaderboardsModel* platformLeaderboardsModel_ = {}) noexcept : defaultLightsPreset{defaultLightsPreset_}, resultsClearedLightsPreset{resultsClearedLightsPreset_}, resultsFailedLightsPreset{resultsFailedLightsPreset_}, menuLightsManager{menuLightsManager_}, resultsViewController{resultsViewController_}, platformLeaderboardViewController{platformLeaderboardViewController_}, platformLeaderboardsModel{platformLeaderboardsModel_} {}
    // private System.Boolean IsNewHighScore(PlayerLevelStatsData playerLevelStats, LevelCompletionResults levelCompletionResults)
    // Offset: 0xF78B10
    bool IsNewHighScore(GlobalNamespace::PlayerLevelStatsData* playerLevelStats, GlobalNamespace::LevelCompletionResults* levelCompletionResults);
    // private System.Void HandleResultsViewControllerContinueButtonPressed(ResultsViewController viewController)
    // Offset: 0xF78B88
    void HandleResultsViewControllerContinueButtonPressed(GlobalNamespace::ResultsViewController* viewController);
    // private System.Void HandleResultsViewControllerRestartButtonPressed(ResultsViewController resultsViewController)
    // Offset: 0xF78BD0
    void HandleResultsViewControllerRestartButtonPressed(GlobalNamespace::ResultsViewController* resultsViewController);
    // protected override System.String get_gameMode()
    // Offset: 0xF786BC
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.String SinglePlayerLevelSelectionFlowCoordinator::get_gameMode_NEW()
    ::Il2CppString* get_gameMode();
    // protected override LeaderboardViewController get_leaderboardViewController()
    // Offset: 0xF78704
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: LeaderboardViewController SinglePlayerLevelSelectionFlowCoordinator::get_leaderboardViewController_NEW()
    GlobalNamespace::LeaderboardViewController* get_leaderboardViewController();
    // protected override System.Boolean get_showPlayerStatsInDetailView()
    // Offset: 0xF7870C
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_showPlayerStatsInDetailView_NEW()
    bool get_showPlayerStatsInDetailView();
    // protected override System.Boolean get_showBackButtonForMainViewController()
    // Offset: 0xF78714
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_showBackButtonForMainViewController_NEW()
    bool get_showBackButtonForMainViewController();
    // protected override System.String get_mainTitle()
    // Offset: 0xF7871C
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.String LevelSelectionFlowCoordinator::get_mainTitle_NEW()
    ::Il2CppString* get_mainTitle();
    // protected override System.Void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    // Offset: 0xF78768
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate_NEW(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy);
    // protected override System.Void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(System.Boolean removedFromHierarchy)
    // Offset: 0xF78874
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate_NEW(System.Boolean removedFromHierarchy)
    void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy);
    // protected override System.Void ProcessLevelCompletionResultsAfterLevelDidFinish(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    // Offset: 0xF789A0
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish_NEW(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    void ProcessLevelCompletionResultsAfterLevelDidFinish(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice);
    // protected override System.Void Refresh()
    // Offset: 0xF78B3C
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Void LevelSelectionFlowCoordinator::Refresh_NEW()
    void Refresh();
    // public System.Void .ctor()
    // Offset: 0xF78C8C
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::.ctor()
    // Base method: System.Void LevelSelectionFlowCoordinator::.ctor()
    // Base method: System.Void FlowCoordinator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SoloFreePlayFlowCoordinator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SoloFreePlayFlowCoordinator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SoloFreePlayFlowCoordinator*, creationType>()));
    }
  }; // SoloFreePlayFlowCoordinator
  #pragma pack(pop)
  static check_size<sizeof(SoloFreePlayFlowCoordinator), 320 + sizeof(GlobalNamespace::PlatformLeaderboardsModel*)> __GlobalNamespace_SoloFreePlayFlowCoordinatorSizeCheck;
  static_assert(sizeof(SoloFreePlayFlowCoordinator) == 0x148);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SoloFreePlayFlowCoordinator*, "", "SoloFreePlayFlowCoordinator");
