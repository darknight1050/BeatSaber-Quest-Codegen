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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: Coroutine
  class Coroutine;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: RandomizedPitch
  class RandomizedPitch : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::RandomizedPitch::$PlayDelayedCoroutine$d__9
    class $PlayDelayedCoroutine$d__9;
    // Nested type: GlobalNamespace::RandomizedPitch::$RestorePitchWithDelay$d__10
    class $RestorePitchWithDelay$d__10;
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioSource*) == 0x8);
    // private System.Single _minPitchMultiplier
    // Size: 0x4
    // Offset: 0x20
    float minPitchMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxPitchMultiplier
    // Size: 0x4
    // Offset: 0x24
    float maxPitchMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _playOnAwake
    // Size: 0x1
    // Offset: 0x28
    bool playOnAwake;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: playOnAwake and: originalPitch
    char __padding3[0x3] = {};
    // private System.Single _originalPitch
    // Size: 0x4
    // Offset: 0x2C
    float originalPitch;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Coroutine _restoringCoroutine
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Coroutine* restoringCoroutine;
    // Field size check
    static_assert(sizeof(UnityEngine::Coroutine*) == 0x8);
    // Creating value type constructor for type: RandomizedPitch
    RandomizedPitch(UnityEngine::AudioSource* audioSource_ = {}, float minPitchMultiplier_ = {}, float maxPitchMultiplier_ = {}, bool playOnAwake_ = {}, float originalPitch_ = {}, UnityEngine::Coroutine* restoringCoroutine_ = {}) noexcept : audioSource{audioSource_}, minPitchMultiplier{minPitchMultiplier_}, maxPitchMultiplier{maxPitchMultiplier_}, playOnAwake{playOnAwake_}, originalPitch{originalPitch_}, restoringCoroutine{restoringCoroutine_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void OnEnable()
    // Offset: 0x1235334
    void OnEnable();
    // public System.Void Play()
    // Offset: 0x123539C
    void Play();
    // public System.Void PlayDelayed(System.Single delay)
    // Offset: 0x1235508
    void PlayDelayed(float delay);
    // private System.Collections.IEnumerator PlayDelayedCoroutine(System.Single delay)
    // Offset: 0x1235550
    System::Collections::IEnumerator* PlayDelayedCoroutine(float delay);
    // private System.Collections.IEnumerator RestorePitchWithDelay(System.Single delay)
    // Offset: 0x1235488
    System::Collections::IEnumerator* RestorePitchWithDelay(float delay);
    // public System.Void .ctor()
    // Offset: 0x1235628
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RandomizedPitch* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RandomizedPitch::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RandomizedPitch*, creationType>()));
    }
  }; // RandomizedPitch
  #pragma pack(pop)
  static check_size<sizeof(RandomizedPitch), 48 + sizeof(UnityEngine::Coroutine*)> __GlobalNamespace_RandomizedPitchSizeCheck;
  static_assert(sizeof(RandomizedPitch) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RandomizedPitch*, "", "RandomizedPitch");
