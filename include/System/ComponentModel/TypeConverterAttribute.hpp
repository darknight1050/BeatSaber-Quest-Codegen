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
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x18
  // Autogenerated type: System.ComponentModel.TypeConverterAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D45354
  class TypeConverterAttribute : public System::Attribute {
    public:
    // private System.String typeName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* typeName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: TypeConverterAttribute
    TypeConverterAttribute(::Il2CppString* typeName_ = {}) noexcept : typeName{typeName_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return typeName;
    }
    // Get static field: static public readonly System.ComponentModel.TypeConverterAttribute Default
    static System::ComponentModel::TypeConverterAttribute* _get_Default();
    // Set static field: static public readonly System.ComponentModel.TypeConverterAttribute Default
    static void _set_Default(System::ComponentModel::TypeConverterAttribute* value);
    // public System.Void .ctor(System.Type type)
    // Offset: 0x1481BD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeConverterAttribute* New_ctor(System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::TypeConverterAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeConverterAttribute*, creationType>(type)));
    }
    // public System.String get_ConverterTypeName()
    // Offset: 0x1481C28
    ::Il2CppString* get_ConverterTypeName();
    // static private System.Void .cctor()
    // Offset: 0x1481CE4
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1481B70
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeConverterAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::TypeConverterAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeConverterAttribute*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1481C30
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1481CC4
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
  }; // System.ComponentModel.TypeConverterAttribute
  static check_size<sizeof(TypeConverterAttribute), 16 + sizeof(::Il2CppString*)> __System_ComponentModel_TypeConverterAttributeSizeCheck;
  static_assert(sizeof(TypeConverterAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::TypeConverterAttribute*, "System.ComponentModel", "TypeConverterAttribute");
#pragma pack(pop)
