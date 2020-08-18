// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
// Including type: System.Collections.Generic.IReadOnlyCollection`1
#include "System/Collections/Generic/IReadOnlyCollection_1.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: Enumerator because it is already included!
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
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Autogenerated type: System.Collections.Generic.Stack`1
  template<typename T>
  class Stack_1 : public System::Collections::ICollection, public System::Collections::Generic::IReadOnlyCollection_1<T>, public ::Il2CppObject {
    public:
    // Nested type: System::Collections::Generic::Stack_1::Enumerator<T>
    struct Enumerator;
    // Autogenerated type: System.Collections.Generic.Stack`1/Enumerator
    struct Enumerator : public System::Collections::Generic::IEnumerator_1<T>, public ::il2cpp_utils::il2cpp_type_check::NestedType, public System::ValueType {
      public:
      using declaring_type = Stack_1<T>*;
      // private readonly System.Collections.Generic.Stack`1<T> _stack
      // Offset: 0x0
      System::Collections::Generic::Stack_1<T>* stack;
      // private readonly System.Int32 _version
      // Offset: 0x0
      int version;
      // private System.Int32 _index
      // Offset: 0x0
      int index;
      // private T _currentElement
      // Offset: 0x0
      T currentElement;
      // Creating value type constructor for type: Enumerator
      Enumerator(System::Collections::Generic::Stack_1<T>* stack_ = {}, int version_ = {}, int index_ = {}, T currentElement_ = {}) : stack{stack_}, version{version_}, index{index_}, currentElement{currentElement_} {}
      // System.Void .ctor(System.Collections.Generic.Stack`1<T> stack)
      // Offset: 0xFFFFFFFF
      static typename Stack_1<T>::Enumerator* New_ctor(System::Collections::Generic::Stack_1<T>* stack) {
        return (typename Stack_1<T>::Enumerator*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename Stack_1<T>::Enumerator>::get(), stack));
      }
      // private System.Void ThrowEnumerationNotStartedOrEnded()
      // Offset: 0xFFFFFFFF
      void ThrowEnumerationNotStartedOrEnded() {
        THROW_UNLESS(il2cpp_utils::RunMethod(*this, "ThrowEnumerationNotStartedOrEnded"));
      }
      // public System.Void Dispose()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.IDisposable
      // Base method: System.Void IDisposable::Dispose()
      void Dispose() {
        THROW_UNLESS(il2cpp_utils::RunMethod(*this, "Dispose"));
      }
      // Creating proxy method: System_IDisposable_Dispose
      // Maps to method: Dispose
      void System_IDisposable_Dispose() {
        Dispose();
      }
      // public System.Boolean MoveNext()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Boolean IEnumerator::MoveNext()
      bool MoveNext() {
        return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "MoveNext"));
      }
      // public T get_Current()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.Generic.IEnumerator`1
      // Base method: T IEnumerator`1::get_Current()
      T get_Current() {
        return THROW_UNLESS(il2cpp_utils::RunMethod<T>(*this, "get_Current"));
      }
      // Creating proxy method: System_Collections_Generic_IEnumerator_1_get_Current
      // Maps to method: get_Current
      T System_Collections_Generic_IEnumerator_1_get_Current() {
        return get_Current();
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Object IEnumerator::get_Current()
      ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
        return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(*this, "System.Collections.IEnumerator.get_Current"));
      }
      // private System.Void System.Collections.IEnumerator.Reset()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Void IEnumerator::Reset()
      void System_Collections_IEnumerator_Reset() {
        THROW_UNLESS(il2cpp_utils::RunMethod(*this, "System.Collections.IEnumerator.Reset"));
      }
    }; // System.Collections.Generic.Stack`1/Enumerator
    // private T[] _array
    // Offset: 0x0
    ::Array<T>* array;
    // private System.Int32 _size
    // Offset: 0x0
    int size;
    // private System.Int32 _version
    // Offset: 0x0
    int version;
    // private System.Object _syncRoot
    // Offset: 0x0
    ::Il2CppObject* syncRoot;
    // Autogenerated static field getter
    // Get static field: static private System.Int32 DefaultCapacity
    static int _get_DefaultCapacity() {
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Stack_1<T>*>::get(), "DefaultCapacity"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Int32 DefaultCapacity
    static void _set_DefaultCapacity(int value) {
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Stack_1<T>*>::get(), "DefaultCapacity", value));
    }
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0xFFFFFFFF
    static Stack_1<T>* New_ctor(int capacity) {
      return (Stack_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Stack_1<T>*>::get(), capacity));
    }
    // public System.Boolean Contains(T item)
    // Offset: 0xFFFFFFFF
    bool Contains(T item) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Contains", item));
    }
    // public T Peek()
    // Offset: 0xFFFFFFFF
    T Peek() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "Peek"));
    }
    // public T Pop()
    // Offset: 0xFFFFFFFF
    T Pop() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "Pop"));
    }
    // public System.Void Push(T item)
    // Offset: 0xFFFFFFFF
    void Push(T item) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Push", item));
    }
    // private System.Void ThrowForEmptyStack()
    // Offset: 0xFFFFFFFF
    void ThrowForEmptyStack() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "ThrowForEmptyStack"));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Stack_1<T>* New_ctor() {
      return (Stack_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Stack_1<T>*>::get()));
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.ICollection
    // Base method: System.Int32 ICollection::get_Count()
    // Base method: System.Int32 IReadOnlyCollection`1::get_Count()
    int get_Count() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Count"));
    }
    // Creating proxy method: System_Collections_ICollection_get_Count
    // Maps to method: get_Count
    int System_Collections_ICollection_get_Count() {
      return get_Count();
    }
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 arrayIndex)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.ICollection
    // Base method: System.Void ICollection::CopyTo(System.Array array, System.Int32 arrayIndex)
    void System_Collections_ICollection_CopyTo(System::Array* array, int arrayIndex) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.ICollection.CopyTo", array, arrayIndex));
    }
    // private System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable<T>.GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable`1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_1_GetEnumerator() {
      return THROW_UNLESS((il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerator_1<T>*>(this, "System.Collections.Generic.IEnumerable<T>.GetEnumerator")));
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "System.Collections.IEnumerable.GetEnumerator"));
    }
  }; // System.Collections.Generic.Stack`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::Stack_1, "System.Collections.Generic", "Stack`1");
#pragma pack(pop)
