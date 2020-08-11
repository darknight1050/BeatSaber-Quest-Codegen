// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "System/Object.hpp"
// Including type: System.Object
// Already included the same include: System/Object.hpp
// Completed includes
// Begin il2cpp-utils forward declares
struct CsObject;
template<class T>
struct Array;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.ValueType
  class ValueType : public System::Object {
    public:
    // static private System.Boolean InternalEquals(System.Object o1, System.Object o2, System.Object[] fields)
    // Offset: 0x1786818
    static bool InternalEquals(::CsObject* o1, ::CsObject* o2, ::Array<::CsObject*>*& fields);
    // static System.Boolean DefaultEquals(System.Object o1, System.Object o2)
    // Offset: 0x178681C
    static bool DefaultEquals(::CsObject* o1, ::CsObject* o2);
    // static System.Int32 InternalGetHashCode(System.Object o, System.Object[] fields)
    // Offset: 0x17869E8
    static int InternalGetHashCode(::CsObject* o, ::Array<::CsObject*>*& fields);
    // protected System.Void .ctor()
    // Offset: 0x1786810
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ValueType* New_ctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x17869E4
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::CsObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x17869EC
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1786A78
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::CsString* ToString();
  }; // System.ValueType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
template<class T>
struct is_value_type<T, typename std::enable_if_t<std::is_base_of_v<System::ValueType, T>>> : std::true_type{};
DEFINE_IL2CPP_ARG_TYPE(System::ValueType*, "System", "ValueType");
#pragma pack(pop)
