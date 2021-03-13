// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: AutomaticSFXVolumeParamsSO
  // [] Offset: FFFFFFFF
  class AutomaticSFXVolumeParamsSO : public UnityEngine::ScriptableObject {
    public:
    // private System.Single _musicVolumeMultiplier
    // Size: 0x4
    // Offset: 0x18
    float musicVolumeMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _threshold
    // Size: 0x4
    // Offset: 0x1C
    float threshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _impact
    // Size: 0x4
    // Offset: 0x20
    float impact;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _attackTime
    // Size: 0x4
    // Offset: 0x24
    float attackTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _releaseTime
    // Size: 0x4
    // Offset: 0x28
    float releaseTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _minVolume
    // Size: 0x4
    // Offset: 0x2C
    float minVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxVolume
    // Size: 0x4
    // Offset: 0x30
    float maxVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _volumeSmooth
    // Size: 0x4
    // Offset: 0x34
    float volumeSmooth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: AutomaticSFXVolumeParamsSO
    AutomaticSFXVolumeParamsSO(float musicVolumeMultiplier_ = {}, float threshold_ = {}, float impact_ = {}, float attackTime_ = {}, float releaseTime_ = {}, float minVolume_ = {}, float maxVolume_ = {}, float volumeSmooth_ = {}) noexcept : musicVolumeMultiplier{musicVolumeMultiplier_}, threshold{threshold_}, impact{impact_}, attackTime{attackTime_}, releaseTime{releaseTime_}, minVolume{minVolume_}, maxVolume{maxVolume_}, volumeSmooth{volumeSmooth_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Single get_musicVolumeMultiplier()
    // Offset: 0x10009AC
    float get_musicVolumeMultiplier();
    // public System.Single get_threshold()
    // Offset: 0x10009B4
    float get_threshold();
    // public System.Single get_impact()
    // Offset: 0x10009BC
    float get_impact();
    // public System.Single get_attackTime()
    // Offset: 0x10009C4
    float get_attackTime();
    // public System.Single get_releaseTime()
    // Offset: 0x10009CC
    float get_releaseTime();
    // public System.Single get_minVolume()
    // Offset: 0x10009D4
    float get_minVolume();
    // public System.Single get_maxVolume()
    // Offset: 0x10009DC
    float get_maxVolume();
    // public System.Single get_volumeSmooth()
    // Offset: 0x10009E4
    float get_volumeSmooth();
    // public System.Void .ctor()
    // Offset: 0x10009EC
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AutomaticSFXVolumeParamsSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AutomaticSFXVolumeParamsSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AutomaticSFXVolumeParamsSO*, creationType>()));
    }
  }; // AutomaticSFXVolumeParamsSO
  #pragma pack(pop)
  static check_size<sizeof(AutomaticSFXVolumeParamsSO), 52 + sizeof(float)> __GlobalNamespace_AutomaticSFXVolumeParamsSOSizeCheck;
  static_assert(sizeof(AutomaticSFXVolumeParamsSO) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AutomaticSFXVolumeParamsSO*, "", "AutomaticSFXVolumeParamsSO");
