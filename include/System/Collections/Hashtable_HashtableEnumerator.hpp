// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Collections.Hashtable
#include "System/Collections/Hashtable.hpp"
// Including type: System.Collections.IDictionaryEnumerator
#include "System/Collections/IDictionaryEnumerator.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: DictionaryEntry
  struct DictionaryEntry;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Autogenerated type: System.Collections.Hashtable/HashtableEnumerator
  class Hashtable::HashtableEnumerator : public ::CsObject, public System::Collections::IDictionaryEnumerator, public System::Collections::IEnumerator, public System::ICloneable {
    public:
    // private System.Collections.Hashtable hashtable
    // Offset: 0x10
    System::Collections::Hashtable* hashtable;
    // private System.Int32 bucket
    // Offset: 0x18
    int bucket;
    // private System.Int32 version
    // Offset: 0x1C
    int version;
    // private System.Boolean current
    // Offset: 0x20
    bool current;
    // private System.Int32 getObjectRetType
    // Offset: 0x24
    int getObjectRetType;
    // private System.Object currentKey
    // Offset: 0x28
    ::CsObject* currentKey;
    // private System.Object currentValue
    // Offset: 0x30
    ::CsObject* currentValue;
    // System.Void .ctor(System.Collections.Hashtable hashtable, System.Int32 getObjRetType)
    // Offset: 0x13220C0
    static Hashtable::HashtableEnumerator* New_ctor(System::Collections::Hashtable* hashtable, int getObjRetType);
    // public System.Object Clone()
    // Offset: 0x1323554
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::CsObject* Clone();
    // public System.Object get_Key()
    // Offset: 0x132355C
    // Implemented from: System.Collections.IDictionaryEnumerator
    // Base method: System.Object IDictionaryEnumerator::get_Key()
    ::CsObject* get_Key();
    // Creating proxy method: System_Collections_IDictionaryEnumerator_get_Key
    // Maps to method: get_Key
    ::CsObject* System_Collections_IDictionaryEnumerator_get_Key();
    // public System.Boolean MoveNext()
    // Offset: 0x13235F8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // public System.Collections.DictionaryEntry get_Entry()
    // Offset: 0x132375C
    // Implemented from: System.Collections.IDictionaryEnumerator
    // Base method: System.Collections.DictionaryEntry IDictionaryEnumerator::get_Entry()
    System::Collections::DictionaryEntry get_Entry();
    // Creating proxy method: System_Collections_IDictionaryEnumerator_get_Entry
    // Maps to method: get_Entry
    System::Collections::DictionaryEntry System_Collections_IDictionaryEnumerator_get_Entry();
    // public System.Object get_Current()
    // Offset: 0x1323828
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::CsObject* get_Current();
    // Creating proxy method: System_Collections_IEnumerator_get_Current
    // Maps to method: get_Current
    ::CsObject* System_Collections_IEnumerator_get_Current();
    // public System.Object get_Value()
    // Offset: 0x1323930
    // Implemented from: System.Collections.IDictionaryEnumerator
    // Base method: System.Object IDictionaryEnumerator::get_Value()
    ::CsObject* get_Value();
    // Creating proxy method: System_Collections_IDictionaryEnumerator_get_Value
    // Maps to method: get_Value
    ::CsObject* System_Collections_IDictionaryEnumerator_get_Value();
    // public System.Void Reset()
    // Offset: 0x13239CC
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void Reset();
    // Creating proxy method: System_Collections_IEnumerator_Reset
    // Maps to method: Reset
    void System_Collections_IEnumerator_Reset();
  }; // System.Collections.Hashtable/HashtableEnumerator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Hashtable::HashtableEnumerator*, "System.Collections", "Hashtable/HashtableEnumerator");
#pragma pack(pop)
