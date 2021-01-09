// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.Versioning
namespace System::Runtime::Versioning {
  // Size: 0x20
  // Autogenerated type: System.Runtime.Versioning.TargetFrameworkAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D3A760
  class TargetFrameworkAttribute : public System::Attribute {
    public:
    // private System.String _frameworkName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* frameworkName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _frameworkDisplayName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* frameworkDisplayName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: TargetFrameworkAttribute
    TargetFrameworkAttribute(::Il2CppString* frameworkName_ = {}, ::Il2CppString* frameworkDisplayName_ = {}) noexcept : frameworkName{frameworkName_}, frameworkDisplayName{frameworkDisplayName_} {}
    // public System.Void .ctor(System.String frameworkName)
    // Offset: 0x1446854
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TargetFrameworkAttribute* New_ctor(::Il2CppString* frameworkName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Versioning::TargetFrameworkAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TargetFrameworkAttribute*, creationType>(frameworkName)));
    }
    // public System.Void set_FrameworkDisplayName(System.String value)
    // Offset: 0x14468F8
    void set_FrameworkDisplayName(::Il2CppString* value);
  }; // System.Runtime.Versioning.TargetFrameworkAttribute
  static check_size<sizeof(TargetFrameworkAttribute), 24 + sizeof(::Il2CppString*)> __System_Runtime_Versioning_TargetFrameworkAttributeSizeCheck;
  static_assert(sizeof(TargetFrameworkAttribute) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Versioning::TargetFrameworkAttribute*, "System.Runtime.Versioning", "TargetFrameworkAttribute");
#pragma pack(pop)
