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
  // Forward declaring type: TutorialSongController
  class TutorialSongController;
  // Forward declaring type: PlayerController
  class PlayerController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TutorialPause
  class TutorialPause : public GlobalNamespace::IGamePause, public UnityEngine::MonoBehaviour {
    public:
    // private System.Action didPauseEvent
    // Offset: 0x18
    System::Action* didPauseEvent;
    // private System.Action didResumeEvent
    // Offset: 0x20
    System::Action* didResumeEvent;
    // private TutorialSongController _tutorialSongController
    // Offset: 0x28
    GlobalNamespace::TutorialSongController* tutorialSongController;
    // private PlayerController _playerController
    // Offset: 0x30
    GlobalNamespace::PlayerController* playerController;
    // private System.Boolean _pause
    // Offset: 0x38
    bool pause;
    // public System.Void add_didPauseEvent(System.Action value)
    // Offset: 0x1964140
    // Implemented from: IGamePause
    // Base method: System.Void IGamePause::add_didPauseEvent(System.Action value)
    void add_didPauseEvent(System::Action* value);
    // public System.Void remove_didPauseEvent(System.Action value)
    // Offset: 0x19641E4
    // Implemented from: IGamePause
    // Base method: System.Void IGamePause::remove_didPauseEvent(System.Action value)
    void remove_didPauseEvent(System::Action* value);
    // public System.Void add_didResumeEvent(System.Action value)
    // Offset: 0x1964288
    // Implemented from: IGamePause
    // Base method: System.Void IGamePause::add_didResumeEvent(System.Action value)
    void add_didResumeEvent(System::Action* value);
    // public System.Void remove_didResumeEvent(System.Action value)
    // Offset: 0x196432C
    // Implemented from: IGamePause
    // Base method: System.Void IGamePause::remove_didResumeEvent(System.Action value)
    void remove_didResumeEvent(System::Action* value);
    // public System.Void Pause()
    // Offset: 0x19643D0
    // Implemented from: IGamePause
    // Base method: System.Void IGamePause::Pause()
    void Pause();
    // public System.Void Resume()
    // Offset: 0x1964440
    // Implemented from: IGamePause
    // Base method: System.Void IGamePause::Resume()
    void Resume();
    // public System.Void .ctor()
    // Offset: 0x19644AC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TutorialPause* New_ctor();
  }; // TutorialPause
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialPause*, "", "TutorialPause");
#pragma pack(pop)
