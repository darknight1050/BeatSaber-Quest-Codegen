// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IMultiplayerLevelEndActionsPublisher
#include "GlobalNamespace/IMultiplayerLevelEndActionsPublisher.hpp"
// Including type: IMultiplayerLevelEndActionsListener
#include "GlobalNamespace/IMultiplayerLevelEndActionsListener.hpp"
// Including type: IStartSeekSongControllerProvider
#include "GlobalNamespace/IStartSeekSongControllerProvider.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLocalInactivePlayerSongSyncController
  class MultiplayerLocalInactivePlayerSongSyncController;
  // Forward declaring type: MultiplayerSpectatorController
  class MultiplayerSpectatorController;
  // Forward declaring type: MultiplayerLocalInactivePlayerOutroAnimator
  class MultiplayerLocalInactivePlayerOutroAnimator;
  // Forward declaring type: MultiplayerLevelCompletionResults
  class MultiplayerLevelCompletionResults;
  // Forward declaring type: IStartSeekSongController
  class IStartSeekSongController;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalInactivePlayerFacade
  class MultiplayerLocalInactivePlayerFacade : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IMultiplayerLevelEndActionsPublisher, public GlobalNamespace::IMultiplayerLevelEndActionsListener, public GlobalNamespace::IStartSeekSongControllerProvider*/ {
    public:
    // Nested type: GlobalNamespace::MultiplayerLocalInactivePlayerFacade::Factory
    class Factory;
    // [InjectAttribute] Offset: 0xE1D528
    // private readonly MultiplayerLocalInactivePlayerSongSyncController _inactivePlayerSongSyncController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController* inactivePlayerSongSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*) == 0x8);
    // [InjectAttribute] Offset: 0xE1D538
    // private readonly MultiplayerSpectatorController _spectatorController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerSpectatorController* spectatorController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerSpectatorController*) == 0x8);
    // private UnityEngine.Playables.PlayableDirector _introAnimator
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Playables::PlayableDirector* introAnimator;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableDirector*) == 0x8);
    // [InjectAttribute] Offset: 0xE1D558
    // private readonly MultiplayerLocalInactivePlayerOutroAnimator _outroAnimator
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator* outroAnimator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1D568
    // private System.Action`1<MultiplayerLevelCompletionResults> playerDidFinishEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>* playerDidFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1D578
    // private System.Action`1<PlayerNetworkFailReason> playerNetworkDidFailedEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* playerNetworkDidFailedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>*) == 0x8);
    // Creating value type constructor for type: MultiplayerLocalInactivePlayerFacade
    MultiplayerLocalInactivePlayerFacade(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController* inactivePlayerSongSyncController_ = {}, GlobalNamespace::MultiplayerSpectatorController* spectatorController_ = {}, UnityEngine::Playables::PlayableDirector* introAnimator_ = {}, GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator* outroAnimator_ = {}, System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>* playerDidFinishEvent_ = {}, System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* playerNetworkDidFailedEvent_ = {}) noexcept : inactivePlayerSongSyncController{inactivePlayerSongSyncController_}, spectatorController{spectatorController_}, introAnimator{introAnimator_}, outroAnimator{outroAnimator_}, playerDidFinishEvent{playerDidFinishEvent_}, playerNetworkDidFailedEvent{playerNetworkDidFailedEvent_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IMultiplayerLevelEndActionsPublisher
    operator GlobalNamespace::IMultiplayerLevelEndActionsPublisher() noexcept {
      return *reinterpret_cast<GlobalNamespace::IMultiplayerLevelEndActionsPublisher*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IMultiplayerLevelEndActionsListener
    operator GlobalNamespace::IMultiplayerLevelEndActionsListener() noexcept {
      return *reinterpret_cast<GlobalNamespace::IMultiplayerLevelEndActionsListener*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IStartSeekSongControllerProvider
    operator GlobalNamespace::IStartSeekSongControllerProvider() noexcept {
      return *reinterpret_cast<GlobalNamespace::IStartSeekSongControllerProvider*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public IStartSeekSongController get_songController()
    // Offset: 0x24034D4
    GlobalNamespace::IStartSeekSongController* get_songController();
    // public MultiplayerSpectatorController get_spectatorController()
    // Offset: 0x24034DC
    GlobalNamespace::MultiplayerSpectatorController* get_spectatorController();
    // public UnityEngine.GameObject get_introAnimator()
    // Offset: 0x23F3D8C
    UnityEngine::GameObject* get_introAnimator();
    // public UnityEngine.Playables.PlayableDirector get_introPlayableDirector()
    // Offset: 0x24034E4
    UnityEngine::Playables::PlayableDirector* get_introPlayableDirector();
    // public MultiplayerLocalInactivePlayerOutroAnimator get_outroAnimator()
    // Offset: 0x24034EC
    GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator* get_outroAnimator();
    // public System.Void add_playerDidFinishEvent(System.Action`1<MultiplayerLevelCompletionResults> value)
    // Offset: 0x24034F4
    void add_playerDidFinishEvent(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>* value);
    // public System.Void remove_playerDidFinishEvent(System.Action`1<MultiplayerLevelCompletionResults> value)
    // Offset: 0x2403598
    void remove_playerDidFinishEvent(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>* value);
    // public System.Void add_playerNetworkDidFailedEvent(System.Action`1<PlayerNetworkFailReason> value)
    // Offset: 0x240363C
    void add_playerNetworkDidFailedEvent(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* value);
    // public System.Void remove_playerNetworkDidFailedEvent(System.Action`1<PlayerNetworkFailReason> value)
    // Offset: 0x24036E0
    void remove_playerNetworkDidFailedEvent(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* value);
    // public System.Void ReportPlayerDidFinish(MultiplayerLevelCompletionResults results)
    // Offset: 0x2403784
    void ReportPlayerDidFinish(GlobalNamespace::MultiplayerLevelCompletionResults* results);
    // public System.Void ReportPlayerNetworkDidFailed(PlayerNetworkFailReason failReason)
    // Offset: 0x24037F8
    void ReportPlayerNetworkDidFailed(GlobalNamespace::PlayerNetworkFailReason failReason);
    // public System.Void .ctor()
    // Offset: 0x240386C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalInactivePlayerFacade* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLocalInactivePlayerFacade::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalInactivePlayerFacade*, creationType>()));
    }
  }; // MultiplayerLocalInactivePlayerFacade
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalInactivePlayerFacade), 64 + sizeof(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>*)> __GlobalNamespace_MultiplayerLocalInactivePlayerFacadeSizeCheck;
  static_assert(sizeof(MultiplayerLocalInactivePlayerFacade) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalInactivePlayerFacade*, "", "MultiplayerLocalInactivePlayerFacade");
