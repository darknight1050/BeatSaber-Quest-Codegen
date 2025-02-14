// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.PathInternal
  class PathInternal : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: PathInternal
    PathInternal() noexcept {}
    // static public System.Boolean IsPartiallyQualified(System.String path)
    // Offset: 0x1940058
    static bool IsPartiallyQualified(::Il2CppString* path);
    // static public System.Boolean HasIllegalCharacters(System.String path, System.Boolean checkAdditional)
    // Offset: 0x193FD1C
    static bool HasIllegalCharacters(::Il2CppString* path, bool checkAdditional);
  }; // System.IO.PathInternal
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::PathInternal*, "System.IO", "PathInternal");
