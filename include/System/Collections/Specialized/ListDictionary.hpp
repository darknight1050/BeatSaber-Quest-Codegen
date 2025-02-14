// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IDictionary
#include "System/Collections/IDictionary.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Specialized
namespace System::Collections::Specialized {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IComparer
  class IComparer;
  // Skipping declaration: ICollection because it is already included!
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Specialized.ListDictionary
  // [DefaultMemberAttribute] Offset: D882F4
  class ListDictionary : public ::Il2CppObject/*, public System::Collections::IDictionary*/ {
    public:
    // Nested type: System::Collections::Specialized::ListDictionary::NodeEnumerator
    class NodeEnumerator;
    // Nested type: System::Collections::Specialized::ListDictionary::NodeKeyValueCollection
    class NodeKeyValueCollection;
    // Nested type: System::Collections::Specialized::ListDictionary::DictionaryNode
    class DictionaryNode;
    // private System.Collections.Specialized.ListDictionary/DictionaryNode head
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Specialized::ListDictionary::DictionaryNode* head;
    // Field size check
    static_assert(sizeof(System::Collections::Specialized::ListDictionary::DictionaryNode*) == 0x8);
    // private System.Int32 version
    // Size: 0x4
    // Offset: 0x18
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 count
    // Size: 0x4
    // Offset: 0x1C
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.IComparer comparer
    // Size: 0x8
    // Offset: 0x20
    System::Collections::IComparer* comparer;
    // Field size check
    static_assert(sizeof(System::Collections::IComparer*) == 0x8);
    // Creating value type constructor for type: ListDictionary
    ListDictionary(System::Collections::Specialized::ListDictionary::DictionaryNode* head_ = {}, int version_ = {}, int count_ = {}, System::Collections::IComparer* comparer_ = {}) noexcept : head{head_}, version{version_}, count{count_}, comparer{comparer_} {}
    // Creating interface conversion operator: operator System::Collections::IDictionary
    operator System::Collections::IDictionary() noexcept {
      return *reinterpret_cast<System::Collections::IDictionary*>(this);
    }
    // public System.Void .ctor(System.Collections.IComparer comparer)
    // Offset: 0x184A628
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListDictionary* New_ctor(System::Collections::IComparer* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Specialized::ListDictionary::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListDictionary*, creationType>(comparer)));
    }
    // public System.Object get_Item(System.Object key)
    // Offset: 0x1849F00
    ::Il2CppObject* get_Item(::Il2CppObject* key);
    // public System.Void set_Item(System.Object key, System.Object value)
    // Offset: 0x184A460
    void set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Int32 get_Count()
    // Offset: 0x184B300
    int get_Count();
    // public System.Collections.ICollection get_Keys()
    // Offset: 0x184A818
    System::Collections::ICollection* get_Keys();
    // public System.Collections.ICollection get_Values()
    // Offset: 0x184A8C4
    System::Collections::ICollection* get_Values();
    // public System.Void Add(System.Object key, System.Object value)
    // Offset: 0x184AA90
    void Add(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Boolean Contains(System.Object key)
    // Offset: 0x184AD64
    bool Contains(::Il2CppObject* key);
    // public System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x184AF2C
    void CopyTo(System::Array* array, int index);
    // public System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0x184A744
    System::Collections::IDictionaryEnumerator* GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x184B390
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Void .ctor()
    // Offset: 0x184B2F0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListDictionary* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Specialized::ListDictionary::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListDictionary*, creationType>()));
    }
  }; // System.Collections.Specialized.ListDictionary
  #pragma pack(pop)
  static check_size<sizeof(ListDictionary), 32 + sizeof(System::Collections::IComparer*)> __System_Collections_Specialized_ListDictionarySizeCheck;
  static_assert(sizeof(ListDictionary) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Specialized::ListDictionary*, "System.Collections.Specialized", "ListDictionary");
