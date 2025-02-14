// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverLimb
  class IKSolverLimb;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.Finger
  class Finger : public ::Il2CppObject {
    public:
    // Nested type: RootMotion::FinalIK::Finger::DOF
    struct DOF;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: RootMotion.FinalIK.Finger/DOF
    struct DOF/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: DOF
      constexpr DOF(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public RootMotion.FinalIK.Finger/DOF One
      static constexpr const int One = 0;
      // Get static field: static public RootMotion.FinalIK.Finger/DOF One
      static RootMotion::FinalIK::Finger::DOF _get_One();
      // Set static field: static public RootMotion.FinalIK.Finger/DOF One
      static void _set_One(RootMotion::FinalIK::Finger::DOF value);
      // static field const value: static public RootMotion.FinalIK.Finger/DOF Three
      static constexpr const int Three = 1;
      // Get static field: static public RootMotion.FinalIK.Finger/DOF Three
      static RootMotion::FinalIK::Finger::DOF _get_Three();
      // Set static field: static public RootMotion.FinalIK.Finger/DOF Three
      static void _set_Three(RootMotion::FinalIK::Finger::DOF value);
    }; // RootMotion.FinalIK.Finger/DOF
    #pragma pack(pop)
    static check_size<sizeof(Finger::DOF), 0 + sizeof(int)> __RootMotion_FinalIK_Finger_DOFSizeCheck;
    static_assert(sizeof(Finger::DOF) == 0x4);
    // [TooltipAttribute] Offset: 0xE06DEC
    // [RangeAttribute] Offset: 0xE06DEC
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x10
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE06E40
    // [RangeAttribute] Offset: 0xE06E40
    // public System.Single rotationWeight
    // Size: 0x4
    // Offset: 0x14
    float rotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE06E94
    // public RootMotion.FinalIK.Finger/DOF rotationDOF
    // Size: 0x4
    // Offset: 0x18
    RootMotion::FinalIK::Finger::DOF rotationDOF;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::Finger::DOF) == 0x4);
    // [TooltipAttribute] Offset: 0xE06ECC
    // public System.Boolean fixBone1Twist
    // Size: 0x1
    // Offset: 0x1C
    bool fixBone1Twist;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fixBone1Twist and: bone1
    char __padding3[0x3] = {};
    // [TooltipAttribute] Offset: 0xE06F04
    // public UnityEngine.Transform bone1
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* bone1;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE06F3C
    // public UnityEngine.Transform bone2
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* bone2;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE06F74
    // public UnityEngine.Transform bone3
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Transform* bone3;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE06FAC
    // public UnityEngine.Transform tip
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Transform* tip;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE06FE4
    // public UnityEngine.Transform target
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE0701C
    // private System.Boolean <initiated>k__BackingField
    // Size: 0x1
    // Offset: 0x48
    bool initiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initiated and: solver
    char __padding9[0x7] = {};
    // private RootMotion.FinalIK.IKSolverLimb solver
    // Size: 0x8
    // Offset: 0x50
    RootMotion::FinalIK::IKSolverLimb* solver;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverLimb*) == 0x8);
    // private UnityEngine.Quaternion bone3RelativeToTarget
    // Size: 0x10
    // Offset: 0x58
    UnityEngine::Quaternion bone3RelativeToTarget;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 bone3DefaultLocalPosition
    // Size: 0xC
    // Offset: 0x68
    UnityEngine::Vector3 bone3DefaultLocalPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion bone3DefaultLocalRotation
    // Size: 0x10
    // Offset: 0x74
    UnityEngine::Quaternion bone3DefaultLocalRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 bone1Axis
    // Size: 0xC
    // Offset: 0x84
    UnityEngine::Vector3 bone1Axis;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 tipAxis
    // Size: 0xC
    // Offset: 0x90
    UnityEngine::Vector3 tipAxis;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 bone1TwistAxis
    // Size: 0xC
    // Offset: 0x9C
    UnityEngine::Vector3 bone1TwistAxis;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: Finger
    Finger(float weight_ = {}, float rotationWeight_ = {}, RootMotion::FinalIK::Finger::DOF rotationDOF_ = {}, bool fixBone1Twist_ = {}, UnityEngine::Transform* bone1_ = {}, UnityEngine::Transform* bone2_ = {}, UnityEngine::Transform* bone3_ = {}, UnityEngine::Transform* tip_ = {}, UnityEngine::Transform* target_ = {}, bool initiated_ = {}, RootMotion::FinalIK::IKSolverLimb* solver_ = {}, UnityEngine::Quaternion bone3RelativeToTarget_ = {}, UnityEngine::Vector3 bone3DefaultLocalPosition_ = {}, UnityEngine::Quaternion bone3DefaultLocalRotation_ = {}, UnityEngine::Vector3 bone1Axis_ = {}, UnityEngine::Vector3 tipAxis_ = {}, UnityEngine::Vector3 bone1TwistAxis_ = {}) noexcept : weight{weight_}, rotationWeight{rotationWeight_}, rotationDOF{rotationDOF_}, fixBone1Twist{fixBone1Twist_}, bone1{bone1_}, bone2{bone2_}, bone3{bone3_}, tip{tip_}, target{target_}, initiated{initiated_}, solver{solver_}, bone3RelativeToTarget{bone3RelativeToTarget_}, bone3DefaultLocalPosition{bone3DefaultLocalPosition_}, bone3DefaultLocalRotation{bone3DefaultLocalRotation_}, bone1Axis{bone1Axis_}, tipAxis{tipAxis_}, bone1TwistAxis{bone1TwistAxis_} {}
    // public System.Boolean get_initiated()
    // Offset: 0x1C9C6D0
    bool get_initiated();
    // private System.Void set_initiated(System.Boolean value)
    // Offset: 0x1C9C6D8
    void set_initiated(bool value);
    // public UnityEngine.Vector3 get_IKPosition()
    // Offset: 0x1C9C6E4
    UnityEngine::Vector3 get_IKPosition();
    // public System.Void set_IKPosition(UnityEngine.Vector3 value)
    // Offset: 0x1C9C704
    void set_IKPosition(UnityEngine::Vector3 value);
    // public UnityEngine.Quaternion get_IKRotation()
    // Offset: 0x1C9C724
    UnityEngine::Quaternion get_IKRotation();
    // public System.Void set_IKRotation(UnityEngine.Quaternion value)
    // Offset: 0x1C9C744
    void set_IKRotation(UnityEngine::Quaternion value);
    // public System.Boolean IsValid(ref System.String errorMessage)
    // Offset: 0x1C9C764
    bool IsValid(::Il2CppString*& errorMessage);
    // public System.Void Initiate(UnityEngine.Transform hand, System.Int32 index)
    // Offset: 0x1C9C864
    void Initiate(UnityEngine::Transform* hand, int index);
    // public System.Void FixTransforms()
    // Offset: 0x1C9CDF8
    void FixTransforms();
    // public System.Void StoreDefaultLocalState()
    // Offset: 0x1C9CED4
    void StoreDefaultLocalState();
    // public System.Void Update(System.Single masterWeight)
    // Offset: 0x1C9CF9C
    void Update(float masterWeight);
    // public System.Void .ctor()
    // Offset: 0x1C9D6E0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Finger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::Finger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Finger*, creationType>()));
    }
  }; // RootMotion.FinalIK.Finger
  #pragma pack(pop)
  static check_size<sizeof(Finger), 156 + sizeof(UnityEngine::Vector3)> __RootMotion_FinalIK_FingerSizeCheck;
  static_assert(sizeof(Finger) == 0xA8);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Finger*, "RootMotion.FinalIK", "Finger");
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Finger::DOF, "RootMotion.FinalIK", "Finger/DOF");
