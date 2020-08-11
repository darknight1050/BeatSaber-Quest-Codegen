// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.IConsoleDriver
#include "System/IConsoleDriver.hpp"
// Including type: System.ConsoleKeyInfo
#include "System/ConsoleKeyInfo.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Autogenerated type: System.NullConsoleDriver
  class NullConsoleDriver : public ::CsObject, public System::IConsoleDriver {
    public:
    // Get static field: static private readonly System.ConsoleKeyInfo EmptyConsoleKeyInfo
    static System::ConsoleKeyInfo _get_EmptyConsoleKeyInfo();
    // Set static field: static private readonly System.ConsoleKeyInfo EmptyConsoleKeyInfo
    static void _set_EmptyConsoleKeyInfo(System::ConsoleKeyInfo value);
    // static private System.Void .cctor()
    // Offset: 0x1003C80
    static void _cctor();
    // public System.ConsoleKeyInfo ReadKey(System.Boolean intercept)
    // Offset: 0x1003C0C
    // Implemented from: System.IConsoleDriver
    // Base method: System.ConsoleKeyInfo IConsoleDriver::ReadKey(System.Boolean intercept)
    System::ConsoleKeyInfo ReadKey(bool intercept);
    // public System.Void .ctor()
    // Offset: 0x1003C78
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static NullConsoleDriver* New_ctor();
  }; // System.NullConsoleDriver
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::NullConsoleDriver*, "System", "NullConsoleDriver");
#pragma pack(pop)
