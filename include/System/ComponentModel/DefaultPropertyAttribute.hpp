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
  // Autogenerated type: System.ComponentModel.DefaultPropertyAttribute
  class DefaultPropertyAttribute : public System::Attribute {
    public:
    // private readonly System.String name
    // Offset: 0x10
    ::Il2CppString* name;
    // Get static field: static public readonly System.ComponentModel.DefaultPropertyAttribute Default
    static System::ComponentModel::DefaultPropertyAttribute* _get_Default();
    // Set static field: static public readonly System.ComponentModel.DefaultPropertyAttribute Default
    static void _set_Default(System::ComponentModel::DefaultPropertyAttribute* value);
    // public System.Void .ctor(System.String name)
    // Offset: 0xEB852C
    static DefaultPropertyAttribute* New_ctor(::Il2CppString* name);
    // public System.String get_Name()
    // Offset: 0xEB8560
    ::Il2CppString* get_Name();
    // static private System.Void .cctor()
    // Offset: 0xEB8604
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xEB8568
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xEB85FC
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
  }; // System.ComponentModel.DefaultPropertyAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::DefaultPropertyAttribute*, "System.ComponentModel", "DefaultPropertyAttribute");
#pragma pack(pop)
