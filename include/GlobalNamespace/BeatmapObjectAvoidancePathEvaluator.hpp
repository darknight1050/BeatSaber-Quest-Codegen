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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BezierSplineEvaluator
  class BezierSplineEvaluator;
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
  // Forward declaring type: PlayerTransforms
  class PlayerTransforms;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectAvoidancePathEvaluator
  class BeatmapObjectAvoidancePathEvaluator : public ::Il2CppObject {
    public:
    // private readonly System.Single _jumpStartZ
    // Size: 0x4
    // Offset: 0x10
    float jumpStartZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Single _jumpEndZ
    // Size: 0x4
    // Offset: 0x14
    float jumpEndZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Single _zOffset
    // Size: 0x4
    // Offset: 0x18
    float zOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Single _yOffset
    // Size: 0x4
    // Offset: 0x1C
    float yOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Single _noteJumpSpeed
    // Size: 0x4
    // Offset: 0x20
    float noteJumpSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Single _moveToPlayerHeadTParam
    // Size: 0x4
    // Offset: 0x24
    float moveToPlayerHeadTParam;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly BezierSplineEvaluator _pathBezierCurveEvaluator
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BezierSplineEvaluator* pathBezierCurveEvaluator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BezierSplineEvaluator*) == 0x8);
    // private readonly IAudioTimeSource _audioTimeSource
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::IAudioTimeSource* audioTimeSource;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IAudioTimeSource*) == 0x8);
    // private readonly PlayerTransforms _playerTransforms
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::PlayerTransforms* playerTransforms;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerTransforms*) == 0x8);
    // Creating value type constructor for type: BeatmapObjectAvoidancePathEvaluator
    BeatmapObjectAvoidancePathEvaluator(float jumpStartZ_ = {}, float jumpEndZ_ = {}, float zOffset_ = {}, float yOffset_ = {}, float noteJumpSpeed_ = {}, float moveToPlayerHeadTParam_ = {}, GlobalNamespace::BezierSplineEvaluator* pathBezierCurveEvaluator_ = {}, GlobalNamespace::IAudioTimeSource* audioTimeSource_ = {}, GlobalNamespace::PlayerTransforms* playerTransforms_ = {}) noexcept : jumpStartZ{jumpStartZ_}, jumpEndZ{jumpEndZ_}, zOffset{zOffset_}, yOffset{yOffset_}, noteJumpSpeed{noteJumpSpeed_}, moveToPlayerHeadTParam{moveToPlayerHeadTParam_}, pathBezierCurveEvaluator{pathBezierCurveEvaluator_}, audioTimeSource{audioTimeSource_}, playerTransforms{playerTransforms_} {}
    // public System.Void .ctor(IAudioTimeSource audioTimeSource, PlayerTransforms playerTransforms, BezierSplineEvaluator pathBezierCurveEvaluator, System.Single jumpStartZ, System.Single jumpEndZ, System.Single yOffset, System.Single zOffset, System.Single noteJumpSeed, System.Single moveToPlayerHeadTParam)
    // Offset: 0x1079804
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectAvoidancePathEvaluator* New_ctor(GlobalNamespace::IAudioTimeSource* audioTimeSource, GlobalNamespace::PlayerTransforms* playerTransforms, GlobalNamespace::BezierSplineEvaluator* pathBezierCurveEvaluator, float jumpStartZ, float jumpEndZ, float yOffset, float zOffset, float noteJumpSeed, float moveToPlayerHeadTParam) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectAvoidancePathEvaluator*, creationType>(audioTimeSource, playerTransforms, pathBezierCurveEvaluator, jumpStartZ, jumpEndZ, yOffset, zOffset, noteJumpSeed, moveToPlayerHeadTParam)));
    }
    // public UnityEngine.Vector3 GetCurrentPathPosition()
    // Offset: 0x1079880
    UnityEngine::Vector3 GetCurrentPathPosition();
  }; // BeatmapObjectAvoidancePathEvaluator
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectAvoidancePathEvaluator), 56 + sizeof(GlobalNamespace::PlayerTransforms*)> __GlobalNamespace_BeatmapObjectAvoidancePathEvaluatorSizeCheck;
  static_assert(sizeof(BeatmapObjectAvoidancePathEvaluator) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectAvoidancePathEvaluator*, "", "BeatmapObjectAvoidancePathEvaluator");
