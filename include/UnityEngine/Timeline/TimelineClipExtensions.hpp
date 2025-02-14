// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TimelineClip
  class TimelineClip;
  // Forward declaring type: TrackAsset
  class TrackAsset;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TimelineClipExtensions
  // [ExtensionAttribute] Offset: FFFFFFFF
  class TimelineClipExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: TimelineClipExtensions
    TimelineClipExtensions() noexcept {}
    // Get static field: static private readonly System.String k_UndoSetParentTrackText
    static ::Il2CppString* _get_k_UndoSetParentTrackText();
    // Set static field: static private readonly System.String k_UndoSetParentTrackText
    static void _set_k_UndoSetParentTrackText(::Il2CppString* value);
    // static public System.Void MoveToTrack(UnityEngine.Timeline.TimelineClip clip, UnityEngine.Timeline.TrackAsset destinationTrack)
    // Offset: 0x231FF04
    static void MoveToTrack(UnityEngine::Timeline::TimelineClip* clip, UnityEngine::Timeline::TrackAsset* destinationTrack);
    // static public System.Boolean TryMoveToTrack(UnityEngine.Timeline.TimelineClip clip, UnityEngine.Timeline.TrackAsset destinationTrack)
    // Offset: 0x2320618
    static bool TryMoveToTrack(UnityEngine::Timeline::TimelineClip* clip, UnityEngine::Timeline::TrackAsset* destinationTrack);
    // static private System.Void MoveToTrack_Impl(UnityEngine.Timeline.TimelineClip clip, UnityEngine.Timeline.TrackAsset destinationTrack, UnityEngine.Object asset, UnityEngine.Timeline.TrackAsset parentTrack)
    // Offset: 0x23204EC
    static void MoveToTrack_Impl(UnityEngine::Timeline::TimelineClip* clip, UnityEngine::Timeline::TrackAsset* destinationTrack, UnityEngine::Object* asset, UnityEngine::Timeline::TrackAsset* parentTrack);
    // static private System.Void .cctor()
    // Offset: 0x2320AEC
    static void _cctor();
  }; // UnityEngine.Timeline.TimelineClipExtensions
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimelineClipExtensions*, "UnityEngine.Timeline", "TimelineClipExtensions");
