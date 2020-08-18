// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.PingResult
  class PingResult : public ::Il2CppObject {
    public:
    // private System.UInt64 <ID>k__BackingField
    // Offset: 0x10
    uint64_t ID;
    // private System.Nullable`1<System.UInt64> pingTimeUsec
    // Offset: 0x18
    System::Nullable_1<uint64_t> pingTimeUsec;
    // public System.Void .ctor(System.UInt64 id, System.Nullable`1<System.UInt64> pingTimeUsec)
    // Offset: 0xE02710
    static PingResult* New_ctor(uint64_t id, System::Nullable_1<uint64_t> pingTimeUsec);
    // public System.UInt64 get_ID()
    // Offset: 0xE05D34
    uint64_t get_ID();
    // private System.Void set_ID(System.UInt64 value)
    // Offset: 0xE05D3C
    void set_ID(uint64_t value);
    // public System.UInt64 get_PingTimeUsec()
    // Offset: 0xE05D44
    uint64_t get_PingTimeUsec();
    // public System.Boolean get_IsTimeout()
    // Offset: 0xE05DAC
    bool get_IsTimeout();
  }; // Oculus.Platform.Models.PingResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::PingResult*, "Oculus.Platform.Models", "PingResult");
#pragma pack(pop)
