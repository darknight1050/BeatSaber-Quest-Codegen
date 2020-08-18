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
  // Forward declaring type: FullVRControllersRecorder
  class FullVRControllersRecorder;
  // Forward declaring type: PlayerController
  class PlayerController;
  // Forward declaring type: VRController
  class VRController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OverridePlayerTransformsFromFullVRControllersRecorder
  class OverridePlayerTransformsFromFullVRControllersRecorder : public UnityEngine::MonoBehaviour {
    public:
    // private FullVRControllersRecorder _fullVRControllersRecorder
    // Offset: 0x18
    GlobalNamespace::FullVRControllersRecorder* fullVRControllersRecorder;
    // private PlayerController _playerController
    // Offset: 0x20
    GlobalNamespace::PlayerController* playerController;
    // protected System.Void Start()
    // Offset: 0x1914A58
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1914AEC
    void OnDestroy();
    // private System.Void HandleFullVRControllersRecorderDidSetControllerTransform(VRController controller)
    // Offset: 0x1914BC8
    void HandleFullVRControllersRecorderDidSetControllerTransform(GlobalNamespace::VRController* controller);
    // public System.Void .ctor()
    // Offset: 0x1914CE8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OverridePlayerTransformsFromFullVRControllersRecorder* New_ctor();
  }; // OverridePlayerTransformsFromFullVRControllersRecorder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OverridePlayerTransformsFromFullVRControllersRecorder*, "", "OverridePlayerTransformsFromFullVRControllersRecorder");
#pragma pack(pop)
