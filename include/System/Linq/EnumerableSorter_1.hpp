// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Linq
namespace System::Linq {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Linq.EnumerableSorter`1
  // [] Offset: FFFFFFFF
  template<typename TElement>
  class EnumerableSorter_1 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: EnumerableSorter_1
    EnumerableSorter_1() noexcept {}
    // System.Void ComputeKeys(TElement[] elements, System.Int32 count)
    // Offset: 0xFFFFFFFF
    void ComputeKeys(::Array<TElement>* elements, int count) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::EnumerableSorter_1::ComputeKeys");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ComputeKeys", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(elements, count)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, elements, count);
    }
    // System.Int32 CompareKeys(System.Int32 index1, System.Int32 index2)
    // Offset: 0xFFFFFFFF
    int CompareKeys(int index1, int index2) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::EnumerableSorter_1::CompareKeys");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CompareKeys", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(index1, index2)));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, index1, index2);
    }
    // System.Int32[] Sort(TElement[] elements, System.Int32 count)
    // Offset: 0xFFFFFFFF
    ::Array<int>* Sort(::Array<TElement>* elements, int count) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::EnumerableSorter_1::Sort");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Sort", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(elements, count)));
      return ::il2cpp_utils::RunMethodThrow<::Array<int>*, false>(this, ___internal__method, elements, count);
    }
    // private System.Void QuickSort(System.Int32[] map, System.Int32 left, System.Int32 right)
    // Offset: 0xFFFFFFFF
    void QuickSort(::Array<int>* map, int left, int right) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::EnumerableSorter_1::QuickSort");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "QuickSort", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(map, left, right)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, map, left, right);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnumerableSorter_1<TElement>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::EnumerableSorter_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnumerableSorter_1<TElement>*, creationType>()));
    }
  }; // System.Linq.EnumerableSorter`1
  // Could not write size check! Type: System.Linq.EnumerableSorter`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::EnumerableSorter_1, "System.Linq", "EnumerableSorter`1");
