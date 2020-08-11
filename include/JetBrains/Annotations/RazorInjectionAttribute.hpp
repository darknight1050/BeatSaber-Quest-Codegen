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
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Autogenerated type: JetBrains.Annotations.RazorInjectionAttribute
  class RazorInjectionAttribute : public System::Attribute {
    public:
    // private System.String <Type>k__BackingField
    // Offset: 0x10
    ::CsString* Type;
    // private System.String <FieldName>k__BackingField
    // Offset: 0x18
    ::CsString* FieldName;
    // public System.Void .ctor(System.String type, System.String fieldName)
    // Offset: 0x19457D8
    static RazorInjectionAttribute* New_ctor(::CsString* type, ::CsString* fieldName);
    // public System.String get_Type()
    // Offset: 0x1945828
    ::CsString* get_Type();
    // private System.Void set_Type(System.String value)
    // Offset: 0x1945830
    void set_Type(::CsString* value);
    // public System.String get_FieldName()
    // Offset: 0x1945838
    ::CsString* get_FieldName();
    // private System.Void set_FieldName(System.String value)
    // Offset: 0x1945840
    void set_FieldName(::CsString* value);
  }; // JetBrains.Annotations.RazorInjectionAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::RazorInjectionAttribute*, "JetBrains.Annotations", "RazorInjectionAttribute");
#pragma pack(pop)
