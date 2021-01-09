// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Playables.PlayableAsset
#include "UnityEngine/Playables/PlayableAsset.hpp"
// Including type: UnityEngine.Timeline.ITimelineClipAsset
#include "UnityEngine/Timeline/ITimelineClipAsset.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: AudioClipProperties
  class AudioClipProperties;
  // Forward declaring type: ClipCaps
  struct ClipCaps;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x30
  // Autogenerated type: UnityEngine.Timeline.AudioPlayableAsset
  // [] Offset: FFFFFFFF
  class AudioPlayableAsset : public UnityEngine::Playables::PlayableAsset/*, public UnityEngine::Timeline::ITimelineClipAsset*/ {
    public:
    // Nested type: UnityEngine::Timeline::AudioPlayableAsset::$get_outputs$d__16
    class $get_outputs$d__16;
    // private UnityEngine.AudioClip m_Clip
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::AudioClip* m_Clip;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioClip*) == 0x8);
    // private System.Boolean m_Loop
    // Size: 0x1
    // Offset: 0x20
    bool m_Loop;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_Loop and: m_bufferingTime
    char __padding1[0x3] = {};
    // [HideInInspector] Offset: 0xD8DF50
    // private System.Single m_bufferingTime
    // Size: 0x4
    // Offset: 0x24
    float m_bufferingTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Timeline.AudioClipProperties m_ClipProperties
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Timeline::AudioClipProperties* m_ClipProperties;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::AudioClipProperties*) == 0x8);
    // Creating value type constructor for type: AudioPlayableAsset
    AudioPlayableAsset(UnityEngine::AudioClip* m_Clip_ = {}, bool m_Loop_ = {}, float m_bufferingTime_ = {}, UnityEngine::Timeline::AudioClipProperties* m_ClipProperties_ = {}) noexcept : m_Clip{m_Clip_}, m_Loop{m_Loop_}, m_bufferingTime{m_bufferingTime_}, m_ClipProperties{m_ClipProperties_} {}
    // Creating interface conversion operator: operator UnityEngine::Timeline::ITimelineClipAsset
    operator UnityEngine::Timeline::ITimelineClipAsset() noexcept {
      return *reinterpret_cast<UnityEngine::Timeline::ITimelineClipAsset*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // System.Single get_bufferingTime()
    // Offset: 0x1415D2C
    float get_bufferingTime();
    // System.Void set_bufferingTime(System.Single value)
    // Offset: 0x1415D34
    void set_bufferingTime(float value);
    // public UnityEngine.AudioClip get_clip()
    // Offset: 0x1415D3C
    UnityEngine::AudioClip* get_clip();
    // public System.Void set_clip(UnityEngine.AudioClip value)
    // Offset: 0x1415D44
    void set_clip(UnityEngine::AudioClip* value);
    // public System.Boolean get_loop()
    // Offset: 0x1415D4C
    bool get_loop();
    // public System.Void set_loop(System.Boolean value)
    // Offset: 0x1415D54
    void set_loop(bool value);
    // public override System.Double get_duration()
    // Offset: 0x1415D60
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: System.Double PlayableAsset::get_duration()
    double get_duration();
    // public override System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> get_outputs()
    // Offset: 0x1415E24
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> PlayableAsset::get_outputs()
    System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>* get_outputs();
    // public override UnityEngine.Playables.Playable CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go)
    // Offset: 0x1415EE8
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: UnityEngine.Playables.Playable PlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go)
    UnityEngine::Playables::Playable CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* go);
    // public UnityEngine.Timeline.ClipCaps get_clipCaps()
    // Offset: 0x1416014
    // Implemented from: UnityEngine.Timeline.ITimelineClipAsset
    // Base method: UnityEngine.Timeline.ClipCaps ITimelineClipAsset::get_clipCaps()
    UnityEngine::Timeline::ClipCaps get_clipCaps();
    // public System.Void .ctor()
    // Offset: 0x1416020
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: System.Void PlayableAsset::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioPlayableAsset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::AudioPlayableAsset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioPlayableAsset*, creationType>()));
    }
  }; // UnityEngine.Timeline.AudioPlayableAsset
  static check_size<sizeof(AudioPlayableAsset), 40 + sizeof(UnityEngine::Timeline::AudioClipProperties*)> __UnityEngine_Timeline_AudioPlayableAssetSizeCheck;
  static_assert(sizeof(AudioPlayableAsset) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::AudioPlayableAsset*, "UnityEngine.Timeline", "AudioPlayableAsset");
#pragma pack(pop)
