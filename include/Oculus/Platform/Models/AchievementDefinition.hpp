// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Oculus.Platform.AchievementType
#include "Oculus/Platform/AchievementType.hpp"
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
  // Autogenerated type: Oculus.Platform.Models.AchievementDefinition
  class AchievementDefinition : public ::CsObject {
    public:
    // public readonly Oculus.Platform.AchievementType Type
    // Offset: 0x10
    Oculus::Platform::AchievementType Type;
    // public readonly System.String Name
    // Offset: 0x18
    ::CsString* Name;
    // public readonly System.UInt32 BitfieldLength
    // Offset: 0x20
    uint BitfieldLength;
    // public readonly System.UInt64 Target
    // Offset: 0x28
    uint64_t Target;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xE9312C
    static AchievementDefinition* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.AchievementDefinition
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::AchievementDefinition*, "Oculus.Platform.Models", "AchievementDefinition");
#pragma pack(pop)
