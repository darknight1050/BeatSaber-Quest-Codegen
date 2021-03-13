// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IMultiplayerSpectatingSpot
#include "GlobalNamespace/IMultiplayerSpectatingSpot.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: MultiplayerSpectatingSpotManager
  class MultiplayerSpectatingSpotManager;
  // Forward declaring type: IMultiplayerObservable
  class IMultiplayerObservable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x49
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerConnectedPlayerSpectatingSpot
  // [] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerSpectatingSpot : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IMultiplayerSpectatingSpot*/ {
    public:
    // [InjectAttribute] Offset: 0xD2895C
    // private readonly IConnectedPlayer _connectedPlayer
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IConnectedPlayer*) == 0x8);
    // [InjectAttribute] Offset: 0xD2896C
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // [InjectAttribute] Offset: 0xD2897C
    // private readonly MultiplayerSpectatingSpotManager _spectatingSpotManager
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MultiplayerSpectatingSpotManager* spectatingSpotManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerSpectatingSpotManager*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD2898C
    // private System.Action`1<IMultiplayerSpectatingSpot> hasBeenRemovedEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>* hasBeenRemovedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD2899C
    // private System.Action`1<System.Boolean> isObservedChangedEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action_1<bool>* isObservedChangedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<bool>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD289AC
    // private IMultiplayerObservable <observable>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::IMultiplayerObservable* observable;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerObservable*) == 0x8);
    // private System.Boolean _playerFailed
    // Size: 0x1
    // Offset: 0x48
    bool playerFailed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MultiplayerConnectedPlayerSpectatingSpot
    MultiplayerConnectedPlayerSpectatingSpot(GlobalNamespace::IConnectedPlayer* connectedPlayer_ = {}, GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}, GlobalNamespace::MultiplayerSpectatingSpotManager* spectatingSpotManager_ = {}, System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>* hasBeenRemovedEvent_ = {}, System::Action_1<bool>* isObservedChangedEvent_ = {}, GlobalNamespace::IMultiplayerObservable* observable_ = {}, bool playerFailed_ = {}) noexcept : connectedPlayer{connectedPlayer_}, multiplayerSessionManager{multiplayerSessionManager_}, spectatingSpotManager{spectatingSpotManager_}, hasBeenRemovedEvent{hasBeenRemovedEvent_}, isObservedChangedEvent{isObservedChangedEvent_}, observable{observable_}, playerFailed{playerFailed_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IMultiplayerSpectatingSpot
    operator GlobalNamespace::IMultiplayerSpectatingSpot() noexcept {
      return *reinterpret_cast<GlobalNamespace::IMultiplayerSpectatingSpot*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_hasBeenRemovedEvent(System.Action`1<IMultiplayerSpectatingSpot> value)
    // Offset: 0x1043400
    void add_hasBeenRemovedEvent_NEW(System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>* value);
    // public System.Void remove_hasBeenRemovedEvent(System.Action`1<IMultiplayerSpectatingSpot> value)
    // Offset: 0x10434A4
    void remove_hasBeenRemovedEvent_NEW(System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>* value);
    // public System.Void add_isObservedChangedEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x103F3B8
    void add_isObservedChangedEvent(System::Action_1<bool>* value);
    // public System.Void remove_isObservedChangedEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x103F654
    void remove_isObservedChangedEvent(System::Action_1<bool>* value);
    // public IMultiplayerObservable get_observable()
    // Offset: 0x1043548
    GlobalNamespace::IMultiplayerObservable* get_observable_NEW();
    // private System.Void set_observable(IMultiplayerObservable value)
    // Offset: 0x1043550
    void set_observable(GlobalNamespace::IMultiplayerObservable* value);
    // public System.String get_spotName()
    // Offset: 0x1043558
    ::Il2CppString* get_spotName_NEW();
    // public System.Boolean get_isMain()
    // Offset: 0x104360C
    bool get_isMain_NEW();
    // protected System.Void Start()
    // Offset: 0x1043614
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x10437F8
    void OnDestroy();
    // public System.Void SetIsObserved(System.Boolean isObserved)
    // Offset: 0x104399C
    void SetIsObserved_NEW(bool isObserved);
    // private System.Void ReloadBasedOnPlayerCurrentState(IConnectedPlayer connectedPlayer)
    // Offset: 0x1043A10
    void ReloadBasedOnPlayerCurrentState(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // private System.Void HandlePlayerStateChanged(IConnectedPlayer connectedPlayer)
    // Offset: 0x1043BA8
    void HandlePlayerStateChanged(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // private System.Void HandlePlayerDisconnected(IConnectedPlayer connectedPlayer)
    // Offset: 0x1043BAC
    void HandlePlayerDisconnected(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // private UnityEngine.Transform IMultiplayerSpectatingSpot.get_transform()
    // Offset: 0x1043BB8
    UnityEngine::Transform* IMultiplayerSpectatingSpot_get_transform_NEW();
    // public System.Void .ctor()
    // Offset: 0x1043BB0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerSpectatingSpot* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerSpectatingSpot*, creationType>()));
    }
  }; // MultiplayerConnectedPlayerSpectatingSpot
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerConnectedPlayerSpectatingSpot), 72 + sizeof(bool)> __GlobalNamespace_MultiplayerConnectedPlayerSpectatingSpotSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerSpectatingSpot) == 0x49);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*, "", "MultiplayerConnectedPlayerSpectatingSpot");
