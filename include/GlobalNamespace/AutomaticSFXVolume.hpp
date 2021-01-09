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
  // Forward declaring type: AutomaticSFXVolumeParamsSO
  class AutomaticSFXVolumeParamsSO;
  // Forward declaring type: AudioManagerSO
  class AudioManagerSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4C
  // Autogenerated type: AutomaticSFXVolume
  // [] Offset: FFFFFFFF
  // [RequireComponent] Offset: DBE4EC
  class AutomaticSFXVolume : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::AutomaticSFXVolume::InitData
    class InitData;
    // private AutomaticSFXVolumeParamsSO _params
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::AutomaticSFXVolumeParamsSO* params;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AutomaticSFXVolumeParamsSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xDC189C
    // private AudioManagerSO _audioManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::AudioManagerSO* audioManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioManagerSO*) == 0x8);
    // [InjectAttribute] Offset: 0xDC18D4
    // private AutomaticSFXVolume/InitData _initData
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::AutomaticSFXVolume::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AutomaticSFXVolume::InitData*) == 0x8);
    // private System.Single _sampleRate
    // Size: 0x4
    // Offset: 0x30
    float sampleRate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _volume
    // Size: 0x4
    // Offset: 0x34
    float volume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _envelope
    // Size: 0x4
    // Offset: 0x38
    float envelope;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _attackSamples
    // Size: 0x4
    // Offset: 0x3C
    float attackSamples;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _releaseSamples
    // Size: 0x4
    // Offset: 0x40
    float releaseSamples;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _attackCoef
    // Size: 0x4
    // Offset: 0x44
    float attackCoef;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _releaseCoef
    // Size: 0x4
    // Offset: 0x48
    float releaseCoef;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: AutomaticSFXVolume
    AutomaticSFXVolume(GlobalNamespace::AutomaticSFXVolumeParamsSO* params_ = {}, GlobalNamespace::AudioManagerSO* audioManager_ = {}, GlobalNamespace::AutomaticSFXVolume::InitData* initData_ = {}, float sampleRate_ = {}, float volume_ = {}, float envelope_ = {}, float attackSamples_ = {}, float releaseSamples_ = {}, float attackCoef_ = {}, float releaseCoef_ = {}) noexcept : params{params_}, audioManager{audioManager_}, initData{initData_}, sampleRate{sampleRate_}, volume{volume_}, envelope{envelope_}, attackSamples{attackSamples_}, releaseSamples{releaseSamples_}, attackCoef{attackCoef_}, releaseCoef{releaseCoef_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kBaseVolume
    static constexpr const float kBaseVolume = 0.4;
    // Get static field: static private System.Single kBaseVolume
    static float _get_kBaseVolume();
    // Set static field: static private System.Single kBaseVolume
    static void _set_kBaseVolume(float value);
    // protected System.Void Start()
    // Offset: 0x1A42F5C
    void Start();
    // protected System.Void OnDisable()
    // Offset: 0x1A4303C
    void OnDisable();
    // protected System.Void OnValidate()
    // Offset: 0x1A430D0
    void OnValidate();
    // private System.Void RecalculateParams()
    // Offset: 0x1A42F60
    void RecalculateParams();
    // protected System.Void OnAudioFilterRead(System.Single[] data, System.Int32 channels)
    // Offset: 0x1A430D4
    void OnAudioFilterRead(::Array<float>* data, int channels);
    // protected System.Void Update()
    // Offset: 0x1A432E4
    void Update();
    // public System.Void .ctor()
    // Offset: 0x1A43334
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AutomaticSFXVolume* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AutomaticSFXVolume::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AutomaticSFXVolume*, creationType>()));
    }
  }; // AutomaticSFXVolume
  static check_size<sizeof(AutomaticSFXVolume), 72 + sizeof(float)> __GlobalNamespace_AutomaticSFXVolumeSizeCheck;
  static_assert(sizeof(AutomaticSFXVolume) == 0x4C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AutomaticSFXVolume*, "", "AutomaticSFXVolume");
#pragma pack(pop)
