// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Microsoft.Win32.Win32Native
#include "Microsoft/Win32/Win32Native.hpp"
// Completed includes
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Autogenerated type: Microsoft.Win32.Win32Native/WIN32_FIND_DATA
  class Win32Native::WIN32_FIND_DATA : public ::Il2CppObject {
    public:
    // System.Int32 dwFileAttributes
    // Offset: 0x10
    int dwFileAttributes;
    // System.String cFileName
    // Offset: 0x18
    ::Il2CppString* cFileName;
    // public System.Void .ctor()
    // Offset: 0x100B430
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Win32Native::WIN32_FIND_DATA* New_ctor();
  }; // Microsoft.Win32.Win32Native/WIN32_FIND_DATA
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::Win32Native::WIN32_FIND_DATA*, "Microsoft.Win32", "Win32Native/WIN32_FIND_DATA");
#pragma pack(pop)
