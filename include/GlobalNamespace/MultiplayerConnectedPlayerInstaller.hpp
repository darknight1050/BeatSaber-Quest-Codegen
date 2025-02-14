// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
// Including type: MultiplayerPlayerStartState
#include "GlobalNamespace/MultiplayerPlayerStartState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerConnectedPlayerSongTimeSyncController
  class MultiplayerConnectedPlayerSongTimeSyncController;
  // Forward declaring type: MultiplayerConnectedPlayerNoteEventManager
  class MultiplayerConnectedPlayerNoteEventManager;
  // Forward declaring type: MultiplayerConnectedPlayerGameNoteController
  class MultiplayerConnectedPlayerGameNoteController;
  // Forward declaring type: MultiplayerConnectedPlayerBombNoteController
  class MultiplayerConnectedPlayerBombNoteController;
  // Forward declaring type: MultiplayerConnectedPlayerObstacleController
  class MultiplayerConnectedPlayerObstacleController;
  // Forward declaring type: BeatmapObjectSpawnControllerPlayerHeightSetter
  class BeatmapObjectSpawnControllerPlayerHeightSetter;
  // Forward declaring type: PlayerHeightDetector
  class PlayerHeightDetector;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: GameplayCoreSceneSetupData
  class GameplayCoreSceneSetupData;
  // Forward declaring type: PlayersSpecificSettingsAtGameStartModel
  class PlayersSpecificSettingsAtGameStartModel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerConnectedPlayerInstaller
  class MultiplayerConnectedPlayerInstaller : public Zenject::MonoInstaller {
    public:
    // private MultiplayerConnectedPlayerSongTimeSyncController _connectedPlayerAudioTimeSyncControllerPrefab
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController* connectedPlayerAudioTimeSyncControllerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*) == 0x8);
    // private MultiplayerConnectedPlayerNoteEventManager _connectedPlayerNoteEventManagerPrefab
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager* connectedPlayerNoteEventManagerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager*) == 0x8);
    // [SpaceAttribute] Offset: 0xE1CE80
    // private MultiplayerConnectedPlayerGameNoteController _multiplayerGameNoteControllerPrefab
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* multiplayerGameNoteControllerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*) == 0x8);
    // private MultiplayerConnectedPlayerBombNoteController _multiplayerBombNoteControllerPrefab
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MultiplayerConnectedPlayerBombNoteController* multiplayerBombNoteControllerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*) == 0x8);
    // private MultiplayerConnectedPlayerObstacleController _multiplayerObstacleControllerPrefab
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::MultiplayerConnectedPlayerObstacleController* multiplayerObstacleControllerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConnectedPlayerObstacleController*) == 0x8);
    // [SpaceAttribute] Offset: 0xE1CED8
    // private BeatmapObjectSpawnControllerPlayerHeightSetter _beatmapObjectSpawnControllerPlayerHeightSetterPrefab
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter* beatmapObjectSpawnControllerPlayerHeightSetterPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter*) == 0x8);
    // private PlayerHeightDetector _playerHeightDetectorPrefab
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::PlayerHeightDetector* playerHeightDetectorPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerHeightDetector*) == 0x8);
    // [InjectAttribute] Offset: 0xE1CF20
    // private readonly IConnectedPlayer _connectedPlayer
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IConnectedPlayer*) == 0x8);
    // [InjectAttribute] Offset: 0xE1CF30
    // private readonly MultiplayerPlayerStartState _localPlayerStartState
    // Size: 0x4
    // Offset: 0x60
    GlobalNamespace::MultiplayerPlayerStartState localPlayerStartState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerPlayerStartState) == 0x4);
    // Padding between fields: localPlayerStartState and: sceneSetupData
    char __padding8[0x4] = {};
    // [InjectAttribute] Offset: 0xE1CF40
    // private readonly GameplayCoreSceneSetupData _sceneSetupData
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayCoreSceneSetupData*) == 0x8);
    // [InjectAttribute] Offset: 0xE1CF50
    // private readonly PlayersSpecificSettingsAtGameStartModel _playersSpecificSettingsAtGameStartModel
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersSpecificSettingsAtGameStartModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*) == 0x8);
    // Creating value type constructor for type: MultiplayerConnectedPlayerInstaller
    MultiplayerConnectedPlayerInstaller(GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController* connectedPlayerAudioTimeSyncControllerPrefab_ = {}, GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager* connectedPlayerNoteEventManagerPrefab_ = {}, GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* multiplayerGameNoteControllerPrefab_ = {}, GlobalNamespace::MultiplayerConnectedPlayerBombNoteController* multiplayerBombNoteControllerPrefab_ = {}, GlobalNamespace::MultiplayerConnectedPlayerObstacleController* multiplayerObstacleControllerPrefab_ = {}, GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter* beatmapObjectSpawnControllerPlayerHeightSetterPrefab_ = {}, GlobalNamespace::PlayerHeightDetector* playerHeightDetectorPrefab_ = {}, GlobalNamespace::IConnectedPlayer* connectedPlayer_ = {}, GlobalNamespace::MultiplayerPlayerStartState localPlayerStartState_ = {}, GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData_ = {}, GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersSpecificSettingsAtGameStartModel_ = {}) noexcept : connectedPlayerAudioTimeSyncControllerPrefab{connectedPlayerAudioTimeSyncControllerPrefab_}, connectedPlayerNoteEventManagerPrefab{connectedPlayerNoteEventManagerPrefab_}, multiplayerGameNoteControllerPrefab{multiplayerGameNoteControllerPrefab_}, multiplayerBombNoteControllerPrefab{multiplayerBombNoteControllerPrefab_}, multiplayerObstacleControllerPrefab{multiplayerObstacleControllerPrefab_}, beatmapObjectSpawnControllerPlayerHeightSetterPrefab{beatmapObjectSpawnControllerPlayerHeightSetterPrefab_}, playerHeightDetectorPrefab{playerHeightDetectorPrefab_}, connectedPlayer{connectedPlayer_}, localPlayerStartState{localPlayerStartState_}, sceneSetupData{sceneSetupData_}, playersSpecificSettingsAtGameStartModel{playersSpecificSettingsAtGameStartModel_} {}
    // public override System.Void InstallBindings()
    // Offset: 0x1147478
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0x11484D8
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerConnectedPlayerInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerInstaller*, creationType>()));
    }
  }; // MultiplayerConnectedPlayerInstaller
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerConnectedPlayerInstaller), 112 + sizeof(GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*)> __GlobalNamespace_MultiplayerConnectedPlayerInstallerSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerInstaller) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerInstaller*, "", "MultiplayerConnectedPlayerInstaller");
