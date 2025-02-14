// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
// Including type: RootMotion.FinalIK.IKSolver/Point
#include "RootMotion/FinalIK/IKSolver_Point.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: RotationLimit
  class RotationLimit;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x71
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolver/Bone
  class IKSolver::Bone : public RootMotion::FinalIK::IKSolver::Point {
    public:
    // public System.Single length
    // Size: 0x4
    // Offset: 0x54
    float length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single sqrMag
    // Size: 0x4
    // Offset: 0x58
    float sqrMag;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 axis
    // Size: 0xC
    // Offset: 0x5C
    UnityEngine::Vector3 axis;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private RootMotion.FinalIK.RotationLimit _rotationLimit
    // Size: 0x8
    // Offset: 0x68
    RootMotion::FinalIK::RotationLimit* rotationLimit;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::RotationLimit*) == 0x8);
    // private System.Boolean isLimited
    // Size: 0x1
    // Offset: 0x70
    bool isLimited;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Bone
    Bone(float length_ = {}, float sqrMag_ = {}, UnityEngine::Vector3 axis_ = {}, RootMotion::FinalIK::RotationLimit* rotationLimit_ = {}, bool isLimited_ = {}) noexcept : length{length_}, sqrMag{sqrMag_}, axis{axis_}, rotationLimit{rotationLimit_}, isLimited{isLimited_} {}
    // public RootMotion.FinalIK.RotationLimit get_rotationLimit()
    // Offset: 0x1C52554
    RootMotion::FinalIK::RotationLimit* get_rotationLimit();
    // public System.Void set_rotationLimit(RootMotion.FinalIK.RotationLimit value)
    // Offset: 0x1C52648
    void set_rotationLimit(RootMotion::FinalIK::RotationLimit* value);
    // public System.Void Swing(UnityEngine.Vector3 swingTarget, System.Single weight)
    // Offset: 0x1C526D0
    void Swing(UnityEngine::Vector3 swingTarget, float weight);
    // static public System.Void SolverSwing(RootMotion.FinalIK.IKSolver/Bone[] bones, System.Int32 index, UnityEngine.Vector3 swingTarget, System.Single weight)
    // Offset: 0x1C52990
    static void SolverSwing(::Array<RootMotion::FinalIK::IKSolver::Bone*>* bones, int index, UnityEngine::Vector3 swingTarget, float weight);
    // public System.Void Swing2D(UnityEngine.Vector3 swingTarget, System.Single weight)
    // Offset: 0x1C52C70
    void Swing2D(UnityEngine::Vector3 swingTarget, float weight);
    // public System.Void SetToSolverPosition()
    // Offset: 0x1C52ED8
    void SetToSolverPosition();
    // public System.Void .ctor(UnityEngine.Transform transform)
    // Offset: 0x1C53004
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolver::Bone* New_ctor(UnityEngine::Transform* transform) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolver::Bone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolver::Bone*, creationType>(transform)));
    }
    // public System.Void .ctor(UnityEngine.Transform transform, System.Single weight)
    // Offset: 0x1C5309C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolver::Bone* New_ctor(UnityEngine::Transform* transform, float weight) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolver::Bone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolver::Bone*, creationType>(transform, weight)));
    }
    // public System.Void .ctor()
    // Offset: 0x1C52F00
    // Implemented from: RootMotion.FinalIK.IKSolver/Point
    // Base method: System.Void Point::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolver::Bone* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolver::Bone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolver::Bone*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKSolver/Bone
  #pragma pack(pop)
  static check_size<sizeof(IKSolver::Bone), 112 + sizeof(bool)> __RootMotion_FinalIK_IKSolver_BoneSizeCheck;
  static_assert(sizeof(IKSolver::Bone) == 0x71);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolver::Bone*, "RootMotion.FinalIK", "IKSolver/Bone");
