// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ParticleSystem
#include "UnityEngine/ParticleSystem.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.ParticleSystemGradientMode
#include "UnityEngine/ParticleSystemGradientMode.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Gradient
  class Gradient;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x38
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ParticleSystem/MinMaxGradient
  // [NativeTypeAttribute] Offset: DC0D04
  struct ParticleSystem::MinMaxGradient/*, public System::ValueType*/ {
    public:
    // private UnityEngine.ParticleSystemGradientMode m_Mode
    // Size: 0x4
    // Offset: 0x0
    UnityEngine::ParticleSystemGradientMode m_Mode;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystemGradientMode) == 0x4);
    // Padding between fields: m_Mode and: m_GradientMin
    char __padding0[0x4] = {};
    // private UnityEngine.Gradient m_GradientMin
    // Size: 0x8
    // Offset: 0x8
    UnityEngine::Gradient* m_GradientMin;
    // Field size check
    static_assert(sizeof(UnityEngine::Gradient*) == 0x8);
    // private UnityEngine.Gradient m_GradientMax
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Gradient* m_GradientMax;
    // Field size check
    static_assert(sizeof(UnityEngine::Gradient*) == 0x8);
    // private UnityEngine.Color m_ColorMin
    // Size: 0x10
    // Offset: 0x18
    UnityEngine::Color m_ColorMin;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color m_ColorMax
    // Size: 0x10
    // Offset: 0x28
    UnityEngine::Color m_ColorMax;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Creating value type constructor for type: MinMaxGradient
    constexpr MinMaxGradient(UnityEngine::ParticleSystemGradientMode m_Mode_ = {}, UnityEngine::Gradient* m_GradientMin_ = {}, UnityEngine::Gradient* m_GradientMax_ = {}, UnityEngine::Color m_ColorMin_ = {}, UnityEngine::Color m_ColorMax_ = {}) noexcept : m_Mode{m_Mode_}, m_GradientMin{m_GradientMin_}, m_GradientMax{m_GradientMax_}, m_ColorMin{m_ColorMin_}, m_ColorMax{m_ColorMax_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void .ctor(UnityEngine.Color color)
    // Offset: 0xF236E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    MinMaxGradient(UnityEngine::Color color) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ParticleSystem::MinMaxGradient::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(color)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, color);
    }
    // public UnityEngine.Color get_color()
    // Offset: 0xF236F0
    UnityEngine::Color get_color();
  }; // UnityEngine.ParticleSystem/MinMaxGradient
  #pragma pack(pop)
  static check_size<sizeof(ParticleSystem::MinMaxGradient), 40 + sizeof(UnityEngine::Color)> __UnityEngine_ParticleSystem_MinMaxGradientSizeCheck;
  static_assert(sizeof(ParticleSystem::MinMaxGradient) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ParticleSystem::MinMaxGradient, "UnityEngine", "ParticleSystem/MinMaxGradient");
