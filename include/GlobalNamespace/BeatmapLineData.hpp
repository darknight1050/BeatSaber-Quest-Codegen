// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectData
  class BeatmapObjectData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapLineData
  class BeatmapLineData : public ::Il2CppObject {
    public:
    // public BeatmapObjectData[] beatmapObjectsData
    // Offset: 0x10
    ::Array<GlobalNamespace::BeatmapObjectData*>* beatmapObjectsData;
    // public System.Void .ctor()
    // Offset: 0x18DB790
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BeatmapLineData* New_ctor();
  }; // BeatmapLineData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLineData*, "", "BeatmapLineData");
#pragma pack(pop)
