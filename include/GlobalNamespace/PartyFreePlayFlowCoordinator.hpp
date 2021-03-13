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
  // Forward declaring type: LocalLeaderboardViewController
  class LocalLeaderboardViewController;
  // Forward declaring type: EnterPlayerGuestNameViewController
  class EnterPlayerGuestNameViewController;
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
  // Autogenerated type: PartyFreePlayFlowCoordinator
  // [] Offset: FFFFFFFF
  class PartyFreePlayFlowCoordinator : public GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator {
    public:
    // Nested type: GlobalNamespace::PartyFreePlayFlowCoordinator::$$c__DisplayClass19_0
    class $$c__DisplayClass19_0;
    // Nested type: GlobalNamespace::PartyFreePlayFlowCoordinator::$$c__DisplayClass24_0
    class $$c__DisplayClass24_0;
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
    // [InjectAttribute] Offset: 0xD2C494
    // private readonly MenuLightsManager _menuLightsManager
    // Size: 0x8
    // Offset: 0x128
    GlobalNamespace::MenuLightsManager* menuLightsManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsManager*) == 0x8);
    // [InjectAttribute] Offset: 0xD2C4A4
    // private readonly ResultsViewController _resultsViewController
    // Size: 0x8
    // Offset: 0x130
    GlobalNamespace::ResultsViewController* resultsViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ResultsViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xD2C4B4
    // private readonly LocalLeaderboardViewController _localLeaderboardViewController
    // Size: 0x8
    // Offset: 0x138
    GlobalNamespace::LocalLeaderboardViewController* localLeaderboardViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LocalLeaderboardViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xD2C4C4
    // private readonly EnterPlayerGuestNameViewController _enterNameViewController
    // Size: 0x8
    // Offset: 0x140
    GlobalNamespace::EnterPlayerGuestNameViewController* enterNameViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnterPlayerGuestNameViewController*) == 0x8);
    // Creating value type constructor for type: PartyFreePlayFlowCoordinator
    PartyFreePlayFlowCoordinator(GlobalNamespace::MenuLightsPresetSO* defaultLightsPreset_ = {}, GlobalNamespace::MenuLightsPresetSO* resultsClearedLightsPreset_ = {}, GlobalNamespace::MenuLightsPresetSO* resultsFailedLightsPreset_ = {}, GlobalNamespace::MenuLightsManager* menuLightsManager_ = {}, GlobalNamespace::ResultsViewController* resultsViewController_ = {}, GlobalNamespace::LocalLeaderboardViewController* localLeaderboardViewController_ = {}, GlobalNamespace::EnterPlayerGuestNameViewController* enterNameViewController_ = {}) noexcept : defaultLightsPreset{defaultLightsPreset_}, resultsClearedLightsPreset{resultsClearedLightsPreset_}, resultsFailedLightsPreset{resultsFailedLightsPreset_}, menuLightsManager{menuLightsManager_}, resultsViewController{resultsViewController_}, localLeaderboardViewController{localLeaderboardViewController_}, enterNameViewController{enterNameViewController_} {}
    // private System.Boolean WillScoreGoToLeaderboard(LevelCompletionResults levelCompletionResults, System.String leaderboardId, System.Boolean practice)
    // Offset: 0xF59BBC
    bool WillScoreGoToLeaderboard(GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::Il2CppString* leaderboardId, bool practice);
    // private System.Boolean IsNewHighScore(LevelCompletionResults levelCompletionResults, System.String leaderboardId)
    // Offset: 0xF59C10
    bool IsNewHighScore(GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::Il2CppString* leaderboardId);
    // private System.Void ProcessScore(LevelCompletionResults levelCompletionResults, System.String leaderboardId, System.String playerName)
    // Offset: 0xF59C60
    void ProcessScore(GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::Il2CppString* leaderboardId, ::Il2CppString* playerName);
    // private System.Void HandleResultsViewControllerContinueButtonPressed(ResultsViewController resultsViewController)
    // Offset: 0xF59CF4
    void HandleResultsViewControllerContinueButtonPressed(GlobalNamespace::ResultsViewController* resultsViewController);
    // private System.Void HandleResultsViewControllerRestartButtonPressed(ResultsViewController resultsViewController)
    // Offset: 0xF59D3C
    void HandleResultsViewControllerRestartButtonPressed(GlobalNamespace::ResultsViewController* resultsViewController);
    // protected override System.String get_gameMode()
    // Offset: 0xF59634
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.String SinglePlayerLevelSelectionFlowCoordinator::get_gameMode_NEW()
    ::Il2CppString* get_gameMode();
    // protected override LeaderboardViewController get_leaderboardViewController()
    // Offset: 0xF5967C
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: LeaderboardViewController SinglePlayerLevelSelectionFlowCoordinator::get_leaderboardViewController_NEW()
    GlobalNamespace::LeaderboardViewController* get_leaderboardViewController();
    // protected override System.Boolean get_showPlayerStatsInDetailView()
    // Offset: 0xF59684
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_showPlayerStatsInDetailView_NEW()
    bool get_showPlayerStatsInDetailView();
    // protected override System.Boolean get_showBackButtonForMainViewController()
    // Offset: 0xF5968C
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_showBackButtonForMainViewController_NEW()
    bool get_showBackButtonForMainViewController();
    // protected override System.String get_mainTitle()
    // Offset: 0xF59694
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.String LevelSelectionFlowCoordinator::get_mainTitle_NEW()
    ::Il2CppString* get_mainTitle();
    // protected override System.Void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    // Offset: 0xF596E0
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate_NEW(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy);
    // protected override System.Void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(System.Boolean removedFromHierarchy)
    // Offset: 0xF59800
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate_NEW(System.Boolean removedFromHierarchy)
    void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy);
    // protected override System.Void ProcessLevelCompletionResultsAfterLevelDidFinish(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    // Offset: 0xF59944
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish_NEW(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    void ProcessLevelCompletionResultsAfterLevelDidFinish(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice);
    // public System.Void .ctor()
    // Offset: 0xF59DFC
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
    static PartyFreePlayFlowCoordinator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PartyFreePlayFlowCoordinator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PartyFreePlayFlowCoordinator*, creationType>()));
    }
  }; // PartyFreePlayFlowCoordinator
  #pragma pack(pop)
  static check_size<sizeof(PartyFreePlayFlowCoordinator), 320 + sizeof(GlobalNamespace::EnterPlayerGuestNameViewController*)> __GlobalNamespace_PartyFreePlayFlowCoordinatorSizeCheck;
  static_assert(sizeof(PartyFreePlayFlowCoordinator) == 0x148);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PartyFreePlayFlowCoordinator*, "", "PartyFreePlayFlowCoordinator");
