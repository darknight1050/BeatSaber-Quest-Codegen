// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IScoreSyncStateManager
#include "GlobalNamespace/IScoreSyncStateManager.hpp"
// Including type: MultiplayerController
#include "GlobalNamespace/MultiplayerController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerMockSettings
  class MultiplayerMockSettings;
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
  // Forward declaring type: MockStandardScoreSyncState
  class MockStandardScoreSyncState;
  // Forward declaring type: LocalMultiplayerSyncState`3<TStateTable, TType, TState>
  template<typename TStateTable, typename TType, typename TState>
  class LocalMultiplayerSyncState_3;
  // Forward declaring type: MockPlayer
  class MockPlayer;
  // Forward declaring type: MultiplayerSyncState`3<TStateTable, TType, TState>
  template<typename TStateTable, typename TType, typename TState>
  class MultiplayerSyncState_3;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: MockScoreSyncStateManager
  // [] Offset: FFFFFFFF
  class MockScoreSyncStateManager : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IScoreSyncStateManager*/ {
    public:
    // [InjectAttribute] Offset: 0xD275A4
    // private readonly MultiplayerMockSettings _mockSettings
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MultiplayerMockSettings* mockSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerMockSettings*) == 0x8);
    // [InjectAttribute] Offset: 0xD275B4
    // private readonly MultiplayerController _multiplayerController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerController* multiplayerController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerController*) == 0x8);
    // private IAudioTimeSource _audioTimeSource
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IAudioTimeSource* audioTimeSource;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IAudioTimeSource*) == 0x8);
    // private MockStandardScoreSyncState _localState
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MockStandardScoreSyncState* localState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockStandardScoreSyncState*) == 0x8);
    // private System.Collections.Generic.List`1<MockStandardScoreSyncState> _mockedScoreStates
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::List_1<GlobalNamespace::MockStandardScoreSyncState*>* mockedScoreStates;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::MockStandardScoreSyncState*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,MockStandardScoreSyncState> _mockedScoreStatesMap
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MockStandardScoreSyncState*>* mockedScoreStatesMap;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MockStandardScoreSyncState*>*) == 0x8);
    // private System.Single _localTime
    // Size: 0x4
    // Offset: 0x48
    float localTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: MockScoreSyncStateManager
    MockScoreSyncStateManager(GlobalNamespace::MultiplayerMockSettings* mockSettings_ = {}, GlobalNamespace::MultiplayerController* multiplayerController_ = {}, GlobalNamespace::IAudioTimeSource* audioTimeSource_ = {}, GlobalNamespace::MockStandardScoreSyncState* localState_ = {}, System::Collections::Generic::List_1<GlobalNamespace::MockStandardScoreSyncState*>* mockedScoreStates_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MockStandardScoreSyncState*>* mockedScoreStatesMap_ = {}, float localTime_ = {}) noexcept : mockSettings{mockSettings_}, multiplayerController{multiplayerController_}, audioTimeSource{audioTimeSource_}, localState{localState_}, mockedScoreStates{mockedScoreStates_}, mockedScoreStatesMap{mockedScoreStatesMap_}, localTime{localTime_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IScoreSyncStateManager
    operator GlobalNamespace::IScoreSyncStateManager() noexcept {
      return *reinterpret_cast<GlobalNamespace::IScoreSyncStateManager*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Single get_syncTime()
    // Offset: 0x1035AB4
    float get_syncTime_NEW();
    // public System.Int32 get_connectedPlayerCount()
    // Offset: 0x1035ABC
    int get_connectedPlayerCount_NEW();
    // public LocalMultiplayerSyncState`3<StandardScoreSyncState,StandardScoreSyncState/Score,System.Int32> get_localState()
    // Offset: 0x1035B0C
    GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState, GlobalNamespace::StandardScoreSyncState_Score, int>* get_localState_NEW();
    // private System.Void Init()
    // Offset: 0x1035B14
    void Init();
    // public System.Void SetAudioTimeSource(IAudioTimeSource audioTimeSource)
    // Offset: 0x1036040
    void SetAudioTimeSource(GlobalNamespace::IAudioTimeSource* audioTimeSource);
    // protected System.Void Update()
    // Offset: 0x1036048
    void Update();
    // private System.Void UpdatePlayer(MockPlayer connectedPlayer)
    // Offset: 0x1036174
    void UpdatePlayer(GlobalNamespace::MockPlayer* connectedPlayer);
    // public MultiplayerSyncState`3<StandardScoreSyncState,StandardScoreSyncState/Score,System.Int32> GetSyncStateForPlayer(IConnectedPlayer player)
    // Offset: 0x1036340
    GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState, GlobalNamespace::StandardScoreSyncState_Score, int>* GetSyncStateForPlayer_NEW(GlobalNamespace::IConnectedPlayer* player);
    // public MultiplayerSyncState`3<StandardScoreSyncState,StandardScoreSyncState/Score,System.Int32> GetSyncState(System.Int32 i)
    // Offset: 0x103641C
    GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState, GlobalNamespace::StandardScoreSyncState_Score, int>* GetSyncState_NEW(int i);
    // private System.Int32 Interpolate(System.Int32 prev, System.Single pt, System.Int32 curr, System.Single ct, System.Single t)
    // Offset: 0x1036494
    int Interpolate(int prev, float pt, int curr, float ct, float t);
    // private System.Int32 Smooth(System.Int32 prev, System.Int32 curr, System.Single t)
    // Offset: 0x103649C
    int Smooth(int prev, int curr, float t);
    // private System.Void HandleStateChanged(MultiplayerController/State state)
    // Offset: 0x1036030
    void HandleStateChanged(GlobalNamespace::MultiplayerController::State state);
    // public System.Void .ctor()
    // Offset: 0x10364A4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockScoreSyncStateManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockScoreSyncStateManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockScoreSyncStateManager*, creationType>()));
    }
  }; // MockScoreSyncStateManager
  #pragma pack(pop)
  static check_size<sizeof(MockScoreSyncStateManager), 72 + sizeof(float)> __GlobalNamespace_MockScoreSyncStateManagerSizeCheck;
  static_assert(sizeof(MockScoreSyncStateManager) == 0x4C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockScoreSyncStateManager*, "", "MockScoreSyncStateManager");
