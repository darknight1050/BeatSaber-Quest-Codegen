// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.NavigationController
#include "HMUI/NavigationController.hpp"
// Including type: SongPackMask
#include "GlobalNamespace/SongPackMask.hpp"
// Including type: SelectLevelCategoryViewController/LevelCategory
#include "GlobalNamespace/SelectLevelCategoryViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Skipping declaration: SelectLevelCategoryViewController because it is already included!
  // Forward declaring type: AnnotatedBeatmapLevelCollectionsViewController
  class AnnotatedBeatmapLevelCollectionsViewController;
  // Forward declaring type: LevelSearchViewController
  class LevelSearchViewController;
  // Forward declaring type: BeatmapLevelsModel
  class BeatmapLevelsModel;
  // Forward declaring type: IAnnotatedBeatmapLevelCollection
  class IAnnotatedBeatmapLevelCollection;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: ViewController because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x138
  #pragma pack(push, 1)
  // Autogenerated type: LevelFilteringNavigationController
  // [] Offset: FFFFFFFF
  class LevelFilteringNavigationController : public HMUI::NavigationController {
    public:
    // Writing base type padding for base size: 0x94 to desired offset: 0x98
    char ___base_padding[0x4] = {};
    // Nested type: GlobalNamespace::LevelFilteringNavigationController::$$c
    class $$c;
    // Nested type: GlobalNamespace::LevelFilteringNavigationController::$$c__DisplayClass41_0
    class $$c__DisplayClass41_0;
    // Nested type: GlobalNamespace::LevelFilteringNavigationController::$UpdateCustomSongs$d__42
    struct $UpdateCustomSongs$d__42;
    // private UnityEngine.GameObject _emptyFavoritesListInfoPrefab
    // Size: 0x8
    // Offset: 0x98
    UnityEngine::GameObject* emptyFavoritesListInfoPrefab;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _emptyCustomSongListInfoPrefab
    // Size: 0x8
    // Offset: 0xA0
    UnityEngine::GameObject* emptyCustomSongListInfoPrefab;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [InjectAttribute] Offset: 0xD2E360
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0xA8
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0xD2E370
    // private readonly SelectLevelCategoryViewController _selectLevelCategoryViewController
    // Size: 0x8
    // Offset: 0xB0
    GlobalNamespace::SelectLevelCategoryViewController* selectLevelCategoryViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SelectLevelCategoryViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xD2E380
    // private readonly AnnotatedBeatmapLevelCollectionsViewController _annotatedBeatmapLevelCollectionsViewController
    // Size: 0x8
    // Offset: 0xB8
    GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController* annotatedBeatmapLevelCollectionsViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xD2E390
    // private readonly LevelSearchViewController _levelSearchViewController
    // Size: 0x8
    // Offset: 0xC0
    GlobalNamespace::LevelSearchViewController* levelSearchViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelSearchViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xD2E3A0
    // private readonly BeatmapLevelsModel _beatmapLevelsModel
    // Size: 0x8
    // Offset: 0xC8
    GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelsModel*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD2E3B0
    // private System.Action`4<LevelFilteringNavigationController,IAnnotatedBeatmapLevelCollection,UnityEngine.GameObject,BeatmapCharacteristicSO> didSelectAnnotatedBeatmapLevelCollectionEvent
    // Size: 0x8
    // Offset: 0xD0
    System::Action_4<GlobalNamespace::LevelFilteringNavigationController*, GlobalNamespace::IAnnotatedBeatmapLevelCollection*, UnityEngine::GameObject*, GlobalNamespace::BeatmapCharacteristicSO*>* didSelectAnnotatedBeatmapLevelCollectionEvent;
    // Field size check
    static_assert(sizeof(System::Action_4<GlobalNamespace::LevelFilteringNavigationController*, GlobalNamespace::IAnnotatedBeatmapLevelCollection*, UnityEngine::GameObject*, GlobalNamespace::BeatmapCharacteristicSO*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD2E3C0
    // private System.Action`1<LevelFilteringNavigationController> didStartLoadingEvent
    // Size: 0x8
    // Offset: 0xD8
    System::Action_1<GlobalNamespace::LevelFilteringNavigationController*>* didStartLoadingEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::LevelFilteringNavigationController*>*) == 0x8);
    // private System.Threading.CancellationTokenSource _cancellationTokenSource
    // Size: 0x8
    // Offset: 0xE0
    System::Threading::CancellationTokenSource* cancellationTokenSource;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationTokenSource*) == 0x8);
    // private UnityEngine.GameObject _currentNoDataInfoPrefab
    // Size: 0x8
    // Offset: 0xE8
    UnityEngine::GameObject* currentNoDataInfoPrefab;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private System.String _levelPackIdToBeSelectedAfterPresent
    // Size: 0x8
    // Offset: 0xF0
    ::Il2CppString* levelPackIdToBeSelectedAfterPresent;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean _hidePacksIfOneOrNone
    // Size: 0x1
    // Offset: 0xF8
    bool hidePacksIfOneOrNone;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _enableCustomLevels
    // Size: 0x1
    // Offset: 0xF9
    bool enableCustomLevels;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: enableCustomLevels and: songPackMask
    char __padding13[0x6] = {};
    // private SongPackMask _songPackMask
    // Size: 0x10
    // Offset: 0x100
    GlobalNamespace::SongPackMask songPackMask;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPackMask) == 0x10);
    // private SelectLevelCategoryViewController/LevelCategory[] _enabledLevelCategories
    // Size: 0x8
    // Offset: 0x110
    ::Array<GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>* enabledLevelCategories;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>*) == 0x8);
    // private IBeatmapLevelPack[] _ostBeatmapLevelPacks
    // Size: 0x8
    // Offset: 0x118
    ::Array<GlobalNamespace::IBeatmapLevelPack*>* ostBeatmapLevelPacks;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::IBeatmapLevelPack*>*) == 0x8);
    // private IBeatmapLevelPack[] _musicPacksBeatmapLevelPacks
    // Size: 0x8
    // Offset: 0x120
    ::Array<GlobalNamespace::IBeatmapLevelPack*>* musicPacksBeatmapLevelPacks;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::IBeatmapLevelPack*>*) == 0x8);
    // private IBeatmapLevelPack[] _customLevelPacks
    // Size: 0x8
    // Offset: 0x128
    ::Array<GlobalNamespace::IBeatmapLevelPack*>* customLevelPacks;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::IBeatmapLevelPack*>*) == 0x8);
    // private IBeatmapLevelPack[] _allBeatmapLevelPacks
    // Size: 0x8
    // Offset: 0x130
    ::Array<GlobalNamespace::IBeatmapLevelPack*>* allBeatmapLevelPacks;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::IBeatmapLevelPack*>*) == 0x8);
    // Creating value type constructor for type: LevelFilteringNavigationController
    LevelFilteringNavigationController(UnityEngine::GameObject* emptyFavoritesListInfoPrefab_ = {}, UnityEngine::GameObject* emptyCustomSongListInfoPrefab_ = {}, GlobalNamespace::PlayerDataModel* playerDataModel_ = {}, GlobalNamespace::SelectLevelCategoryViewController* selectLevelCategoryViewController_ = {}, GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController* annotatedBeatmapLevelCollectionsViewController_ = {}, GlobalNamespace::LevelSearchViewController* levelSearchViewController_ = {}, GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel_ = {}, System::Action_4<GlobalNamespace::LevelFilteringNavigationController*, GlobalNamespace::IAnnotatedBeatmapLevelCollection*, UnityEngine::GameObject*, GlobalNamespace::BeatmapCharacteristicSO*>* didSelectAnnotatedBeatmapLevelCollectionEvent_ = {}, System::Action_1<GlobalNamespace::LevelFilteringNavigationController*>* didStartLoadingEvent_ = {}, System::Threading::CancellationTokenSource* cancellationTokenSource_ = {}, UnityEngine::GameObject* currentNoDataInfoPrefab_ = {}, ::Il2CppString* levelPackIdToBeSelectedAfterPresent_ = {}, bool hidePacksIfOneOrNone_ = {}, bool enableCustomLevels_ = {}, GlobalNamespace::SongPackMask songPackMask_ = {}, ::Array<GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>* enabledLevelCategories_ = {}, ::Array<GlobalNamespace::IBeatmapLevelPack*>* ostBeatmapLevelPacks_ = {}, ::Array<GlobalNamespace::IBeatmapLevelPack*>* musicPacksBeatmapLevelPacks_ = {}, ::Array<GlobalNamespace::IBeatmapLevelPack*>* customLevelPacks_ = {}, ::Array<GlobalNamespace::IBeatmapLevelPack*>* allBeatmapLevelPacks_ = {}) noexcept : emptyFavoritesListInfoPrefab{emptyFavoritesListInfoPrefab_}, emptyCustomSongListInfoPrefab{emptyCustomSongListInfoPrefab_}, playerDataModel{playerDataModel_}, selectLevelCategoryViewController{selectLevelCategoryViewController_}, annotatedBeatmapLevelCollectionsViewController{annotatedBeatmapLevelCollectionsViewController_}, levelSearchViewController{levelSearchViewController_}, beatmapLevelsModel{beatmapLevelsModel_}, didSelectAnnotatedBeatmapLevelCollectionEvent{didSelectAnnotatedBeatmapLevelCollectionEvent_}, didStartLoadingEvent{didStartLoadingEvent_}, cancellationTokenSource{cancellationTokenSource_}, currentNoDataInfoPrefab{currentNoDataInfoPrefab_}, levelPackIdToBeSelectedAfterPresent{levelPackIdToBeSelectedAfterPresent_}, hidePacksIfOneOrNone{hidePacksIfOneOrNone_}, enableCustomLevels{enableCustomLevels_}, songPackMask{songPackMask_}, enabledLevelCategories{enabledLevelCategories_}, ostBeatmapLevelPacks{ostBeatmapLevelPacks_}, musicPacksBeatmapLevelPacks{musicPacksBeatmapLevelPacks_}, customLevelPacks{customLevelPacks_}, allBeatmapLevelPacks{allBeatmapLevelPacks_} {}
    // public System.Void add_didSelectAnnotatedBeatmapLevelCollectionEvent(System.Action`4<LevelFilteringNavigationController,IAnnotatedBeatmapLevelCollection,UnityEngine.GameObject,BeatmapCharacteristicSO> value)
    // Offset: 0x1094230
    void add_didSelectAnnotatedBeatmapLevelCollectionEvent(System::Action_4<GlobalNamespace::LevelFilteringNavigationController*, GlobalNamespace::IAnnotatedBeatmapLevelCollection*, UnityEngine::GameObject*, GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // public System.Void remove_didSelectAnnotatedBeatmapLevelCollectionEvent(System.Action`4<LevelFilteringNavigationController,IAnnotatedBeatmapLevelCollection,UnityEngine.GameObject,BeatmapCharacteristicSO> value)
    // Offset: 0x10942D4
    void remove_didSelectAnnotatedBeatmapLevelCollectionEvent(System::Action_4<GlobalNamespace::LevelFilteringNavigationController*, GlobalNamespace::IAnnotatedBeatmapLevelCollection*, UnityEngine::GameObject*, GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // public System.Void add_didStartLoadingEvent(System.Action`1<LevelFilteringNavigationController> value)
    // Offset: 0x1094378
    void add_didStartLoadingEvent(System::Action_1<GlobalNamespace::LevelFilteringNavigationController*>* value);
    // public System.Void remove_didStartLoadingEvent(System.Action`1<LevelFilteringNavigationController> value)
    // Offset: 0x109441C
    void remove_didStartLoadingEvent(System::Action_1<GlobalNamespace::LevelFilteringNavigationController*>* value);
    // public IBeatmapLevelPack get_selectedBeatmapLevelPack()
    // Offset: 0x10944C0
    GlobalNamespace::IBeatmapLevelPack* get_selectedBeatmapLevelPack();
    // public SelectLevelCategoryViewController/LevelCategory get_selectedLevelCategory()
    // Offset: 0x1094520
    GlobalNamespace::SelectLevelCategoryViewController::LevelCategory get_selectedLevelCategory();
    // public System.Void Setup(SongPackMask songPackMask, IBeatmapLevelPack levelPackToBeSelectedAfterPresent, SelectLevelCategoryViewController/LevelCategory startLevelCategory, System.Boolean hidePacksIfOneOrNone, System.Boolean enableCustomLevels)
    // Offset: 0x109453C
    void Setup(GlobalNamespace::SongPackMask songPackMask, GlobalNamespace::IBeatmapLevelPack* levelPackToBeSelectedAfterPresent, GlobalNamespace::SelectLevelCategoryViewController::LevelCategory startLevelCategory, bool hidePacksIfOneOrNone, bool enableCustomLevels);
    // private System.Void SetupBeatmapLevelPacks()
    // Offset: 0x10947A4
    void SetupBeatmapLevelPacks();
    // private System.Void LevelSearchViewControllerDidStartLoading(LevelSearchViewController obj)
    // Offset: 0x109504C
    void LevelSearchViewControllerDidStartLoading(GlobalNamespace::LevelSearchViewController* obj);
    // private System.Void LevelSearchViewControllerDidFilterBeatmapLevelCollection(IAnnotatedBeatmapLevelCollection annotatedBeatmapLevelCollection, BeatmapCharacteristicSO preferredBeatmapCharacteristic)
    // Offset: 0x109545C
    void LevelSearchViewControllerDidFilterBeatmapLevelCollection(GlobalNamespace::IAnnotatedBeatmapLevelCollection* annotatedBeatmapLevelCollection, GlobalNamespace::BeatmapCharacteristicSO* preferredBeatmapCharacteristic);
    // private System.Void SelectLevelCategoryViewControllerDidSelectLevelCategory(SelectLevelCategoryViewController viewController, SelectLevelCategoryViewController/LevelCategory levelCategory)
    // Offset: 0x10954E0
    void SelectLevelCategoryViewControllerDidSelectLevelCategory(GlobalNamespace::SelectLevelCategoryViewController* viewController, GlobalNamespace::SelectLevelCategoryViewController::LevelCategory levelCategory);
    // private System.Void UpdateSecondChildControllerContent(SelectLevelCategoryViewController/LevelCategory levelCategory)
    // Offset: 0x1094A64
    void UpdateSecondChildControllerContent(GlobalNamespace::SelectLevelCategoryViewController::LevelCategory levelCategory);
    // private System.Void ShowPacksInSecondChildController(System.Collections.Generic.IReadOnlyList`1<IBeatmapLevelPack> beatmapLevelPacks)
    // Offset: 0x10954E8
    void ShowPacksInSecondChildController(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IBeatmapLevelPack*>* beatmapLevelPacks);
    // private System.Void ReplaceSecondViewController(HMUI.ViewController viewController)
    // Offset: 0x109575C
    void ReplaceSecondViewController(HMUI::ViewController* viewController);
    // private System.Void HandlePlayerDataFavoriteLevelsSetDidChange()
    // Offset: 0x10958D0
    void HandlePlayerDataFavoriteLevelsSetDidChange();
    // private System.Void HandleIncreaseNumberOfGameplays()
    // Offset: 0x109592C
    void HandleIncreaseNumberOfGameplays();
    // private System.Void HandleAnnotatedBeatmapLevelCollectionsViewControllerDidSelectAnnotatedBeatmapLevelCollection(IAnnotatedBeatmapLevelCollection annotatedBeatmapLevelCollection)
    // Offset: 0x1095998
    void HandleAnnotatedBeatmapLevelCollectionsViewControllerDidSelectAnnotatedBeatmapLevelCollection(GlobalNamespace::IAnnotatedBeatmapLevelCollection* annotatedBeatmapLevelCollection);
    // public System.Void SelectAnnotatedBeatmapLevelCollection(IBeatmapLevelPack levelPack)
    // Offset: 0x1095A18
    void SelectAnnotatedBeatmapLevelCollection(GlobalNamespace::IBeatmapLevelPack* levelPack);
    // private System.Void UpdateCustomSongs()
    // Offset: 0x1095810
    void UpdateCustomSongs();
    // private System.Boolean <SetupBeatmapLevelPacks>b__29_0(IBeatmapLevelPack pack)
    // Offset: 0x1095DF8
    bool $SetupBeatmapLevelPacks$b__29_0(GlobalNamespace::IBeatmapLevelPack* pack);
    // private System.Boolean <SetupBeatmapLevelPacks>b__29_1(IBeatmapLevelPack pack)
    // Offset: 0x1095ED8
    bool $SetupBeatmapLevelPacks$b__29_1(GlobalNamespace::IBeatmapLevelPack* pack);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1094C0C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate_NEW(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x10950B0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate_NEW(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.Void .ctor()
    // Offset: 0x1095DF0
    // Implemented from: HMUI.NavigationController
    // Base method: System.Void NavigationController::.ctor()
    // Base method: System.Void ContainerViewController::.ctor()
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelFilteringNavigationController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LevelFilteringNavigationController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelFilteringNavigationController*, creationType>()));
    }
  }; // LevelFilteringNavigationController
  #pragma pack(pop)
  static check_size<sizeof(LevelFilteringNavigationController), 304 + sizeof(::Array<GlobalNamespace::IBeatmapLevelPack*>*)> __GlobalNamespace_LevelFilteringNavigationControllerSizeCheck;
  static_assert(sizeof(LevelFilteringNavigationController) == 0x138);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelFilteringNavigationController*, "", "LevelFilteringNavigationController");
