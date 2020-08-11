// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Collections.IStructuralEquatable
#include "System/Collections/IStructuralEquatable.hpp"
// Including type: System.Collections.IStructuralComparable
#include "System/Collections/IStructuralComparable.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.ITupleInternal
#include "System/ITupleInternal.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEqualityComparer
  class IEqualityComparer;
  // Forward declaring type: IComparer
  class IComparer;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Tuple`2
  template<typename T1, typename T2>
  class Tuple_2 : public ::CsObject, public System::Collections::IStructuralEquatable, public System::Collections::IStructuralComparable, public System::IComparable, public System::ITupleInternal {
    public:
    // private readonly T1 m_Item1
    // Offset: 0x0
    T1 m_Item1;
    // private readonly T2 m_Item2
    // Offset: 0x0
    T2 m_Item2;
    // public T1 get_Item1()
    // Offset: 0xFFFFFFFF
    T1 get_Item1() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T1>(this, "get_Item1"));
    }
    // public T2 get_Item2()
    // Offset: 0xFFFFFFFF
    T2 get_Item2() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T2>(this, "get_Item2"));
    }
    // public System.Void .ctor(T1 item1, T2 item2)
    // Offset: 0xFFFFFFFF
    static Tuple_2<T1, T2>* New_ctor(T1 item1, T2 item2) {
      return (Tuple_2<T1, T2>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tuple_2<T1, T2>*>::get(), item1, item2)));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::CsObject* obj) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", obj));
    }
    // private System.Boolean System.Collections.IStructuralEquatable.Equals(System.Object other, System.Collections.IEqualityComparer comparer)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IStructuralEquatable
    // Base method: System.Boolean IStructuralEquatable::Equals(System.Object other, System.Collections.IEqualityComparer comparer)
    bool System_Collections_IStructuralEquatable_Equals(::CsObject* other, System::Collections::IEqualityComparer* comparer) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "System.Collections.IStructuralEquatable.Equals", other, comparer));
    }
    // private System.Int32 System.IComparable.CompareTo(System.Object obj)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.IComparable
    // Base method: System.Int32 IComparable::CompareTo(System.Object obj)
    int System_IComparable_CompareTo(::CsObject* obj) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "System.IComparable.CompareTo", obj));
    }
    // private System.Int32 System.Collections.IStructuralComparable.CompareTo(System.Object other, System.Collections.IComparer comparer)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IStructuralComparable
    // Base method: System.Int32 IStructuralComparable::CompareTo(System.Object other, System.Collections.IComparer comparer)
    int System_Collections_IStructuralComparable_CompareTo(::CsObject* other, System::Collections::IComparer* comparer) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "System.Collections.IStructuralComparable.CompareTo", other, comparer));
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
    }
    // private System.Int32 System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer comparer)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IStructuralEquatable
    // Base method: System.Int32 IStructuralEquatable::GetHashCode(System.Collections.IEqualityComparer comparer)
    int System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer* comparer) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "System.Collections.IStructuralEquatable.GetHashCode", comparer));
    }
    // public override System.String ToString()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::CsString* ToString() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "ToString"));
    }
    // private System.String System.ITupleInternal.ToString(System.Text.StringBuilder sb)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.ITupleInternal
    // Base method: System.String ITupleInternal::ToString(System.Text.StringBuilder sb)
    ::CsString* System_ITupleInternal_ToString(System::Text::StringBuilder* sb) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "System.ITupleInternal.ToString", sb));
    }
  }; // System.Tuple`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Tuple_2, "System", "Tuple`2");
#pragma pack(pop)
