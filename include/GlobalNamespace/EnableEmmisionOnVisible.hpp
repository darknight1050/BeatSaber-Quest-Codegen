// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.ParticleSystem
#include "UnityEngine/ParticleSystem.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: EnableEmmisionOnVisible
  class EnableEmmisionOnVisible : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.ParticleSystem[] _particleSystems
    // Offset: 0x18
    ::Array<UnityEngine::ParticleSystem*>* particleSystems;
    // private UnityEngine.ParticleSystem/EmissionModule[] _emmisionModules
    // Offset: 0x20
    ::Array<UnityEngine::ParticleSystem::EmissionModule>* emmisionModules;
    // protected System.Void Awake()
    // Offset: 0xC0CE14
    void Awake();
    // protected System.Void OnBecameVisible()
    // Offset: 0xC0CF34
    void OnBecameVisible();
    // protected System.Void OnBecameInvisible()
    // Offset: 0xC0CFBC
    void OnBecameInvisible();
    // public System.Void .ctor()
    // Offset: 0xC0D044
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static EnableEmmisionOnVisible* New_ctor();
  }; // EnableEmmisionOnVisible
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnableEmmisionOnVisible*, "", "EnableEmmisionOnVisible");
#pragma pack(pop)
