// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
// Including type: UnityEngine.Playables.Playable
#include "UnityEngine/Playables/Playable.hpp"
// Including type: UnityEngine.Timeline.NotificationFlags
#include "UnityEngine/Timeline/NotificationFlags.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: ScriptPlayable`1<T>
  template<typename T>
  struct ScriptPlayable_1;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: DirectorWrapMode
  struct DirectorWrapMode;
  // Forward declaring type: INotification
  class INotification;
  // Forward declaring type: FrameData
  struct FrameData;
  // Forward declaring type: PlayableOutput
  struct PlayableOutput;
}
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Skipping declaration: NotificationEntry because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x34
  // Autogenerated type: UnityEngine.Timeline.TimeNotificationBehaviour
  // [] Offset: FFFFFFFF
  class TimeNotificationBehaviour : public UnityEngine::Playables::PlayableBehaviour {
    public:
    // Nested type: UnityEngine::Timeline::TimeNotificationBehaviour::NotificationEntry
    struct NotificationEntry;
    // Nested type: UnityEngine::Timeline::TimeNotificationBehaviour::$$c
    class $$c;
    // Size: 0x14
    // Autogenerated type: UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry
    // [] Offset: FFFFFFFF
    struct NotificationEntry/*, public System::ValueType*/ {
      public:
      // public System.Double time
      // Size: 0x8
      // Offset: 0x0
      double time;
      // Field size check
      static_assert(sizeof(double) == 0x8);
      // public UnityEngine.Playables.INotification payload
      // Size: 0x8
      // Offset: 0x8
      UnityEngine::Playables::INotification* payload;
      // Field size check
      static_assert(sizeof(UnityEngine::Playables::INotification*) == 0x8);
      // public System.Boolean notificationFired
      // Size: 0x1
      // Offset: 0x10
      bool notificationFired;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // Padding between fields: notificationFired and: flags
      char __padding2[0x1] = {};
      // public UnityEngine.Timeline.NotificationFlags flags
      // Size: 0x2
      // Offset: 0x12
      UnityEngine::Timeline::NotificationFlags flags;
      // Field size check
      static_assert(sizeof(UnityEngine::Timeline::NotificationFlags) == 0x2);
      // Creating value type constructor for type: NotificationEntry
      constexpr NotificationEntry(double time_ = {}, UnityEngine::Playables::INotification* payload_ = {}, bool notificationFired_ = {}, UnityEngine::Timeline::NotificationFlags flags_ = {}) noexcept : time{time_}, payload{payload_}, notificationFired{notificationFired_}, flags{flags_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // public System.Boolean get_triggerInEditor()
      // Offset: 0xC9F8A0
      bool get_triggerInEditor();
      // public System.Boolean get_prewarm()
      // Offset: 0xC9F8AC
      bool get_prewarm();
      // public System.Boolean get_triggerOnce()
      // Offset: 0xC9F8B8
      bool get_triggerOnce();
    }; // UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry
    static check_size<sizeof(TimeNotificationBehaviour::NotificationEntry), 18 + sizeof(UnityEngine::Timeline::NotificationFlags)> __UnityEngine_Timeline_TimeNotificationBehaviour_NotificationEntrySizeCheck;
    static_assert(sizeof(TimeNotificationBehaviour::NotificationEntry) == 0x14);
    // private readonly System.Collections.Generic.List`1<UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry> m_Notifications
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<UnityEngine::Timeline::TimeNotificationBehaviour::NotificationEntry>* m_Notifications;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Timeline::TimeNotificationBehaviour::NotificationEntry>*) == 0x8);
    // private System.Double m_PreviousTime
    // Size: 0x8
    // Offset: 0x18
    double m_PreviousTime;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Boolean m_NeedSortNotifications
    // Size: 0x1
    // Offset: 0x20
    bool m_NeedSortNotifications;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_NeedSortNotifications and: m_TimeSource
    char __padding2[0x7] = {};
    // private UnityEngine.Playables.Playable m_TimeSource
    // Size: 0xC
    // Offset: 0x28
    UnityEngine::Playables::Playable m_TimeSource;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::Playable) == 0xC);
    // Creating value type constructor for type: TimeNotificationBehaviour
    TimeNotificationBehaviour(System::Collections::Generic::List_1<UnityEngine::Timeline::TimeNotificationBehaviour::NotificationEntry>* m_Notifications_ = {}, double m_PreviousTime_ = {}, bool m_NeedSortNotifications_ = {}, UnityEngine::Playables::Playable m_TimeSource_ = {}) noexcept : m_Notifications{m_Notifications_}, m_PreviousTime{m_PreviousTime_}, m_NeedSortNotifications{m_NeedSortNotifications_}, m_TimeSource{m_TimeSource_} {}
    // public System.Void set_timeSource(UnityEngine.Playables.Playable value)
    // Offset: 0x14218AC
    void set_timeSource(UnityEngine::Playables::Playable value);
    // static public UnityEngine.Playables.ScriptPlayable`1<UnityEngine.Timeline.TimeNotificationBehaviour> Create(UnityEngine.Playables.PlayableGraph graph, System.Double duration, UnityEngine.Playables.DirectorWrapMode loopMode)
    // Offset: 0x141E820
    static UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::TimeNotificationBehaviour*> Create(UnityEngine::Playables::PlayableGraph graph, double duration, UnityEngine::Playables::DirectorWrapMode loopMode);
    // public System.Void AddNotification(System.Double time, UnityEngine.Playables.INotification payload, UnityEngine.Timeline.NotificationFlags flags)
    // Offset: 0x141E914
    void AddNotification(double time, UnityEngine::Playables::INotification* payload, UnityEngine::Timeline::NotificationFlags flags);
    // private System.Void SortNotifications()
    // Offset: 0x1421A7C
    void SortNotifications();
    // static private System.Boolean CanRestoreNotification(UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry e, UnityEngine.Playables.FrameData info, System.Double currentTime, System.Double previousTime)
    // Offset: 0x1422384
    static bool CanRestoreNotification(UnityEngine::Timeline::TimeNotificationBehaviour::NotificationEntry e, UnityEngine::Playables::FrameData info, double currentTime, double previousTime);
    // private System.Void TriggerNotificationsInRange(System.Double start, System.Double end, UnityEngine.Playables.FrameData info, UnityEngine.Playables.Playable playable, System.Boolean checkState)
    // Offset: 0x14221C4
    void TriggerNotificationsInRange(double start, double end, UnityEngine::Playables::FrameData info, UnityEngine::Playables::Playable playable, bool checkState);
    // private System.Void SyncDurationWithExternalSource(UnityEngine.Playables.Playable playable)
    // Offset: 0x14220F4
    void SyncDurationWithExternalSource(UnityEngine::Playables::Playable playable);
    // static private System.Void Trigger_internal(UnityEngine.Playables.Playable playable, UnityEngine.Playables.PlayableOutput output, ref UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry e)
    // Offset: 0x1421D38
    static void Trigger_internal(UnityEngine::Playables::Playable playable, UnityEngine::Playables::PlayableOutput output, UnityEngine::Timeline::TimeNotificationBehaviour::NotificationEntry& e);
    // static private System.Void Restore_internal(ref UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry e)
    // Offset: 0x14223EC
    static void Restore_internal(UnityEngine::Timeline::TimeNotificationBehaviour::NotificationEntry& e);
    // public override System.Void OnGraphStart(UnityEngine.Playables.Playable playable)
    // Offset: 0x14218B4
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnGraphStart(UnityEngine.Playables.Playable playable)
    void OnGraphStart(UnityEngine::Playables::Playable playable);
    // public override System.Void OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x1421BA0
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPause(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public override System.Void PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x1421DC8
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void PrepareFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public System.Void .ctor()
    // Offset: 0x142240C
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimeNotificationBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::TimeNotificationBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimeNotificationBehaviour*, creationType>()));
    }
  }; // UnityEngine.Timeline.TimeNotificationBehaviour
  static check_size<sizeof(TimeNotificationBehaviour), 40 + sizeof(UnityEngine::Playables::Playable)> __UnityEngine_Timeline_TimeNotificationBehaviourSizeCheck;
  static_assert(sizeof(TimeNotificationBehaviour) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimeNotificationBehaviour*, "UnityEngine.Timeline", "TimeNotificationBehaviour");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimeNotificationBehaviour::NotificationEntry, "UnityEngine.Timeline", "TimeNotificationBehaviour/NotificationEntry");
#pragma pack(pop)
