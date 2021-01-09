// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO;
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
  // Forward declaring type: MissionLevelScenesTransitionSetupDataSO
  class MissionLevelScenesTransitionSetupDataSO;
  // Forward declaring type: MenuScenesTransitionSetupDataSO
  class MenuScenesTransitionSetupDataSO;
  // Forward declaring type: IRichPresencePlatformHandler
  class IRichPresencePlatformHandler;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: BrowsingMenusRichPresenceData
  class BrowsingMenusRichPresenceData;
  // Forward declaring type: PlayingCampaignRichPresenceData
  class PlayingCampaignRichPresenceData;
  // Forward declaring type: PlayingTutorialPresenceData
  class PlayingTutorialPresenceData;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  // Autogenerated type: RichPresenceManager
  // [] Offset: FFFFFFFF
  class RichPresenceManager : public UnityEngine::MonoBehaviour {
    public:
    // private StandardLevelScenesTransitionSetupDataSO _standardLevelScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*) == 0x8);
    // private ScenesTransitionSetupDataSO _tutorialScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ScenesTransitionSetupDataSO* tutorialScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ScenesTransitionSetupDataSO*) == 0x8);
    // private MissionLevelScenesTransitionSetupDataSO _missionLevelScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*) == 0x8);
    // [InjectAttribute] Offset: 0xDC518C
    // private readonly MenuScenesTransitionSetupDataSO _menuScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MenuScenesTransitionSetupDataSO* menuScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuScenesTransitionSetupDataSO*) == 0x8);
    // [InjectAttribute] Offset: 0xDC519C
    // private readonly IRichPresencePlatformHandler _richPresencePlatformHandler
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::IRichPresencePlatformHandler* richPresencePlatformHandler;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IRichPresencePlatformHandler*) == 0x8);
    // [InjectAttribute] Offset: 0xDC51AC
    // private readonly GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // private System.Boolean _menuWasLoaded
    // Size: 0x1
    // Offset: 0x48
    bool menuWasLoaded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: menuWasLoaded and: browsingMenusRichPresenceData
    char __padding6[0x7] = {};
    // private BrowsingMenusRichPresenceData _browsingMenusRichPresenceData
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::BrowsingMenusRichPresenceData* browsingMenusRichPresenceData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BrowsingMenusRichPresenceData*) == 0x8);
    // private PlayingCampaignRichPresenceData _playingCampaignRichPresenceData
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::PlayingCampaignRichPresenceData* playingCampaignRichPresenceData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayingCampaignRichPresenceData*) == 0x8);
    // private PlayingTutorialPresenceData _playingTutorialPresenceData
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::PlayingTutorialPresenceData* playingTutorialPresenceData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayingTutorialPresenceData*) == 0x8);
    // Creating value type constructor for type: RichPresenceManager
    RichPresenceManager(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData_ = {}, GlobalNamespace::ScenesTransitionSetupDataSO* tutorialScenesTransitionSetupData_ = {}, GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData_ = {}, GlobalNamespace::MenuScenesTransitionSetupDataSO* menuScenesTransitionSetupData_ = {}, GlobalNamespace::IRichPresencePlatformHandler* richPresencePlatformHandler_ = {}, GlobalNamespace::GameScenesManager* gameScenesManager_ = {}, bool menuWasLoaded_ = {}, GlobalNamespace::BrowsingMenusRichPresenceData* browsingMenusRichPresenceData_ = {}, GlobalNamespace::PlayingCampaignRichPresenceData* playingCampaignRichPresenceData_ = {}, GlobalNamespace::PlayingTutorialPresenceData* playingTutorialPresenceData_ = {}) noexcept : standardLevelScenesTransitionSetupData{standardLevelScenesTransitionSetupData_}, tutorialScenesTransitionSetupData{tutorialScenesTransitionSetupData_}, missionLevelScenesTransitionSetupData{missionLevelScenesTransitionSetupData_}, menuScenesTransitionSetupData{menuScenesTransitionSetupData_}, richPresencePlatformHandler{richPresencePlatformHandler_}, gameScenesManager{gameScenesManager_}, menuWasLoaded{menuWasLoaded_}, browsingMenusRichPresenceData{browsingMenusRichPresenceData_}, playingCampaignRichPresenceData{playingCampaignRichPresenceData_}, playingTutorialPresenceData{playingTutorialPresenceData_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0xF358B0
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0xF359C0
    void OnDestroy();
    // private System.Void HandleGameScenesManagerTransitionDidFinish(ScenesTransitionSetupDataSO scenesTransitionSetupData, Zenject.DiContainer diContainer)
    // Offset: 0xF35A9C
    void HandleGameScenesManagerTransitionDidFinish(GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, Zenject::DiContainer* diContainer);
    // public System.Void .ctor()
    // Offset: 0xF35EA8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RichPresenceManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RichPresenceManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RichPresenceManager*, creationType>()));
    }
  }; // RichPresenceManager
  static check_size<sizeof(RichPresenceManager), 96 + sizeof(GlobalNamespace::PlayingTutorialPresenceData*)> __GlobalNamespace_RichPresenceManagerSizeCheck;
  static_assert(sizeof(RichPresenceManager) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RichPresenceManager*, "", "RichPresenceManager");
#pragma pack(pop)
