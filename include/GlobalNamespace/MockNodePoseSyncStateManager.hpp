// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: INodePoseSyncStateManager
#include "GlobalNamespace/INodePoseSyncStateManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerMockSettings
  class MultiplayerMockSettings;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: LocalMultiplayerSyncState`3<TStateTable, TType, TState>
  template<typename TStateTable, typename TType, typename TState>
  class LocalMultiplayerSyncState_3;
  // Forward declaring type: MultiplayerSyncState`3<TStateTable, TType, TState>
  template<typename TStateTable, typename TType, typename TState>
  class MultiplayerSyncState_3;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  // Autogenerated type: MockNodePoseSyncStateManager
  // [] Offset: FFFFFFFF
  class MockNodePoseSyncStateManager : public ::Il2CppObject/*, public GlobalNamespace::INodePoseSyncStateManager*/ {
    public:
    // [InjectAttribute] Offset: 0xDC98C8
    // private MultiplayerMockSettings _mockSettings
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::MultiplayerMockSettings* mockSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerMockSettings*) == 0x8);
    // [InjectAttribute] Offset: 0xDC98D8
    // private IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // private LocalMultiplayerSyncState`3<NodePoseSyncState,NodePoseSyncState/NodePose,PoseSerializable> _localState
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>* localState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>*) == 0x8);
    // Creating value type constructor for type: MockNodePoseSyncStateManager
    MockNodePoseSyncStateManager(GlobalNamespace::MultiplayerMockSettings* mockSettings_ = {}, GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}, GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>* localState_ = {}) noexcept : mockSettings{mockSettings_}, multiplayerSessionManager{multiplayerSessionManager_}, localState{localState_} {}
    // Creating interface conversion operator: operator GlobalNamespace::INodePoseSyncStateManager
    operator GlobalNamespace::INodePoseSyncStateManager() noexcept {
      return *reinterpret_cast<GlobalNamespace::INodePoseSyncStateManager*>(this);
    }
    // public LocalMultiplayerSyncState`3<NodePoseSyncState,NodePoseSyncState/NodePose,PoseSerializable> get_localState()
    // Offset: 0x1026518
    GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>* get_localState();
    // private System.Void Init()
    // Offset: 0x1026520
    void Init();
    // public MultiplayerSyncState`3<NodePoseSyncState,NodePoseSyncState/NodePose,PoseSerializable> GetSyncStateForPlayer(IConnectedPlayer player)
    // Offset: 0x1026634
    GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>* GetSyncStateForPlayer(GlobalNamespace::IConnectedPlayer* player);
    // public MultiplayerSyncState`3<NodePoseSyncState,NodePoseSyncState/NodePose,PoseSerializable> GetSyncState(System.Int32 i)
    // Offset: 0x102663C
    GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>* GetSyncState(int i);
    // private PoseSerializable Interpolate(PoseSerializable prev, System.Single prevTime, PoseSerializable curr, System.Single currTime, System.Single time)
    // Offset: 0x102669C
    GlobalNamespace::PoseSerializable Interpolate(GlobalNamespace::PoseSerializable prev, float prevTime, GlobalNamespace::PoseSerializable curr, float currTime, float time);
    // private PoseSerializable Smooth(PoseSerializable a, PoseSerializable b, System.Single smooth)
    // Offset: 0x10266E4
    GlobalNamespace::PoseSerializable Smooth(GlobalNamespace::PoseSerializable a, GlobalNamespace::PoseSerializable b, float smooth);
    // public System.Single get_syncTime()
    // Offset: 0x102645C
    // Implemented from: INodePoseSyncStateManager`4
    // Base method: System.Single INodePoseSyncStateManager_4::get_syncTime()
    float get_syncTime();
    // public System.Int32 get_connectedPlayerCount()
    // Offset: 0x1026510
    // Implemented from: INodePoseSyncStateManager`4
    // Base method: System.Int32 INodePoseSyncStateManager_4::get_connectedPlayerCount()
    int get_connectedPlayerCount();
    // public System.Void ClearBufferedStates()
    // Offset: 0x1026644
    // Implemented from: INodePoseSyncStateManager`4
    // Base method: System.Void INodePoseSyncStateManager_4::ClearBufferedStates()
    void ClearBufferedStates();
    // public System.Void .ctor()
    // Offset: 0x102672C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockNodePoseSyncStateManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockNodePoseSyncStateManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockNodePoseSyncStateManager*, creationType>()));
    }
  }; // MockNodePoseSyncStateManager
  static check_size<sizeof(MockNodePoseSyncStateManager), 32 + sizeof(GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>*)> __GlobalNamespace_MockNodePoseSyncStateManagerSizeCheck;
  static_assert(sizeof(MockNodePoseSyncStateManager) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockNodePoseSyncStateManager*, "", "MockNodePoseSyncStateManager");
#pragma pack(pop)
