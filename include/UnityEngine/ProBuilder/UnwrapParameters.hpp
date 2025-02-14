// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Single
#include "System/Single.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.UnwrapParameters
  class UnwrapParameters : public ::Il2CppObject {
    public:
    // [TooltipAttribute] Offset: 0xE3B610
    // [RangeAttribute] Offset: 0xE3B610
    // [FormerlySerializedAsAttribute] Offset: 0xE3B610
    // private System.Single m_HardAngle
    // Size: 0x4
    // Offset: 0x10
    float m_HardAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE3B69C
    // [RangeAttribute] Offset: 0xE3B69C
    // [FormerlySerializedAsAttribute] Offset: 0xE3B69C
    // private System.Single m_PackMargin
    // Size: 0x4
    // Offset: 0x14
    float m_PackMargin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE3B728
    // [RangeAttribute] Offset: 0xE3B728
    // [FormerlySerializedAsAttribute] Offset: 0xE3B728
    // private System.Single m_AngleError
    // Size: 0x4
    // Offset: 0x18
    float m_AngleError;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xE3B7B4
    // [FormerlySerializedAsAttribute] Offset: 0xE3B7B4
    // private System.Single m_AreaError
    // Size: 0x4
    // Offset: 0x1C
    float m_AreaError;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: UnwrapParameters
    UnwrapParameters(float m_HardAngle_ = {}, float m_PackMargin_ = {}, float m_AngleError_ = {}, float m_AreaError_ = {}) noexcept : m_HardAngle{m_HardAngle_}, m_PackMargin{m_PackMargin_}, m_AngleError{m_AngleError_}, m_AreaError{m_AreaError_} {}
    // static field const value: static System.Single k_HardAngle
    static constexpr const float k_HardAngle = 88;
    // Get static field: static System.Single k_HardAngle
    static float _get_k_HardAngle();
    // Set static field: static System.Single k_HardAngle
    static void _set_k_HardAngle(float value);
    // static field const value: static System.Single k_PackMargin
    static constexpr const float k_PackMargin = 20;
    // Get static field: static System.Single k_PackMargin
    static float _get_k_PackMargin();
    // Set static field: static System.Single k_PackMargin
    static void _set_k_PackMargin(float value);
    // static field const value: static System.Single k_AngleError
    static constexpr const float k_AngleError = 8;
    // Get static field: static System.Single k_AngleError
    static float _get_k_AngleError();
    // Set static field: static System.Single k_AngleError
    static void _set_k_AngleError(float value);
    // static field const value: static System.Single k_AreaError
    static constexpr const float k_AreaError = 15;
    // Get static field: static System.Single k_AreaError
    static float _get_k_AreaError();
    // Set static field: static System.Single k_AreaError
    static void _set_k_AreaError(float value);
    // public System.Single get_hardAngle()
    // Offset: 0x22A54F0
    float get_hardAngle();
    // public System.Void set_hardAngle(System.Single value)
    // Offset: 0x22A54F8
    void set_hardAngle(float value);
    // public System.Single get_packMargin()
    // Offset: 0x22A5500
    float get_packMargin();
    // public System.Void set_packMargin(System.Single value)
    // Offset: 0x22A5508
    void set_packMargin(float value);
    // public System.Single get_angleError()
    // Offset: 0x22A5510
    float get_angleError();
    // public System.Void set_angleError(System.Single value)
    // Offset: 0x22A5518
    void set_angleError(float value);
    // public System.Single get_areaError()
    // Offset: 0x22A5520
    float get_areaError();
    // public System.Void set_areaError(System.Single value)
    // Offset: 0x22A5528
    void set_areaError(float value);
    // public System.Void .ctor(UnityEngine.ProBuilder.UnwrapParameters other)
    // Offset: 0x22A5584
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnwrapParameters* New_ctor(UnityEngine::ProBuilder::UnwrapParameters* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::UnwrapParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnwrapParameters*, creationType>(other)));
    }
    // public System.Void Reset()
    // Offset: 0x22A5574
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x22A5530
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnwrapParameters* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::UnwrapParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnwrapParameters*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x22A5648
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.UnwrapParameters
  #pragma pack(pop)
  static check_size<sizeof(UnwrapParameters), 28 + sizeof(float)> __UnityEngine_ProBuilder_UnwrapParametersSizeCheck;
  static_assert(sizeof(UnwrapParameters) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::UnwrapParameters*, "UnityEngine.ProBuilder", "UnwrapParameters");
