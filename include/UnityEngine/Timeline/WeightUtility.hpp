// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.WeightUtility
  class WeightUtility : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: WeightUtility
    WeightUtility() noexcept {}
    // static public System.Single NormalizeMixer(UnityEngine.Playables.Playable mixer)
    // Offset: 0x2329A98
    static float NormalizeMixer(UnityEngine::Playables::Playable mixer);
  }; // UnityEngine.Timeline.WeightUtility
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::WeightUtility*, "UnityEngine.Timeline", "WeightUtility");
