// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.Playables.IPlayable
#include "UnityEngine/Playables/IPlayable.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
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
  // Autogenerated type: UnityEngine.Animations.AnimationMotionXToDeltaPlayable
  struct AnimationMotionXToDeltaPlayable : public UnityEngine::Playables::IPlayable, public System::IEquatable_1<UnityEngine::Animations::AnimationMotionXToDeltaPlayable>, public System::ValueType {
    public:
    // private UnityEngine.Playables.PlayableHandle m_Handle
    // Offset: 0x0
    UnityEngine::Playables::PlayableHandle m_Handle;
    // Get static field: static private readonly UnityEngine.Animations.AnimationMotionXToDeltaPlayable m_NullPlayable
    static UnityEngine::Animations::AnimationMotionXToDeltaPlayable _get_m_NullPlayable();
    // Set static field: static private readonly UnityEngine.Animations.AnimationMotionXToDeltaPlayable m_NullPlayable
    static void _set_m_NullPlayable(UnityEngine::Animations::AnimationMotionXToDeltaPlayable value);
    // Creating value type constructor for type: AnimationMotionXToDeltaPlayable
    AnimationMotionXToDeltaPlayable(UnityEngine::Playables::PlayableHandle m_Handle_ = {}) : m_Handle{m_Handle_} {}
    // static public UnityEngine.Animations.AnimationMotionXToDeltaPlayable Create(UnityEngine.Playables.PlayableGraph graph)
    // Offset: 0x1892DBC
    static UnityEngine::Animations::AnimationMotionXToDeltaPlayable Create(UnityEngine::Playables::PlayableGraph graph);
    // static private UnityEngine.Playables.PlayableHandle CreateHandle(UnityEngine.Playables.PlayableGraph graph)
    // Offset: 0x1892E5C
    static UnityEngine::Playables::PlayableHandle CreateHandle(UnityEngine::Playables::PlayableGraph graph);
    // private System.Void .ctor(UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x9C4504
    static AnimationMotionXToDeltaPlayable* New_ctor(UnityEngine::Playables::PlayableHandle handle);
    // public System.Void SetAbsoluteMotion(System.Boolean value)
    // Offset: 0x9C4520
    void SetAbsoluteMotion(bool value);
    // static private System.Boolean CreateHandleInternal(UnityEngine.Playables.PlayableGraph graph, UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x1893008
    static bool CreateHandleInternal(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Playables::PlayableHandle& handle);
    // static private System.Void SetAbsoluteMotionInternal(UnityEngine.Playables.PlayableHandle handle, System.Boolean value)
    // Offset: 0x1893200
    static void SetAbsoluteMotionInternal(UnityEngine::Playables::PlayableHandle& handle, bool value);
    // static private System.Void .cctor()
    // Offset: 0x18932A0
    static void _cctor();
    // static private System.Boolean CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph graph, UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x1893250
    static bool CreateHandleInternal_Injected(UnityEngine::Playables::PlayableGraph& graph, UnityEngine::Playables::PlayableHandle& handle);
    // public UnityEngine.Playables.PlayableHandle GetHandle()
    // Offset: 0x9C450C
    // Implemented from: UnityEngine.Playables.IPlayable
    // Base method: UnityEngine.Playables.PlayableHandle IPlayable::GetHandle()
    UnityEngine::Playables::PlayableHandle GetHandle();
    // public System.Boolean Equals(UnityEngine.Animations.AnimationMotionXToDeltaPlayable other)
    // Offset: 0x9C4518
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(UnityEngine.Animations.AnimationMotionXToDeltaPlayable other)
    bool Equals(UnityEngine::Animations::AnimationMotionXToDeltaPlayable other);
  }; // UnityEngine.Animations.AnimationMotionXToDeltaPlayable
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Animations::AnimationMotionXToDeltaPlayable, "UnityEngine.Animations", "AnimationMotionXToDeltaPlayable");
#pragma pack(pop)
