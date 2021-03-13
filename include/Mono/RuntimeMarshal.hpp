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
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.RuntimeMarshal
  // [] Offset: FFFFFFFF
  class RuntimeMarshal : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: RuntimeMarshal
    RuntimeMarshal() noexcept {}
    // static System.String PtrToUtf8String(System.IntPtr ptr)
    // Offset: 0x18D3CE0
    static ::Il2CppString* PtrToUtf8String(System::IntPtr ptr);
    // static Mono.SafeStringMarshal MarshalString(System.String str)
    // Offset: 0x18D3DB0
    static Mono::SafeStringMarshal MarshalString(::Il2CppString* str);
    // static private System.Int32 DecodeBlobSize(System.IntPtr in_ptr, out System.IntPtr out_ptr)
    // Offset: 0x18D3E48
    static int DecodeBlobSize(System::IntPtr in_ptr, System::IntPtr& out_ptr);
    // static System.Byte[] DecodeBlobArray(System.IntPtr ptr)
    // Offset: 0x18D3ECC
    static ::Array<uint8_t>* DecodeBlobArray(System::IntPtr ptr);
    // static System.Int32 AsciHexDigitValue(System.Int32 c)
    // Offset: 0x18D3F88
    static int AsciHexDigitValue(int c);
    // static System.Void FreeAssemblyName(ref Mono.MonoAssemblyName name, System.Boolean freeStruct)
    // Offset: 0x18D3FB4
    static void FreeAssemblyName(Mono::MonoAssemblyName& name, bool freeStruct);
  }; // Mono.RuntimeMarshal
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::RuntimeMarshal*, "Mono", "RuntimeMarshal");
