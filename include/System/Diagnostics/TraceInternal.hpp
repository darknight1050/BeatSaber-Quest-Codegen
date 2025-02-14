// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: TraceListenerCollection
  class TraceListenerCollection;
}
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.TraceInternal
  class TraceInternal : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: TraceInternal
    TraceInternal() noexcept {}
    // Get static field: static private System.String appName
    static ::Il2CppString* _get_appName();
    // Set static field: static private System.String appName
    static void _set_appName(::Il2CppString* value);
    // Get static field: static private System.Diagnostics.TraceListenerCollection listeners
    static System::Diagnostics::TraceListenerCollection* _get_listeners();
    // Set static field: static private System.Diagnostics.TraceListenerCollection listeners
    static void _set_listeners(System::Diagnostics::TraceListenerCollection* value);
    // Get static field: static private System.Boolean autoFlush
    static bool _get_autoFlush();
    // Set static field: static private System.Boolean autoFlush
    static void _set_autoFlush(bool value);
    // Get static field: static private System.Boolean useGlobalLock
    static bool _get_useGlobalLock();
    // Set static field: static private System.Boolean useGlobalLock
    static void _set_useGlobalLock(bool value);
    // [ThreadStaticAttribute] Offset: 0xD888D4
    // Get static field: static private System.Int32 indentLevel
    static int _get_indentLevel();
    // Set static field: static private System.Int32 indentLevel
    static void _set_indentLevel(int value);
    // Get static field: static private System.Int32 indentSize
    static int _get_indentSize();
    // Set static field: static private System.Int32 indentSize
    static void _set_indentSize(int value);
    // Get static field: static readonly System.Object critSec
    static ::Il2CppObject* _get_critSec();
    // Set static field: static readonly System.Object critSec
    static void _set_critSec(::Il2CppObject* value);
    // static public System.Diagnostics.TraceListenerCollection get_Listeners()
    // Offset: 0x18544E0
    static System::Diagnostics::TraceListenerCollection* get_Listeners();
    // static public System.Boolean get_AutoFlush()
    // Offset: 0x185496C
    static bool get_AutoFlush();
    // static public System.Boolean get_UseGlobalLock()
    // Offset: 0x18549DC
    static bool get_UseGlobalLock();
    // static public System.Int32 get_IndentLevel()
    // Offset: 0x1854A4C
    static int get_IndentLevel();
    // static public System.Int32 get_IndentSize()
    // Offset: 0x1854AB4
    static int get_IndentSize();
    // static public System.Void Assert(System.Boolean condition)
    // Offset: 0x1851A70
    static void Assert_(bool condition);
    // static public System.Void Fail(System.String message)
    // Offset: 0x1854B24
    static void Fail(::Il2CppString* message);
    // static private System.Void InitializeSettings()
    // Offset: 0x1854708
    static void InitializeSettings();
    // static private System.Void .cctor()
    // Offset: 0x18552BC
    static void _cctor();
  }; // System.Diagnostics.TraceInternal
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::TraceInternal*, "System.Diagnostics", "TraceInternal");
