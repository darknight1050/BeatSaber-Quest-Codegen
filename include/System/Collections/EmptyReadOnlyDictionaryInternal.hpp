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
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
  // Skipping declaration: ICollection because it is already included!
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.EmptyReadOnlyDictionaryInternal
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: C984A0
  class EmptyReadOnlyDictionaryInternal : public ::Il2CppObject/*, public System::Collections::IDictionary*/ {
    public:
    // Nested type: System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator
    class NodeEnumerator;
    // Creating value type constructor for type: EmptyReadOnlyDictionaryInternal
    EmptyReadOnlyDictionaryInternal() noexcept {}
    // Creating interface conversion operator: operator System::Collections::IDictionary
    operator System::Collections::IDictionary() noexcept {
      return *reinterpret_cast<System::Collections::IDictionary*>(this);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x162C228
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator_NEW();
    // public System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x162C28C
    void CopyTo_NEW(System::Array* array, int index);
    // public System.Int32 get_Count()
    // Offset: 0x162C414
    int get_Count_NEW();
    // public System.Object get_Item(System.Object key)
    // Offset: 0x162C41C
    ::Il2CppObject* get_Item_NEW(::Il2CppObject* key);
    // public System.Void set_Item(System.Object key, System.Object value)
    // Offset: 0x162C4BC
    void set_Item_NEW(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Collections.ICollection get_Keys()
    // Offset: 0x162C664
    System::Collections::ICollection* get_Keys_NEW();
    // public System.Boolean Contains(System.Object key)
    // Offset: 0x162C6CC
    bool Contains_NEW(::Il2CppObject* key);
    // public System.Void Add(System.Object key, System.Object value)
    // Offset: 0x162C6D4
    void Add_NEW(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0x162C87C
    System::Collections::IDictionaryEnumerator* GetEnumerator_NEW();
    // public System.Void .ctor()
    // Offset: 0x162C220
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EmptyReadOnlyDictionaryInternal* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::EmptyReadOnlyDictionaryInternal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EmptyReadOnlyDictionaryInternal*, creationType>()));
    }
  }; // System.Collections.EmptyReadOnlyDictionaryInternal
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::EmptyReadOnlyDictionaryInternal*, "System.Collections", "EmptyReadOnlyDictionaryInternal");
