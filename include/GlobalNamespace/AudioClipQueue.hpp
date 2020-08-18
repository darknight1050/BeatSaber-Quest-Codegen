// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AudioClipQueue
  class AudioClipQueue : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.AudioSource _audioSource
    // Offset: 0x18
    UnityEngine::AudioSource* audioSource;
    // private System.Collections.Generic.List`1<UnityEngine.AudioClip> _queue
    // Offset: 0x20
    System::Collections::Generic::List_1<UnityEngine::AudioClip*>* queue;
    // private System.Single _delay
    // Offset: 0x28
    float delay;
    // protected System.Void Awake()
    // Offset: 0x18F0484
    void Awake();
    // protected System.Void Update()
    // Offset: 0x18F04A4
    void Update();
    // public System.Void PlayAudioClipWithDelay(UnityEngine.AudioClip audioClip, System.Single delay)
    // Offset: 0x18F05D0
    void PlayAudioClipWithDelay(UnityEngine::AudioClip* audioClip, float delay);
    // public System.Void .ctor()
    // Offset: 0x18F068C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AudioClipQueue* New_ctor();
  }; // AudioClipQueue
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AudioClipQueue*, "", "AudioClipQueue");
#pragma pack(pop)
