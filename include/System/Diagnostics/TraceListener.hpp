// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Completed includes
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Autogenerated type: System.Diagnostics.TraceListener
  class TraceListener : public System::IDisposable, public System::MarshalByRefObject {
    public:
    // private System.Int32 indentLevel
    // Offset: 0x18
    int indentLevel;
    // private System.Int32 indentSize
    // Offset: 0x1C
    int indentSize;
    // private System.Boolean needIndent
    // Offset: 0x20
    bool needIndent;
    // private System.String listenerName
    // Offset: 0x28
    ::Il2CppString* listenerName;
    // protected System.Void .ctor(System.String name)
    // Offset: 0xEBAFE4
    static TraceListener* New_ctor(::Il2CppString* name);
    // public System.Boolean get_IsThreadSafe()
    // Offset: 0xEBE570
    bool get_IsThreadSafe();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0xEBE5F4
    void Dispose(bool disposing);
    // public System.Void Flush()
    // Offset: 0xEBE5F8
    void Flush();
    // public System.Void set_IndentLevel(System.Int32 value)
    // Offset: 0xEBD960
    void set_IndentLevel(int value);
    // public System.Void set_IndentSize(System.Int32 value)
    // Offset: 0xEBD97C
    void set_IndentSize(int value);
    // protected System.Boolean get_NeedIndent()
    // Offset: 0xEBE5FC
    bool get_NeedIndent();
    // protected System.Void set_NeedIndent(System.Boolean value)
    // Offset: 0xEBE604
    void set_NeedIndent(bool value);
    // public System.Void Fail(System.String message)
    // Offset: 0xEBB040
    void Fail(::Il2CppString* message);
    // public System.Void Fail(System.String message, System.String detailMessage)
    // Offset: 0xEBB0F8
    void Fail(::Il2CppString* message, ::Il2CppString* detailMessage);
    // public System.Void Write(System.String message)
    // Offset: 0xFFFFFFFF
    void Write(::Il2CppString* message);
    // protected System.Void WriteIndent()
    // Offset: 0xEBE610
    void WriteIndent();
    // public System.Void WriteLine(System.String message)
    // Offset: 0xFFFFFFFF
    void WriteLine(::Il2CppString* message);
    // public System.Void Dispose()
    // Offset: 0xEBE578
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // System.Diagnostics.TraceListener
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::TraceListener*, "System.Diagnostics", "TraceListener");
#pragma pack(pop)
