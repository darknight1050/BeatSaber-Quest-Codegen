// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.TimeoutHelper
  class TimeoutHelper : public ::CsObject {
    public:
    // static public System.UInt32 GetTime()
    // Offset: 0xCC4BA4
    static uint GetTime();
    // static public System.Int32 UpdateTimeOut(System.UInt32 startTime, System.Int32 originalWaitMillisecondsTimeout)
    // Offset: 0xCC5034
    static int UpdateTimeOut(uint startTime, int originalWaitMillisecondsTimeout);
  }; // System.Threading.TimeoutHelper
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::TimeoutHelper*, "System.Threading", "TimeoutHelper");
#pragma pack(pop)
