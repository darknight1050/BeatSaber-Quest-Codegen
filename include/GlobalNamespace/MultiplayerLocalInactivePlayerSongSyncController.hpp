// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IStartSeekSongController
#include "GlobalNamespace/IStartSeekSongController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CrossFadeAudioSource
  class CrossFadeAudioSource;
  // Forward declaring type: FloatSO
  class FloatSO;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: IMultiplayerObservable
  class IMultiplayerObservable;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: WaitUntil
  class WaitUntil;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x5C
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalInactivePlayerSongSyncController
  // [] Offset: FFFFFFFF
  class MultiplayerLocalInactivePlayerSongSyncController : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IStartSeekSongController*/ {
    public:
    // Nested type: GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::InitData
    class InitData;
    // private CrossFadeAudioSource _audioSource
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::CrossFadeAudioSource* audioSource;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CrossFadeAudioSource*) == 0x8);
    // [SpaceAttribute] Offset: 0xD27144
    // private FloatSO _audioLatency
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::FloatSO* audioLatency;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FloatSO*) == 0x8);
    // [InjectAttribute] Offset: 0xD2717C
    // private readonly MultiplayerLocalInactivePlayerSongSyncController/InitData _initData
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::InitData*) == 0x8);
    // [InjectAttribute] Offset: 0xD2718C
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // private System.Single _timeScale
    // Size: 0x4
    // Offset: 0x38
    float timeScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _startSongTime
    // Size: 0x4
    // Offset: 0x3C
    float startSongTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _songTimeOffset
    // Size: 0x4
    // Offset: 0x40
    float songTimeOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _songTime
    // Size: 0x4
    // Offset: 0x44
    float songTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _audioStarted
    // Size: 0x1
    // Offset: 0x48
    bool audioStarted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _currentObservableIsFailed
    // Size: 0x1
    // Offset: 0x49
    bool currentObservableIsFailed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: currentObservableIsFailed and: observable
    char __padding9[0x6] = {};
    // private IMultiplayerObservable _observable
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::IMultiplayerObservable* observable;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerObservable*) == 0x8);
    // private System.Single _lastLatencyOffsetTime
    // Size: 0x4
    // Offset: 0x58
    float lastLatencyOffsetTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: MultiplayerLocalInactivePlayerSongSyncController
    MultiplayerLocalInactivePlayerSongSyncController(GlobalNamespace::CrossFadeAudioSource* audioSource_ = {}, GlobalNamespace::FloatSO* audioLatency_ = {}, GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::InitData* initData_ = {}, GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}, float timeScale_ = {}, float startSongTime_ = {}, float songTimeOffset_ = {}, float songTime_ = {}, bool audioStarted_ = {}, bool currentObservableIsFailed_ = {}, GlobalNamespace::IMultiplayerObservable* observable_ = {}, float lastLatencyOffsetTime_ = {}) noexcept : audioSource{audioSource_}, audioLatency{audioLatency_}, initData{initData_}, multiplayerSessionManager{multiplayerSessionManager_}, timeScale{timeScale_}, startSongTime{startSongTime_}, songTimeOffset{songTimeOffset_}, songTime{songTime_}, audioStarted{audioStarted_}, currentObservableIsFailed{currentObservableIsFailed_}, observable{observable_}, lastLatencyOffsetTime{lastLatencyOffsetTime_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IStartSeekSongController
    operator GlobalNamespace::IStartSeekSongController() noexcept {
      return *reinterpret_cast<GlobalNamespace::IStartSeekSongController*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kReSyncThreshold
    static constexpr const float kReSyncThreshold = 0.05;
    // Get static field: static private System.Single kReSyncThreshold
    static float _get_kReSyncThreshold();
    // Set static field: static private System.Single kReSyncThreshold
    static void _set_kReSyncThreshold(float value);
    // public UnityEngine.WaitUntil get_waitUntilIsReadyToStartTheSong()
    // Offset: 0xF51208
    UnityEngine::WaitUntil* get_waitUntilIsReadyToStartTheSong_NEW();
    // private System.Boolean get_isAudioLoaded()
    // Offset: 0xF512A0
    bool get_isAudioLoaded();
    // protected System.Void Awake()
    // Offset: 0xF5134C
    void Awake();
    // protected System.Void Update()
    // Offset: 0xF51468
    void Update();
    // public System.Void StartSong(System.Single offsetTime)
    // Offset: 0xF51888
    void StartSong_NEW(float offsetTime);
    // public System.Void FollowOffsetSyncTime(IMultiplayerObservable observable)
    // Offset: 0xF51B4C
    void FollowOffsetSyncTime(GlobalNamespace::IMultiplayerObservable* observable);
    // private System.Void UpdateOffsetSyncTime(System.Single offsetSyncTime, System.Boolean forceUpdate)
    // Offset: 0xF5172C
    void UpdateOffsetSyncTime(float offsetSyncTime, bool forceUpdate);
    // public System.Void SeekTo(System.Single offsetTime)
    // Offset: 0xF51D44
    void SeekTo_NEW(float offsetTime);
    // private System.Void SeekTo(System.Single offsetTime, System.Boolean crossFade, System.Single toVolume)
    // Offset: 0xF51980
    void SeekTo(float offsetTime, bool crossFade, float toVolume);
    // private System.Boolean <get_waitUntilIsReadyToStartTheSong>b__6_0()
    // Offset: 0xF51D58
    bool $get_waitUntilIsReadyToStartTheSong$b__6_0();
    // public System.Void .ctor()
    // Offset: 0xF51D50
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalInactivePlayerSongSyncController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalInactivePlayerSongSyncController*, creationType>()));
    }
  }; // MultiplayerLocalInactivePlayerSongSyncController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalInactivePlayerSongSyncController), 88 + sizeof(float)> __GlobalNamespace_MultiplayerLocalInactivePlayerSongSyncControllerSizeCheck;
  static_assert(sizeof(MultiplayerLocalInactivePlayerSongSyncController) == 0x5C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*, "", "MultiplayerLocalInactivePlayerSongSyncController");
