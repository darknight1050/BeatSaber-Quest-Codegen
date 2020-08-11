// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Reflection.CustomAttributeTypedArgument
#include "System/Reflection/CustomAttributeTypedArgument.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.CustomAttributeNamedArgument
  struct CustomAttributeNamedArgument : public System::ValueType {
    public:
    // private System.Reflection.CustomAttributeTypedArgument typedArgument
    // Offset: 0x0
    System::Reflection::CustomAttributeTypedArgument typedArgument;
    // private System.Reflection.MemberInfo memberInfo
    // Offset: 0x10
    System::Reflection::MemberInfo* memberInfo;
    // Creating value type constructor for type: CustomAttributeNamedArgument
    CustomAttributeNamedArgument(System::Reflection::CustomAttributeTypedArgument typedArgument_ = {}, System::Reflection::MemberInfo* memberInfo_ = {}) : typedArgument{typedArgument_}, memberInfo{memberInfo_} {}
    // public System.Void .ctor(System.Reflection.MemberInfo memberInfo, System.Object value)
    // Offset: 0xA431B0
    static CustomAttributeNamedArgument* New_ctor(System::Reflection::MemberInfo* memberInfo, ::CsObject* value);
    // public System.Reflection.MemberInfo get_MemberInfo()
    // Offset: 0xA431B8
    System::Reflection::MemberInfo* get_MemberInfo();
    // public System.Reflection.CustomAttributeTypedArgument get_TypedValue()
    // Offset: 0xA431C0
    System::Reflection::CustomAttributeTypedArgument get_TypedValue();
    // public override System.String ToString()
    // Offset: 0xA431CC
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::CsString* ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xA431D4
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::CsObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xA431DC
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.Reflection.CustomAttributeNamedArgument
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::CustomAttributeNamedArgument, "System.Reflection", "CustomAttributeNamedArgument");
#pragma pack(pop)
