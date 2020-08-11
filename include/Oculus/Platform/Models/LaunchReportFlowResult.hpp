// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
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
  // Autogenerated type: Oculus.Platform.Models.LaunchReportFlowResult
  class LaunchReportFlowResult : public ::CsObject {
    public:
    // public readonly System.Boolean DidCancel
    // Offset: 0x10
    bool DidCancel;
    // public readonly System.UInt64 UserReportId
    // Offset: 0x18
    uint64_t UserReportId;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xE8D308
    static LaunchReportFlowResult* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.LaunchReportFlowResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LaunchReportFlowResult*, "Oculus.Platform.Models", "LaunchReportFlowResult");
#pragma pack(pop)
