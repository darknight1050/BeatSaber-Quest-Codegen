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
// Completed il2cpp-utils forward declares
// Type namespace: System.ComponentModel.Design.Serialization
namespace System::ComponentModel::Design::Serialization {
  // Autogenerated type: System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute
  class RootDesignerSerializerAttribute : public System::Attribute {
    public:
    // private System.Boolean reloadable
    // Offset: 0x10
    bool reloadable;
    // private System.String serializerTypeName
    // Offset: 0x18
    ::CsString* serializerTypeName;
    // private System.String serializerBaseTypeName
    // Offset: 0x20
    ::CsString* serializerBaseTypeName;
    // public System.Void .ctor(System.String serializerTypeName, System.String baseSerializerTypeName, System.Boolean reloadable)
    // Offset: 0xF45DAC
    static RootDesignerSerializerAttribute* New_ctor(::CsString* serializerTypeName, ::CsString* baseSerializerTypeName, bool reloadable);
  }; // System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute*, "System.ComponentModel.Design.Serialization", "RootDesignerSerializerAttribute");
#pragma pack(pop)
