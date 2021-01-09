// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.TrackAsset
#include "UnityEngine/Timeline/TrackAsset.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: ActivationMixerPlayable
  class ActivationMixerPlayable;
  // Skipping declaration: PostPlaybackState because it is already included!
  // Forward declaring type: IPropertyCollector
  class IPropertyCollector;
  // Forward declaring type: TimelineClip
  class TimelineClip;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Skipping declaration: Playable because it is already included!
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Timeline.ActivationTrack
  // [] Offset: FFFFFFFF
  // [TrackClipTypeAttribute] Offset: D8CB60
  // [TrackBindingTypeAttribute] Offset: D8CB60
  // [ExcludeFromPresetAttribute] Offset: D8CB60
  class ActivationTrack : public UnityEngine::Timeline::TrackAsset {
    public:
    // Nested type: UnityEngine::Timeline::ActivationTrack::PostPlaybackState
    struct PostPlaybackState;
    // Size: 0x4
    // Autogenerated type: UnityEngine.Timeline.ActivationTrack/PostPlaybackState
    // [] Offset: FFFFFFFF
    struct PostPlaybackState/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: PostPlaybackState
      constexpr PostPlaybackState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.Timeline.ActivationTrack/PostPlaybackState Active
      static constexpr const int Active = 0;
      // Get static field: static public UnityEngine.Timeline.ActivationTrack/PostPlaybackState Active
      static UnityEngine::Timeline::ActivationTrack::PostPlaybackState _get_Active();
      // Set static field: static public UnityEngine.Timeline.ActivationTrack/PostPlaybackState Active
      static void _set_Active(UnityEngine::Timeline::ActivationTrack::PostPlaybackState value);
      // static field const value: static public UnityEngine.Timeline.ActivationTrack/PostPlaybackState Inactive
      static constexpr const int Inactive = 1;
      // Get static field: static public UnityEngine.Timeline.ActivationTrack/PostPlaybackState Inactive
      static UnityEngine::Timeline::ActivationTrack::PostPlaybackState _get_Inactive();
      // Set static field: static public UnityEngine.Timeline.ActivationTrack/PostPlaybackState Inactive
      static void _set_Inactive(UnityEngine::Timeline::ActivationTrack::PostPlaybackState value);
      // static field const value: static public UnityEngine.Timeline.ActivationTrack/PostPlaybackState Revert
      static constexpr const int Revert = 2;
      // Get static field: static public UnityEngine.Timeline.ActivationTrack/PostPlaybackState Revert
      static UnityEngine::Timeline::ActivationTrack::PostPlaybackState _get_Revert();
      // Set static field: static public UnityEngine.Timeline.ActivationTrack/PostPlaybackState Revert
      static void _set_Revert(UnityEngine::Timeline::ActivationTrack::PostPlaybackState value);
      // static field const value: static public UnityEngine.Timeline.ActivationTrack/PostPlaybackState LeaveAsIs
      static constexpr const int LeaveAsIs = 3;
      // Get static field: static public UnityEngine.Timeline.ActivationTrack/PostPlaybackState LeaveAsIs
      static UnityEngine::Timeline::ActivationTrack::PostPlaybackState _get_LeaveAsIs();
      // Set static field: static public UnityEngine.Timeline.ActivationTrack/PostPlaybackState LeaveAsIs
      static void _set_LeaveAsIs(UnityEngine::Timeline::ActivationTrack::PostPlaybackState value);
    }; // UnityEngine.Timeline.ActivationTrack/PostPlaybackState
    static check_size<sizeof(ActivationTrack::PostPlaybackState), 0 + sizeof(int)> __UnityEngine_Timeline_ActivationTrack_PostPlaybackStateSizeCheck;
    static_assert(sizeof(ActivationTrack::PostPlaybackState) == 0x4);
    // private UnityEngine.Timeline.ActivationTrack/PostPlaybackState m_PostPlaybackState
    // Size: 0x4
    // Offset: 0xA0
    UnityEngine::Timeline::ActivationTrack::PostPlaybackState m_PostPlaybackState;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::ActivationTrack::PostPlaybackState) == 0x4);
    // private UnityEngine.Timeline.ActivationMixerPlayable m_ActivationMixer
    // Size: 0x8
    // Offset: 0xA8
    UnityEngine::Timeline::ActivationMixerPlayable* m_ActivationMixer;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::ActivationMixerPlayable*) == 0x8);
    // Creating value type constructor for type: ActivationTrack
    ActivationTrack(UnityEngine::Timeline::ActivationTrack::PostPlaybackState m_PostPlaybackState_ = {}, UnityEngine::Timeline::ActivationMixerPlayable* m_ActivationMixer_ = {}) noexcept : m_PostPlaybackState{m_PostPlaybackState_}, m_ActivationMixer{m_ActivationMixer_} {}
    // public UnityEngine.Timeline.ActivationTrack/PostPlaybackState get_postPlaybackState()
    // Offset: 0x14100E0
    UnityEngine::Timeline::ActivationTrack::PostPlaybackState get_postPlaybackState();
    // public System.Void set_postPlaybackState(UnityEngine.Timeline.ActivationTrack/PostPlaybackState value)
    // Offset: 0x14100E8
    void set_postPlaybackState(UnityEngine::Timeline::ActivationTrack::PostPlaybackState value);
    // System.Void UpdateTrackMode()
    // Offset: 0x14100FC
    void UpdateTrackMode();
    // override System.Boolean CanCompileClips()
    // Offset: 0x14100A0
    // Implemented from: UnityEngine.Timeline.TrackAsset
    // Base method: System.Boolean TrackAsset::CanCompileClips()
    bool CanCompileClips();
    // public override UnityEngine.Playables.Playable CreateTrackMixer(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go, System.Int32 inputCount)
    // Offset: 0x1410110
    // Implemented from: UnityEngine.Timeline.TrackAsset
    // Base method: UnityEngine.Playables.Playable TrackAsset::CreateTrackMixer(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go, System.Int32 inputCount)
    UnityEngine::Playables::Playable CreateTrackMixer(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* go, int inputCount);
    // public override System.Void GatherProperties(UnityEngine.Playables.PlayableDirector director, UnityEngine.Timeline.IPropertyCollector driver)
    // Offset: 0x1410200
    // Implemented from: UnityEngine.Timeline.TrackAsset
    // Base method: System.Void TrackAsset::GatherProperties(UnityEngine.Playables.PlayableDirector director, UnityEngine.Timeline.IPropertyCollector driver)
    void GatherProperties(UnityEngine::Playables::PlayableDirector* director, UnityEngine::Timeline::IPropertyCollector* driver);
    // protected override System.Void OnCreateClip(UnityEngine.Timeline.TimelineClip clip)
    // Offset: 0x1410330
    // Implemented from: UnityEngine.Timeline.TrackAsset
    // Base method: System.Void TrackAsset::OnCreateClip(UnityEngine.Timeline.TimelineClip clip)
    void OnCreateClip(UnityEngine::Timeline::TimelineClip* clip);
    // public System.Void .ctor()
    // Offset: 0x14103A8
    // Implemented from: UnityEngine.Timeline.TrackAsset
    // Base method: System.Void TrackAsset::.ctor()
    // Base method: System.Void PlayableAsset::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ActivationTrack* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::ActivationTrack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ActivationTrack*, creationType>()));
    }
  }; // UnityEngine.Timeline.ActivationTrack
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::ActivationTrack*, "UnityEngine.Timeline", "ActivationTrack");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::ActivationTrack::PostPlaybackState, "UnityEngine.Timeline", "ActivationTrack/PostPlaybackState");
