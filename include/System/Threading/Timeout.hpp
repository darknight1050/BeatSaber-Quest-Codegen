// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.Timeout
  class Timeout : public ::CsObject {
    public:
    // Get static field: static public readonly System.TimeSpan InfiniteTimeSpan
    static System::TimeSpan _get_InfiniteTimeSpan();
    // Set static field: static public readonly System.TimeSpan InfiniteTimeSpan
    static void _set_InfiniteTimeSpan(System::TimeSpan value);
    // static private System.Void .cctor()
    // Offset: 0xCD6978
    static void _cctor();
  }; // System.Threading.Timeout
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Timeout*, "System.Threading", "Timeout");
#pragma pack(pop)
