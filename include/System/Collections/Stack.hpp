// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Autogenerated type: System.Collections.Stack
  class Stack : public ::CsObject, public System::Collections::ICollection, public System::Collections::IEnumerable, public System::ICloneable {
    public:
    // Nested type: System::Collections::Stack::StackEnumerator
    class StackEnumerator;
    // Nested type: System::Collections::Stack::StackDebugView
    class StackDebugView;
    // private System.Object[] _array
    // Offset: 0x10
    ::Array<::CsObject*>* array;
    // private System.Int32 _size
    // Offset: 0x18
    int size;
    // private System.Int32 _version
    // Offset: 0x1C
    int version;
    // public System.Void .ctor(System.Int32 initialCapacity)
    // Offset: 0x10ACA5C
    static Stack* New_ctor(int initialCapacity);
    // public System.Void Clear()
    // Offset: 0x10ACB4C
    void Clear();
    // public System.Object Peek()
    // Offset: 0x10ACFB0
    ::CsObject* Peek();
    // public System.Object Pop()
    // Offset: 0x10AD078
    ::CsObject* Pop();
    // public System.Void Push(System.Object obj)
    // Offset: 0x10AD15C
    void Push(::CsObject* obj);
    // public System.Void .ctor()
    // Offset: 0x10AC9E8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Stack* New_ctor();
    // public System.Int32 get_Count()
    // Offset: 0x10ACB44
    // Implemented from: System.Collections.ICollection
    // Base method: System.Int32 ICollection::get_Count()
    int get_Count();
    // Creating proxy method: System_Collections_ICollection_get_Count
    // Maps to method: get_Count
    int System_Collections_ICollection_get_Count();
    // public System.Object Clone()
    // Offset: 0x10ACB88
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::CsObject* Clone();
    // public System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x10ACC28
    // Implemented from: System.Collections.ICollection
    // Base method: System.Void ICollection::CopyTo(System.Array array, System.Int32 index)
    void CopyTo(System::Array* array, int index);
    // Creating proxy method: System_Collections_ICollection_CopyTo
    // Maps to method: CopyTo
    void System_Collections_ICollection_CopyTo(System::Array* array, int index);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x10ACEE8
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* GetEnumerator();
    // Creating proxy method: System_Collections_IEnumerable_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // System.Collections.Stack
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Stack*, "System.Collections", "Stack");
#pragma pack(pop)
