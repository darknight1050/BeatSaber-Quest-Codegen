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
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.Internal
namespace UnityEngine::Internal {
  // Autogenerated type: UnityEngine.Internal.DefaultValueAttribute
  class DefaultValueAttribute : public System::Attribute {
    public:
    // private System.Object DefaultValue
    // Offset: 0x10
    ::CsObject* DefaultValue;
    // public System.Void .ctor(System.String value)
    // Offset: 0x12FA464
    static DefaultValueAttribute* New_ctor(::CsString* value);
    // public System.Object get_Value()
    // Offset: 0x12FA498
    ::CsObject* get_Value();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x12FA4A0
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::CsObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x12FA56C
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.Internal.DefaultValueAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Internal::DefaultValueAttribute*, "UnityEngine.Internal", "DefaultValueAttribute");
#pragma pack(pop)
