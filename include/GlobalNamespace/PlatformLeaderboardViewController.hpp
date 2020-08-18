// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LeaderboardViewController
#include "GlobalNamespace/LeaderboardViewController.hpp"
// Including type: LeaderboardTableView
#include "GlobalNamespace/LeaderboardTableView.hpp"
// Including type: PlatformLeaderboardsModel
#include "GlobalNamespace/PlatformLeaderboardsModel.hpp"
// Including type: PlatformLeaderboardsModel/ScoresScope
#include "GlobalNamespace/PlatformLeaderboardsModel_ScoresScope.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: LoadingControl
  class LoadingControl;
  // Forward declaring type: HMAsyncRequest
  class HMAsyncRequest;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: IconSegmentedControl
  class IconSegmentedControl;
  // Forward declaring type: SegmentedControl
  class SegmentedControl;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlatformLeaderboardViewController
  class PlatformLeaderboardViewController : public GlobalNamespace::LeaderboardViewController {
    public:
    // Nested type: GlobalNamespace::PlatformLeaderboardViewController::$RefreshDelayed$d__28
    class $RefreshDelayed$d__28;
    // private LeaderboardTableView _leaderboardTableView
    // Offset: 0x68
    GlobalNamespace::LeaderboardTableView* leaderboardTableView;
    // private HMUI.IconSegmentedControl _scopeSegmentedControl
    // Offset: 0x70
    HMUI::IconSegmentedControl* scopeSegmentedControl;
    // private LoadingControl _loadingControl
    // Offset: 0x78
    GlobalNamespace::LoadingControl* loadingControl;
    // private UnityEngine.Sprite _globalLeaderboardIcon
    // Offset: 0x80
    UnityEngine::Sprite* globalLeaderboardIcon;
    // private UnityEngine.Sprite _aroundPlayerLeaderboardIcon
    // Offset: 0x88
    UnityEngine::Sprite* aroundPlayerLeaderboardIcon;
    // private UnityEngine.Sprite _friendsLeaderboardIcon
    // Offset: 0x90
    UnityEngine::Sprite* friendsLeaderboardIcon;
    // private PlatformLeaderboardsModel _leaderboardsModel
    // Offset: 0x98
    GlobalNamespace::PlatformLeaderboardsModel* leaderboardsModel;
    // private HMAsyncRequest _getScoresAsyncRequest
    // Offset: 0xA0
    GlobalNamespace::HMAsyncRequest* getScoresAsyncRequest;
    // private System.Int32[] _playerScorePos
    // Offset: 0xA8
    ::Array<int>* playerScorePos;
    // private System.Collections.Generic.List`1<LeaderboardTableView/ScoreData> _scores
    // Offset: 0xB0
    System::Collections::Generic::List_1<GlobalNamespace::LeaderboardTableView::ScoreData*>* scores;
    // private IDifficultyBeatmap _difficultyBeatmap
    // Offset: 0xB8
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // private System.Boolean _refreshIsNeeded
    // Offset: 0xC0
    bool refreshIsNeeded;
    // private System.Boolean _hasScoresData
    // Offset: 0xC1
    bool hasScoresData;
    // private PlatformLeaderboardsModel/ScoresScope[] _scoreScopes
    // Offset: 0xC8
    ::Array<GlobalNamespace::PlatformLeaderboardsModel::ScoresScope>* scoreScopes;
    // Get static field: static private PlatformLeaderboardsModel/ScoresScope _scoresScope
    static GlobalNamespace::PlatformLeaderboardsModel::ScoresScope _get__scoresScope();
    // Set static field: static private PlatformLeaderboardsModel/ScoresScope _scoresScope
    static void _set__scoresScope(GlobalNamespace::PlatformLeaderboardsModel::ScoresScope value);
    // public PlatformLeaderboardsModel get_leaderboardsModel()
    // Offset: 0x191A524
    GlobalNamespace::PlatformLeaderboardsModel* get_leaderboardsModel();
    // private System.Int32 ScoreScopeToScoreScopeIndex(PlatformLeaderboardsModel/ScoresScope scoresScope)
    // Offset: 0x191ABB4
    int ScoreScopeToScoreScopeIndex(GlobalNamespace::PlatformLeaderboardsModel::ScoresScope scoresScope);
    // private PlatformLeaderboardsModel/ScoresScope ScopeScopeIndexToScoreScope(System.Int32 scoreScopeIndex)
    // Offset: 0x191B098
    GlobalNamespace::PlatformLeaderboardsModel::ScoresScope ScopeScopeIndexToScoreScope(int scoreScopeIndex);
    // private System.Void HandleDidPressRefreshButton()
    // Offset: 0x191B0E4
    void HandleDidPressRefreshButton();
    // private System.Void HandleLeaderboardsResultsReturned(PlatformLeaderboardsModel/GetScoresResult result, PlatformLeaderboardsModel/LeaderboardScore[] scores, System.Int32 playerScoreIndex)
    // Offset: 0x191B0F0
    void HandleLeaderboardsResultsReturned(GlobalNamespace::PlatformLeaderboardsModel::GetScoresResult result, ::Array<GlobalNamespace::PlatformLeaderboardsModel::LeaderboardScore*>* scores, int playerScoreIndex);
    // private System.Void HandleScopeSegmentedControlDidSelectCell(HMUI.SegmentedControl segmentedControl, System.Int32 cellNumber)
    // Offset: 0x191B310
    void HandleScopeSegmentedControlDidSelectCell(HMUI::SegmentedControl* segmentedControl, int cellNumber);
    // private System.Void HandlePlatformLeaderboardsModelAllScoresDidUpload()
    // Offset: 0x191B3A8
    void HandlePlatformLeaderboardsModelAllScoresDidUpload();
    // private System.Void Refresh(System.Boolean showLoadingIndicator, System.Boolean clear)
    // Offset: 0x191A58C
    void Refresh(bool showLoadingIndicator, bool clear);
    // private System.Collections.IEnumerator RefreshDelayed(System.Boolean showLoadingIndicator, System.Boolean clear)
    // Offset: 0x191B484
    System::Collections::IEnumerator* RefreshDelayed(bool showLoadingIndicator, bool clear);
    // private System.Void ClearContent()
    // Offset: 0x191B3B4
    void ClearContent();
    // public override System.Void SetData(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x191A52C
    // Implemented from: LeaderboardViewController
    // Base method: System.Void LeaderboardViewController::SetData(IDifficultyBeatmap difficultyBeatmap)
    void SetData(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // protected override System.Void DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    // Offset: 0x191A71C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    void DidActivate(bool firstActivation, HMUI::ViewController::ActivationType activationType);
    // protected override System.Void DidDeactivate(HMUI.ViewController/DeactivationType deactivationType)
    // Offset: 0x191AD20
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(HMUI.ViewController/DeactivationType deactivationType)
    void DidDeactivate(HMUI::ViewController::DeactivationType deactivationType);
    // protected override System.Void OnDestroy()
    // Offset: 0x191AED8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::OnDestroy()
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x191B54C
    // Implemented from: LeaderboardViewController
    // Base method: System.Void LeaderboardViewController::.ctor()
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PlatformLeaderboardViewController* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x191B5CC
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // PlatformLeaderboardViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformLeaderboardViewController*, "", "PlatformLeaderboardViewController");
#pragma pack(pop)
