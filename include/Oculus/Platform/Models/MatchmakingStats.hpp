// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.MatchmakingStats
  class MatchmakingStats : public ::Il2CppObject {
    public:
    // public readonly System.UInt32 DrawCount
    // Offset: 0x10
    uint DrawCount;
    // public readonly System.UInt32 LossCount
    // Offset: 0x14
    uint LossCount;
    // public readonly System.UInt32 SkillLevel
    // Offset: 0x18
    uint SkillLevel;
    // public readonly System.Double SkillMean
    // Offset: 0x20
    double SkillMean;
    // public readonly System.Double SkillStandardDeviation
    // Offset: 0x28
    double SkillStandardDeviation;
    // public readonly System.UInt32 WinCount
    // Offset: 0x30
    uint WinCount;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xE00EAC
    static MatchmakingStats* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.MatchmakingStats
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::MatchmakingStats*, "Oculus.Platform.Models", "MatchmakingStats");
#pragma pack(pop)
