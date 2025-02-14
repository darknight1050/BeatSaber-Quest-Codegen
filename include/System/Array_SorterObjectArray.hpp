// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Array
#include "System/Array.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IComparer
  class IComparer;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Array/SorterObjectArray
  struct Array::SorterObjectArray/*, public System::ValueType*/ {
    public:
    // private System.Object[] keys
    // Size: 0x8
    // Offset: 0x0
    ::Array<::Il2CppObject*>* keys;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // private System.Object[] items
    // Size: 0x8
    // Offset: 0x8
    ::Array<::Il2CppObject*>* items;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // private System.Collections.IComparer comparer
    // Size: 0x8
    // Offset: 0x10
    System::Collections::IComparer* comparer;
    // Field size check
    static_assert(sizeof(System::Collections::IComparer*) == 0x8);
    // Creating value type constructor for type: SorterObjectArray
    constexpr SorterObjectArray(::Array<::Il2CppObject*>* keys_ = {}, ::Array<::Il2CppObject*>* items_ = {}, System::Collections::IComparer* comparer_ = {}) noexcept : keys{keys_}, items{items_}, comparer{comparer_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // System.Void .ctor(System.Object[] keys, System.Object[] items, System.Collections.IComparer comparer)
    // Offset: 0xEFBFC4
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  SorterObjectArray(::Array<::Il2CppObject*>* keys, ::Array<::Il2CppObject*>* items, System::Collections::IComparer* comparer)
    // System.Void SwapIfGreaterWithItems(System.Int32 a, System.Int32 b)
    // Offset: 0xEFBFCC
    void SwapIfGreaterWithItems(int a, int b);
    // private System.Void Swap(System.Int32 i, System.Int32 j)
    // Offset: 0xEFBFD4
    void Swap(int i, int j);
    // System.Void Sort(System.Int32 left, System.Int32 length)
    // Offset: 0xEFBFDC
    void Sort(int left, int length);
    // private System.Void IntrospectiveSort(System.Int32 left, System.Int32 length)
    // Offset: 0xEFBFE4
    void IntrospectiveSort(int left, int length);
    // private System.Void IntroSort(System.Int32 lo, System.Int32 hi, System.Int32 depthLimit)
    // Offset: 0xEFBFEC
    void IntroSort(int lo, int hi, int depthLimit);
    // private System.Int32 PickPivotAndPartition(System.Int32 lo, System.Int32 hi)
    // Offset: 0xEFBFF4
    int PickPivotAndPartition(int lo, int hi);
    // private System.Void Heapsort(System.Int32 lo, System.Int32 hi)
    // Offset: 0xEFBFFC
    void Heapsort(int lo, int hi);
    // private System.Void DownHeap(System.Int32 i, System.Int32 n, System.Int32 lo)
    // Offset: 0xEFC004
    void DownHeap(int i, int n, int lo);
    // private System.Void InsertionSort(System.Int32 lo, System.Int32 hi)
    // Offset: 0xEFC00C
    void InsertionSort(int lo, int hi);
  }; // System.Array/SorterObjectArray
  #pragma pack(pop)
  static check_size<sizeof(Array::SorterObjectArray), 16 + sizeof(System::Collections::IComparer*)> __System_Array_SorterObjectArraySizeCheck;
  static_assert(sizeof(Array::SorterObjectArray) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Array::SorterObjectArray, "System", "Array/SorterObjectArray");
