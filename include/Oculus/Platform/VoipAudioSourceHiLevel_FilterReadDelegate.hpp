// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.VoipAudioSourceHiLevel
#include "Oculus/Platform/VoipAudioSourceHiLevel.hpp"
// Completed includes
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate
  class VoipAudioSourceHiLevel::FilterReadDelegate : public UnityEngine::MonoBehaviour {
    public:
    // public Oculus.Platform.VoipAudioSourceHiLevel parent
    // Offset: 0x18
    Oculus::Platform::VoipAudioSourceHiLevel* parent;
    // private System.Single[] scratchBuffer
    // Offset: 0x20
    ::Array<float>* scratchBuffer;
    // private System.Void Awake()
    // Offset: 0x18BFA38
    void Awake();
    // private System.Void OnAudioFilterRead(System.Single[] data, System.Int32 channels)
    // Offset: 0x18BFAF8
    void OnAudioFilterRead(::Array<float>* data, int channels);
    // public System.Void .ctor()
    // Offset: 0x18BFFF0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static VoipAudioSourceHiLevel::FilterReadDelegate* New_ctor();
  }; // Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::VoipAudioSourceHiLevel::FilterReadDelegate*, "Oculus.Platform", "VoipAudioSourceHiLevel/FilterReadDelegate");
#pragma pack(pop)
