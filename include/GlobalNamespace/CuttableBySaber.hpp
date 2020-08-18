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
  // Forward declaring type: Saber
  class Saber;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CuttableBySaber
  class CuttableBySaber : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::CuttableBySaber::WasCutBySaberDelegate
    class WasCutBySaberDelegate;
    // private CuttableBySaber/WasCutBySaberDelegate wasCutBySaberEvent
    // Offset: 0x18
    GlobalNamespace::CuttableBySaber::WasCutBySaberDelegate* wasCutBySaberEvent;
    // public System.Void add_wasCutBySaberEvent(CuttableBySaber/WasCutBySaberDelegate value)
    // Offset: 0x19294C4
    void add_wasCutBySaberEvent(GlobalNamespace::CuttableBySaber::WasCutBySaberDelegate* value);
    // public System.Void remove_wasCutBySaberEvent(CuttableBySaber/WasCutBySaberDelegate value)
    // Offset: 0x1929568
    void remove_wasCutBySaberEvent(GlobalNamespace::CuttableBySaber::WasCutBySaberDelegate* value);
    // protected System.Void CallWasCutBySaberEvent(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec)
    // Offset: 0x192960C
    void CallWasCutBySaberEvent(GlobalNamespace::Saber* saber, UnityEngine::Vector3 cutPoint, UnityEngine::Quaternion orientation, UnityEngine::Vector3 cutDirVec);
    // public System.Boolean get_canBeCut()
    // Offset: 0xFFFFFFFF
    bool get_canBeCut();
    // public System.Void set_canBeCut(System.Boolean value)
    // Offset: 0xFFFFFFFF
    void set_canBeCut(bool value);
    // public System.Single get_radius()
    // Offset: 0xFFFFFFFF
    float get_radius();
    // public System.Void Cut(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec)
    // Offset: 0xFFFFFFFF
    void Cut(GlobalNamespace::Saber* saber, UnityEngine::Vector3 cutPoint, UnityEngine::Quaternion orientation, UnityEngine::Vector3 cutDirVec);
    // protected System.Void .ctor()
    // Offset: 0x1929BE0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static CuttableBySaber* New_ctor();
  }; // CuttableBySaber
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CuttableBySaber*, "", "CuttableBySaber");
#pragma pack(pop)
