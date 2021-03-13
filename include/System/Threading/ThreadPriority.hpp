// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.ThreadPriority
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: C95974
  struct ThreadPriority/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ThreadPriority
    constexpr ThreadPriority(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Threading.ThreadPriority Lowest
    static constexpr const int Lowest = 0;
    // Get static field: static public System.Threading.ThreadPriority Lowest
    static System::Threading::ThreadPriority _get_Lowest();
    // Set static field: static public System.Threading.ThreadPriority Lowest
    static void _set_Lowest(System::Threading::ThreadPriority value);
    // static field const value: static public System.Threading.ThreadPriority BelowNormal
    static constexpr const int BelowNormal = 1;
    // Get static field: static public System.Threading.ThreadPriority BelowNormal
    static System::Threading::ThreadPriority _get_BelowNormal();
    // Set static field: static public System.Threading.ThreadPriority BelowNormal
    static void _set_BelowNormal(System::Threading::ThreadPriority value);
    // static field const value: static public System.Threading.ThreadPriority Normal
    static constexpr const int Normal = 2;
    // Get static field: static public System.Threading.ThreadPriority Normal
    static System::Threading::ThreadPriority _get_Normal();
    // Set static field: static public System.Threading.ThreadPriority Normal
    static void _set_Normal(System::Threading::ThreadPriority value);
    // static field const value: static public System.Threading.ThreadPriority AboveNormal
    static constexpr const int AboveNormal = 3;
    // Get static field: static public System.Threading.ThreadPriority AboveNormal
    static System::Threading::ThreadPriority _get_AboveNormal();
    // Set static field: static public System.Threading.ThreadPriority AboveNormal
    static void _set_AboveNormal(System::Threading::ThreadPriority value);
    // static field const value: static public System.Threading.ThreadPriority Highest
    static constexpr const int Highest = 4;
    // Get static field: static public System.Threading.ThreadPriority Highest
    static System::Threading::ThreadPriority _get_Highest();
    // Set static field: static public System.Threading.ThreadPriority Highest
    static void _set_Highest(System::Threading::ThreadPriority value);
  }; // System.Threading.ThreadPriority
  #pragma pack(pop)
  static check_size<sizeof(ThreadPriority), 0 + sizeof(int)> __System_Threading_ThreadPrioritySizeCheck;
  static_assert(sizeof(ThreadPriority) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ThreadPriority, "System.Threading", "ThreadPriority");
