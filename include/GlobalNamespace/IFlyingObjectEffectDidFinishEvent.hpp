// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FlyingObjectEffect
  class FlyingObjectEffect;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IFlyingObjectEffectDidFinishEvent
  class IFlyingObjectEffectDidFinishEvent {
    public:
    // Creating value type constructor for type: IFlyingObjectEffectDidFinishEvent
    IFlyingObjectEffectDidFinishEvent() noexcept {}
    // public System.Void HandleFlyingObjectEffectDidFinish(FlyingObjectEffect flyingObjectEffect)
    // Offset: 0xFFFFFFFF
    void HandleFlyingObjectEffectDidFinish(GlobalNamespace::FlyingObjectEffect* flyingObjectEffect);
  }; // IFlyingObjectEffectDidFinishEvent
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IFlyingObjectEffectDidFinishEvent*, "", "IFlyingObjectEffectDidFinishEvent");
