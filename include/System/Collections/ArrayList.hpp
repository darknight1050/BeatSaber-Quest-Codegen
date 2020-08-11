// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Collections.IList
#include "System/Collections/IList.hpp"
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
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Autogenerated type: System.Collections.ArrayList
  class ArrayList : public ::CsObject, public System::Collections::IList, public System::Collections::ICollection, public System::Collections::IEnumerable, public System::ICloneable {
    public:
    // Nested type: System::Collections::ArrayList::ArrayListEnumeratorSimple
    class ArrayListEnumeratorSimple;
    // Nested type: System::Collections::ArrayList::ArrayListDebugView
    class ArrayListDebugView;
    // private System.Object[] _items
    // Offset: 0x10
    ::Array<::CsObject*>* items;
    // private System.Int32 _size
    // Offset: 0x18
    int size;
    // private System.Int32 _version
    // Offset: 0x1C
    int version;
    // private System.Object _syncRoot
    // Offset: 0x20
    ::CsObject* syncRoot;
    // Get static field: static private readonly System.Object[] emptyArray
    static ::Array<::CsObject*>* _get_emptyArray();
    // Set static field: static private readonly System.Object[] emptyArray
    static void _set_emptyArray(::Array<::CsObject*>* value);
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0x131CCF4
    static ArrayList* New_ctor(int capacity);
    // public System.Void .ctor(System.Collections.ICollection c)
    // Offset: 0x131CE40
    static ArrayList* New_ctor(System::Collections::ICollection* c);
    // public System.Void set_Capacity(System.Int32 value)
    // Offset: 0x131CFE4
    void set_Capacity(int value);
    // public System.Object get_SyncRoot()
    // Offset: 0x131D138
    ::CsObject* get_SyncRoot();
    // public System.Void AddRange(System.Collections.ICollection c)
    // Offset: 0x131D4C8
    void AddRange(System::Collections::ICollection* c);
    // private System.Void EnsureCapacity(System.Int32 min)
    // Offset: 0x131D470
    void EnsureCapacity(int min);
    // public System.Void InsertRange(System.Int32 index, System.Collections.ICollection c)
    // Offset: 0x131DA54
    void InsertRange(int index, System::Collections::ICollection* c);
    // public System.Object[] ToArray()
    // Offset: 0x131DE28
    ::Array<::CsObject*>* ToArray();
    // public System.Array ToArray(System.Type type)
    // Offset: 0x131DEA0
    System::Array* ToArray(System::Type* type);
    // static private System.Void .cctor()
    // Offset: 0x131DFC4
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x131CC74
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ArrayList* New_ctor();
    // public System.Int32 get_Count()
    // Offset: 0x131D128
    // Implemented from: System.Collections.ICollection
    // Base method: System.Int32 ICollection::get_Count()
    int get_Count();
    // Creating proxy method: System_Collections_ICollection_get_Count
    // Maps to method: get_Count
    int System_Collections_ICollection_get_Count();
    // public System.Boolean get_IsReadOnly()
    // Offset: 0x131D130
    // Implemented from: System.Collections.IList
    // Base method: System.Boolean IList::get_IsReadOnly()
    bool get_IsReadOnly();
    // Creating proxy method: System_Collections_IList_get_IsReadOnly
    // Maps to method: get_IsReadOnly
    bool System_Collections_IList_get_IsReadOnly();
    // public System.Object get_Item(System.Int32 index)
    // Offset: 0x131D1B0
    // Implemented from: System.Collections.IList
    // Base method: System.Object IList::get_Item(System.Int32 index)
    ::CsObject* get_Item(int index);
    // Creating proxy method: System_Collections_IList_get_Item
    // Maps to method: get_Item
    ::CsObject* System_Collections_IList_get_Item(int index);
    // public System.Void set_Item(System.Int32 index, System.Object value)
    // Offset: 0x131D294
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::set_Item(System.Int32 index, System.Object value)
    void set_Item(int index, ::CsObject* value);
    // Creating proxy method: System_Collections_IList_set_Item
    // Maps to method: set_Item
    void System_Collections_IList_set_Item(int index, ::CsObject* value);
    // public System.Int32 Add(System.Object value)
    // Offset: 0x131D3B4
    // Implemented from: System.Collections.IList
    // Base method: System.Int32 IList::Add(System.Object value)
    int Add(::CsObject* value);
    // Creating proxy method: System_Collections_IList_Add
    // Maps to method: Add
    int System_Collections_IList_Add(::CsObject* value);
    // public System.Void Clear()
    // Offset: 0x131D4E4
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::Clear()
    void Clear();
    // Creating proxy method: System_Collections_IList_Clear
    // Maps to method: Clear
    void System_Collections_IList_Clear();
    // public System.Object Clone()
    // Offset: 0x131D528
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::CsObject* Clone();
    // public System.Boolean Contains(System.Object item)
    // Offset: 0x131D5C4
    // Implemented from: System.Collections.IList
    // Base method: System.Boolean IList::Contains(System.Object item)
    bool Contains(::CsObject* item);
    // Creating proxy method: System_Collections_IList_Contains
    // Maps to method: Contains
    bool System_Collections_IList_Contains(::CsObject* item);
    // public System.Void CopyTo(System.Array array, System.Int32 arrayIndex)
    // Offset: 0x131D698
    // Implemented from: System.Collections.ICollection
    // Base method: System.Void ICollection::CopyTo(System.Array array, System.Int32 arrayIndex)
    void CopyTo(System::Array* array, int arrayIndex);
    // Creating proxy method: System_Collections_ICollection_CopyTo
    // Maps to method: CopyTo
    void System_Collections_ICollection_CopyTo(System::Array* array, int arrayIndex);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x131D760
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* GetEnumerator();
    // Creating proxy method: System_Collections_IEnumerable_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Int32 IndexOf(System.Object value)
    // Offset: 0x131D8DC
    // Implemented from: System.Collections.IList
    // Base method: System.Int32 IList::IndexOf(System.Object value)
    int IndexOf(::CsObject* value);
    // Creating proxy method: System_Collections_IList_IndexOf
    // Maps to method: IndexOf
    int System_Collections_IList_IndexOf(::CsObject* value);
    // public System.Void Insert(System.Int32 index, System.Object value)
    // Offset: 0x131D8F0
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::Insert(System.Int32 index, System.Object value)
    void Insert(int index, ::CsObject* value);
    // Creating proxy method: System_Collections_IList_Insert
    // Maps to method: Insert
    void System_Collections_IList_Insert(int index, ::CsObject* value);
    // public System.Void Remove(System.Object obj)
    // Offset: 0x131DCB8
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::Remove(System.Object obj)
    void Remove(::CsObject* obj);
    // Creating proxy method: System_Collections_IList_Remove
    // Maps to method: Remove
    void System_Collections_IList_Remove(::CsObject* obj);
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0x131DD08
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::RemoveAt(System.Int32 index)
    void RemoveAt(int index);
    // Creating proxy method: System_Collections_IList_RemoveAt
    // Maps to method: RemoveAt
    void System_Collections_IList_RemoveAt(int index);
  }; // System.Collections.ArrayList
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::ArrayList*, "System.Collections", "ArrayList");
#pragma pack(pop)
