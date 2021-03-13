// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.BakerMuscle
  // [] Offset: FFFFFFFF
  class BakerMuscle : public ::Il2CppObject {
    public:
    // public UnityEngine.AnimationCurve curve
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::AnimationCurve* curve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private System.Int32 muscleIndex
    // Size: 0x4
    // Offset: 0x18
    int muscleIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: muscleIndex and: propertyName
    char __padding1[0x4] = {};
    // private System.String propertyName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* propertyName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: BakerMuscle
    BakerMuscle(UnityEngine::AnimationCurve* curve_ = {}, int muscleIndex_ = {}, ::Il2CppString* propertyName_ = {}) noexcept : curve{curve_}, muscleIndex{muscleIndex_}, propertyName{propertyName_} {}
    // public System.Void .ctor(System.Int32 muscleIndex)
    // Offset: 0x1AA314C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BakerMuscle* New_ctor(int muscleIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::BakerMuscle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BakerMuscle*, creationType>(muscleIndex)));
    }
    // private System.String MuscleNameToPropertyName(System.String n)
    // Offset: 0x1AA31BC
    ::Il2CppString* MuscleNameToPropertyName(::Il2CppString* n);
    // public System.Void MultiplyLength(UnityEngine.AnimationCurve curve, System.Single mlp)
    // Offset: 0x1AA38A4
    void MultiplyLength(UnityEngine::AnimationCurve* curve, float mlp);
    // public System.Void SetCurves(ref UnityEngine.AnimationClip clip, System.Single maxError, System.Single lengthMlp)
    // Offset: 0x1AA3958
    void SetCurves(UnityEngine::AnimationClip*& clip, float maxError, float lengthMlp);
    // public System.Void Reset()
    // Offset: 0x1AA3844
    void Reset();
    // public System.Void SetKeyframe(System.Single time, System.Single[] muscles)
    // Offset: 0x1AA3A3C
    void SetKeyframe(float time, ::Array<float>* muscles);
    // public System.Void SetLoopFrame(System.Single time)
    // Offset: 0x1AA3A84
    void SetLoopFrame(float time);
  }; // RootMotion.BakerMuscle
  #pragma pack(pop)
  static check_size<sizeof(BakerMuscle), 32 + sizeof(::Il2CppString*)> __RootMotion_BakerMuscleSizeCheck;
  static_assert(sizeof(BakerMuscle) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::BakerMuscle*, "RootMotion", "BakerMuscle");
