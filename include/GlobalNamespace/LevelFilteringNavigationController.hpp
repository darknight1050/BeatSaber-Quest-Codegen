// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.NavigationController
#include "HMUI/NavigationController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FilteredByBeatmapCharacteristicPlaylistSO
  class FilteredByBeatmapCharacteristicPlaylistSO;
  // Forward declaring type: UserFavoritesPlaylistSO
  class UserFavoritesPlaylistSO;
  // Forward declaring type: AllSongsPlaylistSO
  class AllSongsPlaylistSO;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: TabBarViewController
  class TabBarViewController;
  // Forward declaring type: AnnotatedBeatmapLevelCollectionsViewController
  class AnnotatedBeatmapLevelCollectionsViewController;
  // Forward declaring type: BeatmapLevelsModel
  class BeatmapLevelsModel;
  // Forward declaring type: AppStaticSettingsSO
  class AppStaticSettingsSO;
  // Forward declaring type: IAnnotatedBeatmapLevelCollection
  class IAnnotatedBeatmapLevelCollection;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: IPlaylist
  class IPlaylist;
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`4<T1, T2, T3, T4>
  template<typename T1, typename T2, typename T3, typename T4>
  class Action_4;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LevelFilteringNavigationController
  class LevelFilteringNavigationController : public HMUI::NavigationController {
    public:
    // Nested type: GlobalNamespace::LevelFilteringNavigationController::TabBarData
    class TabBarData;
    // Nested type: GlobalNamespace::LevelFilteringNavigationController::$$c
    class $$c;
    // Nested type: GlobalNamespace::LevelFilteringNavigationController::$UpdateCustomSongs$d__43
    struct $UpdateCustomSongs$d__43;
    // private FilteredByBeatmapCharacteristicPlaylistSO[] _filteredByBeatmapCharacteristicPlaylists
    // Offset: 0x90
    ::Array<GlobalNamespace::FilteredByBeatmapCharacteristicPlaylistSO*>* filteredByBeatmapCharacteristicPlaylists;
    // private UserFavoritesPlaylistSO _userFavoritesPlaylist
    // Offset: 0x98
    GlobalNamespace::UserFavoritesPlaylistSO* userFavoritesPlaylist;
    // private AllSongsPlaylistSO _allSongsPlaylist
    // Offset: 0xA0
    GlobalNamespace::AllSongsPlaylistSO* allSongsPlaylist;
    // private UnityEngine.GameObject _emptyFavoritesListInfoPrefab
    // Offset: 0xA8
    UnityEngine::GameObject* emptyFavoritesListInfoPrefab;
    // private UnityEngine.GameObject _emptyCustomSongListInfoPrefab
    // Offset: 0xB0
    UnityEngine::GameObject* emptyCustomSongListInfoPrefab;
    // private PlayerDataModel _playerDataModel
    // Offset: 0xB8
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // private TabBarViewController _tabBarViewController
    // Offset: 0xC0
    GlobalNamespace::TabBarViewController* tabBarViewController;
    // private AnnotatedBeatmapLevelCollectionsViewController _annotatedBeatmapLevelCollectionsViewController
    // Offset: 0xC8
    GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController* annotatedBeatmapLevelCollectionsViewController;
    // private BeatmapLevelsModel _beatmapLevelsModel
    // Offset: 0xD0
    GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel;
    // private AppStaticSettingsSO _appStaticSettings
    // Offset: 0xD8
    GlobalNamespace::AppStaticSettingsSO* appStaticSettings;
    // private System.Action`4<LevelFilteringNavigationController,IAnnotatedBeatmapLevelCollection,UnityEngine.GameObject,BeatmapCharacteristicSO> didSelectAnnotatedBeatmapLevelCollectionEvent
    // Offset: 0xE0
    System::Action_4<GlobalNamespace::LevelFilteringNavigationController*, GlobalNamespace::IAnnotatedBeatmapLevelCollection*, UnityEngine::GameObject*, GlobalNamespace::BeatmapCharacteristicSO*>* didSelectAnnotatedBeatmapLevelCollectionEvent;
    // private System.Action`1<LevelFilteringNavigationController> didStartLoadingEvent
    // Offset: 0xE8
    System::Action_1<GlobalNamespace::LevelFilteringNavigationController*>* didStartLoadingEvent;
    // private System.Threading.CancellationTokenSource _cancellationTokenSource
    // Offset: 0xF0
    System::Threading::CancellationTokenSource* cancellationTokenSource;
    // private System.Boolean _hideIfOneOrNoPacks
    // Offset: 0xF8
    bool hideIfOneOrNoPacks;
    // private IPlaylist[] _playlists
    // Offset: 0x100
    ::Array<GlobalNamespace::IPlaylist*>* playlists;
    // private System.Boolean _initialized
    // Offset: 0x108
    bool initialized;
    // private System.Boolean _enableCustomLevels
    // Offset: 0x109
    bool enableCustomLevels;
    // private System.Boolean _customSongsListNeedsReload
    // Offset: 0x10A
    bool customSongsListNeedsReload;
    // private LevelFilteringNavigationController/TabBarData[] _tabBarDatas
    // Offset: 0x110
    ::Array<GlobalNamespace::LevelFilteringNavigationController::TabBarData*>* tabBarDatas;
    // private LevelFilteringNavigationController/TabBarData _playlistTabBarData
    // Offset: 0x118
    GlobalNamespace::LevelFilteringNavigationController::TabBarData* playlistTabBarData;
    // private LevelFilteringNavigationController/TabBarData _customLevelsTabBarData
    // Offset: 0x120
    GlobalNamespace::LevelFilteringNavigationController::TabBarData* customLevelsTabBarData;
    // public System.Void add_didSelectAnnotatedBeatmapLevelCollectionEvent(System.Action`4<LevelFilteringNavigationController,IAnnotatedBeatmapLevelCollection,UnityEngine.GameObject,BeatmapCharacteristicSO> value)
    // Offset: 0xB4C018
    void add_didSelectAnnotatedBeatmapLevelCollectionEvent(System::Action_4<GlobalNamespace::LevelFilteringNavigationController*, GlobalNamespace::IAnnotatedBeatmapLevelCollection*, UnityEngine::GameObject*, GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // public System.Void remove_didSelectAnnotatedBeatmapLevelCollectionEvent(System.Action`4<LevelFilteringNavigationController,IAnnotatedBeatmapLevelCollection,UnityEngine.GameObject,BeatmapCharacteristicSO> value)
    // Offset: 0xB4C0BC
    void remove_didSelectAnnotatedBeatmapLevelCollectionEvent(System::Action_4<GlobalNamespace::LevelFilteringNavigationController*, GlobalNamespace::IAnnotatedBeatmapLevelCollection*, UnityEngine::GameObject*, GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // public System.Void add_didStartLoadingEvent(System.Action`1<LevelFilteringNavigationController> value)
    // Offset: 0xB4C160
    void add_didStartLoadingEvent(System::Action_1<GlobalNamespace::LevelFilteringNavigationController*>* value);
    // public System.Void remove_didStartLoadingEvent(System.Action`1<LevelFilteringNavigationController> value)
    // Offset: 0xB4C204
    void remove_didStartLoadingEvent(System::Action_1<GlobalNamespace::LevelFilteringNavigationController*>* value);
    // public System.Void Setup(System.Boolean hideIfOneOrNoPacks, System.Boolean enableCustomLevels, IAnnotatedBeatmapLevelCollection selectedAnnotatedBeatmapLevelCollection)
    // Offset: 0xB4C2A8
    void Setup(bool hideIfOneOrNoPacks, bool enableCustomLevels, GlobalNamespace::IAnnotatedBeatmapLevelCollection* selectedAnnotatedBeatmapLevelCollection);
    // public System.Void SelectAnnotatedBeatmapLevelCollection(IAnnotatedBeatmapLevelCollection annotatedBeatmapLevelCollection)
    // Offset: 0xB4C430
    void SelectAnnotatedBeatmapLevelCollection(GlobalNamespace::IAnnotatedBeatmapLevelCollection* annotatedBeatmapLevelCollection);
    // private System.Void InitializeIfNeeded()
    // Offset: 0xB4C364
    void InitializeIfNeeded();
    // private System.Void InitializeTabBarViewController()
    // Offset: 0xB4CC40
    void InitializeTabBarViewController();
    // private System.Void UpdatePlaylistsData()
    // Offset: 0xB4CB50
    void UpdatePlaylistsData();
    // private System.Void InitPlaylists()
    // Offset: 0xB4CA18
    void InitPlaylists();
    // private System.Void HandlePlayerDataFavoriteLevelsSetDidChange()
    // Offset: 0xB4D10C
    void HandlePlayerDataFavoriteLevelsSetDidChange();
    // private System.Void HandleAnnotatedBeatmapLevelCollectionsViewControllerDidSelectAnnotatedBeatmapLevelCollection(IAnnotatedBeatmapLevelCollection annotatedBeatmapLevelCollection)
    // Offset: 0xB4D21C
    void HandleAnnotatedBeatmapLevelCollectionsViewControllerDidSelectAnnotatedBeatmapLevelCollection(GlobalNamespace::IAnnotatedBeatmapLevelCollection* annotatedBeatmapLevelCollection);
    // private System.Void SelectBeatmapLevelPackOrPlayList(IBeatmapLevelPack beatmapLevelPack, IPlaylist playList)
    // Offset: 0xB4C4B4
    void SelectBeatmapLevelPackOrPlayList(GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack, GlobalNamespace::IPlaylist* playList);
    // private System.Void TabBarDidSwitch()
    // Offset: 0xB4C3A8
    void TabBarDidSwitch();
    // private System.Void SendEventIfNeeded(IAnnotatedBeatmapLevelCollection annotatedBeatmapLevelCollection)
    // Offset: 0xB4D29C
    void SendEventIfNeeded(GlobalNamespace::IAnnotatedBeatmapLevelCollection* annotatedBeatmapLevelCollection);
    // private System.Void SwitchToPlaylists()
    // Offset: 0xB4D3D0
    void SwitchToPlaylists();
    // private System.Void SwitchWithReloadIfNeeded()
    // Offset: 0xB4D428
    void SwitchWithReloadIfNeeded();
    // private System.Void ReloadSongListIfNeeded()
    // Offset: 0xB4D4C0
    void ReloadSongListIfNeeded();
    // private System.Boolean IsLoading()
    // Offset: 0xB4D4D4
    bool IsLoading();
    // private System.Void UpdateCustomSongs()
    // Offset: 0xB4D4E4
    void UpdateCustomSongs();
    // protected override System.Void DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    // Offset: 0xB4C73C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    void DidActivate(bool firstActivation, HMUI::ViewController::ActivationType activationType);
    // protected override System.Void DidDeactivate(HMUI.ViewController/DeactivationType deactivationType)
    // Offset: 0xB4C8FC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(HMUI.ViewController/DeactivationType deactivationType)
    void DidDeactivate(HMUI::ViewController::DeactivationType deactivationType);
    // public System.Void .ctor()
    // Offset: 0xB4D5C0
    // Implemented from: HMUI.NavigationController
    // Base method: System.Void NavigationController::.ctor()
    // Base method: System.Void ContainerViewController::.ctor()
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LevelFilteringNavigationController* New_ctor();
  }; // LevelFilteringNavigationController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelFilteringNavigationController*, "", "LevelFilteringNavigationController");
#pragma pack(pop)
