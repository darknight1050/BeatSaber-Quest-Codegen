// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapObjectCallbackController
#include "GlobalNamespace/BeatmapObjectCallbackController.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapObjectCallbackController/BeatmapObjectCallbackData
  class BeatmapObjectCallbackController::BeatmapObjectCallbackData : public ::Il2CppObject {
    public:
    // public System.Single aheadTime
    // Offset: 0x10
    float aheadTime;
    // public System.Int32[] nextObjectIndexInLine
    // Offset: 0x18
    ::Array<int>* nextObjectIndexInLine;
    // public readonly BeatmapObjectCallbackController/BeatmapObjectCallback callback
    // Offset: 0x20
    GlobalNamespace::BeatmapObjectCallbackController::BeatmapObjectCallback* callback;
    // public System.Void .ctor(BeatmapObjectCallbackController/BeatmapObjectCallback callback, System.Single aheadTime, System.Int32 numberOfLines)
    // Offset: 0x18DCA7C
    static BeatmapObjectCallbackController::BeatmapObjectCallbackData* New_ctor(GlobalNamespace::BeatmapObjectCallbackController::BeatmapObjectCallback* callback, float aheadTime, int numberOfLines);
  }; // BeatmapObjectCallbackController/BeatmapObjectCallbackData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectCallbackController::BeatmapObjectCallbackData*, "", "BeatmapObjectCallbackController/BeatmapObjectCallbackData");
#pragma pack(pop)
