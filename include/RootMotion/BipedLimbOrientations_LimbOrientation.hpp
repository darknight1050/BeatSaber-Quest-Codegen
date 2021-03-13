// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.BipedLimbOrientations
#include "RootMotion/BipedLimbOrientations.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.BipedLimbOrientations/LimbOrientation
  // [] Offset: FFFFFFFF
  class BipedLimbOrientations::LimbOrientation : public ::Il2CppObject {
    public:
    // public UnityEngine.Vector3 upperBoneForwardAxis
    // Size: 0xC
    // Offset: 0x10
    UnityEngine::Vector3 upperBoneForwardAxis;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 lowerBoneForwardAxis
    // Size: 0xC
    // Offset: 0x1C
    UnityEngine::Vector3 lowerBoneForwardAxis;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 lastBoneLeftAxis
    // Size: 0xC
    // Offset: 0x28
    UnityEngine::Vector3 lastBoneLeftAxis;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: LimbOrientation
    LimbOrientation(UnityEngine::Vector3 upperBoneForwardAxis_ = {}, UnityEngine::Vector3 lowerBoneForwardAxis_ = {}, UnityEngine::Vector3 lastBoneLeftAxis_ = {}) noexcept : upperBoneForwardAxis{upperBoneForwardAxis_}, lowerBoneForwardAxis{lowerBoneForwardAxis_}, lastBoneLeftAxis{lastBoneLeftAxis_} {}
    // public System.Void .ctor(UnityEngine.Vector3 upperBoneForwardAxis, UnityEngine.Vector3 lowerBoneForwardAxis, UnityEngine.Vector3 lastBoneLeftAxis)
    // Offset: 0x1AA4C7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BipedLimbOrientations::LimbOrientation* New_ctor(UnityEngine::Vector3 upperBoneForwardAxis, UnityEngine::Vector3 lowerBoneForwardAxis, UnityEngine::Vector3 lastBoneLeftAxis) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::BipedLimbOrientations::LimbOrientation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BipedLimbOrientations::LimbOrientation*, creationType>(upperBoneForwardAxis, lowerBoneForwardAxis, lastBoneLeftAxis)));
    }
  }; // RootMotion.BipedLimbOrientations/LimbOrientation
  #pragma pack(pop)
  static check_size<sizeof(BipedLimbOrientations::LimbOrientation), 40 + sizeof(UnityEngine::Vector3)> __RootMotion_BipedLimbOrientations_LimbOrientationSizeCheck;
  static_assert(sizeof(BipedLimbOrientations::LimbOrientation) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::BipedLimbOrientations::LimbOrientation*, "RootMotion", "BipedLimbOrientations/LimbOrientation");
