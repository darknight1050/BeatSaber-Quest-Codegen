// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Priority_Queue.SimplePriorityQueue`2
#include "Priority_Queue/SimplePriorityQueue_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IComparer`1<T>
  template<typename T>
  class IComparer_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Completed forward declares
// Type namespace: Priority_Queue
namespace Priority_Queue {
  // WARNING Size may be invalid!
  // Autogenerated type: Priority_Queue.SimplePriorityQueue`1
  // [] Offset: FFFFFFFF
  template<typename TItem>
  class SimplePriorityQueue_1 : public Priority_Queue::SimplePriorityQueue_2<TItem, float> {
    public:
    // Creating value type constructor for type: SimplePriorityQueue_1
    SimplePriorityQueue_1() noexcept {}
    // public System.Void .ctor(System.Collections.Generic.IComparer`1<System.Single> comparer)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimplePriorityQueue_1<TItem>* New_ctor(System::Collections::Generic::IComparer_1<float>* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::SimplePriorityQueue_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimplePriorityQueue_1<TItem>*, creationType>(comparer)));
    }
    // public System.Void .ctor(System.Comparison`1<System.Single> comparer)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimplePriorityQueue_1<TItem>* New_ctor(System::Comparison_1<float>* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::SimplePriorityQueue_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimplePriorityQueue_1<TItem>*, creationType>(comparer)));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Priority_Queue.SimplePriorityQueue`2
    // Base method: System.Void SimplePriorityQueue_2::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimplePriorityQueue_1<TItem>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::SimplePriorityQueue_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimplePriorityQueue_1<TItem>*, creationType>()));
    }
  }; // Priority_Queue.SimplePriorityQueue`1
  // Could not write size check! Type: Priority_Queue.SimplePriorityQueue`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Priority_Queue::SimplePriorityQueue_1, "Priority_Queue", "SimplePriorityQueue`1");
