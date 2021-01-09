// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Signal
  class Signal;
  // Forward declaring type: RandomObjectPicker`1<T>
  template<typename T>
  class RandomObjectPicker_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  // Autogenerated type: BasicUIAudioManager
  // [] Offset: FFFFFFFF
  class BasicUIAudioManager : public UnityEngine::MonoBehaviour {
    public:
    // private Signal[] _buttonClickEvents
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::Signal*>* buttonClickEvents;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::Signal*>*) == 0x8);
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioSource*) == 0x8);
    // private UnityEngine.AudioClip[] _clickSounds
    // Size: 0x8
    // Offset: 0x28
    ::Array<UnityEngine::AudioClip*>* clickSounds;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::AudioClip*>*) == 0x8);
    // private System.Single _minPitch
    // Size: 0x4
    // Offset: 0x30
    float minPitch;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxPitch
    // Size: 0x4
    // Offset: 0x34
    float maxPitch;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private RandomObjectPicker`1<UnityEngine.AudioClip> _randomSoundPicker
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip*>* randomSoundPicker;
    // Field size check
    static_assert(sizeof(GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip*>*) == 0x8);
    // Creating value type constructor for type: BasicUIAudioManager
    BasicUIAudioManager(::Array<GlobalNamespace::Signal*>* buttonClickEvents_ = {}, UnityEngine::AudioSource* audioSource_ = {}, ::Array<UnityEngine::AudioClip*>* clickSounds_ = {}, float minPitch_ = {}, float maxPitch_ = {}, GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip*>* randomSoundPicker_ = {}) noexcept : buttonClickEvents{buttonClickEvents_}, audioSource{audioSource_}, clickSounds{clickSounds_}, minPitch{minPitch_}, maxPitch{maxPitch_}, randomSoundPicker{randomSoundPicker_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x1A7718C
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x1A77214
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1A772E8
    void OnDisable();
    // private System.Void HandleButtonClickEvent()
    // Offset: 0x1A773BC
    void HandleButtonClickEvent();
    // public System.Void .ctor()
    // Offset: 0x1A7749C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BasicUIAudioManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BasicUIAudioManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BasicUIAudioManager*, creationType>()));
    }
  }; // BasicUIAudioManager
  static check_size<sizeof(BasicUIAudioManager), 56 + sizeof(GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip*>*)> __GlobalNamespace_BasicUIAudioManagerSizeCheck;
  static_assert(sizeof(BasicUIAudioManager) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BasicUIAudioManager*, "", "BasicUIAudioManager");
#pragma pack(pop)
