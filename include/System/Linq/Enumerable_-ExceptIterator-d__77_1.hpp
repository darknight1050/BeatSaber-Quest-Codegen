// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Linq.Enumerable
#include "System/Linq/Enumerable.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEqualityComparer`1<T>
  template<typename T>
  class IEqualityComparer_1;
}
// Forward declaring namespace: System::Linq
namespace System::Linq {
  // Forward declaring type: Set`1<TElement>
  template<typename TElement>
  class Set_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: System.Linq
namespace System::Linq {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Linq.Enumerable/<ExceptIterator>d__77`1
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D47874
  template<typename TSource>
  class Enumerable::$ExceptIterator$d__77_1 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<TSource>, public System::Collections::Generic::IEnumerator_1<TSource>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private TSource <>2__current
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TSource $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x0
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.Generic.IEqualityComparer`1<TSource> comparer
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::IEqualityComparer_1<TSource>* comparer;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEqualityComparer_1<TSource>*) == 0x8);
    // public System.Collections.Generic.IEqualityComparer`1<TSource> <>3__comparer
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::IEqualityComparer_1<TSource>* $$3__comparer;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEqualityComparer_1<TSource>*) == 0x8);
    // private System.Collections.Generic.IEnumerable`1<TSource> second
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::IEnumerable_1<TSource>* second;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerable_1<TSource>*) == 0x8);
    // public System.Collections.Generic.IEnumerable`1<TSource> <>3__second
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::IEnumerable_1<TSource>* $$3__second;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerable_1<TSource>*) == 0x8);
    // private System.Collections.Generic.IEnumerable`1<TSource> first
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::IEnumerable_1<TSource>* first;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerable_1<TSource>*) == 0x8);
    // public System.Collections.Generic.IEnumerable`1<TSource> <>3__first
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::IEnumerable_1<TSource>* $$3__first;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerable_1<TSource>*) == 0x8);
    // private System.Linq.Set`1<TSource> <set>5__1
    // Size: 0x8
    // Offset: 0x0
    System::Linq::Set_1<TSource>* $set$5__1;
    // Field size check
    static_assert(sizeof(System::Linq::Set_1<TSource>*) == 0x8);
    // private System.Collections.Generic.IEnumerator`1<TSource> <>7__wrap1
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::IEnumerator_1<TSource>* $$7__wrap1;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerator_1<TSource>*) == 0x8);
    // Creating value type constructor for type: $ExceptIterator$d__77_1
    $ExceptIterator$d__77_1(int $$1__state_ = {}, TSource $$2__current_ = {}, int $$l__initialThreadId_ = {}, System::Collections::Generic::IEqualityComparer_1<TSource>* comparer_ = {}, System::Collections::Generic::IEqualityComparer_1<TSource>* $$3__comparer_ = {}, System::Collections::Generic::IEnumerable_1<TSource>* second_ = {}, System::Collections::Generic::IEnumerable_1<TSource>* $$3__second_ = {}, System::Collections::Generic::IEnumerable_1<TSource>* first_ = {}, System::Collections::Generic::IEnumerable_1<TSource>* $$3__first_ = {}, System::Linq::Set_1<TSource>* $set$5__1_ = {}, System::Collections::Generic::IEnumerator_1<TSource>* $$7__wrap1_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, comparer{comparer_}, $$3__comparer{$$3__comparer_}, second{second_}, $$3__second{$$3__second_}, first{first_}, $$3__first{$$3__first_}, $set$5__1{$set$5__1_}, $$7__wrap1{$$7__wrap1_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<TSource>
    operator System::Collections::Generic::IEnumerable_1<TSource>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<TSource>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<TSource>
    operator System::Collections::Generic::IEnumerator_1<TSource>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<TSource>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Enumerable::$ExceptIterator$d__77_1<TSource>* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$ExceptIterator$d__77_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Enumerable::$ExceptIterator$d__77_1<TSource>*, creationType>($$1__state)));
    }
    // private System.Void <>m__Finally1()
    // Offset: 0xFFFFFFFF
    void $$m__Finally1() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$ExceptIterator$d__77_1::<>m__Finally1");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<>m__Finally1", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$ExceptIterator$d__77_1::System.IDisposable.Dispose");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // private System.Boolean MoveNext()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$ExceptIterator$d__77_1::MoveNext");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "MoveNext", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
    }
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext() {
      return MoveNext();
    }
    // private TSource System.Collections.Generic.IEnumerator<TSource>.get_Current()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    TSource System_Collections_Generic_IEnumerator_1_get_Current() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$ExceptIterator$d__77_1::System.Collections.Generic.IEnumerator<TSource>.get_Current");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IEnumerator<TSource>.get_Current", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
      return ::il2cpp_utils::RunMethodThrow<TSource, false>(this, ___internal__method);
    }
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$ExceptIterator$d__77_1::System.Collections.IEnumerator.Reset");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$ExceptIterator$d__77_1::System.Collections.IEnumerator.get_Current");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method);
    }
    // private System.Collections.Generic.IEnumerator`1<TSource> System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable_1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<TSource>* System_Collections_Generic_IEnumerable_1_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$ExceptIterator$d__77_1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IEnumerable<TSource>.GetEnumerator", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerator_1<TSource>*, false>(this, ___internal__method);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$ExceptIterator$d__77_1::System.Collections.IEnumerable.GetEnumerator");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
  }; // System.Linq.Enumerable/<ExceptIterator>d__77`1
  // Could not write size check! Type: System.Linq.Enumerable/<ExceptIterator>d__77`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::Enumerable::$ExceptIterator$d__77_1, "System.Linq", "Enumerable/<ExceptIterator>d__77`1");
