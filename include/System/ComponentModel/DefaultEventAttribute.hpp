// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct CsString;
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Autogenerated type: System.ComponentModel.DefaultEventAttribute
  class DefaultEventAttribute : public System::Attribute {
    public:
    // private readonly System.String name
    // Offset: 0x10
    ::CsString* name;
    // Get static field: static public readonly System.ComponentModel.DefaultEventAttribute Default
    static System::ComponentModel::DefaultEventAttribute* _get_Default();
    // Set static field: static public readonly System.ComponentModel.DefaultEventAttribute Default
    static void _set_Default(System::ComponentModel::DefaultEventAttribute* value);
    // public System.Void .ctor(System.String name)
    // Offset: 0xF456D4
    static DefaultEventAttribute* New_ctor(::CsString* name);
    // public System.String get_Name()
    // Offset: 0xF45708
    ::CsString* get_Name();
    // static private System.Void .cctor()
    // Offset: 0xF457AC
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xF45710
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::CsObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF457A4
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
  }; // System.ComponentModel.DefaultEventAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::DefaultEventAttribute*, "System.ComponentModel", "DefaultEventAttribute");
#pragma pack(pop)
