// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
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
  // Forward declaring type: SongPackMasksModel
  class SongPackMasksModel;
  // Forward declaring type: AdditionalContentModel
  class AdditionalContentModel;
  // Forward declaring type: LevelFilterParams
  class LevelFilterParams;
  // Forward declaring type: IAnnotatedBeatmapLevelCollection
  class IAnnotatedBeatmapLevelCollection;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: InputFieldView
  class InputFieldView;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
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
  // Size: 0xF8
  #pragma pack(push, 1)
  // Autogenerated type: LevelSearchViewController
  // [] Offset: FFFFFFFF
  class LevelSearchViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::LevelSearchViewController::BeatmapLevelPackCollection
    class BeatmapLevelPackCollection;
    // Nested type: GlobalNamespace::LevelSearchViewController::$UpdateBeatmapLevelPackCollectionAsync$d__30
    struct $UpdateBeatmapLevelPackCollectionAsync$d__30;
    // private UnityEngine.UI.Button _searchButton
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::UI::Button* searchButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _clearFiltersButton
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::Button* clearFiltersButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private TMPro.TextMeshProUGUI _filterParamsText
    // Size: 0x8
    // Offset: 0x80
    TMPro::TextMeshProUGUI* filterParamsText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.GameObject _filterPlaceholder
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::GameObject* filterPlaceholder;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private HMUI.InputFieldView _searchTextInputFieldView
    // Size: 0x8
    // Offset: 0x90
    HMUI::InputFieldView* searchTextInputFieldView;
    // Field size check
    static_assert(sizeof(HMUI::InputFieldView*) == 0x8);
    // [InjectAttribute] Offset: 0xD2E4C8
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0xD2E4D8
    // private readonly SongPackMasksModel _songPackMasksModel
    // Size: 0x8
    // Offset: 0xA0
    GlobalNamespace::SongPackMasksModel* songPackMasksModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPackMasksModel*) == 0x8);
    // [InjectAttribute] Offset: 0xD2E4E8
    // private readonly AdditionalContentModel _additionalContentModel
    // Size: 0x8
    // Offset: 0xA8
    GlobalNamespace::AdditionalContentModel* additionalContentModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AdditionalContentModel*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD2E4F8
    // private System.Action`2<LevelSearchViewController,LevelFilterParams> didPressSearchButtonEvent
    // Size: 0x8
    // Offset: 0xB0
    System::Action_2<GlobalNamespace::LevelSearchViewController*, GlobalNamespace::LevelFilterParams*>* didPressSearchButtonEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::LevelSearchViewController*, GlobalNamespace::LevelFilterParams*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD2E508
    // private System.Action`2<IAnnotatedBeatmapLevelCollection,BeatmapCharacteristicSO> didFilterBeatmapLevelCollectionEvent
    // Size: 0x8
    // Offset: 0xB8
    System::Action_2<GlobalNamespace::IAnnotatedBeatmapLevelCollection*, GlobalNamespace::BeatmapCharacteristicSO*>* didFilterBeatmapLevelCollectionEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::IAnnotatedBeatmapLevelCollection*, GlobalNamespace::BeatmapCharacteristicSO*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD2E518
    // private System.Action`1<LevelSearchViewController> didStartLoadingEvent
    // Size: 0x8
    // Offset: 0xC0
    System::Action_1<GlobalNamespace::LevelSearchViewController*>* didStartLoadingEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::LevelSearchViewController*>*) == 0x8);
    // private LevelSearchViewController/BeatmapLevelPackCollection _beatmapLevelPackCollection
    // Size: 0x8
    // Offset: 0xC8
    GlobalNamespace::LevelSearchViewController::BeatmapLevelPackCollection* beatmapLevelPackCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelSearchViewController::BeatmapLevelPackCollection*) == 0x8);
    // private BeatmapCharacteristicSO _preferredBeatmapCharacteristic
    // Size: 0x8
    // Offset: 0xD0
    GlobalNamespace::BeatmapCharacteristicSO* preferredBeatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // private LevelFilterParams _currentFilterParams
    // Size: 0x8
    // Offset: 0xD8
    GlobalNamespace::LevelFilterParams* currentFilterParams;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelFilterParams*) == 0x8);
    // private System.Boolean _onlyFavorites
    // Size: 0x1
    // Offset: 0xE0
    bool onlyFavorites;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: onlyFavorites and: cancellationTokenSource
    char __padding14[0x7] = {};
    // private System.Threading.CancellationTokenSource _cancellationTokenSource
    // Size: 0x8
    // Offset: 0xE8
    System::Threading::CancellationTokenSource* cancellationTokenSource;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationTokenSource*) == 0x8);
    // private IBeatmapLevelPack[] _beatmapLevelPacks
    // Size: 0x8
    // Offset: 0xF0
    ::Array<GlobalNamespace::IBeatmapLevelPack*>* beatmapLevelPacks;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::IBeatmapLevelPack*>*) == 0x8);
    // Creating value type constructor for type: LevelSearchViewController
    LevelSearchViewController(UnityEngine::UI::Button* searchButton_ = {}, UnityEngine::UI::Button* clearFiltersButton_ = {}, TMPro::TextMeshProUGUI* filterParamsText_ = {}, UnityEngine::GameObject* filterPlaceholder_ = {}, HMUI::InputFieldView* searchTextInputFieldView_ = {}, GlobalNamespace::PlayerDataModel* playerDataModel_ = {}, GlobalNamespace::SongPackMasksModel* songPackMasksModel_ = {}, GlobalNamespace::AdditionalContentModel* additionalContentModel_ = {}, System::Action_2<GlobalNamespace::LevelSearchViewController*, GlobalNamespace::LevelFilterParams*>* didPressSearchButtonEvent_ = {}, System::Action_2<GlobalNamespace::IAnnotatedBeatmapLevelCollection*, GlobalNamespace::BeatmapCharacteristicSO*>* didFilterBeatmapLevelCollectionEvent_ = {}, System::Action_1<GlobalNamespace::LevelSearchViewController*>* didStartLoadingEvent_ = {}, GlobalNamespace::LevelSearchViewController::BeatmapLevelPackCollection* beatmapLevelPackCollection_ = {}, GlobalNamespace::BeatmapCharacteristicSO* preferredBeatmapCharacteristic_ = {}, GlobalNamespace::LevelFilterParams* currentFilterParams_ = {}, bool onlyFavorites_ = {}, System::Threading::CancellationTokenSource* cancellationTokenSource_ = {}, ::Array<GlobalNamespace::IBeatmapLevelPack*>* beatmapLevelPacks_ = {}) noexcept : searchButton{searchButton_}, clearFiltersButton{clearFiltersButton_}, filterParamsText{filterParamsText_}, filterPlaceholder{filterPlaceholder_}, searchTextInputFieldView{searchTextInputFieldView_}, playerDataModel{playerDataModel_}, songPackMasksModel{songPackMasksModel_}, additionalContentModel{additionalContentModel_}, didPressSearchButtonEvent{didPressSearchButtonEvent_}, didFilterBeatmapLevelCollectionEvent{didFilterBeatmapLevelCollectionEvent_}, didStartLoadingEvent{didStartLoadingEvent_}, beatmapLevelPackCollection{beatmapLevelPackCollection_}, preferredBeatmapCharacteristic{preferredBeatmapCharacteristic_}, currentFilterParams{currentFilterParams_}, onlyFavorites{onlyFavorites_}, cancellationTokenSource{cancellationTokenSource_}, beatmapLevelPacks{beatmapLevelPacks_} {}
    // public System.Void add_didPressSearchButtonEvent(System.Action`2<LevelSearchViewController,LevelFilterParams> value)
    // Offset: 0x109952C
    void add_didPressSearchButtonEvent(System::Action_2<GlobalNamespace::LevelSearchViewController*, GlobalNamespace::LevelFilterParams*>* value);
    // public System.Void remove_didPressSearchButtonEvent(System.Action`2<LevelSearchViewController,LevelFilterParams> value)
    // Offset: 0x10995D0
    void remove_didPressSearchButtonEvent(System::Action_2<GlobalNamespace::LevelSearchViewController*, GlobalNamespace::LevelFilterParams*>* value);
    // public System.Void add_didFilterBeatmapLevelCollectionEvent(System.Action`2<IAnnotatedBeatmapLevelCollection,BeatmapCharacteristicSO> value)
    // Offset: 0x1094F04
    void add_didFilterBeatmapLevelCollectionEvent(System::Action_2<GlobalNamespace::IAnnotatedBeatmapLevelCollection*, GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // public System.Void remove_didFilterBeatmapLevelCollectionEvent(System.Action`2<IAnnotatedBeatmapLevelCollection,BeatmapCharacteristicSO> value)
    // Offset: 0x1095314
    void remove_didFilterBeatmapLevelCollectionEvent(System::Action_2<GlobalNamespace::IAnnotatedBeatmapLevelCollection*, GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // public System.Void add_didStartLoadingEvent(System.Action`1<LevelSearchViewController> value)
    // Offset: 0x1094FA8
    void add_didStartLoadingEvent(System::Action_1<GlobalNamespace::LevelSearchViewController*>* value);
    // public System.Void remove_didStartLoadingEvent(System.Action`1<LevelSearchViewController> value)
    // Offset: 0x10953B8
    void remove_didStartLoadingEvent(System::Action_1<GlobalNamespace::LevelSearchViewController*>* value);
    // public System.Void Setup(IBeatmapLevelPack[] beatmapLevelPacks)
    // Offset: 0x1094C00
    void Setup(::Array<GlobalNamespace::IBeatmapLevelPack*>* beatmapLevelPacks);
    // public System.Void ResetFilterParams(System.Boolean onlyFavorites)
    // Offset: 0x1095730
    void ResetFilterParams(bool onlyFavorites);
    // public System.Void UpdateSearchLevelFilterParams(LevelFilterParams levelFilterParams)
    // Offset: 0x109989C
    void UpdateSearchLevelFilterParams(GlobalNamespace::LevelFilterParams* levelFilterParams);
    // private System.Void ResetCurrentFilterParams()
    // Offset: 0x1099674
    void ResetCurrentFilterParams();
    // private System.Void UpdateBeatmapLevelPackCollectionAsync()
    // Offset: 0x10997DC
    void UpdateBeatmapLevelPackCollectionAsync();
    // private System.Void SearchTextInputFieldViewOnValueChanged(HMUI.InputFieldView inputFieldView)
    // Offset: 0x1099AE0
    void SearchTextInputFieldViewOnValueChanged(HMUI::InputFieldView* inputFieldView);
    // private System.Void UpdateCurrentFilterParams()
    // Offset: 0x1099788
    void UpdateCurrentFilterParams();
    // public System.Void RefreshAfterIncreaseNumberOfGameplay()
    // Offset: 0x1095974
    void RefreshAfterIncreaseNumberOfGameplay();
    // private System.Void Refresh()
    // Offset: 0x10998A4
    void Refresh();
    // private System.String LocalizedLevelFilterParamsDescription(LevelFilterParams levelFilterParams)
    // Offset: 0x1099B08
    ::Il2CppString* LocalizedLevelFilterParamsDescription(GlobalNamespace::LevelFilterParams* levelFilterParams);
    // private System.Void <DidActivate>b__27_0()
    // Offset: 0x1099E10
    void $DidActivate$b__27_0();
    // private System.Void <DidActivate>b__27_1()
    // Offset: 0x1099E78
    void $DidActivate$b__27_1();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x10998A8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate_NEW(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x1099A24
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate_NEW(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.Void .ctor()
    // Offset: 0x1099E08
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelSearchViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LevelSearchViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelSearchViewController*, creationType>()));
    }
  }; // LevelSearchViewController
  #pragma pack(pop)
  static check_size<sizeof(LevelSearchViewController), 240 + sizeof(::Array<GlobalNamespace::IBeatmapLevelPack*>*)> __GlobalNamespace_LevelSearchViewControllerSizeCheck;
  static_assert(sizeof(LevelSearchViewController) == 0xF8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelSearchViewController*, "", "LevelSearchViewController");
