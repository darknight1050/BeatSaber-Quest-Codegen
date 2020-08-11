// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Array
#include "System/Array.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Array/ArrayEnumerator
  class Array::ArrayEnumerator : public ::CsObject, public System::Collections::IEnumerator, public System::ICloneable {
    public:
    // private System.Array _array
    // Offset: 0x10
    System::Array* array;
    // private System.Int32 _index
    // Offset: 0x18
    int index;
    // private System.Int32 _endIndex
    // Offset: 0x1C
    int endIndex;
    // System.Void .ctor(System.Array array)
    // Offset: 0x1311C34
    static Array::ArrayEnumerator* New_ctor(System::Array* array);
    // public System.Boolean MoveNext()
    // Offset: 0x1312688
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x13126B0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void Reset();
    // Creating proxy method: System_Collections_IEnumerator_Reset
    // Maps to method: Reset
    void System_Collections_IEnumerator_Reset();
    // public System.Object Clone()
    // Offset: 0x13126BC
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::CsObject* Clone();
    // public System.Object get_Current()
    // Offset: 0x13126C4
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::CsObject* get_Current();
    // Creating proxy method: System_Collections_IEnumerator_get_Current
    // Maps to method: get_Current
    ::CsObject* System_Collections_IEnumerator_get_Current();
  }; // System.Array/ArrayEnumerator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Array::ArrayEnumerator*, "System", "Array/ArrayEnumerator");
#pragma pack(pop)
