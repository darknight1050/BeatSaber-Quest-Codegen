// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: IGameplayRpcManager
  class IGameplayRpcManager;
  // Forward declaring type: MockNodePoseSyncStateSender
  class MockNodePoseSyncStateSender;
  // Forward declaring type: MockScoreSyncStateSender
  class MockScoreSyncStateSender;
  // Forward declaring type: MockBeatmapData
  class MockBeatmapData;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MockPlayerGamePoseGenerator
  class MockPlayerGamePoseGenerator : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // protected readonly IMultiplayerSessionManager multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // protected readonly IGameplayRpcManager gameplayRpcManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IGameplayRpcManager* gameplayRpcManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IGameplayRpcManager*) == 0x8);
    // protected readonly System.Boolean leftHanded
    // Size: 0x1
    // Offset: 0x20
    bool leftHanded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: leftHanded and: mockNodePoseSyncStateSender
    char __padding2[0x7] = {};
    // protected readonly MockNodePoseSyncStateSender mockNodePoseSyncStateSender
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MockNodePoseSyncStateSender* mockNodePoseSyncStateSender;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockNodePoseSyncStateSender*) == 0x8);
    // protected readonly MockScoreSyncStateSender mockScoreSyncStateSender
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MockScoreSyncStateSender* mockScoreSyncStateSender;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockScoreSyncStateSender*) == 0x8);
    // Creating value type constructor for type: MockPlayerGamePoseGenerator
    MockPlayerGamePoseGenerator(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}, GlobalNamespace::IGameplayRpcManager* gameplayRpcManager_ = {}, bool leftHanded_ = {}, GlobalNamespace::MockNodePoseSyncStateSender* mockNodePoseSyncStateSender_ = {}, GlobalNamespace::MockScoreSyncStateSender* mockScoreSyncStateSender_ = {}) noexcept : multiplayerSessionManager{multiplayerSessionManager_}, gameplayRpcManager{gameplayRpcManager_}, leftHanded{leftHanded_}, mockNodePoseSyncStateSender{mockNodePoseSyncStateSender_}, mockScoreSyncStateSender{mockScoreSyncStateSender_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // protected System.Void .ctor(IMultiplayerSessionManager multiplayerSessionManager, IGameplayRpcManager gameplayRpcManager, System.Boolean leftHanded)
    // Offset: 0x2399D40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockPlayerGamePoseGenerator* New_ctor(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, GlobalNamespace::IGameplayRpcManager* gameplayRpcManager, bool leftHanded) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockPlayerGamePoseGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockPlayerGamePoseGenerator*, creationType>(multiplayerSessionManager, gameplayRpcManager, leftHanded)));
    }
    // public System.Void Dispose()
    // Offset: 0x2399F58
    void Dispose();
    // public System.Void SendPoses(System.Single introStartTime, MockBeatmapData beatmapData, GameplayModifiers gameplayModifiers, System.Threading.CancellationToken cancellationToken, System.Action onSongFinished)
    // Offset: 0xFFFFFFFF
    void SendPoses(float introStartTime, GlobalNamespace::MockBeatmapData* beatmapData, GlobalNamespace::GameplayModifiers* gameplayModifiers, System::Threading::CancellationToken cancellationToken, System::Action* onSongFinished);
    // public System.Void SimulateFail()
    // Offset: 0x2399F68
    void SimulateFail();
    // public System.Void SimulateGiveUp()
    // Offset: 0x239A104
    void SimulateGiveUp();
  }; // MockPlayerGamePoseGenerator
  #pragma pack(pop)
  static check_size<sizeof(MockPlayerGamePoseGenerator), 48 + sizeof(GlobalNamespace::MockScoreSyncStateSender*)> __GlobalNamespace_MockPlayerGamePoseGeneratorSizeCheck;
  static_assert(sizeof(MockPlayerGamePoseGenerator) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockPlayerGamePoseGenerator*, "", "MockPlayerGamePoseGenerator");
