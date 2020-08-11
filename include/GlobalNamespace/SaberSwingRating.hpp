// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SaberSwingRating
  class SaberSwingRating : public ::CsObject {
    public:
    // static field const value: static public System.Single kMaxNormalAngleDiff
    static constexpr const float kMaxNormalAngleDiff = 90;
    // Get static field: static public System.Single kMaxNormalAngleDiff
    static float _get_kMaxNormalAngleDiff();
    // Set static field: static public System.Single kMaxNormalAngleDiff
    static void _set_kMaxNormalAngleDiff(float value);
    // static field const value: static public System.Single kToleranceNormalAngleDiff
    static constexpr const float kToleranceNormalAngleDiff = 75;
    // Get static field: static public System.Single kToleranceNormalAngleDiff
    static float _get_kToleranceNormalAngleDiff();
    // Set static field: static public System.Single kToleranceNormalAngleDiff
    static void _set_kToleranceNormalAngleDiff(float value);
    // static field const value: static public System.Single kMaxBeforeCutSwingDuration
    static constexpr const float kMaxBeforeCutSwingDuration = 0.4;
    // Get static field: static public System.Single kMaxBeforeCutSwingDuration
    static float _get_kMaxBeforeCutSwingDuration();
    // Set static field: static public System.Single kMaxBeforeCutSwingDuration
    static void _set_kMaxBeforeCutSwingDuration(float value);
    // static field const value: static public System.Single kMaxAfterCutSwingDuration
    static constexpr const float kMaxAfterCutSwingDuration = 0.4;
    // Get static field: static public System.Single kMaxAfterCutSwingDuration
    static float _get_kMaxAfterCutSwingDuration();
    // Set static field: static public System.Single kMaxAfterCutSwingDuration
    static void _set_kMaxAfterCutSwingDuration(float value);
    // static field const value: static public System.Single kBeforeCutAngleFor1Rating
    static constexpr const float kBeforeCutAngleFor1Rating = 100;
    // Get static field: static public System.Single kBeforeCutAngleFor1Rating
    static float _get_kBeforeCutAngleFor1Rating();
    // Set static field: static public System.Single kBeforeCutAngleFor1Rating
    static void _set_kBeforeCutAngleFor1Rating(float value);
    // static field const value: static public System.Single kAfterCutAngleFor1Rating
    static constexpr const float kAfterCutAngleFor1Rating = 60;
    // Get static field: static public System.Single kAfterCutAngleFor1Rating
    static float _get_kAfterCutAngleFor1Rating();
    // Set static field: static public System.Single kAfterCutAngleFor1Rating
    static void _set_kAfterCutAngleFor1Rating(float value);
    // static private System.Single NormalRating(System.Single normalDiff)
    // Offset: 0xC139E4
    static float NormalRating(float normalDiff);
    // static public System.Single BeforeCutStepRating(System.Single angleDiff, System.Single normalDiff)
    // Offset: 0xC1373C
    static float BeforeCutStepRating(float angleDiff, float normalDiff);
    // static public System.Single AfterCutStepRating(System.Single angleDiff, System.Single normalDiff)
    // Offset: 0xC13A78
    static float AfterCutStepRating(float angleDiff, float normalDiff);
    // public System.Void .ctor()
    // Offset: 0xC13AAC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SaberSwingRating* New_ctor();
  }; // SaberSwingRating
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberSwingRating*, "", "SaberSwingRating");
#pragma pack(pop)
