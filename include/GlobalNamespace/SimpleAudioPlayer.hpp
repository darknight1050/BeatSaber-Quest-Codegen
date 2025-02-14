// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AudioPlayerBase
#include "GlobalNamespace/AudioPlayerBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x35
  #pragma pack(push, 1)
  // Autogenerated type: SimpleAudioPlayer
  class SimpleAudioPlayer : public GlobalNamespace::AudioPlayerBase {
    public:
    // private UnityEngine.AudioClip _audioClip
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::AudioClip* audioClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioClip*) == 0x8);
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioSource*) == 0x8);
    // private System.Single _targetVolume
    // Size: 0x4
    // Offset: 0x28
    float targetVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _loop
    // Size: 0x1
    // Offset: 0x2C
    bool loop;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: loop and: fadeSpeed
    char __padding3[0x3] = {};
    // private System.Single _fadeSpeed
    // Size: 0x4
    // Offset: 0x30
    float fadeSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _fadingIn
    // Size: 0x1
    // Offset: 0x34
    bool fadingIn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SimpleAudioPlayer
    SimpleAudioPlayer(UnityEngine::AudioClip* audioClip_ = {}, UnityEngine::AudioSource* audioSource_ = {}, float targetVolume_ = {}, bool loop_ = {}, float fadeSpeed_ = {}, bool fadingIn_ = {}) noexcept : audioClip{audioClip_}, audioSource{audioSource_}, targetVolume{targetVolume_}, loop{loop_}, fadeSpeed{fadeSpeed_}, fadingIn{fadingIn_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x10ED730
    void Start();
    // protected System.Void Update()
    // Offset: 0x10ED804
    void Update();
    // private System.Void FadeIn(System.Single duration)
    // Offset: 0x10ED7BC
    void FadeIn(float duration);
    // public override UnityEngine.AudioClip get_activeAudioClip()
    // Offset: 0x10ED728
    // Implemented from: AudioPlayerBase
    // Base method: UnityEngine.AudioClip AudioPlayerBase::get_activeAudioClip()
    UnityEngine::AudioClip* get_activeAudioClip();
    // public override System.Void FadeOut(System.Single duration)
    // Offset: 0x10ED964
    // Implemented from: AudioPlayerBase
    // Base method: System.Void AudioPlayerBase::FadeOut(System.Single duration)
    void FadeOut(float duration);
    // public override System.Void PauseCurrentChannel()
    // Offset: 0x10ED9A8
    // Implemented from: AudioPlayerBase
    // Base method: System.Void AudioPlayerBase::PauseCurrentChannel()
    void PauseCurrentChannel();
    // public override System.Void UnPauseCurrentChannel()
    // Offset: 0x10ED9C4
    // Implemented from: AudioPlayerBase
    // Base method: System.Void AudioPlayerBase::UnPauseCurrentChannel()
    void UnPauseCurrentChannel();
    // public System.Void .ctor()
    // Offset: 0x10ED9E0
    // Implemented from: AudioPlayerBase
    // Base method: System.Void AudioPlayerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleAudioPlayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SimpleAudioPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleAudioPlayer*, creationType>()));
    }
  }; // SimpleAudioPlayer
  #pragma pack(pop)
  static check_size<sizeof(SimpleAudioPlayer), 52 + sizeof(bool)> __GlobalNamespace_SimpleAudioPlayerSizeCheck;
  static_assert(sizeof(SimpleAudioPlayer) == 0x35);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleAudioPlayer*, "", "SimpleAudioPlayer");
