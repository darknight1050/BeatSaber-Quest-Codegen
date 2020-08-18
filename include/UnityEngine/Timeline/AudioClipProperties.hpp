// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.AudioClipProperties
  class AudioClipProperties : public UnityEngine::Playables::PlayableBehaviour {
    public:
    // public System.Single volume
    // Offset: 0x10
    float volume;
    // public System.Void .ctor()
    // Offset: 0xFF079C
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::.ctor()
    // Base method: System.Void Object::.ctor()
    static AudioClipProperties* New_ctor();
  }; // UnityEngine.Timeline.AudioClipProperties
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::AudioClipProperties*, "UnityEngine.Timeline", "AudioClipProperties");
#pragma pack(pop)
