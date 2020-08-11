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
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.CalApplicationSuggestion
  class CalApplicationSuggestion : public ::CsObject {
    public:
    // public readonly System.UInt64 ID
    // Offset: 0x10
    uint64_t ID;
    // public readonly System.String SocialContext
    // Offset: 0x18
    ::CsString* SocialContext;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xE9339C
    static CalApplicationSuggestion* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.CalApplicationSuggestion
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::CalApplicationSuggestion*, "Oculus.Platform.Models", "CalApplicationSuggestion");
#pragma pack(pop)
