// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapSaveData
#include "GlobalNamespace/BeatmapSaveData.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveData/ITime
  class BeatmapSaveData::ITime {
    public:
    // Creating value type constructor for type: ITime
    ITime() noexcept {}
    // public System.Single get_time()
    // Offset: 0xFFFFFFFF
    float get_time();
    // public System.Void MoveTime(System.Single offset)
    // Offset: 0xFFFFFFFF
    void MoveTime(float offset);
  }; // BeatmapSaveData/ITime
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapSaveData::ITime*, "", "BeatmapSaveData/ITime");
