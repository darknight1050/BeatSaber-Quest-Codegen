// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.Compute_DistanceTransform_EventTypes
#include "TMPro/Compute_DistanceTransform_EventTypes.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.Compute_DT_EventArgs
  class Compute_DT_EventArgs : public ::Il2CppObject {
    public:
    // public TMPro.Compute_DistanceTransform_EventTypes EventType
    // Size: 0x4
    // Offset: 0x10
    TMPro::Compute_DistanceTransform_EventTypes EventType;
    // Field size check
    static_assert(sizeof(TMPro::Compute_DistanceTransform_EventTypes) == 0x4);
    // public System.Single ProgressPercentage
    // Size: 0x4
    // Offset: 0x14
    float ProgressPercentage;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Color[] Colors
    // Size: 0x8
    // Offset: 0x18
    ::Array<UnityEngine::Color>* Colors;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Color>*) == 0x8);
    // Creating value type constructor for type: Compute_DT_EventArgs
    Compute_DT_EventArgs(TMPro::Compute_DistanceTransform_EventTypes EventType_ = {}, float ProgressPercentage_ = {}, ::Array<UnityEngine::Color>* Colors_ = {}) noexcept : EventType{EventType_}, ProgressPercentage{ProgressPercentage_}, Colors{Colors_} {}
    // public System.Void .ctor(TMPro.Compute_DistanceTransform_EventTypes type, System.Single progress)
    // Offset: 0x1108148
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Compute_DT_EventArgs* New_ctor(TMPro::Compute_DistanceTransform_EventTypes type, float progress) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::Compute_DT_EventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Compute_DT_EventArgs*, creationType>(type, progress)));
    }
    // public System.Void .ctor(TMPro.Compute_DistanceTransform_EventTypes type, UnityEngine.Color[] colors)
    // Offset: 0x1108184
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Compute_DT_EventArgs* New_ctor(TMPro::Compute_DistanceTransform_EventTypes type, ::Array<UnityEngine::Color>* colors) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::Compute_DT_EventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Compute_DT_EventArgs*, creationType>(type, colors)));
    }
  }; // TMPro.Compute_DT_EventArgs
  #pragma pack(pop)
  static check_size<sizeof(Compute_DT_EventArgs), 24 + sizeof(::Array<UnityEngine::Color>*)> __TMPro_Compute_DT_EventArgsSizeCheck;
  static_assert(sizeof(Compute_DT_EventArgs) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::Compute_DT_EventArgs*, "TMPro", "Compute_DT_EventArgs");
