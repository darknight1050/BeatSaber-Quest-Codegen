// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatEffect
  class BeatEffect;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IBeatEffectDidFinishEvent
  // [] Offset: FFFFFFFF
  class IBeatEffectDidFinishEvent {
    public:
    // Creating value type constructor for type: IBeatEffectDidFinishEvent
    IBeatEffectDidFinishEvent() noexcept {}
    // public System.Void HandleBeatEffectDidFinish(BeatEffect beatEffect)
    // Offset: 0xFFFFFFFF
    void HandleBeatEffectDidFinish_NEW(GlobalNamespace::BeatEffect* beatEffect);
  }; // IBeatEffectDidFinishEvent
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IBeatEffectDidFinishEvent*, "", "IBeatEffectDidFinishEvent");
