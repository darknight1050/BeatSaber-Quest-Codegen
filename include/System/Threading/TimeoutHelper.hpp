// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.TimeoutHelper
  class TimeoutHelper : public ::Il2CppObject {
    public:
    // static public System.UInt32 GetTime()
    // Offset: 0xC378AC
    static uint GetTime();
    // static public System.Int32 UpdateTimeOut(System.UInt32 startTime, System.Int32 originalWaitMillisecondsTimeout)
    // Offset: 0xC37D3C
    static int UpdateTimeOut(uint startTime, int originalWaitMillisecondsTimeout);
  }; // System.Threading.TimeoutHelper
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::TimeoutHelper*, "System.Threading", "TimeoutHelper");
#pragma pack(pop)
