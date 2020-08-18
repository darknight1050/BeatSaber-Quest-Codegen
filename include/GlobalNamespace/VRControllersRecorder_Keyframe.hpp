// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: VRControllersRecorder
#include "GlobalNamespace/VRControllersRecorder.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: VRControllersRecorder/Keyframe
  class VRControllersRecorder::Keyframe : public ::Il2CppObject {
    public:
    // public UnityEngine.Vector3 _pos1
    // Offset: 0x10
    UnityEngine::Vector3 pos1;
    // public UnityEngine.Vector3 _pos2
    // Offset: 0x1C
    UnityEngine::Vector3 pos2;
    // public UnityEngine.Vector3 _pos3
    // Offset: 0x28
    UnityEngine::Vector3 pos3;
    // public UnityEngine.Quaternion _rot1
    // Offset: 0x34
    UnityEngine::Quaternion rot1;
    // public UnityEngine.Quaternion _rot2
    // Offset: 0x44
    UnityEngine::Quaternion rot2;
    // public UnityEngine.Quaternion _rot3
    // Offset: 0x54
    UnityEngine::Quaternion rot3;
    // public System.Single _time
    // Offset: 0x64
    float time;
    // public System.Void .ctor()
    // Offset: 0x196B5DC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static VRControllersRecorder::Keyframe* New_ctor();
  }; // VRControllersRecorder/Keyframe
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRControllersRecorder::Keyframe*, "", "VRControllersRecorder/Keyframe");
#pragma pack(pop)
