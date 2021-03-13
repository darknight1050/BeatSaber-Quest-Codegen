// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: EaseType
  struct EaseType;
}
// Completed forward declares
// Type namespace: Tweening
namespace Tweening {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Tweening.Interpolation
  // [] Offset: FFFFFFFF
  class Interpolation : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Interpolation
    Interpolation() noexcept {}
    // static public System.Single Interpolate(System.Single t, Tweening.EaseType easeType)
    // Offset: 0x107E838
    static float Interpolate(float t, Tweening::EaseType easeType);
  }; // Tweening.Interpolation
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Tweening::Interpolation*, "Tweening", "Interpolation");
