// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerDataFileManagerSO
  class PlayerDataFileManagerSO;
  // Forward declaring type: PlayerData
  class PlayerData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayerDataModel
  class PlayerDataModel : public UnityEngine::MonoBehaviour {
    public:
    // private PlayerDataFileManagerSO _playerDataFileManager
    // Offset: 0x18
    GlobalNamespace::PlayerDataFileManagerSO* playerDataFileManager;
    // private PlayerData _playerData
    // Offset: 0x20
    GlobalNamespace::PlayerData* playerData;
    // public PlayerData get_playerData()
    // Offset: 0x19227D8
    GlobalNamespace::PlayerData* get_playerData();
    // protected System.Void OnEnable()
    // Offset: 0x19227E0
    void OnEnable();
    // protected System.Void OnApplicationPause(System.Boolean pauseStatus)
    // Offset: 0x192281C
    void OnApplicationPause(bool pauseStatus);
    // protected System.Void OnDisable()
    // Offset: 0x1922828
    void OnDisable();
    // public System.Void ResetData()
    // Offset: 0x192282C
    void ResetData();
    // public System.Void Save()
    // Offset: 0x1916A34
    void Save();
    // public System.Void Load()
    // Offset: 0x19227E4
    void Load();
    // public System.Void .ctor()
    // Offset: 0x1922864
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PlayerDataModel* New_ctor();
  }; // PlayerDataModel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerDataModel*, "", "PlayerDataModel");
#pragma pack(pop)
