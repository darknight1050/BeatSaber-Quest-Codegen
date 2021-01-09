// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.RuntimeClipBase
#include "UnityEngine/Timeline/RuntimeClipBase.hpp"
// Including type: UnityEngine.Playables.Playable
#include "UnityEngine/Playables/Playable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TimelineClip
  class TimelineClip;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x51
  // Autogenerated type: UnityEngine.Timeline.ScheduleRuntimeClip
  // [] Offset: FFFFFFFF
  class ScheduleRuntimeClip : public UnityEngine::Timeline::RuntimeClipBase {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    // private UnityEngine.Timeline.TimelineClip m_Clip
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Timeline::TimelineClip* m_Clip;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::TimelineClip*) == 0x8);
    // private UnityEngine.Playables.Playable m_Playable
    // Size: 0xC
    // Offset: 0x20
    UnityEngine::Playables::Playable m_Playable;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::Playable) == 0xC);
    // Padding between fields: m_Playable and: m_ParentMixer
    char __padding1[0x4] = {};
    // private UnityEngine.Playables.Playable m_ParentMixer
    // Size: 0xC
    // Offset: 0x30
    UnityEngine::Playables::Playable m_ParentMixer;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::Playable) == 0xC);
    // Padding between fields: m_ParentMixer and: m_StartDelay
    char __padding2[0x4] = {};
    // private System.Double m_StartDelay
    // Size: 0x8
    // Offset: 0x40
    double m_StartDelay;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double m_FinishTail
    // Size: 0x8
    // Offset: 0x48
    double m_FinishTail;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Boolean m_Started
    // Size: 0x1
    // Offset: 0x50
    bool m_Started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ScheduleRuntimeClip
    ScheduleRuntimeClip(UnityEngine::Timeline::TimelineClip* m_Clip_ = {}, UnityEngine::Playables::Playable m_Playable_ = {}, UnityEngine::Playables::Playable m_ParentMixer_ = {}, double m_StartDelay_ = {}, double m_FinishTail_ = {}, bool m_Started_ = {}) noexcept : m_Clip{m_Clip_}, m_Playable{m_Playable_}, m_ParentMixer{m_ParentMixer_}, m_StartDelay{m_StartDelay_}, m_FinishTail{m_FinishTail_}, m_Started{m_Started_} {}
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // public System.Void SetTime(System.Double time)
    // Offset: 0x14200A8
    void SetTime(double time);
    // public UnityEngine.Timeline.TimelineClip get_clip()
    // Offset: 0x1420108
    UnityEngine::Timeline::TimelineClip* get_clip();
    // public UnityEngine.Playables.Playable get_mixer()
    // Offset: 0x1420110
    UnityEngine::Playables::Playable get_mixer();
    // public UnityEngine.Playables.Playable get_playable()
    // Offset: 0x142011C
    UnityEngine::Playables::Playable get_playable();
    // public System.Void .ctor(UnityEngine.Timeline.TimelineClip clip, UnityEngine.Playables.Playable clipPlayable, UnityEngine.Playables.Playable parentMixer, System.Double startDelay, System.Double finishTail)
    // Offset: 0x1416A50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScheduleRuntimeClip* New_ctor(UnityEngine::Timeline::TimelineClip* clip, UnityEngine::Playables::Playable clipPlayable, UnityEngine::Playables::Playable parentMixer, double startDelay, double finishTail) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::ScheduleRuntimeClip::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScheduleRuntimeClip*, creationType>(clip, clipPlayable, parentMixer, startDelay, finishTail)));
    }
    // private System.Void Create(UnityEngine.Timeline.TimelineClip clip, UnityEngine.Playables.Playable clipPlayable, UnityEngine.Playables.Playable parentMixer, System.Double startDelay, System.Double finishTail)
    // Offset: 0x1420128
    void Create(UnityEngine::Timeline::TimelineClip* clip, UnityEngine::Playables::Playable clipPlayable, UnityEngine::Playables::Playable parentMixer, double startDelay, double finishTail);
    // public override System.Double get_start()
    // Offset: 0x141FFD0
    // Implemented from: UnityEngine.Timeline.RuntimeClipBase
    // Base method: System.Double RuntimeClipBase::get_start()
    double get_start();
    // public override System.Double get_duration()
    // Offset: 0x1420058
    // Implemented from: UnityEngine.Timeline.RuntimeClipBase
    // Base method: System.Double RuntimeClipBase::get_duration()
    double get_duration();
    // public override System.Void set_enable(System.Boolean value)
    // Offset: 0x14201D4
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Void RuntimeElement::set_enable(System.Boolean value)
    void set_enable(bool value);
    // public override System.Void EvaluateAt(System.Double localTime, UnityEngine.Playables.FrameData frameData)
    // Offset: 0x14202CC
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Void RuntimeElement::EvaluateAt(System.Double localTime, UnityEngine.Playables.FrameData frameData)
    void EvaluateAt(double localTime, UnityEngine::Playables::FrameData frameData);
  }; // UnityEngine.Timeline.ScheduleRuntimeClip
  static check_size<sizeof(ScheduleRuntimeClip), 80 + sizeof(bool)> __UnityEngine_Timeline_ScheduleRuntimeClipSizeCheck;
  static_assert(sizeof(ScheduleRuntimeClip) == 0x51);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::ScheduleRuntimeClip*, "UnityEngine.Timeline", "ScheduleRuntimeClip");
#pragma pack(pop)
