// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.TypeForwardedFromAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: C97280
  class TypeForwardedFromAttribute : public System::Attribute {
    public:
    // private System.String assemblyFullName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* assemblyFullName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: TypeForwardedFromAttribute
    TypeForwardedFromAttribute(::Il2CppString* assemblyFullName_ = {}) noexcept : assemblyFullName{assemblyFullName_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return assemblyFullName;
    }
    // public System.Void .ctor(System.String assemblyFullName)
    // Offset: 0x12FF948
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeForwardedFromAttribute* New_ctor(::Il2CppString* assemblyFullName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::TypeForwardedFromAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeForwardedFromAttribute*, creationType>(assemblyFullName)));
    }
    // public System.String get_AssemblyFullName()
    // Offset: 0x12FF9F0
    ::Il2CppString* get_AssemblyFullName();
  }; // System.Runtime.CompilerServices.TypeForwardedFromAttribute
  #pragma pack(pop)
  static check_size<sizeof(TypeForwardedFromAttribute), 16 + sizeof(::Il2CppString*)> __System_Runtime_CompilerServices_TypeForwardedFromAttributeSizeCheck;
  static_assert(sizeof(TypeForwardedFromAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::TypeForwardedFromAttribute*, "System.Runtime.CompilerServices", "TypeForwardedFromAttribute");
