// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Runtime.InteropServices.CharSet
#include "System/Runtime/InteropServices/CharSet.hpp"
// Including type: System.Runtime.InteropServices.CallingConvention
#include "System/Runtime/InteropServices/CallingConvention.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: RuntimeMethodInfo
  class RuntimeMethodInfo;
}
// Completed forward declares
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Autogenerated type: System.Runtime.InteropServices.DllImportAttribute
  class DllImportAttribute : public System::Attribute {
    public:
    // System.String _val
    // Offset: 0x10
    ::Il2CppString* val;
    // public System.String EntryPoint
    // Offset: 0x18
    ::Il2CppString* EntryPoint;
    // public System.Runtime.InteropServices.CharSet CharSet
    // Offset: 0x20
    System::Runtime::InteropServices::CharSet CharSet;
    // public System.Boolean SetLastError
    // Offset: 0x24
    bool SetLastError;
    // public System.Boolean ExactSpelling
    // Offset: 0x25
    bool ExactSpelling;
    // public System.Boolean PreserveSig
    // Offset: 0x26
    bool PreserveSig;
    // public System.Runtime.InteropServices.CallingConvention CallingConvention
    // Offset: 0x28
    System::Runtime::InteropServices::CallingConvention CallingConvention;
    // public System.Boolean BestFitMapping
    // Offset: 0x2C
    bool BestFitMapping;
    // public System.Boolean ThrowOnUnmappableChar
    // Offset: 0x2D
    bool ThrowOnUnmappableChar;
    // static System.Attribute GetCustomAttribute(System.Reflection.RuntimeMethodInfo method)
    // Offset: 0x10B1CDC
    static System::Attribute* GetCustomAttribute(System::Reflection::RuntimeMethodInfo* method);
    // static System.Boolean IsDefined(System.Reflection.RuntimeMethodInfo method)
    // Offset: 0x10C5CC4
    static bool IsDefined(System::Reflection::RuntimeMethodInfo* method);
    // System.Void .ctor(System.String dllName, System.String entryPoint, System.Runtime.InteropServices.CharSet charSet, System.Boolean exactSpelling, System.Boolean setLastError, System.Boolean preserveSig, System.Runtime.InteropServices.CallingConvention callingConvention, System.Boolean bestFitMapping, System.Boolean throwOnUnmappableChar)
    // Offset: 0x10C5C0C
    static DllImportAttribute* New_ctor(::Il2CppString* dllName, ::Il2CppString* entryPoint, System::Runtime::InteropServices::CharSet charSet, bool exactSpelling, bool setLastError, bool preserveSig, System::Runtime::InteropServices::CallingConvention callingConvention, bool bestFitMapping, bool throwOnUnmappableChar);
    // public System.Void .ctor(System.String dllName)
    // Offset: 0x10C5CF0
    static DllImportAttribute* New_ctor(::Il2CppString* dllName);
    // public System.String get_Value()
    // Offset: 0x10C5D24
    ::Il2CppString* get_Value();
  }; // System.Runtime.InteropServices.DllImportAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::DllImportAttribute*, "System.Runtime.InteropServices", "DllImportAttribute");
#pragma pack(pop)
