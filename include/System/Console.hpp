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
  // Forward declaring type: ConsoleCancelEventHandler
  class ConsoleCancelEventHandler;
  // Forward declaring type: IntPtr
  struct IntPtr;
  // Forward declaring type: ConsoleKeyInfo
  struct ConsoleKeyInfo;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextWriter
  class TextWriter;
  // Forward declaring type: TextReader
  class TextReader;
  // Forward declaring type: Stream
  class Stream;
  // Forward declaring type: FileAccess
  struct FileAccess;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Console
  class Console : public ::Il2CppObject {
    public:
    // Nested type: System::Console::WindowsConsole
    class WindowsConsole;
    // Nested type: System::Console::InternalCancelHandler
    class InternalCancelHandler;
    // Creating value type constructor for type: Console
    Console() noexcept {}
    // Get static field: static System.IO.TextWriter stdout
    static System::IO::TextWriter* _get_stdout();
    // Set static field: static System.IO.TextWriter stdout
    static void _set_stdout(System::IO::TextWriter* value);
    // Get static field: static private System.IO.TextWriter stderr
    static System::IO::TextWriter* _get_stderr();
    // Set static field: static private System.IO.TextWriter stderr
    static void _set_stderr(System::IO::TextWriter* value);
    // Get static field: static private System.IO.TextReader stdin
    static System::IO::TextReader* _get_stdin();
    // Set static field: static private System.IO.TextReader stdin
    static void _set_stdin(System::IO::TextReader* value);
    // Get static field: static private System.Text.Encoding inputEncoding
    static System::Text::Encoding* _get_inputEncoding();
    // Set static field: static private System.Text.Encoding inputEncoding
    static void _set_inputEncoding(System::Text::Encoding* value);
    // Get static field: static private System.Text.Encoding outputEncoding
    static System::Text::Encoding* _get_outputEncoding();
    // Set static field: static private System.Text.Encoding outputEncoding
    static void _set_outputEncoding(System::Text::Encoding* value);
    // Get static field: static private System.ConsoleCancelEventHandler cancel_event
    static System::ConsoleCancelEventHandler* _get_cancel_event();
    // Set static field: static private System.ConsoleCancelEventHandler cancel_event
    static void _set_cancel_event(System::ConsoleCancelEventHandler* value);
    // Get static field: static private readonly System.Console/InternalCancelHandler cancel_handler
    static System::Console::InternalCancelHandler* _get_cancel_handler();
    // Set static field: static private readonly System.Console/InternalCancelHandler cancel_handler
    static void _set_cancel_handler(System::Console::InternalCancelHandler* value);
    // static private System.Void .cctor()
    // Offset: 0x1961FE8
    static void _cctor();
    // static private System.Void SetupStreams(System.Text.Encoding inputEncoding, System.Text.Encoding outputEncoding)
    // Offset: 0x19622C0
    static void SetupStreams(System::Text::Encoding* inputEncoding, System::Text::Encoding* outputEncoding);
    // static public System.IO.TextWriter get_Error()
    // Offset: 0x19629B4
    static System::IO::TextWriter* get_Error();
    // static public System.IO.TextWriter get_Out()
    // Offset: 0x1962A1C
    static System::IO::TextWriter* get_Out();
    // static private System.IO.Stream Open(System.IntPtr handle, System.IO.FileAccess access, System.Int32 bufferSize)
    // Offset: 0x1962A84
    static System::IO::Stream* Open(System::IntPtr handle, System::IO::FileAccess access, int bufferSize);
    // static public System.IO.Stream OpenStandardError(System.Int32 bufferSize)
    // Offset: 0x1962918
    static System::IO::Stream* OpenStandardError(int bufferSize);
    // static public System.IO.Stream OpenStandardInput(System.Int32 bufferSize)
    // Offset: 0x19627E0
    static System::IO::Stream* OpenStandardInput(int bufferSize);
    // static public System.IO.Stream OpenStandardOutput(System.Int32 bufferSize)
    // Offset: 0x196287C
    static System::IO::Stream* OpenStandardOutput(int bufferSize);
    // static public System.Void SetOut(System.IO.TextWriter newOut)
    // Offset: 0x1962BA8
    static void SetOut(System::IO::TextWriter* newOut);
    // static public System.Void WriteLine(System.String value)
    // Offset: 0x1962C54
    static void WriteLine(::Il2CppString* value);
    // static public System.Text.Encoding get_InputEncoding()
    // Offset: 0x1962CD8
    static System::Text::Encoding* get_InputEncoding();
    // static public System.Text.Encoding get_OutputEncoding()
    // Offset: 0x1962D40
    static System::Text::Encoding* get_OutputEncoding();
    // static public System.ConsoleKeyInfo ReadKey()
    // Offset: 0x1962DA8
    static System::ConsoleKeyInfo ReadKey();
    // static public System.ConsoleKeyInfo ReadKey(System.Boolean intercept)
    // Offset: 0x1962E10
    static System::ConsoleKeyInfo ReadKey(bool intercept);
    // static System.Void DoConsoleCancelEvent()
    // Offset: 0x1962F60
    static void DoConsoleCancelEvent();
  }; // System.Console
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Console*, "System", "Console");
