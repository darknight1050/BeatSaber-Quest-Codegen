// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Queue
#include "System/Collections/Queue.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Queue/QueueEnumerator
  class Queue::QueueEnumerator : public ::Il2CppObject/*, public System::Collections::IEnumerator, public System::ICloneable*/ {
    public:
    // private System.Collections.Queue _q
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Queue* q;
    // Field size check
    static_assert(sizeof(System::Collections::Queue*) == 0x8);
    // private System.Int32 _index
    // Size: 0x4
    // Offset: 0x18
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _version
    // Size: 0x4
    // Offset: 0x1C
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Object currentElement
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* currentElement;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: QueueEnumerator
    QueueEnumerator(System::Collections::Queue* q_ = {}, int index_ = {}, int version_ = {}, ::Il2CppObject* currentElement_ = {}) noexcept : q{q_}, index{index_}, version{version_}, currentElement{currentElement_} {}
    // Creating interface conversion operator: operator System::Collections::IEnumerator
    operator System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerator*>(this);
    }
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // System.Void .ctor(System.Collections.Queue q)
    // Offset: 0x195DAB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Queue::QueueEnumerator* New_ctor(System::Collections::Queue* q) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Queue::QueueEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Queue::QueueEnumerator*, creationType>(q)));
    }
    // public System.Object Clone()
    // Offset: 0x195DE00
    ::Il2CppObject* Clone();
    // public System.Boolean MoveNext()
    // Offset: 0x195DE08
    bool MoveNext();
    // public System.Object get_Current()
    // Offset: 0x195DF04
    ::Il2CppObject* get_Current();
    // public System.Void Reset()
    // Offset: 0x195DFC4
    void Reset();
  }; // System.Collections.Queue/QueueEnumerator
  #pragma pack(pop)
  static check_size<sizeof(Queue::QueueEnumerator), 32 + sizeof(::Il2CppObject*)> __System_Collections_Queue_QueueEnumeratorSizeCheck;
  static_assert(sizeof(Queue::QueueEnumerator) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Queue::QueueEnumerator*, "System.Collections", "Queue/QueueEnumerator");
