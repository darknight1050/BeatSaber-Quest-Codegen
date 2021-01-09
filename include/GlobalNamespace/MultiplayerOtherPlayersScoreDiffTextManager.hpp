// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: CoreGameHUDController
#include "GlobalNamespace/CoreGameHUDController.hpp"
// Including type: MultiplayerController
#include "GlobalNamespace/MultiplayerController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerPlayersManager
  class MultiplayerPlayersManager;
  // Forward declaring type: MultiplayerScoreProvider
  class MultiplayerScoreProvider;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: MultiplayerLayoutProvider
  class MultiplayerLayoutProvider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4C
  // Autogenerated type: MultiplayerOtherPlayersScoreDiffTextManager
  // [] Offset: FFFFFFFF
  class MultiplayerOtherPlayersScoreDiffTextManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::$$c
    class $$c;
    // [InjectAttribute] Offset: 0xDCA224
    // private readonly MultiplayerController _multiplayerController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MultiplayerController* multiplayerController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerController*) == 0x8);
    // [InjectAttribute] Offset: 0xDCA234
    // private readonly MultiplayerPlayersManager _playersManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerPlayersManager* playersManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerPlayersManager*) == 0x8);
    // [InjectAttribute] Offset: 0xDCA244
    // private readonly MultiplayerScoreProvider _scoreProvider
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MultiplayerScoreProvider* scoreProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerScoreProvider*) == 0x8);
    // [InjectAttribute] Offset: 0xDCA254
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // [InjectAttribute] Offset: 0xDCA264
    // private readonly MultiplayerLayoutProvider _layoutProvider
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MultiplayerLayoutProvider* layoutProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLayoutProvider*) == 0x8);
    // [InjectAttribute] Offset: 0xDCA274
    // private readonly CoreGameHUDController/InitData _initData
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::CoreGameHUDController::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CoreGameHUDController::InitData*) == 0x8);
    // private System.Single _timeToNextUpdate
    // Size: 0x4
    // Offset: 0x48
    float timeToNextUpdate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: MultiplayerOtherPlayersScoreDiffTextManager
    MultiplayerOtherPlayersScoreDiffTextManager(GlobalNamespace::MultiplayerController* multiplayerController_ = {}, GlobalNamespace::MultiplayerPlayersManager* playersManager_ = {}, GlobalNamespace::MultiplayerScoreProvider* scoreProvider_ = {}, GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}, GlobalNamespace::MultiplayerLayoutProvider* layoutProvider_ = {}, GlobalNamespace::CoreGameHUDController::InitData* initData_ = {}, float timeToNextUpdate_ = {}) noexcept : multiplayerController{multiplayerController_}, playersManager{playersManager_}, scoreProvider{scoreProvider_}, multiplayerSessionManager{multiplayerSessionManager_}, layoutProvider{layoutProvider_}, initData{initData_}, timeToNextUpdate{timeToNextUpdate_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kUpdateInterval
    static constexpr const float kUpdateInterval = 0.5;
    // Get static field: static private System.Single kUpdateInterval
    static float _get_kUpdateInterval();
    // Set static field: static private System.Single kUpdateInterval
    static void _set_kUpdateInterval(float value);
    // protected System.Void Start()
    // Offset: 0xF7803C
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xF78104
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0xF781E0
    void Update();
    // private System.Void InitLeftRightPositions()
    // Offset: 0xF78B54
    void InitLeftRightPositions();
    // private System.Void HideAll()
    // Offset: 0xF785A8
    void HideAll();
    // private System.Void HandleStateChanged(MultiplayerController/State newState)
    // Offset: 0xF79058
    void HandleStateChanged(GlobalNamespace::MultiplayerController::State newState);
    // public System.Void .ctor()
    // Offset: 0xF79178
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerOtherPlayersScoreDiffTextManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerOtherPlayersScoreDiffTextManager*, creationType>()));
    }
  }; // MultiplayerOtherPlayersScoreDiffTextManager
  static check_size<sizeof(MultiplayerOtherPlayersScoreDiffTextManager), 72 + sizeof(float)> __GlobalNamespace_MultiplayerOtherPlayersScoreDiffTextManagerSizeCheck;
  static_assert(sizeof(MultiplayerOtherPlayersScoreDiffTextManager) == 0x4C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*, "", "MultiplayerOtherPlayersScoreDiffTextManager");
#pragma pack(pop)
