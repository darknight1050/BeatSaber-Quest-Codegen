// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Console
#include "System/Console.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Console/WindowsConsole
  class Console::WindowsConsole : public ::CsObject {
    public:
    // Nested type: System::Console::WindowsConsole::WindowsCancelHandler
    class WindowsCancelHandler;
    // Get static field: static public System.Boolean ctrlHandlerAdded
    static bool _get_ctrlHandlerAdded();
    // Set static field: static public System.Boolean ctrlHandlerAdded
    static void _set_ctrlHandlerAdded(bool value);
    // Get static field: static private System.Console/WindowsConsole/WindowsCancelHandler cancelHandler
    static System::Console::WindowsConsole::WindowsCancelHandler* _get_cancelHandler();
    // Set static field: static private System.Console/WindowsConsole/WindowsCancelHandler cancelHandler
    static void _set_cancelHandler(System::Console::WindowsConsole::WindowsCancelHandler* value);
    // static private System.Int32 GetConsoleCP()
    // Offset: 0x10AEDF8
    static int GetConsoleCP();
    // static private System.Int32 GetConsoleOutputCP()
    // Offset: 0x10AEE6C
    static int GetConsoleOutputCP();
    // static private System.Boolean DoWindowsConsoleCancelEvent(System.Int32 keyCode)
    // Offset: 0x10AEEE4
    static bool DoWindowsConsoleCancelEvent(int keyCode);
    // static public System.Int32 GetInputCodePage()
    // Offset: 0x10AD798
    static int GetInputCodePage();
    // static public System.Int32 GetOutputCodePage()
    // Offset: 0x10AD7F4
    static int GetOutputCodePage();
    // static private System.Void .cctor()
    // Offset: 0x10AEF54
    static void _cctor();
  }; // System.Console/WindowsConsole
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Console::WindowsConsole*, "System", "Console/WindowsConsole");
#pragma pack(pop)
