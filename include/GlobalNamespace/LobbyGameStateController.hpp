// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ILobbyHostGameStateController
#include "GlobalNamespace/ILobbyHostGameStateController.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: MultiplayerGameState
#include "GlobalNamespace/MultiplayerGameState.hpp"
// Including type: MultiplayerLobbyState
#include "GlobalNamespace/MultiplayerLobbyState.hpp"
// Including type: MultiplayerGameType
#include "GlobalNamespace/MultiplayerGameType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ILobbyPlayersDataModel
  class ILobbyPlayersDataModel;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: IMenuRpcManager
  class IMenuRpcManager;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: MultiplayerLevelLoader
  class MultiplayerLevelLoader;
  // Forward declaring type: MenuTransitionsHelper
  class MenuTransitionsHelper;
  // Forward declaring type: LobbyGameState
  class LobbyGameState;
  // Forward declaring type: MultiplayerLevelScenesTransitionSetupDataSO
  class MultiplayerLevelScenesTransitionSetupDataSO;
  // Forward declaring type: MultiplayerResultsData
  class MultiplayerResultsData;
  // Forward declaring type: BeatmapIdentifierNetSerializable
  class BeatmapIdentifierNetSerializable;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xCD
  #pragma pack(push, 1)
  // Autogenerated type: LobbyGameStateController
  class LobbyGameStateController : public ::Il2CppObject/*, public GlobalNamespace::ILobbyHostGameStateController, public System::IDisposable*/ {
    public:
    // [InjectAttribute] Offset: 0xE1796C
    // private readonly ILobbyPlayersDataModel _lobbyPlayersDataModel
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::ILobbyPlayersDataModel* lobbyPlayersDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ILobbyPlayersDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0xE1797C
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0xE1798C
    // private readonly IMenuRpcManager _menuRpcManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IMenuRpcManager* menuRpcManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMenuRpcManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE1799C
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE179AC
    // private readonly MultiplayerLevelLoader _multiplayerLevelLoader
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MultiplayerLevelLoader* multiplayerLevelLoader;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLevelLoader*) == 0x8);
    // [InjectAttribute] Offset: 0xE179BC
    // private readonly MenuTransitionsHelper _menuTransitionsHelper
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuTransitionsHelper*) == 0x8);
    // [InjectAttribute] Offset: 0xE179CC
    // private readonly LobbyGameState _lobbyGameState
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::LobbyGameState* lobbyGameState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LobbyGameState*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE179DC
    // private System.Action gameStartedEvent
    // Size: 0x8
    // Offset: 0x48
    System::Action* gameStartedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE179EC
    // private System.Action gameStartCancelledEvent
    // Size: 0x8
    // Offset: 0x50
    System::Action* gameStartCancelledEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE179FC
    // private System.Action countdownStartedEvent
    // Size: 0x8
    // Offset: 0x58
    System::Action* countdownStartedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE17A0C
    // private System.Action countdownCancelledEvent
    // Size: 0x8
    // Offset: 0x60
    System::Action* countdownCancelledEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE17A1C
    // private System.Action songStillDownloadingEvent
    // Size: 0x8
    // Offset: 0x68
    System::Action* songStillDownloadingEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE17A2C
    // private System.Action startTimeChangedEvent
    // Size: 0x8
    // Offset: 0x70
    System::Action* startTimeChangedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE17A3C
    // private System.Action`1<MultiplayerGameState> multiplayerGameStateChangedEvent
    // Size: 0x8
    // Offset: 0x78
    System::Action_1<GlobalNamespace::MultiplayerGameState>* multiplayerGameStateChangedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MultiplayerGameState>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE17A4C
    // private System.Action`2<MultiplayerLevelScenesTransitionSetupDataSO,MultiplayerResultsData> levelFinishedEvent
    // Size: 0x8
    // Offset: 0x80
    System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::MultiplayerResultsData*>* levelFinishedEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::MultiplayerResultsData*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE17A5C
    // private System.Action`1<DisconnectedReason> levelDidGetDisconnectedEvent
    // Size: 0x8
    // Offset: 0x88
    System::Action_1<GlobalNamespace::DisconnectedReason>* levelDidGetDisconnectedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::DisconnectedReason>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE17A6C
    // private System.Action lobbyDisconnectedEvent
    // Size: 0x8
    // Offset: 0x90
    System::Action* lobbyDisconnectedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE17A7C
    // private System.Action beforeSceneSwitchCallback
    // Size: 0x8
    // Offset: 0x98
    System::Action* beforeSceneSwitchCallback;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE17A8C
    // private System.Boolean <levelStartInitiated>k__BackingField
    // Size: 0x1
    // Offset: 0xA0
    bool levelStartInitiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: levelStartInitiated and: startedBeatmapId
    char __padding18[0x7] = {};
    // [CompilerGeneratedAttribute] Offset: 0xE17A9C
    // private BeatmapIdentifierNetSerializable <startedBeatmapId>k__BackingField
    // Size: 0x8
    // Offset: 0xA8
    GlobalNamespace::BeatmapIdentifierNetSerializable* startedBeatmapId;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapIdentifierNetSerializable*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE17AAC
    // private System.Boolean <countdownStarted>k__BackingField
    // Size: 0x1
    // Offset: 0xB0
    bool countdownStarted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: countdownStarted and: countdownEndTime
    char __padding20[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xE17ABC
    // private System.Single <countdownEndTime>k__BackingField
    // Size: 0x4
    // Offset: 0xB4
    float countdownEndTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE17ACC
    // private MultiplayerLobbyState <state>k__BackingField
    // Size: 0x4
    // Offset: 0xB8
    GlobalNamespace::MultiplayerLobbyState state;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLobbyState) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE17ADC
    // private MultiplayerGameType <gameType>k__BackingField
    // Size: 0x4
    // Offset: 0xBC
    GlobalNamespace::MultiplayerGameType gameType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerGameType) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE17AEC
    // private System.Boolean <isDisconnected>k__BackingField
    // Size: 0x1
    // Offset: 0xC0
    bool isDisconnected;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isDisconnected and: disconnectedReason
    char __padding24[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xE17AFC
    // private DisconnectedReason <disconnectedReason>k__BackingField
    // Size: 0x4
    // Offset: 0xC4
    GlobalNamespace::DisconnectedReason disconnectedReason;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DisconnectedReason) == 0x4);
    // private System.Single _startTime
    // Size: 0x4
    // Offset: 0xC8
    float startTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _levelStartedOnTime
    // Size: 0x1
    // Offset: 0xCC
    bool levelStartedOnTime;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: LobbyGameStateController
    LobbyGameStateController(GlobalNamespace::ILobbyPlayersDataModel* lobbyPlayersDataModel_ = {}, GlobalNamespace::PlayerDataModel* playerDataModel_ = {}, GlobalNamespace::IMenuRpcManager* menuRpcManager_ = {}, GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}, GlobalNamespace::MultiplayerLevelLoader* multiplayerLevelLoader_ = {}, GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper_ = {}, GlobalNamespace::LobbyGameState* lobbyGameState_ = {}, System::Action* gameStartedEvent_ = {}, System::Action* gameStartCancelledEvent_ = {}, System::Action* countdownStartedEvent_ = {}, System::Action* countdownCancelledEvent_ = {}, System::Action* songStillDownloadingEvent_ = {}, System::Action* startTimeChangedEvent_ = {}, System::Action_1<GlobalNamespace::MultiplayerGameState>* multiplayerGameStateChangedEvent_ = {}, System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::MultiplayerResultsData*>* levelFinishedEvent_ = {}, System::Action_1<GlobalNamespace::DisconnectedReason>* levelDidGetDisconnectedEvent_ = {}, System::Action* lobbyDisconnectedEvent_ = {}, System::Action* beforeSceneSwitchCallback_ = {}, bool levelStartInitiated_ = {}, GlobalNamespace::BeatmapIdentifierNetSerializable* startedBeatmapId_ = {}, bool countdownStarted_ = {}, float countdownEndTime_ = {}, GlobalNamespace::MultiplayerLobbyState state_ = {}, GlobalNamespace::MultiplayerGameType gameType_ = {}, bool isDisconnected_ = {}, GlobalNamespace::DisconnectedReason disconnectedReason_ = {}, float startTime_ = {}, bool levelStartedOnTime_ = {}) noexcept : lobbyPlayersDataModel{lobbyPlayersDataModel_}, playerDataModel{playerDataModel_}, menuRpcManager{menuRpcManager_}, multiplayerSessionManager{multiplayerSessionManager_}, multiplayerLevelLoader{multiplayerLevelLoader_}, menuTransitionsHelper{menuTransitionsHelper_}, lobbyGameState{lobbyGameState_}, gameStartedEvent{gameStartedEvent_}, gameStartCancelledEvent{gameStartCancelledEvent_}, countdownStartedEvent{countdownStartedEvent_}, countdownCancelledEvent{countdownCancelledEvent_}, songStillDownloadingEvent{songStillDownloadingEvent_}, startTimeChangedEvent{startTimeChangedEvent_}, multiplayerGameStateChangedEvent{multiplayerGameStateChangedEvent_}, levelFinishedEvent{levelFinishedEvent_}, levelDidGetDisconnectedEvent{levelDidGetDisconnectedEvent_}, lobbyDisconnectedEvent{lobbyDisconnectedEvent_}, beforeSceneSwitchCallback{beforeSceneSwitchCallback_}, levelStartInitiated{levelStartInitiated_}, startedBeatmapId{startedBeatmapId_}, countdownStarted{countdownStarted_}, countdownEndTime{countdownEndTime_}, state{state_}, gameType{gameType_}, isDisconnected{isDisconnected_}, disconnectedReason{disconnectedReason_}, startTime{startTime_}, levelStartedOnTime{levelStartedOnTime_} {}
    // Creating interface conversion operator: operator GlobalNamespace::ILobbyHostGameStateController
    operator GlobalNamespace::ILobbyHostGameStateController() noexcept {
      return *reinterpret_cast<GlobalNamespace::ILobbyHostGameStateController*>(this);
    }
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void add_gameStartedEvent(System.Action value)
    // Offset: 0x1203174
    void add_gameStartedEvent(System::Action* value);
    // public System.Void remove_gameStartedEvent(System.Action value)
    // Offset: 0x1203218
    void remove_gameStartedEvent(System::Action* value);
    // public System.Void add_gameStartCancelledEvent(System.Action value)
    // Offset: 0x12032BC
    void add_gameStartCancelledEvent(System::Action* value);
    // public System.Void remove_gameStartCancelledEvent(System.Action value)
    // Offset: 0x1203360
    void remove_gameStartCancelledEvent(System::Action* value);
    // public System.Void add_countdownStartedEvent(System.Action value)
    // Offset: 0x1203404
    void add_countdownStartedEvent(System::Action* value);
    // public System.Void remove_countdownStartedEvent(System.Action value)
    // Offset: 0x12034A8
    void remove_countdownStartedEvent(System::Action* value);
    // public System.Void add_countdownCancelledEvent(System.Action value)
    // Offset: 0x120354C
    void add_countdownCancelledEvent(System::Action* value);
    // public System.Void remove_countdownCancelledEvent(System.Action value)
    // Offset: 0x12035F0
    void remove_countdownCancelledEvent(System::Action* value);
    // public System.Void add_songStillDownloadingEvent(System.Action value)
    // Offset: 0x1203694
    void add_songStillDownloadingEvent(System::Action* value);
    // public System.Void remove_songStillDownloadingEvent(System.Action value)
    // Offset: 0x1203738
    void remove_songStillDownloadingEvent(System::Action* value);
    // public System.Void add_startTimeChangedEvent(System.Action value)
    // Offset: 0x12037DC
    void add_startTimeChangedEvent(System::Action* value);
    // public System.Void remove_startTimeChangedEvent(System.Action value)
    // Offset: 0x1203880
    void remove_startTimeChangedEvent(System::Action* value);
    // public System.Void add_multiplayerGameStateChangedEvent(System.Action`1<MultiplayerGameState> value)
    // Offset: 0x1203924
    void add_multiplayerGameStateChangedEvent(System::Action_1<GlobalNamespace::MultiplayerGameState>* value);
    // public System.Void remove_multiplayerGameStateChangedEvent(System.Action`1<MultiplayerGameState> value)
    // Offset: 0x12039C8
    void remove_multiplayerGameStateChangedEvent(System::Action_1<GlobalNamespace::MultiplayerGameState>* value);
    // public System.Void add_levelFinishedEvent(System.Action`2<MultiplayerLevelScenesTransitionSetupDataSO,MultiplayerResultsData> value)
    // Offset: 0x1203A6C
    void add_levelFinishedEvent(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::MultiplayerResultsData*>* value);
    // public System.Void remove_levelFinishedEvent(System.Action`2<MultiplayerLevelScenesTransitionSetupDataSO,MultiplayerResultsData> value)
    // Offset: 0x1203B10
    void remove_levelFinishedEvent(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::MultiplayerResultsData*>* value);
    // public System.Void add_levelDidGetDisconnectedEvent(System.Action`1<DisconnectedReason> value)
    // Offset: 0x1203BB4
    void add_levelDidGetDisconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason>* value);
    // public System.Void remove_levelDidGetDisconnectedEvent(System.Action`1<DisconnectedReason> value)
    // Offset: 0x1203C58
    void remove_levelDidGetDisconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason>* value);
    // public System.Void add_lobbyDisconnectedEvent(System.Action value)
    // Offset: 0x1203CFC
    void add_lobbyDisconnectedEvent(System::Action* value);
    // public System.Void remove_lobbyDisconnectedEvent(System.Action value)
    // Offset: 0x1203DA0
    void remove_lobbyDisconnectedEvent(System::Action* value);
    // public System.Void add_beforeSceneSwitchCallback(System.Action value)
    // Offset: 0x1203E44
    void add_beforeSceneSwitchCallback(System::Action* value);
    // public System.Void remove_beforeSceneSwitchCallback(System.Action value)
    // Offset: 0x1203EE8
    void remove_beforeSceneSwitchCallback(System::Action* value);
    // public System.Single get_startTime()
    // Offset: 0x1203F8C
    float get_startTime();
    // public System.Void set_startTime(System.Single value)
    // Offset: 0x1203F94
    void set_startTime(float value);
    // public System.Boolean get_levelStartInitiated()
    // Offset: 0x12040F8
    bool get_levelStartInitiated();
    // private System.Void set_levelStartInitiated(System.Boolean value)
    // Offset: 0x1204100
    void set_levelStartInitiated(bool value);
    // public BeatmapIdentifierNetSerializable get_startedBeatmapId()
    // Offset: 0x120410C
    GlobalNamespace::BeatmapIdentifierNetSerializable* get_startedBeatmapId();
    // private System.Void set_startedBeatmapId(BeatmapIdentifierNetSerializable value)
    // Offset: 0x1204114
    void set_startedBeatmapId(GlobalNamespace::BeatmapIdentifierNetSerializable* value);
    // public System.Boolean get_countdownStarted()
    // Offset: 0x120411C
    bool get_countdownStarted();
    // private System.Void set_countdownStarted(System.Boolean value)
    // Offset: 0x1204124
    void set_countdownStarted(bool value);
    // public System.Single get_countdownEndTime()
    // Offset: 0x1204130
    float get_countdownEndTime();
    // private System.Void set_countdownEndTime(System.Single value)
    // Offset: 0x1204138
    void set_countdownEndTime(float value);
    // public MultiplayerLobbyState get_state()
    // Offset: 0x1204140
    GlobalNamespace::MultiplayerLobbyState get_state();
    // private System.Void set_state(MultiplayerLobbyState value)
    // Offset: 0x1204148
    void set_state(GlobalNamespace::MultiplayerLobbyState value);
    // public MultiplayerGameType get_gameType()
    // Offset: 0x1204150
    GlobalNamespace::MultiplayerGameType get_gameType();
    // private System.Void set_gameType(MultiplayerGameType value)
    // Offset: 0x1204158
    void set_gameType(GlobalNamespace::MultiplayerGameType value);
    // public System.Boolean get_isDisconnected()
    // Offset: 0x1204160
    bool get_isDisconnected();
    // private System.Void set_isDisconnected(System.Boolean value)
    // Offset: 0x1204168
    void set_isDisconnected(bool value);
    // public DisconnectedReason get_disconnectedReason()
    // Offset: 0x1204174
    GlobalNamespace::DisconnectedReason get_disconnectedReason();
    // private System.Void set_disconnectedReason(DisconnectedReason value)
    // Offset: 0x120417C
    void set_disconnectedReason(GlobalNamespace::DisconnectedReason value);
    // public System.Void Activate()
    // Offset: 0x1204184
    void Activate();
    // public System.Void Deactivate()
    // Offset: 0x1204634
    void Deactivate();
    // public System.Void Dispose()
    // Offset: 0x1204CE0
    void Dispose();
    // public System.Void StartListeningToGameStart()
    // Offset: 0x1204CE4
    void StartListeningToGameStart();
    // public System.Void GetCurrentLevelIfGameStarted()
    // Offset: 0x120542C
    void GetCurrentLevelIfGameStarted();
    // public System.Void SetMultiplayerGameType(MultiplayerGameType multiplayerGameType)
    // Offset: 0x12054E0
    void SetMultiplayerGameType(GlobalNamespace::MultiplayerGameType multiplayerGameType);
    // public System.Void ClearDisconnectedState()
    // Offset: 0x1204CD0
    void ClearDisconnectedState();
    // public System.Void StartGame()
    // Offset: 0x12054E8
    void StartGame();
    // public System.Void CancelGame()
    // Offset: 0x1205AB0
    void CancelGame();
    // private System.Void HandleMultiplayerSessionManagerDisconnected(DisconnectedReason disconnectedReason)
    // Offset: 0x1205CE4
    void HandleMultiplayerSessionManagerDisconnected(GlobalNamespace::DisconnectedReason disconnectedReason);
    // private System.Void HandleGameStateDidChange(MultiplayerGameState newGameState)
    // Offset: 0x1205D08
    void HandleGameStateDidChange(GlobalNamespace::MultiplayerGameState newGameState);
    // private System.Void HandleMenuRpcManagerGetMultiplayerGameState(System.String userId)
    // Offset: 0x1205E04
    void HandleMenuRpcManagerGetMultiplayerGameState(::Il2CppString* userId);
    // private System.Void HandleMenuRpcManagerSetMultiplayerGameState(System.String userId, MultiplayerGameState newGameState)
    // Offset: 0x1205F4C
    void HandleMenuRpcManagerSetMultiplayerGameState(::Il2CppString* userId, GlobalNamespace::MultiplayerGameState newGameState);
    // private System.Void StopListeningToGameStart()
    // Offset: 0x1206064
    void StopListeningToGameStart();
    // private System.Void HandleMenuRpcManagerGetStartedLevel(System.String userId)
    // Offset: 0x12062A8
    void HandleMenuRpcManagerGetStartedLevel(::Il2CppString* userId);
    // private System.Void HandleMenuRpcManagerStartedLevel(System.String userId, BeatmapIdentifierNetSerializable beatmapId, GameplayModifiers gameplayModifiers, System.Single startTime)
    // Offset: 0x120656C
    void HandleMenuRpcManagerStartedLevel(::Il2CppString* userId, GlobalNamespace::BeatmapIdentifierNetSerializable* beatmapId, GlobalNamespace::GameplayModifiers* gameplayModifiers, float startTime);
    // private System.Void HandleMenuRpcManagerCancelledLevelStart(System.String userId)
    // Offset: 0x120675C
    void HandleMenuRpcManagerCancelledLevelStart(::Il2CppString* userId);
    // private System.Void HandleMenuRpcManagerSetCountdownEndTime(System.String userId, System.Single countdownTime)
    // Offset: 0x12067C0
    void HandleMenuRpcManagerSetCountdownEndTime(::Il2CppString* userId, float countdownTime);
    // private System.Void HandleMenuRpcManagerCancelCountdown(System.String userId)
    // Offset: 0x12069B0
    void HandleMenuRpcManagerCancelCountdown(::Il2CppString* userId);
    // private System.Void HandleMenuRpcManagerSetStartGameTime(System.String userId, System.Single startTime)
    // Offset: 0x1206B90
    void HandleMenuRpcManagerSetStartGameTime(::Il2CppString* userId, float startTime);
    // private System.Void HandleStartTimeChanged()
    // Offset: 0x1206BCC
    void HandleStartTimeChanged();
    // private System.Void HandleMultiplayerLevelLoaderStillDownloadingSong()
    // Offset: 0x1206BEC
    void HandleMultiplayerLevelLoaderStillDownloadingSong();
    // private System.Void HandleMultiplayerLevelLoaderCountdownFinished(IPreviewBeatmapLevel previewBeatmapLevel, BeatmapDifficulty beatmapDifficulty, BeatmapCharacteristicSO beatmapCharacteristic, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers)
    // Offset: 0x1206C00
    void HandleMultiplayerLevelLoaderCountdownFinished(GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers);
    // private System.Void StartMultiplayerLevel(IPreviewBeatmapLevel previewBeatmapLevel, BeatmapDifficulty beatmapDifficulty, BeatmapCharacteristicSO beatmapCharacteristic, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Action beforeSceneSwitchCallback)
    // Offset: 0x1206F44
    void StartMultiplayerLevel(GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, System::Action* beforeSceneSwitchCallback);
    // private System.Void HandleMultiplayerLevelDidFinish(MultiplayerLevelScenesTransitionSetupDataSO multiplayerLevelScenesTransitionSetupData, MultiplayerResultsData multiplayerResultsData)
    // Offset: 0x12070DC
    void HandleMultiplayerLevelDidFinish(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData, GlobalNamespace::MultiplayerResultsData* multiplayerResultsData);
    // private System.Void HandleMultiplayerLevelDidDisconnect(DisconnectedReason disconnectedReason)
    // Offset: 0x120717C
    void HandleMultiplayerLevelDidDisconnect(GlobalNamespace::DisconnectedReason disconnectedReason);
    // private System.Void StopLoading()
    // Offset: 0x1205BFC
    void StopLoading();
    // public System.Void .ctor()
    // Offset: 0x1207214
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LobbyGameStateController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LobbyGameStateController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LobbyGameStateController*, creationType>()));
    }
  }; // LobbyGameStateController
  #pragma pack(pop)
  static check_size<sizeof(LobbyGameStateController), 204 + sizeof(bool)> __GlobalNamespace_LobbyGameStateControllerSizeCheck;
  static_assert(sizeof(LobbyGameStateController) == 0xCD);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LobbyGameStateController*, "", "LobbyGameStateController");
