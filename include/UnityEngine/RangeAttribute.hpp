// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  // Autogenerated type: UnityEngine.RangeAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D4CFF4
  class RangeAttribute : public UnityEngine::PropertyAttribute {
    public:
    // public readonly System.Single min
    // Size: 0x4
    // Offset: 0x10
    float min;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single max
    // Size: 0x4
    // Offset: 0x14
    float max;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: RangeAttribute
    RangeAttribute(float min_ = {}, float max_ = {}) noexcept : min{min_}, max{max_} {}
    // public System.Void .ctor(System.Single min, System.Single max)
    // Offset: 0x1738104
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RangeAttribute* New_ctor(float min, float max) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::RangeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RangeAttribute*, creationType>(min, max)));
    }
  }; // UnityEngine.RangeAttribute
  static check_size<sizeof(RangeAttribute), 20 + sizeof(float)> __UnityEngine_RangeAttributeSizeCheck;
  static_assert(sizeof(RangeAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RangeAttribute*, "UnityEngine", "RangeAttribute");
#pragma pack(pop)
