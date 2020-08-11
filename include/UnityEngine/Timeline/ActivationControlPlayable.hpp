// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: ScriptPlayable`1<T>
  template<typename T>
  struct ScriptPlayable_1;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: FrameData
  struct FrameData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Skipping declaration: PostPlaybackState because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.ActivationControlPlayable
  class ActivationControlPlayable : public UnityEngine::Playables::PlayableBehaviour {
    public:
    // Nested type: UnityEngine::Timeline::ActivationControlPlayable::PostPlaybackState
    struct PostPlaybackState;
    // Nested type: UnityEngine::Timeline::ActivationControlPlayable::InitialState
    struct InitialState;
    // Autogenerated type: UnityEngine.Timeline.ActivationControlPlayable/PostPlaybackState
    struct PostPlaybackState : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public UnityEngine.Timeline.ActivationControlPlayable/PostPlaybackState Active
      static constexpr const int Active = 0;
      // Get static field: static public UnityEngine.Timeline.ActivationControlPlayable/PostPlaybackState Active
      static UnityEngine::Timeline::ActivationControlPlayable::PostPlaybackState _get_Active();
      // Set static field: static public UnityEngine.Timeline.ActivationControlPlayable/PostPlaybackState Active
      static void _set_Active(UnityEngine::Timeline::ActivationControlPlayable::PostPlaybackState value);
      // static field const value: static public UnityEngine.Timeline.ActivationControlPlayable/PostPlaybackState Inactive
      static constexpr const int Inactive = 1;
      // Get static field: static public UnityEngine.Timeline.ActivationControlPlayable/PostPlaybackState Inactive
      static UnityEngine::Timeline::ActivationControlPlayable::PostPlaybackState _get_Inactive();
      // Set static field: static public UnityEngine.Timeline.ActivationControlPlayable/PostPlaybackState Inactive
      static void _set_Inactive(UnityEngine::Timeline::ActivationControlPlayable::PostPlaybackState value);
      // static field const value: static public UnityEngine.Timeline.ActivationControlPlayable/PostPlaybackState Revert
      static constexpr const int Revert = 2;
      // Get static field: static public UnityEngine.Timeline.ActivationControlPlayable/PostPlaybackState Revert
      static UnityEngine::Timeline::ActivationControlPlayable::PostPlaybackState _get_Revert();
      // Set static field: static public UnityEngine.Timeline.ActivationControlPlayable/PostPlaybackState Revert
      static void _set_Revert(UnityEngine::Timeline::ActivationControlPlayable::PostPlaybackState value);
      // Creating value type constructor for type: PostPlaybackState
      PostPlaybackState(int value_ = {}) : value{value_} {}
    }; // UnityEngine.Timeline.ActivationControlPlayable/PostPlaybackState
    // Autogenerated type: UnityEngine.Timeline.ActivationControlPlayable/InitialState
    struct InitialState : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public UnityEngine.Timeline.ActivationControlPlayable/InitialState Unset
      static constexpr const int Unset = 0;
      // Get static field: static public UnityEngine.Timeline.ActivationControlPlayable/InitialState Unset
      static UnityEngine::Timeline::ActivationControlPlayable::InitialState _get_Unset();
      // Set static field: static public UnityEngine.Timeline.ActivationControlPlayable/InitialState Unset
      static void _set_Unset(UnityEngine::Timeline::ActivationControlPlayable::InitialState value);
      // static field const value: static public UnityEngine.Timeline.ActivationControlPlayable/InitialState Active
      static constexpr const int Active = 1;
      // Get static field: static public UnityEngine.Timeline.ActivationControlPlayable/InitialState Active
      static UnityEngine::Timeline::ActivationControlPlayable::InitialState _get_Active();
      // Set static field: static public UnityEngine.Timeline.ActivationControlPlayable/InitialState Active
      static void _set_Active(UnityEngine::Timeline::ActivationControlPlayable::InitialState value);
      // static field const value: static public UnityEngine.Timeline.ActivationControlPlayable/InitialState Inactive
      static constexpr const int Inactive = 2;
      // Get static field: static public UnityEngine.Timeline.ActivationControlPlayable/InitialState Inactive
      static UnityEngine::Timeline::ActivationControlPlayable::InitialState _get_Inactive();
      // Set static field: static public UnityEngine.Timeline.ActivationControlPlayable/InitialState Inactive
      static void _set_Inactive(UnityEngine::Timeline::ActivationControlPlayable::InitialState value);
      // Creating value type constructor for type: InitialState
      InitialState(int value_ = {}) : value{value_} {}
    }; // UnityEngine.Timeline.ActivationControlPlayable/InitialState
    // public UnityEngine.GameObject gameObject
    // Offset: 0x10
    UnityEngine::GameObject* gameObject;
    // public UnityEngine.Timeline.ActivationControlPlayable/PostPlaybackState postPlayback
    // Offset: 0x18
    UnityEngine::Timeline::ActivationControlPlayable::PostPlaybackState postPlayback;
    // private UnityEngine.Timeline.ActivationControlPlayable/InitialState m_InitialState
    // Offset: 0x1C
    UnityEngine::Timeline::ActivationControlPlayable::InitialState m_InitialState;
    // static public UnityEngine.Playables.ScriptPlayable`1<UnityEngine.Timeline.ActivationControlPlayable> Create(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject gameObject, UnityEngine.Timeline.ActivationControlPlayable/PostPlaybackState postPlaybackState)
    // Offset: 0x1078E38
    static UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::ActivationControlPlayable*> Create(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* gameObject, UnityEngine::Timeline::ActivationControlPlayable::PostPlaybackState postPlaybackState);
    // public override System.Void OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x1078F7C
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPlay(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public override System.Void OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x1079014
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPause(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public override System.Void ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object userData)
    // Offset: 0x10790CC
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object userData)
    void ProcessFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info, ::CsObject* userData);
    // public override System.Void OnGraphStart(UnityEngine.Playables.Playable playable)
    // Offset: 0x1079164
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnGraphStart(UnityEngine.Playables.Playable playable)
    void OnGraphStart(UnityEngine::Playables::Playable playable);
    // public override System.Void OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    // Offset: 0x1079208
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    void OnPlayableDestroy(UnityEngine::Playables::Playable playable);
    // public System.Void .ctor()
    // Offset: 0x10792E4
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::.ctor()
    // Base method: System.Void Object::.ctor()
    static ActivationControlPlayable* New_ctor();
  }; // UnityEngine.Timeline.ActivationControlPlayable
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::ActivationControlPlayable*, "UnityEngine.Timeline", "ActivationControlPlayable");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::ActivationControlPlayable::PostPlaybackState, "UnityEngine.Timeline", "ActivationControlPlayable/PostPlaybackState");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::ActivationControlPlayable::InitialState, "UnityEngine.Timeline", "ActivationControlPlayable/InitialState");
#pragma pack(pop)
