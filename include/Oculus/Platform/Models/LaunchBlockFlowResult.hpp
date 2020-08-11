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
// Completed il2cpp-utils forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.LaunchBlockFlowResult
  class LaunchBlockFlowResult : public ::CsObject {
    public:
    // public readonly System.Boolean DidBlock
    // Offset: 0x10
    bool DidBlock;
    // public readonly System.Boolean DidCancel
    // Offset: 0x11
    bool DidCancel;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xE8CFA8
    static LaunchBlockFlowResult* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.LaunchBlockFlowResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LaunchBlockFlowResult*, "Oculus.Platform.Models", "LaunchBlockFlowResult");
#pragma pack(pop)
