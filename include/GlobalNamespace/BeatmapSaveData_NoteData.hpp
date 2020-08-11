// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: BeatmapSaveData
#include "GlobalNamespace/BeatmapSaveData.hpp"
// Including type: BeatmapSaveData/ITime
#include "GlobalNamespace/BeatmapSaveData_ITime.hpp"
// Including type: NoteLineLayer
#include "GlobalNamespace/NoteLineLayer.hpp"
// Including type: NoteType
#include "GlobalNamespace/NoteType.hpp"
// Including type: NoteCutDirection
#include "GlobalNamespace/NoteCutDirection.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapSaveData/NoteData
  class BeatmapSaveData::NoteData : public ::CsObject, public GlobalNamespace::BeatmapSaveData::ITime {
    public:
    // private System.Single _time
    // Offset: 0x10
    float time;
    // private System.Int32 _lineIndex
    // Offset: 0x14
    int lineIndex;
    // private NoteLineLayer _lineLayer
    // Offset: 0x18
    GlobalNamespace::NoteLineLayer lineLayer;
    // private NoteType _type
    // Offset: 0x1C
    GlobalNamespace::NoteType type;
    // private NoteCutDirection _cutDirection
    // Offset: 0x20
    GlobalNamespace::NoteCutDirection cutDirection;
    // public System.Int32 get_lineIndex()
    // Offset: 0xB5C850
    int get_lineIndex();
    // public NoteLineLayer get_lineLayer()
    // Offset: 0xB5C858
    GlobalNamespace::NoteLineLayer get_lineLayer();
    // public NoteType get_type()
    // Offset: 0xB5C860
    GlobalNamespace::NoteType get_type();
    // public NoteCutDirection get_cutDirection()
    // Offset: 0xB5C868
    GlobalNamespace::NoteCutDirection get_cutDirection();
    // public System.Void .ctor(System.Single time, System.Int32 lineIndex, NoteLineLayer lineLayer, NoteType type, NoteCutDirection cutDirection)
    // Offset: 0xB5C870
    static BeatmapSaveData::NoteData* New_ctor(float time, int lineIndex, GlobalNamespace::NoteLineLayer lineLayer, GlobalNamespace::NoteType type, GlobalNamespace::NoteCutDirection cutDirection);
    // public System.Single get_time()
    // Offset: 0xB5C848
    // Implemented from: BeatmapSaveData/ITime
    // Base method: System.Single ITime::get_time()
    float get_time();
    // public System.Void MoveTime(System.Single offset)
    // Offset: 0xB5C8CC
    // Implemented from: BeatmapSaveData/ITime
    // Base method: System.Void ITime::MoveTime(System.Single offset)
    void MoveTime(float offset);
  }; // BeatmapSaveData/NoteData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapSaveData::NoteData*, "", "BeatmapSaveData/NoteData");
#pragma pack(pop)
