// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRInput/RawButton
#include "GlobalNamespace/OVRInput_RawButton.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRResetOrientation
  class OVRResetOrientation : public UnityEngine::MonoBehaviour {
    public:
    // public OVRInput/RawButton resetButton
    // Offset: 0x18
    GlobalNamespace::OVRInput::RawButton resetButton;
    // private System.Void Update()
    // Offset: 0xEA8D14
    void Update();
    // public System.Void .ctor()
    // Offset: 0xEA8E0C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRResetOrientation* New_ctor();
  }; // OVRResetOrientation
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRResetOrientation*, "", "OVRResetOrientation");
#pragma pack(pop)
