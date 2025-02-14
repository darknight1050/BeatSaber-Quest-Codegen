// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.ListDictionaryInternal/NodeKeyValueCollection
#include "System/Collections/ListDictionaryInternal_NodeKeyValueCollection.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Including type: System.Collections.ListDictionaryInternal
#include "System/Collections/ListDictionaryInternal.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x26
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.ListDictionaryInternal/NodeKeyValueCollection/NodeKeyValueEnumerator
  class ListDictionaryInternal::NodeKeyValueCollection::NodeKeyValueEnumerator : public ::Il2CppObject/*, public System::Collections::IEnumerator*/ {
    public:
    // private System.Collections.ListDictionaryInternal list
    // Size: 0x8
    // Offset: 0x10
    System::Collections::ListDictionaryInternal* list;
    // Field size check
    static_assert(sizeof(System::Collections::ListDictionaryInternal*) == 0x8);
    // private System.Collections.ListDictionaryInternal/DictionaryNode current
    // Size: 0x8
    // Offset: 0x18
    System::Collections::ListDictionaryInternal::DictionaryNode* current;
    // Field size check
    static_assert(sizeof(System::Collections::ListDictionaryInternal::DictionaryNode*) == 0x8);
    // private System.Int32 version
    // Size: 0x4
    // Offset: 0x20
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean isKeys
    // Size: 0x1
    // Offset: 0x24
    bool isKeys;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean start
    // Size: 0x1
    // Offset: 0x25
    bool start;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: NodeKeyValueEnumerator
    NodeKeyValueEnumerator(System::Collections::ListDictionaryInternal* list_ = {}, System::Collections::ListDictionaryInternal::DictionaryNode* current_ = {}, int version_ = {}, bool isKeys_ = {}, bool start_ = {}) noexcept : list{list_}, current{current_}, version{version_}, isKeys{isKeys_}, start{start_} {}
    // Creating interface conversion operator: operator System::Collections::IEnumerator
    operator System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerator*>(this);
    }
    // public System.Void .ctor(System.Collections.ListDictionaryInternal list, System.Boolean isKeys)
    // Offset: 0x195CBC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListDictionaryInternal::NodeKeyValueCollection::NodeKeyValueEnumerator* New_ctor(System::Collections::ListDictionaryInternal* list, bool isKeys) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ListDictionaryInternal::NodeKeyValueCollection::NodeKeyValueEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListDictionaryInternal::NodeKeyValueCollection::NodeKeyValueEnumerator*, creationType>(list, isKeys)));
    }
    // public System.Object get_Current()
    // Offset: 0x195CC24
    ::Il2CppObject* get_Current();
    // public System.Boolean MoveNext()
    // Offset: 0x195CCD4
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x195CDAC
    void Reset();
  }; // System.Collections.ListDictionaryInternal/NodeKeyValueCollection/NodeKeyValueEnumerator
  #pragma pack(pop)
  static check_size<sizeof(ListDictionaryInternal::NodeKeyValueCollection::NodeKeyValueEnumerator), 37 + sizeof(bool)> __System_Collections_ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumeratorSizeCheck;
  static_assert(sizeof(ListDictionaryInternal::NodeKeyValueCollection::NodeKeyValueEnumerator) == 0x26);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::ListDictionaryInternal::NodeKeyValueCollection::NodeKeyValueEnumerator*, "System.Collections", "ListDictionaryInternal/NodeKeyValueCollection/NodeKeyValueEnumerator");
