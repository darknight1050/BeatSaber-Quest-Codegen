// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerIntroCountdown
  class MultiplayerIntroCountdown;
  // Forward declaring type: MultiplayerScoreRingManager
  class MultiplayerScoreRingManager;
  // Forward declaring type: MultiplayerPlayersManager
  class MultiplayerPlayersManager;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  // Autogenerated type: MultiplayerIntroAnimationController
  // [] Offset: FFFFFFFF
  class MultiplayerIntroAnimationController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerIntroAnimationController::$PlayIntroAnimationCoroutine$d__11
    class $PlayIntroAnimationCoroutine$d__11;
    // private System.Single _startDelay
    // Size: 0x4
    // Offset: 0x18
    float startDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _animationDuration
    // Size: 0x4
    // Offset: 0x1C
    float animationDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _spawnEffectPeak
    // Size: 0x4
    // Offset: 0x20
    float spawnEffectPeak;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _endDelay
    // Size: 0x4
    // Offset: 0x24
    float endDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0xDC9F94
    // private MultiplayerIntroCountdown _countdownAnimator
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MultiplayerIntroCountdown* countdownAnimator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerIntroCountdown*) == 0x8);
    // private MultiplayerScoreRingManager _scoreRingManager
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MultiplayerScoreRingManager* scoreRingManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerScoreRingManager*) == 0x8);
    // [InjectAttribute] Offset: 0xDC9FDC
    // private readonly MultiplayerPlayersManager _multiplayerPlayersManager
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MultiplayerPlayersManager* multiplayerPlayersManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerPlayersManager*) == 0x8);
    // [InjectAttribute] Offset: 0xDC9FEC
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // Creating value type constructor for type: MultiplayerIntroAnimationController
    MultiplayerIntroAnimationController(float startDelay_ = {}, float animationDuration_ = {}, float spawnEffectPeak_ = {}, float endDelay_ = {}, GlobalNamespace::MultiplayerIntroCountdown* countdownAnimator_ = {}, GlobalNamespace::MultiplayerScoreRingManager* scoreRingManager_ = {}, GlobalNamespace::MultiplayerPlayersManager* multiplayerPlayersManager_ = {}, GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}) noexcept : startDelay{startDelay_}, animationDuration{animationDuration_}, spawnEffectPeak{spawnEffectPeak_}, endDelay{endDelay_}, countdownAnimator{countdownAnimator_}, scoreRingManager{scoreRingManager_}, multiplayerPlayersManager{multiplayerPlayersManager_}, multiplayerSessionManager{multiplayerSessionManager_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void SetBeforeIntroValue()
    // Offset: 0xFB1424
    void SetBeforeIntroValue();
    // public System.Void PlayIntroAnimation(System.Single maxDesiredIntroAnimationDuration, System.Action onCompleted)
    // Offset: 0xFAF64C
    void PlayIntroAnimation(float maxDesiredIntroAnimationDuration, System::Action* onCompleted);
    // public System.Single GetFullIntroAnimationTime()
    // Offset: 0xFAF614
    float GetFullIntroAnimationTime();
    // private System.Collections.IEnumerator PlayIntroAnimationCoroutine(System.Single maxDesiredIntroAnimationDuration, System.Action onCompleted)
    // Offset: 0xFB2D58
    System::Collections::IEnumerator* PlayIntroAnimationCoroutine(float maxDesiredIntroAnimationDuration, System::Action* onCompleted);
    // public System.Void TransitionToAfterIntroAnimationState()
    // Offset: 0xFAF678
    void TransitionToAfterIntroAnimationState();
    // private System.Collections.Generic.Queue`1<System.Int32> CalculatePlayerIndexSequence(System.Collections.Generic.IReadOnlyList`1<IConnectedPlayer> allActivePlayer)
    // Offset: 0xFB2E2C
    System::Collections::Generic::Queue_1<int>* CalculatePlayerIndexSequence(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer*>* allActivePlayer);
    // public System.Void .ctor()
    // Offset: 0xFB32D4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerIntroAnimationController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerIntroAnimationController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerIntroAnimationController*, creationType>()));
    }
  }; // MultiplayerIntroAnimationController
  static check_size<sizeof(MultiplayerIntroAnimationController), 64 + sizeof(GlobalNamespace::IMultiplayerSessionManager*)> __GlobalNamespace_MultiplayerIntroAnimationControllerSizeCheck;
  static_assert(sizeof(MultiplayerIntroAnimationController) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerIntroAnimationController*, "", "MultiplayerIntroAnimationController");
#pragma pack(pop)
