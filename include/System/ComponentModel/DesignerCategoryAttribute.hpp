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
  // Autogenerated type: System.ComponentModel.DesignerCategoryAttribute
  class DesignerCategoryAttribute : public System::Attribute {
    public:
    // private System.String category
    // Offset: 0x10
    ::Il2CppString* category;
    // Get static field: static public readonly System.ComponentModel.DesignerCategoryAttribute Component
    static System::ComponentModel::DesignerCategoryAttribute* _get_Component();
    // Set static field: static public readonly System.ComponentModel.DesignerCategoryAttribute Component
    static void _set_Component(System::ComponentModel::DesignerCategoryAttribute* value);
    // Get static field: static public readonly System.ComponentModel.DesignerCategoryAttribute Default
    static System::ComponentModel::DesignerCategoryAttribute* _get_Default();
    // Set static field: static public readonly System.ComponentModel.DesignerCategoryAttribute Default
    static void _set_Default(System::ComponentModel::DesignerCategoryAttribute* value);
    // Get static field: static public readonly System.ComponentModel.DesignerCategoryAttribute Form
    static System::ComponentModel::DesignerCategoryAttribute* _get_Form();
    // Set static field: static public readonly System.ComponentModel.DesignerCategoryAttribute Form
    static void _set_Form(System::ComponentModel::DesignerCategoryAttribute* value);
    // Get static field: static public readonly System.ComponentModel.DesignerCategoryAttribute Generic
    static System::ComponentModel::DesignerCategoryAttribute* _get_Generic();
    // Set static field: static public readonly System.ComponentModel.DesignerCategoryAttribute Generic
    static void _set_Generic(System::ComponentModel::DesignerCategoryAttribute* value);
    // public System.Void .ctor(System.String category)
    // Offset: 0xEB8E58
    static DesignerCategoryAttribute* New_ctor(::Il2CppString* category);
    // static private System.Void .cctor()
    // Offset: 0xEB8F50
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0xEB8DF0
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static DesignerCategoryAttribute* New_ctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xEB8E8C
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xEB8F30
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
  }; // System.ComponentModel.DesignerCategoryAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::DesignerCategoryAttribute*, "System.ComponentModel", "DesignerCategoryAttribute");
#pragma pack(pop)
