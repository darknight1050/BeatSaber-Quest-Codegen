// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Microsoft.Win32.Win32Native
#include "Microsoft/Win32/Win32Native.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Size: 0x20
  // Autogenerated type: Microsoft.Win32.Win32Native/WIN32_FIND_DATA
  // [] Offset: FFFFFFFF
  class Win32Native::WIN32_FIND_DATA : public ::Il2CppObject {
    public:
    // System.Int32 dwFileAttributes
    // Size: 0x4
    // Offset: 0x10
    int dwFileAttributes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: dwFileAttributes and: cFileName
    char __padding0[0x4] = {};
    // System.String cFileName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* cFileName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: WIN32_FIND_DATA
    WIN32_FIND_DATA(int dwFileAttributes_ = {}, ::Il2CppString* cFileName_ = {}) noexcept : dwFileAttributes{dwFileAttributes_}, cFileName{cFileName_} {}
    // public System.Void .ctor()
    // Offset: 0x1517B44
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Win32Native::WIN32_FIND_DATA* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Microsoft::Win32::Win32Native::WIN32_FIND_DATA::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Win32Native::WIN32_FIND_DATA*, creationType>()));
    }
  }; // Microsoft.Win32.Win32Native/WIN32_FIND_DATA
  static check_size<sizeof(Win32Native::WIN32_FIND_DATA), 24 + sizeof(::Il2CppString*)> __Microsoft_Win32_Win32Native_WIN32_FIND_DATASizeCheck;
  static_assert(sizeof(Win32Native::WIN32_FIND_DATA) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::Win32Native::WIN32_FIND_DATA*, "Microsoft.Win32", "Win32Native/WIN32_FIND_DATA");
#pragma pack(pop)
