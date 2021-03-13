// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: AudioClipQueue
  // [] Offset: FFFFFFFF
  class AudioClipQueue : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioSource*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.AudioClip> _queue
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<UnityEngine::AudioClip*>* queue;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::AudioClip*>*) == 0x8);
    // private System.Single _delay
    // Size: 0x4
    // Offset: 0x28
    float delay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: AudioClipQueue
    AudioClipQueue(UnityEngine::AudioSource* audioSource_ = {}, System::Collections::Generic::List_1<UnityEngine::AudioClip*>* queue_ = {}, float delay_ = {}) noexcept : audioSource{audioSource_}, queue{queue_}, delay{delay_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0xFFE6C8
    void Awake();
    // protected System.Void Update()
    // Offset: 0xFFE6E8
    void Update();
    // public System.Void PlayAudioClipWithDelay(UnityEngine.AudioClip audioClip, System.Single delay)
    // Offset: 0xFFE814
    void PlayAudioClipWithDelay(UnityEngine::AudioClip* audioClip, float delay);
    // public System.Void .ctor()
    // Offset: 0xFFE8D0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioClipQueue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AudioClipQueue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioClipQueue*, creationType>()));
    }
  }; // AudioClipQueue
  #pragma pack(pop)
  static check_size<sizeof(AudioClipQueue), 40 + sizeof(float)> __GlobalNamespace_AudioClipQueueSizeCheck;
  static_assert(sizeof(AudioClipQueue) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AudioClipQueue*, "", "AudioClipQueue");
