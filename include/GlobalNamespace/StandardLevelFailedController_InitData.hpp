// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: StandardLevelFailedController
#include "GlobalNamespace/StandardLevelFailedController.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: StandardLevelFailedController/InitData
  class StandardLevelFailedController::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Boolean autoRestart
    // Offset: 0x10
    bool autoRestart;
    // public System.Void .ctor(System.Boolean autoRestart)
    // Offset: 0x1903280
    static StandardLevelFailedController::InitData* New_ctor(bool autoRestart);
  }; // StandardLevelFailedController/InitData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelFailedController::InitData*, "", "StandardLevelFailedController/InitData");
#pragma pack(pop)
