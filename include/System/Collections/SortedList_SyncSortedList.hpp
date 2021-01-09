// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.SortedList
#include "System/Collections/SortedList.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
  // Forward declaring type: IList
  class IList;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x58
  // Autogenerated type: System.Collections.SortedList/SyncSortedList
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: D3CC0C
  class SortedList::SyncSortedList : public System::Collections::SortedList {
    public:
    // private System.Collections.SortedList _list
    // Size: 0x8
    // Offset: 0x48
    System::Collections::SortedList* list;
    // Field size check
    static_assert(sizeof(System::Collections::SortedList*) == 0x8);
    // private System.Object _root
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppObject* root;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: SyncSortedList
    SyncSortedList(System::Collections::SortedList* list_ = {}, ::Il2CppObject* root_ = {}) noexcept : list{list_}, root{root_} {}
    // System.Void .ctor(System.Collections.SortedList list)
    // Offset: 0x152DFC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SortedList::SyncSortedList* New_ctor(System::Collections::SortedList* list) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::SortedList::SyncSortedList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SortedList::SyncSortedList*, creationType>(list)));
    }
    // public override System.Int32 get_Count()
    // Offset: 0x152EC84
    // Implemented from: System.Collections.SortedList
    // Base method: System.Int32 SortedList::get_Count()
    int get_Count();
    // Creating proxy method: System_Collections_ICollection_get_Count
    // Maps to method: get_Count
    int System_Collections_ICollection_get_Count();
    // public override System.Object get_SyncRoot()
    // Offset: 0x152ED4C
    // Implemented from: System.Collections.SortedList
    // Base method: System.Object SortedList::get_SyncRoot()
    ::Il2CppObject* get_SyncRoot();
    // public override System.Object get_Item(System.Object key)
    // Offset: 0x152ED54
    // Implemented from: System.Collections.SortedList
    // Base method: System.Object SortedList::get_Item(System.Object key)
    ::Il2CppObject* get_Item(::Il2CppObject* key);
    // Creating proxy method: System_Collections_IDictionary_get_Item
    // Maps to method: get_Item
    ::Il2CppObject* System_Collections_IDictionary_get_Item(::Il2CppObject* key);
    // public override System.Void set_Item(System.Object key, System.Object value)
    // Offset: 0x152EE24
    // Implemented from: System.Collections.SortedList
    // Base method: System.Void SortedList::set_Item(System.Object key, System.Object value)
    void set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // Creating proxy method: System_Collections_IDictionary_set_Item
    // Maps to method: set_Item
    void System_Collections_IDictionary_set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // public override System.Void Add(System.Object key, System.Object value)
    // Offset: 0x152EEEC
    // Implemented from: System.Collections.SortedList
    // Base method: System.Void SortedList::Add(System.Object key, System.Object value)
    void Add(::Il2CppObject* key, ::Il2CppObject* value);
    // Creating proxy method: System_Collections_IDictionary_Add
    // Maps to method: Add
    void System_Collections_IDictionary_Add(::Il2CppObject* key, ::Il2CppObject* value);
    // public override System.Int32 get_Capacity()
    // Offset: 0x152EFB4
    // Implemented from: System.Collections.SortedList
    // Base method: System.Int32 SortedList::get_Capacity()
    int get_Capacity();
    // public override System.Object Clone()
    // Offset: 0x152F07C
    // Implemented from: System.Collections.SortedList
    // Base method: System.Object SortedList::Clone()
    ::Il2CppObject* Clone();
    // Creating proxy method: System_ICloneable_Clone
    // Maps to method: Clone
    ::Il2CppObject* System_ICloneable_Clone();
    // public override System.Boolean Contains(System.Object key)
    // Offset: 0x152F144
    // Implemented from: System.Collections.SortedList
    // Base method: System.Boolean SortedList::Contains(System.Object key)
    bool Contains(::Il2CppObject* key);
    // Creating proxy method: System_Collections_IDictionary_Contains
    // Maps to method: Contains
    bool System_Collections_IDictionary_Contains(::Il2CppObject* key);
    // public override System.Boolean ContainsValue(System.Object key)
    // Offset: 0x152F214
    // Implemented from: System.Collections.SortedList
    // Base method: System.Boolean SortedList::ContainsValue(System.Object key)
    bool ContainsValue(::Il2CppObject* key);
    // public override System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x152F2E4
    // Implemented from: System.Collections.SortedList
    // Base method: System.Void SortedList::CopyTo(System.Array array, System.Int32 index)
    void CopyTo(System::Array* array, int index);
    // Creating proxy method: System_Collections_ICollection_CopyTo
    // Maps to method: CopyTo
    void System_Collections_ICollection_CopyTo(System::Array* array, int index);
    // public override System.Object GetByIndex(System.Int32 index)
    // Offset: 0x152F3AC
    // Implemented from: System.Collections.SortedList
    // Base method: System.Object SortedList::GetByIndex(System.Int32 index)
    ::Il2CppObject* GetByIndex(int index);
    // public override System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0x152F47C
    // Implemented from: System.Collections.SortedList
    // Base method: System.Collections.IDictionaryEnumerator SortedList::GetEnumerator()
    System::Collections::IDictionaryEnumerator* GetEnumerator();
    // Creating proxy method: System_Collections_IDictionary_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::IDictionaryEnumerator* System_Collections_IDictionary_GetEnumerator();
    // public override System.Object GetKey(System.Int32 index)
    // Offset: 0x152F544
    // Implemented from: System.Collections.SortedList
    // Base method: System.Object SortedList::GetKey(System.Int32 index)
    ::Il2CppObject* GetKey(int index);
    // public override System.Collections.IList GetKeyList()
    // Offset: 0x152F614
    // Implemented from: System.Collections.SortedList
    // Base method: System.Collections.IList SortedList::GetKeyList()
    System::Collections::IList* GetKeyList();
    // public override System.Collections.IList GetValueList()
    // Offset: 0x152F6DC
    // Implemented from: System.Collections.SortedList
    // Base method: System.Collections.IList SortedList::GetValueList()
    System::Collections::IList* GetValueList();
    // public override System.Int32 IndexOfKey(System.Object key)
    // Offset: 0x152F7A4
    // Implemented from: System.Collections.SortedList
    // Base method: System.Int32 SortedList::IndexOfKey(System.Object key)
    int IndexOfKey(::Il2CppObject* key);
    // public override System.Int32 IndexOfValue(System.Object value)
    // Offset: 0x152F8FC
    // Implemented from: System.Collections.SortedList
    // Base method: System.Int32 SortedList::IndexOfValue(System.Object value)
    int IndexOfValue(::Il2CppObject* value);
    // public override System.Void RemoveAt(System.Int32 index)
    // Offset: 0x152F9CC
    // Implemented from: System.Collections.SortedList
    // Base method: System.Void SortedList::RemoveAt(System.Int32 index)
    void RemoveAt(int index);
  }; // System.Collections.SortedList/SyncSortedList
  static check_size<sizeof(SortedList::SyncSortedList), 80 + sizeof(::Il2CppObject*)> __System_Collections_SortedList_SyncSortedListSizeCheck;
  static_assert(sizeof(SortedList::SyncSortedList) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::SortedList::SyncSortedList*, "System.Collections", "SortedList/SyncSortedList");
#pragma pack(pop)
