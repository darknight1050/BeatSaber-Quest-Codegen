// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerLocalPlayerOutroAudio
#include "GlobalNamespace/MultiplayerLocalPlayerOutroAudio.hpp"
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
  // Autogenerated type: MultiplayerLocalPlayerOutroAudio/InitData
  // [] Offset: FFFFFFFF
  class MultiplayerLocalPlayerOutroAudio::InitData : public ::Il2CppObject {
    public:
    // public readonly UnityEngine.AudioClip audioClip
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::AudioClip* audioClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioClip*) == 0x8);
    // public readonly System.Single previewStartTime
    // Size: 0x4
    // Offset: 0x18
    float previewStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single previewDuration
    // Size: 0x4
    // Offset: 0x1C
    float previewDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: InitData
    InitData(UnityEngine::AudioClip* audioClip_ = {}, float previewStartTime_ = {}, float previewDuration_ = {}) noexcept : audioClip{audioClip_}, previewStartTime{previewStartTime_}, previewDuration{previewDuration_} {}
    // public System.Void .ctor(UnityEngine.AudioClip audioClip, System.Single previewStartTime, System.Single previewDuration)
    // Offset: 0xF4ED40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalPlayerOutroAudio::InitData* New_ctor(UnityEngine::AudioClip* audioClip, float previewStartTime, float previewDuration) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLocalPlayerOutroAudio::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalPlayerOutroAudio::InitData*, creationType>(audioClip, previewStartTime, previewDuration)));
    }
  }; // MultiplayerLocalPlayerOutroAudio/InitData
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalPlayerOutroAudio::InitData), 28 + sizeof(float)> __GlobalNamespace_MultiplayerLocalPlayerOutroAudio_InitDataSizeCheck;
  static_assert(sizeof(MultiplayerLocalPlayerOutroAudio::InitData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalPlayerOutroAudio::InitData*, "", "MultiplayerLocalPlayerOutroAudio/InitData");
