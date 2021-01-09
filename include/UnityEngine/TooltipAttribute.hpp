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
  // Autogenerated type: UnityEngine.TooltipAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D4CF4C
  class TooltipAttribute : public UnityEngine::PropertyAttribute {
    public:
    // public readonly System.String tooltip
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* tooltip;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: TooltipAttribute
    TooltipAttribute(::Il2CppString* tooltip_ = {}) noexcept : tooltip{tooltip_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return tooltip;
    }
    // public System.Void .ctor(System.String tooltip)
    // Offset: 0x16C6054
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TooltipAttribute* New_ctor(::Il2CppString* tooltip) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TooltipAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TooltipAttribute*, creationType>(tooltip)));
    }
  }; // UnityEngine.TooltipAttribute
  static check_size<sizeof(TooltipAttribute), 16 + sizeof(::Il2CppString*)> __UnityEngine_TooltipAttributeSizeCheck;
  static_assert(sizeof(TooltipAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TooltipAttribute*, "UnityEngine", "TooltipAttribute");
#pragma pack(pop)
