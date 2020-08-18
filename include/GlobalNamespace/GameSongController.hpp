// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SongController
#include "GlobalNamespace/SongController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: AudioPitchGainEffect
  class AudioPitchGainEffect;
  // Forward declaring type: BeatmapObjectCallbackController
  class BeatmapObjectCallbackController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: WaitUntil
  class WaitUntil;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameSongController
  class GameSongController : public GlobalNamespace::SongController {
    public:
    // Nested type: GlobalNamespace::GameSongController::$StartSongCoroutine$d__10
    class $StartSongCoroutine$d__10;
    // private AudioTimeSyncController _audioTimeSyncController
    // Offset: 0x20
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // private AudioPitchGainEffect _failAudioPitchGainEffect
    // Offset: 0x28
    GlobalNamespace::AudioPitchGainEffect* failAudioPitchGainEffect;
    // private BeatmapObjectCallbackController _beatmapObjectCallbackController
    // Offset: 0x30
    GlobalNamespace::BeatmapObjectCallbackController* beatmapObjectCallbackController;
    // private System.Boolean _songDidFinish
    // Offset: 0x38
    bool songDidFinish;
    // public System.Single get_songLength()
    // Offset: 0xB3D738
    float get_songLength();
    // public UnityEngine.WaitUntil get_waitUntilIsReadyToStartTheSong()
    // Offset: 0xB3D754
    UnityEngine::WaitUntil* get_waitUntilIsReadyToStartTheSong();
    // protected System.Void LateUpdate()
    // Offset: 0xB3D770
    void LateUpdate();
    // private System.Collections.IEnumerator StartSongCoroutine()
    // Offset: 0xB3D818
    System::Collections::IEnumerator* StartSongCoroutine();
    // public System.Void FailStopSong()
    // Offset: 0xB3D944
    void FailStopSong();
    // private System.Void <FailStopSong>b__14_0()
    // Offset: 0xB3DA4C
    void $FailStopSong$b__14_0();
    // public override System.Void StartSong()
    // Offset: 0xB3D7E8
    // Implemented from: SongController
    // Base method: System.Void SongController::StartSong()
    void StartSong();
    // public override System.Void StopSong()
    // Offset: 0xB3D8C0
    // Implemented from: SongController
    // Base method: System.Void SongController::StopSong()
    void StopSong();
    // public override System.Void PauseSong()
    // Offset: 0xB3D8F4
    // Implemented from: SongController
    // Base method: System.Void SongController::PauseSong()
    void PauseSong();
    // public override System.Void ResumeSong()
    // Offset: 0xB3D928
    // Implemented from: SongController
    // Base method: System.Void SongController::ResumeSong()
    void ResumeSong();
    // public System.Void .ctor()
    // Offset: 0xB3DA44
    // Implemented from: SongController
    // Base method: System.Void SongController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static GameSongController* New_ctor();
  }; // GameSongController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameSongController*, "", "GameSongController");
#pragma pack(pop)
