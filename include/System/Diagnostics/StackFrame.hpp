// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
}
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Autogenerated type: System.Diagnostics.StackFrame
  class StackFrame : public ::Il2CppObject {
    public:
    // private System.Int32 ilOffset
    // Offset: 0x10
    int ilOffset;
    // private System.Int32 nativeOffset
    // Offset: 0x14
    int nativeOffset;
    // private System.Int64 methodAddress
    // Offset: 0x18
    int64_t methodAddress;
    // private System.UInt32 methodIndex
    // Offset: 0x20
    uint methodIndex;
    // private System.Reflection.MethodBase methodBase
    // Offset: 0x28
    System::Reflection::MethodBase* methodBase;
    // private System.String fileName
    // Offset: 0x30
    ::Il2CppString* fileName;
    // private System.Int32 lineNumber
    // Offset: 0x38
    int lineNumber;
    // private System.Int32 columnNumber
    // Offset: 0x3C
    int columnNumber;
    // private System.String internalMethodName
    // Offset: 0x40
    ::Il2CppString* internalMethodName;
    // static field const value: static public System.Int32 OFFSET_UNKNOWN
    static constexpr const int OFFSET_UNKNOWN = -1;
    // Get static field: static public System.Int32 OFFSET_UNKNOWN
    static int _get_OFFSET_UNKNOWN();
    // Set static field: static public System.Int32 OFFSET_UNKNOWN
    static void _set_OFFSET_UNKNOWN(int value);
    // static private System.Boolean get_frame_info(System.Int32 skip, System.Boolean needFileInfo, System.Reflection.MethodBase method, System.Int32 iloffset, System.Int32 native_offset, System.String file, System.Int32 line, System.Int32 column)
    // Offset: 0xBF2378
    static bool get_frame_info(int skip, bool needFileInfo, System::Reflection::MethodBase*& method, int& iloffset, int& native_offset, ::Il2CppString*& file, int& line, int& column);
    // public System.Void .ctor(System.Int32 skipFrames, System.Boolean fNeedFileInfo)
    // Offset: 0xBF23DC
    static StackFrame* New_ctor(int skipFrames, bool fNeedFileInfo);
    // public System.Int32 GetFileLineNumber()
    // Offset: 0xBF2448
    int GetFileLineNumber();
    // public System.String GetFileName()
    // Offset: 0xBF2450
    ::Il2CppString* GetFileName();
    // System.String GetSecureFileName()
    // Offset: 0xBF2458
    ::Il2CppString* GetSecureFileName();
    // public System.Int32 GetILOffset()
    // Offset: 0xBF2534
    int GetILOffset();
    // public System.Reflection.MethodBase GetMethod()
    // Offset: 0xBF253C
    System::Reflection::MethodBase* GetMethod();
    // public System.Int32 GetNativeOffset()
    // Offset: 0xBF2544
    int GetNativeOffset();
    // System.Int64 GetMethodAddress()
    // Offset: 0xBF254C
    int64_t GetMethodAddress();
    // System.UInt32 GetMethodIndex()
    // Offset: 0xBF2554
    uint GetMethodIndex();
    // System.String GetInternalMethodName()
    // Offset: 0xBF255C
    ::Il2CppString* GetInternalMethodName();
    // public System.Void .ctor()
    // Offset: 0xBF2380
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static StackFrame* New_ctor();
    // public override System.String ToString()
    // Offset: 0xBF2564
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Diagnostics.StackFrame
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::StackFrame*, "System.Diagnostics", "StackFrame");
#pragma pack(pop)
