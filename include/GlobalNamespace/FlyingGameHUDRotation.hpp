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
  // Forward declaring type: BeatLineManager
  class BeatLineManager;
  // Forward declaring type: EnvironmentSpawnRotation
  class EnvironmentSpawnRotation;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FlyingGameHUDRotation
  class FlyingGameHUDRotation : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _smooth
    // Offset: 0x18
    float smooth;
    // private BeatLineManager _beatLineManager
    // Offset: 0x20
    GlobalNamespace::BeatLineManager* beatLineManager;
    // private EnvironmentSpawnRotation _environmentSpawnRotation
    // Offset: 0x28
    GlobalNamespace::EnvironmentSpawnRotation* environmentSpawnRotation;
    // private System.Single _yAngle
    // Offset: 0x30
    float yAngle;
    // protected System.Void Start()
    // Offset: 0x1934490
    void Start();
    // protected System.Void Update()
    // Offset: 0x193450C
    void Update();
    // public System.Void .ctor()
    // Offset: 0x19346F8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static FlyingGameHUDRotation* New_ctor();
  }; // FlyingGameHUDRotation
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlyingGameHUDRotation*, "", "FlyingGameHUDRotation");
#pragma pack(pop)
