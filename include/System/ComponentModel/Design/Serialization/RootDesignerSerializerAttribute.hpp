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
// Type namespace: System.ComponentModel.Design.Serialization
namespace System::ComponentModel::Design::Serialization {
  // Size: 0x28
  // Autogenerated type: System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D453A4
  // [ObsoleteAttribute] Offset: D453A4
  class RootDesignerSerializerAttribute : public System::Attribute {
    public:
    // private System.Boolean reloadable
    // Size: 0x1
    // Offset: 0x10
    bool reloadable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: reloadable and: serializerTypeName
    char __padding0[0x7] = {};
    // private System.String serializerTypeName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* serializerTypeName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String serializerBaseTypeName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* serializerBaseTypeName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: RootDesignerSerializerAttribute
    RootDesignerSerializerAttribute(bool reloadable_ = {}, ::Il2CppString* serializerTypeName_ = {}, ::Il2CppString* serializerBaseTypeName_ = {}) noexcept : reloadable{reloadable_}, serializerTypeName{serializerTypeName_}, serializerBaseTypeName{serializerBaseTypeName_} {}
    // public System.Void .ctor(System.String serializerTypeName, System.String baseSerializerTypeName, System.Boolean reloadable)
    // Offset: 0x1481010
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RootDesignerSerializerAttribute* New_ctor(::Il2CppString* serializerTypeName, ::Il2CppString* baseSerializerTypeName, bool reloadable) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RootDesignerSerializerAttribute*, creationType>(serializerTypeName, baseSerializerTypeName, reloadable)));
    }
  }; // System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute
  static check_size<sizeof(RootDesignerSerializerAttribute), 32 + sizeof(::Il2CppString*)> __System_ComponentModel_Design_Serialization_RootDesignerSerializerAttributeSizeCheck;
  static_assert(sizeof(RootDesignerSerializerAttribute) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute*, "System.ComponentModel.Design.Serialization", "RootDesignerSerializerAttribute");
#pragma pack(pop)
