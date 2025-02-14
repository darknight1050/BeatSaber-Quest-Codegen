// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLobbyCenterScreenLayoutAnimator
  class MultiplayerLobbyCenterScreenLayoutAnimator : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.RectTransform _nextLevelTransform
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::RectTransform* nextLevelTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // [SpaceAttribute] Offset: 0xE23BA0
    // private UnityEngine.RectTransform _nextLevelBasePosition
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::RectTransform* nextLevelBasePosition;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.RectTransform _nextLevelCountdownPosition
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::RectTransform* nextLevelCountdownPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // [SpaceAttribute] Offset: 0xE23BE8
    // private System.Single _transitionDuration
    // Size: 0x4
    // Offset: 0x30
    float transitionDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: transitionDuration and: tweeningManager
    char __padding3[0x4] = {};
    // [InjectAttribute] Offset: 0xE23C20
    // private readonly Tweening.TweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0x38
    Tweening::TweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(Tweening::TweeningManager*) == 0x8);
    // Creating value type constructor for type: MultiplayerLobbyCenterScreenLayoutAnimator
    MultiplayerLobbyCenterScreenLayoutAnimator(UnityEngine::RectTransform* nextLevelTransform_ = {}, UnityEngine::RectTransform* nextLevelBasePosition_ = {}, UnityEngine::RectTransform* nextLevelCountdownPosition_ = {}, float transitionDuration_ = {}, Tweening::TweeningManager* tweeningManager_ = {}) noexcept : nextLevelTransform{nextLevelTransform_}, nextLevelBasePosition{nextLevelBasePosition_}, nextLevelCountdownPosition{nextLevelCountdownPosition_}, transitionDuration{transitionDuration_}, tweeningManager{tweeningManager_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void StartCountdown()
    // Offset: 0x23FB3F4
    void StartCountdown();
    // public System.Void StopCountdown(System.Boolean instant)
    // Offset: 0x23FB620
    void StopCountdown(bool instant);
    // private System.Void Move(UnityEngine.Vector3 from, UnityEngine.Vector3 to, System.Single duration)
    // Offset: 0x23FB4F4
    void Move(UnityEngine::Vector3 from, UnityEngine::Vector3 to, float duration);
    // private System.Void <Move>b__7_0(UnityEngine.Vector3 pos)
    // Offset: 0x23FB750
    void $Move$b__7_0(UnityEngine::Vector3 pos);
    // public System.Void .ctor()
    // Offset: 0x23FB748
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLobbyCenterScreenLayoutAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLobbyCenterScreenLayoutAnimator*, creationType>()));
    }
  }; // MultiplayerLobbyCenterScreenLayoutAnimator
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLobbyCenterScreenLayoutAnimator), 56 + sizeof(Tweening::TweeningManager*)> __GlobalNamespace_MultiplayerLobbyCenterScreenLayoutAnimatorSizeCheck;
  static_assert(sizeof(MultiplayerLobbyCenterScreenLayoutAnimator) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*, "", "MultiplayerLobbyCenterScreenLayoutAnimator");
