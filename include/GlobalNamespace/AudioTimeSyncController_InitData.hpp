// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AudioTimeSyncController
#include "GlobalNamespace/AudioTimeSyncController.hpp"
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
  // Autogenerated type: AudioTimeSyncController/InitData
  class AudioTimeSyncController::InitData : public ::Il2CppObject {
    public:
    // public readonly UnityEngine.AudioClip audioClip
    // Offset: 0x10
    UnityEngine::AudioClip* audioClip;
    // public readonly System.Single startSongTime
    // Offset: 0x18
    float startSongTime;
    // public readonly System.Single songTimeOffset
    // Offset: 0x1C
    float songTimeOffset;
    // public readonly System.Single timeScale
    // Offset: 0x20
    float timeScale;
    // public System.Void .ctor(UnityEngine.AudioClip audioClip, System.Single startSongTime, System.Single songTimeOffset, System.Single timeScale)
    // Offset: 0x18F1C68
    static AudioTimeSyncController::InitData* New_ctor(UnityEngine::AudioClip* audioClip, float startSongTime, float songTimeOffset, float timeScale);
  }; // AudioTimeSyncController/InitData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AudioTimeSyncController::InitData*, "", "AudioTimeSyncController/InitData");
#pragma pack(pop)
