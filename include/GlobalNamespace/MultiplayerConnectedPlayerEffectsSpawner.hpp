// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteDebrisSpawner
  class NoteDebrisSpawner;
  // Forward declaring type: BombExplosionEffect
  class BombExplosionEffect;
  // Forward declaring type: IConnectedPlayerNoteEventManager
  class IConnectedPlayerNoteEventManager;
  // Forward declaring type: NoteCutInfoNetSerializable
  class NoteCutInfoNetSerializable;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerConnectedPlayerEffectsSpawner
  // [] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerEffectsSpawner : public UnityEngine::MonoBehaviour {
    public:
    // private NoteDebrisSpawner _noteDebrisSpawner
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::NoteDebrisSpawner* noteDebrisSpawner;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteDebrisSpawner*) == 0x8);
    // private BombExplosionEffect _bombExplosionEffect
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BombExplosionEffect* bombExplosionEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BombExplosionEffect*) == 0x8);
    // [InjectAttribute] Offset: 0xD263F8
    // private readonly IConnectedPlayerNoteEventManager _noteEventManager
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IConnectedPlayerNoteEventManager* noteEventManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IConnectedPlayerNoteEventManager*) == 0x8);
    // Creating value type constructor for type: MultiplayerConnectedPlayerEffectsSpawner
    MultiplayerConnectedPlayerEffectsSpawner(GlobalNamespace::NoteDebrisSpawner* noteDebrisSpawner_ = {}, GlobalNamespace::BombExplosionEffect* bombExplosionEffect_ = {}, GlobalNamespace::IConnectedPlayerNoteEventManager* noteEventManager_ = {}) noexcept : noteDebrisSpawner{noteDebrisSpawner_}, bombExplosionEffect{bombExplosionEffect_}, noteEventManager{noteEventManager_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x103EA08
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x103EAF8
    void OnDestroy();
    // private System.Void HandleNoteEventManagerConnectedPlayerNoteWasCut(NoteCutInfoNetSerializable noteCutInfo)
    // Offset: 0x103EBF8
    void HandleNoteEventManagerConnectedPlayerNoteWasCut(GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo);
    // public System.Void .ctor()
    // Offset: 0x103EDF4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerEffectsSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerEffectsSpawner*, creationType>()));
    }
  }; // MultiplayerConnectedPlayerEffectsSpawner
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerConnectedPlayerEffectsSpawner), 40 + sizeof(GlobalNamespace::IConnectedPlayerNoteEventManager*)> __GlobalNamespace_MultiplayerConnectedPlayerEffectsSpawnerSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerEffectsSpawner) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner*, "", "MultiplayerConnectedPlayerEffectsSpawner");
