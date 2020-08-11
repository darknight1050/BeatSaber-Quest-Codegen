// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Playables.IPlayable
#include "UnityEngine/Playables/IPlayable.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Playables.PlayableHandle
#include "UnityEngine/Playables/PlayableHandle.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: Playable
  struct Playable;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Autogenerated type: UnityEngine.Animations.AnimationMixerPlayable
  struct AnimationMixerPlayable : public System::ValueType, public UnityEngine::Playables::IPlayable, public System::IEquatable_1<UnityEngine::Animations::AnimationMixerPlayable> {
    public:
    // private UnityEngine.Playables.PlayableHandle m_Handle
    // Offset: 0x0
    UnityEngine::Playables::PlayableHandle m_Handle;
    // Get static field: static private readonly UnityEngine.Animations.AnimationMixerPlayable m_NullPlayable
    static UnityEngine::Animations::AnimationMixerPlayable _get_m_NullPlayable();
    // Set static field: static private readonly UnityEngine.Animations.AnimationMixerPlayable m_NullPlayable
    static void _set_m_NullPlayable(UnityEngine::Animations::AnimationMixerPlayable value);
    // Creating value type constructor for type: AnimationMixerPlayable
    AnimationMixerPlayable(UnityEngine::Playables::PlayableHandle m_Handle_ = {}) : m_Handle{m_Handle_} {}
    // static public UnityEngine.Animations.AnimationMixerPlayable Create(UnityEngine.Playables.PlayableGraph graph, System.Int32 inputCount, System.Boolean normalizeWeights)
    // Offset: 0x1923B48
    static UnityEngine::Animations::AnimationMixerPlayable Create(UnityEngine::Playables::PlayableGraph graph, int inputCount, bool normalizeWeights);
    // static private UnityEngine.Playables.PlayableHandle CreateHandle(UnityEngine.Playables.PlayableGraph graph, System.Int32 inputCount, System.Boolean normalizeWeights)
    // Offset: 0x1923C00
    static UnityEngine::Playables::PlayableHandle CreateHandle(UnityEngine::Playables::PlayableGraph graph, int inputCount, bool normalizeWeights);
    // System.Void .ctor(UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0xA59FA0
    static AnimationMixerPlayable* New_ctor(UnityEngine::Playables::PlayableHandle handle);
    // static private System.Boolean CreateHandleInternal(UnityEngine.Playables.PlayableGraph graph, System.Boolean normalizeWeights, UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x1923DC0
    static bool CreateHandleInternal(UnityEngine::Playables::PlayableGraph graph, bool normalizeWeights, UnityEngine::Playables::PlayableHandle& handle);
    // static private System.Void .cctor()
    // Offset: 0x1923F8C
    static void _cctor();
    // static private System.Boolean CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph graph, System.Boolean normalizeWeights, UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x1923F34
    static bool CreateHandleInternal_Injected(UnityEngine::Playables::PlayableGraph& graph, bool normalizeWeights, UnityEngine::Playables::PlayableHandle& handle);
    // public UnityEngine.Playables.PlayableHandle GetHandle()
    // Offset: 0xA59FA8
    // Implemented from: UnityEngine.Playables.IPlayable
    // Base method: UnityEngine.Playables.PlayableHandle IPlayable::GetHandle()
    UnityEngine::Playables::PlayableHandle GetHandle();
    // public System.Boolean Equals(UnityEngine.Animations.AnimationMixerPlayable other)
    // Offset: 0xA59FB4
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(UnityEngine.Animations.AnimationMixerPlayable other)
    bool Equals(UnityEngine::Animations::AnimationMixerPlayable other);
  }; // UnityEngine.Animations.AnimationMixerPlayable
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Animations::AnimationMixerPlayable, "UnityEngine.Animations", "AnimationMixerPlayable");
#pragma pack(pop)
