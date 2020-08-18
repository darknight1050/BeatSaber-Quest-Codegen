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
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FlyingCar
  class FlyingCar : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _startZ
    // Offset: 0x18
    float startZ;
    // private System.Single _endZ
    // Offset: 0x1C
    float endZ;
    // private System.Single _speed
    // Offset: 0x20
    float speed;
    // private System.Single _progress
    // Offset: 0x24
    float progress;
    // private UnityEngine.Vector3 _pos
    // Offset: 0x28
    UnityEngine::Vector3 pos;
    // protected System.Void Start()
    // Offset: 0x1934250
    void Start();
    // protected System.Void Update()
    // Offset: 0x19343B0
    void Update();
    // protected System.Void UpdatePos()
    // Offset: 0x1934300
    void UpdatePos();
    // public System.Void .ctor()
    // Offset: 0x1934474
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static FlyingCar* New_ctor();
  }; // FlyingCar
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlyingCar*, "", "FlyingCar");
#pragma pack(pop)
