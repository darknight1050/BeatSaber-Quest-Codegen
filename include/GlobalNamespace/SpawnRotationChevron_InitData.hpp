// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SpawnRotationChevron
#include "GlobalNamespace/SpawnRotationChevron.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SpawnRotationChevron/InitData
  class SpawnRotationChevron::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Boolean enableChevron
    // Offset: 0x10
    bool enableChevron;
    // public readonly System.Boolean enableSideLines
    // Offset: 0x11
    bool enableSideLines;
    // public System.Void .ctor(System.Boolean enableChevron, System.Boolean enableSideLines)
    // Offset: 0x1902C44
    static SpawnRotationChevron::InitData* New_ctor(bool enableChevron, bool enableSideLines);
  }; // SpawnRotationChevron/InitData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SpawnRotationChevron::InitData*, "", "SpawnRotationChevron/InitData");
#pragma pack(pop)
