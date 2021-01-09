// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.AchievementType
#include "Oculus/Platform/AchievementType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x30
  // Autogenerated type: Oculus.Platform.Models.AchievementDefinition
  // [] Offset: FFFFFFFF
  class AchievementDefinition : public ::Il2CppObject {
    public:
    // public readonly Oculus.Platform.AchievementType Type
    // Size: 0x4
    // Offset: 0x10
    Oculus::Platform::AchievementType Type;
    // Field size check
    static_assert(sizeof(Oculus::Platform::AchievementType) == 0x4);
    // Padding between fields: Type and: Name
    char __padding0[0x4] = {};
    // public readonly System.String Name
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.UInt32 BitfieldLength
    // Size: 0x4
    // Offset: 0x20
    uint BitfieldLength;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: BitfieldLength and: Target
    char __padding2[0x4] = {};
    // public readonly System.UInt64 Target
    // Size: 0x8
    // Offset: 0x28
    uint64_t Target;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // Creating value type constructor for type: AchievementDefinition
    AchievementDefinition(Oculus::Platform::AchievementType Type_ = {}, ::Il2CppString* Name_ = {}, uint BitfieldLength_ = {}, uint64_t Target_ = {}) noexcept : Type{Type_}, Name{Name_}, BitfieldLength{BitfieldLength_}, Target{Target_} {}
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x11E0A74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AchievementDefinition* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::AchievementDefinition::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AchievementDefinition*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.AchievementDefinition
  static check_size<sizeof(AchievementDefinition), 40 + sizeof(uint64_t)> __Oculus_Platform_Models_AchievementDefinitionSizeCheck;
  static_assert(sizeof(AchievementDefinition) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::AchievementDefinition*, "Oculus.Platform.Models", "AchievementDefinition");
#pragma pack(pop)
