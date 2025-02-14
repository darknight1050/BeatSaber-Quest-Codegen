// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.EmptyReadOnlyDictionaryInternal
#include "System/Collections/EmptyReadOnlyDictionaryInternal.hpp"
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
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.EmptyReadOnlyDictionaryInternal/NodeEnumerator
  class EmptyReadOnlyDictionaryInternal::NodeEnumerator : public ::Il2CppObject/*, public System::Collections::IDictionaryEnumerator*/ {
    public:
    // Creating value type constructor for type: NodeEnumerator
    NodeEnumerator() noexcept {}
    // Creating interface conversion operator: operator System::Collections::IDictionaryEnumerator
    operator System::Collections::IDictionaryEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IDictionaryEnumerator*>(this);
    }
    // public System.Boolean MoveNext()
    // Offset: 0x176D6E4
    bool MoveNext();
    // public System.Object get_Current()
    // Offset: 0x176D6EC
    ::Il2CppObject* get_Current();
    // public System.Void Reset()
    // Offset: 0x176D76C
    void Reset();
    // public System.Object get_Key()
    // Offset: 0x176D770
    ::Il2CppObject* get_Key();
    // public System.Object get_Value()
    // Offset: 0x176D7F0
    ::Il2CppObject* get_Value();
    // public System.Collections.DictionaryEntry get_Entry()
    // Offset: 0x176D870
    System::Collections::DictionaryEntry get_Entry();
    // public System.Void .ctor()
    // Offset: 0x176D090
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EmptyReadOnlyDictionaryInternal::NodeEnumerator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EmptyReadOnlyDictionaryInternal::NodeEnumerator*, creationType>()));
    }
  }; // System.Collections.EmptyReadOnlyDictionaryInternal/NodeEnumerator
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator*, "System.Collections", "EmptyReadOnlyDictionaryInternal/NodeEnumerator");
