// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.FlowCoordinator
#include "HMUI/FlowCoordinator.hpp"
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
  // Forward declaring type: DlcPromoExperimentModel
  class DlcPromoExperimentModel;
  // Forward declaring type: EulaViewController
  class EulaViewController;
  // Forward declaring type: HealthWarningViewController
  class HealthWarningViewController;
  // Forward declaring type: PrivacyPolicyViewController
  class PrivacyPolicyViewController;
  // Forward declaring type: SelectLanguageViewController
  class SelectLanguageViewController;
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
  // Forward declaring type: AppInitScenesTransitionSetupDataContainerSO
  class AppInitScenesTransitionSetupDataContainerSO;
  // Forward declaring type: SimpleDialogPromptViewController
  class SimpleDialogPromptViewController;
  // Forward declaring type: FadeInOutController
  class FadeInOutController;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x110
  #pragma pack(push, 1)
  // Autogenerated type: HealthWarningFlowCoordinator
  class HealthWarningFlowCoordinator : public HMUI::FlowCoordinator {
    public:
    // Nested type: GlobalNamespace::HealthWarningFlowCoordinator::InitData
    class InitData;
    // [InjectAttribute] Offset: 0xE22724
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0xA8
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0xE22734
    // private readonly DlcPromoExperimentModel _dlcPromoExperimentModel
    // Size: 0x8
    // Offset: 0xB0
    GlobalNamespace::DlcPromoExperimentModel* dlcPromoExperimentModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DlcPromoExperimentModel*) == 0x8);
    // [SpaceAttribute] Offset: 0xE22744
    // private EulaViewController _eulaViewController
    // Size: 0x8
    // Offset: 0xB8
    GlobalNamespace::EulaViewController* eulaViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EulaViewController*) == 0x8);
    // private HealthWarningViewController _healthWarningViewController
    // Size: 0x8
    // Offset: 0xC0
    GlobalNamespace::HealthWarningViewController* healthWarningViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HealthWarningViewController*) == 0x8);
    // private PrivacyPolicyViewController _privacyPolicyViewController
    // Size: 0x8
    // Offset: 0xC8
    GlobalNamespace::PrivacyPolicyViewController* privacyPolicyViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PrivacyPolicyViewController*) == 0x8);
    // private SelectLanguageViewController _selectLanguageViewController
    // Size: 0x8
    // Offset: 0xD0
    GlobalNamespace::SelectLanguageViewController* selectLanguageViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SelectLanguageViewController*) == 0x8);
    // private MainSettingsModelSO _mainSettingsModel
    // Size: 0x8
    // Offset: 0xD8
    GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSettingsModelSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xE227BC
    // private AppInitScenesTransitionSetupDataContainerSO _appInitScenesTransitionSetupDataContainer
    // Size: 0x8
    // Offset: 0xE0
    GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* appInitScenesTransitionSetupDataContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE227F4
    // private readonly SimpleDialogPromptViewController _simpleDialogPromptViewController
    // Size: 0x8
    // Offset: 0xE8
    GlobalNamespace::SimpleDialogPromptViewController* simpleDialogPromptViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SimpleDialogPromptViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xE22804
    // private readonly FadeInOutController _fadeInOut
    // Size: 0x8
    // Offset: 0xF0
    GlobalNamespace::FadeInOutController* fadeInOut;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FadeInOutController*) == 0x8);
    // [InjectAttribute] Offset: 0xE22814
    // private readonly GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0xF8
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE22824
    // private readonly HealthWarningFlowCoordinator/InitData _initData
    // Size: 0x8
    // Offset: 0x100
    GlobalNamespace::HealthWarningFlowCoordinator::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HealthWarningFlowCoordinator::InitData*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<HMUI.ViewController,System.String> _viewControllerTitles
    // Size: 0x8
    // Offset: 0x108
    System::Collections::Generic::Dictionary_2<HMUI::ViewController*, ::Il2CppString*>* viewControllerTitles;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<HMUI::ViewController*, ::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: HealthWarningFlowCoordinator
    HealthWarningFlowCoordinator(GlobalNamespace::PlayerDataModel* playerDataModel_ = {}, GlobalNamespace::DlcPromoExperimentModel* dlcPromoExperimentModel_ = {}, GlobalNamespace::EulaViewController* eulaViewController_ = {}, GlobalNamespace::HealthWarningViewController* healthWarningViewController_ = {}, GlobalNamespace::PrivacyPolicyViewController* privacyPolicyViewController_ = {}, GlobalNamespace::SelectLanguageViewController* selectLanguageViewController_ = {}, GlobalNamespace::MainSettingsModelSO* mainSettingsModel_ = {}, GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* appInitScenesTransitionSetupDataContainer_ = {}, GlobalNamespace::SimpleDialogPromptViewController* simpleDialogPromptViewController_ = {}, GlobalNamespace::FadeInOutController* fadeInOut_ = {}, GlobalNamespace::GameScenesManager* gameScenesManager_ = {}, GlobalNamespace::HealthWarningFlowCoordinator::InitData* initData_ = {}, System::Collections::Generic::Dictionary_2<HMUI::ViewController*, ::Il2CppString*>* viewControllerTitles_ = {}) noexcept : playerDataModel{playerDataModel_}, dlcPromoExperimentModel{dlcPromoExperimentModel_}, eulaViewController{eulaViewController_}, healthWarningViewController{healthWarningViewController_}, privacyPolicyViewController{privacyPolicyViewController_}, selectLanguageViewController{selectLanguageViewController_}, mainSettingsModel{mainSettingsModel_}, appInitScenesTransitionSetupDataContainer{appInitScenesTransitionSetupDataContainer_}, simpleDialogPromptViewController{simpleDialogPromptViewController_}, fadeInOut{fadeInOut_}, gameScenesManager{gameScenesManager_}, initData{initData_}, viewControllerTitles{viewControllerTitles_} {}
    // private HMUI.ViewController GetEulaOrHealthWarningViewController()
    // Offset: 0x1061238
    HMUI::ViewController* GetEulaOrHealthWarningViewController();
    // protected System.Void Update()
    // Offset: 0x106168C
    void Update();
    // private System.Void HandleSelectLanguageViewControllerDidChangeLanguage()
    // Offset: 0x10616CC
    void HandleSelectLanguageViewControllerDidChangeLanguage();
    // private System.Void HandleSelectLanguageViewControllerDidPressContinueButton()
    // Offset: 0x1061754
    void HandleSelectLanguageViewControllerDidPressContinueButton();
    // private System.Void HandleEulaViewControllerDidFinish(System.Boolean agreed)
    // Offset: 0x10617AC
    void HandleEulaViewControllerDidFinish(bool agreed);
    // private System.Void HandleHealthWarningViewControllerPrivacyPolicyButtonPressed()
    // Offset: 0x1061820
    void HandleHealthWarningViewControllerPrivacyPolicyButtonPressed();
    // private System.Void HandleHealthWarningViewControllerOpenDataPrivacyPolicyButtonPressed()
    // Offset: 0x1061838
    void HandleHealthWarningViewControllerOpenDataPrivacyPolicyButtonPressed();
    // private System.Void HandleHealthWarningViewControllerDidFinish()
    // Offset: 0x10616C8
    void HandleHealthWarningViewControllerDidFinish();
    // private System.Void GoToNextScene()
    // Offset: 0x106190C
    void GoToNextScene();
    // private System.Void <HandleHealthWarningViewControllerOpenDataPrivacyPolicyButtonPressed>b__23_0(System.Int32 button)
    // Offset: 0x1061A1C
    void $HandleHealthWarningViewControllerOpenDataPrivacyPolicyButtonPressed$b__23_0(int button);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1060D04
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x1061270
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // protected override System.Void TopViewControllerWillChange(HMUI.ViewController oldViewController, HMUI.ViewController newViewController, HMUI.ViewController/AnimationType animationType)
    // Offset: 0x10615B8
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::TopViewControllerWillChange(HMUI.ViewController oldViewController, HMUI.ViewController newViewController, HMUI.ViewController/AnimationType animationType)
    void TopViewControllerWillChange(HMUI::ViewController* oldViewController, HMUI::ViewController* newViewController, HMUI::ViewController::AnimationType animationType);
    // protected override System.Void BackButtonWasPressed(HMUI.ViewController topViewController)
    // Offset: 0x1061968
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::BackButtonWasPressed(HMUI.ViewController topViewController)
    void BackButtonWasPressed(HMUI::ViewController* topViewController);
    // public System.Void .ctor()
    // Offset: 0x1061A14
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HealthWarningFlowCoordinator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HealthWarningFlowCoordinator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HealthWarningFlowCoordinator*, creationType>()));
    }
  }; // HealthWarningFlowCoordinator
  #pragma pack(pop)
  static check_size<sizeof(HealthWarningFlowCoordinator), 264 + sizeof(System::Collections::Generic::Dictionary_2<HMUI::ViewController*, ::Il2CppString*>*)> __GlobalNamespace_HealthWarningFlowCoordinatorSizeCheck;
  static_assert(sizeof(HealthWarningFlowCoordinator) == 0x110);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HealthWarningFlowCoordinator*, "", "HealthWarningFlowCoordinator");
