// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerGameplayAnimator
#include "GlobalNamespace/MultiplayerGameplayAnimator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ScaleAnimator
  class ScaleAnimator;
  // Forward declaring type: MultiplayerConnectedPlayerLevelFailController
  class MultiplayerConnectedPlayerLevelFailController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerDuelConnectedPlayerGameplayAnimator
  class MultiplayerDuelConnectedPlayerGameplayAnimator : public GlobalNamespace::MultiplayerGameplayAnimator {
    public:
    // [SpaceAttribute] Offset: 0xE1D148
    // private ScaleAnimator _avatarScaleAnimator
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::ScaleAnimator* avatarScaleAnimator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ScaleAnimator*) == 0x8);
    // [InjectAttribute] Offset: 0xE1D180
    // private readonly MultiplayerConnectedPlayerLevelFailController _failController
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::MultiplayerConnectedPlayerLevelFailController* failController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConnectedPlayerLevelFailController*) == 0x8);
    // Creating value type constructor for type: MultiplayerDuelConnectedPlayerGameplayAnimator
    MultiplayerDuelConnectedPlayerGameplayAnimator(GlobalNamespace::ScaleAnimator* avatarScaleAnimator_ = {}, GlobalNamespace::MultiplayerConnectedPlayerLevelFailController* failController_ = {}) noexcept : avatarScaleAnimator{avatarScaleAnimator_}, failController{failController_} {}
    // private System.Void TransitionIntoFailedState()
    // Offset: 0x114E55C
    void TransitionIntoFailedState();
    // private System.Void HandlePlayerDidFail()
    // Offset: 0x114E8B0
    void HandlePlayerDidFail();
    // protected override System.Void OnDestroy()
    // Offset: 0x114E480
    // Implemented from: MultiplayerGameplayAnimator
    // Base method: System.Void MultiplayerGameplayAnimator::OnDestroy()
    void OnDestroy();
    // protected override System.Void AnimateNewLeaderSelected(System.Boolean isLeading)
    // Offset: 0x114E6AC
    // Implemented from: MultiplayerGameplayAnimator
    // Base method: System.Void MultiplayerGameplayAnimator::AnimateNewLeaderSelected(System.Boolean isLeading)
    void AnimateNewLeaderSelected(bool isLeading);
    // protected override System.Void HandleStateChanged(MultiplayerController/State state)
    // Offset: 0x114E79C
    // Implemented from: MultiplayerGameplayAnimator
    // Base method: System.Void MultiplayerGameplayAnimator::HandleStateChanged(MultiplayerController/State state)
    void HandleStateChanged(GlobalNamespace::MultiplayerController::State state);
    // public System.Void .ctor()
    // Offset: 0x114E8B4
    // Implemented from: MultiplayerGameplayAnimator
    // Base method: System.Void MultiplayerGameplayAnimator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerDuelConnectedPlayerGameplayAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerDuelConnectedPlayerGameplayAnimator*, creationType>()));
    }
  }; // MultiplayerDuelConnectedPlayerGameplayAnimator
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerDuelConnectedPlayerGameplayAnimator), 112 + sizeof(GlobalNamespace::MultiplayerConnectedPlayerLevelFailController*)> __GlobalNamespace_MultiplayerDuelConnectedPlayerGameplayAnimatorSizeCheck;
  static_assert(sizeof(MultiplayerDuelConnectedPlayerGameplayAnimator) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator*, "", "MultiplayerDuelConnectedPlayerGameplayAnimator");
