// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TimelineAsset
  class TimelineAsset;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TimelineUndo
  // [] Offset: FFFFFFFF
  class TimelineUndo : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: TimelineUndo
    TimelineUndo() noexcept {}
    // static public System.Void PushDestroyUndo(UnityEngine.Timeline.TimelineAsset timeline, UnityEngine.Object thingToDirty, UnityEngine.Object objectToDestroy)
    // Offset: 0x20EAB70
    static void PushDestroyUndo(UnityEngine::Timeline::TimelineAsset* timeline, UnityEngine::Object* thingToDirty, UnityEngine::Object* objectToDestroy);
    // static public System.Void PushUndo(UnityEngine.Object[] thingsToDirty, System.String operation)
    // Offset: 0x20EAC10
    static void PushUndo(::Array<UnityEngine::Object*>* thingsToDirty, ::Il2CppString* operation);
    // static public System.Void PushUndo(UnityEngine.Object thingToDirty, System.String operation)
    // Offset: 0x20EAC14
    static void PushUndo(UnityEngine::Object* thingToDirty, ::Il2CppString* operation);
    // static public System.Void RegisterCreatedObjectUndo(UnityEngine.Object thingCreated, System.String operation)
    // Offset: 0x20EAC18
    static void RegisterCreatedObjectUndo(UnityEngine::Object* thingCreated, ::Il2CppString* operation);
    // static private System.String UndoName(System.String name)
    // Offset: 0x20EAC1C
    static ::Il2CppString* UndoName(::Il2CppString* name);
  }; // UnityEngine.Timeline.TimelineUndo
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimelineUndo*, "UnityEngine.Timeline", "TimelineUndo");
