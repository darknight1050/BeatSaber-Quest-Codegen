// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IAudioTimeSource
#include "GlobalNamespace/IAudioTimeSource.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FloatSO
  class FloatSO;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4E
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerConnectedPlayerSongTimeSyncController
  // [] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerSongTimeSyncController : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IAudioTimeSource*/ {
    public:
    // Nested type: GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::InitData
    class InitData;
    // private System.Single _audioSyncLerpSpeed
    // Size: 0x4
    // Offset: 0x18
    float audioSyncLerpSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _forcedSyncDeltaTime
    // Size: 0x4
    // Offset: 0x1C
    float forcedSyncDeltaTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _startSyncDeltaTime
    // Size: 0x4
    // Offset: 0x20
    float startSyncDeltaTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _stopSyncDeltaTime
    // Size: 0x4
    // Offset: 0x24
    float stopSyncDeltaTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private FloatSO _audioLatency
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::FloatSO* audioLatency;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FloatSO*) == 0x8);
    // [InjectAttribute] Offset: 0xD269B4
    // private readonly MultiplayerConnectedPlayerSongTimeSyncController/InitData _initData
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::InitData*) == 0x8);
    // [InjectAttribute] Offset: 0xD269C4
    // private readonly IConnectedPlayer _connectedPlayer
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IConnectedPlayer*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD269D4
    // private System.Single <songTime>k__BackingField
    // Size: 0x4
    // Offset: 0x40
    float songTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _timeScale
    // Size: 0x4
    // Offset: 0x44
    float timeScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _startSongSyncTime
    // Size: 0x4
    // Offset: 0x48
    float startSongSyncTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _fixingAudioSyncError
    // Size: 0x1
    // Offset: 0x4C
    bool fixingAudioSyncError;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isReady
    // Size: 0x1
    // Offset: 0x4D
    bool isReady;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MultiplayerConnectedPlayerSongTimeSyncController
    MultiplayerConnectedPlayerSongTimeSyncController(float audioSyncLerpSpeed_ = {}, float forcedSyncDeltaTime_ = {}, float startSyncDeltaTime_ = {}, float stopSyncDeltaTime_ = {}, GlobalNamespace::FloatSO* audioLatency_ = {}, GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::InitData* initData_ = {}, GlobalNamespace::IConnectedPlayer* connectedPlayer_ = {}, float songTime_ = {}, float timeScale_ = {}, float startSongSyncTime_ = {}, bool fixingAudioSyncError_ = {}, bool isReady_ = {}) noexcept : audioSyncLerpSpeed{audioSyncLerpSpeed_}, forcedSyncDeltaTime{forcedSyncDeltaTime_}, startSyncDeltaTime{startSyncDeltaTime_}, stopSyncDeltaTime{stopSyncDeltaTime_}, audioLatency{audioLatency_}, initData{initData_}, connectedPlayer{connectedPlayer_}, songTime{songTime_}, timeScale{timeScale_}, startSongSyncTime{startSongSyncTime_}, fixingAudioSyncError{fixingAudioSyncError_}, isReady{isReady_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IAudioTimeSource
    operator GlobalNamespace::IAudioTimeSource() noexcept {
      return *reinterpret_cast<GlobalNamespace::IAudioTimeSource*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Single get_songTime()
    // Offset: 0x1043230
    float get_songTime_NEW();
    // private System.Void set_songTime(System.Single value)
    // Offset: 0x1043238
    void set_songTime(float value);
    // public System.Single get_songEndTime()
    // Offset: 0x1043240
    float get_songEndTime_NEW();
    // public System.Boolean get_isReady()
    // Offset: 0x104324C
    bool get_isReady_NEW();
    // protected System.Void Start()
    // Offset: 0x1043254
    void Start();
    // protected System.Void Update()
    // Offset: 0x1043260
    void Update();
    // public System.Void StartSong(System.Single songStartSyncTime)
    // Offset: 0x103EE2C
    void StartSong(float songStartSyncTime);
    // public System.Void SetConnectedPlayerSongTime(System.Single syncTime, System.Single songTime)
    // Offset: 0x1041D90
    void SetConnectedPlayerSongTime(float syncTime, float songTime);
    // public System.Void StopSong()
    // Offset: 0x103F104
    void StopSong();
    // public System.Void .ctor()
    // Offset: 0x10433EC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerSongTimeSyncController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerSongTimeSyncController*, creationType>()));
    }
  }; // MultiplayerConnectedPlayerSongTimeSyncController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerConnectedPlayerSongTimeSyncController), 77 + sizeof(bool)> __GlobalNamespace_MultiplayerConnectedPlayerSongTimeSyncControllerSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerSongTimeSyncController) == 0x4E);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*, "", "MultiplayerConnectedPlayerSongTimeSyncController");
