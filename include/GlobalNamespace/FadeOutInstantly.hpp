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
  // Forward declaring type: FadeInOutController
  class FadeInOutController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FadeOutInstantly
  class FadeOutInstantly : public UnityEngine::MonoBehaviour {
    public:
    // private FadeInOutController _fadeInOut
    // Offset: 0x18
    GlobalNamespace::FadeInOutController* fadeInOut;
    // protected System.Void Start()
    // Offset: 0x1864FF8
    void Start();
    // public System.Void .ctor()
    // Offset: 0x1865014
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static FadeOutInstantly* New_ctor();
  }; // FadeOutInstantly
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FadeOutInstantly*, "", "FadeOutInstantly");
#pragma pack(pop)
