// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
  // Forward declaring type: RandomObjectPicker`1<T>
  template<typename T>
  class RandomObjectPicker_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  // Autogenerated type: FireworkItemController
  // [] Offset: FFFFFFFF
  class FireworkItemController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::FireworkItemController::Pool
    class Pool;
    // Nested type: GlobalNamespace::FireworkItemController::$FireCoroutine$d__16
    class $FireCoroutine$d__16;
    // private TubeBloomPrePassLight[] _lights
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::TubeBloomPrePassLight*>* lights;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::TubeBloomPrePassLight*>*) == 0x8);
    // private UnityEngine.ParticleSystem _particleSystem
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::ParticleSystem* particleSystem;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem*) == 0x8);
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioSource*) == 0x8);
    // [SpaceAttribute] Offset: 0xDC6768
    // private System.Int32 _numberOfParticles
    // Size: 0x4
    // Offset: 0x30
    int numberOfParticles;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _lightFlashDuration
    // Size: 0x4
    // Offset: 0x34
    float lightFlashDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.AnimationCurve _lightIntensityCurve
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::AnimationCurve* lightIntensityCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.Color _lightsColor
    // Size: 0x10
    // Offset: 0x40
    UnityEngine::Color lightsColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.AudioClip[] _explosionClips
    // Size: 0x8
    // Offset: 0x50
    ::Array<UnityEngine::AudioClip*>* explosionClips;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::AudioClip*>*) == 0x8);
    // private RandomObjectPicker`1<UnityEngine.AudioClip> _randomAudioPicker
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip*>* randomAudioPicker;
    // Field size check
    static_assert(sizeof(GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC67E0
    // private System.Action`1<FireworkItemController> didFinishEvent
    // Size: 0x8
    // Offset: 0x60
    System::Action_1<GlobalNamespace::FireworkItemController*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::FireworkItemController*>*) == 0x8);
    // Creating value type constructor for type: FireworkItemController
    FireworkItemController(::Array<GlobalNamespace::TubeBloomPrePassLight*>* lights_ = {}, UnityEngine::ParticleSystem* particleSystem_ = {}, UnityEngine::AudioSource* audioSource_ = {}, int numberOfParticles_ = {}, float lightFlashDuration_ = {}, UnityEngine::AnimationCurve* lightIntensityCurve_ = {}, UnityEngine::Color lightsColor_ = {}, ::Array<UnityEngine::AudioClip*>* explosionClips_ = {}, GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip*>* randomAudioPicker_ = {}, System::Action_1<GlobalNamespace::FireworkItemController*>* didFinishEvent_ = {}) noexcept : lights{lights_}, particleSystem{particleSystem_}, audioSource{audioSource_}, numberOfParticles{numberOfParticles_}, lightFlashDuration{lightFlashDuration_}, lightIntensityCurve{lightIntensityCurve_}, lightsColor{lightsColor_}, explosionClips{explosionClips_}, randomAudioPicker{randomAudioPicker_}, didFinishEvent{didFinishEvent_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didFinishEvent(System.Action`1<FireworkItemController> value)
    // Offset: 0x1A12A44
    void add_didFinishEvent(System::Action_1<GlobalNamespace::FireworkItemController*>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<FireworkItemController> value)
    // Offset: 0x1A12AE8
    void remove_didFinishEvent(System::Action_1<GlobalNamespace::FireworkItemController*>* value);
    // protected System.Void Awake()
    // Offset: 0x1A12B8C
    void Awake();
    // protected System.Void OnDisable()
    // Offset: 0x1A12C14
    void OnDisable();
    // public System.Void Fire()
    // Offset: 0x1A12D50
    void Fire();
    // private System.Collections.IEnumerator FireCoroutine()
    // Offset: 0x1A12D7C
    System::Collections::IEnumerator* FireCoroutine();
    // private System.Void SetLightsColor(System.Single intensity)
    // Offset: 0x1A12C98
    void SetLightsColor(float intensity);
    // private System.Void PlayExplosionSound()
    // Offset: 0x1A12E24
    void PlayExplosionSound();
    // public System.Void .ctor()
    // Offset: 0x1A12F10
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FireworkItemController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FireworkItemController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FireworkItemController*, creationType>()));
    }
  }; // FireworkItemController
  static check_size<sizeof(FireworkItemController), 96 + sizeof(System::Action_1<GlobalNamespace::FireworkItemController*>*)> __GlobalNamespace_FireworkItemControllerSizeCheck;
  static_assert(sizeof(FireworkItemController) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FireworkItemController*, "", "FireworkItemController");
#pragma pack(pop)
