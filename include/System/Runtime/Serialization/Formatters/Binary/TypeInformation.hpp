// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.TypeInformation
  class TypeInformation : public ::Il2CppObject {
    public:
    // private System.String fullTypeName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* fullTypeName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String assemblyString
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* assemblyString;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean hasTypeForwardedFrom
    // Size: 0x1
    // Offset: 0x20
    bool hasTypeForwardedFrom;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: TypeInformation
    TypeInformation(::Il2CppString* fullTypeName_ = {}, ::Il2CppString* assemblyString_ = {}, bool hasTypeForwardedFrom_ = {}) noexcept : fullTypeName{fullTypeName_}, assemblyString{assemblyString_}, hasTypeForwardedFrom{hasTypeForwardedFrom_} {}
    // System.String get_FullTypeName()
    // Offset: 0x15FC6F8
    ::Il2CppString* get_FullTypeName();
    // System.String get_AssemblyString()
    // Offset: 0x15FC700
    ::Il2CppString* get_AssemblyString();
    // System.Boolean get_HasTypeForwardedFrom()
    // Offset: 0x15FC708
    bool get_HasTypeForwardedFrom();
    // System.Void .ctor(System.String fullTypeName, System.String assemblyString, System.Boolean hasTypeForwardedFrom)
    // Offset: 0x15F03D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeInformation* New_ctor(::Il2CppString* fullTypeName, ::Il2CppString* assemblyString, bool hasTypeForwardedFrom) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::TypeInformation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeInformation*, creationType>(fullTypeName, assemblyString, hasTypeForwardedFrom)));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.TypeInformation
  #pragma pack(pop)
  static check_size<sizeof(TypeInformation), 32 + sizeof(bool)> __System_Runtime_Serialization_Formatters_Binary_TypeInformationSizeCheck;
  static_assert(sizeof(TypeInformation) == 0x21);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::TypeInformation*, "System.Runtime.Serialization.Formatters.Binary", "TypeInformation");
