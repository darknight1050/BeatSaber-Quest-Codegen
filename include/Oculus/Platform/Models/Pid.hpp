// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.Pid
  class Pid : public ::CsObject {
    public:
    // public readonly System.String Id
    // Offset: 0x10
    ::CsString* Id;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xE93F9C
    static Pid* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.Pid
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::Pid*, "Oculus.Platform.Models", "Pid");
#pragma pack(pop)
