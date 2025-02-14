// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SpaceAttribute
  // [AttributeUsageAttribute] Offset: D8FC28
  class SpaceAttribute : public UnityEngine::PropertyAttribute {
    public:
    // public readonly System.Single height
    // Size: 0x4
    // Offset: 0x10
    float height;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: SpaceAttribute
    SpaceAttribute(float height_ = {}) noexcept : height{height_} {}
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return height;
    }
    // public System.Void .ctor(System.Single height)
    // Offset: 0x1B1B218
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SpaceAttribute* New_ctor(float height) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::SpaceAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SpaceAttribute*, creationType>(height)));
    }
    // public System.Void .ctor()
    // Offset: 0x1B1B1EC
    // Implemented from: UnityEngine.PropertyAttribute
    // Base method: System.Void PropertyAttribute::.ctor()
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SpaceAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::SpaceAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SpaceAttribute*, creationType>()));
    }
  }; // UnityEngine.SpaceAttribute
  #pragma pack(pop)
  static check_size<sizeof(SpaceAttribute), 16 + sizeof(float)> __UnityEngine_SpaceAttributeSizeCheck;
  static_assert(sizeof(SpaceAttribute) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SpaceAttribute*, "UnityEngine", "SpaceAttribute");
