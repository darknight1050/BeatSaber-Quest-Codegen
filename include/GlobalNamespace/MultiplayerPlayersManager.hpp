// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IMultiplayerLevelEndActionsPublisher
#include "GlobalNamespace/IMultiplayerLevelEndActionsPublisher.hpp"
// Including type: MultiplayerLocalActivePlayerFacade
#include "GlobalNamespace/MultiplayerLocalActivePlayerFacade.hpp"
// Including type: MultiplayerLocalInactivePlayerFacade
#include "GlobalNamespace/MultiplayerLocalInactivePlayerFacade.hpp"
// Including type: MultiplayerConnectedPlayerFacade
#include "GlobalNamespace/MultiplayerConnectedPlayerFacade.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: BeatmapObjectSpawnCenter
  class BeatmapObjectSpawnCenter;
  // Forward declaring type: MultiplayerLayoutProvider
  class MultiplayerLayoutProvider;
  // Forward declaring type: FadeInOutController
  class FadeInOutController;
  // Forward declaring type: MultiplayerLevelCompletionResults
  class MultiplayerLevelCompletionResults;
  // Skipping declaration: IStartSeekSongControllerProvider because it is already included!
  // Forward declaring type: MultiplayerPlayerStartState
  struct MultiplayerPlayerStartState;
  // Forward declaring type: MultiplayerPlayerLayout
  struct MultiplayerPlayerLayout;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xE0
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerPlayersManager
  class MultiplayerPlayersManager : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IMultiplayerLevelEndActionsPublisher*/ {
    public:
    // Nested type: GlobalNamespace::MultiplayerPlayersManager::$SwitchLocalPlayerToInactiveCoroutine$d__51
    class $SwitchLocalPlayerToInactiveCoroutine$d__51;
    // private MultiplayerLocalActivePlayerFacade _activeLocalPlayerControllerPrefab
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MultiplayerLocalActivePlayerFacade* activeLocalPlayerControllerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLocalActivePlayerFacade*) == 0x8);
    // private MultiplayerLocalActivePlayerFacade _activeLocalPlayerDuelControllerPrefab
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerLocalActivePlayerFacade* activeLocalPlayerDuelControllerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLocalActivePlayerFacade*) == 0x8);
    // private MultiplayerLocalInactivePlayerFacade _inactiveLocalPlayerControllerPrefab
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MultiplayerLocalInactivePlayerFacade* inactiveLocalPlayerControllerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLocalInactivePlayerFacade*) == 0x8);
    // private MultiplayerConnectedPlayerFacade _connectedPlayerControllerPrefab
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MultiplayerConnectedPlayerFacade* connectedPlayerControllerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConnectedPlayerFacade*) == 0x8);
    // private MultiplayerConnectedPlayerFacade _connectedPlayerDuelControllerPrefab
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MultiplayerConnectedPlayerFacade* connectedPlayerDuelControllerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConnectedPlayerFacade*) == 0x8);
    // [InjectAttribute] Offset: 0xE1E7A4
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE1E7B4
    // private readonly BeatmapObjectSpawnCenter _beatmapObjectSpawnCenter
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::BeatmapObjectSpawnCenter* beatmapObjectSpawnCenter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectSpawnCenter*) == 0x8);
    // [InjectAttribute] Offset: 0xE1E7C4
    // private readonly MultiplayerLayoutProvider _layoutProvider
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::MultiplayerLayoutProvider* layoutProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLayoutProvider*) == 0x8);
    // [InjectAttribute] Offset: 0xE1E7D4
    // private readonly FadeInOutController _fadeInOutController
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::FadeInOutController* fadeInOutController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FadeInOutController*) == 0x8);
    // [InjectAttribute] Offset: 0xE1E7E4
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x60
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1E7F4
    // private System.Boolean <playerSpawningFinished>k__BackingField
    // Size: 0x1
    // Offset: 0x68
    bool playerSpawningFinished;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: playerSpawningFinished and: playerSpawningDidFinishEvent
    char __padding10[0x7] = {};
    // [CompilerGeneratedAttribute] Offset: 0xE1E804
    // private System.Action playerSpawningDidFinishEvent
    // Size: 0x8
    // Offset: 0x70
    System::Action* playerSpawningDidFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1E814
    // private System.Action didSwitchPlayerToInactiveEvent
    // Size: 0x8
    // Offset: 0x78
    System::Action* didSwitchPlayerToInactiveEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1E824
    // private System.Action`1<MultiplayerLevelCompletionResults> playerDidFinishEvent
    // Size: 0x8
    // Offset: 0x80
    System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>* playerDidFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1E834
    // private System.Action`1<PlayerNetworkFailReason> playerNetworkDidFailedEvent
    // Size: 0x8
    // Offset: 0x88
    System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* playerNetworkDidFailedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>*) == 0x8);
    // private MultiplayerLocalActivePlayerFacade _activeLocalPlayerFacade
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::MultiplayerLocalActivePlayerFacade* activeLocalPlayerFacade;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLocalActivePlayerFacade*) == 0x8);
    // private MultiplayerLocalInactivePlayerFacade _inactiveLocalPlayerFacade
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::MultiplayerLocalInactivePlayerFacade* inactiveLocalPlayerFacade;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLocalInactivePlayerFacade*) == 0x8);
    // private IMultiplayerLevelEndActionsPublisher _currentEventsPublisher
    // Size: 0x8
    // Offset: 0xA0
    GlobalNamespace::IMultiplayerLevelEndActionsPublisher* currentEventsPublisher;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerLevelEndActionsPublisher*) == 0x8);
    // private IStartSeekSongControllerProvider _currentStartSeekSongControllerProvider
    // Size: 0x8
    // Offset: 0xA8
    GlobalNamespace::IStartSeekSongControllerProvider* currentStartSeekSongControllerProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IStartSeekSongControllerProvider*) == 0x8);
    // private MultiplayerLocalActivePlayerFacade/Factory _activeLocalPlayerFactory
    // Size: 0x8
    // Offset: 0xB0
    GlobalNamespace::MultiplayerLocalActivePlayerFacade::Factory* activeLocalPlayerFactory;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLocalActivePlayerFacade::Factory*) == 0x8);
    // private MultiplayerLocalInactivePlayerFacade/Factory _inactiveLocalPlayerFactory
    // Size: 0x8
    // Offset: 0xB8
    GlobalNamespace::MultiplayerLocalInactivePlayerFacade::Factory* inactiveLocalPlayerFactory;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLocalInactivePlayerFacade::Factory*) == 0x8);
    // private MultiplayerConnectedPlayerFacade/Factory _connectedPlayerFactory
    // Size: 0x8
    // Offset: 0xC0
    GlobalNamespace::MultiplayerConnectedPlayerFacade::Factory* connectedPlayerFactory;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConnectedPlayerFacade::Factory*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.String,MultiplayerConnectedPlayerFacade> _connectedPlayerControllersMap
    // Size: 0x8
    // Offset: 0xC8
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerConnectedPlayerFacade*>* connectedPlayerControllersMap;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerConnectedPlayerFacade*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.String,System.Single> _connectedPlayerCenterFacingRotationsMap
    // Size: 0x8
    // Offset: 0xD0
    System::Collections::Generic::Dictionary_2<::Il2CppString*, float>* connectedPlayerCenterFacingRotationsMap;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, float>*) == 0x8);
    // private System.Collections.Generic.IReadOnlyList`1<IConnectedPlayer> _allActiveAtGameStartPlayers
    // Size: 0x8
    // Offset: 0xD8
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer*>* allActiveAtGameStartPlayers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer*>*) == 0x8);
    // Creating value type constructor for type: MultiplayerPlayersManager
    MultiplayerPlayersManager(GlobalNamespace::MultiplayerLocalActivePlayerFacade* activeLocalPlayerControllerPrefab_ = {}, GlobalNamespace::MultiplayerLocalActivePlayerFacade* activeLocalPlayerDuelControllerPrefab_ = {}, GlobalNamespace::MultiplayerLocalInactivePlayerFacade* inactiveLocalPlayerControllerPrefab_ = {}, GlobalNamespace::MultiplayerConnectedPlayerFacade* connectedPlayerControllerPrefab_ = {}, GlobalNamespace::MultiplayerConnectedPlayerFacade* connectedPlayerDuelControllerPrefab_ = {}, GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}, GlobalNamespace::BeatmapObjectSpawnCenter* beatmapObjectSpawnCenter_ = {}, GlobalNamespace::MultiplayerLayoutProvider* layoutProvider_ = {}, GlobalNamespace::FadeInOutController* fadeInOutController_ = {}, Zenject::DiContainer* container_ = {}, bool playerSpawningFinished_ = {}, System::Action* playerSpawningDidFinishEvent_ = {}, System::Action* didSwitchPlayerToInactiveEvent_ = {}, System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>* playerDidFinishEvent_ = {}, System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* playerNetworkDidFailedEvent_ = {}, GlobalNamespace::MultiplayerLocalActivePlayerFacade* activeLocalPlayerFacade_ = {}, GlobalNamespace::MultiplayerLocalInactivePlayerFacade* inactiveLocalPlayerFacade_ = {}, GlobalNamespace::IMultiplayerLevelEndActionsPublisher* currentEventsPublisher_ = {}, GlobalNamespace::IStartSeekSongControllerProvider* currentStartSeekSongControllerProvider_ = {}, GlobalNamespace::MultiplayerLocalActivePlayerFacade::Factory* activeLocalPlayerFactory_ = {}, GlobalNamespace::MultiplayerLocalInactivePlayerFacade::Factory* inactiveLocalPlayerFactory_ = {}, GlobalNamespace::MultiplayerConnectedPlayerFacade::Factory* connectedPlayerFactory_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerConnectedPlayerFacade*>* connectedPlayerControllersMap_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, float>* connectedPlayerCenterFacingRotationsMap_ = {}, System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer*>* allActiveAtGameStartPlayers_ = {}) noexcept : activeLocalPlayerControllerPrefab{activeLocalPlayerControllerPrefab_}, activeLocalPlayerDuelControllerPrefab{activeLocalPlayerDuelControllerPrefab_}, inactiveLocalPlayerControllerPrefab{inactiveLocalPlayerControllerPrefab_}, connectedPlayerControllerPrefab{connectedPlayerControllerPrefab_}, connectedPlayerDuelControllerPrefab{connectedPlayerDuelControllerPrefab_}, multiplayerSessionManager{multiplayerSessionManager_}, beatmapObjectSpawnCenter{beatmapObjectSpawnCenter_}, layoutProvider{layoutProvider_}, fadeInOutController{fadeInOutController_}, container{container_}, playerSpawningFinished{playerSpawningFinished_}, playerSpawningDidFinishEvent{playerSpawningDidFinishEvent_}, didSwitchPlayerToInactiveEvent{didSwitchPlayerToInactiveEvent_}, playerDidFinishEvent{playerDidFinishEvent_}, playerNetworkDidFailedEvent{playerNetworkDidFailedEvent_}, activeLocalPlayerFacade{activeLocalPlayerFacade_}, inactiveLocalPlayerFacade{inactiveLocalPlayerFacade_}, currentEventsPublisher{currentEventsPublisher_}, currentStartSeekSongControllerProvider{currentStartSeekSongControllerProvider_}, activeLocalPlayerFactory{activeLocalPlayerFactory_}, inactiveLocalPlayerFactory{inactiveLocalPlayerFactory_}, connectedPlayerFactory{connectedPlayerFactory_}, connectedPlayerControllersMap{connectedPlayerControllersMap_}, connectedPlayerCenterFacingRotationsMap{connectedPlayerCenterFacingRotationsMap_}, allActiveAtGameStartPlayers{allActiveAtGameStartPlayers_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IMultiplayerLevelEndActionsPublisher
    operator GlobalNamespace::IMultiplayerLevelEndActionsPublisher() noexcept {
      return *reinterpret_cast<GlobalNamespace::IMultiplayerLevelEndActionsPublisher*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_playerSpawningFinished()
    // Offset: 0x23E0080
    bool get_playerSpawningFinished();
    // private System.Void set_playerSpawningFinished(System.Boolean value)
    // Offset: 0x23E0088
    void set_playerSpawningFinished(bool value);
    // public System.Collections.Generic.IReadOnlyList`1<IConnectedPlayer> get_allActiveAtGameStartPlayers()
    // Offset: 0x23E0094
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer*>* get_allActiveAtGameStartPlayers();
    // public IStartSeekSongControllerProvider get_localPlayerStartSeekSongController()
    // Offset: 0x23E009C
    GlobalNamespace::IStartSeekSongControllerProvider* get_localPlayerStartSeekSongController();
    // public MultiplayerLocalActivePlayerFacade get_activeLocalPlayerFacade()
    // Offset: 0x23E00A4
    GlobalNamespace::MultiplayerLocalActivePlayerFacade* get_activeLocalPlayerFacade();
    // public MultiplayerLocalInactivePlayerFacade get_inactivePlayerFacade()
    // Offset: 0x23E00AC
    GlobalNamespace::MultiplayerLocalInactivePlayerFacade* get_inactivePlayerFacade();
    // public UnityEngine.Transform get_localPlayerTransform()
    // Offset: 0x23DB640
    UnityEngine::Transform* get_localPlayerTransform();
    // public System.Void add_playerSpawningDidFinishEvent(System.Action value)
    // Offset: 0x23DC954
    void add_playerSpawningDidFinishEvent(System::Action* value);
    // public System.Void remove_playerSpawningDidFinishEvent(System.Action value)
    // Offset: 0x23DD1E4
    void remove_playerSpawningDidFinishEvent(System::Action* value);
    // public System.Void add_didSwitchPlayerToInactiveEvent(System.Action value)
    // Offset: 0x23E00B4
    void add_didSwitchPlayerToInactiveEvent(System::Action* value);
    // public System.Void remove_didSwitchPlayerToInactiveEvent(System.Action value)
    // Offset: 0x23E0158
    void remove_didSwitchPlayerToInactiveEvent(System::Action* value);
    // public System.Void add_playerDidFinishEvent(System.Action`1<MultiplayerLevelCompletionResults> value)
    // Offset: 0x23E01FC
    void add_playerDidFinishEvent(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>* value);
    // public System.Void remove_playerDidFinishEvent(System.Action`1<MultiplayerLevelCompletionResults> value)
    // Offset: 0x23E02A0
    void remove_playerDidFinishEvent(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>* value);
    // public System.Void add_playerNetworkDidFailedEvent(System.Action`1<PlayerNetworkFailReason> value)
    // Offset: 0x23E0344
    void add_playerNetworkDidFailedEvent(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* value);
    // public System.Void remove_playerNetworkDidFailedEvent(System.Action`1<PlayerNetworkFailReason> value)
    // Offset: 0x23E03E8
    void remove_playerNetworkDidFailedEvent(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* value);
    // public System.Void SpawnPlayers(MultiplayerPlayerStartState localPlayerStartState, System.Collections.Generic.IReadOnlyList`1<IConnectedPlayer> allActiveAtGameStartPlayers)
    // Offset: 0x23E048C
    void SpawnPlayers(GlobalNamespace::MultiplayerPlayerStartState localPlayerStartState, System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer*>* allActiveAtGameStartPlayers);
    // public System.Boolean TryGetConnectedPlayerController(System.String userId, out MultiplayerConnectedPlayerFacade connectedPlayerController)
    // Offset: 0x23DC168
    bool TryGetConnectedPlayerController(::Il2CppString* userId, GlobalNamespace::MultiplayerConnectedPlayerFacade*& connectedPlayerController);
    // public System.Boolean TryGetConnectedCenterFacingRotation(System.String userId, out System.Single centerFacingRotation)
    // Offset: 0x23E1040
    bool TryGetConnectedCenterFacingRotation(::Il2CppString* userId, float& centerFacingRotation);
    // public System.Void SwitchLocalPlayerToInactive()
    // Offset: 0x23E10B0
    void SwitchLocalPlayerToInactive();
    // public System.Void ReportLocalPlayerNetworkDidFailed(PlayerNetworkFailReason failReason)
    // Offset: 0x23E114C
    void ReportLocalPlayerNetworkDidFailed(GlobalNamespace::PlayerNetworkFailReason failReason);
    // private System.Collections.IEnumerator SwitchLocalPlayerToInactiveCoroutine()
    // Offset: 0x23E10DC
    System::Collections::IEnumerator* SwitchLocalPlayerToInactiveCoroutine();
    // private System.Void BindPlayerFactories(MultiplayerPlayerLayout layout)
    // Offset: 0x23E0E44
    void BindPlayerFactories(GlobalNamespace::MultiplayerPlayerLayout layout);
    // private System.Void HandlePlayerDidFinish(MultiplayerLevelCompletionResults levelCompletionResults)
    // Offset: 0x23E11EC
    void HandlePlayerDidFinish(GlobalNamespace::MultiplayerLevelCompletionResults* levelCompletionResults);
    // private System.Void HandlePlayerNetworkDidFailed(PlayerNetworkFailReason failReason)
    // Offset: 0x23E1260
    void HandlePlayerNetworkDidFailed(GlobalNamespace::PlayerNetworkFailReason failReason);
    // public System.Void .ctor()
    // Offset: 0x23E1264
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerPlayersManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerPlayersManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerPlayersManager*, creationType>()));
    }
  }; // MultiplayerPlayersManager
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerPlayersManager), 216 + sizeof(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer*>*)> __GlobalNamespace_MultiplayerPlayersManagerSizeCheck;
  static_assert(sizeof(MultiplayerPlayersManager) == 0xE0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerPlayersManager*, "", "MultiplayerPlayersManager");
