// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Linq.IOrderedEnumerable`1
#include "System/Linq/IOrderedEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: System.Linq.Buffer`1
#include "System/Linq/Buffer_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq
namespace System::Linq {
  // Skipping declaration: <GetEnumerator>d__1 because it is already included!
  // Forward declaring type: EnumerableSorter`1<TElement>
  template<typename TElement>
  class EnumerableSorter_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IComparer`1<T>
  template<typename T>
  class IComparer_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Linq
namespace System::Linq {
  // Autogenerated type: System.Linq.OrderedEnumerable`1
  template<typename TElement>
  class OrderedEnumerable_1 : public ::CsObject, public System::Linq::IOrderedEnumerable_1<TElement>, public System::Collections::Generic::IEnumerable_1<TElement>, public System::Collections::IEnumerable {
    public:
    // Nested type: System::Linq::OrderedEnumerable_1::$GetEnumerator$d__1<TElement>
    class $GetEnumerator$d__1;
    // Autogenerated type: System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1
    class $GetEnumerator$d__1 : public ::CsObject, public ::il2cpp_utils::il2cpp_type_check::NestedType, public System::Collections::Generic::IEnumerator_1<TElement>, public System::IDisposable, public System::Collections::IEnumerator {
      public:
      using declaring_type = OrderedEnumerable_1<TElement>*;
      // private System.Int32 <>1__state
      // Offset: 0x0
      int $$1__state;
      // private TElement <>2__current
      // Offset: 0x0
      TElement $$2__current;
      // public System.Linq.OrderedEnumerable`1<TElement> <>4__this
      // Offset: 0x0
      System::Linq::OrderedEnumerable_1<TElement>* $$4__this;
      // private System.Linq.Buffer`1<TElement> <buffer>5__1
      // Offset: 0x0
      System::Linq::Buffer_1<TElement> $buffer$5__1;
      // private System.Int32[] <map>5__2
      // Offset: 0x0
      ::Array<int>* $map$5__2;
      // private System.Int32 <i>5__3
      // Offset: 0x0
      int $i$5__3;
      // public System.Void .ctor(System.Int32 $$1__state)
      // Offset: 0xFFFFFFFF
      static typename OrderedEnumerable_1<TElement>::$GetEnumerator$d__1* New_ctor(int $$1__state) {
        return (typename OrderedEnumerable_1<TElement>::$GetEnumerator$d__1*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename OrderedEnumerable_1<TElement>::$GetEnumerator$d__1*>::get(), $$1__state));
      }
      // private System.Void System.IDisposable.Dispose()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.IDisposable
      // Base method: System.Void IDisposable::Dispose()
      void System_IDisposable_Dispose() {
        THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.IDisposable.Dispose"));
      }
      // private System.Boolean MoveNext()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Boolean IEnumerator::MoveNext()
      bool MoveNext() {
        return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "MoveNext"));
      }
      // private TElement System.Collections.Generic.IEnumerator<TElement>.get_Current()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.Generic.IEnumerator`1
      // Base method: T IEnumerator`1::get_Current()
      TElement System_Collections_Generic_IEnumerator_1_get_Current() {
        return THROW_UNLESS((il2cpp_utils::RunMethod<TElement>(this, "System.Collections.Generic.IEnumerator<TElement>.get_Current")));
      }
      // private System.Void System.Collections.IEnumerator.Reset()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Void IEnumerator::Reset()
      void System_Collections_IEnumerator_Reset() {
        THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.IEnumerator.Reset"));
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Object IEnumerator::get_Current()
      ::CsObject* System_Collections_IEnumerator_get_Current() {
        return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "System.Collections.IEnumerator.get_Current"));
      }
    }; // System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1
    // System.Collections.Generic.IEnumerable`1<TElement> source
    // Offset: 0x0
    System::Collections::Generic::IEnumerable_1<TElement>* source;
    // public System.Collections.Generic.IEnumerator`1<TElement> GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerator_1<TElement>* GetEnumerator() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerator_1<TElement>*>(this, "GetEnumerator"));
    }
    // System.Linq.EnumerableSorter`1<TElement> GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement> next)
    // Offset: 0xFFFFFFFF
    System::Linq::EnumerableSorter_1<TElement>* GetEnumerableSorter(System::Linq::EnumerableSorter_1<TElement>* next) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Linq::EnumerableSorter_1<TElement>*>(this, "GetEnumerableSorter", next));
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "System.Collections.IEnumerable.GetEnumerator"));
    }
    // private System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey> keySelector, System.Collections.Generic.IComparer`1<TKey> comparer, System.Boolean descending)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Linq.IOrderedEnumerable`1
    // Base method: System.Linq.IOrderedEnumerable`1<TElement> IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey> keySelector, System.Collections.Generic.IComparer`1<TKey> comparer, System.Boolean descending)
    template<class TKey>
    System::Linq::IOrderedEnumerable_1<TElement>* System_Linq_IOrderedEnumerable_1_CreateOrderedEnumerable(System::Func_2<TElement, TKey>* keySelector, System::Collections::Generic::IComparer_1<TKey>* comparer, bool descending) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<System::Linq::IOrderedEnumerable_1<TElement>*>(this, "System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get()}, keySelector, comparer, descending)));
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OrderedEnumerable_1<TElement>* New_ctor() {
      return (OrderedEnumerable_1<TElement>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OrderedEnumerable_1<TElement>*>::get()));
    }
  }; // System.Linq.OrderedEnumerable`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::OrderedEnumerable_1, "System.Linq", "OrderedEnumerable`1");
#pragma pack(pop)
