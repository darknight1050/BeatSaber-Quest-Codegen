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
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Autogenerated type: UnityEngine.Animations.AnimationScriptPlayable
  struct AnimationScriptPlayable : public UnityEngine::Playables::IPlayable, public System::IEquatable_1<UnityEngine::Animations::AnimationScriptPlayable>, public System::ValueType {
    public:
    // private UnityEngine.Playables.PlayableHandle m_Handle
    // Offset: 0x0
    UnityEngine::Playables::PlayableHandle m_Handle;
    // Get static field: static private readonly UnityEngine.Animations.AnimationScriptPlayable m_NullPlayable
    static UnityEngine::Animations::AnimationScriptPlayable _get_m_NullPlayable();
    // Set static field: static private readonly UnityEngine.Animations.AnimationScriptPlayable m_NullPlayable
    static void _set_m_NullPlayable(UnityEngine::Animations::AnimationScriptPlayable value);
    // Creating value type constructor for type: AnimationScriptPlayable
    AnimationScriptPlayable(UnityEngine::Playables::PlayableHandle m_Handle_ = {}) : m_Handle{m_Handle_} {}
    // System.Void .ctor(UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x9C4624
    static AnimationScriptPlayable* New_ctor(UnityEngine::Playables::PlayableHandle handle);
    // static private System.Void .cctor()
    // Offset: 0x1894704
    static void _cctor();
    // public UnityEngine.Playables.PlayableHandle GetHandle()
    // Offset: 0x9C462C
    // Implemented from: UnityEngine.Playables.IPlayable
    // Base method: UnityEngine.Playables.PlayableHandle IPlayable::GetHandle()
    UnityEngine::Playables::PlayableHandle GetHandle();
    // public System.Boolean Equals(UnityEngine.Animations.AnimationScriptPlayable other)
    // Offset: 0x9C4638
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(UnityEngine.Animations.AnimationScriptPlayable other)
    bool Equals(UnityEngine::Animations::AnimationScriptPlayable other);
  }; // UnityEngine.Animations.AnimationScriptPlayable
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Animations::AnimationScriptPlayable, "UnityEngine.Animations", "AnimationScriptPlayable");
#pragma pack(pop)
