// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableOutputHandle
  struct PlayableOutputHandle;
}
// Completed forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Playables.IPlayableOutput
  class IPlayableOutput {
    public:
    // Creating value type constructor for type: IPlayableOutput
    IPlayableOutput() noexcept {}
    // public UnityEngine.Playables.PlayableOutputHandle GetHandle()
    // Offset: 0xFFFFFFFF
    UnityEngine::Playables::PlayableOutputHandle GetHandle();
  }; // UnityEngine.Playables.IPlayableOutput
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::IPlayableOutput*, "UnityEngine.Playables", "IPlayableOutput");
