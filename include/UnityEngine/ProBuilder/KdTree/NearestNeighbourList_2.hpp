// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::KdTree
namespace UnityEngine::ProBuilder::KdTree {
  // Forward declaring type: PriorityQueue`2<TItem, TPriority>
  template<typename TItem, typename TPriority>
  class PriorityQueue_2;
  // Forward declaring type: ITypeMath`1<T>
  template<typename T>
  class ITypeMath_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.KdTree
namespace UnityEngine::ProBuilder::KdTree {
  // Autogenerated type: UnityEngine.ProBuilder.KdTree.NearestNeighbourList`2
  template<typename TItem, typename TDistance>
  class NearestNeighbourList_2 : public ::Il2CppObject {
    public:
    // private UnityEngine.ProBuilder.KdTree.PriorityQueue`2<TItem,TDistance> queue
    // Offset: 0x0
    UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TDistance>* queue;
    // private UnityEngine.ProBuilder.KdTree.ITypeMath`1<TDistance> distanceMath
    // Offset: 0x0
    UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance>* distanceMath;
    // private System.Int32 maxCapacity
    // Offset: 0x0
    int maxCapacity;
    // public System.Void .ctor(System.Int32 maxCapacity, UnityEngine.ProBuilder.KdTree.ITypeMath`1<TDistance> distanceMath)
    // Offset: 0xFFFFFFFF
    static NearestNeighbourList_2<TItem, TDistance>* New_ctor(int maxCapacity, UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance>* distanceMath) {
      return (NearestNeighbourList_2<TItem, TDistance>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NearestNeighbourList_2<TItem, TDistance>*>::get(), maxCapacity, distanceMath)));
    }
    // public System.Int32 get_MaxCapacity()
    // Offset: 0xFFFFFFFF
    int get_MaxCapacity() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_MaxCapacity"));
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFF
    int get_Count() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Count"));
    }
    // public System.Boolean Add(TItem item, TDistance distance)
    // Offset: 0xFFFFFFFF
    bool Add(TItem item, TDistance distance) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Add", item, distance));
    }
    // public TDistance GetFurtherestDistance()
    // Offset: 0xFFFFFFFF
    TDistance GetFurtherestDistance() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<TDistance>(this, "GetFurtherestDistance"));
    }
    // public TItem RemoveFurtherest()
    // Offset: 0xFFFFFFFF
    TItem RemoveFurtherest() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<TItem>(this, "RemoveFurtherest"));
    }
    // public System.Boolean get_IsCapacityReached()
    // Offset: 0xFFFFFFFF
    bool get_IsCapacityReached() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsCapacityReached"));
    }
  }; // UnityEngine.ProBuilder.KdTree.NearestNeighbourList`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2, "UnityEngine.ProBuilder.KdTree", "NearestNeighbourList`2");
#pragma pack(pop)
