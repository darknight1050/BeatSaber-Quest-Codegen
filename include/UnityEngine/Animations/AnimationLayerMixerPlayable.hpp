// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Playables.IPlayable
#include "UnityEngine/Playables/IPlayable.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Playables.PlayableHandle
#include "UnityEngine/Playables/PlayableHandle.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: Playable
  struct Playable;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AvatarMask
  class AvatarMask;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Animations.AnimationLayerMixerPlayable
  // [StaticAccessorAttribute] Offset: DA9564
  // [NativeHeaderAttribute] Offset: DA9564
  // [NativeHeaderAttribute] Offset: DA9564
  // [RequiredByNativeCodeAttribute] Offset: DA9564
  // [NativeHeaderAttribute] Offset: DA9564
  struct AnimationLayerMixerPlayable/*, public System::ValueType, public UnityEngine::Playables::IPlayable, public System::IEquatable_1<UnityEngine::Animations::AnimationLayerMixerPlayable>*/ {
    public:
    // private UnityEngine.Playables.PlayableHandle m_Handle
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Playables::PlayableHandle m_Handle;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableHandle) == 0xC);
    // Creating value type constructor for type: AnimationLayerMixerPlayable
    constexpr AnimationLayerMixerPlayable(UnityEngine::Playables::PlayableHandle m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::Playables::IPlayable
    operator UnityEngine::Playables::IPlayable() noexcept {
      return *reinterpret_cast<UnityEngine::Playables::IPlayable*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Animations::AnimationLayerMixerPlayable>
    operator System::IEquatable_1<UnityEngine::Animations::AnimationLayerMixerPlayable>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Animations::AnimationLayerMixerPlayable>*>(this);
    }
    // Creating conversion operator: operator UnityEngine::Playables::PlayableHandle
    constexpr operator UnityEngine::Playables::PlayableHandle() const noexcept {
      return m_Handle;
    }
    // Get static field: static private readonly UnityEngine.Animations.AnimationLayerMixerPlayable m_NullPlayable
    static UnityEngine::Animations::AnimationLayerMixerPlayable _get_m_NullPlayable();
    // Set static field: static private readonly UnityEngine.Animations.AnimationLayerMixerPlayable m_NullPlayable
    static void _set_m_NullPlayable(UnityEngine::Animations::AnimationLayerMixerPlayable value);
    // static public UnityEngine.Animations.AnimationLayerMixerPlayable Create(UnityEngine.Playables.PlayableGraph graph, System.Int32 inputCount)
    // Offset: 0x2339C74
    static UnityEngine::Animations::AnimationLayerMixerPlayable Create(UnityEngine::Playables::PlayableGraph graph, int inputCount);
    // static private UnityEngine.Playables.PlayableHandle CreateHandle(UnityEngine.Playables.PlayableGraph graph, System.Int32 inputCount)
    // Offset: 0x2339D1C
    static UnityEngine::Playables::PlayableHandle CreateHandle(UnityEngine::Playables::PlayableGraph graph, int inputCount);
    // System.Void .ctor(UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0xF20858
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  AnimationLayerMixerPlayable(UnityEngine::Playables::PlayableHandle handle)
    // public UnityEngine.Playables.PlayableHandle GetHandle()
    // Offset: 0xF20860
    UnityEngine::Playables::PlayableHandle GetHandle();
    // public System.Boolean Equals(UnityEngine.Animations.AnimationLayerMixerPlayable other)
    // Offset: 0xF2086C
    bool Equals(UnityEngine::Animations::AnimationLayerMixerPlayable other);
    // public System.Void SetLayerMaskFromAvatarMask(System.UInt32 layerIndex, UnityEngine.AvatarMask mask)
    // Offset: 0xF20874
    void SetLayerMaskFromAvatarMask(uint layerIndex, UnityEngine::AvatarMask* mask);
    // static private System.Boolean CreateHandleInternal(UnityEngine.Playables.PlayableGraph graph, ref UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x2339ECC
    static bool CreateHandleInternal(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Playables::PlayableHandle& handle);
    // static private System.Void SetLayerMaskFromAvatarMaskInternal(ref UnityEngine.Playables.PlayableHandle handle, System.UInt32 layerIndex, UnityEngine.AvatarMask mask)
    // Offset: 0x233A20C
    static void SetLayerMaskFromAvatarMaskInternal(UnityEngine::Playables::PlayableHandle& handle, uint layerIndex, UnityEngine::AvatarMask* mask);
    // static private System.Void .cctor()
    // Offset: 0x233A2B4
    static void _cctor();
    // static private System.Boolean CreateHandleInternal_Injected(ref UnityEngine.Playables.PlayableGraph graph, ref UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x233A264
    static bool CreateHandleInternal_Injected(UnityEngine::Playables::PlayableGraph& graph, UnityEngine::Playables::PlayableHandle& handle);
  }; // UnityEngine.Animations.AnimationLayerMixerPlayable
  #pragma pack(pop)
  static check_size<sizeof(AnimationLayerMixerPlayable), 0 + sizeof(UnityEngine::Playables::PlayableHandle)> __UnityEngine_Animations_AnimationLayerMixerPlayableSizeCheck;
  static_assert(sizeof(AnimationLayerMixerPlayable) == 0xC);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Animations::AnimationLayerMixerPlayable, "UnityEngine.Animations", "AnimationLayerMixerPlayable");
