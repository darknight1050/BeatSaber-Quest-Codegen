// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: Mono
namespace Mono {
  // Forward declaring type: SafeStringMarshal
  struct SafeStringMarshal;
  // Forward declaring type: MonoAssemblyName
  struct MonoAssemblyName;
}
// Completed forward declares
// Type namespace: Mono
namespace Mono {
  // Autogenerated type: Mono.RuntimeMarshal
  class RuntimeMarshal : public ::Il2CppObject {
    public:
    // static System.String PtrToUtf8String(System.IntPtr ptr)
    // Offset: 0x1015788
    static ::Il2CppString* PtrToUtf8String(System::IntPtr ptr);
    // static Mono.SafeStringMarshal MarshalString(System.String str)
    // Offset: 0x1015894
    static Mono::SafeStringMarshal MarshalString(::Il2CppString* str);
    // static private System.Int32 DecodeBlobSize(System.IntPtr in_ptr, System.IntPtr out_ptr)
    // Offset: 0x1015920
    static int DecodeBlobSize(System::IntPtr in_ptr, System::IntPtr& out_ptr);
    // static System.Byte[] DecodeBlobArray(System.IntPtr ptr)
    // Offset: 0x10159A4
    static ::Array<uint8_t>* DecodeBlobArray(System::IntPtr ptr);
    // static System.Int32 AsciHexDigitValue(System.Int32 c)
    // Offset: 0x1015A60
    static int AsciHexDigitValue(int c);
    // static System.Void FreeAssemblyName(Mono.MonoAssemblyName name, System.Boolean freeStruct)
    // Offset: 0x1015A8C
    static void FreeAssemblyName(Mono::MonoAssemblyName& name, bool freeStruct);
  }; // Mono.RuntimeMarshal
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::RuntimeMarshal*, "Mono", "RuntimeMarshal");
#pragma pack(pop)
