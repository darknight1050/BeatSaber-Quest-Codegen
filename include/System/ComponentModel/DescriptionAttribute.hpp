// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Autogenerated type: System.ComponentModel.DescriptionAttribute
  class DescriptionAttribute : public System::Attribute {
    public:
    // private System.String description
    // Offset: 0x10
    ::Il2CppString* description;
    // Get static field: static public readonly System.ComponentModel.DescriptionAttribute Default
    static System::ComponentModel::DescriptionAttribute* _get_Default();
    // Set static field: static public readonly System.ComponentModel.DescriptionAttribute Default
    static void _set_Default(System::ComponentModel::DescriptionAttribute* value);
    // public System.Void .ctor(System.String description)
    // Offset: 0xEB8900
    static DescriptionAttribute* New_ctor(::Il2CppString* description);
    // public System.String get_Description()
    // Offset: 0xEB8934
    ::Il2CppString* get_Description();
    // protected System.String get_DescriptionValue()
    // Offset: 0xEB893C
    ::Il2CppString* get_DescriptionValue();
    // static private System.Void .cctor()
    // Offset: 0xEB8A50
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0xEB8894
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static DescriptionAttribute* New_ctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xEB8944
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xEB8A24
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
  }; // System.ComponentModel.DescriptionAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::DescriptionAttribute*, "System.ComponentModel", "DescriptionAttribute");
#pragma pack(pop)
