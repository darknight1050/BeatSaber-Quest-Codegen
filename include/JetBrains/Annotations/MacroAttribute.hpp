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
  // Autogenerated type: JetBrains.Annotations.MacroAttribute
  class MacroAttribute : public System::Attribute {
    public:
    // private System.String <Expression>k__BackingField
    // Offset: 0x10
    ::CsString* Expression;
    // private System.Int32 <Editable>k__BackingField
    // Offset: 0x18
    int Editable;
    // private System.String <Target>k__BackingField
    // Offset: 0x20
    ::CsString* Target;
    // public System.String get_Expression()
    // Offset: 0x19454D0
    ::CsString* get_Expression();
    // public System.Void set_Expression(System.String value)
    // Offset: 0x19454D8
    void set_Expression(::CsString* value);
    // public System.Int32 get_Editable()
    // Offset: 0x19454E0
    int get_Editable();
    // public System.Void set_Editable(System.Int32 value)
    // Offset: 0x19454E8
    void set_Editable(int value);
    // public System.String get_Target()
    // Offset: 0x19454F0
    ::CsString* get_Target();
    // public System.Void set_Target(System.String value)
    // Offset: 0x19454F8
    void set_Target(::CsString* value);
    // public System.Void .ctor()
    // Offset: 0x1945500
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static MacroAttribute* New_ctor();
  }; // JetBrains.Annotations.MacroAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::MacroAttribute*, "JetBrains.Annotations", "MacroAttribute");
#pragma pack(pop)
