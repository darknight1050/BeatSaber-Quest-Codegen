// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Microsoft::Win32
namespace Microsoft::Win32 {
}
// Completed forward declares
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Microsoft.Win32.Win32Native
  class Win32Native : public ::Il2CppObject {
    public:
    // Nested type: Microsoft::Win32::Win32Native::WIN32_FIND_DATA
    class WIN32_FIND_DATA;
    // Creating value type constructor for type: Win32Native
    Win32Native() noexcept {}
    // static public System.String GetMessage(System.Int32 hr)
    // Offset: 0x1A3BF40
    static ::Il2CppString* GetMessage(int hr);
    // static public System.Int32 MakeHRFromErrorCode(System.Int32 errorCode)
    // Offset: 0x1A3BFBC
    static int MakeHRFromErrorCode(int errorCode);
  }; // Microsoft.Win32.Win32Native
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::Win32Native*, "Microsoft.Win32", "Win32Native");
