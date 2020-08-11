// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: NoteType
#include "GlobalNamespace/NoteType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectData
  class BeatmapObjectData;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
  // Forward declaring type: NoteData
  class NoteData;
  // Forward declaring type: ObstacleData
  class ObstacleData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapCallbackItemDataList
  class BeatmapCallbackItemDataList : public ::CsObject {
    public:
    // Nested type: GlobalNamespace::BeatmapCallbackItemDataList::SpawnNoteCallback
    class SpawnNoteCallback;
    // Nested type: GlobalNamespace::BeatmapCallbackItemDataList::SpawnObstacleCallback
    class SpawnObstacleCallback;
    // Nested type: GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback
    class ProcessBeatmapEventCallback;
    // Nested type: GlobalNamespace::BeatmapCallbackItemDataList::GetRelativeNoteOffsetCallback
    class GetRelativeNoteOffsetCallback;
    // private BeatmapCallbackItemDataList/SpawnNoteCallback spawnNoteCallback
    // Offset: 0x10
    GlobalNamespace::BeatmapCallbackItemDataList::SpawnNoteCallback* spawnNoteCallback;
    // private BeatmapCallbackItemDataList/SpawnObstacleCallback spawnObstacleCallback
    // Offset: 0x18
    GlobalNamespace::BeatmapCallbackItemDataList::SpawnObstacleCallback* spawnObstacleCallback;
    // private BeatmapCallbackItemDataList/ProcessBeatmapEventCallback processEarlyBeatmapEventCallback
    // Offset: 0x20
    GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback* processEarlyBeatmapEventCallback;
    // private BeatmapCallbackItemDataList/ProcessBeatmapEventCallback processLateBeatmapEventCallback
    // Offset: 0x28
    GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback* processLateBeatmapEventCallback;
    // private System.Action earlyEventsWereProcessedCallback
    // Offset: 0x30
    System::Action* earlyEventsWereProcessedCallback;
    // private BeatmapCallbackItemDataList/GetRelativeNoteOffsetCallback getRelativeNoteOffsetCallback
    // Offset: 0x38
    GlobalNamespace::BeatmapCallbackItemDataList::GetRelativeNoteOffsetCallback* getRelativeNoteOffsetCallback;
    // private System.Collections.Generic.List`1<BeatmapObjectData> _beatmapObjectDataList
    // Offset: 0x40
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectData*>* beatmapObjectDataList;
    // private System.Collections.Generic.List`1<BeatmapEventData> _beatmapEventDataList
    // Offset: 0x48
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData*>* beatmapEventDataList;
    // private System.Collections.Generic.Dictionary`2<NoteType,System.Collections.Generic.List`1<NoteData>> _notesByType
    // Offset: 0x50
    System::Collections::Generic::Dictionary_2<GlobalNamespace::NoteType, System::Collections::Generic::List_1<GlobalNamespace::NoteData*>*>* notesByType;
    // private System.Collections.Generic.List`1<ObstacleData> _obstacles
    // Offset: 0x58
    System::Collections::Generic::List_1<GlobalNamespace::ObstacleData*>* obstacles;
    // private System.Collections.Generic.List`1<BeatmapEventData> _beatmapEarlyEvents
    // Offset: 0x60
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData*>* beatmapEarlyEvents;
    // private System.Collections.Generic.List`1<BeatmapEventData> _beatmapLateEvents
    // Offset: 0x68
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData*>* beatmapLateEvents;
    // private System.Single _maxNotesAlignmentAngle
    // Offset: 0x70
    float maxNotesAlignmentAngle;
    // public System.Void .ctor(BeatmapCallbackItemDataList/SpawnNoteCallback spawnNoteCallback, BeatmapCallbackItemDataList/SpawnObstacleCallback spawnObstacleCallback, BeatmapCallbackItemDataList/ProcessBeatmapEventCallback processEarlyBeatmapEventCallback, BeatmapCallbackItemDataList/ProcessBeatmapEventCallback processLateBeatmapEventCallback, System.Action earlyEventsWereProcessedCallback, BeatmapCallbackItemDataList/GetRelativeNoteOffsetCallback getRelativeNoteOffsetCallback)
    // Offset: 0x19745D8
    static BeatmapCallbackItemDataList* New_ctor(GlobalNamespace::BeatmapCallbackItemDataList::SpawnNoteCallback* spawnNoteCallback, GlobalNamespace::BeatmapCallbackItemDataList::SpawnObstacleCallback* spawnObstacleCallback, GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback* processEarlyBeatmapEventCallback, GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback* processLateBeatmapEventCallback, System::Action* earlyEventsWereProcessedCallback, GlobalNamespace::BeatmapCallbackItemDataList::GetRelativeNoteOffsetCallback* getRelativeNoteOffsetCallback);
    // public System.Void InsertBeatmapObjectData(BeatmapObjectData beatmapObjectData)
    // Offset: 0x1974928
    void InsertBeatmapObjectData(GlobalNamespace::BeatmapObjectData* beatmapObjectData);
    // public System.Void InsertBeatmapEventData(BeatmapEventData beatmapEventData)
    // Offset: 0x1974A2C
    void InsertBeatmapEventData(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // public System.Void ProcessData()
    // Offset: 0x1974B30
    void ProcessData();
    // private System.Boolean ProcessNotesByType(System.Collections.Generic.List`1<NoteData> notesWithTheSameTypeList)
    // Offset: 0x19757C4
    bool ProcessNotesByType(System::Collections::Generic::List_1<GlobalNamespace::NoteData*>* notesWithTheSameTypeList);
  }; // BeatmapCallbackItemDataList
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCallbackItemDataList*, "", "BeatmapCallbackItemDataList");
#pragma pack(pop)
