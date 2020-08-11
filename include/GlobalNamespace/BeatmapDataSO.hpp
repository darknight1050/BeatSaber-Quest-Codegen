// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapData
  class BeatmapData;
  // Forward declaring type: BeatmapDataLoader
  class BeatmapDataLoader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapDataSO
  class BeatmapDataSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // public System.String _jsonData
    // Offset: 0x18
    ::CsString* jsonData;
    // private BeatmapData _beatmapData
    // Offset: 0x20
    GlobalNamespace::BeatmapData* beatmapData;
    // private System.Single _beatsPerMinute
    // Offset: 0x28
    float beatsPerMinute;
    // private System.Single _shuffle
    // Offset: 0x2C
    float shuffle;
    // private System.Single _shufflePeriod
    // Offset: 0x30
    float shufflePeriod;
    // private System.Boolean _hasRequiredDataForLoad
    // Offset: 0x34
    bool hasRequiredDataForLoad;
    // private BeatmapDataLoader _beatmapDataLoader
    // Offset: 0x38
    GlobalNamespace::BeatmapDataLoader* beatmapDataLoader;
    // public BeatmapData get_beatmapData()
    // Offset: 0x1979DD8
    GlobalNamespace::BeatmapData* get_beatmapData();
    // public System.Void set_beatmapData(BeatmapData value)
    // Offset: 0x1979E60
    void set_beatmapData(GlobalNamespace::BeatmapData* value);
    // public System.Void SetJsonData(System.String jsonData)
    // Offset: 0x1979E68
    void SetJsonData(::CsString* jsonData);
    // public System.Void SetRequiredDataForLoad(System.Single beatsPerMinute, System.Single shuffle, System.Single shufflePeriod)
    // Offset: 0x1979E70
    void SetRequiredDataForLoad(float beatsPerMinute, float shuffle, float shufflePeriod);
    // public System.Void Load()
    // Offset: 0x1979E08
    void Load();
    // public System.Void .ctor()
    // Offset: 0x1979E84
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BeatmapDataSO* New_ctor();
  }; // BeatmapDataSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataSO*, "", "BeatmapDataSO");
#pragma pack(pop)
