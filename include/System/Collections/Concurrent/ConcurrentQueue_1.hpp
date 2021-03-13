// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
// Including type: System.Collections.Generic.IReadOnlyCollection`1
#include "System/Collections/Generic/IReadOnlyCollection_1.hpp"
// Including type: System.Collections.Concurrent.PaddedHeadAndTail
#include "System/Collections/Concurrent/PaddedHeadAndTail.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Concurrent
namespace System::Collections::Concurrent {
  // Skipping declaration: Segment because it is already included!
  // Skipping declaration: <Enumerate>d__27 because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: System.Collections.Concurrent
namespace System::Collections::Concurrent {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Concurrent.ConcurrentQueue`1
  // [] Offset: FFFFFFFF
  // [DebuggerTypeProxyAttribute] Offset: C98CE8
  // [DebuggerDisplayAttribute] Offset: C98CE8
  template<typename T>
  class ConcurrentQueue_1 : public ::Il2CppObject/*, public System::Collections::ICollection, public System::Collections::Generic::IReadOnlyCollection_1<T>*/ {
    public:
    // Nested type: System::Collections::Concurrent::ConcurrentQueue_1::Segment<T>
    class Segment;
    // Nested type: System::Collections::Concurrent::ConcurrentQueue_1::$Enumerate$d__27<T>
    class $Enumerate$d__27;
    // WARNING Size may be invalid!
    // Autogenerated type: System.Collections.Concurrent.ConcurrentQueue`1/Segment
    // [] Offset: FFFFFFFF
    // [DebuggerDisplayAttribute] Offset: C98D70
    class Segment : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = ConcurrentQueue_1<T>*;
      static constexpr std::string_view NESTED_NAME = "Segment";
      // Nested type: System::Collections::Concurrent::ConcurrentQueue_1::Segment::Slot<T>
      struct Slot;
      // WARNING Size may be invalid!
      // Autogenerated type: System.Collections.Concurrent.ConcurrentQueue`1/Segment/Slot
      // [] Offset: FFFFFFFF
      // [DebuggerDisplayAttribute] Offset: C98DA8
      struct Slot : public ::il2cpp_utils::il2cpp_type_check::NestedType/*, public System::ValueType*/ {
        public:
        using declaring_type = typename ConcurrentQueue_1<T>::Segment*;
        static constexpr std::string_view NESTED_NAME = "Slot";
        // public T Item
        // Size: 0xFFFFFFFF
        // Offset: 0x0
        T Item;
        // public System.Int32 SequenceNumber
        // Size: 0x4
        // Offset: 0x0
        int SequenceNumber;
        // Field size check
        static_assert(sizeof(int) == 0x4);
        // Creating value type constructor for type: Slot
        constexpr Slot(T Item_ = {}, int SequenceNumber_ = {}) noexcept : Item{Item_}, SequenceNumber{SequenceNumber_} {}
        // Creating interface conversion operator: operator System::ValueType
        operator System::ValueType() noexcept {
          return *reinterpret_cast<System::ValueType*>(this);
        }
      }; // System.Collections.Concurrent.ConcurrentQueue`1/Segment/Slot
      // Could not write size check! Type: System.Collections.Concurrent.ConcurrentQueue`1/Segment/Slot is generic, or has no fields that are valid for size checks!
      // readonly System.Collections.Concurrent.ConcurrentQueue`1/Segment/Slot<T>[] _slots
      // Size: 0x8
      // Offset: 0x0
      ::Array<typename System::Collections::Concurrent::ConcurrentQueue_1<T>::Segment::Slot>* slots;
      // Field size check
      static_assert(sizeof(::Array<typename System::Collections::Concurrent::ConcurrentQueue_1<T>::Segment::Slot>*) == 0x8);
      // readonly System.Int32 _slotsMask
      // Size: 0x4
      // Offset: 0x0
      int slotsMask;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // System.Collections.Concurrent.PaddedHeadAndTail _headAndTail
      // Size: 0x104
      // Offset: 0x0
      System::Collections::Concurrent::PaddedHeadAndTail headAndTail;
      // Field size check
      static_assert(sizeof(System::Collections::Concurrent::PaddedHeadAndTail) == 0x104);
      // System.Boolean _preservedForObservation
      // Size: 0x1
      // Offset: 0x0
      bool preservedForObservation;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // System.Boolean _frozenForEnqueues
      // Size: 0x1
      // Offset: 0x0
      bool frozenForEnqueues;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> _nextSegment
      // Size: 0x8
      // Offset: 0x0
      typename System::Collections::Concurrent::ConcurrentQueue_1<T>::Segment* nextSegment;
      // Field size check
      static_assert(sizeof(typename System::Collections::Concurrent::ConcurrentQueue_1<T>::Segment*) == 0x8);
      // Creating value type constructor for type: Segment
      Segment(::Array<typename System::Collections::Concurrent::ConcurrentQueue_1<T>::Segment::Slot>* slots_ = {}, int slotsMask_ = {}, System::Collections::Concurrent::PaddedHeadAndTail headAndTail_ = {}, bool preservedForObservation_ = {}, bool frozenForEnqueues_ = {}, typename System::Collections::Concurrent::ConcurrentQueue_1<T>::Segment* nextSegment_ = {}) noexcept : slots{slots_}, slotsMask{slotsMask_}, headAndTail{headAndTail_}, preservedForObservation{preservedForObservation_}, frozenForEnqueues{frozenForEnqueues_}, nextSegment{nextSegment_} {}
      // public System.Void .ctor(System.Int32 boundedLength)
      // Offset: 0xFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename ConcurrentQueue_1<T>::Segment* New_ctor(int boundedLength) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Concurrent::ConcurrentQueue_1::Segment::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename ConcurrentQueue_1<T>::Segment*, creationType>(boundedLength)));
      }
      // System.Int32 get_Capacity()
      // Offset: 0xFFFFFFFF
      int get_Capacity() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Concurrent::ConcurrentQueue_1::Segment::get_Capacity");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_Capacity", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
        return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
      }
      // System.Int32 get_FreezeOffset()
      // Offset: 0xFFFFFFFF
      int get_FreezeOffset() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Concurrent::ConcurrentQueue_1::Segment::get_FreezeOffset");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_FreezeOffset", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
        return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
      }
      // System.Void EnsureFrozenForEnqueues()
      // Offset: 0xFFFFFFFF
      void EnsureFrozenForEnqueues() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Concurrent::ConcurrentQueue_1::Segment::EnsureFrozenForEnqueues");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "EnsureFrozenForEnqueues", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
      }
      // public System.Boolean TryDequeue(out T item)
      // Offset: 0xFFFFFFFF
      bool TryDequeue(T& item) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Concurrent::ConcurrentQueue_1::Segment::TryDequeue");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "TryDequeue", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(item)));
        return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, item);
      }
      // public System.Boolean TryEnqueue(T item)
      // Offset: 0xFFFFFFFF
      bool TryEnqueue(T item) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Concurrent::ConcurrentQueue_1::Segment::TryEnqueue");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "TryEnqueue", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(item)));
        return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, item);
      }
    }; // System.Collections.Concurrent.ConcurrentQueue`1/Segment
    // Could not write size check! Type: System.Collections.Concurrent.ConcurrentQueue`1/Segment is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: System.Collections.Concurrent.ConcurrentQueue`1/<Enumerate>d__27
    // [] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: C98DE0
    class $Enumerate$d__27 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<T>*/ {
      public:
      using declaring_type = ConcurrentQueue_1<T>*;
      static constexpr std::string_view NESTED_NAME = "$Enumerate$d__27";
      // private System.Int32 <>1__state
      // Size: 0x4
      // Offset: 0x0
      int $$1__state;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private T <>2__current
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      T $$2__current;
      // public System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> head
      // Size: 0x8
      // Offset: 0x0
      typename System::Collections::Concurrent::ConcurrentQueue_1<T>::Segment* head;
      // Field size check
      static_assert(sizeof(typename System::Collections::Concurrent::ConcurrentQueue_1<T>::Segment*) == 0x8);
      // public System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> tail
      // Size: 0x8
      // Offset: 0x0
      typename System::Collections::Concurrent::ConcurrentQueue_1<T>::Segment* tail;
      // Field size check
      static_assert(sizeof(typename System::Collections::Concurrent::ConcurrentQueue_1<T>::Segment*) == 0x8);
      // public System.Int32 tailTail
      // Size: 0x4
      // Offset: 0x0
      int tailTail;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.Int32 headHead
      // Size: 0x4
      // Offset: 0x0
      int headHead;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.Collections.Concurrent.ConcurrentQueue`1<T> <>4__this
      // Size: 0x8
      // Offset: 0x0
      System::Collections::Concurrent::ConcurrentQueue_1<T>* $$4__this;
      // Field size check
      static_assert(sizeof(System::Collections::Concurrent::ConcurrentQueue_1<T>*) == 0x8);
      // private System.Int32 <i>5__1
      // Size: 0x4
      // Offset: 0x0
      int $i$5__1;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private System.Int32 <headTail>5__2
      // Size: 0x4
      // Offset: 0x0
      int $headTail$5__2;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private System.Int32 <i>5__3
      // Size: 0x4
      // Offset: 0x0
      int $i$5__3;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private System.Int32 <i>5__4
      // Size: 0x4
      // Offset: 0x0
      int $i$5__4;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> <s>5__5
      // Size: 0x8
      // Offset: 0x0
      typename System::Collections::Concurrent::ConcurrentQueue_1<T>::Segment* $s$5__5;
      // Field size check
      static_assert(sizeof(typename System::Collections::Concurrent::ConcurrentQueue_1<T>::Segment*) == 0x8);
      // private System.Int32 <i>5__6
      // Size: 0x4
      // Offset: 0x0
      int $i$5__6;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private System.Int32 <sTail>5__7
      // Size: 0x4
      // Offset: 0x0
      int $sTail$5__7;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private System.Int32 <i>5__8
      // Size: 0x4
      // Offset: 0x0
      int $i$5__8;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: $Enumerate$d__27
      $Enumerate$d__27(int $$1__state_ = {}, T $$2__current_ = {}, typename System::Collections::Concurrent::ConcurrentQueue_1<T>::Segment* head_ = {}, typename System::Collections::Concurrent::ConcurrentQueue_1<T>::Segment* tail_ = {}, int tailTail_ = {}, int headHead_ = {}, System::Collections::Concurrent::ConcurrentQueue_1<T>* $$4__this_ = {}, int $i$5__1_ = {}, int $headTail$5__2_ = {}, int $i$5__3_ = {}, int $i$5__4_ = {}, typename System::Collections::Concurrent::ConcurrentQueue_1<T>::Segment* $s$5__5_ = {}, int $i$5__6_ = {}, int $sTail$5__7_ = {}, int $i$5__8_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, head{head_}, tail{tail_}, tailTail{tailTail_}, headHead{headHead_}, $$4__this{$$4__this_}, $i$5__1{$i$5__1_}, $headTail$5__2{$headTail$5__2_}, $i$5__3{$i$5__3_}, $i$5__4{$i$5__4_}, $s$5__5{$s$5__5_}, $i$5__6{$i$5__6_}, $sTail$5__7{$sTail$5__7_}, $i$5__8{$i$5__8_} {}
      // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<T>
      operator System::Collections::Generic::IEnumerator_1<T>() noexcept {
        return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<T>*>(this);
      }
      // public System.Void .ctor(System.Int32 <>1__state)
      // Offset: 0xFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename ConcurrentQueue_1<T>::$Enumerate$d__27* New_ctor(int $$1__state) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Concurrent::ConcurrentQueue_1::$Enumerate$d__27::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename ConcurrentQueue_1<T>::$Enumerate$d__27*, creationType>($$1__state)));
      }
      // private System.Void System.IDisposable.Dispose()
      // Offset: 0xFFFFFFFF
      void System_IDisposable_Dispose_NEW() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Concurrent::ConcurrentQueue_1::$Enumerate$d__27::System.IDisposable.Dispose_NEW");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
      }
      // private System.Boolean MoveNext()
      // Offset: 0xFFFFFFFF
      bool MoveNext_NEW() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Concurrent::ConcurrentQueue_1::$Enumerate$d__27::MoveNext_NEW");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "MoveNext", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
        return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
      }
      // private T System.Collections.Generic.IEnumerator<T>.get_Current()
      // Offset: 0xFFFFFFFF
      T System_Collections_Generic_IEnumerator$T$_get_Current_NEW() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Concurrent::ConcurrentQueue_1::$Enumerate$d__27::System.Collections.Generic.IEnumerator<T>.get_Current_NEW");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IEnumerator<T>.get_Current", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
        return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method);
      }
      // private System.Void System.Collections.IEnumerator.Reset()
      // Offset: 0xFFFFFFFF
      void System_Collections_IEnumerator_Reset_NEW() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Concurrent::ConcurrentQueue_1::$Enumerate$d__27::System.Collections.IEnumerator.Reset_NEW");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0xFFFFFFFF
      ::Il2CppObject* System_Collections_IEnumerator_get_Current_NEW() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Concurrent::ConcurrentQueue_1::$Enumerate$d__27::System.Collections.IEnumerator.get_Current_NEW");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
        return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method);
      }
    }; // System.Collections.Concurrent.ConcurrentQueue`1/<Enumerate>d__27
    // Could not write size check! Type: System.Collections.Concurrent.ConcurrentQueue`1/<Enumerate>d__27 is generic, or has no fields that are valid for size checks!
    // private System.Object _crossSegmentLock
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* crossSegmentLock;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> _tail
    // Size: 0x8
    // Offset: 0x0
    typename System::Collections::Concurrent::ConcurrentQueue_1<T>::Segment* tail;
    // Field size check
    static_assert(sizeof(typename System::Collections::Concurrent::ConcurrentQueue_1<T>::Segment*) == 0x8);
    // private System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> _head
    // Size: 0x8
    // Offset: 0x0
    typename System::Collections::Concurrent::ConcurrentQueue_1<T>::Segment* head;
    // Field size check
    static_assert(sizeof(typename System::Collections::Concurrent::ConcurrentQueue_1<T>::Segment*) == 0x8);
    // Creating value type constructor for type: ConcurrentQueue_1
    ConcurrentQueue_1(::Il2CppObject* crossSegmentLock_ = {}, typename System::Collections::Concurrent::ConcurrentQueue_1<T>::Segment* tail_ = {}, typename System::Collections::Concurrent::ConcurrentQueue_1<T>::Segment* head_ = {}) noexcept : crossSegmentLock{crossSegmentLock_}, tail{tail_}, head{head_} {}
    // Creating interface conversion operator: operator System::Collections::ICollection
    operator System::Collections::ICollection() noexcept {
      return *reinterpret_cast<System::Collections::ICollection*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IReadOnlyCollection_1<T>
    operator System::Collections::Generic::IReadOnlyCollection_1<T>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IReadOnlyCollection_1<T>*>(this);
    }
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0xFFFFFFFF
    void System_Collections_ICollection_CopyTo_NEW(System::Array* array, int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Concurrent::ConcurrentQueue_1::System.Collections.ICollection.CopyTo_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.ICollection.CopyTo", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(array, index)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, array, index);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator_NEW() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Concurrent::ConcurrentQueue_1::System.Collections.IEnumerable.GetEnumerator_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
    // public T[] ToArray()
    // Offset: 0xFFFFFFFF
    ::Array<T>* ToArray_NEW() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Concurrent::ConcurrentQueue_1::ToArray_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ToArray", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(this, ___internal__method);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFF
    int get_Count_NEW() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Concurrent::ConcurrentQueue_1::get_Count_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_Count", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // static private System.Int32 GetCount(System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> s, System.Int32 head, System.Int32 tail)
    // Offset: 0xFFFFFFFF
    static int GetCount(typename System::Collections::Concurrent::ConcurrentQueue_1<T>::Segment* s, int head, int tail) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Concurrent::ConcurrentQueue_1::GetCount");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConcurrentQueue_1<T>*>::get(), "GetCount", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(s, head, tail))));
      return ::il2cpp_utils::RunMethodThrow<int, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, s, head, tail);
    }
    // static private System.Int64 GetCount(System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> head, System.Int32 headHead, System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> tail, System.Int32 tailTail)
    // Offset: 0xFFFFFFFF
    static int64_t GetCount(typename System::Collections::Concurrent::ConcurrentQueue_1<T>::Segment* head, int headHead, typename System::Collections::Concurrent::ConcurrentQueue_1<T>::Segment* tail, int tailTail) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Concurrent::ConcurrentQueue_1::GetCount");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConcurrentQueue_1<T>*>::get(), "GetCount", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(head, headHead, tail, tailTail))));
      return ::il2cpp_utils::RunMethodThrow<int64_t, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, head, headHead, tail, tailTail);
    }
    // public System.Void CopyTo(T[] array, System.Int32 index)
    // Offset: 0xFFFFFFFF
    void CopyTo_NEW(::Array<T>* array, int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Concurrent::ConcurrentQueue_1::CopyTo_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CopyTo", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(array, index)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, array, index);
    }
    // public System.Collections.Generic.IEnumerator`1<T> GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerator_1<T>* GetEnumerator_NEW() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Concurrent::ConcurrentQueue_1::GetEnumerator_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetEnumerator", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal__method);
    }
    // private System.Void SnapForObservation(out System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> head, out System.Int32 headHead, out System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> tail, out System.Int32 tailTail)
    // Offset: 0xFFFFFFFF
    void SnapForObservation(typename System::Collections::Concurrent::ConcurrentQueue_1<T>::Segment*& head, int& headHead, typename System::Collections::Concurrent::ConcurrentQueue_1<T>::Segment*& tail, int& tailTail) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Concurrent::ConcurrentQueue_1::SnapForObservation");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SnapForObservation", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(head, headHead, tail, tailTail)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, head, headHead, tail, tailTail);
    }
    // private T GetItemWhenAvailable(System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> segment, System.Int32 i)
    // Offset: 0xFFFFFFFF
    T GetItemWhenAvailable(typename System::Collections::Concurrent::ConcurrentQueue_1<T>::Segment* segment, int i) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Concurrent::ConcurrentQueue_1::GetItemWhenAvailable");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetItemWhenAvailable", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(segment, i)));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method, segment, i);
    }
    // private System.Collections.Generic.IEnumerator`1<T> Enumerate(System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> head, System.Int32 headHead, System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> tail, System.Int32 tailTail)
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerator_1<T>* Enumerate(typename System::Collections::Concurrent::ConcurrentQueue_1<T>::Segment* head, int headHead, typename System::Collections::Concurrent::ConcurrentQueue_1<T>::Segment* tail, int tailTail) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Concurrent::ConcurrentQueue_1::Enumerate");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Enumerate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(head, headHead, tail, tailTail)));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal__method, head, headHead, tail, tailTail);
    }
    // public System.Void Enqueue(T item)
    // Offset: 0xFFFFFFFF
    void Enqueue(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Concurrent::ConcurrentQueue_1::Enqueue");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Enqueue", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(item)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, item);
    }
    // private System.Void EnqueueSlow(T item)
    // Offset: 0xFFFFFFFF
    void EnqueueSlow(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Concurrent::ConcurrentQueue_1::EnqueueSlow");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "EnqueueSlow", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(item)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, item);
    }
    // public System.Boolean TryDequeue(out T result)
    // Offset: 0xFFFFFFFF
    bool TryDequeue(T& result) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Concurrent::ConcurrentQueue_1::TryDequeue");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "TryDequeue", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(result)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, result);
    }
    // private System.Boolean TryDequeueSlow(out T item)
    // Offset: 0xFFFFFFFF
    bool TryDequeueSlow(T& item) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Concurrent::ConcurrentQueue_1::TryDequeueSlow");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "TryDequeueSlow", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(item)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, item);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConcurrentQueue_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Concurrent::ConcurrentQueue_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConcurrentQueue_1<T>*, creationType>()));
    }
  }; // System.Collections.Concurrent.ConcurrentQueue`1
  // Could not write size check! Type: System.Collections.Concurrent.ConcurrentQueue`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Concurrent::ConcurrentQueue_1, "System.Collections.Concurrent", "ConcurrentQueue`1");
