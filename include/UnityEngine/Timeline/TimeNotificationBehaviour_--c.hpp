// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.TimeNotificationBehaviour
#include "UnityEngine/Timeline/TimeNotificationBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TimeNotificationBehaviour/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: CE9B04
  class TimeNotificationBehaviour::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.Timeline.TimeNotificationBehaviour/<>c <>9
    static UnityEngine::Timeline::TimeNotificationBehaviour::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.Timeline.TimeNotificationBehaviour/<>c <>9
    static void _set_$$9(UnityEngine::Timeline::TimeNotificationBehaviour::$$c* value);
    // Get static field: static public System.Comparison`1<UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry> <>9__12_0
    static System::Comparison_1<UnityEngine::Timeline::TimeNotificationBehaviour::NotificationEntry>* _get_$$9__12_0();
    // Set static field: static public System.Comparison`1<UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry> <>9__12_0
    static void _set_$$9__12_0(System::Comparison_1<UnityEngine::Timeline::TimeNotificationBehaviour::NotificationEntry>* value);
    // static private System.Void .cctor()
    // Offset: 0x1672F78
    static void _cctor();
    // System.Int32 <SortNotifications>b__12_0(UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry x, UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry y)
    // Offset: 0x1672FE4
    int $SortNotifications$b__12_0(UnityEngine::Timeline::TimeNotificationBehaviour::NotificationEntry x, UnityEngine::Timeline::TimeNotificationBehaviour::NotificationEntry y);
    // public System.Void .ctor()
    // Offset: 0x1672FDC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimeNotificationBehaviour::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::TimeNotificationBehaviour::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimeNotificationBehaviour::$$c*, creationType>()));
    }
  }; // UnityEngine.Timeline.TimeNotificationBehaviour/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimeNotificationBehaviour::$$c*, "UnityEngine.Timeline", "TimeNotificationBehaviour/<>c");
