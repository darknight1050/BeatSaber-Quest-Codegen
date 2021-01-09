// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AvatarIKGoal
#include "UnityEngine/AvatarIKGoal.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: Avatar
  class Avatar;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x9D
  // Autogenerated type: RootMotion.BakerHumanoidQT
  // [] Offset: FFFFFFFF
  class BakerHumanoidQT : public ::Il2CppObject {
    public:
    // private UnityEngine.Transform transform
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private System.String Qx
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* Qx;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String Qy
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* Qy;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String Qz
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* Qz;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String Qw
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* Qw;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String Tx
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* Tx;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String Ty
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* Ty;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String Tz
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* Tz;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public UnityEngine.AnimationCurve rotX
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::AnimationCurve* rotX;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.AnimationCurve rotY
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::AnimationCurve* rotY;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.AnimationCurve rotZ
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::AnimationCurve* rotZ;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.AnimationCurve rotW
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::AnimationCurve* rotW;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.AnimationCurve posX
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::AnimationCurve* posX;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.AnimationCurve posY
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::AnimationCurve* posY;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.AnimationCurve posZ
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::AnimationCurve* posZ;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AvatarIKGoal goal
    // Size: 0x4
    // Offset: 0x88
    UnityEngine::AvatarIKGoal goal;
    // Field size check
    static_assert(sizeof(UnityEngine::AvatarIKGoal) == 0x4);
    // private UnityEngine.Quaternion lastQ
    // Size: 0x10
    // Offset: 0x8C
    UnityEngine::Quaternion lastQ;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private System.Boolean lastQSet
    // Size: 0x1
    // Offset: 0x9C
    bool lastQSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: BakerHumanoidQT
    BakerHumanoidQT(UnityEngine::Transform* transform_ = {}, ::Il2CppString* Qx_ = {}, ::Il2CppString* Qy_ = {}, ::Il2CppString* Qz_ = {}, ::Il2CppString* Qw_ = {}, ::Il2CppString* Tx_ = {}, ::Il2CppString* Ty_ = {}, ::Il2CppString* Tz_ = {}, UnityEngine::AnimationCurve* rotX_ = {}, UnityEngine::AnimationCurve* rotY_ = {}, UnityEngine::AnimationCurve* rotZ_ = {}, UnityEngine::AnimationCurve* rotW_ = {}, UnityEngine::AnimationCurve* posX_ = {}, UnityEngine::AnimationCurve* posY_ = {}, UnityEngine::AnimationCurve* posZ_ = {}, UnityEngine::AvatarIKGoal goal_ = {}, UnityEngine::Quaternion lastQ_ = {}, bool lastQSet_ = {}) noexcept : transform{transform_}, Qx{Qx_}, Qy{Qy_}, Qz{Qz_}, Qw{Qw_}, Tx{Tx_}, Ty{Ty_}, Tz{Tz_}, rotX{rotX_}, rotY{rotY_}, rotZ{rotZ_}, rotW{rotW_}, posX{posX_}, posY{posY_}, posZ{posZ_}, goal{goal_}, lastQ{lastQ_}, lastQSet{lastQSet_} {}
    // public System.Void .ctor(System.String name)
    // Offset: 0x173EE90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BakerHumanoidQT* New_ctor(::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::BakerHumanoidQT::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BakerHumanoidQT*, creationType>(name)));
    }
    // public System.Void .ctor(UnityEngine.Transform transform, UnityEngine.AvatarIKGoal goal, System.String name)
    // Offset: 0x173F188
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BakerHumanoidQT* New_ctor(UnityEngine::Transform* transform, UnityEngine::AvatarIKGoal goal, ::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::BakerHumanoidQT::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BakerHumanoidQT*, creationType>(transform, goal, name)));
    }
    // public System.Void Reset()
    // Offset: 0x173F004
    void Reset();
    // public System.Void SetIKKeyframes(System.Single time, UnityEngine.Avatar avatar, System.Single humanScale, UnityEngine.Vector3 bodyPosition, UnityEngine.Quaternion bodyRotation)
    // Offset: 0x173F320
    void SetIKKeyframes(float time, UnityEngine::Avatar* avatar, float humanScale, UnityEngine::Vector3 bodyPosition, UnityEngine::Quaternion bodyRotation);
    // public System.Void SetKeyframes(System.Single time, UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
    // Offset: 0x173F7C8
    void SetKeyframes(float time, UnityEngine::Vector3 pos, UnityEngine::Quaternion rot);
    // public System.Void MoveLastKeyframes(System.Single time)
    // Offset: 0x173F8C4
    void MoveLastKeyframes(float time);
    // public System.Void SetLoopFrame(System.Single time)
    // Offset: 0x173F9C0
    void SetLoopFrame(float time);
    // private System.Void MoveLastKeyframe(System.Single time, UnityEngine.AnimationCurve curve)
    // Offset: 0x173F938
    void MoveLastKeyframe(float time, UnityEngine::AnimationCurve* curve);
    // public System.Void MultiplyLength(UnityEngine.AnimationCurve curve, System.Single mlp)
    // Offset: 0x173FC80
    void MultiplyLength(UnityEngine::AnimationCurve* curve, float mlp);
    // public System.Void SetCurves(ref UnityEngine.AnimationClip clip, System.Single maxError, System.Single lengthMlp)
    // Offset: 0x173FD34
    void SetCurves(UnityEngine::AnimationClip*& clip, float maxError, float lengthMlp);
  }; // RootMotion.BakerHumanoidQT
  static check_size<sizeof(BakerHumanoidQT), 156 + sizeof(bool)> __RootMotion_BakerHumanoidQTSizeCheck;
  static_assert(sizeof(BakerHumanoidQT) == 0x9D);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::BakerHumanoidQT*, "RootMotion", "BakerHumanoidQT");
#pragma pack(pop)
