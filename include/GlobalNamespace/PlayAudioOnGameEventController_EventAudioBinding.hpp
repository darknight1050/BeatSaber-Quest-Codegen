// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: PlayAudioOnGameEventController
#include "GlobalNamespace/PlayAudioOnGameEventController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Signal
  class Signal;
  // Forward declaring type: AudioClipQueue
  class AudioClipQueue;
  // Forward declaring type: RandomObjectPicker`1<T>
  template<typename T>
  class RandomObjectPicker_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayAudioOnGameEventController/EventAudioBinding
  class PlayAudioOnGameEventController::EventAudioBinding : public ::CsObject {
    public:
    // private Signal _signal
    // Offset: 0x10
    GlobalNamespace::Signal* signal;
    // private System.Single _delay
    // Offset: 0x18
    float delay;
    // private UnityEngine.AudioClip[] _audioClips
    // Offset: 0x20
    ::Array<UnityEngine::AudioClip*>* audioClips;
    // private AudioClipQueue _audioClipQueue
    // Offset: 0x28
    GlobalNamespace::AudioClipQueue* audioClipQueue;
    // private RandomObjectPicker`1<UnityEngine.AudioClip> _randomObjectPicker
    // Offset: 0x30
    GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip*>* randomObjectPicker;
    // public System.Void Init(AudioClipQueue audioClipQueue)
    // Offset: 0xBC3E64
    void Init(GlobalNamespace::AudioClipQueue* audioClipQueue);
    // public System.Void Deinit()
    // Offset: 0xBC3FB0
    void Deinit();
    // private System.Void HandleGameEvent()
    // Offset: 0xBC4044
    void HandleGameEvent();
    // public System.Void .ctor()
    // Offset: 0xBC40F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PlayAudioOnGameEventController::EventAudioBinding* New_ctor();
  }; // PlayAudioOnGameEventController/EventAudioBinding
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayAudioOnGameEventController::EventAudioBinding*, "", "PlayAudioOnGameEventController/EventAudioBinding");
#pragma pack(pop)
