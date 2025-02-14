// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ConnectionFailedReason
#include "GlobalNamespace/ConnectionFailedReason.hpp"
// Including type: UnifiedNetworkPlayerModel
#include "GlobalNamespace/UnifiedNetworkPlayerModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: LobbyConnectionState because it is already included!
  // Skipping declaration: LobbyConnectionType because it is already included!
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Skipping declaration: IUnifiedNetworkPlayerModel because it is already included!
  // Forward declaring type: ILobbyGameStateController
  class ILobbyGameStateController;
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
  // Skipping declaration: BeatmapDifficultyMask because it is already included!
  // Skipping declaration: SongPackMask because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLobbyConnectionController
  class MultiplayerLobbyConnectionController : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState
    struct LobbyConnectionState;
    // Nested type: GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType
    struct LobbyConnectionType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MultiplayerLobbyConnectionController/LobbyConnectionState
    struct LobbyConnectionState/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: LobbyConnectionState
      constexpr LobbyConnectionState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MultiplayerLobbyConnectionController/LobbyConnectionState None
      static constexpr const int None = 0;
      // Get static field: static public MultiplayerLobbyConnectionController/LobbyConnectionState None
      static GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState _get_None();
      // Set static field: static public MultiplayerLobbyConnectionController/LobbyConnectionState None
      static void _set_None(GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState value);
      // static field const value: static public MultiplayerLobbyConnectionController/LobbyConnectionState Connecting
      static constexpr const int Connecting = 1;
      // Get static field: static public MultiplayerLobbyConnectionController/LobbyConnectionState Connecting
      static GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState _get_Connecting();
      // Set static field: static public MultiplayerLobbyConnectionController/LobbyConnectionState Connecting
      static void _set_Connecting(GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState value);
      // static field const value: static public MultiplayerLobbyConnectionController/LobbyConnectionState Connected
      static constexpr const int Connected = 2;
      // Get static field: static public MultiplayerLobbyConnectionController/LobbyConnectionState Connected
      static GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState _get_Connected();
      // Set static field: static public MultiplayerLobbyConnectionController/LobbyConnectionState Connected
      static void _set_Connected(GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState value);
      // static field const value: static public MultiplayerLobbyConnectionController/LobbyConnectionState ConnectionFailed
      static constexpr const int ConnectionFailed = 3;
      // Get static field: static public MultiplayerLobbyConnectionController/LobbyConnectionState ConnectionFailed
      static GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState _get_ConnectionFailed();
      // Set static field: static public MultiplayerLobbyConnectionController/LobbyConnectionState ConnectionFailed
      static void _set_ConnectionFailed(GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState value);
    }; // MultiplayerLobbyConnectionController/LobbyConnectionState
    #pragma pack(pop)
    static check_size<sizeof(MultiplayerLobbyConnectionController::LobbyConnectionState), 0 + sizeof(int)> __GlobalNamespace_MultiplayerLobbyConnectionController_LobbyConnectionStateSizeCheck;
    static_assert(sizeof(MultiplayerLobbyConnectionController::LobbyConnectionState) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MultiplayerLobbyConnectionController/LobbyConnectionType
    struct LobbyConnectionType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: LobbyConnectionType
      constexpr LobbyConnectionType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MultiplayerLobbyConnectionController/LobbyConnectionType None
      static constexpr const int None = 0;
      // Get static field: static public MultiplayerLobbyConnectionController/LobbyConnectionType None
      static GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType _get_None();
      // Set static field: static public MultiplayerLobbyConnectionController/LobbyConnectionType None
      static void _set_None(GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType value);
      // static field const value: static public MultiplayerLobbyConnectionController/LobbyConnectionType PartyHost
      static constexpr const int PartyHost = 1;
      // Get static field: static public MultiplayerLobbyConnectionController/LobbyConnectionType PartyHost
      static GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType _get_PartyHost();
      // Set static field: static public MultiplayerLobbyConnectionController/LobbyConnectionType PartyHost
      static void _set_PartyHost(GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType value);
      // static field const value: static public MultiplayerLobbyConnectionController/LobbyConnectionType PartyClient
      static constexpr const int PartyClient = 2;
      // Get static field: static public MultiplayerLobbyConnectionController/LobbyConnectionType PartyClient
      static GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType _get_PartyClient();
      // Set static field: static public MultiplayerLobbyConnectionController/LobbyConnectionType PartyClient
      static void _set_PartyClient(GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType value);
      // static field const value: static public MultiplayerLobbyConnectionController/LobbyConnectionType QuickPlay
      static constexpr const int QuickPlay = 3;
      // Get static field: static public MultiplayerLobbyConnectionController/LobbyConnectionType QuickPlay
      static GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType _get_QuickPlay();
      // Set static field: static public MultiplayerLobbyConnectionController/LobbyConnectionType QuickPlay
      static void _set_QuickPlay(GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType value);
    }; // MultiplayerLobbyConnectionController/LobbyConnectionType
    #pragma pack(pop)
    static check_size<sizeof(MultiplayerLobbyConnectionController::LobbyConnectionType), 0 + sizeof(int)> __GlobalNamespace_MultiplayerLobbyConnectionController_LobbyConnectionTypeSizeCheck;
    static_assert(sizeof(MultiplayerLobbyConnectionController::LobbyConnectionType) == 0x4);
    // [InjectAttribute] Offset: 0xE17BDC
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE17BEC
    // private readonly IUnifiedNetworkPlayerModel _unifiedNetworkPlayerModel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IUnifiedNetworkPlayerModel* unifiedNetworkPlayerModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IUnifiedNetworkPlayerModel*) == 0x8);
    // [InjectAttribute] Offset: 0xE17BFC
    // private readonly ILobbyGameStateController _lobbyGameStateController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ILobbyGameStateController* lobbyGameStateController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ILobbyGameStateController*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE17C0C
    // private System.Action connectionSuccessEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action* connectionSuccessEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE17C1C
    // private System.Action`2<MultiplayerLobbyConnectionController/LobbyConnectionType,ConnectionFailedReason> connectionFailedEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action_2<GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType, GlobalNamespace::ConnectionFailedReason>* connectionFailedEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType, GlobalNamespace::ConnectionFailedReason>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE17C2C
    // private MultiplayerLobbyConnectionController/LobbyConnectionState <connectionState>k__BackingField
    // Size: 0x4
    // Offset: 0x38
    GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState connectionState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE17C3C
    // private MultiplayerLobbyConnectionController/LobbyConnectionType <connectionType>k__BackingField
    // Size: 0x4
    // Offset: 0x3C
    GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType connectionType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE17C4C
    // private ConnectionFailedReason <connectionFailedReason>k__BackingField
    // Size: 0x4
    // Offset: 0x40
    GlobalNamespace::ConnectionFailedReason connectionFailedReason;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ConnectionFailedReason) == 0x4);
    // Padding between fields: connectionFailedReason and: createPartyConfig
    char __padding7[0x4] = {};
    // private UnifiedNetworkPlayerModel/CreatePartyConfig _createPartyConfig
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::UnifiedNetworkPlayerModel::CreatePartyConfig* createPartyConfig;
    // Field size check
    static_assert(sizeof(GlobalNamespace::UnifiedNetworkPlayerModel::CreatePartyConfig*) == 0x8);
    // private System.Int32 _retryAttemptsLeft
    // Size: 0x4
    // Offset: 0x50
    int retryAttemptsLeft;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MultiplayerLobbyConnectionController
    MultiplayerLobbyConnectionController(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}, GlobalNamespace::IUnifiedNetworkPlayerModel* unifiedNetworkPlayerModel_ = {}, GlobalNamespace::ILobbyGameStateController* lobbyGameStateController_ = {}, System::Action* connectionSuccessEvent_ = {}, System::Action_2<GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType, GlobalNamespace::ConnectionFailedReason>* connectionFailedEvent_ = {}, GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState connectionState_ = {}, GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType connectionType_ = {}, GlobalNamespace::ConnectionFailedReason connectionFailedReason_ = {}, GlobalNamespace::UnifiedNetworkPlayerModel::CreatePartyConfig* createPartyConfig_ = {}, int retryAttemptsLeft_ = {}) noexcept : multiplayerSessionManager{multiplayerSessionManager_}, unifiedNetworkPlayerModel{unifiedNetworkPlayerModel_}, lobbyGameStateController{lobbyGameStateController_}, connectionSuccessEvent{connectionSuccessEvent_}, connectionFailedEvent{connectionFailedEvent_}, connectionState{connectionState_}, connectionType{connectionType_}, connectionFailedReason{connectionFailedReason_}, createPartyConfig{createPartyConfig_}, retryAttemptsLeft{retryAttemptsLeft_} {}
    // public System.Void add_connectionSuccessEvent(System.Action value)
    // Offset: 0x23FBDCC
    void add_connectionSuccessEvent(System::Action* value);
    // public System.Void remove_connectionSuccessEvent(System.Action value)
    // Offset: 0x23FBE70
    void remove_connectionSuccessEvent(System::Action* value);
    // public System.Void add_connectionFailedEvent(System.Action`2<MultiplayerLobbyConnectionController/LobbyConnectionType,ConnectionFailedReason> value)
    // Offset: 0x23FBF14
    void add_connectionFailedEvent(System::Action_2<GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType, GlobalNamespace::ConnectionFailedReason>* value);
    // public System.Void remove_connectionFailedEvent(System.Action`2<MultiplayerLobbyConnectionController/LobbyConnectionType,ConnectionFailedReason> value)
    // Offset: 0x23FBFB8
    void remove_connectionFailedEvent(System::Action_2<GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType, GlobalNamespace::ConnectionFailedReason>* value);
    // public MultiplayerLobbyConnectionController/LobbyConnectionState get_connectionState()
    // Offset: 0x23FC05C
    GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState get_connectionState();
    // private System.Void set_connectionState(MultiplayerLobbyConnectionController/LobbyConnectionState value)
    // Offset: 0x23FC064
    void set_connectionState(GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState value);
    // public MultiplayerLobbyConnectionController/LobbyConnectionType get_connectionType()
    // Offset: 0x23FC06C
    GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType get_connectionType();
    // private System.Void set_connectionType(MultiplayerLobbyConnectionController/LobbyConnectionType value)
    // Offset: 0x23FC074
    void set_connectionType(GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType value);
    // public ConnectionFailedReason get_connectionFailedReason()
    // Offset: 0x23FC07C
    GlobalNamespace::ConnectionFailedReason get_connectionFailedReason();
    // private System.Void set_connectionFailedReason(ConnectionFailedReason value)
    // Offset: 0x23FC084
    void set_connectionFailedReason(GlobalNamespace::ConnectionFailedReason value);
    // public System.Void CreateParty(UnifiedNetworkPlayerModel/CreatePartyConfig createPartyConfig)
    // Offset: 0x23FC08C
    void CreateParty(GlobalNamespace::UnifiedNetworkPlayerModel::CreatePartyConfig* createPartyConfig);
    // public System.Void ConnectToParty(System.String serverCode)
    // Offset: 0x23FC3A4
    void ConnectToParty(::Il2CppString* serverCode);
    // public System.Void CreateOrConnectToParty(UnifiedNetworkPlayerModel/CreatePartyConfig createPartyConfig)
    // Offset: 0x23FC5D4
    void CreateOrConnectToParty(GlobalNamespace::UnifiedNetworkPlayerModel::CreatePartyConfig* createPartyConfig);
    // public System.Void ConnectToServer(INetworkPlayer server, System.String password)
    // Offset: 0x23FC8F8
    void ConnectToServer(GlobalNamespace::INetworkPlayer* server, ::Il2CppString* password);
    // public System.Void ConnectToMatchmaking(BeatmapDifficultyMask beatmapDifficultyMask, SongPackMask songPackMask)
    // Offset: 0x23FCB18
    void ConnectToMatchmaking(GlobalNamespace::BeatmapDifficultyMask beatmapDifficultyMask, GlobalNamespace::SongPackMask songPackMask);
    // public System.Void DestroyParty()
    // Offset: 0x23FCDA8
    void DestroyParty();
    // public System.Void LeaveLobby()
    // Offset: 0x23FCE60
    void LeaveLobby();
    // public System.Void ClearCurrentConnection()
    // Offset: 0x23FCF9C
    void ClearCurrentConnection();
    // private System.Void HandleMultiplayerSessionManagerConnected()
    // Offset: 0x23FCFA4
    void HandleMultiplayerSessionManagerConnected();
    // private System.Void HandleMultiplayerSessionManagerConnectionFailed(ConnectionFailedReason reason)
    // Offset: 0x23FD1FC
    void HandleMultiplayerSessionManagerConnectionFailed(GlobalNamespace::ConnectionFailedReason reason);
    // private System.Void HandleMultiplayerSessionManagerConnectionFailedWithRetries(ConnectionFailedReason reason)
    // Offset: 0x23FD478
    void HandleMultiplayerSessionManagerConnectionFailedWithRetries(GlobalNamespace::ConnectionFailedReason reason);
    // public System.Void .ctor()
    // Offset: 0x23FD73C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLobbyConnectionController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLobbyConnectionController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLobbyConnectionController*, creationType>()));
    }
  }; // MultiplayerLobbyConnectionController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLobbyConnectionController), 80 + sizeof(int)> __GlobalNamespace_MultiplayerLobbyConnectionControllerSizeCheck;
  static_assert(sizeof(MultiplayerLobbyConnectionController) == 0x54);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLobbyConnectionController*, "", "MultiplayerLobbyConnectionController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionState, "", "MultiplayerLobbyConnectionController/LobbyConnectionState");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLobbyConnectionController::LobbyConnectionType, "", "MultiplayerLobbyConnectionController/LobbyConnectionType");
