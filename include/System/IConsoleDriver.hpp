// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ConsoleKeyInfo
  struct ConsoleKeyInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.IConsoleDriver
  // [] Offset: FFFFFFFF
  class IConsoleDriver {
    public:
    // Creating value type constructor for type: IConsoleDriver
    IConsoleDriver() noexcept {}
    // public System.ConsoleKeyInfo ReadKey(System.Boolean intercept)
    // Offset: 0xFFFFFFFF
    System::ConsoleKeyInfo ReadKey_NEW(bool intercept);
  }; // System.IConsoleDriver
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IConsoleDriver*, "System", "IConsoleDriver");
