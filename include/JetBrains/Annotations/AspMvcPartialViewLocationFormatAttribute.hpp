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
  // Autogenerated type: JetBrains.Annotations.AspMvcPartialViewLocationFormatAttribute
  class AspMvcPartialViewLocationFormatAttribute : public System::Attribute {
    public:
    // private System.String <Format>k__BackingField
    // Offset: 0x10
    ::CsString* Format;
    // public System.Void .ctor(System.String format)
    // Offset: 0x19450F0
    static AspMvcPartialViewLocationFormatAttribute* New_ctor(::CsString* format);
    // public System.String get_Format()
    // Offset: 0x1945124
    ::CsString* get_Format();
    // private System.Void set_Format(System.String value)
    // Offset: 0x194512C
    void set_Format(::CsString* value);
  }; // JetBrains.Annotations.AspMvcPartialViewLocationFormatAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspMvcPartialViewLocationFormatAttribute*, "JetBrains.Annotations", "AspMvcPartialViewLocationFormatAttribute");
#pragma pack(pop)
