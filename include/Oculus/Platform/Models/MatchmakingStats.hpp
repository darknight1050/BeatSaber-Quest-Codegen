// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x34
  // Autogenerated type: Oculus.Platform.Models.MatchmakingStats
  // [] Offset: FFFFFFFF
  class MatchmakingStats : public ::Il2CppObject {
    public:
    // public readonly System.UInt32 DrawCount
    // Size: 0x4
    // Offset: 0x10
    uint DrawCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public readonly System.UInt32 LossCount
    // Size: 0x4
    // Offset: 0x14
    uint LossCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public readonly System.UInt32 SkillLevel
    // Size: 0x4
    // Offset: 0x18
    uint SkillLevel;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: SkillLevel and: SkillMean
    char __padding2[0x4] = {};
    // public readonly System.Double SkillMean
    // Size: 0x8
    // Offset: 0x20
    double SkillMean;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public readonly System.Double SkillStandardDeviation
    // Size: 0x8
    // Offset: 0x28
    double SkillStandardDeviation;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public readonly System.UInt32 WinCount
    // Size: 0x4
    // Offset: 0x30
    uint WinCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: MatchmakingStats
    MatchmakingStats(uint DrawCount_ = {}, uint LossCount_ = {}, uint SkillLevel_ = {}, double SkillMean_ = {}, double SkillStandardDeviation_ = {}, uint WinCount_ = {}) noexcept : DrawCount{DrawCount_}, LossCount{LossCount_}, SkillLevel{SkillLevel_}, SkillMean{SkillMean_}, SkillStandardDeviation{SkillStandardDeviation_}, WinCount{WinCount_} {}
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x11DCAEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MatchmakingStats* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::MatchmakingStats::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MatchmakingStats*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.MatchmakingStats
  static check_size<sizeof(MatchmakingStats), 48 + sizeof(uint)> __Oculus_Platform_Models_MatchmakingStatsSizeCheck;
  static_assert(sizeof(MatchmakingStats) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::MatchmakingStats*, "Oculus.Platform.Models", "MatchmakingStats");
#pragma pack(pop)
