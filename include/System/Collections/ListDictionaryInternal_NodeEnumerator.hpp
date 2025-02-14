// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.ListDictionaryInternal
#include "System/Collections/ListDictionaryInternal.hpp"
// Including type: System.Collections.IDictionaryEnumerator
#include "System/Collections/IDictionaryEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: DictionaryEntry
  struct DictionaryEntry;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x25
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.ListDictionaryInternal/NodeEnumerator
  class ListDictionaryInternal::NodeEnumerator : public ::Il2CppObject/*, public System::Collections::IDictionaryEnumerator*/ {
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
    // private System.Boolean start
    // Size: 0x1
    // Offset: 0x24
    bool start;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: NodeEnumerator
    NodeEnumerator(System::Collections::ListDictionaryInternal* list_ = {}, System::Collections::ListDictionaryInternal::DictionaryNode* current_ = {}, int version_ = {}, bool start_ = {}) noexcept : list{list_}, current{current_}, version{version_}, start{start_} {}
    // Creating interface conversion operator: operator System::Collections::IDictionaryEnumerator
    operator System::Collections::IDictionaryEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IDictionaryEnumerator*>(this);
    }
    // public System.Void .ctor(System.Collections.ListDictionaryInternal list)
    // Offset: 0x195C48C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListDictionaryInternal::NodeEnumerator* New_ctor(System::Collections::ListDictionaryInternal* list) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ListDictionaryInternal::NodeEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListDictionaryInternal::NodeEnumerator*, creationType>(list)));
    }
    // public System.Object get_Current()
    // Offset: 0x195C534
    ::Il2CppObject* get_Current();
    // public System.Collections.DictionaryEntry get_Entry()
    // Offset: 0x195C5A0
    System::Collections::DictionaryEntry get_Entry();
    // public System.Object get_Key()
    // Offset: 0x195C658
    ::Il2CppObject* get_Key();
    // public System.Object get_Value()
    // Offset: 0x195C6F4
    ::Il2CppObject* get_Value();
    // public System.Boolean MoveNext()
    // Offset: 0x195C790
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x195C868
    void Reset();
  }; // System.Collections.ListDictionaryInternal/NodeEnumerator
  #pragma pack(pop)
  static check_size<sizeof(ListDictionaryInternal::NodeEnumerator), 36 + sizeof(bool)> __System_Collections_ListDictionaryInternal_NodeEnumeratorSizeCheck;
  static_assert(sizeof(ListDictionaryInternal::NodeEnumerator) == 0x25);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::ListDictionaryInternal::NodeEnumerator*, "System.Collections", "ListDictionaryInternal/NodeEnumerator");
