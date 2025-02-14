// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
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
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x7C
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.BakerTransform
  class BakerTransform : public ::Il2CppObject {
    public:
    // public UnityEngine.Transform transform
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.AnimationCurve posX
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::AnimationCurve* posX;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.AnimationCurve posY
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::AnimationCurve* posY;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.AnimationCurve posZ
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::AnimationCurve* posZ;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.AnimationCurve rotX
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::AnimationCurve* rotX;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.AnimationCurve rotY
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::AnimationCurve* rotY;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.AnimationCurve rotZ
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::AnimationCurve* rotZ;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.AnimationCurve rotW
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::AnimationCurve* rotW;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private System.String relativePath
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppString* relativePath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean recordPosition
    // Size: 0x1
    // Offset: 0x58
    bool recordPosition;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: recordPosition and: relativePosition
    char __padding9[0x3] = {};
    // private UnityEngine.Vector3 relativePosition
    // Size: 0xC
    // Offset: 0x5C
    UnityEngine::Vector3 relativePosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Boolean isRootNode
    // Size: 0x1
    // Offset: 0x68
    bool isRootNode;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isRootNode and: relativeRotation
    char __padding11[0x3] = {};
    // private UnityEngine.Quaternion relativeRotation
    // Size: 0x10
    // Offset: 0x6C
    UnityEngine::Quaternion relativeRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Creating value type constructor for type: BakerTransform
    BakerTransform(UnityEngine::Transform* transform_ = {}, UnityEngine::AnimationCurve* posX_ = {}, UnityEngine::AnimationCurve* posY_ = {}, UnityEngine::AnimationCurve* posZ_ = {}, UnityEngine::AnimationCurve* rotX_ = {}, UnityEngine::AnimationCurve* rotY_ = {}, UnityEngine::AnimationCurve* rotZ_ = {}, UnityEngine::AnimationCurve* rotW_ = {}, ::Il2CppString* relativePath_ = {}, bool recordPosition_ = {}, UnityEngine::Vector3 relativePosition_ = {}, bool isRootNode_ = {}, UnityEngine::Quaternion relativeRotation_ = {}) noexcept : transform{transform_}, posX{posX_}, posY{posY_}, posZ{posZ_}, rotX{rotX_}, rotY{rotY_}, rotZ{rotZ_}, rotW{rotW_}, relativePath{relativePath_}, recordPosition{recordPosition_}, relativePosition{relativePosition_}, isRootNode{isRootNode_}, relativeRotation{relativeRotation_} {}
    // public System.Void .ctor(UnityEngine.Transform transform, UnityEngine.Transform root, System.Boolean recordPosition, System.Boolean isRootNode)
    // Offset: 0x1C89240
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BakerTransform* New_ctor(UnityEngine::Transform* transform, UnityEngine::Transform* root, bool recordPosition, bool isRootNode) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::BakerTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BakerTransform*, creationType>(transform, root, recordPosition, isRootNode)));
    }
    // public System.Void SetRelativeSpace(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0x1C893D4
    void SetRelativeSpace(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation);
    // public System.Void SetCurves(ref UnityEngine.AnimationClip clip)
    // Offset: 0x1C893E8
    void SetCurves(UnityEngine::AnimationClip*& clip);
    // private System.Void AddRootMotionCurves(ref UnityEngine.AnimationClip clip)
    // Offset: 0x1C89678
    void AddRootMotionCurves(UnityEngine::AnimationClip*& clip);
    // public System.Void Reset()
    // Offset: 0x1C892DC
    void Reset();
    // public System.Void ReduceKeyframes(System.Single maxError)
    // Offset: 0x1C898C4
    void ReduceKeyframes(float maxError);
    // public System.Void SetKeyframes(System.Single time)
    // Offset: 0x1C89938
    void SetKeyframes(float time);
    // public System.Void AddLoopFrame(System.Single time)
    // Offset: 0x1C89B84
    void AddLoopFrame(float time);
  }; // RootMotion.BakerTransform
  #pragma pack(pop)
  static check_size<sizeof(BakerTransform), 108 + sizeof(UnityEngine::Quaternion)> __RootMotion_BakerTransformSizeCheck;
  static_assert(sizeof(BakerTransform) == 0x7C);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::BakerTransform*, "RootMotion", "BakerTransform");
