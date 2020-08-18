// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IGamePause
#include "GlobalNamespace/IGamePause.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameEnergyCounter
  class GameEnergyCounter;
  // Forward declaring type: ScoreController
  class ScoreController;
  // Forward declaring type: BeatmapObjectExecutionRatingsRecorder
  class BeatmapObjectExecutionRatingsRecorder;
  // Forward declaring type: SongController
  class SongController;
  // Forward declaring type: NoteCutSoundEffectManager
  class NoteCutSoundEffectManager;
  // Forward declaring type: PlayerController
  class PlayerController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GamePause
  class GamePause : public GlobalNamespace::IGamePause, public UnityEngine::MonoBehaviour {
    public:
    // private System.Action didPauseEvent
    // Offset: 0x18
    System::Action* didPauseEvent;
    // private System.Action didResumeEvent
    // Offset: 0x20
    System::Action* didResumeEvent;
    // private GameEnergyCounter _gameEnergyCounter
    // Offset: 0x28
    GlobalNamespace::GameEnergyCounter* gameEnergyCounter;
    // private ScoreController _scoreController
    // Offset: 0x30
    GlobalNamespace::ScoreController* scoreController;
    // private BeatmapObjectExecutionRatingsRecorder _beatmapObjectExecutionRatingsRecorder
    // Offset: 0x38
    GlobalNamespace::BeatmapObjectExecutionRatingsRecorder* beatmapObjectExecutionRatingsRecorder;
    // private SongController _songController
    // Offset: 0x40
    GlobalNamespace::SongController* songController;
    // private NoteCutSoundEffectManager _noteCutSoundEffectManager
    // Offset: 0x48
    GlobalNamespace::NoteCutSoundEffectManager* noteCutSoundEffectManager;
    // private PlayerController _playerController
    // Offset: 0x50
    GlobalNamespace::PlayerController* playerController;
    // private System.Boolean _pause
    // Offset: 0x58
    bool pause;
    // public System.Void add_didPauseEvent(System.Action value)
    // Offset: 0xB3D32C
    // Implemented from: IGamePause
    // Base method: System.Void IGamePause::add_didPauseEvent(System.Action value)
    void add_didPauseEvent(System::Action* value);
    // public System.Void remove_didPauseEvent(System.Action value)
    // Offset: 0xB3D3D0
    // Implemented from: IGamePause
    // Base method: System.Void IGamePause::remove_didPauseEvent(System.Action value)
    void remove_didPauseEvent(System::Action* value);
    // public System.Void add_didResumeEvent(System.Action value)
    // Offset: 0xB3D474
    // Implemented from: IGamePause
    // Base method: System.Void IGamePause::add_didResumeEvent(System.Action value)
    void add_didResumeEvent(System::Action* value);
    // public System.Void remove_didResumeEvent(System.Action value)
    // Offset: 0xB3D518
    // Implemented from: IGamePause
    // Base method: System.Void IGamePause::remove_didResumeEvent(System.Action value)
    void remove_didResumeEvent(System::Action* value);
    // public System.Void Pause()
    // Offset: 0xB3D5BC
    // Implemented from: IGamePause
    // Base method: System.Void IGamePause::Pause()
    void Pause();
    // public System.Void Resume()
    // Offset: 0xB3D678
    // Implemented from: IGamePause
    // Base method: System.Void IGamePause::Resume()
    void Resume();
    // public System.Void .ctor()
    // Offset: 0xB3D730
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static GamePause* New_ctor();
  }; // GamePause
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GamePause*, "", "GamePause");
#pragma pack(pop)
