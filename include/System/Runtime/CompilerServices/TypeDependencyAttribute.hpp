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
  // Autogenerated type: System.Runtime.CompilerServices.TypeDependencyAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: C97530
  class TypeDependencyAttribute : public System::Attribute {
    public:
    // private System.String typeName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* typeName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: TypeDependencyAttribute
    TypeDependencyAttribute(::Il2CppString* typeName_ = {}) noexcept : typeName{typeName_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return typeName;
    }
    // public System.Void .ctor(System.String typeName)
    // Offset: 0x12FF8AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeDependencyAttribute* New_ctor(::Il2CppString* typeName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::TypeDependencyAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeDependencyAttribute*, creationType>(typeName)));
    }
  }; // System.Runtime.CompilerServices.TypeDependencyAttribute
  #pragma pack(pop)
  static check_size<sizeof(TypeDependencyAttribute), 16 + sizeof(::Il2CppString*)> __System_Runtime_CompilerServices_TypeDependencyAttributeSizeCheck;
  static_assert(sizeof(TypeDependencyAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::TypeDependencyAttribute*, "System.Runtime.CompilerServices", "TypeDependencyAttribute");
