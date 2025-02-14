// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OVRHapticsClip
  class OVRHapticsClip : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDCFCE0
    // private System.Int32 <Count>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int Count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDCFCF0
    // private System.Int32 <Capacity>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    int Capacity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDCFD00
    // private System.Byte[] <Samples>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* Samples;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: OVRHapticsClip
    OVRHapticsClip(int Count_ = {}, int Capacity_ = {}, ::Array<uint8_t>* Samples_ = {}) noexcept : Count{Count_}, Capacity{Capacity_}, Samples{Samples_} {}
    // public System.Int32 get_Count()
    // Offset: 0x14F9330
    int get_Count();
    // private System.Void set_Count(System.Int32 value)
    // Offset: 0x14F9338
    void set_Count(int value);
    // public System.Int32 get_Capacity()
    // Offset: 0x14F9340
    int get_Capacity();
    // private System.Void set_Capacity(System.Int32 value)
    // Offset: 0x14F9348
    void set_Capacity(int value);
    // public System.Byte[] get_Samples()
    // Offset: 0x14F9350
    ::Array<uint8_t>* get_Samples();
    // private System.Void set_Samples(System.Byte[] value)
    // Offset: 0x14F9358
    void set_Samples(::Array<uint8_t>* value);
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0x14F90C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRHapticsClip* New_ctor(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRHapticsClip::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRHapticsClip*, creationType>(capacity)));
    }
    // public System.Void .ctor(System.Byte[] samples, System.Int32 samplesCount)
    // Offset: 0x14F9360
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRHapticsClip* New_ctor(::Array<uint8_t>* samples, int samplesCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRHapticsClip::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRHapticsClip*, creationType>(samples, samplesCount)));
    }
    // public System.Void .ctor(OVRHapticsClip a, OVRHapticsClip b)
    // Offset: 0x14F9448
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRHapticsClip* New_ctor(GlobalNamespace::OVRHapticsClip* a, GlobalNamespace::OVRHapticsClip* b) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRHapticsClip::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRHapticsClip*, creationType>(a, b)));
    }
    // public System.Void .ctor(UnityEngine.AudioClip audioClip, System.Int32 channel)
    // Offset: 0x14F96B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRHapticsClip* New_ctor(UnityEngine::AudioClip* audioClip, int channel) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRHapticsClip::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRHapticsClip*, creationType>(audioClip, channel)));
    }
    // public System.Void WriteSample(System.Byte sample)
    // Offset: 0x14F91A8
    void WriteSample(uint8_t sample);
    // public System.Void Reset()
    // Offset: 0x14F9A58
    void Reset();
    // private System.Void InitializeFromAudioFloatTrack(System.Single[] sourceData, System.Double sourceFrequency, System.Int32 sourceChannelCount, System.Int32 sourceChannel)
    // Offset: 0x14F97A0
    void InitializeFromAudioFloatTrack(::Array<float>* sourceData, double sourceFrequency, int sourceChannelCount, int sourceChannel);
    // public System.Void .ctor()
    // Offset: 0x14F8F74
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRHapticsClip* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRHapticsClip::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRHapticsClip*, creationType>()));
    }
  }; // OVRHapticsClip
  #pragma pack(pop)
  static check_size<sizeof(OVRHapticsClip), 24 + sizeof(::Array<uint8_t>*)> __GlobalNamespace_OVRHapticsClipSizeCheck;
  static_assert(sizeof(OVRHapticsClip) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRHapticsClip*, "", "OVRHapticsClip");
