// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
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
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Object
  class Object {
    public:
    // public System.Boolean Equals(System.Object obj)
    // Offset: 0x1346F5C
    bool Equals(::CsObject* obj);
    // static public System.Boolean Equals(System.Object objA, System.Object objB)
    // Offset: 0x1346F68
    static bool Equals(::CsObject* objA, ::CsObject* objB);
    // public System.Void .ctor()
    // Offset: 0x1342478
    static ::CsObject* New_ctor();
    // protected System.Void Finalize()
    // Offset: 0x1346F94
    void Finalize();
    // public System.Int32 GetHashCode()
    // Offset: 0x1346F98
    int GetHashCode();
    // public System.Type GetType()
    // Offset: 0x1346FA0
    System::Type* GetType();
    // protected System.Object MemberwiseClone()
    // Offset: 0x1346F44
    ::CsObject* MemberwiseClone();
    // public System.String ToString()
    // Offset: 0x1346FA4
    ::CsString* ToString();
    // static public System.Boolean ReferenceEquals(System.Object objA, System.Object objB)
    // Offset: 0x1346FC8
    static bool ReferenceEquals(::CsObject* objA, ::CsObject* objB);
    // static System.Int32 InternalGetHashCode(System.Object o)
    // Offset: 0x1346F9C
    static int InternalGetHashCode(::CsObject* o);
    // private System.Void FieldGetter(System.String typeName, System.String fieldName, System.Object val)
    // Offset: 0x1346FD4
    void FieldGetter(::CsString* typeName, ::CsString* fieldName, ::CsObject*& val);
    // private System.Void FieldSetter(System.String typeName, System.String fieldName, System.Object val)
    // Offset: 0x1346FD8
    void FieldSetter(::CsString* typeName, ::CsString* fieldName, ::CsObject* val);
  }; // System.Object
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Object*, "System", "Object");
#pragma pack(pop)
