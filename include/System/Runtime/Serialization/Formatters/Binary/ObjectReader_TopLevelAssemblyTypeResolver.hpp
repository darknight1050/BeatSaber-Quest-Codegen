// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.Binary.ObjectReader
#include "System/Runtime/Serialization/Formatters/Binary/ObjectReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.ObjectReader/TopLevelAssemblyTypeResolver
  // [] Offset: FFFFFFFF
  class ObjectReader::TopLevelAssemblyTypeResolver : public ::Il2CppObject {
    public:
    // private System.Reflection.Assembly m_topLevelAssembly
    // Size: 0x8
    // Offset: 0x10
    System::Reflection::Assembly* m_topLevelAssembly;
    // Field size check
    static_assert(sizeof(System::Reflection::Assembly*) == 0x8);
    // Creating value type constructor for type: TopLevelAssemblyTypeResolver
    TopLevelAssemblyTypeResolver(System::Reflection::Assembly* m_topLevelAssembly_ = {}) noexcept : m_topLevelAssembly{m_topLevelAssembly_} {}
    // Creating conversion operator: operator System::Reflection::Assembly*
    constexpr operator System::Reflection::Assembly*() const noexcept {
      return m_topLevelAssembly;
    }
    // public System.Void .ctor(System.Reflection.Assembly topLevelAssembly)
    // Offset: 0x14638BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectReader::TopLevelAssemblyTypeResolver* New_ctor(System::Reflection::Assembly* topLevelAssembly) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::ObjectReader::TopLevelAssemblyTypeResolver::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectReader::TopLevelAssemblyTypeResolver*, creationType>(topLevelAssembly)));
    }
    // public System.Type ResolveType(System.Reflection.Assembly assembly, System.String simpleTypeName, System.Boolean ignoreCase)
    // Offset: 0x14638E8
    System::Type* ResolveType(System::Reflection::Assembly* assembly, ::Il2CppString* simpleTypeName, bool ignoreCase);
  }; // System.Runtime.Serialization.Formatters.Binary.ObjectReader/TopLevelAssemblyTypeResolver
  #pragma pack(pop)
  static check_size<sizeof(ObjectReader::TopLevelAssemblyTypeResolver), 16 + sizeof(System::Reflection::Assembly*)> __System_Runtime_Serialization_Formatters_Binary_ObjectReader_TopLevelAssemblyTypeResolverSizeCheck;
  static_assert(sizeof(ObjectReader::TopLevelAssemblyTypeResolver) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::ObjectReader::TopLevelAssemblyTypeResolver*, "System.Runtime.Serialization.Formatters.Binary", "ObjectReader/TopLevelAssemblyTypeResolver");
