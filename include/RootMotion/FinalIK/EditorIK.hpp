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
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IK
  class IK;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.EditorIK
  class EditorIK : public UnityEngine::MonoBehaviour {
    public:
    // private RootMotion.FinalIK.IK ik
    // Offset: 0x18
    RootMotion::FinalIK::IK* ik;
    // private System.Void Start()
    // Offset: 0x1309378
    void Start();
    // private System.Void Update()
    // Offset: 0x1309420
    void Update();
    // public System.Void .ctor()
    // Offset: 0x13094F0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static EditorIK* New_ctor();
  }; // RootMotion.FinalIK.EditorIK
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::EditorIK*, "RootMotion.FinalIK", "EditorIK");
#pragma pack(pop)
