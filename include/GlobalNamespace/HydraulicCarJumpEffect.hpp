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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody
  class Rigidbody;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapObjectCallbackController
  class IBeatmapObjectCallbackController;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: HydraulicCarJumpEffect
  class HydraulicCarJumpEffect : public UnityEngine::MonoBehaviour {
    public:
    // private BeatmapEventType _event
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::BeatmapEventType event;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapEventType) == 0x4);
    // Padding between fields: event and: eventValues
    char __padding0[0x4] = {};
    // private System.Int32[] _eventValues
    // Size: 0x8
    // Offset: 0x20
    ::Array<int>* eventValues;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // [SpaceAttribute] Offset: 0xE138D0
    // private UnityEngine.Vector3 _impulse
    // Size: 0xC
    // Offset: 0x28
    UnityEngine::Vector3 impulse;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single _randomness
    // Size: 0x4
    // Offset: 0x34
    float randomness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 _position
    // Size: 0xC
    // Offset: 0x38
    UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single _minDelayBetweenEvents
    // Size: 0x4
    // Offset: 0x44
    float minDelayBetweenEvents;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0xE13938
    // private UnityEngine.Rigidbody _rigidbody
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::Rigidbody* rigidbody;
    // Field size check
    static_assert(sizeof(UnityEngine::Rigidbody*) == 0x8);
    // [InjectAttribute] Offset: 0xE13970
    // private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapObjectCallbackController*) == 0x8);
    // private System.Single _lastEventTime
    // Size: 0x4
    // Offset: 0x58
    float lastEventTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: lastEventTime and: eventValuesHashSet
    char __padding8[0x4] = {};
    // private System.Collections.Generic.HashSet`1<System.Int32> _eventValuesHashSet
    // Size: 0x8
    // Offset: 0x60
    System::Collections::Generic::HashSet_1<int>* eventValuesHashSet;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<int>*) == 0x8);
    // Creating value type constructor for type: HydraulicCarJumpEffect
    HydraulicCarJumpEffect(GlobalNamespace::BeatmapEventType event_ = {}, ::Array<int>* eventValues_ = {}, UnityEngine::Vector3 impulse_ = {}, float randomness_ = {}, UnityEngine::Vector3 position_ = {}, float minDelayBetweenEvents_ = {}, UnityEngine::Rigidbody* rigidbody_ = {}, GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController_ = {}, float lastEventTime_ = {}, System::Collections::Generic::HashSet_1<int>* eventValuesHashSet_ = {}) noexcept : event{event_}, eventValues{eventValues_}, impulse{impulse_}, randomness{randomness_}, position{position_}, minDelayBetweenEvents{minDelayBetweenEvents_}, rigidbody{rigidbody_}, beatmapObjectCallbackController{beatmapObjectCallbackController_}, lastEventTime{lastEventTime_}, eventValuesHashSet{eventValuesHashSet_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x1068AA4
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1068BC4
    void OnDestroy();
    // private System.Void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(BeatmapEventData beatmapEventData)
    // Offset: 0x1068CC4
    void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // public System.Void .ctor()
    // Offset: 0x1068E44
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HydraulicCarJumpEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HydraulicCarJumpEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HydraulicCarJumpEffect*, creationType>()));
    }
  }; // HydraulicCarJumpEffect
  #pragma pack(pop)
  static check_size<sizeof(HydraulicCarJumpEffect), 96 + sizeof(System::Collections::Generic::HashSet_1<int>*)> __GlobalNamespace_HydraulicCarJumpEffectSizeCheck;
  static_assert(sizeof(HydraulicCarJumpEffect) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HydraulicCarJumpEffect*, "", "HydraulicCarJumpEffect");
