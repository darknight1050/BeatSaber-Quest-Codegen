// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: RandomObjectPicker`1
  // [] Offset: FFFFFFFF
  template<typename T>
  class RandomObjectPicker_1 : public ::Il2CppObject {
    public:
    // private T[] _objects
    // Size: 0x8
    // Offset: 0x0
    ::Array<T>* objects;
    // Field size check
    static_assert(sizeof(::Array<T>*) == 0x8);
    // private System.Single _lastPickTime
    // Size: 0x4
    // Offset: 0x0
    float lastPickTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _minimumPickInterval
    // Size: 0x4
    // Offset: 0x0
    float minimumPickInterval;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: RandomObjectPicker_1
    RandomObjectPicker_1(::Array<T>* objects_ = {}, float lastPickTime_ = {}, float minimumPickInterval_ = {}) noexcept : objects{objects_}, lastPickTime{lastPickTime_}, minimumPickInterval{minimumPickInterval_} {}
    // public System.Void .ctor(T obj, System.Single minimumPickInterval)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RandomObjectPicker_1<T>* New_ctor(T obj, float minimumPickInterval) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RandomObjectPicker_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RandomObjectPicker_1<T>*, creationType>(obj, minimumPickInterval)));
    }
    // public System.Void .ctor(T[] objects, System.Single minimumPickInterval)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RandomObjectPicker_1<T>* New_ctor(::Array<T>* objects, float minimumPickInterval) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RandomObjectPicker_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RandomObjectPicker_1<T>*, creationType>(objects, minimumPickInterval)));
    }
    // public T PickRandomObject()
    // Offset: 0xFFFFFFFF
    T PickRandomObject() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RandomObjectPicker_1::PickRandomObject");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "PickRandomObject", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method);
    }
  }; // RandomObjectPicker`1
  // Could not write size check! Type: RandomObjectPicker`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::RandomObjectPicker_1, "", "RandomObjectPicker`1");
