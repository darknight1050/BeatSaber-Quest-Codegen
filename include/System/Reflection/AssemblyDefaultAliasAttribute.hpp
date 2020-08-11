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
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.AssemblyDefaultAliasAttribute
  class AssemblyDefaultAliasAttribute : public System::Attribute {
    public:
    // private System.String m_defaultAlias
    // Offset: 0x10
    ::CsString* m_defaultAlias;
    // public System.Void .ctor(System.String defaultAlias)
    // Offset: 0x134CB54
    static AssemblyDefaultAliasAttribute* New_ctor(::CsString* defaultAlias);
  }; // System.Reflection.AssemblyDefaultAliasAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyDefaultAliasAttribute*, "System.Reflection", "AssemblyDefaultAliasAttribute");
#pragma pack(pop)
