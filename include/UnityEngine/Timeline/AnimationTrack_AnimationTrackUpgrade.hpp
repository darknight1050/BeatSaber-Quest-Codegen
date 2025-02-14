// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.AnimationTrack
#include "UnityEngine/Timeline/AnimationTrack.hpp"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.AnimationTrack/AnimationTrackUpgrade
  class AnimationTrack::AnimationTrackUpgrade : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: AnimationTrackUpgrade
    AnimationTrackUpgrade() noexcept {}
    // static public System.Void ConvertRotationsToEuler(UnityEngine.Timeline.AnimationTrack track)
    // Offset: 0x17C22D4
    static void ConvertRotationsToEuler(UnityEngine::Timeline::AnimationTrack* track);
    // static public System.Void ConvertRootMotion(UnityEngine.Timeline.AnimationTrack track)
    // Offset: 0x17C2320
    static void ConvertRootMotion(UnityEngine::Timeline::AnimationTrack* track);
    // static public System.Void ConvertInfiniteTrack(UnityEngine.Timeline.AnimationTrack track)
    // Offset: 0x17C23B8
    static void ConvertInfiniteTrack(UnityEngine::Timeline::AnimationTrack* track);
  }; // UnityEngine.Timeline.AnimationTrack/AnimationTrackUpgrade
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::AnimationTrack::AnimationTrackUpgrade*, "UnityEngine.Timeline", "AnimationTrack/AnimationTrackUpgrade");
