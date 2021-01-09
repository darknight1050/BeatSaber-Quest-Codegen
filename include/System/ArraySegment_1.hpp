// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// WARNING Layout: Sequential may not be correctly taken into account!
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
// Including type: System.Collections.Generic.IReadOnlyList`1
#include "System/Collections/Generic/IReadOnlyList_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ArraySegmentEnumerator because it is already included!
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // WARNING Size may be invalid!
  // Autogenerated type: System.ArraySegment`1
  // [] Offset: FFFFFFFF
  template<typename T>
  struct ArraySegment_1/*, public System::ValueType, public System::Collections::Generic::IList_1<T>, public System::Collections::Generic::IReadOnlyList_1<T>*/ {
    public:
    // Nested type: System::ArraySegment_1::ArraySegmentEnumerator<T>
    class ArraySegmentEnumerator;
    // WARNING Size may be invalid!
    // Autogenerated type: System.ArraySegment`1/ArraySegmentEnumerator
    // [] Offset: FFFFFFFF
    class ArraySegmentEnumerator : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<T>*/ {
      public:
      using declaring_type = ArraySegment_1<T>;
      static constexpr std::string_view NESTED_NAME = "ArraySegmentEnumerator";
      // private T[] _array
      // Size: 0x8
      // Offset: 0x0
      ::Array<T>* array;
      // Field size check
      static_assert(sizeof(::Array<T>*) == 0x8);
      // private System.Int32 _start
      // Size: 0x4
      // Offset: 0x0
      int start;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private System.Int32 _end
      // Size: 0x4
      // Offset: 0x0
      int end;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private System.Int32 _current
      // Size: 0x4
      // Offset: 0x0
      int current;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: ArraySegmentEnumerator
      ArraySegmentEnumerator(::Array<T>* array_ = {}, int start_ = {}, int end_ = {}, int current_ = {}) noexcept : array{array_}, start{start_}, end{end_}, current{current_} {}
      // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<T>
      operator System::Collections::Generic::IEnumerator_1<T>() noexcept {
        return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<T>*>(this);
      }
      // System.Void .ctor(System.ArraySegment`1<T> arraySegment)
      // Offset: 0xFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename ArraySegment_1<T>::ArraySegmentEnumerator* New_ctor(System::ArraySegment_1<T> arraySegment) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::ArraySegmentEnumerator::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename ArraySegment_1<T>::ArraySegmentEnumerator*, creationType>(arraySegment)));
      }
      // public System.Boolean MoveNext()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Boolean IEnumerator::MoveNext()
      bool MoveNext() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::ArraySegmentEnumerator::MoveNext");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "MoveNext", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
        return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
      }
      // Creating proxy method: System_Collections_IEnumerator_MoveNext
      // Maps to method: MoveNext
      bool System_Collections_IEnumerator_MoveNext() {
        return MoveNext();
      }
      // public T get_Current()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.Generic.IEnumerator`1
      // Base method: T IEnumerator_1::get_Current()
      T get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::ArraySegmentEnumerator::get_Current");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_Current", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
        return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method);
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
        static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::ArraySegmentEnumerator::System.Collections.IEnumerator.get_Current");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
        return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method);
      }
      // private System.Void System.Collections.IEnumerator.Reset()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Void IEnumerator::Reset()
      void System_Collections_IEnumerator_Reset() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::ArraySegmentEnumerator::System.Collections.IEnumerator.Reset");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
      }
      // public System.Void Dispose()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.IDisposable
      // Base method: System.Void IDisposable::Dispose()
      void Dispose() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::ArraySegmentEnumerator::Dispose");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Dispose", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
      }
      // Creating proxy method: System_IDisposable_Dispose
      // Maps to method: Dispose
      void System_IDisposable_Dispose() {
        Dispose();
      }
    }; // System.ArraySegment`1/ArraySegmentEnumerator
    // Could not write size check! Type: System.ArraySegment`1/ArraySegmentEnumerator is generic, or has no fields that are valid for size checks!
    // private T[] _array
    // Size: 0x8
    // Offset: 0x0
    ::Array<T>* array;
    // Field size check
    static_assert(sizeof(::Array<T>*) == 0x8);
    // private System.Int32 _offset
    // Size: 0x4
    // Offset: 0x0
    int offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _count
    // Size: 0x4
    // Offset: 0x0
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ArraySegment_1
    constexpr ArraySegment_1(::Array<T>* array_ = {}, int offset_ = {}, int count_ = {}) noexcept : array{array_}, offset{offset_}, count{count_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IList_1<T>
    operator System::Collections::Generic::IList_1<T>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IList_1<T>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IReadOnlyList_1<T>
    operator System::Collections::Generic::IReadOnlyList_1<T>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IReadOnlyList_1<T>*>(this);
    }
    // public System.Void .ctor(T[] array)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    ArraySegment_1(::Array<T>* array) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(array)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, array);
    }
    // public System.Void .ctor(T[] array, System.Int32 offset, System.Int32 count)
    // Offset: 0xFFFFFFFF
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  ArraySegment_1(::Array<T>* array, int offset, int count)
    // public T[] get_Array()
    // Offset: 0xFFFFFFFF
    ::Array<T>* get_Array() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::get_Array");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "get_Array", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(*this, ___internal__method);
    }
    // public System.Int32 get_Offset()
    // Offset: 0xFFFFFFFF
    int get_Offset() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::get_Offset");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "get_Offset", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<int, false>(*this, ___internal__method);
    }
    // public System.Boolean Equals(System.ArraySegment`1<T> obj)
    // Offset: 0xFFFFFFFF
    bool Equals(System::ArraySegment_1<T> obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::Equals");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "Equals", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(obj)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method, obj);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Int32 ICollection_1::get_Count()
    // Base method: System.Int32 IReadOnlyCollection_1::get_Count()
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::get_Count");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "get_Count", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<int, false>(*this, ___internal__method);
    }
    // Creating proxy method: System_Collections_Generic_ICollection_1_get_Count
    // Maps to method: get_Count
    int System_Collections_Generic_ICollection_1_get_Count() {
      return get_Count();
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::GetHashCode");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "GetHashCode", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<int, false>(*this, ___internal__method);
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::Equals");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "Equals", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(obj)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method, obj);
    }
    // private T System.Collections.Generic.IList<T>.get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IList`1
    // Base method: T IList_1::get_Item(System.Int32 index)
    T System_Collections_Generic_IList_1_get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::System.Collections.Generic.IList<T>.get_Item");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.Generic.IList<T>.get_Item", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(index))));
      return ::il2cpp_utils::RunMethodThrow<T, false>(*this, ___internal__method, index);
    }
    // private System.Void System.Collections.Generic.IList<T>.set_Item(System.Int32 index, T value)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IList`1
    // Base method: System.Void IList_1::set_Item(System.Int32 index, T value)
    void System_Collections_Generic_IList_1_set_Item(int index, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::System.Collections.Generic.IList<T>.set_Item");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.Generic.IList<T>.set_Item", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(index, value))));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, index, value);
    }
    // private System.Int32 System.Collections.Generic.IList<T>.IndexOf(T item)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IList`1
    // Base method: System.Int32 IList_1::IndexOf(T item)
    int System_Collections_Generic_IList_1_IndexOf(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::System.Collections.Generic.IList<T>.IndexOf");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.Generic.IList<T>.IndexOf", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(item))));
      return ::il2cpp_utils::RunMethodThrow<int, false>(*this, ___internal__method, item);
    }
    // private System.Void System.Collections.Generic.IList<T>.Insert(System.Int32 index, T item)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IList`1
    // Base method: System.Void IList_1::Insert(System.Int32 index, T item)
    void System_Collections_Generic_IList_1_Insert(int index, T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::System.Collections.Generic.IList<T>.Insert");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.Generic.IList<T>.Insert", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(index, item))));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, index, item);
    }
    // private System.Void System.Collections.Generic.IList<T>.RemoveAt(System.Int32 index)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IList`1
    // Base method: System.Void IList_1::RemoveAt(System.Int32 index)
    void System_Collections_Generic_IList_1_RemoveAt(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::System.Collections.Generic.IList<T>.RemoveAt");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.Generic.IList<T>.RemoveAt", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(index))));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, index);
    }
    // private T System.Collections.Generic.IReadOnlyList<T>.get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IReadOnlyList`1
    // Base method: T IReadOnlyList_1::get_Item(System.Int32 index)
    T System_Collections_Generic_IReadOnlyList_1_get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::System.Collections.Generic.IReadOnlyList<T>.get_Item");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.Generic.IReadOnlyList<T>.get_Item", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(index))));
      return ::il2cpp_utils::RunMethodThrow<T, false>(*this, ___internal__method, index);
    }
    // private System.Boolean System.Collections.Generic.ICollection<T>.get_IsReadOnly()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Boolean ICollection_1::get_IsReadOnly()
    bool System_Collections_Generic_ICollection_1_get_IsReadOnly() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::System.Collections.Generic.ICollection<T>.get_IsReadOnly");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.Generic.ICollection<T>.get_IsReadOnly", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method);
    }
    // private System.Void System.Collections.Generic.ICollection<T>.Add(T item)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Void ICollection_1::Add(T item)
    void System_Collections_Generic_ICollection_1_Add(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::System.Collections.Generic.ICollection<T>.Add");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.Generic.ICollection<T>.Add", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(item))));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, item);
    }
    // private System.Void System.Collections.Generic.ICollection<T>.Clear()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Void ICollection_1::Clear()
    void System_Collections_Generic_ICollection_1_Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::System.Collections.Generic.ICollection<T>.Clear");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.Generic.ICollection<T>.Clear", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method);
    }
    // private System.Boolean System.Collections.Generic.ICollection<T>.Contains(T item)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Boolean ICollection_1::Contains(T item)
    bool System_Collections_Generic_ICollection_1_Contains(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::System.Collections.Generic.ICollection<T>.Contains");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.Generic.ICollection<T>.Contains", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(item))));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method, item);
    }
    // private System.Void System.Collections.Generic.ICollection<T>.CopyTo(T[] array, System.Int32 arrayIndex)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Void ICollection_1::CopyTo(T[] array, System.Int32 arrayIndex)
    void System_Collections_Generic_ICollection_1_CopyTo(::Array<T>* array, int arrayIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::System.Collections.Generic.ICollection<T>.CopyTo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.Generic.ICollection<T>.CopyTo", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(array, arrayIndex))));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, array, arrayIndex);
    }
    // private System.Boolean System.Collections.Generic.ICollection<T>.Remove(T item)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Boolean ICollection_1::Remove(T item)
    bool System_Collections_Generic_ICollection_1_Remove(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::System.Collections.Generic.ICollection<T>.Remove");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.Generic.ICollection<T>.Remove", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(item))));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method, item);
    }
    // private System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable<T>.GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable_1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_1_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::System.Collections.Generic.IEnumerable<T>.GetEnumerator");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.Generic.IEnumerable<T>.GetEnumerator", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerator_1<T>*, false>(*this, ___internal__method);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::System.Collections.IEnumerable.GetEnumerator");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(*this, ___internal__method);
    }
  }; // System.ArraySegment`1
  // Could not write size check! Type: System.ArraySegment`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::ArraySegment_1, "System", "ArraySegment`1");
