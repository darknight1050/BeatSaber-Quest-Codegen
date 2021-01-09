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
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x18
  // Autogenerated type: System.ComponentModel.DefaultValueAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D45084
  class DefaultValueAttribute : public System::Attribute {
    public:
    // private System.Object value
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: DefaultValueAttribute
    DefaultValueAttribute(::Il2CppObject* value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept {
      return value;
    }
    // public System.Void .ctor(System.Boolean value)
    // Offset: 0x1480BD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultValueAttribute* New_ctor(bool value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::DefaultValueAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultValueAttribute*, creationType>(value)));
    }
    // public System.Void .ctor(System.String value)
    // Offset: 0x1480C58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultValueAttribute* New_ctor(::Il2CppString* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::DefaultValueAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultValueAttribute*, creationType>(value)));
    }
    // public System.Void .ctor(System.Object value)
    // Offset: 0x1480C8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultValueAttribute* New_ctor(::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::DefaultValueAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultValueAttribute*, creationType>(value)));
    }
    // public System.Object get_Value()
    // Offset: 0x1480CC0
    ::Il2CppObject* get_Value();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1480CC8
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1480DE8
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
  }; // System.ComponentModel.DefaultValueAttribute
  static check_size<sizeof(DefaultValueAttribute), 16 + sizeof(::Il2CppObject*)> __System_ComponentModel_DefaultValueAttributeSizeCheck;
  static_assert(sizeof(DefaultValueAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::DefaultValueAttribute*, "System.ComponentModel", "DefaultValueAttribute");
#pragma pack(pop)
