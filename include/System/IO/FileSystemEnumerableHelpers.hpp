// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Microsoft.Win32.Win32Native
#include "Microsoft/Win32/Win32Native.hpp"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.FileSystemEnumerableHelpers
  class FileSystemEnumerableHelpers : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: FileSystemEnumerableHelpers
    FileSystemEnumerableHelpers() noexcept {}
    // static System.Boolean IsDir(Microsoft.Win32.Win32Native/WIN32_FIND_DATA data)
    // Offset: 0x193A338
    static bool IsDir(Microsoft::Win32::Win32Native::WIN32_FIND_DATA* data);
    // static System.Boolean IsFile(Microsoft.Win32.Win32Native/WIN32_FIND_DATA data)
    // Offset: 0x193A3D4
    static bool IsFile(Microsoft::Win32::Win32Native::WIN32_FIND_DATA* data);
  }; // System.IO.FileSystemEnumerableHelpers
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileSystemEnumerableHelpers*, "System.IO", "FileSystemEnumerableHelpers");
