// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteCutSoundEffect
  class NoteCutSoundEffect;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: INoteCutSoundEffectDidFinishEvent
  // [] Offset: FFFFFFFF
  class INoteCutSoundEffectDidFinishEvent {
    public:
    // Creating value type constructor for type: INoteCutSoundEffectDidFinishEvent
    INoteCutSoundEffectDidFinishEvent() noexcept {}
    // public System.Void HandleNoteCutSoundEffectDidFinish(NoteCutSoundEffect noteCutSoundEffect)
    // Offset: 0xFFFFFFFF
    void HandleNoteCutSoundEffectDidFinish_NEW(GlobalNamespace::NoteCutSoundEffect* noteCutSoundEffect);
  }; // INoteCutSoundEffectDidFinishEvent
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::INoteCutSoundEffectDidFinishEvent*, "", "INoteCutSoundEffectDidFinishEvent");
