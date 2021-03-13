// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Platform
  // [] Offset: FFFFFFFF
  class Platform : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Platform
    Platform() noexcept {}
    // Get static field: static private System.Boolean checkedOS
    static bool _get_checkedOS();
    // Set static field: static private System.Boolean checkedOS
    static void _set_checkedOS(bool value);
    // Get static field: static private System.Boolean isMacOS
    static bool _get_isMacOS();
    // Set static field: static private System.Boolean isMacOS
    static void _set_isMacOS(bool value);
    // Get static field: static private System.Boolean isFreeBSD
    static bool _get_isFreeBSD();
    // Set static field: static private System.Boolean isFreeBSD
    static void _set_isFreeBSD(bool value);
    // static private System.Int32 uname(System.IntPtr buf)
    // Offset: 0x1415E10
    static int uname(System::IntPtr buf);
    // static private System.Void CheckOS()
    // Offset: 0x1415E90
    static void CheckOS();
    // static public System.Boolean get_IsMacOS()
    // Offset: 0x141605C
    static bool get_IsMacOS();
    // static public System.Boolean get_IsFreeBSD()
    // Offset: 0x1416144
    static bool get_IsFreeBSD();
  }; // System.Platform
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Platform*, "System", "Platform");
