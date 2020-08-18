// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.IntervalTreeNode
#include "UnityEngine/Timeline/IntervalTreeNode.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Int64
#include "System/Int64.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Skipping declaration: Entry because it is already included!
  // Forward declaring type: IInterval
  class IInterval;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.IntervalTree`1
  template<typename T>
  class IntervalTree_1 : public ::Il2CppObject {
    static_assert((!std::is_complete_v<std::remove_pointer_t<T>> || std::is_base_of_v<UnityEngine::Timeline::IInterval, std::remove_pointer_t<T>>));
    public:
    // Nested type: UnityEngine::Timeline::IntervalTree_1::Entry<T>
    struct Entry;
    // Autogenerated type: UnityEngine.Timeline.IntervalTree`1/Entry
    struct Entry : public ::il2cpp_utils::il2cpp_type_check::NestedType, public System::ValueType {
      static_assert((!std::is_complete_v<std::remove_pointer_t<T>> || std::is_base_of_v<UnityEngine::Timeline::IInterval, std::remove_pointer_t<T>>));
      public:
      using declaring_type = IntervalTree_1<T>*;
      // public System.Int64 intervalStart
      // Offset: 0x0
      int64_t intervalStart;
      // public System.Int64 intervalEnd
      // Offset: 0x0
      int64_t intervalEnd;
      // public T item
      // Offset: 0x0
      T item;
      // Creating value type constructor for type: Entry
      Entry(int64_t intervalStart_ = {}, int64_t intervalEnd_ = {}, T item_ = {}) : intervalStart{intervalStart_}, intervalEnd{intervalEnd_}, item{item_} {}
    }; // UnityEngine.Timeline.IntervalTree`1/Entry
    // private readonly System.Collections.Generic.List`1<UnityEngine.Timeline.IntervalTree`1/Entry<T>> m_Entries
    // Offset: 0x0
    System::Collections::Generic::List_1<typename UnityEngine::Timeline::IntervalTree_1<T>::Entry>* m_Entries;
    // private readonly System.Collections.Generic.List`1<UnityEngine.Timeline.IntervalTreeNode> m_Nodes
    // Offset: 0x0
    System::Collections::Generic::List_1<UnityEngine::Timeline::IntervalTreeNode>* m_Nodes;
    // private System.Boolean <dirty>k__BackingField
    // Offset: 0x0
    bool dirty;
    // Autogenerated static field getter
    // Get static field: static private System.Int32 kMinNodeSize
    static int _get_kMinNodeSize() {
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IntervalTree_1<T>*>::get(), "kMinNodeSize"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Int32 kMinNodeSize
    static void _set_kMinNodeSize(int value) {
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IntervalTree_1<T>*>::get(), "kMinNodeSize", value));
    }
    // Autogenerated static field getter
    // Get static field: static private System.Int32 kInvalidNode
    static int _get_kInvalidNode() {
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IntervalTree_1<T>*>::get(), "kInvalidNode"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Int32 kInvalidNode
    static void _set_kInvalidNode(int value) {
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IntervalTree_1<T>*>::get(), "kInvalidNode", value));
    }
    // Autogenerated static field getter
    // Get static field: static private System.Int64 kCenterUnknown
    static int64_t _get_kCenterUnknown() {
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<int64_t>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IntervalTree_1<T>*>::get(), "kCenterUnknown"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Int64 kCenterUnknown
    static void _set_kCenterUnknown(int64_t value) {
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IntervalTree_1<T>*>::get(), "kCenterUnknown", value));
    }
    // public System.Boolean get_dirty()
    // Offset: 0xFFFFFFFF
    bool get_dirty() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_dirty"));
    }
    // System.Void set_dirty(System.Boolean value)
    // Offset: 0xFFFFFFFF
    void set_dirty(bool value) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_dirty", value));
    }
    // public System.Void Add(T item)
    // Offset: 0xFFFFFFFF
    void Add(T item) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Add", item));
    }
    // public System.Void IntersectsWith(System.Int64 value, System.Collections.Generic.List`1<T> results)
    // Offset: 0xFFFFFFFF
    void IntersectsWith(int64_t value, System::Collections::Generic::List_1<T>* results) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "IntersectsWith", value, results));
    }
    // public System.Void IntersectsWithRange(System.Int64 start, System.Int64 end, System.Collections.Generic.List`1<T> results)
    // Offset: 0xFFFFFFFF
    void IntersectsWithRange(int64_t start, int64_t end, System::Collections::Generic::List_1<T>* results) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "IntersectsWithRange", start, end, results));
    }
    // public System.Void UpdateIntervals()
    // Offset: 0xFFFFFFFF
    void UpdateIntervals() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateIntervals"));
    }
    // private System.Void Query(UnityEngine.Timeline.IntervalTreeNode intervalTreeNode, System.Int64 value, System.Collections.Generic.List`1<T> results)
    // Offset: 0xFFFFFFFF
    void Query(UnityEngine::Timeline::IntervalTreeNode intervalTreeNode, int64_t value, System::Collections::Generic::List_1<T>* results) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Query", intervalTreeNode, value, results));
    }
    // private System.Void QueryRange(UnityEngine.Timeline.IntervalTreeNode intervalTreeNode, System.Int64 start, System.Int64 end, System.Collections.Generic.List`1<T> results)
    // Offset: 0xFFFFFFFF
    void QueryRange(UnityEngine::Timeline::IntervalTreeNode intervalTreeNode, int64_t start, int64_t end, System::Collections::Generic::List_1<T>* results) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "QueryRange", intervalTreeNode, start, end, results));
    }
    // private System.Void Rebuild()
    // Offset: 0xFFFFFFFF
    void Rebuild() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Rebuild"));
    }
    // private System.Int32 Rebuild(System.Int32 start, System.Int32 end)
    // Offset: 0xFFFFFFFF
    int Rebuild(int start, int end) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Rebuild", start, end));
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFF
    void Clear() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Clear"));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static IntervalTree_1<T>* New_ctor() {
      return (IntervalTree_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IntervalTree_1<T>*>::get()));
    }
  }; // UnityEngine.Timeline.IntervalTree`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::Timeline::IntervalTree_1, "UnityEngine.Timeline", "IntervalTree`1");
#pragma pack(pop)
