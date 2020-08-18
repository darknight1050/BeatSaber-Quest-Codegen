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
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.ApplicationVersion
  class ApplicationVersion : public ::Il2CppObject {
    public:
    // public readonly System.Int32 CurrentCode
    // Offset: 0x10
    int CurrentCode;
    // public readonly System.String CurrentName
    // Offset: 0x18
    ::Il2CppString* CurrentName;
    // public readonly System.Int32 LatestCode
    // Offset: 0x20
    int LatestCode;
    // public readonly System.String LatestName
    // Offset: 0x28
    ::Il2CppString* LatestName;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xDFC648
    static ApplicationVersion* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.ApplicationVersion
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::ApplicationVersion*, "Oculus.Platform.Models", "ApplicationVersion");
#pragma pack(pop)
