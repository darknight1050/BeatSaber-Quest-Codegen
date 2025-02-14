// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IGameplayRpcManager
#include "GlobalNamespace/IGameplayRpcManager.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`4<T1, T2, T3, T4>
  template<typename T1, typename T2, typename T3, typename T4>
  class Action_4;
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: RpcHandler`1<TType>
  template<typename TType>
  class RpcHandler_1;
  // Forward declaring type: PlayerSpecificSettingsAtStartNetSerializable
  class PlayerSpecificSettingsAtStartNetSerializable;
  // Forward declaring type: PlayerSpecificSettingsNetSerializable
  class PlayerSpecificSettingsNetSerializable;
  // Forward declaring type: NoteCutInfoNetSerializable
  class NoteCutInfoNetSerializable;
  // Forward declaring type: NoteMissInfoNetSerializable
  class NoteMissInfoNetSerializable;
  // Forward declaring type: MultiplayerLevelCompletionResults
  class MultiplayerLevelCompletionResults;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: GameplayRpcManager
  class GameplayRpcManager : public ::Il2CppObject/*, public GlobalNamespace::IGameplayRpcManager*/ {
    public:
    // Nested type: GlobalNamespace::GameplayRpcManager::RpcType
    struct RpcType;
    // Nested type: GlobalNamespace::GameplayRpcManager::SetGameplaySceneSyncFinishedRpc
    class SetGameplaySceneSyncFinishedRpc;
    // Nested type: GlobalNamespace::GameplayRpcManager::SetGameplaySceneReadyRpc
    class SetGameplaySceneReadyRpc;
    // Nested type: GlobalNamespace::GameplayRpcManager::GetGameplaySceneReadyRpc
    class GetGameplaySceneReadyRpc;
    // Nested type: GlobalNamespace::GameplayRpcManager::SetPlayerDidConnectLateRpc
    class SetPlayerDidConnectLateRpc;
    // Nested type: GlobalNamespace::GameplayRpcManager::SetGameplaySongReadyRpc
    class SetGameplaySongReadyRpc;
    // Nested type: GlobalNamespace::GameplayRpcManager::GetGameplaySongReadyRpc
    class GetGameplaySongReadyRpc;
    // Nested type: GlobalNamespace::GameplayRpcManager::SetSongStartTimeRpc
    class SetSongStartTimeRpc;
    // Nested type: GlobalNamespace::GameplayRpcManager::NoteCutRpc
    class NoteCutRpc;
    // Nested type: GlobalNamespace::GameplayRpcManager::NoteMissedRpc
    class NoteMissedRpc;
    // Nested type: GlobalNamespace::GameplayRpcManager::LevelFinishedRpc
    class LevelFinishedRpc;
    // Nested type: GlobalNamespace::GameplayRpcManager::ReturnToMenuRpc
    class ReturnToMenuRpc;
    // Nested type: GlobalNamespace::GameplayRpcManager::EndLevelEarlyRpc
    class EndLevelEarlyRpc;
    // Size: 0x1
    #pragma pack(push, 1)
    // Autogenerated type: GameplayRpcManager/RpcType
    struct RpcType/*, public System::Enum*/ {
      public:
      // public System.Byte value__
      // Size: 0x1
      // Offset: 0x0
      uint8_t value;
      // Field size check
      static_assert(sizeof(uint8_t) == 0x1);
      // Creating value type constructor for type: RpcType
      constexpr RpcType(uint8_t value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator uint8_t
      constexpr operator uint8_t() const noexcept {
        return value;
      }
      // static field const value: static public GameplayRpcManager/RpcType SetGameplaySceneSyncFinish
      static constexpr const uint8_t SetGameplaySceneSyncFinish = 0u;
      // Get static field: static public GameplayRpcManager/RpcType SetGameplaySceneSyncFinish
      static GlobalNamespace::GameplayRpcManager::RpcType _get_SetGameplaySceneSyncFinish();
      // Set static field: static public GameplayRpcManager/RpcType SetGameplaySceneSyncFinish
      static void _set_SetGameplaySceneSyncFinish(GlobalNamespace::GameplayRpcManager::RpcType value);
      // static field const value: static public GameplayRpcManager/RpcType SetGameplaySceneReady
      static constexpr const uint8_t SetGameplaySceneReady = 1u;
      // Get static field: static public GameplayRpcManager/RpcType SetGameplaySceneReady
      static GlobalNamespace::GameplayRpcManager::RpcType _get_SetGameplaySceneReady();
      // Set static field: static public GameplayRpcManager/RpcType SetGameplaySceneReady
      static void _set_SetGameplaySceneReady(GlobalNamespace::GameplayRpcManager::RpcType value);
      // static field const value: static public GameplayRpcManager/RpcType GetGameplaySceneReady
      static constexpr const uint8_t GetGameplaySceneReady = 2u;
      // Get static field: static public GameplayRpcManager/RpcType GetGameplaySceneReady
      static GlobalNamespace::GameplayRpcManager::RpcType _get_GetGameplaySceneReady();
      // Set static field: static public GameplayRpcManager/RpcType GetGameplaySceneReady
      static void _set_GetGameplaySceneReady(GlobalNamespace::GameplayRpcManager::RpcType value);
      // static field const value: static public GameplayRpcManager/RpcType SetActivePlayerFailedToConnect
      static constexpr const uint8_t SetActivePlayerFailedToConnect = 3u;
      // Get static field: static public GameplayRpcManager/RpcType SetActivePlayerFailedToConnect
      static GlobalNamespace::GameplayRpcManager::RpcType _get_SetActivePlayerFailedToConnect();
      // Set static field: static public GameplayRpcManager/RpcType SetActivePlayerFailedToConnect
      static void _set_SetActivePlayerFailedToConnect(GlobalNamespace::GameplayRpcManager::RpcType value);
      // static field const value: static public GameplayRpcManager/RpcType SetGameplaySongReady
      static constexpr const uint8_t SetGameplaySongReady = 4u;
      // Get static field: static public GameplayRpcManager/RpcType SetGameplaySongReady
      static GlobalNamespace::GameplayRpcManager::RpcType _get_SetGameplaySongReady();
      // Set static field: static public GameplayRpcManager/RpcType SetGameplaySongReady
      static void _set_SetGameplaySongReady(GlobalNamespace::GameplayRpcManager::RpcType value);
      // static field const value: static public GameplayRpcManager/RpcType GetGameplaySongReady
      static constexpr const uint8_t GetGameplaySongReady = 5u;
      // Get static field: static public GameplayRpcManager/RpcType GetGameplaySongReady
      static GlobalNamespace::GameplayRpcManager::RpcType _get_GetGameplaySongReady();
      // Set static field: static public GameplayRpcManager/RpcType GetGameplaySongReady
      static void _set_GetGameplaySongReady(GlobalNamespace::GameplayRpcManager::RpcType value);
      // static field const value: static public GameplayRpcManager/RpcType SetSongStartTime
      static constexpr const uint8_t SetSongStartTime = 6u;
      // Get static field: static public GameplayRpcManager/RpcType SetSongStartTime
      static GlobalNamespace::GameplayRpcManager::RpcType _get_SetSongStartTime();
      // Set static field: static public GameplayRpcManager/RpcType SetSongStartTime
      static void _set_SetSongStartTime(GlobalNamespace::GameplayRpcManager::RpcType value);
      // static field const value: static public GameplayRpcManager/RpcType NoteCut
      static constexpr const uint8_t NoteCut = 7u;
      // Get static field: static public GameplayRpcManager/RpcType NoteCut
      static GlobalNamespace::GameplayRpcManager::RpcType _get_NoteCut();
      // Set static field: static public GameplayRpcManager/RpcType NoteCut
      static void _set_NoteCut(GlobalNamespace::GameplayRpcManager::RpcType value);
      // static field const value: static public GameplayRpcManager/RpcType NoteMissed
      static constexpr const uint8_t NoteMissed = 8u;
      // Get static field: static public GameplayRpcManager/RpcType NoteMissed
      static GlobalNamespace::GameplayRpcManager::RpcType _get_NoteMissed();
      // Set static field: static public GameplayRpcManager/RpcType NoteMissed
      static void _set_NoteMissed(GlobalNamespace::GameplayRpcManager::RpcType value);
      // static field const value: static public GameplayRpcManager/RpcType LevelFinished
      static constexpr const uint8_t LevelFinished = 9u;
      // Get static field: static public GameplayRpcManager/RpcType LevelFinished
      static GlobalNamespace::GameplayRpcManager::RpcType _get_LevelFinished();
      // Set static field: static public GameplayRpcManager/RpcType LevelFinished
      static void _set_LevelFinished(GlobalNamespace::GameplayRpcManager::RpcType value);
      // static field const value: static public GameplayRpcManager/RpcType ReturnToMenu
      static constexpr const uint8_t ReturnToMenu = 10u;
      // Get static field: static public GameplayRpcManager/RpcType ReturnToMenu
      static GlobalNamespace::GameplayRpcManager::RpcType _get_ReturnToMenu();
      // Set static field: static public GameplayRpcManager/RpcType ReturnToMenu
      static void _set_ReturnToMenu(GlobalNamespace::GameplayRpcManager::RpcType value);
      // static field const value: static public GameplayRpcManager/RpcType EndLevelEarly
      static constexpr const uint8_t EndLevelEarly = 11u;
      // Get static field: static public GameplayRpcManager/RpcType EndLevelEarly
      static GlobalNamespace::GameplayRpcManager::RpcType _get_EndLevelEarly();
      // Set static field: static public GameplayRpcManager/RpcType EndLevelEarly
      static void _set_EndLevelEarly(GlobalNamespace::GameplayRpcManager::RpcType value);
    }; // GameplayRpcManager/RpcType
    #pragma pack(pop)
    static check_size<sizeof(GameplayRpcManager::RpcType), 0 + sizeof(uint8_t)> __GlobalNamespace_GameplayRpcManager_RpcTypeSizeCheck;
    static_assert(sizeof(GameplayRpcManager::RpcType) == 0x1);
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // private readonly RpcHandler`1<GameplayRpcManager/RpcType> _rpcHandler
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::RpcHandler_1<GlobalNamespace::GameplayRpcManager::RpcType>* rpcHandler;
    // Field size check
    static_assert(sizeof(GlobalNamespace::RpcHandler_1<GlobalNamespace::GameplayRpcManager::RpcType>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDEFB5C
    // private System.Action`3<System.String,PlayerSpecificSettingsAtStartNetSerializable,System.String> setGameplaySceneSyncFinishedEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action_3<::Il2CppString*, GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::Il2CppString*>* setGameplaySceneSyncFinishedEvent;
    // Field size check
    static_assert(sizeof(System::Action_3<::Il2CppString*, GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::Il2CppString*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDEFB6C
    // private System.Action`2<System.String,PlayerSpecificSettingsNetSerializable> setGameplaySceneReadyEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action_2<::Il2CppString*, GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* setGameplaySceneReadyEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<::Il2CppString*, GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDEFB7C
    // private System.Action`1<System.String> getGameplaySceneReadyEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action_1<::Il2CppString*>* getGameplaySceneReadyEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<::Il2CppString*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDEFB8C
    // private System.Action`4<System.String,System.String,PlayerSpecificSettingsAtStartNetSerializable,System.String> setPlayerDidConnectLateEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action_4<::Il2CppString*, ::Il2CppString*, GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::Il2CppString*>* setPlayerDidConnectLateEvent;
    // Field size check
    static_assert(sizeof(System::Action_4<::Il2CppString*, ::Il2CppString*, GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::Il2CppString*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDEFB9C
    // private System.Action`1<System.String> setGameplaySongReadyEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action_1<::Il2CppString*>* setGameplaySongReadyEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<::Il2CppString*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDEFBAC
    // private System.Action`1<System.String> getGameplaySongReadyEvent
    // Size: 0x8
    // Offset: 0x48
    System::Action_1<::Il2CppString*>* getGameplaySongReadyEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<::Il2CppString*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDEFBBC
    // private System.Action`2<System.String,System.Single> setSongStartTimeEvent
    // Size: 0x8
    // Offset: 0x50
    System::Action_2<::Il2CppString*, float>* setSongStartTimeEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<::Il2CppString*, float>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDEFBCC
    // private System.Action`4<System.String,System.Single,System.Single,NoteCutInfoNetSerializable> noteWasCutEvent
    // Size: 0x8
    // Offset: 0x58
    System::Action_4<::Il2CppString*, float, float, GlobalNamespace::NoteCutInfoNetSerializable*>* noteWasCutEvent;
    // Field size check
    static_assert(sizeof(System::Action_4<::Il2CppString*, float, float, GlobalNamespace::NoteCutInfoNetSerializable*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDEFBDC
    // private System.Action`4<System.String,System.Single,System.Single,NoteMissInfoNetSerializable> noteWasMissedEvent
    // Size: 0x8
    // Offset: 0x60
    System::Action_4<::Il2CppString*, float, float, GlobalNamespace::NoteMissInfoNetSerializable*>* noteWasMissedEvent;
    // Field size check
    static_assert(sizeof(System::Action_4<::Il2CppString*, float, float, GlobalNamespace::NoteMissInfoNetSerializable*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDEFBEC
    // private System.Action`2<System.String,MultiplayerLevelCompletionResults> levelFinishedEvent
    // Size: 0x8
    // Offset: 0x68
    System::Action_2<::Il2CppString*, GlobalNamespace::MultiplayerLevelCompletionResults*>* levelFinishedEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<::Il2CppString*, GlobalNamespace::MultiplayerLevelCompletionResults*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDEFBFC
    // private System.Action`1<System.String> returnToMenuEvent
    // Size: 0x8
    // Offset: 0x70
    System::Action_1<::Il2CppString*>* returnToMenuEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<::Il2CppString*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDEFC0C
    // private System.Action`1<System.String> levelEndedEarlyEvent
    // Size: 0x8
    // Offset: 0x78
    System::Action_1<::Il2CppString*>* levelEndedEarlyEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: GameplayRpcManager
    GameplayRpcManager(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}, GlobalNamespace::RpcHandler_1<GlobalNamespace::GameplayRpcManager::RpcType>* rpcHandler_ = {}, System::Action_3<::Il2CppString*, GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::Il2CppString*>* setGameplaySceneSyncFinishedEvent_ = {}, System::Action_2<::Il2CppString*, GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* setGameplaySceneReadyEvent_ = {}, System::Action_1<::Il2CppString*>* getGameplaySceneReadyEvent_ = {}, System::Action_4<::Il2CppString*, ::Il2CppString*, GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::Il2CppString*>* setPlayerDidConnectLateEvent_ = {}, System::Action_1<::Il2CppString*>* setGameplaySongReadyEvent_ = {}, System::Action_1<::Il2CppString*>* getGameplaySongReadyEvent_ = {}, System::Action_2<::Il2CppString*, float>* setSongStartTimeEvent_ = {}, System::Action_4<::Il2CppString*, float, float, GlobalNamespace::NoteCutInfoNetSerializable*>* noteWasCutEvent_ = {}, System::Action_4<::Il2CppString*, float, float, GlobalNamespace::NoteMissInfoNetSerializable*>* noteWasMissedEvent_ = {}, System::Action_2<::Il2CppString*, GlobalNamespace::MultiplayerLevelCompletionResults*>* levelFinishedEvent_ = {}, System::Action_1<::Il2CppString*>* returnToMenuEvent_ = {}, System::Action_1<::Il2CppString*>* levelEndedEarlyEvent_ = {}) noexcept : multiplayerSessionManager{multiplayerSessionManager_}, rpcHandler{rpcHandler_}, setGameplaySceneSyncFinishedEvent{setGameplaySceneSyncFinishedEvent_}, setGameplaySceneReadyEvent{setGameplaySceneReadyEvent_}, getGameplaySceneReadyEvent{getGameplaySceneReadyEvent_}, setPlayerDidConnectLateEvent{setPlayerDidConnectLateEvent_}, setGameplaySongReadyEvent{setGameplaySongReadyEvent_}, getGameplaySongReadyEvent{getGameplaySongReadyEvent_}, setSongStartTimeEvent{setSongStartTimeEvent_}, noteWasCutEvent{noteWasCutEvent_}, noteWasMissedEvent{noteWasMissedEvent_}, levelFinishedEvent{levelFinishedEvent_}, returnToMenuEvent{returnToMenuEvent_}, levelEndedEarlyEvent{levelEndedEarlyEvent_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IGameplayRpcManager
    operator GlobalNamespace::IGameplayRpcManager() noexcept {
      return *reinterpret_cast<GlobalNamespace::IGameplayRpcManager*>(this);
    }
    // static field const value: static private System.String kGameplayState
    static constexpr const char* kGameplayState = "in_gameplay";
    // Get static field: static private System.String kGameplayState
    static ::Il2CppString* _get_kGameplayState();
    // Set static field: static private System.String kGameplayState
    static void _set_kGameplayState(::Il2CppString* value);
    // public System.Boolean get_enabled()
    // Offset: 0x1311148
    bool get_enabled();
    // public System.Void set_enabled(System.Boolean value)
    // Offset: 0x131120C
    void set_enabled(bool value);
    // public System.Void .ctor(IMultiplayerSessionManager multiplayerSessionManager)
    // Offset: 0x13112E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplayRpcManager* New_ctor(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameplayRpcManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplayRpcManager*, creationType>(multiplayerSessionManager)));
    }
    // public System.Void Dispose()
    // Offset: 0x1311760
    void Dispose();
    // public System.Void add_setGameplaySceneSyncFinishedEvent(System.Action`3<System.String,PlayerSpecificSettingsAtStartNetSerializable,System.String> value)
    // Offset: 0x13117C4
    void add_setGameplaySceneSyncFinishedEvent(System::Action_3<::Il2CppString*, GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::Il2CppString*>* value);
    // public System.Void remove_setGameplaySceneSyncFinishedEvent(System.Action`3<System.String,PlayerSpecificSettingsAtStartNetSerializable,System.String> value)
    // Offset: 0x1311868
    void remove_setGameplaySceneSyncFinishedEvent(System::Action_3<::Il2CppString*, GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::Il2CppString*>* value);
    // public System.Void SetGameplaySceneSyncFinished(PlayerSpecificSettingsAtStartNetSerializable playersAtGameStartNetSerializable, System.String sessionGameId)
    // Offset: 0x131190C
    void SetGameplaySceneSyncFinished(GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable, ::Il2CppString* sessionGameId);
    // private System.Void InvokeSetGameplaySceneSyncFinishCallback(System.String userId, PlayerSpecificSettingsAtStartNetSerializable playersAtGameStart, System.String sessionGameId)
    // Offset: 0x131197C
    void InvokeSetGameplaySceneSyncFinishCallback(::Il2CppString* userId, GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStart, ::Il2CppString* sessionGameId);
    // public System.Void add_setGameplaySceneReadyEvent(System.Action`2<System.String,PlayerSpecificSettingsNetSerializable> value)
    // Offset: 0x1311A0C
    void add_setGameplaySceneReadyEvent(System::Action_2<::Il2CppString*, GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* value);
    // public System.Void remove_setGameplaySceneReadyEvent(System.Action`2<System.String,PlayerSpecificSettingsNetSerializable> value)
    // Offset: 0x1311AB0
    void remove_setGameplaySceneReadyEvent(System::Action_2<::Il2CppString*, GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* value);
    // public System.Void SetGameplaySceneReady(PlayerSpecificSettingsNetSerializable playerSpecificSettings)
    // Offset: 0x1311B54
    void SetGameplaySceneReady(GlobalNamespace::PlayerSpecificSettingsNetSerializable* playerSpecificSettings);
    // private System.Void InvokeSetGameplaySceneReadyCallback(System.String userId, PlayerSpecificSettingsNetSerializable playerSpecificSettingsNetSerializable)
    // Offset: 0x1311BBC
    void InvokeSetGameplaySceneReadyCallback(::Il2CppString* userId, GlobalNamespace::PlayerSpecificSettingsNetSerializable* playerSpecificSettingsNetSerializable);
    // public System.Void add_getGameplaySceneReadyEvent(System.Action`1<System.String> value)
    // Offset: 0x1311C38
    void add_getGameplaySceneReadyEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_getGameplaySceneReadyEvent(System.Action`1<System.String> value)
    // Offset: 0x1311CDC
    void remove_getGameplaySceneReadyEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void GetGameplaySceneReady()
    // Offset: 0x1311D80
    void GetGameplaySceneReady();
    // private System.Void InvokeGetGameplaySceneReadyCallback(System.String userId)
    // Offset: 0x1311DD8
    void InvokeGetGameplaySceneReadyCallback(::Il2CppString* userId);
    // public System.Void add_setPlayerDidConnectLateEvent(System.Action`4<System.String,System.String,PlayerSpecificSettingsAtStartNetSerializable,System.String> value)
    // Offset: 0x1311E4C
    void add_setPlayerDidConnectLateEvent(System::Action_4<::Il2CppString*, ::Il2CppString*, GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::Il2CppString*>* value);
    // public System.Void remove_setPlayerDidConnectLateEvent(System.Action`4<System.String,System.String,PlayerSpecificSettingsAtStartNetSerializable,System.String> value)
    // Offset: 0x1311EF0
    void remove_setPlayerDidConnectLateEvent(System::Action_4<::Il2CppString*, ::Il2CppString*, GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::Il2CppString*>* value);
    // public System.Void SetPlayerDidConnectLate(System.String usedId, PlayerSpecificSettingsAtStartNetSerializable playersAtGameStartNetSerializable, System.String sessionGameId)
    // Offset: 0x1311F94
    void SetPlayerDidConnectLate(::Il2CppString* usedId, GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable, ::Il2CppString* sessionGameId);
    // private System.Void InvokeSetPlayerDidConnectLate(System.String userId, System.String failedUserId, PlayerSpecificSettingsAtStartNetSerializable playersAtGameStartNetSerializable, System.String sessionGameId)
    // Offset: 0x1312014
    void InvokeSetPlayerDidConnectLate(::Il2CppString* userId, ::Il2CppString* failedUserId, GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable, ::Il2CppString* sessionGameId);
    // public System.Void add_setGameplaySongReadyEvent(System.Action`1<System.String> value)
    // Offset: 0x13120AC
    void add_setGameplaySongReadyEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_setGameplaySongReadyEvent(System.Action`1<System.String> value)
    // Offset: 0x1312150
    void remove_setGameplaySongReadyEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void SetGameplaySongReady()
    // Offset: 0x13121F4
    void SetGameplaySongReady();
    // private System.Void InvokeSetGameplaySongReadyCallback(System.String userId)
    // Offset: 0x131224C
    void InvokeSetGameplaySongReadyCallback(::Il2CppString* userId);
    // public System.Void add_getGameplaySongReadyEvent(System.Action`1<System.String> value)
    // Offset: 0x13122C0
    void add_getGameplaySongReadyEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_getGameplaySongReadyEvent(System.Action`1<System.String> value)
    // Offset: 0x1312364
    void remove_getGameplaySongReadyEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void GetGameplaySongReady()
    // Offset: 0x1312408
    void GetGameplaySongReady();
    // private System.Void InvokeGetGameplayLevelReadyCallback(System.String userId)
    // Offset: 0x1312460
    void InvokeGetGameplayLevelReadyCallback(::Il2CppString* userId);
    // public System.Void add_setSongStartTimeEvent(System.Action`2<System.String,System.Single> value)
    // Offset: 0x13124D4
    void add_setSongStartTimeEvent(System::Action_2<::Il2CppString*, float>* value);
    // public System.Void remove_setSongStartTimeEvent(System.Action`2<System.String,System.Single> value)
    // Offset: 0x1312578
    void remove_setSongStartTimeEvent(System::Action_2<::Il2CppString*, float>* value);
    // public System.Void SetSongStartTime(System.Single startTime)
    // Offset: 0x131261C
    void SetSongStartTime(float startTime);
    // private System.Void InvokeSetSongStartTimeCallback(System.String userId, System.Single startTime)
    // Offset: 0x1312684
    void InvokeSetSongStartTimeCallback(::Il2CppString* userId, float startTime);
    // public System.Void add_noteWasCutEvent(System.Action`4<System.String,System.Single,System.Single,NoteCutInfoNetSerializable> value)
    // Offset: 0x131270C
    void add_noteWasCutEvent(System::Action_4<::Il2CppString*, float, float, GlobalNamespace::NoteCutInfoNetSerializable*>* value);
    // public System.Void remove_noteWasCutEvent(System.Action`4<System.String,System.Single,System.Single,NoteCutInfoNetSerializable> value)
    // Offset: 0x13127B0
    void remove_noteWasCutEvent(System::Action_4<::Il2CppString*, float, float, GlobalNamespace::NoteCutInfoNetSerializable*>* value);
    // public System.Void NoteCut(System.Single songTime, NoteCutInfoNetSerializable noteCutInfoNetSerializable)
    // Offset: 0x1312854
    void NoteCut(float songTime, GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfoNetSerializable);
    // private System.Void InvokeNoteWasCutCallback(System.String userId, System.Single syncTime, System.Single songTime, NoteCutInfoNetSerializable noteCutInfo)
    // Offset: 0x13128CC
    void InvokeNoteWasCutCallback(::Il2CppString* userId, float syncTime, float songTime, GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo);
    // public System.Void add_noteWasMissedEvent(System.Action`4<System.String,System.Single,System.Single,NoteMissInfoNetSerializable> value)
    // Offset: 0x1312964
    void add_noteWasMissedEvent(System::Action_4<::Il2CppString*, float, float, GlobalNamespace::NoteMissInfoNetSerializable*>* value);
    // public System.Void remove_noteWasMissedEvent(System.Action`4<System.String,System.Single,System.Single,NoteMissInfoNetSerializable> value)
    // Offset: 0x1312A08
    void remove_noteWasMissedEvent(System::Action_4<::Il2CppString*, float, float, GlobalNamespace::NoteMissInfoNetSerializable*>* value);
    // public System.Void NoteMissed(System.Single songTime, NoteMissInfoNetSerializable noteMissInfoNetSerializable)
    // Offset: 0x1312AAC
    void NoteMissed(float songTime, GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfoNetSerializable);
    // private System.Void InvokeNoteWasMissedCallback(System.String userId, System.Single syncTime, System.Single songTime, NoteMissInfoNetSerializable noteMissInfo)
    // Offset: 0x1312B24
    void InvokeNoteWasMissedCallback(::Il2CppString* userId, float syncTime, float songTime, GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfo);
    // public System.Void add_levelFinishedEvent(System.Action`2<System.String,MultiplayerLevelCompletionResults> value)
    // Offset: 0x1312BBC
    void add_levelFinishedEvent(System::Action_2<::Il2CppString*, GlobalNamespace::MultiplayerLevelCompletionResults*>* value);
    // public System.Void remove_levelFinishedEvent(System.Action`2<System.String,MultiplayerLevelCompletionResults> value)
    // Offset: 0x1312C60
    void remove_levelFinishedEvent(System::Action_2<::Il2CppString*, GlobalNamespace::MultiplayerLevelCompletionResults*>* value);
    // public System.Void LevelFinished(MultiplayerLevelCompletionResults results)
    // Offset: 0x1312D04
    void LevelFinished(GlobalNamespace::MultiplayerLevelCompletionResults* results);
    // private System.Void InvokeLevelFinishedCallback(System.String userId, MultiplayerLevelCompletionResults results)
    // Offset: 0x1312D6C
    void InvokeLevelFinishedCallback(::Il2CppString* userId, GlobalNamespace::MultiplayerLevelCompletionResults* results);
    // public System.Void add_returnToMenuEvent(System.Action`1<System.String> value)
    // Offset: 0x1312DE8
    void add_returnToMenuEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_returnToMenuEvent(System.Action`1<System.String> value)
    // Offset: 0x1312E8C
    void remove_returnToMenuEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void ReturnToMenu()
    // Offset: 0x1312F30
    void ReturnToMenu();
    // private System.Void InvokeReturnToMenuCallback(System.String userId)
    // Offset: 0x1312F88
    void InvokeReturnToMenuCallback(::Il2CppString* userId);
    // public System.Void add_levelEndedEarlyEvent(System.Action`1<System.String> value)
    // Offset: 0x1312FFC
    void add_levelEndedEarlyEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_levelEndedEarlyEvent(System.Action`1<System.String> value)
    // Offset: 0x13130A0
    void remove_levelEndedEarlyEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void EndLevelEarly()
    // Offset: 0x1313144
    void EndLevelEarly();
    // private System.Void InvokeEndLevelEarlyCallback(System.String userId)
    // Offset: 0x131319C
    void InvokeEndLevelEarlyCallback(::Il2CppString* userId);
  }; // GameplayRpcManager
  #pragma pack(pop)
  static check_size<sizeof(GameplayRpcManager), 120 + sizeof(System::Action_1<::Il2CppString*>*)> __GlobalNamespace_GameplayRpcManagerSizeCheck;
  static_assert(sizeof(GameplayRpcManager) == 0x80);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayRpcManager*, "", "GameplayRpcManager");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayRpcManager::RpcType, "", "GameplayRpcManager/RpcType");
