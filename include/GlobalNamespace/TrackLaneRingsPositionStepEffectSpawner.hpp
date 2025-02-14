// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatmapEventType
#include "GlobalNamespace/BeatmapEventType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TrackLaneRingsManager
  class TrackLaneRingsManager;
  // Forward declaring type: IBeatmapObjectCallbackController
  class IBeatmapObjectCallbackController;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: TrackLaneRingsPositionStepEffectSpawner
  class TrackLaneRingsPositionStepEffectSpawner : public UnityEngine::MonoBehaviour {
    public:
    // private TrackLaneRingsManager _trackLaneRingsManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::TrackLaneRingsManager* trackLaneRingsManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TrackLaneRingsManager*) == 0x8);
    // [SpaceAttribute] Offset: 0xE1B64C
    // private BeatmapEventType _beatmapEventType
    // Size: 0x4
    // Offset: 0x20
    GlobalNamespace::BeatmapEventType beatmapEventType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapEventType) == 0x4);
    // [SpaceAttribute] Offset: 0xE1B684
    // private System.Single _minPositionStep
    // Size: 0x4
    // Offset: 0x24
    float minPositionStep;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxPositionStep
    // Size: 0x4
    // Offset: 0x28
    float maxPositionStep;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _moveSpeed
    // Size: 0x4
    // Offset: 0x2C
    float moveSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [InjectAttribute] Offset: 0xE1B6DC
    // private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapObjectCallbackController*) == 0x8);
    // private System.Boolean _prevWasMinStep
    // Size: 0x1
    // Offset: 0x38
    bool prevWasMinStep;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: TrackLaneRingsPositionStepEffectSpawner
    TrackLaneRingsPositionStepEffectSpawner(GlobalNamespace::TrackLaneRingsManager* trackLaneRingsManager_ = {}, GlobalNamespace::BeatmapEventType beatmapEventType_ = {}, float minPositionStep_ = {}, float maxPositionStep_ = {}, float moveSpeed_ = {}, GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController_ = {}, bool prevWasMinStep_ = {}) noexcept : trackLaneRingsManager{trackLaneRingsManager_}, beatmapEventType{beatmapEventType_}, minPositionStep{minPositionStep_}, maxPositionStep{maxPositionStep_}, moveSpeed{moveSpeed_}, beatmapObjectCallbackController{beatmapObjectCallbackController_}, prevWasMinStep{prevWasMinStep_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x10F6DA4
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x10F6E94
    void OnDestroy();
    // private System.Void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(BeatmapEventData beatmapEventData)
    // Offset: 0x10F6F94
    void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // public System.Void .ctor()
    // Offset: 0x10F7040
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrackLaneRingsPositionStepEffectSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrackLaneRingsPositionStepEffectSpawner*, creationType>()));
    }
  }; // TrackLaneRingsPositionStepEffectSpawner
  #pragma pack(pop)
  static check_size<sizeof(TrackLaneRingsPositionStepEffectSpawner), 56 + sizeof(bool)> __GlobalNamespace_TrackLaneRingsPositionStepEffectSpawnerSizeCheck;
  static_assert(sizeof(TrackLaneRingsPositionStepEffectSpawner) == 0x39);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner*, "", "TrackLaneRingsPositionStepEffectSpawner");
