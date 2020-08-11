// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.TypeValuePair
  struct TypeValuePair : public System::ValueType {
    public:
    // public System.Type Type
    // Offset: 0x0
    System::Type* Type;
    // public System.Object Value
    // Offset: 0x8
    ::CsObject* Value;
    // Creating value type constructor for type: TypeValuePair
    TypeValuePair(System::Type* Type_ = {}, ::CsObject* Value_ = {}) : Type{Type_}, Value{Value_} {}
    // public System.Void .ctor(System.Type type, System.Object value)
    // Offset: 0xA5A4F4
    static TypeValuePair* New_ctor(System::Type* type, ::CsObject* value);
  }; // Zenject.TypeValuePair
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::TypeValuePair, "Zenject", "TypeValuePair");
#pragma pack(pop)
